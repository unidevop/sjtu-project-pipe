

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkLookupTableDotNet.h"
#include "vtkObjectDotNet.h"
#include "vtkUnsignedCharArrayDotNet.h"

// native includes
#include "strstream"
#include "vtkLookupTable.h"
#include "vtkObject.h"
#include "vtkUnsignedCharArray.h"

using namespace System;

namespace vtk {

System::String^ vtkLookupTable::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkLookupTable>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkLookupTable::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkLookupTable>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkLookupTable^ vtkLookupTable::NewInstance()
{
  ::vtkLookupTable* retVal = static_cast<::vtkLookupTable*>(vtk::ConvertManagedToNative<::vtkLookupTable>(m_instance)->NewInstance());
  return gcnew vtkLookupTable(IntPtr(retVal), false);
}



vtkLookupTable^ vtkLookupTable::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkLookupTable* retVal = static_cast<::vtkLookupTable*>(::vtkLookupTable::SafeDownCast(oWrap));
  return gcnew vtkLookupTable(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkLookupTable::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkLookupTable>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkLookupTable::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkLookupTable>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




int vtkLookupTable::Allocate(int sz, int ext)
{
  int retVal = vtk::ConvertManagedToNative<::vtkLookupTable>(m_instance)->Allocate(sz, ext);
  return retVal;
}



void vtkLookupTable::Build()
{
  vtk::ConvertManagedToNative<::vtkLookupTable>(m_instance)->Build();
}



void vtkLookupTable::ForceBuild()
{
  vtk::ConvertManagedToNative<::vtkLookupTable>(m_instance)->ForceBuild();
}



void vtkLookupTable::SetRamp(int arg0)
{
  vtk::ConvertManagedToNative<::vtkLookupTable>(m_instance)->SetRamp(arg0);
}



void vtkLookupTable::SetRampToLinear()
{
  vtk::ConvertManagedToNative<::vtkLookupTable>(m_instance)->SetRampToLinear();
}



void vtkLookupTable::SetRampToSCurve()
{
  vtk::ConvertManagedToNative<::vtkLookupTable>(m_instance)->SetRampToSCurve();
}



void vtkLookupTable::SetRampToSQRT()
{
  vtk::ConvertManagedToNative<::vtkLookupTable>(m_instance)->SetRampToSQRT();
}



int vtkLookupTable::GetRamp()
{
  int retVal = vtk::ConvertManagedToNative<::vtkLookupTable>(m_instance)->GetRamp();
  return retVal;
}



void vtkLookupTable::SetScale(int scale)
{
  vtk::ConvertManagedToNative<::vtkLookupTable>(m_instance)->SetScale(scale);
}



void vtkLookupTable::SetScaleToLinear()
{
  vtk::ConvertManagedToNative<::vtkLookupTable>(m_instance)->SetScaleToLinear();
}



void vtkLookupTable::SetScaleToLog10()
{
  vtk::ConvertManagedToNative<::vtkLookupTable>(m_instance)->SetScaleToLog10();
}



int vtkLookupTable::GetScale()
{
  int retVal = vtk::ConvertManagedToNative<::vtkLookupTable>(m_instance)->GetScale();
  return retVal;
}



void vtkLookupTable::SetTableRange(array<double>^ r)
{
  pin_ptr<double> rPin = &r[0];
  double* nativerPin = rPin;
  vtk::ConvertManagedToNative<::vtkLookupTable>(m_instance)->SetTableRange(nativerPin);
}



void vtkLookupTable::SetTableRange(double min, double max)
{
  vtk::ConvertManagedToNative<::vtkLookupTable>(m_instance)->SetTableRange(min, max);
}



array<double>^ vtkLookupTable::GetTableRange()
{
  const double* retVal = vtk::ConvertManagedToNative<::vtkLookupTable>(m_instance)->GetTableRange();
  array<double>^ mRetVal = gcnew array<double>(2);
  for (size_t cprIdx=0; cprIdx<2; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



void vtkLookupTable::SetHueRange(double arg0, double arg1)
{
  vtk::ConvertManagedToNative<::vtkLookupTable>(m_instance)->SetHueRange(arg0, arg1);
}



void vtkLookupTable::SetHueRange(array<double>^ a)
{
  pin_ptr<double> aPin = &a[0];
  double* nativeaPin = aPin;
  vtk::ConvertManagedToNative<::vtkLookupTable>(m_instance)->SetHueRange(nativeaPin);
}



array<double>^ vtkLookupTable::GetHueRange()
{
  const double* retVal = vtk::ConvertManagedToNative<::vtkLookupTable>(m_instance)->GetHueRange();
  array<double>^ mRetVal = gcnew array<double>(2);
  for (size_t cprIdx=0; cprIdx<2; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



void vtkLookupTable::SetSaturationRange(double arg0, double arg1)
{
  vtk::ConvertManagedToNative<::vtkLookupTable>(m_instance)->SetSaturationRange(arg0, arg1);
}



void vtkLookupTable::SetSaturationRange(array<double>^ a)
{
  pin_ptr<double> aPin = &a[0];
  double* nativeaPin = aPin;
  vtk::ConvertManagedToNative<::vtkLookupTable>(m_instance)->SetSaturationRange(nativeaPin);
}



array<double>^ vtkLookupTable::GetSaturationRange()
{
  const double* retVal = vtk::ConvertManagedToNative<::vtkLookupTable>(m_instance)->GetSaturationRange();
  array<double>^ mRetVal = gcnew array<double>(2);
  for (size_t cprIdx=0; cprIdx<2; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



void vtkLookupTable::SetValueRange(double arg0, double arg1)
{
  vtk::ConvertManagedToNative<::vtkLookupTable>(m_instance)->SetValueRange(arg0, arg1);
}



void vtkLookupTable::SetValueRange(array<double>^ a)
{
  pin_ptr<double> aPin = &a[0];
  double* nativeaPin = aPin;
  vtk::ConvertManagedToNative<::vtkLookupTable>(m_instance)->SetValueRange(nativeaPin);
}



array<double>^ vtkLookupTable::GetValueRange()
{
  const double* retVal = vtk::ConvertManagedToNative<::vtkLookupTable>(m_instance)->GetValueRange();
  array<double>^ mRetVal = gcnew array<double>(2);
  for (size_t cprIdx=0; cprIdx<2; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



void vtkLookupTable::SetAlphaRange(double arg0, double arg1)
{
  vtk::ConvertManagedToNative<::vtkLookupTable>(m_instance)->SetAlphaRange(arg0, arg1);
}



void vtkLookupTable::SetAlphaRange(array<double>^ a)
{
  pin_ptr<double> aPin = &a[0];
  double* nativeaPin = aPin;
  vtk::ConvertManagedToNative<::vtkLookupTable>(m_instance)->SetAlphaRange(nativeaPin);
}



array<double>^ vtkLookupTable::GetAlphaRange()
{
  const double* retVal = vtk::ConvertManagedToNative<::vtkLookupTable>(m_instance)->GetAlphaRange();
  array<double>^ mRetVal = gcnew array<double>(2);
  for (size_t cprIdx=0; cprIdx<2; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



void vtkLookupTable::GetColor(double x, array<double>^ rgb)
{
  pin_ptr<double> rgbPin = &rgb[0];
  double* nativergbPin = rgbPin;
  vtk::ConvertManagedToNative<::vtkLookupTable>(m_instance)->GetColor(x, nativergbPin);
}



double vtkLookupTable::GetOpacity(double v)
{
  double retVal = vtk::ConvertManagedToNative<::vtkLookupTable>(m_instance)->GetOpacity(v);
  return retVal;
}



int vtkLookupTable::GetIndex(double v)
{
  int retVal = vtk::ConvertManagedToNative<::vtkLookupTable>(m_instance)->GetIndex(v);
  return retVal;
}



void vtkLookupTable::SetNumberOfTableValues(int number)
{
  vtk::ConvertManagedToNative<::vtkLookupTable>(m_instance)->SetNumberOfTableValues(number);
}



int vtkLookupTable::GetNumberOfTableValues()
{
  int retVal = vtk::ConvertManagedToNative<::vtkLookupTable>(m_instance)->GetNumberOfTableValues();
  return retVal;
}



void vtkLookupTable::SetTableValue(int indx, array<double>^ rgba)
{
  pin_ptr<double> rgbaPin = &rgba[0];
  double* nativergbaPin = rgbaPin;
  vtk::ConvertManagedToNative<::vtkLookupTable>(m_instance)->SetTableValue(indx, nativergbaPin);
}



void vtkLookupTable::SetTableValue(int indx, double r, double g, double b, double a)
{
  vtk::ConvertManagedToNative<::vtkLookupTable>(m_instance)->SetTableValue(indx, r, g, b, a);
}



array<double>^ vtkLookupTable::GetTableValue(int id)
{
  const double* retVal = vtk::ConvertManagedToNative<::vtkLookupTable>(m_instance)->GetTableValue(id);
  array<double>^ mRetVal = gcnew array<double>(4);
  for (size_t cprIdx=0; cprIdx<4; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



void vtkLookupTable::GetTableValue(int id, array<double>^ rgba)
{
  pin_ptr<double> rgbaPin = &rgba[0];
  double* nativergbaPin = rgbaPin;
  vtk::ConvertManagedToNative<::vtkLookupTable>(m_instance)->GetTableValue(id, nativergbaPin);
}



void vtkLookupTable::SetRange(double min, double max)
{
  vtk::ConvertManagedToNative<::vtkLookupTable>(m_instance)->SetRange(min, max);
}



void vtkLookupTable::SetRange(array<double>^ rng)
{
  pin_ptr<double> rngPin = &rng[0];
  double* nativerngPin = rngPin;
  vtk::ConvertManagedToNative<::vtkLookupTable>(m_instance)->SetRange(nativerngPin);
}



void vtkLookupTable::SetNumberOfColors(int arg0)
{
  vtk::ConvertManagedToNative<::vtkLookupTable>(m_instance)->SetNumberOfColors(arg0);
}



int vtkLookupTable::GetNumberOfColorsMinValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkLookupTable>(m_instance)->GetNumberOfColorsMinValue();
  return retVal;
}



int vtkLookupTable::GetNumberOfColorsMaxValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkLookupTable>(m_instance)->GetNumberOfColorsMaxValue();
  return retVal;
}



int vtkLookupTable::GetNumberOfColors()
{
  int retVal = vtk::ConvertManagedToNative<::vtkLookupTable>(m_instance)->GetNumberOfColors();
  return retVal;
}



void vtkLookupTable::SetTable(vtkUnsignedCharArray^ arg0)
{
  ::vtkUnsignedCharArray* arg0Wrap = vtk::ConvertManagedToNative<::vtkUnsignedCharArray>(arg0->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkLookupTable>(m_instance)->SetTable(arg0Wrap);
}



vtkUnsignedCharArray^ vtkLookupTable::GetTable()
{
  ::vtkUnsignedCharArray* retVal = static_cast<::vtkUnsignedCharArray*>(vtk::ConvertManagedToNative<::vtkLookupTable>(m_instance)->GetTable());
  return gcnew vtkUnsignedCharArray(IntPtr(retVal), false);
}



void vtkLookupTable::MapScalarsThroughTable2(System::IntPtr input, array<unsigned char>^ output, int inputDataType, int numberOfValues, int inputIncrement, int outputIncrement)
{
  pin_ptr<unsigned char> outputPin = &output[0];
  unsigned char* nativeoutputPin = outputPin;
  vtk::ConvertManagedToNative<::vtkLookupTable>(m_instance)->MapScalarsThroughTable2(input.ToPointer(), nativeoutputPin, inputDataType, numberOfValues, inputIncrement, outputIncrement);
}



void vtkLookupTable::DeepCopy(vtkLookupTable^ lut)
{
  ::vtkLookupTable* lutWrap = vtk::ConvertManagedToNative<::vtkLookupTable>(lut->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkLookupTable>(m_instance)->DeepCopy(lutWrap);
}



  vtkLookupTable::vtkLookupTable(System::IntPtr native, bool bConst) : vtkScalarsToColors(native, bConst) {}



  vtkLookupTable::vtkLookupTable(bool donothing) : vtkScalarsToColors(donothing) {}



  vtkLookupTable::vtkLookupTable() : vtkScalarsToColors(false) {
  this->SetNativePointer(IntPtr(::vtkLookupTable::New()));
}



  vtkLookupTable::~vtkLookupTable() { }





} // end namespace vtkCommon
