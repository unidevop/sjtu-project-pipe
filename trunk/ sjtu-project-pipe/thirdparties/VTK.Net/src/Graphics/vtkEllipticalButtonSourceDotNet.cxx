

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkEllipticalButtonSourceDotNet.h"

// native includes
#include "strstream"
#include "vtkEllipticalButtonSource.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkEllipticalButtonSource::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkEllipticalButtonSource>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkEllipticalButtonSource::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkEllipticalButtonSource>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




System::String^ vtkEllipticalButtonSource::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkEllipticalButtonSource>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkEllipticalButtonSource::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkEllipticalButtonSource>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkEllipticalButtonSource^ vtkEllipticalButtonSource::NewInstance()
{
  ::vtkEllipticalButtonSource* retVal = static_cast<::vtkEllipticalButtonSource*>(vtk::ConvertManagedToNative<::vtkEllipticalButtonSource>(m_instance)->NewInstance());
  return gcnew vtkEllipticalButtonSource(IntPtr(retVal), false);
}



vtkEllipticalButtonSource^ vtkEllipticalButtonSource::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkEllipticalButtonSource* retVal = static_cast<::vtkEllipticalButtonSource*>(::vtkEllipticalButtonSource::SafeDownCast(oWrap));
  return gcnew vtkEllipticalButtonSource(IntPtr(retVal), false);
}



void vtkEllipticalButtonSource::SetWidth(double arg0)
{
  vtk::ConvertManagedToNative<::vtkEllipticalButtonSource>(m_instance)->SetWidth(arg0);
}



double vtkEllipticalButtonSource::GetWidthMinValue()
{
  double retVal = vtk::ConvertManagedToNative<::vtkEllipticalButtonSource>(m_instance)->GetWidthMinValue();
  return retVal;
}



double vtkEllipticalButtonSource::GetWidthMaxValue()
{
  double retVal = vtk::ConvertManagedToNative<::vtkEllipticalButtonSource>(m_instance)->GetWidthMaxValue();
  return retVal;
}



double vtkEllipticalButtonSource::GetWidth()
{
  double retVal = vtk::ConvertManagedToNative<::vtkEllipticalButtonSource>(m_instance)->GetWidth();
  return retVal;
}



void vtkEllipticalButtonSource::SetHeight(double arg0)
{
  vtk::ConvertManagedToNative<::vtkEllipticalButtonSource>(m_instance)->SetHeight(arg0);
}



double vtkEllipticalButtonSource::GetHeightMinValue()
{
  double retVal = vtk::ConvertManagedToNative<::vtkEllipticalButtonSource>(m_instance)->GetHeightMinValue();
  return retVal;
}



double vtkEllipticalButtonSource::GetHeightMaxValue()
{
  double retVal = vtk::ConvertManagedToNative<::vtkEllipticalButtonSource>(m_instance)->GetHeightMaxValue();
  return retVal;
}



double vtkEllipticalButtonSource::GetHeight()
{
  double retVal = vtk::ConvertManagedToNative<::vtkEllipticalButtonSource>(m_instance)->GetHeight();
  return retVal;
}



void vtkEllipticalButtonSource::SetDepth(double arg0)
{
  vtk::ConvertManagedToNative<::vtkEllipticalButtonSource>(m_instance)->SetDepth(arg0);
}



double vtkEllipticalButtonSource::GetDepthMinValue()
{
  double retVal = vtk::ConvertManagedToNative<::vtkEllipticalButtonSource>(m_instance)->GetDepthMinValue();
  return retVal;
}



double vtkEllipticalButtonSource::GetDepthMaxValue()
{
  double retVal = vtk::ConvertManagedToNative<::vtkEllipticalButtonSource>(m_instance)->GetDepthMaxValue();
  return retVal;
}



double vtkEllipticalButtonSource::GetDepth()
{
  double retVal = vtk::ConvertManagedToNative<::vtkEllipticalButtonSource>(m_instance)->GetDepth();
  return retVal;
}



void vtkEllipticalButtonSource::SetCircumferentialResolution(int arg0)
{
  vtk::ConvertManagedToNative<::vtkEllipticalButtonSource>(m_instance)->SetCircumferentialResolution(arg0);
}



int vtkEllipticalButtonSource::GetCircumferentialResolutionMinValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkEllipticalButtonSource>(m_instance)->GetCircumferentialResolutionMinValue();
  return retVal;
}



int vtkEllipticalButtonSource::GetCircumferentialResolutionMaxValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkEllipticalButtonSource>(m_instance)->GetCircumferentialResolutionMaxValue();
  return retVal;
}



int vtkEllipticalButtonSource::GetCircumferentialResolution()
{
  int retVal = vtk::ConvertManagedToNative<::vtkEllipticalButtonSource>(m_instance)->GetCircumferentialResolution();
  return retVal;
}



void vtkEllipticalButtonSource::SetTextureResolution(int arg0)
{
  vtk::ConvertManagedToNative<::vtkEllipticalButtonSource>(m_instance)->SetTextureResolution(arg0);
}



int vtkEllipticalButtonSource::GetTextureResolutionMinValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkEllipticalButtonSource>(m_instance)->GetTextureResolutionMinValue();
  return retVal;
}



int vtkEllipticalButtonSource::GetTextureResolutionMaxValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkEllipticalButtonSource>(m_instance)->GetTextureResolutionMaxValue();
  return retVal;
}



int vtkEllipticalButtonSource::GetTextureResolution()
{
  int retVal = vtk::ConvertManagedToNative<::vtkEllipticalButtonSource>(m_instance)->GetTextureResolution();
  return retVal;
}



void vtkEllipticalButtonSource::SetShoulderResolution(int arg0)
{
  vtk::ConvertManagedToNative<::vtkEllipticalButtonSource>(m_instance)->SetShoulderResolution(arg0);
}



int vtkEllipticalButtonSource::GetShoulderResolutionMinValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkEllipticalButtonSource>(m_instance)->GetShoulderResolutionMinValue();
  return retVal;
}



int vtkEllipticalButtonSource::GetShoulderResolutionMaxValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkEllipticalButtonSource>(m_instance)->GetShoulderResolutionMaxValue();
  return retVal;
}



int vtkEllipticalButtonSource::GetShoulderResolution()
{
  int retVal = vtk::ConvertManagedToNative<::vtkEllipticalButtonSource>(m_instance)->GetShoulderResolution();
  return retVal;
}



void vtkEllipticalButtonSource::SetRadialRatio(double arg0)
{
  vtk::ConvertManagedToNative<::vtkEllipticalButtonSource>(m_instance)->SetRadialRatio(arg0);
}



double vtkEllipticalButtonSource::GetRadialRatioMinValue()
{
  double retVal = vtk::ConvertManagedToNative<::vtkEllipticalButtonSource>(m_instance)->GetRadialRatioMinValue();
  return retVal;
}



double vtkEllipticalButtonSource::GetRadialRatioMaxValue()
{
  double retVal = vtk::ConvertManagedToNative<::vtkEllipticalButtonSource>(m_instance)->GetRadialRatioMaxValue();
  return retVal;
}



double vtkEllipticalButtonSource::GetRadialRatio()
{
  double retVal = vtk::ConvertManagedToNative<::vtkEllipticalButtonSource>(m_instance)->GetRadialRatio();
  return retVal;
}



  vtkEllipticalButtonSource::vtkEllipticalButtonSource(System::IntPtr native, bool bConst) : vtkButtonSource(native, bConst) {}



  vtkEllipticalButtonSource::vtkEllipticalButtonSource(bool donothing) : vtkButtonSource(donothing) {}



  vtkEllipticalButtonSource::vtkEllipticalButtonSource() : vtkButtonSource(false) {
  this->SetNativePointer(IntPtr(::vtkEllipticalButtonSource::New()));
}



  vtkEllipticalButtonSource::~vtkEllipticalButtonSource() { }





} // end namespace vtkGraphics
