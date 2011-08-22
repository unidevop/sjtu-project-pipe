

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkUnstructuredGridLinearRayIntegratorDotNet.h"

// native includes
#include "strstream"
#include "vtkUnstructuredGridLinearRayIntegrator.h"
#include "vtkDataArray.h"
#include "vtkDoubleArray.h"
#include "vtkObject.h"
#include "vtkVolume.h"

using namespace System;

namespace vtk {

System::String^ vtkUnstructuredGridLinearRayIntegrator::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkUnstructuredGridLinearRayIntegrator>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkUnstructuredGridLinearRayIntegrator::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkUnstructuredGridLinearRayIntegrator>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkUnstructuredGridLinearRayIntegrator^ vtkUnstructuredGridLinearRayIntegrator::NewInstance()
{
  ::vtkUnstructuredGridLinearRayIntegrator* retVal = static_cast<::vtkUnstructuredGridLinearRayIntegrator*>(vtk::ConvertManagedToNative<::vtkUnstructuredGridLinearRayIntegrator>(m_instance)->NewInstance());
  return gcnew vtkUnstructuredGridLinearRayIntegrator(IntPtr(retVal), false);
}



vtkUnstructuredGridLinearRayIntegrator^ vtkUnstructuredGridLinearRayIntegrator::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkUnstructuredGridLinearRayIntegrator* retVal = static_cast<::vtkUnstructuredGridLinearRayIntegrator*>(::vtkUnstructuredGridLinearRayIntegrator::SafeDownCast(oWrap));
  return gcnew vtkUnstructuredGridLinearRayIntegrator(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkUnstructuredGridLinearRayIntegrator::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkUnstructuredGridLinearRayIntegrator>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkUnstructuredGridLinearRayIntegrator::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkUnstructuredGridLinearRayIntegrator>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkUnstructuredGridLinearRayIntegrator::Initialize(vtkVolume^ volume, vtkDataArray^ scalars)
{
  ::vtkVolume* volumeWrap = vtk::ConvertManagedToNative<::vtkVolume>(volume->GetNativePointer());
  ::vtkDataArray* scalarsWrap = vtk::ConvertManagedToNative<::vtkDataArray>(scalars->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkUnstructuredGridLinearRayIntegrator>(m_instance)->Initialize(volumeWrap, scalarsWrap);
}



void vtkUnstructuredGridLinearRayIntegrator::Integrate(vtkDoubleArray^ intersectionLengths, vtkDataArray^ nearIntersections, vtkDataArray^ farIntersections, array<float>^ color)
{
  ::vtkDoubleArray* intersectionLengthsWrap = vtk::ConvertManagedToNative<::vtkDoubleArray>(intersectionLengths->GetNativePointer());
  ::vtkDataArray* nearIntersectionsWrap = vtk::ConvertManagedToNative<::vtkDataArray>(nearIntersections->GetNativePointer());
  ::vtkDataArray* farIntersectionsWrap = vtk::ConvertManagedToNative<::vtkDataArray>(farIntersections->GetNativePointer());
  pin_ptr<float> colorPin = &color[0];
  float* nativecolorPin = colorPin;
  vtk::ConvertManagedToNative<::vtkUnstructuredGridLinearRayIntegrator>(m_instance)->Integrate(intersectionLengthsWrap, nearIntersectionsWrap, farIntersectionsWrap, nativecolorPin);
}



void vtkUnstructuredGridLinearRayIntegrator::IntegrateRay(double length, double intensity_front, double attenuation_front, double intensity_back, double attenuation_back, array<float>^ color)
{
  pin_ptr<float> colorPin = &color[0];
  float* nativecolorPin = colorPin;
  ::vtkUnstructuredGridLinearRayIntegrator::IntegrateRay(length, intensity_front, attenuation_front, intensity_back, attenuation_back, nativecolorPin);
}



void vtkUnstructuredGridLinearRayIntegrator::IntegrateRay(double length, array<double>^ color_front, double attenuation_front, array<double>^ color_back, double attenuation_back, array<float>^ color)
{
  pin_ptr<double> color_frontPin = &color_front[0];
  double* nativecolor_frontPin = color_frontPin;
  pin_ptr<double> color_backPin = &color_back[0];
  double* nativecolor_backPin = color_backPin;
  pin_ptr<float> colorPin = &color[0];
  float* nativecolorPin = colorPin;
  ::vtkUnstructuredGridLinearRayIntegrator::IntegrateRay(length, nativecolor_frontPin, attenuation_front, nativecolor_backPin, attenuation_back, nativecolorPin);
}



float vtkUnstructuredGridLinearRayIntegrator::Psi(float length, float attenuation_front, float attenuation_back)
{
  float retVal = ::vtkUnstructuredGridLinearRayIntegrator::Psi(length, attenuation_front, attenuation_back);
  return retVal;
}



  vtkUnstructuredGridLinearRayIntegrator::vtkUnstructuredGridLinearRayIntegrator(System::IntPtr native, bool bConst) : vtkUnstructuredGridVolumeRayIntegrator(native, bConst) {}



  vtkUnstructuredGridLinearRayIntegrator::vtkUnstructuredGridLinearRayIntegrator(bool donothing) : vtkUnstructuredGridVolumeRayIntegrator(donothing) {}



  vtkUnstructuredGridLinearRayIntegrator::vtkUnstructuredGridLinearRayIntegrator() : vtkUnstructuredGridVolumeRayIntegrator(false) {
  this->SetNativePointer(IntPtr(::vtkUnstructuredGridLinearRayIntegrator::New()));
}



  vtkUnstructuredGridLinearRayIntegrator::~vtkUnstructuredGridLinearRayIntegrator() { }





} // end namespace vtkVolumeRendering
