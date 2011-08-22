

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkImageHSVToRGBDotNet.h"

// native includes
#include "strstream"
#include "vtkImageHSVToRGB.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkImageHSVToRGB::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkImageHSVToRGB>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkImageHSVToRGB::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkImageHSVToRGB>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkImageHSVToRGB^ vtkImageHSVToRGB::NewInstance()
{
  ::vtkImageHSVToRGB* retVal = static_cast<::vtkImageHSVToRGB*>(vtk::ConvertManagedToNative<::vtkImageHSVToRGB>(m_instance)->NewInstance());
  return gcnew vtkImageHSVToRGB(IntPtr(retVal), false);
}



vtkImageHSVToRGB^ vtkImageHSVToRGB::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkImageHSVToRGB* retVal = static_cast<::vtkImageHSVToRGB*>(::vtkImageHSVToRGB::SafeDownCast(oWrap));
  return gcnew vtkImageHSVToRGB(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkImageHSVToRGB::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkImageHSVToRGB>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkImageHSVToRGB::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkImageHSVToRGB>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkImageHSVToRGB::SetMaximum(double arg0)
{
  vtk::ConvertManagedToNative<::vtkImageHSVToRGB>(m_instance)->SetMaximum(arg0);
}



double vtkImageHSVToRGB::GetMaximum()
{
  double retVal = vtk::ConvertManagedToNative<::vtkImageHSVToRGB>(m_instance)->GetMaximum();
  return retVal;
}



  vtkImageHSVToRGB::vtkImageHSVToRGB(System::IntPtr native, bool bConst) : vtkThreadedImageAlgorithm(native, bConst) {}



  vtkImageHSVToRGB::vtkImageHSVToRGB(bool donothing) : vtkThreadedImageAlgorithm(donothing) {}



  vtkImageHSVToRGB::vtkImageHSVToRGB() : vtkThreadedImageAlgorithm(false) {
  this->SetNativePointer(IntPtr(::vtkImageHSVToRGB::New()));
}



  vtkImageHSVToRGB::~vtkImageHSVToRGB() { }





} // end namespace vtkImaging
