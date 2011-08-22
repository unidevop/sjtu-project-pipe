

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkGaussianSplatterDotNet.h"

// native includes
#include "strstream"
#include "vtkGaussianSplatter.h"
#include "vtkDataSet.h"
#include "vtkImageData.h"
#include "vtkInformation.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkGaussianSplatter::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkGaussianSplatter>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkGaussianSplatter::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkGaussianSplatter>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkGaussianSplatter^ vtkGaussianSplatter::NewInstance()
{
  ::vtkGaussianSplatter* retVal = static_cast<::vtkGaussianSplatter*>(vtk::ConvertManagedToNative<::vtkGaussianSplatter>(m_instance)->NewInstance());
  return gcnew vtkGaussianSplatter(IntPtr(retVal), false);
}



vtkGaussianSplatter^ vtkGaussianSplatter::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkGaussianSplatter* retVal = static_cast<::vtkGaussianSplatter*>(::vtkGaussianSplatter::SafeDownCast(oWrap));
  return gcnew vtkGaussianSplatter(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkGaussianSplatter::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkGaussianSplatter>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkGaussianSplatter::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkGaussianSplatter>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkGaussianSplatter::SetSampleDimensions(int i, int j, int k)
{
  vtk::ConvertManagedToNative<::vtkGaussianSplatter>(m_instance)->SetSampleDimensions(i, j, k);
}



void vtkGaussianSplatter::SetSampleDimensions(array<int>^ dim)
{
  pin_ptr<int> dimPin = &dim[0];
  int* nativedimPin = dimPin;
  vtk::ConvertManagedToNative<::vtkGaussianSplatter>(m_instance)->SetSampleDimensions(nativedimPin);
}



array<int>^ vtkGaussianSplatter::GetSampleDimensions()
{
  const int* retVal = vtk::ConvertManagedToNative<::vtkGaussianSplatter>(m_instance)->GetSampleDimensions();
  array<int>^ mRetVal = gcnew array<int>(3);
  for (size_t cprIdx=0; cprIdx<3; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



void vtkGaussianSplatter::SetModelBounds(double arg0, double arg1, double arg2, double arg3, double arg4, double arg5)
{
  vtk::ConvertManagedToNative<::vtkGaussianSplatter>(m_instance)->SetModelBounds(arg0, arg1, arg2, arg3, arg4, arg5);
}



void vtkGaussianSplatter::SetModelBounds(array<double>^ a)
{
  pin_ptr<double> aPin = &a[0];
  double* nativeaPin = aPin;
  vtk::ConvertManagedToNative<::vtkGaussianSplatter>(m_instance)->SetModelBounds(nativeaPin);
}



array<double>^ vtkGaussianSplatter::GetModelBounds()
{
  const double* retVal = vtk::ConvertManagedToNative<::vtkGaussianSplatter>(m_instance)->GetModelBounds();
  array<double>^ mRetVal = gcnew array<double>(6);
  for (size_t cprIdx=0; cprIdx<6; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



void vtkGaussianSplatter::SetRadius(double arg0)
{
  vtk::ConvertManagedToNative<::vtkGaussianSplatter>(m_instance)->SetRadius(arg0);
}



double vtkGaussianSplatter::GetRadiusMinValue()
{
  double retVal = vtk::ConvertManagedToNative<::vtkGaussianSplatter>(m_instance)->GetRadiusMinValue();
  return retVal;
}



double vtkGaussianSplatter::GetRadiusMaxValue()
{
  double retVal = vtk::ConvertManagedToNative<::vtkGaussianSplatter>(m_instance)->GetRadiusMaxValue();
  return retVal;
}



double vtkGaussianSplatter::GetRadius()
{
  double retVal = vtk::ConvertManagedToNative<::vtkGaussianSplatter>(m_instance)->GetRadius();
  return retVal;
}



void vtkGaussianSplatter::SetScaleFactor(double arg0)
{
  vtk::ConvertManagedToNative<::vtkGaussianSplatter>(m_instance)->SetScaleFactor(arg0);
}



double vtkGaussianSplatter::GetScaleFactorMinValue()
{
  double retVal = vtk::ConvertManagedToNative<::vtkGaussianSplatter>(m_instance)->GetScaleFactorMinValue();
  return retVal;
}



double vtkGaussianSplatter::GetScaleFactorMaxValue()
{
  double retVal = vtk::ConvertManagedToNative<::vtkGaussianSplatter>(m_instance)->GetScaleFactorMaxValue();
  return retVal;
}



double vtkGaussianSplatter::GetScaleFactor()
{
  double retVal = vtk::ConvertManagedToNative<::vtkGaussianSplatter>(m_instance)->GetScaleFactor();
  return retVal;
}



void vtkGaussianSplatter::SetExponentFactor(double arg0)
{
  vtk::ConvertManagedToNative<::vtkGaussianSplatter>(m_instance)->SetExponentFactor(arg0);
}



double vtkGaussianSplatter::GetExponentFactor()
{
  double retVal = vtk::ConvertManagedToNative<::vtkGaussianSplatter>(m_instance)->GetExponentFactor();
  return retVal;
}



void vtkGaussianSplatter::SetNormalWarping(int arg0)
{
  vtk::ConvertManagedToNative<::vtkGaussianSplatter>(m_instance)->SetNormalWarping(arg0);
}



int vtkGaussianSplatter::GetNormalWarping()
{
  int retVal = vtk::ConvertManagedToNative<::vtkGaussianSplatter>(m_instance)->GetNormalWarping();
  return retVal;
}



void vtkGaussianSplatter::NormalWarpingOn()
{
  vtk::ConvertManagedToNative<::vtkGaussianSplatter>(m_instance)->NormalWarpingOn();
}



void vtkGaussianSplatter::NormalWarpingOff()
{
  vtk::ConvertManagedToNative<::vtkGaussianSplatter>(m_instance)->NormalWarpingOff();
}



void vtkGaussianSplatter::SetEccentricity(double arg0)
{
  vtk::ConvertManagedToNative<::vtkGaussianSplatter>(m_instance)->SetEccentricity(arg0);
}



double vtkGaussianSplatter::GetEccentricityMinValue()
{
  double retVal = vtk::ConvertManagedToNative<::vtkGaussianSplatter>(m_instance)->GetEccentricityMinValue();
  return retVal;
}



double vtkGaussianSplatter::GetEccentricityMaxValue()
{
  double retVal = vtk::ConvertManagedToNative<::vtkGaussianSplatter>(m_instance)->GetEccentricityMaxValue();
  return retVal;
}



double vtkGaussianSplatter::GetEccentricity()
{
  double retVal = vtk::ConvertManagedToNative<::vtkGaussianSplatter>(m_instance)->GetEccentricity();
  return retVal;
}



void vtkGaussianSplatter::SetScalarWarping(int arg0)
{
  vtk::ConvertManagedToNative<::vtkGaussianSplatter>(m_instance)->SetScalarWarping(arg0);
}



int vtkGaussianSplatter::GetScalarWarping()
{
  int retVal = vtk::ConvertManagedToNative<::vtkGaussianSplatter>(m_instance)->GetScalarWarping();
  return retVal;
}



void vtkGaussianSplatter::ScalarWarpingOn()
{
  vtk::ConvertManagedToNative<::vtkGaussianSplatter>(m_instance)->ScalarWarpingOn();
}



void vtkGaussianSplatter::ScalarWarpingOff()
{
  vtk::ConvertManagedToNative<::vtkGaussianSplatter>(m_instance)->ScalarWarpingOff();
}



void vtkGaussianSplatter::SetCapping(int arg0)
{
  vtk::ConvertManagedToNative<::vtkGaussianSplatter>(m_instance)->SetCapping(arg0);
}



int vtkGaussianSplatter::GetCapping()
{
  int retVal = vtk::ConvertManagedToNative<::vtkGaussianSplatter>(m_instance)->GetCapping();
  return retVal;
}



void vtkGaussianSplatter::CappingOn()
{
  vtk::ConvertManagedToNative<::vtkGaussianSplatter>(m_instance)->CappingOn();
}



void vtkGaussianSplatter::CappingOff()
{
  vtk::ConvertManagedToNative<::vtkGaussianSplatter>(m_instance)->CappingOff();
}



void vtkGaussianSplatter::SetCapValue(double arg0)
{
  vtk::ConvertManagedToNative<::vtkGaussianSplatter>(m_instance)->SetCapValue(arg0);
}



double vtkGaussianSplatter::GetCapValue()
{
  double retVal = vtk::ConvertManagedToNative<::vtkGaussianSplatter>(m_instance)->GetCapValue();
  return retVal;
}



void vtkGaussianSplatter::SetAccumulationMode(int arg0)
{
  vtk::ConvertManagedToNative<::vtkGaussianSplatter>(m_instance)->SetAccumulationMode(arg0);
}



int vtkGaussianSplatter::GetAccumulationModeMinValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkGaussianSplatter>(m_instance)->GetAccumulationModeMinValue();
  return retVal;
}



int vtkGaussianSplatter::GetAccumulationModeMaxValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkGaussianSplatter>(m_instance)->GetAccumulationModeMaxValue();
  return retVal;
}



int vtkGaussianSplatter::GetAccumulationMode()
{
  int retVal = vtk::ConvertManagedToNative<::vtkGaussianSplatter>(m_instance)->GetAccumulationMode();
  return retVal;
}



void vtkGaussianSplatter::SetAccumulationModeToMin()
{
  vtk::ConvertManagedToNative<::vtkGaussianSplatter>(m_instance)->SetAccumulationModeToMin();
}



void vtkGaussianSplatter::SetAccumulationModeToMax()
{
  vtk::ConvertManagedToNative<::vtkGaussianSplatter>(m_instance)->SetAccumulationModeToMax();
}



void vtkGaussianSplatter::SetAccumulationModeToSum()
{
  vtk::ConvertManagedToNative<::vtkGaussianSplatter>(m_instance)->SetAccumulationModeToSum();
}



System::String^ vtkGaussianSplatter::GetAccumulationModeAsString()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkGaussianSplatter>(m_instance)->GetAccumulationModeAsString();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



void vtkGaussianSplatter::SetNullValue(double arg0)
{
  vtk::ConvertManagedToNative<::vtkGaussianSplatter>(m_instance)->SetNullValue(arg0);
}



double vtkGaussianSplatter::GetNullValue()
{
  double retVal = vtk::ConvertManagedToNative<::vtkGaussianSplatter>(m_instance)->GetNullValue();
  return retVal;
}



void vtkGaussianSplatter::ComputeModelBounds(vtkDataSet^ input, vtkImageData^ output, vtkInformation^ outInfo)
{
  ::vtkDataSet* inputWrap = vtk::ConvertManagedToNative<::vtkDataSet>(input->GetNativePointer());
  ::vtkImageData* outputWrap = vtk::ConvertManagedToNative<::vtkImageData>(output->GetNativePointer());
  ::vtkInformation* outInfoWrap = vtk::ConvertManagedToNative<::vtkInformation>(outInfo->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkGaussianSplatter>(m_instance)->ComputeModelBounds(inputWrap, outputWrap, outInfoWrap);
}



  vtkGaussianSplatter::vtkGaussianSplatter(System::IntPtr native, bool bConst) : vtkImageAlgorithm(native, bConst) {}



  vtkGaussianSplatter::vtkGaussianSplatter(bool donothing) : vtkImageAlgorithm(donothing) {}



  vtkGaussianSplatter::vtkGaussianSplatter() : vtkImageAlgorithm(false) {
  this->SetNativePointer(IntPtr(::vtkGaussianSplatter::New()));
}



  vtkGaussianSplatter::~vtkGaussianSplatter() { }





} // end namespace vtkImaging
