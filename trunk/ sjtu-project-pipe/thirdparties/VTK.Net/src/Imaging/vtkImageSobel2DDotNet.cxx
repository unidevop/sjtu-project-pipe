

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkImageSobel2DDotNet.h"

// native includes
#include "strstream"
#include "vtkImageSobel2D.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkImageSobel2D::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkImageSobel2D>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkImageSobel2D::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkImageSobel2D>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkImageSobel2D^ vtkImageSobel2D::NewInstance()
{
  ::vtkImageSobel2D* retVal = static_cast<::vtkImageSobel2D*>(vtk::ConvertManagedToNative<::vtkImageSobel2D>(m_instance)->NewInstance());
  return gcnew vtkImageSobel2D(IntPtr(retVal), false);
}



vtkImageSobel2D^ vtkImageSobel2D::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkImageSobel2D* retVal = static_cast<::vtkImageSobel2D*>(::vtkImageSobel2D::SafeDownCast(oWrap));
  return gcnew vtkImageSobel2D(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkImageSobel2D::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkImageSobel2D>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkImageSobel2D::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkImageSobel2D>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




  vtkImageSobel2D::vtkImageSobel2D(System::IntPtr native, bool bConst) : vtkImageSpatialAlgorithm(native, bConst) {}



  vtkImageSobel2D::vtkImageSobel2D(bool donothing) : vtkImageSpatialAlgorithm(donothing) {}



  vtkImageSobel2D::vtkImageSobel2D() : vtkImageSpatialAlgorithm(false) {
  this->SetNativePointer(IntPtr(::vtkImageSobel2D::New()));
}



  vtkImageSobel2D::~vtkImageSobel2D() { }





} // end namespace vtkImaging
