

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkUnstructuredGridHomogeneousRayIntegratorDotNet.h"

// native includes
#include "strstream"
#include "vtkUnstructuredGridHomogeneousRayIntegrator.h"
#include "vtkDataArray.h"
#include "vtkDoubleArray.h"
#include "vtkObject.h"
#include "vtkVolume.h"

using namespace System;

namespace vtk {

System::String^ vtkUnstructuredGridHomogeneousRayIntegrator::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkUnstructuredGridHomogeneousRayIntegrator>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkUnstructuredGridHomogeneousRayIntegrator::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkUnstructuredGridHomogeneousRayIntegrator>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkUnstructuredGridHomogeneousRayIntegrator^ vtkUnstructuredGridHomogeneousRayIntegrator::NewInstance()
{
  ::vtkUnstructuredGridHomogeneousRayIntegrator* retVal = static_cast<::vtkUnstructuredGridHomogeneousRayIntegrator*>(vtk::ConvertManagedToNative<::vtkUnstructuredGridHomogeneousRayIntegrator>(m_instance)->NewInstance());
  return gcnew vtkUnstructuredGridHomogeneousRayIntegrator(IntPtr(retVal), false);
}



vtkUnstructuredGridHomogeneousRayIntegrator^ vtkUnstructuredGridHomogeneousRayIntegrator::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkUnstructuredGridHomogeneousRayIntegrator* retVal = static_cast<::vtkUnstructuredGridHomogeneousRayIntegrator*>(::vtkUnstructuredGridHomogeneousRayIntegrator::SafeDownCast(oWrap));
  return gcnew vtkUnstructuredGridHomogeneousRayIntegrator(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkUnstructuredGridHomogeneousRayIntegrator::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkUnstructuredGridHomogeneousRayIntegrator>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkUnstructuredGridHomogeneousRayIntegrator::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkUnstructuredGridHomogeneousRayIntegrator>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkUnstructuredGridHomogeneousRayIntegrator::Initialize(vtkVolume^ volume, vtkDataArray^ scalars)
{
  ::vtkVolume* volumeWrap = vtk::ConvertManagedToNative<::vtkVolume>(volume->GetNativePointer());
  ::vtkDataArray* scalarsWrap = vtk::ConvertManagedToNative<::vtkDataArray>(scalars->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkUnstructuredGridHomogeneousRayIntegrator>(m_instance)->Initialize(volumeWrap, scalarsWrap);
}



void vtkUnstructuredGridHomogeneousRayIntegrator::Integrate(vtkDoubleArray^ intersectionLengths, vtkDataArray^ nearIntersections, vtkDataArray^ farIntersections, array<float>^ color)
{
  ::vtkDoubleArray* intersectionLengthsWrap = vtk::ConvertManagedToNative<::vtkDoubleArray>(intersectionLengths->GetNativePointer());
  ::vtkDataArray* nearIntersectionsWrap = vtk::ConvertManagedToNative<::vtkDataArray>(nearIntersections->GetNativePointer());
  ::vtkDataArray* farIntersectionsWrap = vtk::ConvertManagedToNative<::vtkDataArray>(farIntersections->GetNativePointer());
  pin_ptr<float> colorPin = &color[0];
  float* nativecolorPin = colorPin;
  vtk::ConvertManagedToNative<::vtkUnstructuredGridHomogeneousRayIntegrator>(m_instance)->Integrate(intersectionLengthsWrap, nearIntersectionsWrap, farIntersectionsWrap, nativecolorPin);
}



void vtkUnstructuredGridHomogeneousRayIntegrator::SetTransferFunctionTableSize(int arg0)
{
  vtk::ConvertManagedToNative<::vtkUnstructuredGridHomogeneousRayIntegrator>(m_instance)->SetTransferFunctionTableSize(arg0);
}



int vtkUnstructuredGridHomogeneousRayIntegrator::GetTransferFunctionTableSize()
{
  int retVal = vtk::ConvertManagedToNative<::vtkUnstructuredGridHomogeneousRayIntegrator>(m_instance)->GetTransferFunctionTableSize();
  return retVal;
}



  vtkUnstructuredGridHomogeneousRayIntegrator::vtkUnstructuredGridHomogeneousRayIntegrator(System::IntPtr native, bool bConst) : vtkUnstructuredGridVolumeRayIntegrator(native, bConst) {}



  vtkUnstructuredGridHomogeneousRayIntegrator::vtkUnstructuredGridHomogeneousRayIntegrator(bool donothing) : vtkUnstructuredGridVolumeRayIntegrator(donothing) {}



  vtkUnstructuredGridHomogeneousRayIntegrator::vtkUnstructuredGridHomogeneousRayIntegrator() : vtkUnstructuredGridVolumeRayIntegrator(false) {
  this->SetNativePointer(IntPtr(::vtkUnstructuredGridHomogeneousRayIntegrator::New()));
}



  vtkUnstructuredGridHomogeneousRayIntegrator::~vtkUnstructuredGridHomogeneousRayIntegrator() { }





} // end namespace vtkVolumeRendering
