

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkTubeFilterDotNet.h"

// native includes
#include "strstream"
#include "vtkTubeFilter.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkTubeFilter::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkTubeFilter>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkTubeFilter::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkTubeFilter>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkTubeFilter^ vtkTubeFilter::NewInstance()
{
  ::vtkTubeFilter* retVal = static_cast<::vtkTubeFilter*>(vtk::ConvertManagedToNative<::vtkTubeFilter>(m_instance)->NewInstance());
  return gcnew vtkTubeFilter(IntPtr(retVal), false);
}



vtkTubeFilter^ vtkTubeFilter::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkTubeFilter* retVal = static_cast<::vtkTubeFilter*>(::vtkTubeFilter::SafeDownCast(oWrap));
  return gcnew vtkTubeFilter(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkTubeFilter::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkTubeFilter>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkTubeFilter::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkTubeFilter>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkTubeFilter::SetRadius(double arg0)
{
  vtk::ConvertManagedToNative<::vtkTubeFilter>(m_instance)->SetRadius(arg0);
}



double vtkTubeFilter::GetRadiusMinValue()
{
  double retVal = vtk::ConvertManagedToNative<::vtkTubeFilter>(m_instance)->GetRadiusMinValue();
  return retVal;
}



double vtkTubeFilter::GetRadiusMaxValue()
{
  double retVal = vtk::ConvertManagedToNative<::vtkTubeFilter>(m_instance)->GetRadiusMaxValue();
  return retVal;
}



double vtkTubeFilter::GetRadius()
{
  double retVal = vtk::ConvertManagedToNative<::vtkTubeFilter>(m_instance)->GetRadius();
  return retVal;
}



void vtkTubeFilter::SetVaryRadius(int arg0)
{
  vtk::ConvertManagedToNative<::vtkTubeFilter>(m_instance)->SetVaryRadius(arg0);
}



int vtkTubeFilter::GetVaryRadiusMinValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkTubeFilter>(m_instance)->GetVaryRadiusMinValue();
  return retVal;
}



int vtkTubeFilter::GetVaryRadiusMaxValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkTubeFilter>(m_instance)->GetVaryRadiusMaxValue();
  return retVal;
}



int vtkTubeFilter::GetVaryRadius()
{
  int retVal = vtk::ConvertManagedToNative<::vtkTubeFilter>(m_instance)->GetVaryRadius();
  return retVal;
}



void vtkTubeFilter::SetVaryRadiusToVaryRadiusOff()
{
  vtk::ConvertManagedToNative<::vtkTubeFilter>(m_instance)->SetVaryRadiusToVaryRadiusOff();
}



void vtkTubeFilter::SetVaryRadiusToVaryRadiusByScalar()
{
  vtk::ConvertManagedToNative<::vtkTubeFilter>(m_instance)->SetVaryRadiusToVaryRadiusByScalar();
}



void vtkTubeFilter::SetVaryRadiusToVaryRadiusByVector()
{
  vtk::ConvertManagedToNative<::vtkTubeFilter>(m_instance)->SetVaryRadiusToVaryRadiusByVector();
}



void vtkTubeFilter::SetVaryRadiusToVaryRadiusByAbsoluteScalar()
{
  vtk::ConvertManagedToNative<::vtkTubeFilter>(m_instance)->SetVaryRadiusToVaryRadiusByAbsoluteScalar();
}



System::String^ vtkTubeFilter::GetVaryRadiusAsString()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkTubeFilter>(m_instance)->GetVaryRadiusAsString();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



void vtkTubeFilter::SetNumberOfSides(int arg0)
{
  vtk::ConvertManagedToNative<::vtkTubeFilter>(m_instance)->SetNumberOfSides(arg0);
}



int vtkTubeFilter::GetNumberOfSidesMinValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkTubeFilter>(m_instance)->GetNumberOfSidesMinValue();
  return retVal;
}



int vtkTubeFilter::GetNumberOfSidesMaxValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkTubeFilter>(m_instance)->GetNumberOfSidesMaxValue();
  return retVal;
}



int vtkTubeFilter::GetNumberOfSides()
{
  int retVal = vtk::ConvertManagedToNative<::vtkTubeFilter>(m_instance)->GetNumberOfSides();
  return retVal;
}



void vtkTubeFilter::SetRadiusFactor(double arg0)
{
  vtk::ConvertManagedToNative<::vtkTubeFilter>(m_instance)->SetRadiusFactor(arg0);
}



double vtkTubeFilter::GetRadiusFactor()
{
  double retVal = vtk::ConvertManagedToNative<::vtkTubeFilter>(m_instance)->GetRadiusFactor();
  return retVal;
}



void vtkTubeFilter::SetDefaultNormal(double arg0, double arg1, double arg2)
{
  vtk::ConvertManagedToNative<::vtkTubeFilter>(m_instance)->SetDefaultNormal(arg0, arg1, arg2);
}



void vtkTubeFilter::SetDefaultNormal(array<double>^ a)
{
  pin_ptr<double> aPin = &a[0];
  double* nativeaPin = aPin;
  vtk::ConvertManagedToNative<::vtkTubeFilter>(m_instance)->SetDefaultNormal(nativeaPin);
}



array<double>^ vtkTubeFilter::GetDefaultNormal()
{
  const double* retVal = vtk::ConvertManagedToNative<::vtkTubeFilter>(m_instance)->GetDefaultNormal();
  array<double>^ mRetVal = gcnew array<double>(3);
  for (size_t cprIdx=0; cprIdx<3; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



void vtkTubeFilter::SetUseDefaultNormal(int arg0)
{
  vtk::ConvertManagedToNative<::vtkTubeFilter>(m_instance)->SetUseDefaultNormal(arg0);
}



int vtkTubeFilter::GetUseDefaultNormal()
{
  int retVal = vtk::ConvertManagedToNative<::vtkTubeFilter>(m_instance)->GetUseDefaultNormal();
  return retVal;
}



void vtkTubeFilter::UseDefaultNormalOn()
{
  vtk::ConvertManagedToNative<::vtkTubeFilter>(m_instance)->UseDefaultNormalOn();
}



void vtkTubeFilter::UseDefaultNormalOff()
{
  vtk::ConvertManagedToNative<::vtkTubeFilter>(m_instance)->UseDefaultNormalOff();
}



void vtkTubeFilter::SetSidesShareVertices(int arg0)
{
  vtk::ConvertManagedToNative<::vtkTubeFilter>(m_instance)->SetSidesShareVertices(arg0);
}



int vtkTubeFilter::GetSidesShareVertices()
{
  int retVal = vtk::ConvertManagedToNative<::vtkTubeFilter>(m_instance)->GetSidesShareVertices();
  return retVal;
}



void vtkTubeFilter::SidesShareVerticesOn()
{
  vtk::ConvertManagedToNative<::vtkTubeFilter>(m_instance)->SidesShareVerticesOn();
}



void vtkTubeFilter::SidesShareVerticesOff()
{
  vtk::ConvertManagedToNative<::vtkTubeFilter>(m_instance)->SidesShareVerticesOff();
}



void vtkTubeFilter::SetCapping(int arg0)
{
  vtk::ConvertManagedToNative<::vtkTubeFilter>(m_instance)->SetCapping(arg0);
}



int vtkTubeFilter::GetCapping()
{
  int retVal = vtk::ConvertManagedToNative<::vtkTubeFilter>(m_instance)->GetCapping();
  return retVal;
}



void vtkTubeFilter::CappingOn()
{
  vtk::ConvertManagedToNative<::vtkTubeFilter>(m_instance)->CappingOn();
}



void vtkTubeFilter::CappingOff()
{
  vtk::ConvertManagedToNative<::vtkTubeFilter>(m_instance)->CappingOff();
}



void vtkTubeFilter::SetOnRatio(int arg0)
{
  vtk::ConvertManagedToNative<::vtkTubeFilter>(m_instance)->SetOnRatio(arg0);
}



int vtkTubeFilter::GetOnRatioMinValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkTubeFilter>(m_instance)->GetOnRatioMinValue();
  return retVal;
}



int vtkTubeFilter::GetOnRatioMaxValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkTubeFilter>(m_instance)->GetOnRatioMaxValue();
  return retVal;
}



int vtkTubeFilter::GetOnRatio()
{
  int retVal = vtk::ConvertManagedToNative<::vtkTubeFilter>(m_instance)->GetOnRatio();
  return retVal;
}



void vtkTubeFilter::SetOffset(int arg0)
{
  vtk::ConvertManagedToNative<::vtkTubeFilter>(m_instance)->SetOffset(arg0);
}



int vtkTubeFilter::GetOffsetMinValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkTubeFilter>(m_instance)->GetOffsetMinValue();
  return retVal;
}



int vtkTubeFilter::GetOffsetMaxValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkTubeFilter>(m_instance)->GetOffsetMaxValue();
  return retVal;
}



int vtkTubeFilter::GetOffset()
{
  int retVal = vtk::ConvertManagedToNative<::vtkTubeFilter>(m_instance)->GetOffset();
  return retVal;
}



void vtkTubeFilter::SetGenerateTCoords(int arg0)
{
  vtk::ConvertManagedToNative<::vtkTubeFilter>(m_instance)->SetGenerateTCoords(arg0);
}



int vtkTubeFilter::GetGenerateTCoordsMinValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkTubeFilter>(m_instance)->GetGenerateTCoordsMinValue();
  return retVal;
}



int vtkTubeFilter::GetGenerateTCoordsMaxValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkTubeFilter>(m_instance)->GetGenerateTCoordsMaxValue();
  return retVal;
}



int vtkTubeFilter::GetGenerateTCoords()
{
  int retVal = vtk::ConvertManagedToNative<::vtkTubeFilter>(m_instance)->GetGenerateTCoords();
  return retVal;
}



void vtkTubeFilter::SetGenerateTCoordsToOff()
{
  vtk::ConvertManagedToNative<::vtkTubeFilter>(m_instance)->SetGenerateTCoordsToOff();
}



void vtkTubeFilter::SetGenerateTCoordsToNormalizedLength()
{
  vtk::ConvertManagedToNative<::vtkTubeFilter>(m_instance)->SetGenerateTCoordsToNormalizedLength();
}



void vtkTubeFilter::SetGenerateTCoordsToUseLength()
{
  vtk::ConvertManagedToNative<::vtkTubeFilter>(m_instance)->SetGenerateTCoordsToUseLength();
}



void vtkTubeFilter::SetGenerateTCoordsToUseScalars()
{
  vtk::ConvertManagedToNative<::vtkTubeFilter>(m_instance)->SetGenerateTCoordsToUseScalars();
}



System::String^ vtkTubeFilter::GetGenerateTCoordsAsString()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkTubeFilter>(m_instance)->GetGenerateTCoordsAsString();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



void vtkTubeFilter::SetTextureLength(double arg0)
{
  vtk::ConvertManagedToNative<::vtkTubeFilter>(m_instance)->SetTextureLength(arg0);
}



double vtkTubeFilter::GetTextureLengthMinValue()
{
  double retVal = vtk::ConvertManagedToNative<::vtkTubeFilter>(m_instance)->GetTextureLengthMinValue();
  return retVal;
}



double vtkTubeFilter::GetTextureLengthMaxValue()
{
  double retVal = vtk::ConvertManagedToNative<::vtkTubeFilter>(m_instance)->GetTextureLengthMaxValue();
  return retVal;
}



double vtkTubeFilter::GetTextureLength()
{
  double retVal = vtk::ConvertManagedToNative<::vtkTubeFilter>(m_instance)->GetTextureLength();
  return retVal;
}



  vtkTubeFilter::vtkTubeFilter(System::IntPtr native, bool bConst) : vtkPolyDataAlgorithm(native, bConst) {}



  vtkTubeFilter::vtkTubeFilter(bool donothing) : vtkPolyDataAlgorithm(donothing) {}



  vtkTubeFilter::vtkTubeFilter() : vtkPolyDataAlgorithm(false) {
  this->SetNativePointer(IntPtr(::vtkTubeFilter::New()));
}



  vtkTubeFilter::~vtkTubeFilter() { }





} // end namespace vtkGraphics
