

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkImageRGBToHSVDotNet.h"

// native includes
#include "strstream"
#include "vtkImageRGBToHSV.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkImageRGBToHSV::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkImageRGBToHSV>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkImageRGBToHSV::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkImageRGBToHSV>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkImageRGBToHSV^ vtkImageRGBToHSV::NewInstance()
{
  ::vtkImageRGBToHSV* retVal = static_cast<::vtkImageRGBToHSV*>(vtk::ConvertManagedToNative<::vtkImageRGBToHSV>(m_instance)->NewInstance());
  return gcnew vtkImageRGBToHSV(IntPtr(retVal), false);
}



vtkImageRGBToHSV^ vtkImageRGBToHSV::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkImageRGBToHSV* retVal = static_cast<::vtkImageRGBToHSV*>(::vtkImageRGBToHSV::SafeDownCast(oWrap));
  return gcnew vtkImageRGBToHSV(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkImageRGBToHSV::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkImageRGBToHSV>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkImageRGBToHSV::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkImageRGBToHSV>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkImageRGBToHSV::SetMaximum(double arg0)
{
  vtk::ConvertManagedToNative<::vtkImageRGBToHSV>(m_instance)->SetMaximum(arg0);
}



double vtkImageRGBToHSV::GetMaximum()
{
  double retVal = vtk::ConvertManagedToNative<::vtkImageRGBToHSV>(m_instance)->GetMaximum();
  return retVal;
}



  vtkImageRGBToHSV::vtkImageRGBToHSV(System::IntPtr native, bool bConst) : vtkThreadedImageAlgorithm(native, bConst) {}



  vtkImageRGBToHSV::vtkImageRGBToHSV(bool donothing) : vtkThreadedImageAlgorithm(donothing) {}



  vtkImageRGBToHSV::vtkImageRGBToHSV() : vtkThreadedImageAlgorithm(false) {
  this->SetNativePointer(IntPtr(::vtkImageRGBToHSV::New()));
}



  vtkImageRGBToHSV::~vtkImageRGBToHSV() { }





} // end namespace vtkImaging
