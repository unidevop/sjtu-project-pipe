

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkImageContinuousErode3DDotNet.h"

// native includes
#include "strstream"
#include "vtkImageContinuousErode3D.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkImageContinuousErode3D::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkImageContinuousErode3D>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkImageContinuousErode3D::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkImageContinuousErode3D>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkImageContinuousErode3D^ vtkImageContinuousErode3D::NewInstance()
{
  ::vtkImageContinuousErode3D* retVal = static_cast<::vtkImageContinuousErode3D*>(vtk::ConvertManagedToNative<::vtkImageContinuousErode3D>(m_instance)->NewInstance());
  return gcnew vtkImageContinuousErode3D(IntPtr(retVal), false);
}



vtkImageContinuousErode3D^ vtkImageContinuousErode3D::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkImageContinuousErode3D* retVal = static_cast<::vtkImageContinuousErode3D*>(::vtkImageContinuousErode3D::SafeDownCast(oWrap));
  return gcnew vtkImageContinuousErode3D(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkImageContinuousErode3D::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkImageContinuousErode3D>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkImageContinuousErode3D::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkImageContinuousErode3D>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkImageContinuousErode3D::SetKernelSize(int size0, int size1, int size2)
{
  vtk::ConvertManagedToNative<::vtkImageContinuousErode3D>(m_instance)->SetKernelSize(size0, size1, size2);
}



  vtkImageContinuousErode3D::vtkImageContinuousErode3D(System::IntPtr native, bool bConst) : vtkImageSpatialAlgorithm(native, bConst) {}



  vtkImageContinuousErode3D::vtkImageContinuousErode3D(bool donothing) : vtkImageSpatialAlgorithm(donothing) {}



  vtkImageContinuousErode3D::vtkImageContinuousErode3D() : vtkImageSpatialAlgorithm(false) {
  this->SetNativePointer(IntPtr(::vtkImageContinuousErode3D::New()));
}



  vtkImageContinuousErode3D::~vtkImageContinuousErode3D() { }





} // end namespace vtkImaging
