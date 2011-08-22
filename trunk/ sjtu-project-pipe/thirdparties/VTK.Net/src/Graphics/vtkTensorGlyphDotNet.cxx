

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkTensorGlyphDotNet.h"

// native includes
#include "strstream"
#include "vtkTensorGlyph.h"
#include "vtkObject.h"
#include "vtkPolyData.h"

using namespace System;

namespace vtk {

System::String^ vtkTensorGlyph::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkTensorGlyph>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkTensorGlyph::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkTensorGlyph>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkTensorGlyph^ vtkTensorGlyph::NewInstance()
{
  ::vtkTensorGlyph* retVal = static_cast<::vtkTensorGlyph*>(vtk::ConvertManagedToNative<::vtkTensorGlyph>(m_instance)->NewInstance());
  return gcnew vtkTensorGlyph(IntPtr(retVal), false);
}



vtkTensorGlyph^ vtkTensorGlyph::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkTensorGlyph* retVal = static_cast<::vtkTensorGlyph*>(::vtkTensorGlyph::SafeDownCast(oWrap));
  return gcnew vtkTensorGlyph(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkTensorGlyph::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkTensorGlyph>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkTensorGlyph::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkTensorGlyph>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkTensorGlyph::SetSource(vtkPolyData^ source)
{
  ::vtkPolyData* sourceWrap = vtk::ConvertManagedToNative<::vtkPolyData>(source->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkTensorGlyph>(m_instance)->SetSource(sourceWrap);
}



vtkPolyData^ vtkTensorGlyph::GetSource()
{
  ::vtkPolyData* retVal = static_cast<::vtkPolyData*>(vtk::ConvertManagedToNative<::vtkTensorGlyph>(m_instance)->GetSource());
  return gcnew vtkPolyData(IntPtr(retVal), false);
}



void vtkTensorGlyph::SetScaling(int arg0)
{
  vtk::ConvertManagedToNative<::vtkTensorGlyph>(m_instance)->SetScaling(arg0);
}



int vtkTensorGlyph::GetScaling()
{
  int retVal = vtk::ConvertManagedToNative<::vtkTensorGlyph>(m_instance)->GetScaling();
  return retVal;
}



void vtkTensorGlyph::ScalingOn()
{
  vtk::ConvertManagedToNative<::vtkTensorGlyph>(m_instance)->ScalingOn();
}



void vtkTensorGlyph::ScalingOff()
{
  vtk::ConvertManagedToNative<::vtkTensorGlyph>(m_instance)->ScalingOff();
}



void vtkTensorGlyph::SetScaleFactor(double arg0)
{
  vtk::ConvertManagedToNative<::vtkTensorGlyph>(m_instance)->SetScaleFactor(arg0);
}



double vtkTensorGlyph::GetScaleFactor()
{
  double retVal = vtk::ConvertManagedToNative<::vtkTensorGlyph>(m_instance)->GetScaleFactor();
  return retVal;
}



void vtkTensorGlyph::SetThreeGlyphs(int arg0)
{
  vtk::ConvertManagedToNative<::vtkTensorGlyph>(m_instance)->SetThreeGlyphs(arg0);
}



int vtkTensorGlyph::GetThreeGlyphs()
{
  int retVal = vtk::ConvertManagedToNative<::vtkTensorGlyph>(m_instance)->GetThreeGlyphs();
  return retVal;
}



void vtkTensorGlyph::ThreeGlyphsOn()
{
  vtk::ConvertManagedToNative<::vtkTensorGlyph>(m_instance)->ThreeGlyphsOn();
}



void vtkTensorGlyph::ThreeGlyphsOff()
{
  vtk::ConvertManagedToNative<::vtkTensorGlyph>(m_instance)->ThreeGlyphsOff();
}



void vtkTensorGlyph::SetSymmetric(int arg0)
{
  vtk::ConvertManagedToNative<::vtkTensorGlyph>(m_instance)->SetSymmetric(arg0);
}



int vtkTensorGlyph::GetSymmetric()
{
  int retVal = vtk::ConvertManagedToNative<::vtkTensorGlyph>(m_instance)->GetSymmetric();
  return retVal;
}



void vtkTensorGlyph::SymmetricOn()
{
  vtk::ConvertManagedToNative<::vtkTensorGlyph>(m_instance)->SymmetricOn();
}



void vtkTensorGlyph::SymmetricOff()
{
  vtk::ConvertManagedToNative<::vtkTensorGlyph>(m_instance)->SymmetricOff();
}



void vtkTensorGlyph::SetLength(double arg0)
{
  vtk::ConvertManagedToNative<::vtkTensorGlyph>(m_instance)->SetLength(arg0);
}



double vtkTensorGlyph::GetLength()
{
  double retVal = vtk::ConvertManagedToNative<::vtkTensorGlyph>(m_instance)->GetLength();
  return retVal;
}



void vtkTensorGlyph::SetExtractEigenvalues(int arg0)
{
  vtk::ConvertManagedToNative<::vtkTensorGlyph>(m_instance)->SetExtractEigenvalues(arg0);
}



void vtkTensorGlyph::ExtractEigenvaluesOn()
{
  vtk::ConvertManagedToNative<::vtkTensorGlyph>(m_instance)->ExtractEigenvaluesOn();
}



void vtkTensorGlyph::ExtractEigenvaluesOff()
{
  vtk::ConvertManagedToNative<::vtkTensorGlyph>(m_instance)->ExtractEigenvaluesOff();
}



int vtkTensorGlyph::GetExtractEigenvalues()
{
  int retVal = vtk::ConvertManagedToNative<::vtkTensorGlyph>(m_instance)->GetExtractEigenvalues();
  return retVal;
}



void vtkTensorGlyph::SetColorGlyphs(int arg0)
{
  vtk::ConvertManagedToNative<::vtkTensorGlyph>(m_instance)->SetColorGlyphs(arg0);
}



int vtkTensorGlyph::GetColorGlyphs()
{
  int retVal = vtk::ConvertManagedToNative<::vtkTensorGlyph>(m_instance)->GetColorGlyphs();
  return retVal;
}



void vtkTensorGlyph::ColorGlyphsOn()
{
  vtk::ConvertManagedToNative<::vtkTensorGlyph>(m_instance)->ColorGlyphsOn();
}



void vtkTensorGlyph::ColorGlyphsOff()
{
  vtk::ConvertManagedToNative<::vtkTensorGlyph>(m_instance)->ColorGlyphsOff();
}



void vtkTensorGlyph::SetColorMode(int arg0)
{
  vtk::ConvertManagedToNative<::vtkTensorGlyph>(m_instance)->SetColorMode(arg0);
}



int vtkTensorGlyph::GetColorModeMinValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkTensorGlyph>(m_instance)->GetColorModeMinValue();
  return retVal;
}



int vtkTensorGlyph::GetColorModeMaxValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkTensorGlyph>(m_instance)->GetColorModeMaxValue();
  return retVal;
}



int vtkTensorGlyph::GetColorMode()
{
  int retVal = vtk::ConvertManagedToNative<::vtkTensorGlyph>(m_instance)->GetColorMode();
  return retVal;
}



void vtkTensorGlyph::SetColorModeToScalars()
{
  vtk::ConvertManagedToNative<::vtkTensorGlyph>(m_instance)->SetColorModeToScalars();
}



void vtkTensorGlyph::SetColorModeToEigenvalues()
{
  vtk::ConvertManagedToNative<::vtkTensorGlyph>(m_instance)->SetColorModeToEigenvalues();
}



void vtkTensorGlyph::SetClampScaling(int arg0)
{
  vtk::ConvertManagedToNative<::vtkTensorGlyph>(m_instance)->SetClampScaling(arg0);
}



int vtkTensorGlyph::GetClampScaling()
{
  int retVal = vtk::ConvertManagedToNative<::vtkTensorGlyph>(m_instance)->GetClampScaling();
  return retVal;
}



void vtkTensorGlyph::ClampScalingOn()
{
  vtk::ConvertManagedToNative<::vtkTensorGlyph>(m_instance)->ClampScalingOn();
}



void vtkTensorGlyph::ClampScalingOff()
{
  vtk::ConvertManagedToNative<::vtkTensorGlyph>(m_instance)->ClampScalingOff();
}



void vtkTensorGlyph::SetMaxScaleFactor(double arg0)
{
  vtk::ConvertManagedToNative<::vtkTensorGlyph>(m_instance)->SetMaxScaleFactor(arg0);
}



double vtkTensorGlyph::GetMaxScaleFactor()
{
  double retVal = vtk::ConvertManagedToNative<::vtkTensorGlyph>(m_instance)->GetMaxScaleFactor();
  return retVal;
}



  vtkTensorGlyph::vtkTensorGlyph(System::IntPtr native, bool bConst) : vtkPolyDataAlgorithm(native, bConst) {}



  vtkTensorGlyph::vtkTensorGlyph(bool donothing) : vtkPolyDataAlgorithm(donothing) {}



  vtkTensorGlyph::vtkTensorGlyph() : vtkPolyDataAlgorithm(false) {
  this->SetNativePointer(IntPtr(::vtkTensorGlyph::New()));
}



  vtkTensorGlyph::~vtkTensorGlyph() { }





} // end namespace vtkGraphics
