

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkRectangularButtonSourceDotNet.h"

// native includes
#include "strstream"
#include "vtkRectangularButtonSource.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkRectangularButtonSource::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkRectangularButtonSource>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkRectangularButtonSource::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkRectangularButtonSource>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




System::String^ vtkRectangularButtonSource::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkRectangularButtonSource>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkRectangularButtonSource::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkRectangularButtonSource>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkRectangularButtonSource^ vtkRectangularButtonSource::NewInstance()
{
  ::vtkRectangularButtonSource* retVal = static_cast<::vtkRectangularButtonSource*>(vtk::ConvertManagedToNative<::vtkRectangularButtonSource>(m_instance)->NewInstance());
  return gcnew vtkRectangularButtonSource(IntPtr(retVal), false);
}



vtkRectangularButtonSource^ vtkRectangularButtonSource::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkRectangularButtonSource* retVal = static_cast<::vtkRectangularButtonSource*>(::vtkRectangularButtonSource::SafeDownCast(oWrap));
  return gcnew vtkRectangularButtonSource(IntPtr(retVal), false);
}



void vtkRectangularButtonSource::SetWidth(double arg0)
{
  vtk::ConvertManagedToNative<::vtkRectangularButtonSource>(m_instance)->SetWidth(arg0);
}



double vtkRectangularButtonSource::GetWidthMinValue()
{
  double retVal = vtk::ConvertManagedToNative<::vtkRectangularButtonSource>(m_instance)->GetWidthMinValue();
  return retVal;
}



double vtkRectangularButtonSource::GetWidthMaxValue()
{
  double retVal = vtk::ConvertManagedToNative<::vtkRectangularButtonSource>(m_instance)->GetWidthMaxValue();
  return retVal;
}



double vtkRectangularButtonSource::GetWidth()
{
  double retVal = vtk::ConvertManagedToNative<::vtkRectangularButtonSource>(m_instance)->GetWidth();
  return retVal;
}



void vtkRectangularButtonSource::SetHeight(double arg0)
{
  vtk::ConvertManagedToNative<::vtkRectangularButtonSource>(m_instance)->SetHeight(arg0);
}



double vtkRectangularButtonSource::GetHeightMinValue()
{
  double retVal = vtk::ConvertManagedToNative<::vtkRectangularButtonSource>(m_instance)->GetHeightMinValue();
  return retVal;
}



double vtkRectangularButtonSource::GetHeightMaxValue()
{
  double retVal = vtk::ConvertManagedToNative<::vtkRectangularButtonSource>(m_instance)->GetHeightMaxValue();
  return retVal;
}



double vtkRectangularButtonSource::GetHeight()
{
  double retVal = vtk::ConvertManagedToNative<::vtkRectangularButtonSource>(m_instance)->GetHeight();
  return retVal;
}



void vtkRectangularButtonSource::SetDepth(double arg0)
{
  vtk::ConvertManagedToNative<::vtkRectangularButtonSource>(m_instance)->SetDepth(arg0);
}



double vtkRectangularButtonSource::GetDepthMinValue()
{
  double retVal = vtk::ConvertManagedToNative<::vtkRectangularButtonSource>(m_instance)->GetDepthMinValue();
  return retVal;
}



double vtkRectangularButtonSource::GetDepthMaxValue()
{
  double retVal = vtk::ConvertManagedToNative<::vtkRectangularButtonSource>(m_instance)->GetDepthMaxValue();
  return retVal;
}



double vtkRectangularButtonSource::GetDepth()
{
  double retVal = vtk::ConvertManagedToNative<::vtkRectangularButtonSource>(m_instance)->GetDepth();
  return retVal;
}



void vtkRectangularButtonSource::SetBoxRatio(double arg0)
{
  vtk::ConvertManagedToNative<::vtkRectangularButtonSource>(m_instance)->SetBoxRatio(arg0);
}



double vtkRectangularButtonSource::GetBoxRatioMinValue()
{
  double retVal = vtk::ConvertManagedToNative<::vtkRectangularButtonSource>(m_instance)->GetBoxRatioMinValue();
  return retVal;
}



double vtkRectangularButtonSource::GetBoxRatioMaxValue()
{
  double retVal = vtk::ConvertManagedToNative<::vtkRectangularButtonSource>(m_instance)->GetBoxRatioMaxValue();
  return retVal;
}



double vtkRectangularButtonSource::GetBoxRatio()
{
  double retVal = vtk::ConvertManagedToNative<::vtkRectangularButtonSource>(m_instance)->GetBoxRatio();
  return retVal;
}



void vtkRectangularButtonSource::SetTextureRatio(double arg0)
{
  vtk::ConvertManagedToNative<::vtkRectangularButtonSource>(m_instance)->SetTextureRatio(arg0);
}



double vtkRectangularButtonSource::GetTextureRatioMinValue()
{
  double retVal = vtk::ConvertManagedToNative<::vtkRectangularButtonSource>(m_instance)->GetTextureRatioMinValue();
  return retVal;
}



double vtkRectangularButtonSource::GetTextureRatioMaxValue()
{
  double retVal = vtk::ConvertManagedToNative<::vtkRectangularButtonSource>(m_instance)->GetTextureRatioMaxValue();
  return retVal;
}



double vtkRectangularButtonSource::GetTextureRatio()
{
  double retVal = vtk::ConvertManagedToNative<::vtkRectangularButtonSource>(m_instance)->GetTextureRatio();
  return retVal;
}



void vtkRectangularButtonSource::SetTextureHeightRatio(double arg0)
{
  vtk::ConvertManagedToNative<::vtkRectangularButtonSource>(m_instance)->SetTextureHeightRatio(arg0);
}



double vtkRectangularButtonSource::GetTextureHeightRatioMinValue()
{
  double retVal = vtk::ConvertManagedToNative<::vtkRectangularButtonSource>(m_instance)->GetTextureHeightRatioMinValue();
  return retVal;
}



double vtkRectangularButtonSource::GetTextureHeightRatioMaxValue()
{
  double retVal = vtk::ConvertManagedToNative<::vtkRectangularButtonSource>(m_instance)->GetTextureHeightRatioMaxValue();
  return retVal;
}



double vtkRectangularButtonSource::GetTextureHeightRatio()
{
  double retVal = vtk::ConvertManagedToNative<::vtkRectangularButtonSource>(m_instance)->GetTextureHeightRatio();
  return retVal;
}



  vtkRectangularButtonSource::vtkRectangularButtonSource(System::IntPtr native, bool bConst) : vtkButtonSource(native, bConst) {}



  vtkRectangularButtonSource::vtkRectangularButtonSource(bool donothing) : vtkButtonSource(donothing) {}



  vtkRectangularButtonSource::vtkRectangularButtonSource() : vtkButtonSource(false) {
  this->SetNativePointer(IntPtr(::vtkRectangularButtonSource::New()));
}



  vtkRectangularButtonSource::~vtkRectangularButtonSource() { }





} // end namespace vtkGraphics
