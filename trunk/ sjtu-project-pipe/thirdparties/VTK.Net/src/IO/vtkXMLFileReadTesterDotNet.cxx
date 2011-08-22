

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkXMLFileReadTesterDotNet.h"

// native includes
#include "strstream"
#include "vtkXMLFileReadTester.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkXMLFileReadTester::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkXMLFileReadTester>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkXMLFileReadTester::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkXMLFileReadTester>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkXMLFileReadTester^ vtkXMLFileReadTester::NewInstance()
{
  ::vtkXMLFileReadTester* retVal = static_cast<::vtkXMLFileReadTester*>(vtk::ConvertManagedToNative<::vtkXMLFileReadTester>(m_instance)->NewInstance());
  return gcnew vtkXMLFileReadTester(IntPtr(retVal), false);
}



vtkXMLFileReadTester^ vtkXMLFileReadTester::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkXMLFileReadTester* retVal = static_cast<::vtkXMLFileReadTester*>(::vtkXMLFileReadTester::SafeDownCast(oWrap));
  return gcnew vtkXMLFileReadTester(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkXMLFileReadTester::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkXMLFileReadTester>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkXMLFileReadTester::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkXMLFileReadTester>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




int vtkXMLFileReadTester::TestReadFile()
{
  int retVal = vtk::ConvertManagedToNative<::vtkXMLFileReadTester>(m_instance)->TestReadFile();
  return retVal;
}



void vtkXMLFileReadTester::SetFileName(System::String^ arg0)
{
  char* arg0Wrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(arg0).ToPointer());
  vtk::ConvertManagedToNative<::vtkXMLFileReadTester>(m_instance)->SetFileName(arg0Wrap);
  arg0->Remove(0,arg0->Length);
  arg0->Insert(0,System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(arg0Wrap)));
System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(arg0Wrap));
}



System::String^ vtkXMLFileReadTester::GetFileName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkXMLFileReadTester>(m_instance)->GetFileName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



System::String^ vtkXMLFileReadTester::GetFileDataType()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkXMLFileReadTester>(m_instance)->GetFileDataType();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



System::String^ vtkXMLFileReadTester::GetFileVersion()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkXMLFileReadTester>(m_instance)->GetFileVersion();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



  vtkXMLFileReadTester::vtkXMLFileReadTester(System::IntPtr native, bool bConst) : vtkXMLParser(native, bConst) {}



  vtkXMLFileReadTester::vtkXMLFileReadTester(bool donothing) : vtkXMLParser(donothing) {}



  vtkXMLFileReadTester::vtkXMLFileReadTester() : vtkXMLParser(false) {
  this->SetNativePointer(IntPtr(::vtkXMLFileReadTester::New()));
}



  vtkXMLFileReadTester::~vtkXMLFileReadTester() { }





} // end namespace vtkIO
