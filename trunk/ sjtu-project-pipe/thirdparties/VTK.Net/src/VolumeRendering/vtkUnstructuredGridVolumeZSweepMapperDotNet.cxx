

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkUnstructuredGridVolumeZSweepMapperDotNet.h"
#include "vtkUnstructuredGridVolumeRayIntegratorDotNet.h"

// native includes
#include "strstream"
#include "vtkUnstructuredGridVolumeZSweepMapper.h"
#include "vtkObject.h"
#include "vtkUnstructuredGridVolumeRayIntegrator.h"

using namespace System;

namespace vtk {

System::String^ vtkUnstructuredGridVolumeZSweepMapper::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkUnstructuredGridVolumeZSweepMapper>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkUnstructuredGridVolumeZSweepMapper::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkUnstructuredGridVolumeZSweepMapper>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkUnstructuredGridVolumeZSweepMapper^ vtkUnstructuredGridVolumeZSweepMapper::NewInstance()
{
  ::vtkUnstructuredGridVolumeZSweepMapper* retVal = static_cast<::vtkUnstructuredGridVolumeZSweepMapper*>(vtk::ConvertManagedToNative<::vtkUnstructuredGridVolumeZSweepMapper>(m_instance)->NewInstance());
  return gcnew vtkUnstructuredGridVolumeZSweepMapper(IntPtr(retVal), false);
}



vtkUnstructuredGridVolumeZSweepMapper^ vtkUnstructuredGridVolumeZSweepMapper::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkUnstructuredGridVolumeZSweepMapper* retVal = static_cast<::vtkUnstructuredGridVolumeZSweepMapper*>(::vtkUnstructuredGridVolumeZSweepMapper::SafeDownCast(oWrap));
  return gcnew vtkUnstructuredGridVolumeZSweepMapper(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkUnstructuredGridVolumeZSweepMapper::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkUnstructuredGridVolumeZSweepMapper>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkUnstructuredGridVolumeZSweepMapper::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkUnstructuredGridVolumeZSweepMapper>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkUnstructuredGridVolumeZSweepMapper::SetScalarMode(int arg0)
{
  vtk::ConvertManagedToNative<::vtkUnstructuredGridVolumeZSweepMapper>(m_instance)->SetScalarMode(arg0);
}



int vtkUnstructuredGridVolumeZSweepMapper::GetScalarMode()
{
  int retVal = vtk::ConvertManagedToNative<::vtkUnstructuredGridVolumeZSweepMapper>(m_instance)->GetScalarMode();
  return retVal;
}



void vtkUnstructuredGridVolumeZSweepMapper::SetScalarModeToDefault()
{
  vtk::ConvertManagedToNative<::vtkUnstructuredGridVolumeZSweepMapper>(m_instance)->SetScalarModeToDefault();
}



void vtkUnstructuredGridVolumeZSweepMapper::SetScalarModeToUsePointData()
{
  vtk::ConvertManagedToNative<::vtkUnstructuredGridVolumeZSweepMapper>(m_instance)->SetScalarModeToUsePointData();
}



void vtkUnstructuredGridVolumeZSweepMapper::SetScalarModeToUseCellData()
{
  vtk::ConvertManagedToNative<::vtkUnstructuredGridVolumeZSweepMapper>(m_instance)->SetScalarModeToUseCellData();
}



void vtkUnstructuredGridVolumeZSweepMapper::SetScalarModeToUsePointFieldData()
{
  vtk::ConvertManagedToNative<::vtkUnstructuredGridVolumeZSweepMapper>(m_instance)->SetScalarModeToUsePointFieldData();
}



void vtkUnstructuredGridVolumeZSweepMapper::SetScalarModeToUseCellFieldData()
{
  vtk::ConvertManagedToNative<::vtkUnstructuredGridVolumeZSweepMapper>(m_instance)->SetScalarModeToUseCellFieldData();
}



void vtkUnstructuredGridVolumeZSweepMapper::SelectScalarArray(int arrayNum)
{
  vtk::ConvertManagedToNative<::vtkUnstructuredGridVolumeZSweepMapper>(m_instance)->SelectScalarArray(arrayNum);
}



void vtkUnstructuredGridVolumeZSweepMapper::SelectScalarArray(System::String^ arrayName)
{
  char* arrayNameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(arrayName).ToPointer());
  vtk::ConvertManagedToNative<::vtkUnstructuredGridVolumeZSweepMapper>(m_instance)->SelectScalarArray(arrayNameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(arrayNameWrap));
}



System::String^ vtkUnstructuredGridVolumeZSweepMapper::GetArrayName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkUnstructuredGridVolumeZSweepMapper>(m_instance)->GetArrayName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkUnstructuredGridVolumeZSweepMapper::GetArrayId()
{
  int retVal = vtk::ConvertManagedToNative<::vtkUnstructuredGridVolumeZSweepMapper>(m_instance)->GetArrayId();
  return retVal;
}



int vtkUnstructuredGridVolumeZSweepMapper::GetArrayAccessMode()
{
  int retVal = vtk::ConvertManagedToNative<::vtkUnstructuredGridVolumeZSweepMapper>(m_instance)->GetArrayAccessMode();
  return retVal;
}



System::String^ vtkUnstructuredGridVolumeZSweepMapper::GetScalarModeAsString()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkUnstructuredGridVolumeZSweepMapper>(m_instance)->GetScalarModeAsString();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



void vtkUnstructuredGridVolumeZSweepMapper::SetImageSampleDistance(float arg0)
{
  vtk::ConvertManagedToNative<::vtkUnstructuredGridVolumeZSweepMapper>(m_instance)->SetImageSampleDistance(arg0);
}



float vtkUnstructuredGridVolumeZSweepMapper::GetImageSampleDistanceMinValue()
{
  float retVal = vtk::ConvertManagedToNative<::vtkUnstructuredGridVolumeZSweepMapper>(m_instance)->GetImageSampleDistanceMinValue();
  return retVal;
}



float vtkUnstructuredGridVolumeZSweepMapper::GetImageSampleDistanceMaxValue()
{
  float retVal = vtk::ConvertManagedToNative<::vtkUnstructuredGridVolumeZSweepMapper>(m_instance)->GetImageSampleDistanceMaxValue();
  return retVal;
}



float vtkUnstructuredGridVolumeZSweepMapper::GetImageSampleDistance()
{
  float retVal = vtk::ConvertManagedToNative<::vtkUnstructuredGridVolumeZSweepMapper>(m_instance)->GetImageSampleDistance();
  return retVal;
}



void vtkUnstructuredGridVolumeZSweepMapper::SetMinimumImageSampleDistance(float arg0)
{
  vtk::ConvertManagedToNative<::vtkUnstructuredGridVolumeZSweepMapper>(m_instance)->SetMinimumImageSampleDistance(arg0);
}



float vtkUnstructuredGridVolumeZSweepMapper::GetMinimumImageSampleDistanceMinValue()
{
  float retVal = vtk::ConvertManagedToNative<::vtkUnstructuredGridVolumeZSweepMapper>(m_instance)->GetMinimumImageSampleDistanceMinValue();
  return retVal;
}



float vtkUnstructuredGridVolumeZSweepMapper::GetMinimumImageSampleDistanceMaxValue()
{
  float retVal = vtk::ConvertManagedToNative<::vtkUnstructuredGridVolumeZSweepMapper>(m_instance)->GetMinimumImageSampleDistanceMaxValue();
  return retVal;
}



float vtkUnstructuredGridVolumeZSweepMapper::GetMinimumImageSampleDistance()
{
  float retVal = vtk::ConvertManagedToNative<::vtkUnstructuredGridVolumeZSweepMapper>(m_instance)->GetMinimumImageSampleDistance();
  return retVal;
}



void vtkUnstructuredGridVolumeZSweepMapper::SetMaximumImageSampleDistance(float arg0)
{
  vtk::ConvertManagedToNative<::vtkUnstructuredGridVolumeZSweepMapper>(m_instance)->SetMaximumImageSampleDistance(arg0);
}



float vtkUnstructuredGridVolumeZSweepMapper::GetMaximumImageSampleDistanceMinValue()
{
  float retVal = vtk::ConvertManagedToNative<::vtkUnstructuredGridVolumeZSweepMapper>(m_instance)->GetMaximumImageSampleDistanceMinValue();
  return retVal;
}



float vtkUnstructuredGridVolumeZSweepMapper::GetMaximumImageSampleDistanceMaxValue()
{
  float retVal = vtk::ConvertManagedToNative<::vtkUnstructuredGridVolumeZSweepMapper>(m_instance)->GetMaximumImageSampleDistanceMaxValue();
  return retVal;
}



float vtkUnstructuredGridVolumeZSweepMapper::GetMaximumImageSampleDistance()
{
  float retVal = vtk::ConvertManagedToNative<::vtkUnstructuredGridVolumeZSweepMapper>(m_instance)->GetMaximumImageSampleDistance();
  return retVal;
}



void vtkUnstructuredGridVolumeZSweepMapper::SetAutoAdjustSampleDistances(int arg0)
{
  vtk::ConvertManagedToNative<::vtkUnstructuredGridVolumeZSweepMapper>(m_instance)->SetAutoAdjustSampleDistances(arg0);
}



int vtkUnstructuredGridVolumeZSweepMapper::GetAutoAdjustSampleDistancesMinValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkUnstructuredGridVolumeZSweepMapper>(m_instance)->GetAutoAdjustSampleDistancesMinValue();
  return retVal;
}



int vtkUnstructuredGridVolumeZSweepMapper::GetAutoAdjustSampleDistancesMaxValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkUnstructuredGridVolumeZSweepMapper>(m_instance)->GetAutoAdjustSampleDistancesMaxValue();
  return retVal;
}



int vtkUnstructuredGridVolumeZSweepMapper::GetAutoAdjustSampleDistances()
{
  int retVal = vtk::ConvertManagedToNative<::vtkUnstructuredGridVolumeZSweepMapper>(m_instance)->GetAutoAdjustSampleDistances();
  return retVal;
}



void vtkUnstructuredGridVolumeZSweepMapper::AutoAdjustSampleDistancesOn()
{
  vtk::ConvertManagedToNative<::vtkUnstructuredGridVolumeZSweepMapper>(m_instance)->AutoAdjustSampleDistancesOn();
}



void vtkUnstructuredGridVolumeZSweepMapper::AutoAdjustSampleDistancesOff()
{
  vtk::ConvertManagedToNative<::vtkUnstructuredGridVolumeZSweepMapper>(m_instance)->AutoAdjustSampleDistancesOff();
}



void vtkUnstructuredGridVolumeZSweepMapper::SetIntermixIntersectingGeometry(int arg0)
{
  vtk::ConvertManagedToNative<::vtkUnstructuredGridVolumeZSweepMapper>(m_instance)->SetIntermixIntersectingGeometry(arg0);
}



int vtkUnstructuredGridVolumeZSweepMapper::GetIntermixIntersectingGeometryMinValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkUnstructuredGridVolumeZSweepMapper>(m_instance)->GetIntermixIntersectingGeometryMinValue();
  return retVal;
}



int vtkUnstructuredGridVolumeZSweepMapper::GetIntermixIntersectingGeometryMaxValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkUnstructuredGridVolumeZSweepMapper>(m_instance)->GetIntermixIntersectingGeometryMaxValue();
  return retVal;
}



int vtkUnstructuredGridVolumeZSweepMapper::GetIntermixIntersectingGeometry()
{
  int retVal = vtk::ConvertManagedToNative<::vtkUnstructuredGridVolumeZSweepMapper>(m_instance)->GetIntermixIntersectingGeometry();
  return retVal;
}



void vtkUnstructuredGridVolumeZSweepMapper::IntermixIntersectingGeometryOn()
{
  vtk::ConvertManagedToNative<::vtkUnstructuredGridVolumeZSweepMapper>(m_instance)->IntermixIntersectingGeometryOn();
}



void vtkUnstructuredGridVolumeZSweepMapper::IntermixIntersectingGeometryOff()
{
  vtk::ConvertManagedToNative<::vtkUnstructuredGridVolumeZSweepMapper>(m_instance)->IntermixIntersectingGeometryOff();
}



int vtkUnstructuredGridVolumeZSweepMapper::GetMaxPixelListSize()
{
  int retVal = vtk::ConvertManagedToNative<::vtkUnstructuredGridVolumeZSweepMapper>(m_instance)->GetMaxPixelListSize();
  return retVal;
}



void vtkUnstructuredGridVolumeZSweepMapper::SetMaxPixelListSize(int size)
{
  vtk::ConvertManagedToNative<::vtkUnstructuredGridVolumeZSweepMapper>(m_instance)->SetMaxPixelListSize(size);
}



void vtkUnstructuredGridVolumeZSweepMapper::SetRayIntegrator(vtkUnstructuredGridVolumeRayIntegrator^ ri)
{
  ::vtkUnstructuredGridVolumeRayIntegrator* riWrap = vtk::ConvertManagedToNative<::vtkUnstructuredGridVolumeRayIntegrator>(ri->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkUnstructuredGridVolumeZSweepMapper>(m_instance)->SetRayIntegrator(riWrap);
}



vtkUnstructuredGridVolumeRayIntegrator^ vtkUnstructuredGridVolumeZSweepMapper::GetRayIntegrator()
{
  ::vtkUnstructuredGridVolumeRayIntegrator* retVal = static_cast<::vtkUnstructuredGridVolumeRayIntegrator*>(vtk::ConvertManagedToNative<::vtkUnstructuredGridVolumeZSweepMapper>(m_instance)->GetRayIntegrator());
  return gcnew vtkUnstructuredGridVolumeRayIntegrator(IntPtr(retVal), false);
}



  vtkUnstructuredGridVolumeZSweepMapper::vtkUnstructuredGridVolumeZSweepMapper(System::IntPtr native, bool bConst) : vtkUnstructuredGridVolumeMapper(native, bConst) {}



  vtkUnstructuredGridVolumeZSweepMapper::vtkUnstructuredGridVolumeZSweepMapper(bool donothing) : vtkUnstructuredGridVolumeMapper(donothing) {}



  vtkUnstructuredGridVolumeZSweepMapper::vtkUnstructuredGridVolumeZSweepMapper() : vtkUnstructuredGridVolumeMapper(false) {
  this->SetNativePointer(IntPtr(::vtkUnstructuredGridVolumeZSweepMapper::New()));
}



  vtkUnstructuredGridVolumeZSweepMapper::~vtkUnstructuredGridVolumeZSweepMapper() { }





} // end namespace vtkVolumeRendering
