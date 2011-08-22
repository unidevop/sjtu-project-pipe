

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkMultiThreaderDotNet.h"

// native includes
#include "strstream"
#include "vtkMultiThreader.h"

using namespace System;

namespace vtk {

System::String^ vtkMultiThreader::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkMultiThreader>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkMultiThreader::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkMultiThreader>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkMultiThreader^ vtkMultiThreader::NewInstance()
{
  ::vtkMultiThreader* retVal = static_cast<::vtkMultiThreader*>(vtk::ConvertManagedToNative<::vtkMultiThreader>(m_instance)->NewInstance());
  return gcnew vtkMultiThreader(IntPtr(retVal), false);
}



vtkMultiThreader^ vtkMultiThreader::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkMultiThreader* retVal = static_cast<::vtkMultiThreader*>(::vtkMultiThreader::SafeDownCast(oWrap));
  return gcnew vtkMultiThreader(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkMultiThreader::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkMultiThreader>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkMultiThreader::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkMultiThreader>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkMultiThreader::SetNumberOfThreads(int arg0)
{
  vtk::ConvertManagedToNative<::vtkMultiThreader>(m_instance)->SetNumberOfThreads(arg0);
}



int vtkMultiThreader::GetNumberOfThreadsMinValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkMultiThreader>(m_instance)->GetNumberOfThreadsMinValue();
  return retVal;
}



int vtkMultiThreader::GetNumberOfThreadsMaxValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkMultiThreader>(m_instance)->GetNumberOfThreadsMaxValue();
  return retVal;
}



int vtkMultiThreader::GetNumberOfThreads()
{
  int retVal = vtk::ConvertManagedToNative<::vtkMultiThreader>(m_instance)->GetNumberOfThreads();
  return retVal;
}



void vtkMultiThreader::SetGlobalMaximumNumberOfThreads(int val)
{
  ::vtkMultiThreader::SetGlobalMaximumNumberOfThreads(val);
}



int vtkMultiThreader::GetGlobalMaximumNumberOfThreads()
{
  int retVal = ::vtkMultiThreader::GetGlobalMaximumNumberOfThreads();
  return retVal;
}



void vtkMultiThreader::SetGlobalDefaultNumberOfThreads(int val)
{
  ::vtkMultiThreader::SetGlobalDefaultNumberOfThreads(val);
}



int vtkMultiThreader::GetGlobalDefaultNumberOfThreads()
{
  int retVal = ::vtkMultiThreader::GetGlobalDefaultNumberOfThreads();
  return retVal;
}



  vtkMultiThreader::vtkMultiThreader(System::IntPtr native, bool bConst) : vtkObject(native, bConst) {}



  vtkMultiThreader::vtkMultiThreader(bool donothing) : vtkObject(donothing) {}



  vtkMultiThreader::vtkMultiThreader() : vtkObject(false) {
  this->SetNativePointer(IntPtr(::vtkMultiThreader::New()));
}



  vtkMultiThreader::~vtkMultiThreader() { }





} // end namespace vtkCommon
