

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkVolumeRayCastFunctionDotNet.h"

// native includes
#include "strstream"
#include "vtkVolumeRayCastFunction.h"
#include "vtkVolume.h"

using namespace System;

namespace vtk {

System::String^ vtkVolumeRayCastFunction::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkVolumeRayCastFunction>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkVolumeRayCastFunction::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkVolumeRayCastFunction>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkVolumeRayCastFunction^ vtkVolumeRayCastFunction::NewInstance()
{
  ::vtkVolumeRayCastFunction* retVal = static_cast<::vtkVolumeRayCastFunction*>(vtk::ConvertManagedToNative<::vtkVolumeRayCastFunction>(m_instance)->NewInstance());
  return gcnew vtkVolumeRayCastFunction(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkVolumeRayCastFunction::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkVolumeRayCastFunction>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkVolumeRayCastFunction::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkVolumeRayCastFunction>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




float vtkVolumeRayCastFunction::GetZeroOpacityThreshold(vtkVolume^ vol)
{
  ::vtkVolume* volWrap = vtk::ConvertManagedToNative<::vtkVolume>(vol->GetNativePointer());
  float retVal = vtk::ConvertManagedToNative<::vtkVolumeRayCastFunction>(m_instance)->GetZeroOpacityThreshold(volWrap);
  return retVal;
}



  vtkVolumeRayCastFunction::vtkVolumeRayCastFunction(System::IntPtr native, bool bConst) : vtkObject(native, bConst) {}



  vtkVolumeRayCastFunction::vtkVolumeRayCastFunction(bool donothing) : vtkObject(donothing) {}



  vtkVolumeRayCastFunction::vtkVolumeRayCastFunction() : vtkObject(false) {
  this->SetNativePointer(IntPtr(::vtkVolumeRayCastFunction::New()));
}



  vtkVolumeRayCastFunction::~vtkVolumeRayCastFunction() { }





} // end namespace vtkVolumeRendering
