

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkColorTransferFunctionDotNet.h"

// native includes
#include "strstream"
#include "vtkColorTransferFunction.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkColorTransferFunction::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkColorTransferFunction>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkColorTransferFunction::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkColorTransferFunction>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkColorTransferFunction^ vtkColorTransferFunction::NewInstance()
{
  ::vtkColorTransferFunction* retVal = static_cast<::vtkColorTransferFunction*>(vtk::ConvertManagedToNative<::vtkColorTransferFunction>(m_instance)->NewInstance());
  return gcnew vtkColorTransferFunction(IntPtr(retVal), false);
}



vtkColorTransferFunction^ vtkColorTransferFunction::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkColorTransferFunction* retVal = static_cast<::vtkColorTransferFunction*>(::vtkColorTransferFunction::SafeDownCast(oWrap));
  return gcnew vtkColorTransferFunction(IntPtr(retVal), false);
}



void vtkColorTransferFunction::DeepCopy(vtkColorTransferFunction^ f)
{
  ::vtkColorTransferFunction* fWrap = vtk::ConvertManagedToNative<::vtkColorTransferFunction>(f->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkColorTransferFunction>(m_instance)->DeepCopy(fWrap);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkColorTransferFunction::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkColorTransferFunction>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkColorTransferFunction::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkColorTransferFunction>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




int vtkColorTransferFunction::GetSize()
{
  int retVal = vtk::ConvertManagedToNative<::vtkColorTransferFunction>(m_instance)->GetSize();
  return retVal;
}



int vtkColorTransferFunction::AddRGBPoint(double x, double r, double g, double b)
{
  int retVal = vtk::ConvertManagedToNative<::vtkColorTransferFunction>(m_instance)->AddRGBPoint(x, r, g, b);
  return retVal;
}



int vtkColorTransferFunction::AddHSVPoint(double x, double h, double s, double v)
{
  int retVal = vtk::ConvertManagedToNative<::vtkColorTransferFunction>(m_instance)->AddHSVPoint(x, h, s, v);
  return retVal;
}



int vtkColorTransferFunction::RemovePoint(double x)
{
  int retVal = vtk::ConvertManagedToNative<::vtkColorTransferFunction>(m_instance)->RemovePoint(x);
  return retVal;
}



void vtkColorTransferFunction::AddRGBSegment(double x1, double r1, double g1, double b1, double x2, double r2, double g2, double b2)
{
  vtk::ConvertManagedToNative<::vtkColorTransferFunction>(m_instance)->AddRGBSegment(x1, r1, g1, b1, x2, r2, g2, b2);
}



void vtkColorTransferFunction::AddHSVSegment(double x1, double h1, double s1, double v1, double x2, double h2, double s2, double v2)
{
  vtk::ConvertManagedToNative<::vtkColorTransferFunction>(m_instance)->AddHSVSegment(x1, h1, s1, v1, x2, h2, s2, v2);
}



void vtkColorTransferFunction::RemoveAllPoints()
{
  vtk::ConvertManagedToNative<::vtkColorTransferFunction>(m_instance)->RemoveAllPoints();
}



array<double>^ vtkColorTransferFunction::GetColor(double x)
{
  const double* retVal = vtk::ConvertManagedToNative<::vtkColorTransferFunction>(m_instance)->GetColor(x);
  array<double>^ mRetVal = gcnew array<double>(3);
  for (size_t cprIdx=0; cprIdx<3; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



void vtkColorTransferFunction::GetColor(double x, array<double>^ rgb)
{
  pin_ptr<double> rgbPin = &rgb[0];
  double* nativergbPin = rgbPin;
  vtk::ConvertManagedToNative<::vtkColorTransferFunction>(m_instance)->GetColor(x, nativergbPin);
}



double vtkColorTransferFunction::GetRedValue(double x)
{
  double retVal = vtk::ConvertManagedToNative<::vtkColorTransferFunction>(m_instance)->GetRedValue(x);
  return retVal;
}



double vtkColorTransferFunction::GetGreenValue(double x)
{
  double retVal = vtk::ConvertManagedToNative<::vtkColorTransferFunction>(m_instance)->GetGreenValue(x);
  return retVal;
}



double vtkColorTransferFunction::GetBlueValue(double x)
{
  double retVal = vtk::ConvertManagedToNative<::vtkColorTransferFunction>(m_instance)->GetBlueValue(x);
  return retVal;
}



array<double>^ vtkColorTransferFunction::GetRange()
{
  const double* retVal = vtk::ConvertManagedToNative<::vtkColorTransferFunction>(m_instance)->GetRange();
  array<double>^ mRetVal = gcnew array<double>(2);
  for (size_t cprIdx=0; cprIdx<2; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



int vtkColorTransferFunction::AdjustRange(array<double>^ range)
{
  pin_ptr<double> rangePin = &range[0];
  double* nativerangePin = rangePin;
  int retVal = vtk::ConvertManagedToNative<::vtkColorTransferFunction>(m_instance)->AdjustRange(nativerangePin);
  return retVal;
}



void vtkColorTransferFunction::GetTable(double x1, double x2, int n, array<double>^ table)
{
  pin_ptr<double> tablePin = &table[0];
  double* nativetablePin = tablePin;
  vtk::ConvertManagedToNative<::vtkColorTransferFunction>(m_instance)->GetTable(x1, x2, n, nativetablePin);
}



void vtkColorTransferFunction::GetTable(double x1, double x2, int n, array<float>^ table)
{
  pin_ptr<float> tablePin = &table[0];
  float* nativetablePin = tablePin;
  vtk::ConvertManagedToNative<::vtkColorTransferFunction>(m_instance)->GetTable(x1, x2, n, nativetablePin);
}



void vtkColorTransferFunction::BuildFunctionFromTable(double x1, double x2, int size, array<double>^ table)
{
  pin_ptr<double> tablePin = &table[0];
  double* nativetablePin = tablePin;
  vtk::ConvertManagedToNative<::vtkColorTransferFunction>(m_instance)->BuildFunctionFromTable(x1, x2, size, nativetablePin);
}



void vtkColorTransferFunction::SetClamping(int arg0)
{
  vtk::ConvertManagedToNative<::vtkColorTransferFunction>(m_instance)->SetClamping(arg0);
}



int vtkColorTransferFunction::GetClampingMinValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkColorTransferFunction>(m_instance)->GetClampingMinValue();
  return retVal;
}



int vtkColorTransferFunction::GetClampingMaxValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkColorTransferFunction>(m_instance)->GetClampingMaxValue();
  return retVal;
}



int vtkColorTransferFunction::GetClamping()
{
  int retVal = vtk::ConvertManagedToNative<::vtkColorTransferFunction>(m_instance)->GetClamping();
  return retVal;
}



void vtkColorTransferFunction::ClampingOn()
{
  vtk::ConvertManagedToNative<::vtkColorTransferFunction>(m_instance)->ClampingOn();
}



void vtkColorTransferFunction::ClampingOff()
{
  vtk::ConvertManagedToNative<::vtkColorTransferFunction>(m_instance)->ClampingOff();
}



void vtkColorTransferFunction::SetColorSpace(int arg0)
{
  vtk::ConvertManagedToNative<::vtkColorTransferFunction>(m_instance)->SetColorSpace(arg0);
}



int vtkColorTransferFunction::GetColorSpaceMinValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkColorTransferFunction>(m_instance)->GetColorSpaceMinValue();
  return retVal;
}



int vtkColorTransferFunction::GetColorSpaceMaxValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkColorTransferFunction>(m_instance)->GetColorSpaceMaxValue();
  return retVal;
}



void vtkColorTransferFunction::SetColorSpaceToRGB()
{
  vtk::ConvertManagedToNative<::vtkColorTransferFunction>(m_instance)->SetColorSpaceToRGB();
}



void vtkColorTransferFunction::SetColorSpaceToHSV()
{
  vtk::ConvertManagedToNative<::vtkColorTransferFunction>(m_instance)->SetColorSpaceToHSV();
}



int vtkColorTransferFunction::GetColorSpace()
{
  int retVal = vtk::ConvertManagedToNative<::vtkColorTransferFunction>(m_instance)->GetColorSpace();
  return retVal;
}



void vtkColorTransferFunction::SetHSVWrap(int arg0)
{
  vtk::ConvertManagedToNative<::vtkColorTransferFunction>(m_instance)->SetHSVWrap(arg0);
}



int vtkColorTransferFunction::GetHSVWrap()
{
  int retVal = vtk::ConvertManagedToNative<::vtkColorTransferFunction>(m_instance)->GetHSVWrap();
  return retVal;
}



void vtkColorTransferFunction::HSVWrapOn()
{
  vtk::ConvertManagedToNative<::vtkColorTransferFunction>(m_instance)->HSVWrapOn();
}



void vtkColorTransferFunction::HSVWrapOff()
{
  vtk::ConvertManagedToNative<::vtkColorTransferFunction>(m_instance)->HSVWrapOff();
}



void vtkColorTransferFunction::SetColorSpaceToHSVNoWrap()
{
  vtk::ConvertManagedToNative<::vtkColorTransferFunction>(m_instance)->SetColorSpaceToHSVNoWrap();
}



void vtkColorTransferFunction::FillFromDataPointer(int arg0, array<double>^ arg1)
{
  pin_ptr<double> arg1Pin = &arg1[0];
  double* nativearg1Pin = arg1Pin;
  vtk::ConvertManagedToNative<::vtkColorTransferFunction>(m_instance)->FillFromDataPointer(arg0, nativearg1Pin);
}



void vtkColorTransferFunction::MapScalarsThroughTable2(System::IntPtr input, array<unsigned char>^ output, int inputDataType, int numberOfValues, int inputIncrement, int outputIncrement)
{
  pin_ptr<unsigned char> outputPin = &output[0];
  unsigned char* nativeoutputPin = outputPin;
  vtk::ConvertManagedToNative<::vtkColorTransferFunction>(m_instance)->MapScalarsThroughTable2(input.ToPointer(), nativeoutputPin, inputDataType, numberOfValues, inputIncrement, outputIncrement);
}



  vtkColorTransferFunction::vtkColorTransferFunction(System::IntPtr native, bool bConst) : vtkScalarsToColors(native, bConst) {}



  vtkColorTransferFunction::vtkColorTransferFunction(bool donothing) : vtkScalarsToColors(donothing) {}



  vtkColorTransferFunction::vtkColorTransferFunction() : vtkScalarsToColors(false) {
  this->SetNativePointer(IntPtr(::vtkColorTransferFunction::New()));
}



  vtkColorTransferFunction::~vtkColorTransferFunction() { }





} // end namespace vtkFiltering
