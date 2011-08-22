

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkXMLParserDotNet.h"

// native includes
#include "strstream"
#include "vtkXMLParser.h"

using namespace System;

namespace vtk {

System::String^ vtkXMLParser::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkXMLParser>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkXMLParser::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkXMLParser>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkXMLParser^ vtkXMLParser::NewInstance()
{
  ::vtkXMLParser* retVal = static_cast<::vtkXMLParser*>(vtk::ConvertManagedToNative<::vtkXMLParser>(m_instance)->NewInstance());
  return gcnew vtkXMLParser(IntPtr(retVal), false);
}



vtkXMLParser^ vtkXMLParser::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkXMLParser* retVal = static_cast<::vtkXMLParser*>(::vtkXMLParser::SafeDownCast(oWrap));
  return gcnew vtkXMLParser(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkXMLParser::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkXMLParser>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkXMLParser::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkXMLParser>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




long vtkXMLParser::TellG()
{
  long retVal = vtk::ConvertManagedToNative<::vtkXMLParser>(m_instance)->TellG();
  return retVal;
}



void vtkXMLParser::SeekG(long position)
{
  vtk::ConvertManagedToNative<::vtkXMLParser>(m_instance)->SeekG(position);
}



int vtkXMLParser::Parse()
{
  int retVal = vtk::ConvertManagedToNative<::vtkXMLParser>(m_instance)->Parse();
  return retVal;
}



int vtkXMLParser::Parse(System::String^ inputString)
{
  char* inputStringWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(inputString).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkXMLParser>(m_instance)->Parse(inputStringWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(inputStringWrap));
  return retVal;
}



int vtkXMLParser::Parse(System::String^ inputString, unsigned int length)
{
  char* inputStringWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(inputString).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkXMLParser>(m_instance)->Parse(inputStringWrap, length);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(inputStringWrap));
  return retVal;
}



int vtkXMLParser::InitializeParser()
{
  int retVal = vtk::ConvertManagedToNative<::vtkXMLParser>(m_instance)->InitializeParser();
  return retVal;
}



int vtkXMLParser::ParseChunk(System::String^ inputString, unsigned int length)
{
  char* inputStringWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(inputString).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkXMLParser>(m_instance)->ParseChunk(inputStringWrap, length);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(inputStringWrap));
  return retVal;
}



int vtkXMLParser::CleanupParser()
{
  int retVal = vtk::ConvertManagedToNative<::vtkXMLParser>(m_instance)->CleanupParser();
  return retVal;
}



void vtkXMLParser::SetFileName(System::String^ arg0)
{
  char* arg0Wrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(arg0).ToPointer());
  vtk::ConvertManagedToNative<::vtkXMLParser>(m_instance)->SetFileName(arg0Wrap);
  arg0->Remove(0,arg0->Length);
  arg0->Insert(0,System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(arg0Wrap)));
System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(arg0Wrap));
}



System::String^ vtkXMLParser::GetFileName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkXMLParser>(m_instance)->GetFileName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



  vtkXMLParser::vtkXMLParser(System::IntPtr native, bool bConst) : vtkObject(native, bConst) {}



  vtkXMLParser::vtkXMLParser(bool donothing) : vtkObject(donothing) {}



  vtkXMLParser::vtkXMLParser() : vtkObject(false) {
  this->SetNativePointer(IntPtr(::vtkXMLParser::New()));
}



  vtkXMLParser::~vtkXMLParser() { }





} // end namespace vtkIO
