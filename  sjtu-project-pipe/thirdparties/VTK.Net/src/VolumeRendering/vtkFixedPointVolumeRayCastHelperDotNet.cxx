

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkFixedPointVolumeRayCastHelperDotNet.h"
#include "vtkFixedPointVolumeRayCastMapperDotNet.h"

// native includes
#include "strstream"
#include "vtkFixedPointVolumeRayCastHelper.h"
#include "vtkFixedPointVolumeRayCastMapper.h"
#include "vtkVolume.h"

using namespace System;

namespace vtk {

System::String^ vtkFixedPointVolumeRayCastHelper::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkFixedPointVolumeRayCastHelper>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkFixedPointVolumeRayCastHelper::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkFixedPointVolumeRayCastHelper>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkFixedPointVolumeRayCastHelper^ vtkFixedPointVolumeRayCastHelper::NewInstance()
{
  ::vtkFixedPointVolumeRayCastHelper* retVal = static_cast<::vtkFixedPointVolumeRayCastHelper*>(vtk::ConvertManagedToNative<::vtkFixedPointVolumeRayCastHelper>(m_instance)->NewInstance());
  return gcnew vtkFixedPointVolumeRayCastHelper(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkFixedPointVolumeRayCastHelper::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkFixedPointVolumeRayCastHelper>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkFixedPointVolumeRayCastHelper::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkFixedPointVolumeRayCastHelper>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkFixedPointVolumeRayCastHelper::GenerateImage(int arg0, int arg1, vtkVolume^ arg2, vtkFixedPointVolumeRayCastMapper^ arg3)
{
  ::vtkVolume* arg2Wrap = vtk::ConvertManagedToNative<::vtkVolume>(arg2->GetNativePointer());
  ::vtkFixedPointVolumeRayCastMapper* arg3Wrap = vtk::ConvertManagedToNative<::vtkFixedPointVolumeRayCastMapper>(arg3->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkFixedPointVolumeRayCastHelper>(m_instance)->GenerateImage(arg0, arg1, arg2Wrap, arg3Wrap);
}



  vtkFixedPointVolumeRayCastHelper::vtkFixedPointVolumeRayCastHelper(System::IntPtr native, bool bConst) : vtkObject(native, bConst) {}



  vtkFixedPointVolumeRayCastHelper::vtkFixedPointVolumeRayCastHelper(bool donothing) : vtkObject(donothing) {}



  vtkFixedPointVolumeRayCastHelper::vtkFixedPointVolumeRayCastHelper() : vtkObject(false) {
  this->SetNativePointer(IntPtr(::vtkFixedPointVolumeRayCastHelper::New()));
}



  vtkFixedPointVolumeRayCastHelper::~vtkFixedPointVolumeRayCastHelper() { }





} // end namespace vtkVolumeRendering
