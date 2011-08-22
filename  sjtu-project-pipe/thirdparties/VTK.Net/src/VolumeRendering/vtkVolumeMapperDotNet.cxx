

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkVolumeMapperDotNet.h"

// native includes
#include "strstream"
#include "vtkVolumeMapper.h"
#include "vtkDataSet.h"
#include "vtkImageData.h"

using namespace System;

namespace vtk {

System::String^ vtkVolumeMapper::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkVolumeMapper>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkVolumeMapper::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkVolumeMapper>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkVolumeMapper^ vtkVolumeMapper::NewInstance()
{
  ::vtkVolumeMapper* retVal = static_cast<::vtkVolumeMapper*>(vtk::ConvertManagedToNative<::vtkVolumeMapper>(m_instance)->NewInstance());
  return gcnew vtkVolumeMapper(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkVolumeMapper::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkVolumeMapper>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkVolumeMapper::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkVolumeMapper>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkVolumeMapper::SetInput(vtkImageData^ arg0)
{
  ::vtkImageData* arg0Wrap = vtk::ConvertManagedToNative<::vtkImageData>(arg0->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkVolumeMapper>(m_instance)->SetInput(arg0Wrap);
}



void vtkVolumeMapper::SetInput(vtkDataSet^ arg0)
{
  ::vtkDataSet* arg0Wrap = vtk::ConvertManagedToNative<::vtkDataSet>(arg0->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkVolumeMapper>(m_instance)->SetInput(arg0Wrap);
}



vtkImageData^ vtkVolumeMapper::GetInput()
{
  ::vtkImageData* retVal = static_cast<::vtkImageData*>(vtk::ConvertManagedToNative<::vtkVolumeMapper>(m_instance)->GetInput());
  return gcnew vtkImageData(IntPtr(retVal), false);
}



void vtkVolumeMapper::SetBlendMode(int arg0)
{
  vtk::ConvertManagedToNative<::vtkVolumeMapper>(m_instance)->SetBlendMode(arg0);
}



void vtkVolumeMapper::SetBlendModeToComposite()
{
  vtk::ConvertManagedToNative<::vtkVolumeMapper>(m_instance)->SetBlendModeToComposite();
}



void vtkVolumeMapper::SetBlendModeToMaximumIntensity()
{
  vtk::ConvertManagedToNative<::vtkVolumeMapper>(m_instance)->SetBlendModeToMaximumIntensity();
}



int vtkVolumeMapper::GetBlendMode()
{
  int retVal = vtk::ConvertManagedToNative<::vtkVolumeMapper>(m_instance)->GetBlendMode();
  return retVal;
}



void vtkVolumeMapper::SetCropping(int arg0)
{
  vtk::ConvertManagedToNative<::vtkVolumeMapper>(m_instance)->SetCropping(arg0);
}



int vtkVolumeMapper::GetCroppingMinValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkVolumeMapper>(m_instance)->GetCroppingMinValue();
  return retVal;
}



int vtkVolumeMapper::GetCroppingMaxValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkVolumeMapper>(m_instance)->GetCroppingMaxValue();
  return retVal;
}



int vtkVolumeMapper::GetCropping()
{
  int retVal = vtk::ConvertManagedToNative<::vtkVolumeMapper>(m_instance)->GetCropping();
  return retVal;
}



void vtkVolumeMapper::CroppingOn()
{
  vtk::ConvertManagedToNative<::vtkVolumeMapper>(m_instance)->CroppingOn();
}



void vtkVolumeMapper::CroppingOff()
{
  vtk::ConvertManagedToNative<::vtkVolumeMapper>(m_instance)->CroppingOff();
}



void vtkVolumeMapper::SetCroppingRegionPlanes(double arg0, double arg1, double arg2, double arg3, double arg4, double arg5)
{
  vtk::ConvertManagedToNative<::vtkVolumeMapper>(m_instance)->SetCroppingRegionPlanes(arg0, arg1, arg2, arg3, arg4, arg5);
}



void vtkVolumeMapper::SetCroppingRegionPlanes(array<double>^ a)
{
  pin_ptr<double> aPin = &a[0];
  double* nativeaPin = aPin;
  vtk::ConvertManagedToNative<::vtkVolumeMapper>(m_instance)->SetCroppingRegionPlanes(nativeaPin);
}



array<double>^ vtkVolumeMapper::GetCroppingRegionPlanes()
{
  const double* retVal = vtk::ConvertManagedToNative<::vtkVolumeMapper>(m_instance)->GetCroppingRegionPlanes();
  array<double>^ mRetVal = gcnew array<double>(6);
  for (size_t cprIdx=0; cprIdx<6; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



array<double>^ vtkVolumeMapper::GetVoxelCroppingRegionPlanes()
{
  const double* retVal = vtk::ConvertManagedToNative<::vtkVolumeMapper>(m_instance)->GetVoxelCroppingRegionPlanes();
  array<double>^ mRetVal = gcnew array<double>(6);
  for (size_t cprIdx=0; cprIdx<6; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



void vtkVolumeMapper::SetCroppingRegionFlags(int arg0)
{
  vtk::ConvertManagedToNative<::vtkVolumeMapper>(m_instance)->SetCroppingRegionFlags(arg0);
}



int vtkVolumeMapper::GetCroppingRegionFlagsMinValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkVolumeMapper>(m_instance)->GetCroppingRegionFlagsMinValue();
  return retVal;
}



int vtkVolumeMapper::GetCroppingRegionFlagsMaxValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkVolumeMapper>(m_instance)->GetCroppingRegionFlagsMaxValue();
  return retVal;
}



int vtkVolumeMapper::GetCroppingRegionFlags()
{
  int retVal = vtk::ConvertManagedToNative<::vtkVolumeMapper>(m_instance)->GetCroppingRegionFlags();
  return retVal;
}



void vtkVolumeMapper::SetCroppingRegionFlagsToSubVolume()
{
  vtk::ConvertManagedToNative<::vtkVolumeMapper>(m_instance)->SetCroppingRegionFlagsToSubVolume();
}



void vtkVolumeMapper::SetCroppingRegionFlagsToFence()
{
  vtk::ConvertManagedToNative<::vtkVolumeMapper>(m_instance)->SetCroppingRegionFlagsToFence();
}



void vtkVolumeMapper::SetCroppingRegionFlagsToInvertedFence()
{
  vtk::ConvertManagedToNative<::vtkVolumeMapper>(m_instance)->SetCroppingRegionFlagsToInvertedFence();
}



void vtkVolumeMapper::SetCroppingRegionFlagsToCross()
{
  vtk::ConvertManagedToNative<::vtkVolumeMapper>(m_instance)->SetCroppingRegionFlagsToCross();
}



void vtkVolumeMapper::SetCroppingRegionFlagsToInvertedCross()
{
  vtk::ConvertManagedToNative<::vtkVolumeMapper>(m_instance)->SetCroppingRegionFlagsToInvertedCross();
}



  vtkVolumeMapper::vtkVolumeMapper(System::IntPtr native, bool bConst) : vtkAbstractVolumeMapper(native, bConst) {}



  vtkVolumeMapper::vtkVolumeMapper(bool donothing) : vtkAbstractVolumeMapper(donothing) {}



  vtkVolumeMapper::vtkVolumeMapper() : vtkAbstractVolumeMapper(false) {
  this->SetNativePointer(IntPtr(::vtkVolumeMapper::New()));
}



  vtkVolumeMapper::~vtkVolumeMapper() { }





} // end namespace vtkVolumeRendering
