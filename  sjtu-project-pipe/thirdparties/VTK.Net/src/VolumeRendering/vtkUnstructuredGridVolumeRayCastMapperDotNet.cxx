

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkUnstructuredGridVolumeRayCastMapperDotNet.h"
#include "vtkUnstructuredGridVolumeRayCastFunctionDotNet.h"
#include "vtkUnstructuredGridVolumeRayIntegratorDotNet.h"

// native includes
#include "strstream"
#include "vtkUnstructuredGridVolumeRayCastMapper.h"
#include "vtkObject.h"
#include "vtkUnstructuredGridVolumeRayCastFunction.h"
#include "vtkUnstructuredGridVolumeRayIntegrator.h"

using namespace System;

namespace vtk {

System::String^ vtkUnstructuredGridVolumeRayCastMapper::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkUnstructuredGridVolumeRayCastMapper>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkUnstructuredGridVolumeRayCastMapper::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkUnstructuredGridVolumeRayCastMapper>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkUnstructuredGridVolumeRayCastMapper^ vtkUnstructuredGridVolumeRayCastMapper::NewInstance()
{
  ::vtkUnstructuredGridVolumeRayCastMapper* retVal = static_cast<::vtkUnstructuredGridVolumeRayCastMapper*>(vtk::ConvertManagedToNative<::vtkUnstructuredGridVolumeRayCastMapper>(m_instance)->NewInstance());
  return gcnew vtkUnstructuredGridVolumeRayCastMapper(IntPtr(retVal), false);
}



vtkUnstructuredGridVolumeRayCastMapper^ vtkUnstructuredGridVolumeRayCastMapper::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkUnstructuredGridVolumeRayCastMapper* retVal = static_cast<::vtkUnstructuredGridVolumeRayCastMapper*>(::vtkUnstructuredGridVolumeRayCastMapper::SafeDownCast(oWrap));
  return gcnew vtkUnstructuredGridVolumeRayCastMapper(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkUnstructuredGridVolumeRayCastMapper::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkUnstructuredGridVolumeRayCastMapper>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkUnstructuredGridVolumeRayCastMapper::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkUnstructuredGridVolumeRayCastMapper>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkUnstructuredGridVolumeRayCastMapper::SetScalarMode(int arg0)
{
  vtk::ConvertManagedToNative<::vtkUnstructuredGridVolumeRayCastMapper>(m_instance)->SetScalarMode(arg0);
}



int vtkUnstructuredGridVolumeRayCastMapper::GetScalarMode()
{
  int retVal = vtk::ConvertManagedToNative<::vtkUnstructuredGridVolumeRayCastMapper>(m_instance)->GetScalarMode();
  return retVal;
}



void vtkUnstructuredGridVolumeRayCastMapper::SetScalarModeToDefault()
{
  vtk::ConvertManagedToNative<::vtkUnstructuredGridVolumeRayCastMapper>(m_instance)->SetScalarModeToDefault();
}



void vtkUnstructuredGridVolumeRayCastMapper::SetScalarModeToUsePointData()
{
  vtk::ConvertManagedToNative<::vtkUnstructuredGridVolumeRayCastMapper>(m_instance)->SetScalarModeToUsePointData();
}



void vtkUnstructuredGridVolumeRayCastMapper::SetScalarModeToUseCellData()
{
  vtk::ConvertManagedToNative<::vtkUnstructuredGridVolumeRayCastMapper>(m_instance)->SetScalarModeToUseCellData();
}



void vtkUnstructuredGridVolumeRayCastMapper::SetScalarModeToUsePointFieldData()
{
  vtk::ConvertManagedToNative<::vtkUnstructuredGridVolumeRayCastMapper>(m_instance)->SetScalarModeToUsePointFieldData();
}



void vtkUnstructuredGridVolumeRayCastMapper::SetScalarModeToUseCellFieldData()
{
  vtk::ConvertManagedToNative<::vtkUnstructuredGridVolumeRayCastMapper>(m_instance)->SetScalarModeToUseCellFieldData();
}



void vtkUnstructuredGridVolumeRayCastMapper::SelectScalarArray(int arrayNum)
{
  vtk::ConvertManagedToNative<::vtkUnstructuredGridVolumeRayCastMapper>(m_instance)->SelectScalarArray(arrayNum);
}



void vtkUnstructuredGridVolumeRayCastMapper::SelectScalarArray(System::String^ arrayName)
{
  char* arrayNameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(arrayName).ToPointer());
  vtk::ConvertManagedToNative<::vtkUnstructuredGridVolumeRayCastMapper>(m_instance)->SelectScalarArray(arrayNameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(arrayNameWrap));
}



System::String^ vtkUnstructuredGridVolumeRayCastMapper::GetArrayName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkUnstructuredGridVolumeRayCastMapper>(m_instance)->GetArrayName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkUnstructuredGridVolumeRayCastMapper::GetArrayId()
{
  int retVal = vtk::ConvertManagedToNative<::vtkUnstructuredGridVolumeRayCastMapper>(m_instance)->GetArrayId();
  return retVal;
}



int vtkUnstructuredGridVolumeRayCastMapper::GetArrayAccessMode()
{
  int retVal = vtk::ConvertManagedToNative<::vtkUnstructuredGridVolumeRayCastMapper>(m_instance)->GetArrayAccessMode();
  return retVal;
}



System::String^ vtkUnstructuredGridVolumeRayCastMapper::GetScalarModeAsString()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkUnstructuredGridVolumeRayCastMapper>(m_instance)->GetScalarModeAsString();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



void vtkUnstructuredGridVolumeRayCastMapper::SetImageSampleDistance(float arg0)
{
  vtk::ConvertManagedToNative<::vtkUnstructuredGridVolumeRayCastMapper>(m_instance)->SetImageSampleDistance(arg0);
}



float vtkUnstructuredGridVolumeRayCastMapper::GetImageSampleDistanceMinValue()
{
  float retVal = vtk::ConvertManagedToNative<::vtkUnstructuredGridVolumeRayCastMapper>(m_instance)->GetImageSampleDistanceMinValue();
  return retVal;
}



float vtkUnstructuredGridVolumeRayCastMapper::GetImageSampleDistanceMaxValue()
{
  float retVal = vtk::ConvertManagedToNative<::vtkUnstructuredGridVolumeRayCastMapper>(m_instance)->GetImageSampleDistanceMaxValue();
  return retVal;
}



float vtkUnstructuredGridVolumeRayCastMapper::GetImageSampleDistance()
{
  float retVal = vtk::ConvertManagedToNative<::vtkUnstructuredGridVolumeRayCastMapper>(m_instance)->GetImageSampleDistance();
  return retVal;
}



void vtkUnstructuredGridVolumeRayCastMapper::SetMinimumImageSampleDistance(float arg0)
{
  vtk::ConvertManagedToNative<::vtkUnstructuredGridVolumeRayCastMapper>(m_instance)->SetMinimumImageSampleDistance(arg0);
}



float vtkUnstructuredGridVolumeRayCastMapper::GetMinimumImageSampleDistanceMinValue()
{
  float retVal = vtk::ConvertManagedToNative<::vtkUnstructuredGridVolumeRayCastMapper>(m_instance)->GetMinimumImageSampleDistanceMinValue();
  return retVal;
}



float vtkUnstructuredGridVolumeRayCastMapper::GetMinimumImageSampleDistanceMaxValue()
{
  float retVal = vtk::ConvertManagedToNative<::vtkUnstructuredGridVolumeRayCastMapper>(m_instance)->GetMinimumImageSampleDistanceMaxValue();
  return retVal;
}



float vtkUnstructuredGridVolumeRayCastMapper::GetMinimumImageSampleDistance()
{
  float retVal = vtk::ConvertManagedToNative<::vtkUnstructuredGridVolumeRayCastMapper>(m_instance)->GetMinimumImageSampleDistance();
  return retVal;
}



void vtkUnstructuredGridVolumeRayCastMapper::SetMaximumImageSampleDistance(float arg0)
{
  vtk::ConvertManagedToNative<::vtkUnstructuredGridVolumeRayCastMapper>(m_instance)->SetMaximumImageSampleDistance(arg0);
}



float vtkUnstructuredGridVolumeRayCastMapper::GetMaximumImageSampleDistanceMinValue()
{
  float retVal = vtk::ConvertManagedToNative<::vtkUnstructuredGridVolumeRayCastMapper>(m_instance)->GetMaximumImageSampleDistanceMinValue();
  return retVal;
}



float vtkUnstructuredGridVolumeRayCastMapper::GetMaximumImageSampleDistanceMaxValue()
{
  float retVal = vtk::ConvertManagedToNative<::vtkUnstructuredGridVolumeRayCastMapper>(m_instance)->GetMaximumImageSampleDistanceMaxValue();
  return retVal;
}



float vtkUnstructuredGridVolumeRayCastMapper::GetMaximumImageSampleDistance()
{
  float retVal = vtk::ConvertManagedToNative<::vtkUnstructuredGridVolumeRayCastMapper>(m_instance)->GetMaximumImageSampleDistance();
  return retVal;
}



void vtkUnstructuredGridVolumeRayCastMapper::SetAutoAdjustSampleDistances(int arg0)
{
  vtk::ConvertManagedToNative<::vtkUnstructuredGridVolumeRayCastMapper>(m_instance)->SetAutoAdjustSampleDistances(arg0);
}



int vtkUnstructuredGridVolumeRayCastMapper::GetAutoAdjustSampleDistancesMinValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkUnstructuredGridVolumeRayCastMapper>(m_instance)->GetAutoAdjustSampleDistancesMinValue();
  return retVal;
}



int vtkUnstructuredGridVolumeRayCastMapper::GetAutoAdjustSampleDistancesMaxValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkUnstructuredGridVolumeRayCastMapper>(m_instance)->GetAutoAdjustSampleDistancesMaxValue();
  return retVal;
}



int vtkUnstructuredGridVolumeRayCastMapper::GetAutoAdjustSampleDistances()
{
  int retVal = vtk::ConvertManagedToNative<::vtkUnstructuredGridVolumeRayCastMapper>(m_instance)->GetAutoAdjustSampleDistances();
  return retVal;
}



void vtkUnstructuredGridVolumeRayCastMapper::AutoAdjustSampleDistancesOn()
{
  vtk::ConvertManagedToNative<::vtkUnstructuredGridVolumeRayCastMapper>(m_instance)->AutoAdjustSampleDistancesOn();
}



void vtkUnstructuredGridVolumeRayCastMapper::AutoAdjustSampleDistancesOff()
{
  vtk::ConvertManagedToNative<::vtkUnstructuredGridVolumeRayCastMapper>(m_instance)->AutoAdjustSampleDistancesOff();
}



void vtkUnstructuredGridVolumeRayCastMapper::SetNumberOfThreads(int arg0)
{
  vtk::ConvertManagedToNative<::vtkUnstructuredGridVolumeRayCastMapper>(m_instance)->SetNumberOfThreads(arg0);
}



int vtkUnstructuredGridVolumeRayCastMapper::GetNumberOfThreads()
{
  int retVal = vtk::ConvertManagedToNative<::vtkUnstructuredGridVolumeRayCastMapper>(m_instance)->GetNumberOfThreads();
  return retVal;
}



void vtkUnstructuredGridVolumeRayCastMapper::SetIntermixIntersectingGeometry(int arg0)
{
  vtk::ConvertManagedToNative<::vtkUnstructuredGridVolumeRayCastMapper>(m_instance)->SetIntermixIntersectingGeometry(arg0);
}



int vtkUnstructuredGridVolumeRayCastMapper::GetIntermixIntersectingGeometryMinValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkUnstructuredGridVolumeRayCastMapper>(m_instance)->GetIntermixIntersectingGeometryMinValue();
  return retVal;
}



int vtkUnstructuredGridVolumeRayCastMapper::GetIntermixIntersectingGeometryMaxValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkUnstructuredGridVolumeRayCastMapper>(m_instance)->GetIntermixIntersectingGeometryMaxValue();
  return retVal;
}



int vtkUnstructuredGridVolumeRayCastMapper::GetIntermixIntersectingGeometry()
{
  int retVal = vtk::ConvertManagedToNative<::vtkUnstructuredGridVolumeRayCastMapper>(m_instance)->GetIntermixIntersectingGeometry();
  return retVal;
}



void vtkUnstructuredGridVolumeRayCastMapper::IntermixIntersectingGeometryOn()
{
  vtk::ConvertManagedToNative<::vtkUnstructuredGridVolumeRayCastMapper>(m_instance)->IntermixIntersectingGeometryOn();
}



void vtkUnstructuredGridVolumeRayCastMapper::IntermixIntersectingGeometryOff()
{
  vtk::ConvertManagedToNative<::vtkUnstructuredGridVolumeRayCastMapper>(m_instance)->IntermixIntersectingGeometryOff();
}



void vtkUnstructuredGridVolumeRayCastMapper::SetRayCastFunction(vtkUnstructuredGridVolumeRayCastFunction^ f)
{
  ::vtkUnstructuredGridVolumeRayCastFunction* fWrap = vtk::ConvertManagedToNative<::vtkUnstructuredGridVolumeRayCastFunction>(f->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkUnstructuredGridVolumeRayCastMapper>(m_instance)->SetRayCastFunction(fWrap);
}



vtkUnstructuredGridVolumeRayCastFunction^ vtkUnstructuredGridVolumeRayCastMapper::GetRayCastFunction()
{
  ::vtkUnstructuredGridVolumeRayCastFunction* retVal = static_cast<::vtkUnstructuredGridVolumeRayCastFunction*>(vtk::ConvertManagedToNative<::vtkUnstructuredGridVolumeRayCastMapper>(m_instance)->GetRayCastFunction());
  return gcnew vtkUnstructuredGridVolumeRayCastFunction(IntPtr(retVal), false);
}



void vtkUnstructuredGridVolumeRayCastMapper::SetRayIntegrator(vtkUnstructuredGridVolumeRayIntegrator^ ri)
{
  ::vtkUnstructuredGridVolumeRayIntegrator* riWrap = vtk::ConvertManagedToNative<::vtkUnstructuredGridVolumeRayIntegrator>(ri->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkUnstructuredGridVolumeRayCastMapper>(m_instance)->SetRayIntegrator(riWrap);
}



vtkUnstructuredGridVolumeRayIntegrator^ vtkUnstructuredGridVolumeRayCastMapper::GetRayIntegrator()
{
  ::vtkUnstructuredGridVolumeRayIntegrator* retVal = static_cast<::vtkUnstructuredGridVolumeRayIntegrator*>(vtk::ConvertManagedToNative<::vtkUnstructuredGridVolumeRayCastMapper>(m_instance)->GetRayIntegrator());
  return gcnew vtkUnstructuredGridVolumeRayIntegrator(IntPtr(retVal), false);
}



void vtkUnstructuredGridVolumeRayCastMapper::CastRays(int threadID, int threadCount)
{
  vtk::ConvertManagedToNative<::vtkUnstructuredGridVolumeRayCastMapper>(m_instance)->CastRays(threadID, threadCount);
}



  vtkUnstructuredGridVolumeRayCastMapper::vtkUnstructuredGridVolumeRayCastMapper(System::IntPtr native, bool bConst) : vtkUnstructuredGridVolumeMapper(native, bConst) {}



  vtkUnstructuredGridVolumeRayCastMapper::vtkUnstructuredGridVolumeRayCastMapper(bool donothing) : vtkUnstructuredGridVolumeMapper(donothing) {}



  vtkUnstructuredGridVolumeRayCastMapper::vtkUnstructuredGridVolumeRayCastMapper() : vtkUnstructuredGridVolumeMapper(false) {
  this->SetNativePointer(IntPtr(::vtkUnstructuredGridVolumeRayCastMapper::New()));
}



  vtkUnstructuredGridVolumeRayCastMapper::~vtkUnstructuredGridVolumeRayCastMapper() { }





} // end namespace vtkVolumeRendering
