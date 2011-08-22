

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkImageMedian3DDotNet.h"

// native includes
#include "strstream"
#include "vtkImageMedian3D.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkImageMedian3D::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkImageMedian3D>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkImageMedian3D::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkImageMedian3D>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkImageMedian3D^ vtkImageMedian3D::NewInstance()
{
  ::vtkImageMedian3D* retVal = static_cast<::vtkImageMedian3D*>(vtk::ConvertManagedToNative<::vtkImageMedian3D>(m_instance)->NewInstance());
  return gcnew vtkImageMedian3D(IntPtr(retVal), false);
}



vtkImageMedian3D^ vtkImageMedian3D::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkImageMedian3D* retVal = static_cast<::vtkImageMedian3D*>(::vtkImageMedian3D::SafeDownCast(oWrap));
  return gcnew vtkImageMedian3D(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkImageMedian3D::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkImageMedian3D>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkImageMedian3D::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkImageMedian3D>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkImageMedian3D::SetKernelSize(int size0, int size1, int size2)
{
  vtk::ConvertManagedToNative<::vtkImageMedian3D>(m_instance)->SetKernelSize(size0, size1, size2);
}



int vtkImageMedian3D::GetNumberOfElements()
{
  int retVal = vtk::ConvertManagedToNative<::vtkImageMedian3D>(m_instance)->GetNumberOfElements();
  return retVal;
}



  vtkImageMedian3D::vtkImageMedian3D(System::IntPtr native, bool bConst) : vtkImageSpatialAlgorithm(native, bConst) {}



  vtkImageMedian3D::vtkImageMedian3D(bool donothing) : vtkImageSpatialAlgorithm(donothing) {}



  vtkImageMedian3D::vtkImageMedian3D() : vtkImageSpatialAlgorithm(false) {
  this->SetNativePointer(IntPtr(::vtkImageMedian3D::New()));
}



  vtkImageMedian3D::~vtkImageMedian3D() { }





} // end namespace vtkImaging
