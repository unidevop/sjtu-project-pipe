#pragma once

// managed includes
#include "vtkXMLParserDotNet.h"

// native includes

using namespace System;

namespace vtk {

ref class vtkDataCompressor;
ref class vtkXMLDataElement;

public ref class vtkXMLDataParser : public vtkXMLParser
{

public:
  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkXMLDataParser *NewInstance ();
  vtkXMLDataParser^ NewInstance();


  // vtkXMLDataParser *SafeDownCast (vtkObject* o);
  static vtkXMLDataParser^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


// Did not wrap:  static vtkXMLDataParser *New ();


  // vtkXMLDataElement *GetRootElement ();
/// <summary>
/// <para>Get the root element from the XML document.</para>
/// </summary>
  vtkXMLDataElement^ GetRootElement();


  // virtual void SetCompressor (vtkDataCompressor *);
/// <summary>
/// <para>Get/Set the compressor used to decompress binary and appended data after reading from the file.</para>
/// </summary>
  void SetCompressor(vtkDataCompressor^ arg0);


  // vtkDataCompressor *GetCompressor ();
/// <summary>
/// <para>Get/Set the compressor used to decompress binary and appended data after reading from the file.</para>
/// </summary>
  vtkDataCompressor^ GetCompressor();


  // unsigned long GetWordTypeSize (int wordType);
/// <summary>
/// <para>Get the size of a word of the given type.</para>
/// </summary>
  unsigned long GetWordTypeSize(int wordType);


  // virtual int Parse ();
/// <summary>
/// <para>Parse the XML input and check that the file is safe to read. Returns 1 for okay, 0 for error.</para>
/// </summary>
  int Parse();


  // int GetAbort ();
/// <summary>
/// <para>Get/Set flag to abort reading of data.  This may be set by a progress event observer.</para>
/// </summary>
  int GetAbort();


  // void SetAbort (int );
/// <summary>
/// <para>Get/Set flag to abort reading of data.  This may be set by a progress event observer.</para>
/// </summary>
  void SetAbort(int arg0);


  // float GetProgress ();
/// <summary>
/// <para>Get/Set progress of reading data.  This may be checked by a progress event observer.</para>
/// </summary>
  float GetProgress();


  // void SetProgress (float );
/// <summary>
/// <para>Get/Set progress of reading data.  This may be checked by a progress event observer.</para>
/// </summary>
  void SetProgress(float arg0);


  // void SetAttributesEncoding (int );
/// <summary>
/// <para>Get/Set the character encoding that will be used to set the attributes's encoding type of each vtkXMLDataElement created by this parser (i.e., the data element attributes will use that encoding internally). If set to VTK_ENCODING_NONE (default), the attribute encoding type will not be changed and will default to the vtkXMLDataElement default encoding type (see vtkXMLDataElement::AttributeEncoding).</para>
/// </summary>
  void SetAttributesEncoding(int arg0);


  // int GetAttributesEncodingMinValue ();
/// <summary>
/// <para>Get/Set the character encoding that will be used to set the attributes's encoding type of each vtkXMLDataElement created by this parser (i.e., the data element attributes will use that encoding internally). If set to VTK_ENCODING_NONE (default), the attribute encoding type will not be changed and will default to the vtkXMLDataElement default encoding type (see vtkXMLDataElement::AttributeEncoding).</para>
/// </summary>
  int GetAttributesEncodingMinValue();


  // int GetAttributesEncodingMaxValue ();
/// <summary>
/// <para>Get/Set the character encoding that will be used to set the attributes's encoding type of each vtkXMLDataElement created by this parser (i.e., the data element attributes will use that encoding internally). If set to VTK_ENCODING_NONE (default), the attribute encoding type will not be changed and will default to the vtkXMLDataElement default encoding type (see vtkXMLDataElement::AttributeEncoding).</para>
/// </summary>
  int GetAttributesEncodingMaxValue();


  // int GetAttributesEncoding ();
/// <summary>
/// <para>Get/Set the character encoding that will be used to set the attributes's encoding type of each vtkXMLDataElement created by this parser (i.e., the data element attributes will use that encoding internally). If set to VTK_ENCODING_NONE (default), the attribute encoding type will not be changed and will default to the vtkXMLDataElement default encoding type (see vtkXMLDataElement::AttributeEncoding).</para>
/// </summary>
  int GetAttributesEncoding();


// Did not wrap:  vtkXMLDataParser ();


// Did not wrap:  ~vtkXMLDataParser ();


// Did not wrap:  virtual int Parse (const char *);


// Did not wrap:  virtual int Parse (const char *, unsigned int );


// Did not wrap:  void StartElement (const char *name, const char *atts);


// Did not wrap:  void EndElement (const char *);


// Did not wrap:  int ParsingComplete ();


// Did not wrap:  int CheckPrimaryAttributes ();


// Did not wrap:  void FindAppendedDataPosition ();


// Did not wrap:  OffsetType FindInlineDataPosition (OffsetType start);


// Did not wrap:  int ParseBuffer (const char *buffer, unsigned int count);


// Did not wrap:  void AddElement (vtkXMLDataElement *element);


// Did not wrap:  void PushOpenElement (vtkXMLDataElement *element);


// Did not wrap:  vtkXMLDataElement *PopOpenElement ();


// Did not wrap:  void FreeAllElements ();


// Did not wrap:  void PerformByteSwap (void *data, OffsetType numWords, int wordSize);


// Did not wrap:  void ReadCompressionHeader ();


// Did not wrap:  unsigned int FindBlockSize (unsigned int block);


// Did not wrap:  int ReadBlock (unsigned int block, unsigned char *buffer);


// Did not wrap:  unsigned char *ReadBlock (unsigned int block);


// Did not wrap:  OffsetType ReadUncompressedData (unsigned char *data, OffsetType startWord, OffsetType numWords, int wordSize);


// Did not wrap:  OffsetType ReadCompressedData (unsigned char *data, OffsetType startWord, OffsetType numWords, int wordSize);


// Did not wrap:  int ParseAsciiData (int wordType);


// Did not wrap:  void FreeAsciiBuffer ();


// Did not wrap:  void UpdateProgress (float progress);


// Did not wrap:  vtkXMLDataParser (const vtkXMLDataParser &);


// Did not wrap:  void vtkXMLDataParser 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkXMLDataParser(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkXMLDataParser(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkXMLDataParser();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkXMLDataParser();


};

} // end vtkIO
