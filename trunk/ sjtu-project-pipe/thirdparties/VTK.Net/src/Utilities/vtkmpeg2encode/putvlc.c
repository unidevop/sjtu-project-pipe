/* putvlc.c, generation of variable length codes                            */

/* Copyright (C) 1996, MPEG Software Simulation Group. All Rights Reserved. */

/*
 * Disclaimer of Warranty
 *
 * These software programs are available to the user without any license fee or
 * royalty on an "as is" basis.  The MPEG Software Simulation Group disclaims
 * any and all warranties, whether express, implied, or statuary, including any
 * implied warranties or merchantability or of fitness for a particular
 * purpose.  In no event shall the copyright-holder be liable for any
 * incidental, punitive, or consequential damages of any kind whatsoever
 * arising from the use of these programs.
 *
 * This disclaimer of warranty extends to the user of these programs and user's
 * customers, employees, agents, transferees, successors, and assigns.
 *
 * The MPEG Software Simulation Group does not represent or warrant that the
 * programs furnished hereunder are free of infringement of any third-party
 * patents.
 *
 * Commercial implementations of MPEG-1 and MPEG-2 video, including shareware,
 * are subject to royalty fees to patent holders.  Many of these patents are
 * general enough such that they are unavoidable regardless of implementation
 * design.
 *
 */

#include <stdio.h>

#include "mpeg2enc_config.h"
#include "mpeg2enc_global.h"
#include "vlc.h"

/* private prototypes */
static void putDC _ANSI_ARGS_((sVLCtable *tab, int val,struct MPEG2_structure *mpeg2_struct));

/* generate variable length code for luminance DC coefficient */
void MPEG2_putDClum(val,mpeg2_struct)
int val;
struct MPEG2_structure *mpeg2_struct;
{
  putDC(DClumtab,val,mpeg2_struct);
}

/* generate variable length code for chrominance DC coefficient */
void MPEG2_putDCchrom(val,mpeg2_struct)
int val;
struct MPEG2_structure *mpeg2_struct;
{
  putDC(DCchromtab,val,mpeg2_struct);
}

/* generate variable length code for DC coefficient (7.2.1) */
static void putDC(tab,val,mpeg2_struct)
sVLCtable *tab;
int val;
struct MPEG2_structure *mpeg2_struct;
{
  int absval, size;

  absval = (val<0) ? -val : val; /* abs(val) */

  if (absval>2047 || (mpeg2_struct->mpeg1 && absval>255))
  {
    /* should never happen */
    sprintf(mpeg2_struct->errortext,"DC value out of range (%d)\n",val);
    (*(mpeg2_struct->report_error))(mpeg2_struct->errortext);
  }

  /* compute dct_dc_size */
  size = 0;

  while (absval)
  {
    absval >>= 1;
    size++;
  }

  /* generate VLC for dct_dc_size (Table B-12 or B-13) */
  MPEG2_putbits(tab[size].code,tab[size].len,mpeg2_struct);

  /* append fixed length code (dc_dct_differential) */
  if (size!=0)
  {
    if (val>=0)
      absval = val;
    else
      absval = val + (1<<size) - 1; /* val + (2 ^ size) - 1 */
    MPEG2_putbits(absval,size,mpeg2_struct);
  }
}

/* generate variable length code for first coefficient
 * of a non-intra block (7.2.2.2) */
void MPEG2_putACfirst(run,val,mpeg2_struct)
int run,val;
struct MPEG2_structure *mpeg2_struct;
{
  if (run==0 && (val==1 || val==-1)) /* these are treated differently */
    MPEG2_putbits(2|(val<0),2,mpeg2_struct); /* generate '1s' (s=sign), (Table B-14, line 2) */
  else
    MPEG2_putAC(run,val,0,mpeg2_struct); /* no difference for all others */
}

/* generate variable length code for other DCT coefficients (7.2.2) */
void MPEG2_putAC(run,signed_level,vlcformat,mpeg2_struct)
int run,signed_level,vlcformat;
struct MPEG2_structure *mpeg2_struct;
{
  int level, len;
  VLCtable *ptab;

  level = (signed_level<0) ? -signed_level : signed_level; /* abs(signed_level) */

  /* make sure run and level are valid */
  if (run<0 || run>63 || level==0 || level>2047 || (mpeg2_struct->mpeg1 && level>255))
  {
    sprintf(mpeg2_struct->errortext,"AC value out of range (run=%d, signed_level=%d)\n",
      run,signed_level);
    (*(mpeg2_struct->report_error))(mpeg2_struct->errortext);
  }

  len = 0;

  if (run<2 && level<41)
  {
    /* vlcformat selects either of Table B-14 / B-15 */
    if (vlcformat)
      ptab = &dct_code_tab1a[run][level-1];
    else
      ptab = &dct_code_tab1[run][level-1];

    len = ptab->len;
  }
  else if (run<32 && level<6)
  {
    /* vlcformat selects either of Table B-14 / B-15 */
    if (vlcformat)
      ptab = &dct_code_tab2a[run-2][level-1];
    else
      ptab = &dct_code_tab2[run-2][level-1];

    len = ptab->len;
  }

  if (len!=0) /* a VLC code exists */
  {
    MPEG2_putbits(ptab->code,len,mpeg2_struct);
    MPEG2_putbits(signed_level<0,1,mpeg2_struct); /* sign */
  }
  else
  {
    /* no VLC for this (run, level) combination: use escape coding (7.2.2.3) */
    MPEG2_putbits(1l,6,mpeg2_struct); /* Escape */
    MPEG2_putbits(run,6,mpeg2_struct); /* 6 bit code for run */
    if (mpeg2_struct->mpeg1)
    {
      /* ISO/IEC 11172-2 uses a 8 or 16 bit code */
      if (signed_level>127)
        MPEG2_putbits(0,8,mpeg2_struct);
      if (signed_level<-127)
        MPEG2_putbits(128,8,mpeg2_struct);
      MPEG2_putbits(signed_level,8,mpeg2_struct);
    }
    else
    {
      /* ISO/IEC 13818-2 uses a 12 bit code, Table B-16 */
      MPEG2_putbits(signed_level,12,mpeg2_struct);
    }
  }
}

/* generate variable length code for macroblock_address_increment (6.3.16) */
void MPEG2_putaddrinc(addrinc,mpeg2_struct)
int addrinc;
struct MPEG2_structure *mpeg2_struct;
{
  while (addrinc>33)
  {
    MPEG2_putbits(0x08,11,mpeg2_struct); /* macroblock_escape */
    addrinc-= 33;
  }

  MPEG2_putbits(addrinctab[addrinc-1].code,addrinctab[addrinc-1].len,mpeg2_struct);
}

/* generate variable length code for macroblock_type (6.3.16.1) */
void MPEG2_putmbtype( int pict_type, int mb_type,struct MPEG2_structure *mpeg2_struct )
{
  MPEG2_putbits(mbtypetab[pict_type-1][mb_type].code,
          mbtypetab[pict_type-1][mb_type].len,mpeg2_struct);
}

/* generate variable length code for motion_code (6.3.16.3) */
void MPEG2_putmotioncode(motion_code,mpeg2_struct)
int motion_code;
struct MPEG2_structure *mpeg2_struct;
{
  int abscode;

  abscode = (motion_code>=0) ? motion_code : -motion_code; /* abs(motion_code) */
  MPEG2_putbits(motionvectab[abscode].code,motionvectab[abscode].len,mpeg2_struct);
  if (motion_code!=0)
    MPEG2_putbits(motion_code<0,1,mpeg2_struct); /* sign, 0=positive, 1=negative */
}

/* generate variable length code for dmvector[t] (6.3.16.3), Table B-11 */
void MPEG2_putdmv(dmv,mpeg2_struct)
int dmv;
struct MPEG2_structure *mpeg2_struct;
{
  if (dmv==0)
    MPEG2_putbits(0,1,mpeg2_struct);
  else if (dmv>0)
    MPEG2_putbits(2,2,mpeg2_struct);
  else
    MPEG2_putbits(3,2,mpeg2_struct);
}

/* generate variable length code for coded_block_pattern (6.3.16.4)
 *
 * 4:2:2, 4:4:4 not implemented
 */
void MPEG2_putcbp(cbp,mpeg2_struct)
int cbp;
struct MPEG2_structure *mpeg2_struct;
{
  MPEG2_putbits(cbptable[cbp].code,cbptable[cbp].len,mpeg2_struct);
}
