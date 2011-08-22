

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkRibbonFilterDotNet.h"

// native includes
#include "strstream"
#include "vtkRibbonFilter.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkRibbonFilter::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkRibbonFilter>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkRibbonFilter::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkRibbonFilter>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkRibbonFilter^ vtkRibbonFilter::NewInstance()
{
  ::vtkRibbonFilter* retVal = static_cast<::vtkRibbonFilter*>(vtk::ConvertManagedToNative<::vtkRibbonFilter>(m_instance)->NewInstance());
  return gcnew vtkRibbonFilter(IntPtr(retVal), false);
}



vtkRibbonFilter^ vtkRibbonFilter::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkRibbonFilter* retVal = static_cast<::vtkRibbonFilter*>(::vtkRibbonFilter::SafeDownCast(oWrap));
  return gcnew vtkRibbonFilter(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkRibbonFilter::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkRibbonFilter>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkRibbonFilter::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkRibbonFilter>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkRibbonFilter::SetWidth(double arg0)
{
  vtk::ConvertManagedToNative<::vtkRibbonFilter>(m_instance)->SetWidth(arg0);
}



double vtkRibbonFilter::GetWidthMinValue()
{
  double retVal = vtk::ConvertManagedToNative<::vtkRibbonFilter>(m_instance)->GetWidthMinValue();
  return retVal;
}



double vtkRibbonFilter::GetWidthMaxValue()
{
  double retVal = vtk::ConvertManagedToNative<::vtkRibbonFilter>(m_instance)->GetWidthMaxValue();
  return retVal;
}



double vtkRibbonFilter::GetWidth()
{
  double retVal = vtk::ConvertManagedToNative<::vtkRibbonFilter>(m_instance)->GetWidth();
  return retVal;
}



void vtkRibbonFilter::SetAngle(double arg0)
{
  vtk::ConvertManagedToNative<::vtkRibbonFilter>(m_instance)->SetAngle(arg0);
}



double vtkRibbonFilter::GetAngleMinValue()
{
  double retVal = vtk::ConvertManagedToNative<::vtkRibbonFilter>(m_instance)->GetAngleMinValue();
  return retVal;
}



double vtkRibbonFilter::GetAngleMaxValue()
{
  double retVal = vtk::ConvertManagedToNative<::vtkRibbonFilter>(m_instance)->GetAngleMaxValue();
  return retVal;
}



double vtkRibbonFilter::GetAngle()
{
  double retVal = vtk::ConvertManagedToNative<::vtkRibbonFilter>(m_instance)->GetAngle();
  return retVal;
}



void vtkRibbonFilter::SetVaryWidth(int arg0)
{
  vtk::ConvertManagedToNative<::vtkRibbonFilter>(m_instance)->SetVaryWidth(arg0);
}



int vtkRibbonFilter::GetVaryWidth()
{
  int retVal = vtk::ConvertManagedToNative<::vtkRibbonFilter>(m_instance)->GetVaryWidth();
  return retVal;
}



void vtkRibbonFilter::VaryWidthOn()
{
  vtk::ConvertManagedToNative<::vtkRibbonFilter>(m_instance)->VaryWidthOn();
}



void vtkRibbonFilter::VaryWidthOff()
{
  vtk::ConvertManagedToNative<::vtkRibbonFilter>(m_instance)->VaryWidthOff();
}



void vtkRibbonFilter::SetWidthFactor(double arg0)
{
  vtk::ConvertManagedToNative<::vtkRibbonFilter>(m_instance)->SetWidthFactor(arg0);
}



double vtkRibbonFilter::GetWidthFactor()
{
  double retVal = vtk::ConvertManagedToNative<::vtkRibbonFilter>(m_instance)->GetWidthFactor();
  return retVal;
}



void vtkRibbonFilter::SetDefaultNormal(double arg0, double arg1, double arg2)
{
  vtk::ConvertManagedToNative<::vtkRibbonFilter>(m_instance)->SetDefaultNormal(arg0, arg1, arg2);
}



void vtkRibbonFilter::SetDefaultNormal(array<double>^ a)
{
  pin_ptr<double> aPin = &a[0];
  double* nativeaPin = aPin;
  vtk::ConvertManagedToNative<::vtkRibbonFilter>(m_instance)->SetDefaultNormal(nativeaPin);
}



array<double>^ vtkRibbonFilter::GetDefaultNormal()
{
  const double* retVal = vtk::ConvertManagedToNative<::vtkRibbonFilter>(m_instance)->GetDefaultNormal();
  array<double>^ mRetVal = gcnew array<double>(3);
  for (size_t cprIdx=0; cprIdx<3; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



void vtkRibbonFilter::SetUseDefaultNormal(int arg0)
{
  vtk::ConvertManagedToNative<::vtkRibbonFilter>(m_instance)->SetUseDefaultNormal(arg0);
}



int vtkRibbonFilter::GetUseDefaultNormal()
{
  int retVal = vtk::ConvertManagedToNative<::vtkRibbonFilter>(m_instance)->GetUseDefaultNormal();
  return retVal;
}



void vtkRibbonFilter::UseDefaultNormalOn()
{
  vtk::ConvertManagedToNative<::vtkRibbonFilter>(m_instance)->UseDefaultNormalOn();
}



void vtkRibbonFilter::UseDefaultNormalOff()
{
  vtk::ConvertManagedToNative<::vtkRibbonFilter>(m_instance)->UseDefaultNormalOff();
}



void vtkRibbonFilter::SetGenerateTCoords(int arg0)
{
  vtk::ConvertManagedToNative<::vtkRibbonFilter>(m_instance)->SetGenerateTCoords(arg0);
}



int vtkRibbonFilter::GetGenerateTCoordsMinValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkRibbonFilter>(m_instance)->GetGenerateTCoordsMinValue();
  return retVal;
}



int vtkRibbonFilter::GetGenerateTCoordsMaxValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkRibbonFilter>(m_instance)->GetGenerateTCoordsMaxValue();
  return retVal;
}



int vtkRibbonFilter::GetGenerateTCoords()
{
  int retVal = vtk::ConvertManagedToNative<::vtkRibbonFilter>(m_instance)->GetGenerateTCoords();
  return retVal;
}



void vtkRibbonFilter::SetGenerateTCoordsToOff()
{
  vtk::ConvertManagedToNative<::vtkRibbonFilter>(m_instance)->SetGenerateTCoordsToOff();
}



void vtkRibbonFilter::SetGenerateTCoordsToNormalizedLength()
{
  vtk::ConvertManagedToNative<::vtkRibbonFilter>(m_instance)->SetGenerateTCoordsToNormalizedLength();
}



void vtkRibbonFilter::SetGenerateTCoordsToUseLength()
{
  vtk::ConvertManagedToNative<::vtkRibbonFilter>(m_instance)->SetGenerateTCoordsToUseLength();
}



void vtkRibbonFilter::SetGenerateTCoordsToUseScalars()
{
  vtk::ConvertManagedToNative<::vtkRibbonFilter>(m_instance)->SetGenerateTCoordsToUseScalars();
}



System::String^ vtkRibbonFilter::GetGenerateTCoordsAsString()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkRibbonFilter>(m_instance)->GetGenerateTCoordsAsString();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



void vtkRibbonFilter::SetTextureLength(double arg0)
{
  vtk::ConvertManagedToNative<::vtkRibbonFilter>(m_instance)->SetTextureLength(arg0);
}



double vtkRibbonFilter::GetTextureLengthMinValue()
{
  double retVal = vtk::ConvertManagedToNative<::vtkRibbonFilter>(m_instance)->GetTextureLengthMinValue();
  return retVal;
}



double vtkRibbonFilter::GetTextureLengthMaxValue()
{
  double retVal = vtk::ConvertManagedToNative<::vtkRibbonFilter>(m_instance)->GetTextureLengthMaxValue();
  return retVal;
}



double vtkRibbonFilter::GetTextureLength()
{
  double retVal = vtk::ConvertManagedToNative<::vtkRibbonFilter>(m_instance)->GetTextureLength();
  return retVal;
}



  vtkRibbonFilter::vtkRibbonFilter(System::IntPtr native, bool bConst) : vtkPolyDataAlgorithm(native, bConst) {}



  vtkRibbonFilter::vtkRibbonFilter(bool donothing) : vtkPolyDataAlgorithm(donothing) {}



  vtkRibbonFilter::vtkRibbonFilter() : vtkPolyDataAlgorithm(false) {
  this->SetNativePointer(IntPtr(::vtkRibbonFilter::New()));
}



  vtkRibbonFilter::~vtkRibbonFilter() { }





} // end namespace vtkGraphics
