#ifndef _mpeg2encDllConfig_h
#define _mpeg2encDllConfig_h

/* Defined if this library is built static.  */
/* #undef VTK_MPEG2ENC_STATIC */

/* VTK_IN_MPEG2ENC is defined when building source files in this library.  */
#if defined(VTK_IN_MPEG2ENC)
  /* Disable warnings from mpeg2enc so we do not have to change code.  */
# if defined(_MSC_VER)
#  pragma warning (disable: 4131) /* old-style declarator */
#  pragma warning (disable: 4244) /* conversion with loss of data */
#  pragma warning (disable: 4701) /* local variable used uninitialized */
#  pragma warning (disable: 4706) /* assignment within conditional */
# endif
#endif

#endif