

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkVolumeRayCastMapperDotNet.h"
#include "vtkEncodedGradientEstimatorDotNet.h"
#include "vtkEncodedGradientShaderDotNet.h"
#include "vtkVolumeRayCastFunctionDotNet.h"

// native includes
#include "strstream"
#include "vtkVolumeRayCastMapper.h"
#include "vtkEncodedGradientEstimator.h"
#include "vtkEncodedGradientShader.h"
#include "vtkObject.h"
#include "vtkVolumeRayCastFunction.h"

using namespace System;

namespace vtk {

System::String^ vtkVolumeRayCastMapper::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkVolumeRayCastMapper>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkVolumeRayCastMapper::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkVolumeRayCastMapper>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkVolumeRayCastMapper^ vtkVolumeRayCastMapper::NewInstance()
{
  ::vtkVolumeRayCastMapper* retVal = static_cast<::vtkVolumeRayCastMapper*>(vtk::ConvertManagedToNative<::vtkVolumeRayCastMapper>(m_instance)->NewInstance());
  return gcnew vtkVolumeRayCastMapper(IntPtr(retVal), false);
}



vtkVolumeRayCastMapper^ vtkVolumeRayCastMapper::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkVolumeRayCastMapper* retVal = static_cast<::vtkVolumeRayCastMapper*>(::vtkVolumeRayCastMapper::SafeDownCast(oWrap));
  return gcnew vtkVolumeRayCastMapper(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkVolumeRayCastMapper::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkVolumeRayCastMapper>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkVolumeRayCastMapper::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkVolumeRayCastMapper>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkVolumeRayCastMapper::SetSampleDistance(double arg0)
{
  vtk::ConvertManagedToNative<::vtkVolumeRayCastMapper>(m_instance)->SetSampleDistance(arg0);
}



double vtkVolumeRayCastMapper::GetSampleDistance()
{
  double retVal = vtk::ConvertManagedToNative<::vtkVolumeRayCastMapper>(m_instance)->GetSampleDistance();
  return retVal;
}



void vtkVolumeRayCastMapper::SetVolumeRayCastFunction(vtkVolumeRayCastFunction^ arg0)
{
  ::vtkVolumeRayCastFunction* arg0Wrap = vtk::ConvertManagedToNative<::vtkVolumeRayCastFunction>(arg0->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkVolumeRayCastMapper>(m_instance)->SetVolumeRayCastFunction(arg0Wrap);
}



vtkVolumeRayCastFunction^ vtkVolumeRayCastMapper::GetVolumeRayCastFunction()
{
  ::vtkVolumeRayCastFunction* retVal = static_cast<::vtkVolumeRayCastFunction*>(vtk::ConvertManagedToNative<::vtkVolumeRayCastMapper>(m_instance)->GetVolumeRayCastFunction());
  return gcnew vtkVolumeRayCastFunction(IntPtr(retVal), false);
}



void vtkVolumeRayCastMapper::SetGradientEstimator(vtkEncodedGradientEstimator^ gradest)
{
  ::vtkEncodedGradientEstimator* gradestWrap = vtk::ConvertManagedToNative<::vtkEncodedGradientEstimator>(gradest->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkVolumeRayCastMapper>(m_instance)->SetGradientEstimator(gradestWrap);
}



vtkEncodedGradientEstimator^ vtkVolumeRayCastMapper::GetGradientEstimator()
{
  ::vtkEncodedGradientEstimator* retVal = static_cast<::vtkEncodedGradientEstimator*>(vtk::ConvertManagedToNative<::vtkVolumeRayCastMapper>(m_instance)->GetGradientEstimator());
  return gcnew vtkEncodedGradientEstimator(IntPtr(retVal), false);
}



vtkEncodedGradientShader^ vtkVolumeRayCastMapper::GetGradientShader()
{
  ::vtkEncodedGradientShader* retVal = static_cast<::vtkEncodedGradientShader*>(vtk::ConvertManagedToNative<::vtkVolumeRayCastMapper>(m_instance)->GetGradientShader());
  return gcnew vtkEncodedGradientShader(IntPtr(retVal), false);
}



void vtkVolumeRayCastMapper::SetImageSampleDistance(double arg0)
{
  vtk::ConvertManagedToNative<::vtkVolumeRayCastMapper>(m_instance)->SetImageSampleDistance(arg0);
}



double vtkVolumeRayCastMapper::GetImageSampleDistanceMinValue()
{
  double retVal = vtk::ConvertManagedToNative<::vtkVolumeRayCastMapper>(m_instance)->GetImageSampleDistanceMinValue();
  return retVal;
}



double vtkVolumeRayCastMapper::GetImageSampleDistanceMaxValue()
{
  double retVal = vtk::ConvertManagedToNative<::vtkVolumeRayCastMapper>(m_instance)->GetImageSampleDistanceMaxValue();
  return retVal;
}



double vtkVolumeRayCastMapper::GetImageSampleDistance()
{
  double retVal = vtk::ConvertManagedToNative<::vtkVolumeRayCastMapper>(m_instance)->GetImageSampleDistance();
  return retVal;
}



void vtkVolumeRayCastMapper::SetMinimumImageSampleDistance(double arg0)
{
  vtk::ConvertManagedToNative<::vtkVolumeRayCastMapper>(m_instance)->SetMinimumImageSampleDistance(arg0);
}



double vtkVolumeRayCastMapper::GetMinimumImageSampleDistanceMinValue()
{
  double retVal = vtk::ConvertManagedToNative<::vtkVolumeRayCastMapper>(m_instance)->GetMinimumImageSampleDistanceMinValue();
  return retVal;
}



double vtkVolumeRayCastMapper::GetMinimumImageSampleDistanceMaxValue()
{
  double retVal = vtk::ConvertManagedToNative<::vtkVolumeRayCastMapper>(m_instance)->GetMinimumImageSampleDistanceMaxValue();
  return retVal;
}



double vtkVolumeRayCastMapper::GetMinimumImageSampleDistance()
{
  double retVal = vtk::ConvertManagedToNative<::vtkVolumeRayCastMapper>(m_instance)->GetMinimumImageSampleDistance();
  return retVal;
}



void vtkVolumeRayCastMapper::SetMaximumImageSampleDistance(double arg0)
{
  vtk::ConvertManagedToNative<::vtkVolumeRayCastMapper>(m_instance)->SetMaximumImageSampleDistance(arg0);
}



double vtkVolumeRayCastMapper::GetMaximumImageSampleDistanceMinValue()
{
  double retVal = vtk::ConvertManagedToNative<::vtkVolumeRayCastMapper>(m_instance)->GetMaximumImageSampleDistanceMinValue();
  return retVal;
}



double vtkVolumeRayCastMapper::GetMaximumImageSampleDistanceMaxValue()
{
  double retVal = vtk::ConvertManagedToNative<::vtkVolumeRayCastMapper>(m_instance)->GetMaximumImageSampleDistanceMaxValue();
  return retVal;
}



double vtkVolumeRayCastMapper::GetMaximumImageSampleDistance()
{
  double retVal = vtk::ConvertManagedToNative<::vtkVolumeRayCastMapper>(m_instance)->GetMaximumImageSampleDistance();
  return retVal;
}



void vtkVolumeRayCastMapper::SetAutoAdjustSampleDistances(int arg0)
{
  vtk::ConvertManagedToNative<::vtkVolumeRayCastMapper>(m_instance)->SetAutoAdjustSampleDistances(arg0);
}



int vtkVolumeRayCastMapper::GetAutoAdjustSampleDistancesMinValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkVolumeRayCastMapper>(m_instance)->GetAutoAdjustSampleDistancesMinValue();
  return retVal;
}



int vtkVolumeRayCastMapper::GetAutoAdjustSampleDistancesMaxValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkVolumeRayCastMapper>(m_instance)->GetAutoAdjustSampleDistancesMaxValue();
  return retVal;
}



int vtkVolumeRayCastMapper::GetAutoAdjustSampleDistances()
{
  int retVal = vtk::ConvertManagedToNative<::vtkVolumeRayCastMapper>(m_instance)->GetAutoAdjustSampleDistances();
  return retVal;
}



void vtkVolumeRayCastMapper::AutoAdjustSampleDistancesOn()
{
  vtk::ConvertManagedToNative<::vtkVolumeRayCastMapper>(m_instance)->AutoAdjustSampleDistancesOn();
}



void vtkVolumeRayCastMapper::AutoAdjustSampleDistancesOff()
{
  vtk::ConvertManagedToNative<::vtkVolumeRayCastMapper>(m_instance)->AutoAdjustSampleDistancesOff();
}



void vtkVolumeRayCastMapper::SetNumberOfThreads(int num)
{
  vtk::ConvertManagedToNative<::vtkVolumeRayCastMapper>(m_instance)->SetNumberOfThreads(num);
}



int vtkVolumeRayCastMapper::GetNumberOfThreads()
{
  int retVal = vtk::ConvertManagedToNative<::vtkVolumeRayCastMapper>(m_instance)->GetNumberOfThreads();
  return retVal;
}



void vtkVolumeRayCastMapper::SetIntermixIntersectingGeometry(int arg0)
{
  vtk::ConvertManagedToNative<::vtkVolumeRayCastMapper>(m_instance)->SetIntermixIntersectingGeometry(arg0);
}



int vtkVolumeRayCastMapper::GetIntermixIntersectingGeometryMinValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkVolumeRayCastMapper>(m_instance)->GetIntermixIntersectingGeometryMinValue();
  return retVal;
}



int vtkVolumeRayCastMapper::GetIntermixIntersectingGeometryMaxValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkVolumeRayCastMapper>(m_instance)->GetIntermixIntersectingGeometryMaxValue();
  return retVal;
}



int vtkVolumeRayCastMapper::GetIntermixIntersectingGeometry()
{
  int retVal = vtk::ConvertManagedToNative<::vtkVolumeRayCastMapper>(m_instance)->GetIntermixIntersectingGeometry();
  return retVal;
}



void vtkVolumeRayCastMapper::IntermixIntersectingGeometryOn()
{
  vtk::ConvertManagedToNative<::vtkVolumeRayCastMapper>(m_instance)->IntermixIntersectingGeometryOn();
}



void vtkVolumeRayCastMapper::IntermixIntersectingGeometryOff()
{
  vtk::ConvertManagedToNative<::vtkVolumeRayCastMapper>(m_instance)->IntermixIntersectingGeometryOff();
}



  vtkVolumeRayCastMapper::vtkVolumeRayCastMapper(System::IntPtr native, bool bConst) : vtkVolumeMapper(native, bConst) {}



  vtkVolumeRayCastMapper::vtkVolumeRayCastMapper(bool donothing) : vtkVolumeMapper(donothing) {}



  vtkVolumeRayCastMapper::vtkVolumeRayCastMapper() : vtkVolumeMapper(false) {
  this->SetNativePointer(IntPtr(::vtkVolumeRayCastMapper::New()));
}



  vtkVolumeRayCastMapper::~vtkVolumeRayCastMapper() { }





} // end namespace vtkVolumeRendering
