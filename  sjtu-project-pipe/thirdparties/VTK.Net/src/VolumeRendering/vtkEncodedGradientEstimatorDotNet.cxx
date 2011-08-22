

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkEncodedGradientEstimatorDotNet.h"
#include "vtkDirectionEncoderDotNet.h"

// native includes
#include "strstream"
#include "vtkEncodedGradientEstimator.h"
#include "vtkDirectionEncoder.h"
#include "vtkImageData.h"

using namespace System;

namespace vtk {

System::String^ vtkEncodedGradientEstimator::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkEncodedGradientEstimator>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkEncodedGradientEstimator::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkEncodedGradientEstimator>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkEncodedGradientEstimator^ vtkEncodedGradientEstimator::NewInstance()
{
  ::vtkEncodedGradientEstimator* retVal = static_cast<::vtkEncodedGradientEstimator*>(vtk::ConvertManagedToNative<::vtkEncodedGradientEstimator>(m_instance)->NewInstance());
  return gcnew vtkEncodedGradientEstimator(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkEncodedGradientEstimator::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkEncodedGradientEstimator>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkEncodedGradientEstimator::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkEncodedGradientEstimator>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkEncodedGradientEstimator::SetInput(vtkImageData^ arg0)
{
  ::vtkImageData* arg0Wrap = vtk::ConvertManagedToNative<::vtkImageData>(arg0->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkEncodedGradientEstimator>(m_instance)->SetInput(arg0Wrap);
}



vtkImageData^ vtkEncodedGradientEstimator::GetInput()
{
  ::vtkImageData* retVal = static_cast<::vtkImageData*>(vtk::ConvertManagedToNative<::vtkEncodedGradientEstimator>(m_instance)->GetInput());
  return gcnew vtkImageData(IntPtr(retVal), false);
}



void vtkEncodedGradientEstimator::SetGradientMagnitudeScale(float arg0)
{
  vtk::ConvertManagedToNative<::vtkEncodedGradientEstimator>(m_instance)->SetGradientMagnitudeScale(arg0);
}



float vtkEncodedGradientEstimator::GetGradientMagnitudeScale()
{
  float retVal = vtk::ConvertManagedToNative<::vtkEncodedGradientEstimator>(m_instance)->GetGradientMagnitudeScale();
  return retVal;
}



void vtkEncodedGradientEstimator::SetGradientMagnitudeBias(float arg0)
{
  vtk::ConvertManagedToNative<::vtkEncodedGradientEstimator>(m_instance)->SetGradientMagnitudeBias(arg0);
}



float vtkEncodedGradientEstimator::GetGradientMagnitudeBias()
{
  float retVal = vtk::ConvertManagedToNative<::vtkEncodedGradientEstimator>(m_instance)->GetGradientMagnitudeBias();
  return retVal;
}



void vtkEncodedGradientEstimator::SetBoundsClip(int arg0)
{
  vtk::ConvertManagedToNative<::vtkEncodedGradientEstimator>(m_instance)->SetBoundsClip(arg0);
}



int vtkEncodedGradientEstimator::GetBoundsClipMinValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkEncodedGradientEstimator>(m_instance)->GetBoundsClipMinValue();
  return retVal;
}



int vtkEncodedGradientEstimator::GetBoundsClipMaxValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkEncodedGradientEstimator>(m_instance)->GetBoundsClipMaxValue();
  return retVal;
}



int vtkEncodedGradientEstimator::GetBoundsClip()
{
  int retVal = vtk::ConvertManagedToNative<::vtkEncodedGradientEstimator>(m_instance)->GetBoundsClip();
  return retVal;
}



void vtkEncodedGradientEstimator::BoundsClipOn()
{
  vtk::ConvertManagedToNative<::vtkEncodedGradientEstimator>(m_instance)->BoundsClipOn();
}



void vtkEncodedGradientEstimator::BoundsClipOff()
{
  vtk::ConvertManagedToNative<::vtkEncodedGradientEstimator>(m_instance)->BoundsClipOff();
}



void vtkEncodedGradientEstimator::SetBounds(int arg0, int arg1, int arg2, int arg3, int arg4, int arg5)
{
  vtk::ConvertManagedToNative<::vtkEncodedGradientEstimator>(m_instance)->SetBounds(arg0, arg1, arg2, arg3, arg4, arg5);
}



void vtkEncodedGradientEstimator::SetBounds(array<int>^ a)
{
  pin_ptr<int> aPin = &a[0];
  int* nativeaPin = aPin;
  vtk::ConvertManagedToNative<::vtkEncodedGradientEstimator>(m_instance)->SetBounds(nativeaPin);
}



array<int>^ vtkEncodedGradientEstimator::GetBounds()
{
  const int* retVal = vtk::ConvertManagedToNative<::vtkEncodedGradientEstimator>(m_instance)->GetBounds();
  array<int>^ mRetVal = gcnew array<int>(6);
  for (size_t cprIdx=0; cprIdx<6; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



void vtkEncodedGradientEstimator::Update()
{
  vtk::ConvertManagedToNative<::vtkEncodedGradientEstimator>(m_instance)->Update();
}



int vtkEncodedGradientEstimator::GetEncodedNormalIndex(int xyz_index)
{
  int retVal = vtk::ConvertManagedToNative<::vtkEncodedGradientEstimator>(m_instance)->GetEncodedNormalIndex(xyz_index);
  return retVal;
}



int vtkEncodedGradientEstimator::GetEncodedNormalIndex(int x_index, int y_index, int z_index)
{
  int retVal = vtk::ConvertManagedToNative<::vtkEncodedGradientEstimator>(m_instance)->GetEncodedNormalIndex(x_index, y_index, z_index);
  return retVal;
}



void vtkEncodedGradientEstimator::SetNumberOfThreads(int arg0)
{
  vtk::ConvertManagedToNative<::vtkEncodedGradientEstimator>(m_instance)->SetNumberOfThreads(arg0);
}



int vtkEncodedGradientEstimator::GetNumberOfThreadsMinValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkEncodedGradientEstimator>(m_instance)->GetNumberOfThreadsMinValue();
  return retVal;
}



int vtkEncodedGradientEstimator::GetNumberOfThreadsMaxValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkEncodedGradientEstimator>(m_instance)->GetNumberOfThreadsMaxValue();
  return retVal;
}



int vtkEncodedGradientEstimator::GetNumberOfThreads()
{
  int retVal = vtk::ConvertManagedToNative<::vtkEncodedGradientEstimator>(m_instance)->GetNumberOfThreads();
  return retVal;
}



void vtkEncodedGradientEstimator::SetDirectionEncoder(vtkDirectionEncoder^ direnc)
{
  ::vtkDirectionEncoder* direncWrap = vtk::ConvertManagedToNative<::vtkDirectionEncoder>(direnc->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkEncodedGradientEstimator>(m_instance)->SetDirectionEncoder(direncWrap);
}



vtkDirectionEncoder^ vtkEncodedGradientEstimator::GetDirectionEncoder()
{
  ::vtkDirectionEncoder* retVal = static_cast<::vtkDirectionEncoder*>(vtk::ConvertManagedToNative<::vtkEncodedGradientEstimator>(m_instance)->GetDirectionEncoder());
  return gcnew vtkDirectionEncoder(IntPtr(retVal), false);
}



void vtkEncodedGradientEstimator::SetComputeGradientMagnitudes(int arg0)
{
  vtk::ConvertManagedToNative<::vtkEncodedGradientEstimator>(m_instance)->SetComputeGradientMagnitudes(arg0);
}



int vtkEncodedGradientEstimator::GetComputeGradientMagnitudes()
{
  int retVal = vtk::ConvertManagedToNative<::vtkEncodedGradientEstimator>(m_instance)->GetComputeGradientMagnitudes();
  return retVal;
}



void vtkEncodedGradientEstimator::ComputeGradientMagnitudesOn()
{
  vtk::ConvertManagedToNative<::vtkEncodedGradientEstimator>(m_instance)->ComputeGradientMagnitudesOn();
}



void vtkEncodedGradientEstimator::ComputeGradientMagnitudesOff()
{
  vtk::ConvertManagedToNative<::vtkEncodedGradientEstimator>(m_instance)->ComputeGradientMagnitudesOff();
}



void vtkEncodedGradientEstimator::SetCylinderClip(int arg0)
{
  vtk::ConvertManagedToNative<::vtkEncodedGradientEstimator>(m_instance)->SetCylinderClip(arg0);
}



int vtkEncodedGradientEstimator::GetCylinderClip()
{
  int retVal = vtk::ConvertManagedToNative<::vtkEncodedGradientEstimator>(m_instance)->GetCylinderClip();
  return retVal;
}



void vtkEncodedGradientEstimator::CylinderClipOn()
{
  vtk::ConvertManagedToNative<::vtkEncodedGradientEstimator>(m_instance)->CylinderClipOn();
}



void vtkEncodedGradientEstimator::CylinderClipOff()
{
  vtk::ConvertManagedToNative<::vtkEncodedGradientEstimator>(m_instance)->CylinderClipOff();
}



float vtkEncodedGradientEstimator::GetLastUpdateTimeInSeconds()
{
  float retVal = vtk::ConvertManagedToNative<::vtkEncodedGradientEstimator>(m_instance)->GetLastUpdateTimeInSeconds();
  return retVal;
}



float vtkEncodedGradientEstimator::GetLastUpdateTimeInCPUSeconds()
{
  float retVal = vtk::ConvertManagedToNative<::vtkEncodedGradientEstimator>(m_instance)->GetLastUpdateTimeInCPUSeconds();
  return retVal;
}



int vtkEncodedGradientEstimator::GetUseCylinderClip()
{
  int retVal = vtk::ConvertManagedToNative<::vtkEncodedGradientEstimator>(m_instance)->GetUseCylinderClip();
  return retVal;
}



void vtkEncodedGradientEstimator::SetZeroNormalThreshold(float v)
{
  vtk::ConvertManagedToNative<::vtkEncodedGradientEstimator>(m_instance)->SetZeroNormalThreshold(v);
}



float vtkEncodedGradientEstimator::GetZeroNormalThreshold()
{
  float retVal = vtk::ConvertManagedToNative<::vtkEncodedGradientEstimator>(m_instance)->GetZeroNormalThreshold();
  return retVal;
}



void vtkEncodedGradientEstimator::SetZeroPad(int arg0)
{
  vtk::ConvertManagedToNative<::vtkEncodedGradientEstimator>(m_instance)->SetZeroPad(arg0);
}



int vtkEncodedGradientEstimator::GetZeroPadMinValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkEncodedGradientEstimator>(m_instance)->GetZeroPadMinValue();
  return retVal;
}



int vtkEncodedGradientEstimator::GetZeroPadMaxValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkEncodedGradientEstimator>(m_instance)->GetZeroPadMaxValue();
  return retVal;
}



int vtkEncodedGradientEstimator::GetZeroPad()
{
  int retVal = vtk::ConvertManagedToNative<::vtkEncodedGradientEstimator>(m_instance)->GetZeroPad();
  return retVal;
}



void vtkEncodedGradientEstimator::ZeroPadOn()
{
  vtk::ConvertManagedToNative<::vtkEncodedGradientEstimator>(m_instance)->ZeroPadOn();
}



void vtkEncodedGradientEstimator::ZeroPadOff()
{
  vtk::ConvertManagedToNative<::vtkEncodedGradientEstimator>(m_instance)->ZeroPadOff();
}



  vtkEncodedGradientEstimator::vtkEncodedGradientEstimator(System::IntPtr native, bool bConst) : vtkObject(native, bConst) {}



  vtkEncodedGradientEstimator::vtkEncodedGradientEstimator(bool donothing) : vtkObject(donothing) {}



  vtkEncodedGradientEstimator::vtkEncodedGradientEstimator() : vtkObject(false) {
  this->SetNativePointer(IntPtr(::vtkEncodedGradientEstimator::New()));
}



  vtkEncodedGradientEstimator::~vtkEncodedGradientEstimator() { }





} // end namespace vtkVolumeRendering
