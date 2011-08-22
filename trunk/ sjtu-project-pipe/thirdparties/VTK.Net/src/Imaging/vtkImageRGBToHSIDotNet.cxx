

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkImageRGBToHSIDotNet.h"

// native includes
#include "strstream"
#include "vtkImageRGBToHSI.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkImageRGBToHSI::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkImageRGBToHSI>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkImageRGBToHSI::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkImageRGBToHSI>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkImageRGBToHSI^ vtkImageRGBToHSI::NewInstance()
{
  ::vtkImageRGBToHSI* retVal = static_cast<::vtkImageRGBToHSI*>(vtk::ConvertManagedToNative<::vtkImageRGBToHSI>(m_instance)->NewInstance());
  return gcnew vtkImageRGBToHSI(IntPtr(retVal), false);
}



vtkImageRGBToHSI^ vtkImageRGBToHSI::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkImageRGBToHSI* retVal = static_cast<::vtkImageRGBToHSI*>(::vtkImageRGBToHSI::SafeDownCast(oWrap));
  return gcnew vtkImageRGBToHSI(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkImageRGBToHSI::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkImageRGBToHSI>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkImageRGBToHSI::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkImageRGBToHSI>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkImageRGBToHSI::SetMaximum(double arg0)
{
  vtk::ConvertManagedToNative<::vtkImageRGBToHSI>(m_instance)->SetMaximum(arg0);
}



double vtkImageRGBToHSI::GetMaximum()
{
  double retVal = vtk::ConvertManagedToNative<::vtkImageRGBToHSI>(m_instance)->GetMaximum();
  return retVal;
}



  vtkImageRGBToHSI::vtkImageRGBToHSI(System::IntPtr native, bool bConst) : vtkThreadedImageAlgorithm(native, bConst) {}



  vtkImageRGBToHSI::vtkImageRGBToHSI(bool donothing) : vtkThreadedImageAlgorithm(donothing) {}



  vtkImageRGBToHSI::vtkImageRGBToHSI() : vtkThreadedImageAlgorithm(false) {
  this->SetNativePointer(IntPtr(::vtkImageRGBToHSI::New()));
}



  vtkImageRGBToHSI::~vtkImageRGBToHSI() { }





} // end namespace vtkImaging
