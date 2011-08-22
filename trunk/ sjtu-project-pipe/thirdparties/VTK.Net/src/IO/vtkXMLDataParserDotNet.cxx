

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkXMLDataParserDotNet.h"
#include "vtkDataCompressorDotNet.h"
#include "vtkXMLDataElementDotNet.h"

// native includes
#include "strstream"
#include "vtkXMLDataParser.h"
#include "vtkDataCompressor.h"
#include "vtkObject.h"
#include "vtkXMLDataElement.h"

using namespace System;

namespace vtk {

System::String^ vtkXMLDataParser::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkXMLDataParser>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkXMLDataParser::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkXMLDataParser>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkXMLDataParser^ vtkXMLDataParser::NewInstance()
{
  ::vtkXMLDataParser* retVal = static_cast<::vtkXMLDataParser*>(vtk::ConvertManagedToNative<::vtkXMLDataParser>(m_instance)->NewInstance());
  return gcnew vtkXMLDataParser(IntPtr(retVal), false);
}



vtkXMLDataParser^ vtkXMLDataParser::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkXMLDataParser* retVal = static_cast<::vtkXMLDataParser*>(::vtkXMLDataParser::SafeDownCast(oWrap));
  return gcnew vtkXMLDataParser(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkXMLDataParser::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkXMLDataParser>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkXMLDataParser::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkXMLDataParser>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




vtkXMLDataElement^ vtkXMLDataParser::GetRootElement()
{
  ::vtkXMLDataElement* retVal = static_cast<::vtkXMLDataElement*>(vtk::ConvertManagedToNative<::vtkXMLDataParser>(m_instance)->GetRootElement());
  return gcnew vtkXMLDataElement(IntPtr(retVal), false);
}



void vtkXMLDataParser::SetCompressor(vtkDataCompressor^ arg0)
{
  ::vtkDataCompressor* arg0Wrap = vtk::ConvertManagedToNative<::vtkDataCompressor>(arg0->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkXMLDataParser>(m_instance)->SetCompressor(arg0Wrap);
}



vtkDataCompressor^ vtkXMLDataParser::GetCompressor()
{
  ::vtkDataCompressor* retVal = static_cast<::vtkDataCompressor*>(vtk::ConvertManagedToNative<::vtkXMLDataParser>(m_instance)->GetCompressor());
  return gcnew vtkDataCompressor(IntPtr(retVal), false);
}



unsigned long vtkXMLDataParser::GetWordTypeSize(int wordType)
{
  unsigned long retVal = vtk::ConvertManagedToNative<::vtkXMLDataParser>(m_instance)->GetWordTypeSize(wordType);
  return retVal;
}



int vtkXMLDataParser::Parse()
{
  int retVal = vtk::ConvertManagedToNative<::vtkXMLDataParser>(m_instance)->Parse();
  return retVal;
}



int vtkXMLDataParser::GetAbort()
{
  int retVal = vtk::ConvertManagedToNative<::vtkXMLDataParser>(m_instance)->GetAbort();
  return retVal;
}



void vtkXMLDataParser::SetAbort(int arg0)
{
  vtk::ConvertManagedToNative<::vtkXMLDataParser>(m_instance)->SetAbort(arg0);
}



float vtkXMLDataParser::GetProgress()
{
  float retVal = vtk::ConvertManagedToNative<::vtkXMLDataParser>(m_instance)->GetProgress();
  return retVal;
}



void vtkXMLDataParser::SetProgress(float arg0)
{
  vtk::ConvertManagedToNative<::vtkXMLDataParser>(m_instance)->SetProgress(arg0);
}



void vtkXMLDataParser::SetAttributesEncoding(int arg0)
{
  vtk::ConvertManagedToNative<::vtkXMLDataParser>(m_instance)->SetAttributesEncoding(arg0);
}



int vtkXMLDataParser::GetAttributesEncodingMinValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkXMLDataParser>(m_instance)->GetAttributesEncodingMinValue();
  return retVal;
}



int vtkXMLDataParser::GetAttributesEncodingMaxValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkXMLDataParser>(m_instance)->GetAttributesEncodingMaxValue();
  return retVal;
}



int vtkXMLDataParser::GetAttributesEncoding()
{
  int retVal = vtk::ConvertManagedToNative<::vtkXMLDataParser>(m_instance)->GetAttributesEncoding();
  return retVal;
}



  vtkXMLDataParser::vtkXMLDataParser(System::IntPtr native, bool bConst) : vtkXMLParser(native, bConst) {}



  vtkXMLDataParser::vtkXMLDataParser(bool donothing) : vtkXMLParser(donothing) {}



  vtkXMLDataParser::vtkXMLDataParser() : vtkXMLParser(false) {
  this->SetNativePointer(IntPtr(::vtkXMLDataParser::New()));
}



  vtkXMLDataParser::~vtkXMLDataParser() { }





} // end namespace vtkIO
