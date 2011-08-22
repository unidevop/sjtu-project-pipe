

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkVolumeRayCastIsosurfaceFunctionDotNet.h"

// native includes
#include "strstream"
#include "vtkVolumeRayCastIsosurfaceFunction.h"
#include "vtkObject.h"
#include "vtkVolume.h"

using namespace System;

namespace vtk {

System::String^ vtkVolumeRayCastIsosurfaceFunction::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkVolumeRayCastIsosurfaceFunction>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkVolumeRayCastIsosurfaceFunction::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkVolumeRayCastIsosurfaceFunction>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkVolumeRayCastIsosurfaceFunction^ vtkVolumeRayCastIsosurfaceFunction::NewInstance()
{
  ::vtkVolumeRayCastIsosurfaceFunction* retVal = static_cast<::vtkVolumeRayCastIsosurfaceFunction*>(vtk::ConvertManagedToNative<::vtkVolumeRayCastIsosurfaceFunction>(m_instance)->NewInstance());
  return gcnew vtkVolumeRayCastIsosurfaceFunction(IntPtr(retVal), false);
}



vtkVolumeRayCastIsosurfaceFunction^ vtkVolumeRayCastIsosurfaceFunction::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkVolumeRayCastIsosurfaceFunction* retVal = static_cast<::vtkVolumeRayCastIsosurfaceFunction*>(::vtkVolumeRayCastIsosurfaceFunction::SafeDownCast(oWrap));
  return gcnew vtkVolumeRayCastIsosurfaceFunction(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkVolumeRayCastIsosurfaceFunction::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkVolumeRayCastIsosurfaceFunction>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkVolumeRayCastIsosurfaceFunction::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkVolumeRayCastIsosurfaceFunction>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




float vtkVolumeRayCastIsosurfaceFunction::GetZeroOpacityThreshold(vtkVolume^ vol)
{
  ::vtkVolume* volWrap = vtk::ConvertManagedToNative<::vtkVolume>(vol->GetNativePointer());
  float retVal = vtk::ConvertManagedToNative<::vtkVolumeRayCastIsosurfaceFunction>(m_instance)->GetZeroOpacityThreshold(volWrap);
  return retVal;
}



void vtkVolumeRayCastIsosurfaceFunction::SetIsoValue(double arg0)
{
  vtk::ConvertManagedToNative<::vtkVolumeRayCastIsosurfaceFunction>(m_instance)->SetIsoValue(arg0);
}



double vtkVolumeRayCastIsosurfaceFunction::GetIsoValue()
{
  double retVal = vtk::ConvertManagedToNative<::vtkVolumeRayCastIsosurfaceFunction>(m_instance)->GetIsoValue();
  return retVal;
}



  vtkVolumeRayCastIsosurfaceFunction::vtkVolumeRayCastIsosurfaceFunction(System::IntPtr native, bool bConst) : vtkVolumeRayCastFunction(native, bConst) {}



  vtkVolumeRayCastIsosurfaceFunction::vtkVolumeRayCastIsosurfaceFunction(bool donothing) : vtkVolumeRayCastFunction(donothing) {}



  vtkVolumeRayCastIsosurfaceFunction::vtkVolumeRayCastIsosurfaceFunction() : vtkVolumeRayCastFunction(false) {
  this->SetNativePointer(IntPtr(::vtkVolumeRayCastIsosurfaceFunction::New()));
}



  vtkVolumeRayCastIsosurfaceFunction::~vtkVolumeRayCastIsosurfaceFunction() { }





} // end namespace vtkVolumeRendering
