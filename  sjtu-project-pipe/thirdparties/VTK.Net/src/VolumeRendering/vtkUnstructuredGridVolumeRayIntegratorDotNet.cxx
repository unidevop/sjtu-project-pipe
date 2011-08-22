

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkUnstructuredGridVolumeRayIntegratorDotNet.h"

// native includes
#include "strstream"
#include "vtkUnstructuredGridVolumeRayIntegrator.h"
#include "vtkDataArray.h"
#include "vtkDoubleArray.h"
#include "vtkVolume.h"

using namespace System;

namespace vtk {

System::String^ vtkUnstructuredGridVolumeRayIntegrator::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkUnstructuredGridVolumeRayIntegrator>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkUnstructuredGridVolumeRayIntegrator::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkUnstructuredGridVolumeRayIntegrator>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkUnstructuredGridVolumeRayIntegrator^ vtkUnstructuredGridVolumeRayIntegrator::NewInstance()
{
  ::vtkUnstructuredGridVolumeRayIntegrator* retVal = static_cast<::vtkUnstructuredGridVolumeRayIntegrator*>(vtk::ConvertManagedToNative<::vtkUnstructuredGridVolumeRayIntegrator>(m_instance)->NewInstance());
  return gcnew vtkUnstructuredGridVolumeRayIntegrator(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkUnstructuredGridVolumeRayIntegrator::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkUnstructuredGridVolumeRayIntegrator>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkUnstructuredGridVolumeRayIntegrator::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkUnstructuredGridVolumeRayIntegrator>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkUnstructuredGridVolumeRayIntegrator::Initialize(vtkVolume^ volume, vtkDataArray^ scalars)
{
  ::vtkVolume* volumeWrap = vtk::ConvertManagedToNative<::vtkVolume>(volume->GetNativePointer());
  ::vtkDataArray* scalarsWrap = vtk::ConvertManagedToNative<::vtkDataArray>(scalars->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkUnstructuredGridVolumeRayIntegrator>(m_instance)->Initialize(volumeWrap, scalarsWrap);
}



void vtkUnstructuredGridVolumeRayIntegrator::Integrate(vtkDoubleArray^ intersectionLengths, vtkDataArray^ nearIntersections, vtkDataArray^ farIntersections, array<float>^ color)
{
  ::vtkDoubleArray* intersectionLengthsWrap = vtk::ConvertManagedToNative<::vtkDoubleArray>(intersectionLengths->GetNativePointer());
  ::vtkDataArray* nearIntersectionsWrap = vtk::ConvertManagedToNative<::vtkDataArray>(nearIntersections->GetNativePointer());
  ::vtkDataArray* farIntersectionsWrap = vtk::ConvertManagedToNative<::vtkDataArray>(farIntersections->GetNativePointer());
  pin_ptr<float> colorPin = &color[0];
  float* nativecolorPin = colorPin;
  vtk::ConvertManagedToNative<::vtkUnstructuredGridVolumeRayIntegrator>(m_instance)->Integrate(intersectionLengthsWrap, nearIntersectionsWrap, farIntersectionsWrap, nativecolorPin);
}



  vtkUnstructuredGridVolumeRayIntegrator::vtkUnstructuredGridVolumeRayIntegrator(System::IntPtr native, bool bConst) : vtkObject(native, bConst) {}



  vtkUnstructuredGridVolumeRayIntegrator::vtkUnstructuredGridVolumeRayIntegrator(bool donothing) : vtkObject(donothing) {}



  vtkUnstructuredGridVolumeRayIntegrator::vtkUnstructuredGridVolumeRayIntegrator() : vtkObject(false) {
  this->SetNativePointer(IntPtr(::vtkUnstructuredGridVolumeRayIntegrator::New()));
}



  vtkUnstructuredGridVolumeRayIntegrator::~vtkUnstructuredGridVolumeRayIntegrator() { }





} // end namespace vtkVolumeRendering
