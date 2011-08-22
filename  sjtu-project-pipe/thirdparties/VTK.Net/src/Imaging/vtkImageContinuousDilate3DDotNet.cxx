

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkImageContinuousDilate3DDotNet.h"

// native includes
#include "strstream"
#include "vtkImageContinuousDilate3D.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkImageContinuousDilate3D::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkImageContinuousDilate3D>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkImageContinuousDilate3D::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkImageContinuousDilate3D>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkImageContinuousDilate3D^ vtkImageContinuousDilate3D::NewInstance()
{
  ::vtkImageContinuousDilate3D* retVal = static_cast<::vtkImageContinuousDilate3D*>(vtk::ConvertManagedToNative<::vtkImageContinuousDilate3D>(m_instance)->NewInstance());
  return gcnew vtkImageContinuousDilate3D(IntPtr(retVal), false);
}



vtkImageContinuousDilate3D^ vtkImageContinuousDilate3D::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkImageContinuousDilate3D* retVal = static_cast<::vtkImageContinuousDilate3D*>(::vtkImageContinuousDilate3D::SafeDownCast(oWrap));
  return gcnew vtkImageContinuousDilate3D(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkImageContinuousDilate3D::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkImageContinuousDilate3D>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkImageContinuousDilate3D::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkImageContinuousDilate3D>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkImageContinuousDilate3D::SetKernelSize(int size0, int size1, int size2)
{
  vtk::ConvertManagedToNative<::vtkImageContinuousDilate3D>(m_instance)->SetKernelSize(size0, size1, size2);
}



  vtkImageContinuousDilate3D::vtkImageContinuousDilate3D(System::IntPtr native, bool bConst) : vtkImageSpatialAlgorithm(native, bConst) {}



  vtkImageContinuousDilate3D::vtkImageContinuousDilate3D(bool donothing) : vtkImageSpatialAlgorithm(donothing) {}



  vtkImageContinuousDilate3D::vtkImageContinuousDilate3D() : vtkImageSpatialAlgorithm(false) {
  this->SetNativePointer(IntPtr(::vtkImageContinuousDilate3D::New()));
}



  vtkImageContinuousDilate3D::~vtkImageContinuousDilate3D() { }





} // end namespace vtkImaging
