

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkUnstructuredGridPreIntegrationDotNet.h"

// native includes
#include "strstream"
#include "vtkUnstructuredGridPreIntegration.h"
#include "vtkDataArray.h"
#include "vtkDoubleArray.h"
#include "vtkObject.h"
#include "vtkVolume.h"

using namespace System;

namespace vtk {

System::String^ vtkUnstructuredGridPreIntegration::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkUnstructuredGridPreIntegration>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkUnstructuredGridPreIntegration::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkUnstructuredGridPreIntegration>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkUnstructuredGridPreIntegration^ vtkUnstructuredGridPreIntegration::NewInstance()
{
  ::vtkUnstructuredGridPreIntegration* retVal = static_cast<::vtkUnstructuredGridPreIntegration*>(vtk::ConvertManagedToNative<::vtkUnstructuredGridPreIntegration>(m_instance)->NewInstance());
  return gcnew vtkUnstructuredGridPreIntegration(IntPtr(retVal), false);
}



vtkUnstructuredGridPreIntegration^ vtkUnstructuredGridPreIntegration::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkUnstructuredGridPreIntegration* retVal = static_cast<::vtkUnstructuredGridPreIntegration*>(::vtkUnstructuredGridPreIntegration::SafeDownCast(oWrap));
  return gcnew vtkUnstructuredGridPreIntegration(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkUnstructuredGridPreIntegration::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkUnstructuredGridPreIntegration>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkUnstructuredGridPreIntegration::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkUnstructuredGridPreIntegration>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkUnstructuredGridPreIntegration::Initialize(vtkVolume^ volume, vtkDataArray^ scalars)
{
  ::vtkVolume* volumeWrap = vtk::ConvertManagedToNative<::vtkVolume>(volume->GetNativePointer());
  ::vtkDataArray* scalarsWrap = vtk::ConvertManagedToNative<::vtkDataArray>(scalars->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkUnstructuredGridPreIntegration>(m_instance)->Initialize(volumeWrap, scalarsWrap);
}



void vtkUnstructuredGridPreIntegration::Integrate(vtkDoubleArray^ intersectionLengths, vtkDataArray^ nearIntersections, vtkDataArray^ farIntersections, array<float>^ color)
{
  ::vtkDoubleArray* intersectionLengthsWrap = vtk::ConvertManagedToNative<::vtkDoubleArray>(intersectionLengths->GetNativePointer());
  ::vtkDataArray* nearIntersectionsWrap = vtk::ConvertManagedToNative<::vtkDataArray>(nearIntersections->GetNativePointer());
  ::vtkDataArray* farIntersectionsWrap = vtk::ConvertManagedToNative<::vtkDataArray>(farIntersections->GetNativePointer());
  pin_ptr<float> colorPin = &color[0];
  float* nativecolorPin = colorPin;
  vtk::ConvertManagedToNative<::vtkUnstructuredGridPreIntegration>(m_instance)->Integrate(intersectionLengthsWrap, nearIntersectionsWrap, farIntersectionsWrap, nativecolorPin);
}



vtkUnstructuredGridVolumeRayIntegrator^ vtkUnstructuredGridPreIntegration::GetIntegrator()
{
  ::vtkUnstructuredGridVolumeRayIntegrator* retVal = static_cast<::vtkUnstructuredGridVolumeRayIntegrator*>(vtk::ConvertManagedToNative<::vtkUnstructuredGridPreIntegration>(m_instance)->GetIntegrator());
  return gcnew vtkUnstructuredGridVolumeRayIntegrator(IntPtr(retVal), false);
}



void vtkUnstructuredGridPreIntegration::SetIntegrator(vtkUnstructuredGridVolumeRayIntegrator^ arg0)
{
  ::vtkUnstructuredGridVolumeRayIntegrator* arg0Wrap = vtk::ConvertManagedToNative<::vtkUnstructuredGridVolumeRayIntegrator>(arg0->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkUnstructuredGridPreIntegration>(m_instance)->SetIntegrator(arg0Wrap);
}



void vtkUnstructuredGridPreIntegration::SetIntegrationTableScalarResolution(int arg0)
{
  vtk::ConvertManagedToNative<::vtkUnstructuredGridPreIntegration>(m_instance)->SetIntegrationTableScalarResolution(arg0);
}



int vtkUnstructuredGridPreIntegration::GetIntegrationTableScalarResolution()
{
  int retVal = vtk::ConvertManagedToNative<::vtkUnstructuredGridPreIntegration>(m_instance)->GetIntegrationTableScalarResolution();
  return retVal;
}



void vtkUnstructuredGridPreIntegration::SetIntegrationTableLengthResolution(int arg0)
{
  vtk::ConvertManagedToNative<::vtkUnstructuredGridPreIntegration>(m_instance)->SetIntegrationTableLengthResolution(arg0);
}



int vtkUnstructuredGridPreIntegration::GetIntegrationTableLengthResolution()
{
  int retVal = vtk::ConvertManagedToNative<::vtkUnstructuredGridPreIntegration>(m_instance)->GetIntegrationTableLengthResolution();
  return retVal;
}



double vtkUnstructuredGridPreIntegration::GetIntegrationTableScalarShift(int component)
{
  double retVal = vtk::ConvertManagedToNative<::vtkUnstructuredGridPreIntegration>(m_instance)->GetIntegrationTableScalarShift(component);
  return retVal;
}



double vtkUnstructuredGridPreIntegration::GetIntegrationTableScalarScale(int component)
{
  double retVal = vtk::ConvertManagedToNative<::vtkUnstructuredGridPreIntegration>(m_instance)->GetIntegrationTableScalarScale(component);
  return retVal;
}



double vtkUnstructuredGridPreIntegration::GetIntegrationTableLengthScale()
{
  double retVal = vtk::ConvertManagedToNative<::vtkUnstructuredGridPreIntegration>(m_instance)->GetIntegrationTableLengthScale();
  return retVal;
}



int vtkUnstructuredGridPreIntegration::GetIncrementalPreIntegration()
{
  int retVal = vtk::ConvertManagedToNative<::vtkUnstructuredGridPreIntegration>(m_instance)->GetIncrementalPreIntegration();
  return retVal;
}



void vtkUnstructuredGridPreIntegration::SetIncrementalPreIntegration(int arg0)
{
  vtk::ConvertManagedToNative<::vtkUnstructuredGridPreIntegration>(m_instance)->SetIncrementalPreIntegration(arg0);
}



void vtkUnstructuredGridPreIntegration::IncrementalPreIntegrationOn()
{
  vtk::ConvertManagedToNative<::vtkUnstructuredGridPreIntegration>(m_instance)->IncrementalPreIntegrationOn();
}



void vtkUnstructuredGridPreIntegration::IncrementalPreIntegrationOff()
{
  vtk::ConvertManagedToNative<::vtkUnstructuredGridPreIntegration>(m_instance)->IncrementalPreIntegrationOff();
}



  vtkUnstructuredGridPreIntegration::vtkUnstructuredGridPreIntegration(System::IntPtr native, bool bConst) : vtkUnstructuredGridVolumeRayIntegrator(native, bConst) {}



  vtkUnstructuredGridPreIntegration::vtkUnstructuredGridPreIntegration(bool donothing) : vtkUnstructuredGridVolumeRayIntegrator(donothing) {}



  vtkUnstructuredGridPreIntegration::vtkUnstructuredGridPreIntegration() : vtkUnstructuredGridVolumeRayIntegrator(false) {
  this->SetNativePointer(IntPtr(::vtkUnstructuredGridPreIntegration::New()));
}



  vtkUnstructuredGridPreIntegration::~vtkUnstructuredGridPreIntegration() { }





} // end namespace vtkVolumeRendering
