

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkReferenceCountDotNet.h"

// native includes
#include "strstream"
#include "vtkReferenceCount.h"

using namespace System;

namespace vtk {

System::String^ vtkReferenceCount::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkReferenceCount>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkReferenceCount::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkReferenceCount>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkReferenceCount^ vtkReferenceCount::NewInstance()
{
  ::vtkReferenceCount* retVal = static_cast<::vtkReferenceCount*>(vtk::ConvertManagedToNative<::vtkReferenceCount>(m_instance)->NewInstance());
  return gcnew vtkReferenceCount(IntPtr(retVal), false);
}



vtkReferenceCount^ vtkReferenceCount::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkReferenceCount* retVal = static_cast<::vtkReferenceCount*>(::vtkReferenceCount::SafeDownCast(oWrap));
  return gcnew vtkReferenceCount(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkReferenceCount::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkReferenceCount>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkReferenceCount::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkReferenceCount>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




  vtkReferenceCount::vtkReferenceCount(System::IntPtr native, bool bConst) : vtkObject(native, bConst) {}



  vtkReferenceCount::vtkReferenceCount(bool donothing) : vtkObject(donothing) {}



  vtkReferenceCount::vtkReferenceCount() : vtkObject(false) {
  this->SetNativePointer(IntPtr(::vtkReferenceCount::New()));
}



  vtkReferenceCount::~vtkReferenceCount() { }





} // end namespace vtkCommon
