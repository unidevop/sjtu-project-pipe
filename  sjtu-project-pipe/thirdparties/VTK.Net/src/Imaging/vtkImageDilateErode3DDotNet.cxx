

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkImageDilateErode3DDotNet.h"

// native includes
#include "strstream"
#include "vtkImageDilateErode3D.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkImageDilateErode3D::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkImageDilateErode3D>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkImageDilateErode3D::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkImageDilateErode3D>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkImageDilateErode3D^ vtkImageDilateErode3D::NewInstance()
{
  ::vtkImageDilateErode3D* retVal = static_cast<::vtkImageDilateErode3D*>(vtk::ConvertManagedToNative<::vtkImageDilateErode3D>(m_instance)->NewInstance());
  return gcnew vtkImageDilateErode3D(IntPtr(retVal), false);
}



vtkImageDilateErode3D^ vtkImageDilateErode3D::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkImageDilateErode3D* retVal = static_cast<::vtkImageDilateErode3D*>(::vtkImageDilateErode3D::SafeDownCast(oWrap));
  return gcnew vtkImageDilateErode3D(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkImageDilateErode3D::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkImageDilateErode3D>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkImageDilateErode3D::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkImageDilateErode3D>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkImageDilateErode3D::SetKernelSize(int size0, int size1, int size2)
{
  vtk::ConvertManagedToNative<::vtkImageDilateErode3D>(m_instance)->SetKernelSize(size0, size1, size2);
}



void vtkImageDilateErode3D::SetDilateValue(double arg0)
{
  vtk::ConvertManagedToNative<::vtkImageDilateErode3D>(m_instance)->SetDilateValue(arg0);
}



double vtkImageDilateErode3D::GetDilateValue()
{
  double retVal = vtk::ConvertManagedToNative<::vtkImageDilateErode3D>(m_instance)->GetDilateValue();
  return retVal;
}



void vtkImageDilateErode3D::SetErodeValue(double arg0)
{
  vtk::ConvertManagedToNative<::vtkImageDilateErode3D>(m_instance)->SetErodeValue(arg0);
}



double vtkImageDilateErode3D::GetErodeValue()
{
  double retVal = vtk::ConvertManagedToNative<::vtkImageDilateErode3D>(m_instance)->GetErodeValue();
  return retVal;
}



  vtkImageDilateErode3D::vtkImageDilateErode3D(System::IntPtr native, bool bConst) : vtkImageSpatialAlgorithm(native, bConst) {}



  vtkImageDilateErode3D::vtkImageDilateErode3D(bool donothing) : vtkImageSpatialAlgorithm(donothing) {}



  vtkImageDilateErode3D::vtkImageDilateErode3D() : vtkImageSpatialAlgorithm(false) {
  this->SetNativePointer(IntPtr(::vtkImageDilateErode3D::New()));
}



  vtkImageDilateErode3D::~vtkImageDilateErode3D() { }





} // end namespace vtkImaging
