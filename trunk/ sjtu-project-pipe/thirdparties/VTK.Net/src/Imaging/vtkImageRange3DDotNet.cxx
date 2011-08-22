

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkImageRange3DDotNet.h"

// native includes
#include "strstream"
#include "vtkImageRange3D.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkImageRange3D::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkImageRange3D>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkImageRange3D::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkImageRange3D>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkImageRange3D^ vtkImageRange3D::NewInstance()
{
  ::vtkImageRange3D* retVal = static_cast<::vtkImageRange3D*>(vtk::ConvertManagedToNative<::vtkImageRange3D>(m_instance)->NewInstance());
  return gcnew vtkImageRange3D(IntPtr(retVal), false);
}



vtkImageRange3D^ vtkImageRange3D::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkImageRange3D* retVal = static_cast<::vtkImageRange3D*>(::vtkImageRange3D::SafeDownCast(oWrap));
  return gcnew vtkImageRange3D(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkImageRange3D::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkImageRange3D>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkImageRange3D::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkImageRange3D>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkImageRange3D::SetKernelSize(int size0, int size1, int size2)
{
  vtk::ConvertManagedToNative<::vtkImageRange3D>(m_instance)->SetKernelSize(size0, size1, size2);
}



  vtkImageRange3D::vtkImageRange3D(System::IntPtr native, bool bConst) : vtkImageSpatialAlgorithm(native, bConst) {}



  vtkImageRange3D::vtkImageRange3D(bool donothing) : vtkImageSpatialAlgorithm(donothing) {}



  vtkImageRange3D::vtkImageRange3D() : vtkImageSpatialAlgorithm(false) {
  this->SetNativePointer(IntPtr(::vtkImageRange3D::New()));
}



  vtkImageRange3D::~vtkImageRange3D() { }





} // end namespace vtkImaging
