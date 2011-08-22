

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkImageResliceDotNet.h"
#include "vtkImageStencilDataDotNet.h"

// native includes
#include "strstream"
#include "vtkImageReslice.h"
#include "vtkAbstractTransform.h"
#include "vtkImageData.h"
#include "vtkImageStencilData.h"
#include "vtkMatrix4x4.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkImageReslice::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkImageReslice>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkImageReslice::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkImageReslice>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkImageReslice^ vtkImageReslice::NewInstance()
{
  ::vtkImageReslice* retVal = static_cast<::vtkImageReslice*>(vtk::ConvertManagedToNative<::vtkImageReslice>(m_instance)->NewInstance());
  return gcnew vtkImageReslice(IntPtr(retVal), false);
}



vtkImageReslice^ vtkImageReslice::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkImageReslice* retVal = static_cast<::vtkImageReslice*>(::vtkImageReslice::SafeDownCast(oWrap));
  return gcnew vtkImageReslice(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkImageReslice::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkImageReslice>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkImageReslice::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkImageReslice>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkImageReslice::SetResliceAxes(vtkMatrix4x4^ arg0)
{
  ::vtkMatrix4x4* arg0Wrap = vtk::ConvertManagedToNative<::vtkMatrix4x4>(arg0->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkImageReslice>(m_instance)->SetResliceAxes(arg0Wrap);
}



vtkMatrix4x4^ vtkImageReslice::GetResliceAxes()
{
  ::vtkMatrix4x4* retVal = static_cast<::vtkMatrix4x4*>(vtk::ConvertManagedToNative<::vtkImageReslice>(m_instance)->GetResliceAxes());
  return gcnew vtkMatrix4x4(IntPtr(retVal), false);
}



void vtkImageReslice::SetResliceAxesDirectionCosines(double x0, double x1, double x2, double y0, double y1, double y2, double z0, double z1, double z2)
{
  vtk::ConvertManagedToNative<::vtkImageReslice>(m_instance)->SetResliceAxesDirectionCosines(x0, x1, x2, y0, y1, y2, z0, z1, z2);
}



void vtkImageReslice::SetResliceAxesDirectionCosines(array<double>^ x, array<double>^ y, array<double>^ z)
{
  pin_ptr<double> xPin = &x[0];
  double* nativexPin = xPin;
  pin_ptr<double> yPin = &y[0];
  double* nativeyPin = yPin;
  pin_ptr<double> zPin = &z[0];
  double* nativezPin = zPin;
  vtk::ConvertManagedToNative<::vtkImageReslice>(m_instance)->SetResliceAxesDirectionCosines(nativexPin, nativeyPin, nativezPin);
}



void vtkImageReslice::SetResliceAxesDirectionCosines(array<double>^ xyz)
{
  pin_ptr<double> xyzPin = &xyz[0];
  double* nativexyzPin = xyzPin;
  vtk::ConvertManagedToNative<::vtkImageReslice>(m_instance)->SetResliceAxesDirectionCosines(nativexyzPin);
}



void vtkImageReslice::GetResliceAxesDirectionCosines(array<double>^ x, array<double>^ y, array<double>^ z)
{
  pin_ptr<double> xPin = &x[0];
  double* nativexPin = xPin;
  pin_ptr<double> yPin = &y[0];
  double* nativeyPin = yPin;
  pin_ptr<double> zPin = &z[0];
  double* nativezPin = zPin;
  vtk::ConvertManagedToNative<::vtkImageReslice>(m_instance)->GetResliceAxesDirectionCosines(nativexPin, nativeyPin, nativezPin);
}



void vtkImageReslice::GetResliceAxesDirectionCosines(array<double>^ xyz)
{
  pin_ptr<double> xyzPin = &xyz[0];
  double* nativexyzPin = xyzPin;
  vtk::ConvertManagedToNative<::vtkImageReslice>(m_instance)->GetResliceAxesDirectionCosines(nativexyzPin);
}



array<double>^ vtkImageReslice::GetResliceAxesDirectionCosines()
{
  const double* retVal = vtk::ConvertManagedToNative<::vtkImageReslice>(m_instance)->GetResliceAxesDirectionCosines();
  array<double>^ mRetVal = gcnew array<double>(9);
  for (size_t cprIdx=0; cprIdx<9; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



void vtkImageReslice::SetResliceAxesOrigin(double x, double y, double z)
{
  vtk::ConvertManagedToNative<::vtkImageReslice>(m_instance)->SetResliceAxesOrigin(x, y, z);
}



void vtkImageReslice::SetResliceAxesOrigin(array<double>^ xyz)
{
  pin_ptr<double> xyzPin = &xyz[0];
  double* nativexyzPin = xyzPin;
  vtk::ConvertManagedToNative<::vtkImageReslice>(m_instance)->SetResliceAxesOrigin(nativexyzPin);
}



void vtkImageReslice::GetResliceAxesOrigin(array<double>^ xyz)
{
  pin_ptr<double> xyzPin = &xyz[0];
  double* nativexyzPin = xyzPin;
  vtk::ConvertManagedToNative<::vtkImageReslice>(m_instance)->GetResliceAxesOrigin(nativexyzPin);
}



array<double>^ vtkImageReslice::GetResliceAxesOrigin()
{
  const double* retVal = vtk::ConvertManagedToNative<::vtkImageReslice>(m_instance)->GetResliceAxesOrigin();
  array<double>^ mRetVal = gcnew array<double>(3);
  for (size_t cprIdx=0; cprIdx<3; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



void vtkImageReslice::SetResliceTransform(vtkAbstractTransform^ arg0)
{
  ::vtkAbstractTransform* arg0Wrap = vtk::ConvertManagedToNative<::vtkAbstractTransform>(arg0->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkImageReslice>(m_instance)->SetResliceTransform(arg0Wrap);
}



vtkAbstractTransform^ vtkImageReslice::GetResliceTransform()
{
  ::vtkAbstractTransform* retVal = static_cast<::vtkAbstractTransform*>(vtk::ConvertManagedToNative<::vtkImageReslice>(m_instance)->GetResliceTransform());
  return gcnew vtkAbstractTransform(IntPtr(retVal), false);
}



void vtkImageReslice::SetInformationInput(vtkImageData^ arg0)
{
  ::vtkImageData* arg0Wrap = vtk::ConvertManagedToNative<::vtkImageData>(arg0->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkImageReslice>(m_instance)->SetInformationInput(arg0Wrap);
}



vtkImageData^ vtkImageReslice::GetInformationInput()
{
  ::vtkImageData* retVal = static_cast<::vtkImageData*>(vtk::ConvertManagedToNative<::vtkImageReslice>(m_instance)->GetInformationInput());
  return gcnew vtkImageData(IntPtr(retVal), false);
}



void vtkImageReslice::SetTransformInputSampling(int arg0)
{
  vtk::ConvertManagedToNative<::vtkImageReslice>(m_instance)->SetTransformInputSampling(arg0);
}



void vtkImageReslice::TransformInputSamplingOn()
{
  vtk::ConvertManagedToNative<::vtkImageReslice>(m_instance)->TransformInputSamplingOn();
}



void vtkImageReslice::TransformInputSamplingOff()
{
  vtk::ConvertManagedToNative<::vtkImageReslice>(m_instance)->TransformInputSamplingOff();
}



int vtkImageReslice::GetTransformInputSampling()
{
  int retVal = vtk::ConvertManagedToNative<::vtkImageReslice>(m_instance)->GetTransformInputSampling();
  return retVal;
}



void vtkImageReslice::SetAutoCropOutput(int arg0)
{
  vtk::ConvertManagedToNative<::vtkImageReslice>(m_instance)->SetAutoCropOutput(arg0);
}



void vtkImageReslice::AutoCropOutputOn()
{
  vtk::ConvertManagedToNative<::vtkImageReslice>(m_instance)->AutoCropOutputOn();
}



void vtkImageReslice::AutoCropOutputOff()
{
  vtk::ConvertManagedToNative<::vtkImageReslice>(m_instance)->AutoCropOutputOff();
}



int vtkImageReslice::GetAutoCropOutput()
{
  int retVal = vtk::ConvertManagedToNative<::vtkImageReslice>(m_instance)->GetAutoCropOutput();
  return retVal;
}



void vtkImageReslice::SetWrap(int arg0)
{
  vtk::ConvertManagedToNative<::vtkImageReslice>(m_instance)->SetWrap(arg0);
}



int vtkImageReslice::GetWrap()
{
  int retVal = vtk::ConvertManagedToNative<::vtkImageReslice>(m_instance)->GetWrap();
  return retVal;
}



void vtkImageReslice::WrapOn()
{
  vtk::ConvertManagedToNative<::vtkImageReslice>(m_instance)->WrapOn();
}



void vtkImageReslice::WrapOff()
{
  vtk::ConvertManagedToNative<::vtkImageReslice>(m_instance)->WrapOff();
}



void vtkImageReslice::SetMirror(int arg0)
{
  vtk::ConvertManagedToNative<::vtkImageReslice>(m_instance)->SetMirror(arg0);
}



int vtkImageReslice::GetMirror()
{
  int retVal = vtk::ConvertManagedToNative<::vtkImageReslice>(m_instance)->GetMirror();
  return retVal;
}



void vtkImageReslice::MirrorOn()
{
  vtk::ConvertManagedToNative<::vtkImageReslice>(m_instance)->MirrorOn();
}



void vtkImageReslice::MirrorOff()
{
  vtk::ConvertManagedToNative<::vtkImageReslice>(m_instance)->MirrorOff();
}



void vtkImageReslice::SetBorder(int arg0)
{
  vtk::ConvertManagedToNative<::vtkImageReslice>(m_instance)->SetBorder(arg0);
}



int vtkImageReslice::GetBorder()
{
  int retVal = vtk::ConvertManagedToNative<::vtkImageReslice>(m_instance)->GetBorder();
  return retVal;
}



void vtkImageReslice::BorderOn()
{
  vtk::ConvertManagedToNative<::vtkImageReslice>(m_instance)->BorderOn();
}



void vtkImageReslice::BorderOff()
{
  vtk::ConvertManagedToNative<::vtkImageReslice>(m_instance)->BorderOff();
}



void vtkImageReslice::SetInterpolationMode(int arg0)
{
  vtk::ConvertManagedToNative<::vtkImageReslice>(m_instance)->SetInterpolationMode(arg0);
}



int vtkImageReslice::GetInterpolationMode()
{
  int retVal = vtk::ConvertManagedToNative<::vtkImageReslice>(m_instance)->GetInterpolationMode();
  return retVal;
}



void vtkImageReslice::SetInterpolationModeToNearestNeighbor()
{
  vtk::ConvertManagedToNative<::vtkImageReslice>(m_instance)->SetInterpolationModeToNearestNeighbor();
}



void vtkImageReslice::SetInterpolationModeToLinear()
{
  vtk::ConvertManagedToNative<::vtkImageReslice>(m_instance)->SetInterpolationModeToLinear();
}



void vtkImageReslice::SetInterpolationModeToCubic()
{
  vtk::ConvertManagedToNative<::vtkImageReslice>(m_instance)->SetInterpolationModeToCubic();
}



System::String^ vtkImageReslice::GetInterpolationModeAsString()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkImageReslice>(m_instance)->GetInterpolationModeAsString();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



void vtkImageReslice::SetOptimization(int arg0)
{
  vtk::ConvertManagedToNative<::vtkImageReslice>(m_instance)->SetOptimization(arg0);
}



int vtkImageReslice::GetOptimization()
{
  int retVal = vtk::ConvertManagedToNative<::vtkImageReslice>(m_instance)->GetOptimization();
  return retVal;
}



void vtkImageReslice::OptimizationOn()
{
  vtk::ConvertManagedToNative<::vtkImageReslice>(m_instance)->OptimizationOn();
}



void vtkImageReslice::OptimizationOff()
{
  vtk::ConvertManagedToNative<::vtkImageReslice>(m_instance)->OptimizationOff();
}



void vtkImageReslice::SetBackgroundColor(double arg0, double arg1, double arg2, double arg3)
{
  vtk::ConvertManagedToNative<::vtkImageReslice>(m_instance)->SetBackgroundColor(arg0, arg1, arg2, arg3);
}



void vtkImageReslice::SetBackgroundColor(array<double>^ a)
{
  pin_ptr<double> aPin = &a[0];
  double* nativeaPin = aPin;
  vtk::ConvertManagedToNative<::vtkImageReslice>(m_instance)->SetBackgroundColor(nativeaPin);
}



array<double>^ vtkImageReslice::GetBackgroundColor()
{
  const double* retVal = vtk::ConvertManagedToNative<::vtkImageReslice>(m_instance)->GetBackgroundColor();
  array<double>^ mRetVal = gcnew array<double>(4);
  for (size_t cprIdx=0; cprIdx<4; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



void vtkImageReslice::SetBackgroundLevel(double v)
{
  vtk::ConvertManagedToNative<::vtkImageReslice>(m_instance)->SetBackgroundLevel(v);
}



double vtkImageReslice::GetBackgroundLevel()
{
  double retVal = vtk::ConvertManagedToNative<::vtkImageReslice>(m_instance)->GetBackgroundLevel();
  return retVal;
}



void vtkImageReslice::SetOutputSpacing(double arg0, double arg1, double arg2)
{
  vtk::ConvertManagedToNative<::vtkImageReslice>(m_instance)->SetOutputSpacing(arg0, arg1, arg2);
}



void vtkImageReslice::SetOutputSpacing(array<double>^ a)
{
  pin_ptr<double> aPin = &a[0];
  double* nativeaPin = aPin;
  vtk::ConvertManagedToNative<::vtkImageReslice>(m_instance)->SetOutputSpacing(nativeaPin);
}



array<double>^ vtkImageReslice::GetOutputSpacing()
{
  const double* retVal = vtk::ConvertManagedToNative<::vtkImageReslice>(m_instance)->GetOutputSpacing();
  array<double>^ mRetVal = gcnew array<double>(3);
  for (size_t cprIdx=0; cprIdx<3; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



void vtkImageReslice::SetOutputSpacingToDefault()
{
  vtk::ConvertManagedToNative<::vtkImageReslice>(m_instance)->SetOutputSpacingToDefault();
}



void vtkImageReslice::SetOutputOrigin(double arg0, double arg1, double arg2)
{
  vtk::ConvertManagedToNative<::vtkImageReslice>(m_instance)->SetOutputOrigin(arg0, arg1, arg2);
}



void vtkImageReslice::SetOutputOrigin(array<double>^ a)
{
  pin_ptr<double> aPin = &a[0];
  double* nativeaPin = aPin;
  vtk::ConvertManagedToNative<::vtkImageReslice>(m_instance)->SetOutputOrigin(nativeaPin);
}



array<double>^ vtkImageReslice::GetOutputOrigin()
{
  const double* retVal = vtk::ConvertManagedToNative<::vtkImageReslice>(m_instance)->GetOutputOrigin();
  array<double>^ mRetVal = gcnew array<double>(3);
  for (size_t cprIdx=0; cprIdx<3; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



void vtkImageReslice::SetOutputOriginToDefault()
{
  vtk::ConvertManagedToNative<::vtkImageReslice>(m_instance)->SetOutputOriginToDefault();
}



void vtkImageReslice::SetOutputExtent(int arg0, int arg1, int arg2, int arg3, int arg4, int arg5)
{
  vtk::ConvertManagedToNative<::vtkImageReslice>(m_instance)->SetOutputExtent(arg0, arg1, arg2, arg3, arg4, arg5);
}



void vtkImageReslice::SetOutputExtent(array<int>^ a)
{
  pin_ptr<int> aPin = &a[0];
  int* nativeaPin = aPin;
  vtk::ConvertManagedToNative<::vtkImageReslice>(m_instance)->SetOutputExtent(nativeaPin);
}



array<int>^ vtkImageReslice::GetOutputExtent()
{
  const int* retVal = vtk::ConvertManagedToNative<::vtkImageReslice>(m_instance)->GetOutputExtent();
  array<int>^ mRetVal = gcnew array<int>(6);
  for (size_t cprIdx=0; cprIdx<6; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



void vtkImageReslice::SetOutputExtentToDefault()
{
  vtk::ConvertManagedToNative<::vtkImageReslice>(m_instance)->SetOutputExtentToDefault();
}



void vtkImageReslice::SetOutputDimensionality(int arg0)
{
  vtk::ConvertManagedToNative<::vtkImageReslice>(m_instance)->SetOutputDimensionality(arg0);
}



int vtkImageReslice::GetOutputDimensionality()
{
  int retVal = vtk::ConvertManagedToNative<::vtkImageReslice>(m_instance)->GetOutputDimensionality();
  return retVal;
}



unsigned long vtkImageReslice::GetMTime()
{
  unsigned long retVal = vtk::ConvertManagedToNative<::vtkImageReslice>(m_instance)->GetMTime();
  return retVal;
}



void vtkImageReslice::SetInterpolate(int t)
{
  vtk::ConvertManagedToNative<::vtkImageReslice>(m_instance)->SetInterpolate(t);
}



void vtkImageReslice::InterpolateOn()
{
  vtk::ConvertManagedToNative<::vtkImageReslice>(m_instance)->InterpolateOn();
}



void vtkImageReslice::InterpolateOff()
{
  vtk::ConvertManagedToNative<::vtkImageReslice>(m_instance)->InterpolateOff();
}



int vtkImageReslice::GetInterpolate()
{
  int retVal = vtk::ConvertManagedToNative<::vtkImageReslice>(m_instance)->GetInterpolate();
  return retVal;
}



void vtkImageReslice::SetStencil(vtkImageStencilData^ stencil)
{
  ::vtkImageStencilData* stencilWrap = vtk::ConvertManagedToNative<::vtkImageStencilData>(stencil->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkImageReslice>(m_instance)->SetStencil(stencilWrap);
}



vtkImageStencilData^ vtkImageReslice::GetStencil()
{
  ::vtkImageStencilData* retVal = static_cast<::vtkImageStencilData*>(vtk::ConvertManagedToNative<::vtkImageReslice>(m_instance)->GetStencil());
  return gcnew vtkImageStencilData(IntPtr(retVal), false);
}



  vtkImageReslice::vtkImageReslice(System::IntPtr native, bool bConst) : vtkThreadedImageAlgorithm(native, bConst) {}



  vtkImageReslice::vtkImageReslice(bool donothing) : vtkThreadedImageAlgorithm(donothing) {}



  vtkImageReslice::vtkImageReslice() : vtkThreadedImageAlgorithm(false) {
  this->SetNativePointer(IntPtr(::vtkImageReslice::New()));
}



  vtkImageReslice::~vtkImageReslice() { }





} // end namespace vtkImaging
