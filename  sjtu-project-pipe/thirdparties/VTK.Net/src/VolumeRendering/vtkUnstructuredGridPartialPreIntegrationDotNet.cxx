

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkUnstructuredGridPartialPreIntegrationDotNet.h"

// native includes
#include "strstream"
#include "vtkUnstructuredGridPartialPreIntegration.h"
#include "vtkDataArray.h"
#include "vtkDoubleArray.h"
#include "vtkObject.h"
#include "vtkVolume.h"

using namespace System;

namespace vtk {

System::String^ vtkUnstructuredGridPartialPreIntegration::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkUnstructuredGridPartialPreIntegration>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkUnstructuredGridPartialPreIntegration::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkUnstructuredGridPartialPreIntegration>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkUnstructuredGridPartialPreIntegration^ vtkUnstructuredGridPartialPreIntegration::NewInstance()
{
  ::vtkUnstructuredGridPartialPreIntegration* retVal = static_cast<::vtkUnstructuredGridPartialPreIntegration*>(vtk::ConvertManagedToNative<::vtkUnstructuredGridPartialPreIntegration>(m_instance)->NewInstance());
  return gcnew vtkUnstructuredGridPartialPreIntegration(IntPtr(retVal), false);
}



vtkUnstructuredGridPartialPreIntegration^ vtkUnstructuredGridPartialPreIntegration::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkUnstructuredGridPartialPreIntegration* retVal = static_cast<::vtkUnstructuredGridPartialPreIntegration*>(::vtkUnstructuredGridPartialPreIntegration::SafeDownCast(oWrap));
  return gcnew vtkUnstructuredGridPartialPreIntegration(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkUnstructuredGridPartialPreIntegration::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkUnstructuredGridPartialPreIntegration>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkUnstructuredGridPartialPreIntegration::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkUnstructuredGridPartialPreIntegration>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkUnstructuredGridPartialPreIntegration::Initialize(vtkVolume^ volume, vtkDataArray^ scalars)
{
  ::vtkVolume* volumeWrap = vtk::ConvertManagedToNative<::vtkVolume>(volume->GetNativePointer());
  ::vtkDataArray* scalarsWrap = vtk::ConvertManagedToNative<::vtkDataArray>(scalars->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkUnstructuredGridPartialPreIntegration>(m_instance)->Initialize(volumeWrap, scalarsWrap);
}



void vtkUnstructuredGridPartialPreIntegration::Integrate(vtkDoubleArray^ intersectionLengths, vtkDataArray^ nearIntersections, vtkDataArray^ farIntersections, array<float>^ color)
{
  ::vtkDoubleArray* intersectionLengthsWrap = vtk::ConvertManagedToNative<::vtkDoubleArray>(intersectionLengths->GetNativePointer());
  ::vtkDataArray* nearIntersectionsWrap = vtk::ConvertManagedToNative<::vtkDataArray>(nearIntersections->GetNativePointer());
  ::vtkDataArray* farIntersectionsWrap = vtk::ConvertManagedToNative<::vtkDataArray>(farIntersections->GetNativePointer());
  pin_ptr<float> colorPin = &color[0];
  float* nativecolorPin = colorPin;
  vtk::ConvertManagedToNative<::vtkUnstructuredGridPartialPreIntegration>(m_instance)->Integrate(intersectionLengthsWrap, nearIntersectionsWrap, farIntersectionsWrap, nativecolorPin);
}



void vtkUnstructuredGridPartialPreIntegration::IntegrateRay(double length, double intensity_front, double attenuation_front, double intensity_back, double attenuation_back, array<float>^ color)
{
  pin_ptr<float> colorPin = &color[0];
  float* nativecolorPin = colorPin;
  ::vtkUnstructuredGridPartialPreIntegration::IntegrateRay(length, intensity_front, attenuation_front, intensity_back, attenuation_back, nativecolorPin);
}



void vtkUnstructuredGridPartialPreIntegration::IntegrateRay(double length, array<double>^ color_front, double attenuation_front, array<double>^ color_back, double attenuation_back, array<float>^ color)
{
  pin_ptr<double> color_frontPin = &color_front[0];
  double* nativecolor_frontPin = color_frontPin;
  pin_ptr<double> color_backPin = &color_back[0];
  double* nativecolor_backPin = color_backPin;
  pin_ptr<float> colorPin = &color[0];
  float* nativecolorPin = colorPin;
  ::vtkUnstructuredGridPartialPreIntegration::IntegrateRay(length, nativecolor_frontPin, attenuation_front, nativecolor_backPin, attenuation_back, nativecolorPin);
}



float vtkUnstructuredGridPartialPreIntegration::Psi(float taufD, float taubD)
{
  float retVal = ::vtkUnstructuredGridPartialPreIntegration::Psi(taufD, taubD);
  return retVal;
}



void vtkUnstructuredGridPartialPreIntegration::BuildPsiTable()
{
  ::vtkUnstructuredGridPartialPreIntegration::BuildPsiTable();
}



  vtkUnstructuredGridPartialPreIntegration::vtkUnstructuredGridPartialPreIntegration(System::IntPtr native, bool bConst) : vtkUnstructuredGridVolumeRayIntegrator(native, bConst) {}



  vtkUnstructuredGridPartialPreIntegration::vtkUnstructuredGridPartialPreIntegration(bool donothing) : vtkUnstructuredGridVolumeRayIntegrator(donothing) {}



  vtkUnstructuredGridPartialPreIntegration::vtkUnstructuredGridPartialPreIntegration() : vtkUnstructuredGridVolumeRayIntegrator(false) {
  this->SetNativePointer(IntPtr(::vtkUnstructuredGridPartialPreIntegration::New()));
}



  vtkUnstructuredGridPartialPreIntegration::~vtkUnstructuredGridPartialPreIntegration() { }





} // end namespace vtkVolumeRendering
