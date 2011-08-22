

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkVolumePropertyDotNet.h"

// native includes
#include "strstream"
#include "vtkVolumeProperty.h"
#include "vtkColorTransferFunction.h"
#include "vtkPiecewiseFunction.h"

using namespace System;

namespace vtk {

System::String^ vtkVolumeProperty::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkVolumeProperty>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkVolumeProperty::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkVolumeProperty>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkVolumeProperty^ vtkVolumeProperty::NewInstance()
{
  ::vtkVolumeProperty* retVal = static_cast<::vtkVolumeProperty*>(vtk::ConvertManagedToNative<::vtkVolumeProperty>(m_instance)->NewInstance());
  return gcnew vtkVolumeProperty(IntPtr(retVal), false);
}



vtkVolumeProperty^ vtkVolumeProperty::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkVolumeProperty* retVal = static_cast<::vtkVolumeProperty*>(::vtkVolumeProperty::SafeDownCast(oWrap));
  return gcnew vtkVolumeProperty(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkVolumeProperty::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkVolumeProperty>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkVolumeProperty::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkVolumeProperty>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




unsigned long vtkVolumeProperty::GetMTime()
{
  unsigned long retVal = vtk::ConvertManagedToNative<::vtkVolumeProperty>(m_instance)->GetMTime();
  return retVal;
}



void vtkVolumeProperty::SetIndependentComponents(int arg0)
{
  vtk::ConvertManagedToNative<::vtkVolumeProperty>(m_instance)->SetIndependentComponents(arg0);
}



int vtkVolumeProperty::GetIndependentComponentsMinValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkVolumeProperty>(m_instance)->GetIndependentComponentsMinValue();
  return retVal;
}



int vtkVolumeProperty::GetIndependentComponentsMaxValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkVolumeProperty>(m_instance)->GetIndependentComponentsMaxValue();
  return retVal;
}



int vtkVolumeProperty::GetIndependentComponents()
{
  int retVal = vtk::ConvertManagedToNative<::vtkVolumeProperty>(m_instance)->GetIndependentComponents();
  return retVal;
}



void vtkVolumeProperty::IndependentComponentsOn()
{
  vtk::ConvertManagedToNative<::vtkVolumeProperty>(m_instance)->IndependentComponentsOn();
}



void vtkVolumeProperty::IndependentComponentsOff()
{
  vtk::ConvertManagedToNative<::vtkVolumeProperty>(m_instance)->IndependentComponentsOff();
}



void vtkVolumeProperty::SetComponentWeight(int index, double value)
{
  vtk::ConvertManagedToNative<::vtkVolumeProperty>(m_instance)->SetComponentWeight(index, value);
}



double vtkVolumeProperty::GetComponentWeight(int index)
{
  double retVal = vtk::ConvertManagedToNative<::vtkVolumeProperty>(m_instance)->GetComponentWeight(index);
  return retVal;
}



void vtkVolumeProperty::SetInterpolationType(int arg0)
{
  vtk::ConvertManagedToNative<::vtkVolumeProperty>(m_instance)->SetInterpolationType(arg0);
}



int vtkVolumeProperty::GetInterpolationTypeMinValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkVolumeProperty>(m_instance)->GetInterpolationTypeMinValue();
  return retVal;
}



int vtkVolumeProperty::GetInterpolationTypeMaxValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkVolumeProperty>(m_instance)->GetInterpolationTypeMaxValue();
  return retVal;
}



int vtkVolumeProperty::GetInterpolationType()
{
  int retVal = vtk::ConvertManagedToNative<::vtkVolumeProperty>(m_instance)->GetInterpolationType();
  return retVal;
}



void vtkVolumeProperty::SetInterpolationTypeToNearest()
{
  vtk::ConvertManagedToNative<::vtkVolumeProperty>(m_instance)->SetInterpolationTypeToNearest();
}



void vtkVolumeProperty::SetInterpolationTypeToLinear()
{
  vtk::ConvertManagedToNative<::vtkVolumeProperty>(m_instance)->SetInterpolationTypeToLinear();
}



System::String^ vtkVolumeProperty::GetInterpolationTypeAsString()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkVolumeProperty>(m_instance)->GetInterpolationTypeAsString();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



void vtkVolumeProperty::SetColor(int index, vtkPiecewiseFunction^ function)
{
  ::vtkPiecewiseFunction* functionWrap = vtk::ConvertManagedToNative<::vtkPiecewiseFunction>(function->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkVolumeProperty>(m_instance)->SetColor(index, functionWrap);
}



void vtkVolumeProperty::SetColor(vtkPiecewiseFunction^ f)
{
  ::vtkPiecewiseFunction* fWrap = vtk::ConvertManagedToNative<::vtkPiecewiseFunction>(f->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkVolumeProperty>(m_instance)->SetColor(fWrap);
}



void vtkVolumeProperty::SetColor(int index, vtkColorTransferFunction^ function)
{
  ::vtkColorTransferFunction* functionWrap = vtk::ConvertManagedToNative<::vtkColorTransferFunction>(function->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkVolumeProperty>(m_instance)->SetColor(index, functionWrap);
}



void vtkVolumeProperty::SetColor(vtkColorTransferFunction^ f)
{
  ::vtkColorTransferFunction* fWrap = vtk::ConvertManagedToNative<::vtkColorTransferFunction>(f->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkVolumeProperty>(m_instance)->SetColor(fWrap);
}



int vtkVolumeProperty::GetColorChannels(int index)
{
  int retVal = vtk::ConvertManagedToNative<::vtkVolumeProperty>(m_instance)->GetColorChannels(index);
  return retVal;
}



int vtkVolumeProperty::GetColorChannels()
{
  int retVal = vtk::ConvertManagedToNative<::vtkVolumeProperty>(m_instance)->GetColorChannels();
  return retVal;
}



vtkPiecewiseFunction^ vtkVolumeProperty::GetGrayTransferFunction(int index)
{
  ::vtkPiecewiseFunction* retVal = static_cast<::vtkPiecewiseFunction*>(vtk::ConvertManagedToNative<::vtkVolumeProperty>(m_instance)->GetGrayTransferFunction(index));
  return gcnew vtkPiecewiseFunction(IntPtr(retVal), false);
}



vtkPiecewiseFunction^ vtkVolumeProperty::GetGrayTransferFunction()
{
  ::vtkPiecewiseFunction* retVal = static_cast<::vtkPiecewiseFunction*>(vtk::ConvertManagedToNative<::vtkVolumeProperty>(m_instance)->GetGrayTransferFunction());
  return gcnew vtkPiecewiseFunction(IntPtr(retVal), false);
}



vtkColorTransferFunction^ vtkVolumeProperty::GetRGBTransferFunction(int index)
{
  ::vtkColorTransferFunction* retVal = static_cast<::vtkColorTransferFunction*>(vtk::ConvertManagedToNative<::vtkVolumeProperty>(m_instance)->GetRGBTransferFunction(index));
  return gcnew vtkColorTransferFunction(IntPtr(retVal), false);
}



vtkColorTransferFunction^ vtkVolumeProperty::GetRGBTransferFunction()
{
  ::vtkColorTransferFunction* retVal = static_cast<::vtkColorTransferFunction*>(vtk::ConvertManagedToNative<::vtkVolumeProperty>(m_instance)->GetRGBTransferFunction());
  return gcnew vtkColorTransferFunction(IntPtr(retVal), false);
}



void vtkVolumeProperty::SetScalarOpacity(int index, vtkPiecewiseFunction^ function)
{
  ::vtkPiecewiseFunction* functionWrap = vtk::ConvertManagedToNative<::vtkPiecewiseFunction>(function->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkVolumeProperty>(m_instance)->SetScalarOpacity(index, functionWrap);
}



void vtkVolumeProperty::SetScalarOpacity(vtkPiecewiseFunction^ f)
{
  ::vtkPiecewiseFunction* fWrap = vtk::ConvertManagedToNative<::vtkPiecewiseFunction>(f->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkVolumeProperty>(m_instance)->SetScalarOpacity(fWrap);
}



vtkPiecewiseFunction^ vtkVolumeProperty::GetScalarOpacity(int index)
{
  ::vtkPiecewiseFunction* retVal = static_cast<::vtkPiecewiseFunction*>(vtk::ConvertManagedToNative<::vtkVolumeProperty>(m_instance)->GetScalarOpacity(index));
  return gcnew vtkPiecewiseFunction(IntPtr(retVal), false);
}



vtkPiecewiseFunction^ vtkVolumeProperty::GetScalarOpacity()
{
  ::vtkPiecewiseFunction* retVal = static_cast<::vtkPiecewiseFunction*>(vtk::ConvertManagedToNative<::vtkVolumeProperty>(m_instance)->GetScalarOpacity());
  return gcnew vtkPiecewiseFunction(IntPtr(retVal), false);
}



void vtkVolumeProperty::SetScalarOpacityUnitDistance(int index, double distance)
{
  vtk::ConvertManagedToNative<::vtkVolumeProperty>(m_instance)->SetScalarOpacityUnitDistance(index, distance);
}



void vtkVolumeProperty::SetScalarOpacityUnitDistance(double distance)
{
  vtk::ConvertManagedToNative<::vtkVolumeProperty>(m_instance)->SetScalarOpacityUnitDistance(distance);
}



double vtkVolumeProperty::GetScalarOpacityUnitDistance(int index)
{
  double retVal = vtk::ConvertManagedToNative<::vtkVolumeProperty>(m_instance)->GetScalarOpacityUnitDistance(index);
  return retVal;
}



double vtkVolumeProperty::GetScalarOpacityUnitDistance()
{
  double retVal = vtk::ConvertManagedToNative<::vtkVolumeProperty>(m_instance)->GetScalarOpacityUnitDistance();
  return retVal;
}



void vtkVolumeProperty::SetGradientOpacity(int index, vtkPiecewiseFunction^ function)
{
  ::vtkPiecewiseFunction* functionWrap = vtk::ConvertManagedToNative<::vtkPiecewiseFunction>(function->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkVolumeProperty>(m_instance)->SetGradientOpacity(index, functionWrap);
}



void vtkVolumeProperty::SetGradientOpacity(vtkPiecewiseFunction^ function)
{
  ::vtkPiecewiseFunction* functionWrap = vtk::ConvertManagedToNative<::vtkPiecewiseFunction>(function->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkVolumeProperty>(m_instance)->SetGradientOpacity(functionWrap);
}



vtkPiecewiseFunction^ vtkVolumeProperty::GetGradientOpacity(int index)
{
  ::vtkPiecewiseFunction* retVal = static_cast<::vtkPiecewiseFunction*>(vtk::ConvertManagedToNative<::vtkVolumeProperty>(m_instance)->GetGradientOpacity(index));
  return gcnew vtkPiecewiseFunction(IntPtr(retVal), false);
}



vtkPiecewiseFunction^ vtkVolumeProperty::GetGradientOpacity()
{
  ::vtkPiecewiseFunction* retVal = static_cast<::vtkPiecewiseFunction*>(vtk::ConvertManagedToNative<::vtkVolumeProperty>(m_instance)->GetGradientOpacity());
  return gcnew vtkPiecewiseFunction(IntPtr(retVal), false);
}



void vtkVolumeProperty::SetDisableGradientOpacity(int index, int value)
{
  vtk::ConvertManagedToNative<::vtkVolumeProperty>(m_instance)->SetDisableGradientOpacity(index, value);
}



void vtkVolumeProperty::SetDisableGradientOpacity(int value)
{
  vtk::ConvertManagedToNative<::vtkVolumeProperty>(m_instance)->SetDisableGradientOpacity(value);
}



void vtkVolumeProperty::DisableGradientOpacityOn(int index)
{
  vtk::ConvertManagedToNative<::vtkVolumeProperty>(m_instance)->DisableGradientOpacityOn(index);
}



void vtkVolumeProperty::DisableGradientOpacityOn()
{
  vtk::ConvertManagedToNative<::vtkVolumeProperty>(m_instance)->DisableGradientOpacityOn();
}



void vtkVolumeProperty::DisableGradientOpacityOff(int index)
{
  vtk::ConvertManagedToNative<::vtkVolumeProperty>(m_instance)->DisableGradientOpacityOff(index);
}



void vtkVolumeProperty::DisableGradientOpacityOff()
{
  vtk::ConvertManagedToNative<::vtkVolumeProperty>(m_instance)->DisableGradientOpacityOff();
}



int vtkVolumeProperty::GetDisableGradientOpacity(int index)
{
  int retVal = vtk::ConvertManagedToNative<::vtkVolumeProperty>(m_instance)->GetDisableGradientOpacity(index);
  return retVal;
}



int vtkVolumeProperty::GetDisableGradientOpacity()
{
  int retVal = vtk::ConvertManagedToNative<::vtkVolumeProperty>(m_instance)->GetDisableGradientOpacity();
  return retVal;
}



vtkPiecewiseFunction^ vtkVolumeProperty::GetStoredGradientOpacity(int index)
{
  ::vtkPiecewiseFunction* retVal = static_cast<::vtkPiecewiseFunction*>(vtk::ConvertManagedToNative<::vtkVolumeProperty>(m_instance)->GetStoredGradientOpacity(index));
  return gcnew vtkPiecewiseFunction(IntPtr(retVal), false);
}



vtkPiecewiseFunction^ vtkVolumeProperty::GetStoredGradientOpacity()
{
  ::vtkPiecewiseFunction* retVal = static_cast<::vtkPiecewiseFunction*>(vtk::ConvertManagedToNative<::vtkVolumeProperty>(m_instance)->GetStoredGradientOpacity());
  return gcnew vtkPiecewiseFunction(IntPtr(retVal), false);
}



void vtkVolumeProperty::SetShade(int index, int value)
{
  vtk::ConvertManagedToNative<::vtkVolumeProperty>(m_instance)->SetShade(index, value);
}



void vtkVolumeProperty::SetShade(int value)
{
  vtk::ConvertManagedToNative<::vtkVolumeProperty>(m_instance)->SetShade(value);
}



int vtkVolumeProperty::GetShade(int index)
{
  int retVal = vtk::ConvertManagedToNative<::vtkVolumeProperty>(m_instance)->GetShade(index);
  return retVal;
}



int vtkVolumeProperty::GetShade()
{
  int retVal = vtk::ConvertManagedToNative<::vtkVolumeProperty>(m_instance)->GetShade();
  return retVal;
}



void vtkVolumeProperty::ShadeOn(int index)
{
  vtk::ConvertManagedToNative<::vtkVolumeProperty>(m_instance)->ShadeOn(index);
}



void vtkVolumeProperty::ShadeOn()
{
  vtk::ConvertManagedToNative<::vtkVolumeProperty>(m_instance)->ShadeOn();
}



void vtkVolumeProperty::ShadeOff(int index)
{
  vtk::ConvertManagedToNative<::vtkVolumeProperty>(m_instance)->ShadeOff(index);
}



void vtkVolumeProperty::ShadeOff()
{
  vtk::ConvertManagedToNative<::vtkVolumeProperty>(m_instance)->ShadeOff();
}



void vtkVolumeProperty::SetAmbient(int index, double value)
{
  vtk::ConvertManagedToNative<::vtkVolumeProperty>(m_instance)->SetAmbient(index, value);
}



void vtkVolumeProperty::SetAmbient(double value)
{
  vtk::ConvertManagedToNative<::vtkVolumeProperty>(m_instance)->SetAmbient(value);
}



double vtkVolumeProperty::GetAmbient(int index)
{
  double retVal = vtk::ConvertManagedToNative<::vtkVolumeProperty>(m_instance)->GetAmbient(index);
  return retVal;
}



double vtkVolumeProperty::GetAmbient()
{
  double retVal = vtk::ConvertManagedToNative<::vtkVolumeProperty>(m_instance)->GetAmbient();
  return retVal;
}



void vtkVolumeProperty::SetDiffuse(int index, double value)
{
  vtk::ConvertManagedToNative<::vtkVolumeProperty>(m_instance)->SetDiffuse(index, value);
}



void vtkVolumeProperty::SetDiffuse(double value)
{
  vtk::ConvertManagedToNative<::vtkVolumeProperty>(m_instance)->SetDiffuse(value);
}



double vtkVolumeProperty::GetDiffuse(int index)
{
  double retVal = vtk::ConvertManagedToNative<::vtkVolumeProperty>(m_instance)->GetDiffuse(index);
  return retVal;
}



double vtkVolumeProperty::GetDiffuse()
{
  double retVal = vtk::ConvertManagedToNative<::vtkVolumeProperty>(m_instance)->GetDiffuse();
  return retVal;
}



void vtkVolumeProperty::SetSpecular(int index, double value)
{
  vtk::ConvertManagedToNative<::vtkVolumeProperty>(m_instance)->SetSpecular(index, value);
}



void vtkVolumeProperty::SetSpecular(double value)
{
  vtk::ConvertManagedToNative<::vtkVolumeProperty>(m_instance)->SetSpecular(value);
}



double vtkVolumeProperty::GetSpecular(int index)
{
  double retVal = vtk::ConvertManagedToNative<::vtkVolumeProperty>(m_instance)->GetSpecular(index);
  return retVal;
}



double vtkVolumeProperty::GetSpecular()
{
  double retVal = vtk::ConvertManagedToNative<::vtkVolumeProperty>(m_instance)->GetSpecular();
  return retVal;
}



void vtkVolumeProperty::SetSpecularPower(int index, double value)
{
  vtk::ConvertManagedToNative<::vtkVolumeProperty>(m_instance)->SetSpecularPower(index, value);
}



void vtkVolumeProperty::SetSpecularPower(double value)
{
  vtk::ConvertManagedToNative<::vtkVolumeProperty>(m_instance)->SetSpecularPower(value);
}



double vtkVolumeProperty::GetSpecularPower(int index)
{
  double retVal = vtk::ConvertManagedToNative<::vtkVolumeProperty>(m_instance)->GetSpecularPower(index);
  return retVal;
}



double vtkVolumeProperty::GetSpecularPower()
{
  double retVal = vtk::ConvertManagedToNative<::vtkVolumeProperty>(m_instance)->GetSpecularPower();
  return retVal;
}



  vtkVolumeProperty::vtkVolumeProperty(System::IntPtr native, bool bConst) : vtkObject(native, bConst) {}



  vtkVolumeProperty::vtkVolumeProperty(bool donothing) : vtkObject(donothing) {}



  vtkVolumeProperty::vtkVolumeProperty() : vtkObject(false) {
  this->SetNativePointer(IntPtr(::vtkVolumeProperty::New()));
}



  vtkVolumeProperty::~vtkVolumeProperty() { }





} // end namespace vtkRendering
