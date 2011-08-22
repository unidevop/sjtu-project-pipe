

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkImageSobel3DDotNet.h"

// native includes
#include "strstream"
#include "vtkImageSobel3D.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkImageSobel3D::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkImageSobel3D>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkImageSobel3D::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkImageSobel3D>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkImageSobel3D^ vtkImageSobel3D::NewInstance()
{
  ::vtkImageSobel3D* retVal = static_cast<::vtkImageSobel3D*>(vtk::ConvertManagedToNative<::vtkImageSobel3D>(m_instance)->NewInstance());
  return gcnew vtkImageSobel3D(IntPtr(retVal), false);
}



vtkImageSobel3D^ vtkImageSobel3D::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkImageSobel3D* retVal = static_cast<::vtkImageSobel3D*>(::vtkImageSobel3D::SafeDownCast(oWrap));
  return gcnew vtkImageSobel3D(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkImageSobel3D::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkImageSobel3D>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkImageSobel3D::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkImageSobel3D>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




  vtkImageSobel3D::vtkImageSobel3D(System::IntPtr native, bool bConst) : vtkImageSpatialAlgorithm(native, bConst) {}



  vtkImageSobel3D::vtkImageSobel3D(bool donothing) : vtkImageSpatialAlgorithm(donothing) {}



  vtkImageSobel3D::vtkImageSobel3D() : vtkImageSpatialAlgorithm(false) {
  this->SetNativePointer(IntPtr(::vtkImageSobel3D::New()));
}



  vtkImageSobel3D::~vtkImageSobel3D() { }





} // end namespace vtkImaging
