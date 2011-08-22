

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkOBJReaderDotNet.h"

// native includes
#include "strstream"
#include "vtkOBJReader.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkOBJReader::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkOBJReader>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkOBJReader::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkOBJReader>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkOBJReader^ vtkOBJReader::NewInstance()
{
  ::vtkOBJReader* retVal = static_cast<::vtkOBJReader*>(vtk::ConvertManagedToNative<::vtkOBJReader>(m_instance)->NewInstance());
  return gcnew vtkOBJReader(IntPtr(retVal), false);
}



vtkOBJReader^ vtkOBJReader::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkOBJReader* retVal = static_cast<::vtkOBJReader*>(::vtkOBJReader::SafeDownCast(oWrap));
  return gcnew vtkOBJReader(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkOBJReader::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkOBJReader>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkOBJReader::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkOBJReader>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkOBJReader::SetFileName(System::String^ arg0)
{
  char* arg0Wrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(arg0).ToPointer());
  vtk::ConvertManagedToNative<::vtkOBJReader>(m_instance)->SetFileName(arg0Wrap);
  arg0->Remove(0,arg0->Length);
  arg0->Insert(0,System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(arg0Wrap)));
System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(arg0Wrap));
}



System::String^ vtkOBJReader::GetFileName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkOBJReader>(m_instance)->GetFileName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



  vtkOBJReader::vtkOBJReader(System::IntPtr native, bool bConst) : vtkPolyDataAlgorithm(native, bConst) {}



  vtkOBJReader::vtkOBJReader(bool donothing) : vtkPolyDataAlgorithm(donothing) {}



  vtkOBJReader::vtkOBJReader() : vtkPolyDataAlgorithm(false) {
  this->SetNativePointer(IntPtr(::vtkOBJReader::New()));
}



  vtkOBJReader::~vtkOBJReader() { }





} // end namespace vtkIO
