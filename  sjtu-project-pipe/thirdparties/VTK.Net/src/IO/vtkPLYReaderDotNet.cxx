

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkPLYReaderDotNet.h"

// native includes
#include "strstream"
#include "vtkPLYReader.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkPLYReader::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkPLYReader>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkPLYReader::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkPLYReader>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkPLYReader^ vtkPLYReader::NewInstance()
{
  ::vtkPLYReader* retVal = static_cast<::vtkPLYReader*>(vtk::ConvertManagedToNative<::vtkPLYReader>(m_instance)->NewInstance());
  return gcnew vtkPLYReader(IntPtr(retVal), false);
}



vtkPLYReader^ vtkPLYReader::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkPLYReader* retVal = static_cast<::vtkPLYReader*>(::vtkPLYReader::SafeDownCast(oWrap));
  return gcnew vtkPLYReader(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkPLYReader::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkPLYReader>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkPLYReader::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkPLYReader>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkPLYReader::SetFileName(System::String^ arg0)
{
  char* arg0Wrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(arg0).ToPointer());
  vtk::ConvertManagedToNative<::vtkPLYReader>(m_instance)->SetFileName(arg0Wrap);
  arg0->Remove(0,arg0->Length);
  arg0->Insert(0,System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(arg0Wrap)));
System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(arg0Wrap));
}



System::String^ vtkPLYReader::GetFileName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkPLYReader>(m_instance)->GetFileName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



  vtkPLYReader::vtkPLYReader(System::IntPtr native, bool bConst) : vtkPolyDataAlgorithm(native, bConst) {}



  vtkPLYReader::vtkPLYReader(bool donothing) : vtkPolyDataAlgorithm(donothing) {}



  vtkPLYReader::vtkPLYReader() : vtkPolyDataAlgorithm(false) {
  this->SetNativePointer(IntPtr(::vtkPLYReader::New()));
}



  vtkPLYReader::~vtkPLYReader() { }





} // end namespace vtkIO
