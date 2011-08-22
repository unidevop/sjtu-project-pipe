

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkImageVariance3DDotNet.h"

// native includes
#include "strstream"
#include "vtkImageVariance3D.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkImageVariance3D::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkImageVariance3D>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkImageVariance3D::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkImageVariance3D>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkImageVariance3D^ vtkImageVariance3D::NewInstance()
{
  ::vtkImageVariance3D* retVal = static_cast<::vtkImageVariance3D*>(vtk::ConvertManagedToNative<::vtkImageVariance3D>(m_instance)->NewInstance());
  return gcnew vtkImageVariance3D(IntPtr(retVal), false);
}



vtkImageVariance3D^ vtkImageVariance3D::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkImageVariance3D* retVal = static_cast<::vtkImageVariance3D*>(::vtkImageVariance3D::SafeDownCast(oWrap));
  return gcnew vtkImageVariance3D(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkImageVariance3D::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkImageVariance3D>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkImageVariance3D::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkImageVariance3D>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkImageVariance3D::SetKernelSize(int size0, int size1, int size2)
{
  vtk::ConvertManagedToNative<::vtkImageVariance3D>(m_instance)->SetKernelSize(size0, size1, size2);
}



  vtkImageVariance3D::vtkImageVariance3D(System::IntPtr native, bool bConst) : vtkImageSpatialAlgorithm(native, bConst) {}



  vtkImageVariance3D::vtkImageVariance3D(bool donothing) : vtkImageSpatialAlgorithm(donothing) {}



  vtkImageVariance3D::vtkImageVariance3D() : vtkImageSpatialAlgorithm(false) {
  this->SetNativePointer(IntPtr(::vtkImageVariance3D::New()));
}



  vtkImageVariance3D::~vtkImageVariance3D() { }





} // end namespace vtkImaging
