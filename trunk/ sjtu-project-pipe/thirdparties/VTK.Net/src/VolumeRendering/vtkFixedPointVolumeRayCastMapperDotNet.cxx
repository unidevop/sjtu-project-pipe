

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkFixedPointVolumeRayCastMapperDotNet.h"
#include "vtkFixedPointRayCastImageDotNet.h"
#include "vtkFixedPointVolumeRayCastCompositeGOHelperDotNet.h"
#include "vtkFixedPointVolumeRayCastCompositeGOShadeHelperDotNet.h"
#include "vtkFixedPointVolumeRayCastCompositeHelperDotNet.h"
#include "vtkFixedPointVolumeRayCastCompositeShadeHelperDotNet.h"
#include "vtkFixedPointVolumeRayCastMIPHelperDotNet.h"

// native includes
#include "strstream"
#include "vtkFixedPointVolumeRayCastMapper.h"
#include "vtkFixedPointRayCastImage.h"
#include "vtkFixedPointVolumeRayCastCompositeGOHelper.h"
#include "vtkFixedPointVolumeRayCastCompositeGOShadeHelper.h"
#include "vtkFixedPointVolumeRayCastCompositeHelper.h"
#include "vtkFixedPointVolumeRayCastCompositeShadeHelper.h"
#include "vtkFixedPointVolumeRayCastMIPHelper.h"
#include "vtkObject.h"
#include "vtkRenderWindow.h"
#include "vtkRenderer.h"
#include "vtkVolume.h"

using namespace System;

namespace vtk {

System::String^ vtkFixedPointVolumeRayCastMapper::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkFixedPointVolumeRayCastMapper>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkFixedPointVolumeRayCastMapper::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkFixedPointVolumeRayCastMapper>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkFixedPointVolumeRayCastMapper^ vtkFixedPointVolumeRayCastMapper::NewInstance()
{
  ::vtkFixedPointVolumeRayCastMapper* retVal = static_cast<::vtkFixedPointVolumeRayCastMapper*>(vtk::ConvertManagedToNative<::vtkFixedPointVolumeRayCastMapper>(m_instance)->NewInstance());
  return gcnew vtkFixedPointVolumeRayCastMapper(IntPtr(retVal), false);
}



vtkFixedPointVolumeRayCastMapper^ vtkFixedPointVolumeRayCastMapper::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkFixedPointVolumeRayCastMapper* retVal = static_cast<::vtkFixedPointVolumeRayCastMapper*>(::vtkFixedPointVolumeRayCastMapper::SafeDownCast(oWrap));
  return gcnew vtkFixedPointVolumeRayCastMapper(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkFixedPointVolumeRayCastMapper::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkFixedPointVolumeRayCastMapper>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkFixedPointVolumeRayCastMapper::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkFixedPointVolumeRayCastMapper>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkFixedPointVolumeRayCastMapper::SetSampleDistance(float arg0)
{
  vtk::ConvertManagedToNative<::vtkFixedPointVolumeRayCastMapper>(m_instance)->SetSampleDistance(arg0);
}



float vtkFixedPointVolumeRayCastMapper::GetSampleDistance()
{
  float retVal = vtk::ConvertManagedToNative<::vtkFixedPointVolumeRayCastMapper>(m_instance)->GetSampleDistance();
  return retVal;
}



void vtkFixedPointVolumeRayCastMapper::SetInteractiveSampleDistance(float arg0)
{
  vtk::ConvertManagedToNative<::vtkFixedPointVolumeRayCastMapper>(m_instance)->SetInteractiveSampleDistance(arg0);
}



float vtkFixedPointVolumeRayCastMapper::GetInteractiveSampleDistance()
{
  float retVal = vtk::ConvertManagedToNative<::vtkFixedPointVolumeRayCastMapper>(m_instance)->GetInteractiveSampleDistance();
  return retVal;
}



void vtkFixedPointVolumeRayCastMapper::SetImageSampleDistance(float arg0)
{
  vtk::ConvertManagedToNative<::vtkFixedPointVolumeRayCastMapper>(m_instance)->SetImageSampleDistance(arg0);
}



float vtkFixedPointVolumeRayCastMapper::GetImageSampleDistanceMinValue()
{
  float retVal = vtk::ConvertManagedToNative<::vtkFixedPointVolumeRayCastMapper>(m_instance)->GetImageSampleDistanceMinValue();
  return retVal;
}



float vtkFixedPointVolumeRayCastMapper::GetImageSampleDistanceMaxValue()
{
  float retVal = vtk::ConvertManagedToNative<::vtkFixedPointVolumeRayCastMapper>(m_instance)->GetImageSampleDistanceMaxValue();
  return retVal;
}



float vtkFixedPointVolumeRayCastMapper::GetImageSampleDistance()
{
  float retVal = vtk::ConvertManagedToNative<::vtkFixedPointVolumeRayCastMapper>(m_instance)->GetImageSampleDistance();
  return retVal;
}



void vtkFixedPointVolumeRayCastMapper::SetMinimumImageSampleDistance(float arg0)
{
  vtk::ConvertManagedToNative<::vtkFixedPointVolumeRayCastMapper>(m_instance)->SetMinimumImageSampleDistance(arg0);
}



float vtkFixedPointVolumeRayCastMapper::GetMinimumImageSampleDistanceMinValue()
{
  float retVal = vtk::ConvertManagedToNative<::vtkFixedPointVolumeRayCastMapper>(m_instance)->GetMinimumImageSampleDistanceMinValue();
  return retVal;
}



float vtkFixedPointVolumeRayCastMapper::GetMinimumImageSampleDistanceMaxValue()
{
  float retVal = vtk::ConvertManagedToNative<::vtkFixedPointVolumeRayCastMapper>(m_instance)->GetMinimumImageSampleDistanceMaxValue();
  return retVal;
}



float vtkFixedPointVolumeRayCastMapper::GetMinimumImageSampleDistance()
{
  float retVal = vtk::ConvertManagedToNative<::vtkFixedPointVolumeRayCastMapper>(m_instance)->GetMinimumImageSampleDistance();
  return retVal;
}



void vtkFixedPointVolumeRayCastMapper::SetMaximumImageSampleDistance(float arg0)
{
  vtk::ConvertManagedToNative<::vtkFixedPointVolumeRayCastMapper>(m_instance)->SetMaximumImageSampleDistance(arg0);
}



float vtkFixedPointVolumeRayCastMapper::GetMaximumImageSampleDistanceMinValue()
{
  float retVal = vtk::ConvertManagedToNative<::vtkFixedPointVolumeRayCastMapper>(m_instance)->GetMaximumImageSampleDistanceMinValue();
  return retVal;
}



float vtkFixedPointVolumeRayCastMapper::GetMaximumImageSampleDistanceMaxValue()
{
  float retVal = vtk::ConvertManagedToNative<::vtkFixedPointVolumeRayCastMapper>(m_instance)->GetMaximumImageSampleDistanceMaxValue();
  return retVal;
}



float vtkFixedPointVolumeRayCastMapper::GetMaximumImageSampleDistance()
{
  float retVal = vtk::ConvertManagedToNative<::vtkFixedPointVolumeRayCastMapper>(m_instance)->GetMaximumImageSampleDistance();
  return retVal;
}



void vtkFixedPointVolumeRayCastMapper::SetAutoAdjustSampleDistances(int arg0)
{
  vtk::ConvertManagedToNative<::vtkFixedPointVolumeRayCastMapper>(m_instance)->SetAutoAdjustSampleDistances(arg0);
}



int vtkFixedPointVolumeRayCastMapper::GetAutoAdjustSampleDistancesMinValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkFixedPointVolumeRayCastMapper>(m_instance)->GetAutoAdjustSampleDistancesMinValue();
  return retVal;
}



int vtkFixedPointVolumeRayCastMapper::GetAutoAdjustSampleDistancesMaxValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkFixedPointVolumeRayCastMapper>(m_instance)->GetAutoAdjustSampleDistancesMaxValue();
  return retVal;
}



int vtkFixedPointVolumeRayCastMapper::GetAutoAdjustSampleDistances()
{
  int retVal = vtk::ConvertManagedToNative<::vtkFixedPointVolumeRayCastMapper>(m_instance)->GetAutoAdjustSampleDistances();
  return retVal;
}



void vtkFixedPointVolumeRayCastMapper::AutoAdjustSampleDistancesOn()
{
  vtk::ConvertManagedToNative<::vtkFixedPointVolumeRayCastMapper>(m_instance)->AutoAdjustSampleDistancesOn();
}



void vtkFixedPointVolumeRayCastMapper::AutoAdjustSampleDistancesOff()
{
  vtk::ConvertManagedToNative<::vtkFixedPointVolumeRayCastMapper>(m_instance)->AutoAdjustSampleDistancesOff();
}



void vtkFixedPointVolumeRayCastMapper::SetNumberOfThreads(int num)
{
  vtk::ConvertManagedToNative<::vtkFixedPointVolumeRayCastMapper>(m_instance)->SetNumberOfThreads(num);
}



int vtkFixedPointVolumeRayCastMapper::GetNumberOfThreads()
{
  int retVal = vtk::ConvertManagedToNative<::vtkFixedPointVolumeRayCastMapper>(m_instance)->GetNumberOfThreads();
  return retVal;
}



void vtkFixedPointVolumeRayCastMapper::SetIntermixIntersectingGeometry(int arg0)
{
  vtk::ConvertManagedToNative<::vtkFixedPointVolumeRayCastMapper>(m_instance)->SetIntermixIntersectingGeometry(arg0);
}



int vtkFixedPointVolumeRayCastMapper::GetIntermixIntersectingGeometryMinValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkFixedPointVolumeRayCastMapper>(m_instance)->GetIntermixIntersectingGeometryMinValue();
  return retVal;
}



int vtkFixedPointVolumeRayCastMapper::GetIntermixIntersectingGeometryMaxValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkFixedPointVolumeRayCastMapper>(m_instance)->GetIntermixIntersectingGeometryMaxValue();
  return retVal;
}



int vtkFixedPointVolumeRayCastMapper::GetIntermixIntersectingGeometry()
{
  int retVal = vtk::ConvertManagedToNative<::vtkFixedPointVolumeRayCastMapper>(m_instance)->GetIntermixIntersectingGeometry();
  return retVal;
}



void vtkFixedPointVolumeRayCastMapper::IntermixIntersectingGeometryOn()
{
  vtk::ConvertManagedToNative<::vtkFixedPointVolumeRayCastMapper>(m_instance)->IntermixIntersectingGeometryOn();
}



void vtkFixedPointVolumeRayCastMapper::IntermixIntersectingGeometryOff()
{
  vtk::ConvertManagedToNative<::vtkFixedPointVolumeRayCastMapper>(m_instance)->IntermixIntersectingGeometryOff();
}



float vtkFixedPointVolumeRayCastMapper::ComputeRequiredImageSampleDistance(float desiredTime, vtkRenderer^ ren)
{
  ::vtkRenderer* renWrap = vtk::ConvertManagedToNative<::vtkRenderer>(ren->GetNativePointer());
  float retVal = vtk::ConvertManagedToNative<::vtkFixedPointVolumeRayCastMapper>(m_instance)->ComputeRequiredImageSampleDistance(desiredTime, renWrap);
  return retVal;
}



float vtkFixedPointVolumeRayCastMapper::ComputeRequiredImageSampleDistance(float desiredTime, vtkRenderer^ ren, vtkVolume^ vol)
{
  ::vtkRenderer* renWrap = vtk::ConvertManagedToNative<::vtkRenderer>(ren->GetNativePointer());
  ::vtkVolume* volWrap = vtk::ConvertManagedToNative<::vtkVolume>(vol->GetNativePointer());
  float retVal = vtk::ConvertManagedToNative<::vtkFixedPointVolumeRayCastMapper>(m_instance)->ComputeRequiredImageSampleDistance(desiredTime, renWrap, volWrap);
  return retVal;
}



vtkRenderWindow^ vtkFixedPointVolumeRayCastMapper::GetRenderWindow()
{
  ::vtkRenderWindow* retVal = static_cast<::vtkRenderWindow*>(vtk::ConvertManagedToNative<::vtkFixedPointVolumeRayCastMapper>(m_instance)->GetRenderWindow());
  return gcnew vtkRenderWindow(IntPtr(retVal), false);
}



vtkFixedPointVolumeRayCastMIPHelper^ vtkFixedPointVolumeRayCastMapper::GetMIPHelper()
{
  ::vtkFixedPointVolumeRayCastMIPHelper* retVal = static_cast<::vtkFixedPointVolumeRayCastMIPHelper*>(vtk::ConvertManagedToNative<::vtkFixedPointVolumeRayCastMapper>(m_instance)->GetMIPHelper());
  return gcnew vtkFixedPointVolumeRayCastMIPHelper(IntPtr(retVal), false);
}



vtkFixedPointVolumeRayCastCompositeHelper^ vtkFixedPointVolumeRayCastMapper::GetCompositeHelper()
{
  ::vtkFixedPointVolumeRayCastCompositeHelper* retVal = static_cast<::vtkFixedPointVolumeRayCastCompositeHelper*>(vtk::ConvertManagedToNative<::vtkFixedPointVolumeRayCastMapper>(m_instance)->GetCompositeHelper());
  return gcnew vtkFixedPointVolumeRayCastCompositeHelper(IntPtr(retVal), false);
}



vtkFixedPointVolumeRayCastCompositeGOHelper^ vtkFixedPointVolumeRayCastMapper::GetCompositeGOHelper()
{
  ::vtkFixedPointVolumeRayCastCompositeGOHelper* retVal = static_cast<::vtkFixedPointVolumeRayCastCompositeGOHelper*>(vtk::ConvertManagedToNative<::vtkFixedPointVolumeRayCastMapper>(m_instance)->GetCompositeGOHelper());
  return gcnew vtkFixedPointVolumeRayCastCompositeGOHelper(IntPtr(retVal), false);
}



vtkFixedPointVolumeRayCastCompositeGOShadeHelper^ vtkFixedPointVolumeRayCastMapper::GetCompositeGOShadeHelper()
{
  ::vtkFixedPointVolumeRayCastCompositeGOShadeHelper* retVal = static_cast<::vtkFixedPointVolumeRayCastCompositeGOShadeHelper*>(vtk::ConvertManagedToNative<::vtkFixedPointVolumeRayCastMapper>(m_instance)->GetCompositeGOShadeHelper());
  return gcnew vtkFixedPointVolumeRayCastCompositeGOShadeHelper(IntPtr(retVal), false);
}



vtkFixedPointVolumeRayCastCompositeShadeHelper^ vtkFixedPointVolumeRayCastMapper::GetCompositeShadeHelper()
{
  ::vtkFixedPointVolumeRayCastCompositeShadeHelper* retVal = static_cast<::vtkFixedPointVolumeRayCastCompositeShadeHelper*>(vtk::ConvertManagedToNative<::vtkFixedPointVolumeRayCastMapper>(m_instance)->GetCompositeShadeHelper());
  return gcnew vtkFixedPointVolumeRayCastCompositeShadeHelper(IntPtr(retVal), false);
}



array<float>^ vtkFixedPointVolumeRayCastMapper::GetTableShift()
{
  const float* retVal = vtk::ConvertManagedToNative<::vtkFixedPointVolumeRayCastMapper>(m_instance)->GetTableShift();
  array<float>^ mRetVal = gcnew array<float>(4);
  for (size_t cprIdx=0; cprIdx<4; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



array<float>^ vtkFixedPointVolumeRayCastMapper::GetTableScale()
{
  const float* retVal = vtk::ConvertManagedToNative<::vtkFixedPointVolumeRayCastMapper>(m_instance)->GetTableScale();
  array<float>^ mRetVal = gcnew array<float>(4);
  for (size_t cprIdx=0; cprIdx<4; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



int vtkFixedPointVolumeRayCastMapper::GetShadingRequired()
{
  int retVal = vtk::ConvertManagedToNative<::vtkFixedPointVolumeRayCastMapper>(m_instance)->GetShadingRequired();
  return retVal;
}



int vtkFixedPointVolumeRayCastMapper::GetGradientOpacityRequired()
{
  int retVal = vtk::ConvertManagedToNative<::vtkFixedPointVolumeRayCastMapper>(m_instance)->GetGradientOpacityRequired();
  return retVal;
}



vtkVolume^ vtkFixedPointVolumeRayCastMapper::GetVolume()
{
  ::vtkVolume* retVal = static_cast<::vtkVolume*>(vtk::ConvertManagedToNative<::vtkFixedPointVolumeRayCastMapper>(m_instance)->GetVolume());
  return gcnew vtkVolume(IntPtr(retVal), false);
}



void vtkFixedPointVolumeRayCastMapper::ComputeRayInfo(int x, int y, array<unsigned int>^ arg2, array<unsigned int>^ arg3, array<unsigned int>^ arg4)
{
  pin_ptr<unsigned int> arg2Pin = &arg2[0];
  unsigned int* nativearg2Pin = arg2Pin;
  pin_ptr<unsigned int> arg3Pin = &arg3[0];
  unsigned int* nativearg3Pin = arg3Pin;
  pin_ptr<unsigned int> arg4Pin = &arg4[0];
  unsigned int* nativearg4Pin = arg4Pin;
  vtk::ConvertManagedToNative<::vtkFixedPointVolumeRayCastMapper>(m_instance)->ComputeRayInfo(x, y, nativearg2Pin, nativearg3Pin, nativearg4Pin);
}



void vtkFixedPointVolumeRayCastMapper::InitializeRayInfo(vtkVolume^ vol)
{
  ::vtkVolume* volWrap = vtk::ConvertManagedToNative<::vtkVolume>(vol->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkFixedPointVolumeRayCastMapper>(m_instance)->InitializeRayInfo(volWrap);
}



int vtkFixedPointVolumeRayCastMapper::ShouldUseNearestNeighborInterpolation(vtkVolume^ vol)
{
  ::vtkVolume* volWrap = vtk::ConvertManagedToNative<::vtkVolume>(vol->GetNativePointer());
  int retVal = vtk::ConvertManagedToNative<::vtkFixedPointVolumeRayCastMapper>(m_instance)->ShouldUseNearestNeighborInterpolation(volWrap);
  return retVal;
}



void vtkFixedPointVolumeRayCastMapper::SetRayCastImage(vtkFixedPointRayCastImage^ arg0)
{
  ::vtkFixedPointRayCastImage* arg0Wrap = vtk::ConvertManagedToNative<::vtkFixedPointRayCastImage>(arg0->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkFixedPointVolumeRayCastMapper>(m_instance)->SetRayCastImage(arg0Wrap);
}



vtkFixedPointRayCastImage^ vtkFixedPointVolumeRayCastMapper::GetRayCastImage()
{
  ::vtkFixedPointRayCastImage* retVal = static_cast<::vtkFixedPointRayCastImage*>(vtk::ConvertManagedToNative<::vtkFixedPointVolumeRayCastMapper>(m_instance)->GetRayCastImage());
  return gcnew vtkFixedPointRayCastImage(IntPtr(retVal), false);
}



int vtkFixedPointVolumeRayCastMapper::PerImageInitialization(vtkRenderer^ arg0, vtkVolume^ arg1, int arg2, array<double>^ arg3, array<double>^ arg4, array<int>^ arg5)
{
  ::vtkRenderer* arg0Wrap = vtk::ConvertManagedToNative<::vtkRenderer>(arg0->GetNativePointer());
  ::vtkVolume* arg1Wrap = vtk::ConvertManagedToNative<::vtkVolume>(arg1->GetNativePointer());
  pin_ptr<double> arg3Pin = &arg3[0];
  double* nativearg3Pin = arg3Pin;
  pin_ptr<double> arg4Pin = &arg4[0];
  double* nativearg4Pin = arg4Pin;
  pin_ptr<int> arg5Pin = &arg5[0];
  int* nativearg5Pin = arg5Pin;
  int retVal = vtk::ConvertManagedToNative<::vtkFixedPointVolumeRayCastMapper>(m_instance)->PerImageInitialization(arg0Wrap, arg1Wrap, arg2, nativearg3Pin, nativearg4Pin, nativearg5Pin);
  return retVal;
}



void vtkFixedPointVolumeRayCastMapper::PerVolumeInitialization(vtkRenderer^ arg0, vtkVolume^ arg1)
{
  ::vtkRenderer* arg0Wrap = vtk::ConvertManagedToNative<::vtkRenderer>(arg0->GetNativePointer());
  ::vtkVolume* arg1Wrap = vtk::ConvertManagedToNative<::vtkVolume>(arg1->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkFixedPointVolumeRayCastMapper>(m_instance)->PerVolumeInitialization(arg0Wrap, arg1Wrap);
}



void vtkFixedPointVolumeRayCastMapper::PerSubVolumeInitialization(vtkRenderer^ arg0, vtkVolume^ arg1, int arg2)
{
  ::vtkRenderer* arg0Wrap = vtk::ConvertManagedToNative<::vtkRenderer>(arg0->GetNativePointer());
  ::vtkVolume* arg1Wrap = vtk::ConvertManagedToNative<::vtkVolume>(arg1->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkFixedPointVolumeRayCastMapper>(m_instance)->PerSubVolumeInitialization(arg0Wrap, arg1Wrap, arg2);
}



void vtkFixedPointVolumeRayCastMapper::RenderSubVolume()
{
  vtk::ConvertManagedToNative<::vtkFixedPointVolumeRayCastMapper>(m_instance)->RenderSubVolume();
}



void vtkFixedPointVolumeRayCastMapper::DisplayRenderedImage(vtkRenderer^ arg0, vtkVolume^ arg1)
{
  ::vtkRenderer* arg0Wrap = vtk::ConvertManagedToNative<::vtkRenderer>(arg0->GetNativePointer());
  ::vtkVolume* arg1Wrap = vtk::ConvertManagedToNative<::vtkVolume>(arg1->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkFixedPointVolumeRayCastMapper>(m_instance)->DisplayRenderedImage(arg0Wrap, arg1Wrap);
}



void vtkFixedPointVolumeRayCastMapper::AbortRender()
{
  vtk::ConvertManagedToNative<::vtkFixedPointVolumeRayCastMapper>(m_instance)->AbortRender();
}



  vtkFixedPointVolumeRayCastMapper::vtkFixedPointVolumeRayCastMapper(System::IntPtr native, bool bConst) : vtkVolumeMapper(native, bConst) {}



  vtkFixedPointVolumeRayCastMapper::vtkFixedPointVolumeRayCastMapper(bool donothing) : vtkVolumeMapper(donothing) {}



  vtkFixedPointVolumeRayCastMapper::vtkFixedPointVolumeRayCastMapper() : vtkVolumeMapper(false) {
  this->SetNativePointer(IntPtr(::vtkFixedPointVolumeRayCastMapper::New()));
}



  vtkFixedPointVolumeRayCastMapper::~vtkFixedPointVolumeRayCastMapper() { }





} // end namespace vtkVolumeRendering
