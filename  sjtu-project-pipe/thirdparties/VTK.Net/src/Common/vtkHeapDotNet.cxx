

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkHeapDotNet.h"

// native includes
#include "strstream"
#include "vtkHeap.h"

using namespace System;

namespace vtk {

System::String^ vtkHeap::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkHeap>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkHeap::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkHeap>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkHeap^ vtkHeap::NewInstance()
{
  ::vtkHeap* retVal = static_cast<::vtkHeap*>(vtk::ConvertManagedToNative<::vtkHeap>(m_instance)->NewInstance());
  return gcnew vtkHeap(IntPtr(retVal), false);
}



vtkHeap^ vtkHeap::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkHeap* retVal = static_cast<::vtkHeap*>(::vtkHeap::SafeDownCast(oWrap));
  return gcnew vtkHeap(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkHeap::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkHeap>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkHeap::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkHeap>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




int vtkHeap::GetNumberOfBlocks()
{
  int retVal = vtk::ConvertManagedToNative<::vtkHeap>(m_instance)->GetNumberOfBlocks();
  return retVal;
}



int vtkHeap::GetNumberOfAllocations()
{
  int retVal = vtk::ConvertManagedToNative<::vtkHeap>(m_instance)->GetNumberOfAllocations();
  return retVal;
}



void vtkHeap::Reset()
{
  vtk::ConvertManagedToNative<::vtkHeap>(m_instance)->Reset();
}



System::String^ vtkHeap::StringDup(System::String^ str)
{
  char* strWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(str).ToPointer());
  const char* retVal = vtk::ConvertManagedToNative<::vtkHeap>(m_instance)->StringDup(strWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(strWrap));
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



  vtkHeap::vtkHeap(System::IntPtr native, bool bConst) : vtkObject(native, bConst) {}



  vtkHeap::vtkHeap(bool donothing) : vtkObject(donothing) {}



  vtkHeap::vtkHeap() : vtkObject(false) {
  this->SetNativePointer(IntPtr(::vtkHeap::New()));
}



  vtkHeap::~vtkHeap() { }





} // end namespace vtkCommon
