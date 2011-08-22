

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkImageHSIToRGBDotNet.h"

// native includes
#include "strstream"
#include "vtkImageHSIToRGB.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkImageHSIToRGB::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkImageHSIToRGB>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkImageHSIToRGB::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkImageHSIToRGB>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkImageHSIToRGB^ vtkImageHSIToRGB::NewInstance()
{
  ::vtkImageHSIToRGB* retVal = static_cast<::vtkImageHSIToRGB*>(vtk::ConvertManagedToNative<::vtkImageHSIToRGB>(m_instance)->NewInstance());
  return gcnew vtkImageHSIToRGB(IntPtr(retVal), false);
}



vtkImageHSIToRGB^ vtkImageHSIToRGB::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkImageHSIToRGB* retVal = static_cast<::vtkImageHSIToRGB*>(::vtkImageHSIToRGB::SafeDownCast(oWrap));
  return gcnew vtkImageHSIToRGB(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkImageHSIToRGB::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkImageHSIToRGB>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkImageHSIToRGB::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkImageHSIToRGB>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkImageHSIToRGB::SetMaximum(double arg0)
{
  vtk::ConvertManagedToNative<::vtkImageHSIToRGB>(m_instance)->SetMaximum(arg0);
}



double vtkImageHSIToRGB::GetMaximum()
{
  double retVal = vtk::ConvertManagedToNative<::vtkImageHSIToRGB>(m_instance)->GetMaximum();
  return retVal;
}



  vtkImageHSIToRGB::vtkImageHSIToRGB(System::IntPtr native, bool bConst) : vtkThreadedImageAlgorithm(native, bConst) {}



  vtkImageHSIToRGB::vtkImageHSIToRGB(bool donothing) : vtkThreadedImageAlgorithm(donothing) {}



  vtkImageHSIToRGB::vtkImageHSIToRGB() : vtkThreadedImageAlgorithm(false) {
  this->SetNativePointer(IntPtr(::vtkImageHSIToRGB::New()));
}



  vtkImageHSIToRGB::~vtkImageHSIToRGB() { }





} // end namespace vtkImaging
