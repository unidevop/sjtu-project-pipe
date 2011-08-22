

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkScalarsToColorsDotNet.h"
#include "vtkDataArrayDotNet.h"
#include "vtkUnsignedCharArrayDotNet.h"

// native includes
#include "strstream"
#include "vtkScalarsToColors.h"
#include "vtkDataArray.h"
#include "vtkUnsignedCharArray.h"

using namespace System;

namespace vtk {

System::String^ vtkScalarsToColors::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkScalarsToColors>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkScalarsToColors::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkScalarsToColors>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkScalarsToColors^ vtkScalarsToColors::NewInstance()
{
  ::vtkScalarsToColors* retVal = static_cast<::vtkScalarsToColors*>(vtk::ConvertManagedToNative<::vtkScalarsToColors>(m_instance)->NewInstance());
  return gcnew vtkScalarsToColors(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkScalarsToColors::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkScalarsToColors>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkScalarsToColors::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkScalarsToColors>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkScalarsToColors::Build()
{
  vtk::ConvertManagedToNative<::vtkScalarsToColors>(m_instance)->Build();
}



void vtkScalarsToColors::SetRange(double min, double max)
{
  vtk::ConvertManagedToNative<::vtkScalarsToColors>(m_instance)->SetRange(min, max);
}



void vtkScalarsToColors::SetRange(array<double>^ rng)
{
  pin_ptr<double> rngPin = &rng[0];
  double* nativerngPin = rngPin;
  vtk::ConvertManagedToNative<::vtkScalarsToColors>(m_instance)->SetRange(nativerngPin);
}



void vtkScalarsToColors::GetColor(double v, array<double>^ rgb)
{
  pin_ptr<double> rgbPin = &rgb[0];
  double* nativergbPin = rgbPin;
  vtk::ConvertManagedToNative<::vtkScalarsToColors>(m_instance)->GetColor(v, nativergbPin);
}



array<double>^ vtkScalarsToColors::GetColor(double v)
{
  const double* retVal = vtk::ConvertManagedToNative<::vtkScalarsToColors>(m_instance)->GetColor(v);
  array<double>^ mRetVal = gcnew array<double>(3);
  for (size_t cprIdx=0; cprIdx<3; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



double vtkScalarsToColors::GetOpacity(double arg0)
{
  double retVal = vtk::ConvertManagedToNative<::vtkScalarsToColors>(m_instance)->GetOpacity(arg0);
  return retVal;
}



double vtkScalarsToColors::GetLuminance(double x)
{
  double retVal = vtk::ConvertManagedToNative<::vtkScalarsToColors>(m_instance)->GetLuminance(x);
  return retVal;
}



void vtkScalarsToColors::SetAlpha(double alpha)
{
  vtk::ConvertManagedToNative<::vtkScalarsToColors>(m_instance)->SetAlpha(alpha);
}



double vtkScalarsToColors::GetAlpha()
{
  double retVal = vtk::ConvertManagedToNative<::vtkScalarsToColors>(m_instance)->GetAlpha();
  return retVal;
}



vtkUnsignedCharArray^ vtkScalarsToColors::MapScalars(vtkDataArray^ scalars, int colorMode, int component)
{
  ::vtkDataArray* scalarsWrap = vtk::ConvertManagedToNative<::vtkDataArray>(scalars->GetNativePointer());
  ::vtkUnsignedCharArray* retVal = static_cast<::vtkUnsignedCharArray*>(vtk::ConvertManagedToNative<::vtkScalarsToColors>(m_instance)->MapScalars(scalarsWrap, colorMode, component));
  return gcnew vtkUnsignedCharArray(IntPtr(retVal), false);
}



void vtkScalarsToColors::SetVectorMode(int arg0)
{
  vtk::ConvertManagedToNative<::vtkScalarsToColors>(m_instance)->SetVectorMode(arg0);
}



int vtkScalarsToColors::GetVectorMode()
{
  int retVal = vtk::ConvertManagedToNative<::vtkScalarsToColors>(m_instance)->GetVectorMode();
  return retVal;
}



void vtkScalarsToColors::SetVectorModeToMagnitude()
{
  vtk::ConvertManagedToNative<::vtkScalarsToColors>(m_instance)->SetVectorModeToMagnitude();
}



void vtkScalarsToColors::SetVectorModeToComponent()
{
  vtk::ConvertManagedToNative<::vtkScalarsToColors>(m_instance)->SetVectorModeToComponent();
}



void vtkScalarsToColors::SetVectorComponent(int arg0)
{
  vtk::ConvertManagedToNative<::vtkScalarsToColors>(m_instance)->SetVectorComponent(arg0);
}



int vtkScalarsToColors::GetVectorComponent()
{
  int retVal = vtk::ConvertManagedToNative<::vtkScalarsToColors>(m_instance)->GetVectorComponent();
  return retVal;
}



void vtkScalarsToColors::MapScalarsThroughTable(vtkDataArray^ scalars, array<unsigned char>^ output, int outputFormat)
{
  ::vtkDataArray* scalarsWrap = vtk::ConvertManagedToNative<::vtkDataArray>(scalars->GetNativePointer());
  pin_ptr<unsigned char> outputPin = &output[0];
  unsigned char* nativeoutputPin = outputPin;
  vtk::ConvertManagedToNative<::vtkScalarsToColors>(m_instance)->MapScalarsThroughTable(scalarsWrap, nativeoutputPin, outputFormat);
}



void vtkScalarsToColors::MapScalarsThroughTable(vtkDataArray^ scalars, array<unsigned char>^ output)
{
  ::vtkDataArray* scalarsWrap = vtk::ConvertManagedToNative<::vtkDataArray>(scalars->GetNativePointer());
  pin_ptr<unsigned char> outputPin = &output[0];
  unsigned char* nativeoutputPin = outputPin;
  vtk::ConvertManagedToNative<::vtkScalarsToColors>(m_instance)->MapScalarsThroughTable(scalarsWrap, nativeoutputPin);
}



void vtkScalarsToColors::MapScalarsThroughTable2(System::IntPtr input, array<unsigned char>^ output, int inputDataType, int numberOfValues, int inputIncrement, int outputFormat)
{
  pin_ptr<unsigned char> outputPin = &output[0];
  unsigned char* nativeoutputPin = outputPin;
  vtk::ConvertManagedToNative<::vtkScalarsToColors>(m_instance)->MapScalarsThroughTable2(input.ToPointer(), nativeoutputPin, inputDataType, numberOfValues, inputIncrement, outputFormat);
}



vtkUnsignedCharArray^ vtkScalarsToColors::ConvertUnsignedCharToRGBA(vtkUnsignedCharArray^ colors, int numComp, int numTuples)
{
  ::vtkUnsignedCharArray* colorsWrap = vtk::ConvertManagedToNative<::vtkUnsignedCharArray>(colors->GetNativePointer());
  ::vtkUnsignedCharArray* retVal = static_cast<::vtkUnsignedCharArray*>(vtk::ConvertManagedToNative<::vtkScalarsToColors>(m_instance)->ConvertUnsignedCharToRGBA(colorsWrap, numComp, numTuples));
  return gcnew vtkUnsignedCharArray(IntPtr(retVal), false);
}



  vtkScalarsToColors::vtkScalarsToColors(System::IntPtr native, bool bConst) : vtkObject(native, bConst) {}



  vtkScalarsToColors::vtkScalarsToColors(bool donothing) : vtkObject(donothing) {}



  vtkScalarsToColors::vtkScalarsToColors() : vtkObject(false) {
  this->SetNativePointer(IntPtr(::vtkScalarsToColors::New()));
}



  vtkScalarsToColors::~vtkScalarsToColors() { }





} // end namespace vtkCommon
