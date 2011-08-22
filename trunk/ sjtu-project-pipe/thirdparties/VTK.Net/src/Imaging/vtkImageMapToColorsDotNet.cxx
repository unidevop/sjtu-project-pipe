

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkImageMapToColorsDotNet.h"

// native includes
#include "strstream"
#include "vtkImageMapToColors.h"
#include "vtkObject.h"
#include "vtkScalarsToColors.h"

using namespace System;

namespace vtk {

System::String^ vtkImageMapToColors::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkImageMapToColors>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkImageMapToColors::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkImageMapToColors>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkImageMapToColors^ vtkImageMapToColors::NewInstance()
{
  ::vtkImageMapToColors* retVal = static_cast<::vtkImageMapToColors*>(vtk::ConvertManagedToNative<::vtkImageMapToColors>(m_instance)->NewInstance());
  return gcnew vtkImageMapToColors(IntPtr(retVal), false);
}



vtkImageMapToColors^ vtkImageMapToColors::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkImageMapToColors* retVal = static_cast<::vtkImageMapToColors*>(::vtkImageMapToColors::SafeDownCast(oWrap));
  return gcnew vtkImageMapToColors(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkImageMapToColors::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkImageMapToColors>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkImageMapToColors::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkImageMapToColors>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkImageMapToColors::SetLookupTable(vtkScalarsToColors^ arg0)
{
  ::vtkScalarsToColors* arg0Wrap = vtk::ConvertManagedToNative<::vtkScalarsToColors>(arg0->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkImageMapToColors>(m_instance)->SetLookupTable(arg0Wrap);
}



vtkScalarsToColors^ vtkImageMapToColors::GetLookupTable()
{
  ::vtkScalarsToColors* retVal = static_cast<::vtkScalarsToColors*>(vtk::ConvertManagedToNative<::vtkImageMapToColors>(m_instance)->GetLookupTable());
  return gcnew vtkScalarsToColors(IntPtr(retVal), false);
}



void vtkImageMapToColors::SetOutputFormat(int arg0)
{
  vtk::ConvertManagedToNative<::vtkImageMapToColors>(m_instance)->SetOutputFormat(arg0);
}



int vtkImageMapToColors::GetOutputFormat()
{
  int retVal = vtk::ConvertManagedToNative<::vtkImageMapToColors>(m_instance)->GetOutputFormat();
  return retVal;
}



void vtkImageMapToColors::SetOutputFormatToRGBA()
{
  vtk::ConvertManagedToNative<::vtkImageMapToColors>(m_instance)->SetOutputFormatToRGBA();
}



void vtkImageMapToColors::SetOutputFormatToRGB()
{
  vtk::ConvertManagedToNative<::vtkImageMapToColors>(m_instance)->SetOutputFormatToRGB();
}



void vtkImageMapToColors::SetOutputFormatToLuminanceAlpha()
{
  vtk::ConvertManagedToNative<::vtkImageMapToColors>(m_instance)->SetOutputFormatToLuminanceAlpha();
}



void vtkImageMapToColors::SetOutputFormatToLuminance()
{
  vtk::ConvertManagedToNative<::vtkImageMapToColors>(m_instance)->SetOutputFormatToLuminance();
}



void vtkImageMapToColors::SetActiveComponent(int arg0)
{
  vtk::ConvertManagedToNative<::vtkImageMapToColors>(m_instance)->SetActiveComponent(arg0);
}



int vtkImageMapToColors::GetActiveComponent()
{
  int retVal = vtk::ConvertManagedToNative<::vtkImageMapToColors>(m_instance)->GetActiveComponent();
  return retVal;
}



void vtkImageMapToColors::SetPassAlphaToOutput(int arg0)
{
  vtk::ConvertManagedToNative<::vtkImageMapToColors>(m_instance)->SetPassAlphaToOutput(arg0);
}



void vtkImageMapToColors::PassAlphaToOutputOn()
{
  vtk::ConvertManagedToNative<::vtkImageMapToColors>(m_instance)->PassAlphaToOutputOn();
}



void vtkImageMapToColors::PassAlphaToOutputOff()
{
  vtk::ConvertManagedToNative<::vtkImageMapToColors>(m_instance)->PassAlphaToOutputOff();
}



int vtkImageMapToColors::GetPassAlphaToOutput()
{
  int retVal = vtk::ConvertManagedToNative<::vtkImageMapToColors>(m_instance)->GetPassAlphaToOutput();
  return retVal;
}



unsigned long vtkImageMapToColors::GetMTime()
{
  unsigned long retVal = vtk::ConvertManagedToNative<::vtkImageMapToColors>(m_instance)->GetMTime();
  return retVal;
}



  vtkImageMapToColors::vtkImageMapToColors(System::IntPtr native, bool bConst) : vtkThreadedImageAlgorithm(native, bConst) {}



  vtkImageMapToColors::vtkImageMapToColors(bool donothing) : vtkThreadedImageAlgorithm(donothing) {}



  vtkImageMapToColors::vtkImageMapToColors() : vtkThreadedImageAlgorithm(false) {
  this->SetNativePointer(IntPtr(::vtkImageMapToColors::New()));
}



  vtkImageMapToColors::~vtkImageMapToColors() { }





} // end namespace vtkImaging
