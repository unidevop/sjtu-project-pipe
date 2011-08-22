

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkImageSkeleton2DDotNet.h"

// native includes
#include "strstream"
#include "vtkImageSkeleton2D.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkImageSkeleton2D::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkImageSkeleton2D>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkImageSkeleton2D::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkImageSkeleton2D>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkImageSkeleton2D^ vtkImageSkeleton2D::NewInstance()
{
  ::vtkImageSkeleton2D* retVal = static_cast<::vtkImageSkeleton2D*>(vtk::ConvertManagedToNative<::vtkImageSkeleton2D>(m_instance)->NewInstance());
  return gcnew vtkImageSkeleton2D(IntPtr(retVal), false);
}



vtkImageSkeleton2D^ vtkImageSkeleton2D::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkImageSkeleton2D* retVal = static_cast<::vtkImageSkeleton2D*>(::vtkImageSkeleton2D::SafeDownCast(oWrap));
  return gcnew vtkImageSkeleton2D(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkImageSkeleton2D::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkImageSkeleton2D>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkImageSkeleton2D::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkImageSkeleton2D>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkImageSkeleton2D::SetPrune(int arg0)
{
  vtk::ConvertManagedToNative<::vtkImageSkeleton2D>(m_instance)->SetPrune(arg0);
}



int vtkImageSkeleton2D::GetPrune()
{
  int retVal = vtk::ConvertManagedToNative<::vtkImageSkeleton2D>(m_instance)->GetPrune();
  return retVal;
}



void vtkImageSkeleton2D::PruneOn()
{
  vtk::ConvertManagedToNative<::vtkImageSkeleton2D>(m_instance)->PruneOn();
}



void vtkImageSkeleton2D::PruneOff()
{
  vtk::ConvertManagedToNative<::vtkImageSkeleton2D>(m_instance)->PruneOff();
}



void vtkImageSkeleton2D::SetNumberOfIterations(int num)
{
  vtk::ConvertManagedToNative<::vtkImageSkeleton2D>(m_instance)->SetNumberOfIterations(num);
}



  vtkImageSkeleton2D::vtkImageSkeleton2D(System::IntPtr native, bool bConst) : vtkImageIterateFilter(native, bConst) {}



  vtkImageSkeleton2D::vtkImageSkeleton2D(bool donothing) : vtkImageIterateFilter(donothing) {}



  vtkImageSkeleton2D::vtkImageSkeleton2D() : vtkImageIterateFilter(false) {
  this->SetNativePointer(IntPtr(::vtkImageSkeleton2D::New()));
}



  vtkImageSkeleton2D::~vtkImageSkeleton2D() { }





} // end namespace vtkImaging
