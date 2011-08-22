

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkCullerDotNet.h"

// native includes
#include "strstream"
#include "vtkCuller.h"

using namespace System;

namespace vtk {

System::String^ vtkCuller::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkCuller>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkCuller::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkCuller>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkCuller^ vtkCuller::NewInstance()
{
  ::vtkCuller* retVal = static_cast<::vtkCuller*>(vtk::ConvertManagedToNative<::vtkCuller>(m_instance)->NewInstance());
  return gcnew vtkCuller(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkCuller::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkCuller>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkCuller::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkCuller>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




  vtkCuller::vtkCuller(System::IntPtr native, bool bConst) : vtkObject(native, bConst) {}



  vtkCuller::vtkCuller(bool donothing) : vtkObject(donothing) {}



  vtkCuller::vtkCuller() : vtkObject(false) {
  this->SetNativePointer(IntPtr(::vtkCuller::New()));
}



  vtkCuller::~vtkCuller() { }





} // end namespace vtkRendering
