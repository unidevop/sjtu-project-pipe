

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkFixedPointVolumeRayCastCompositeGOShadeHelperDotNet.h"
#include "vtkFixedPointVolumeRayCastMapperDotNet.h"

// native includes
#include "strstream"
#include "vtkFixedPointVolumeRayCastCompositeGOShadeHelper.h"
#include "vtkFixedPointVolumeRayCastMapper.h"
#include "vtkObject.h"
#include "vtkVolume.h"

using namespace System;

namespace vtk {

System::String^ vtkFixedPointVolumeRayCastCompositeGOShadeHelper::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkFixedPointVolumeRayCastCompositeGOShadeHelper>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkFixedPointVolumeRayCastCompositeGOShadeHelper::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkFixedPointVolumeRayCastCompositeGOShadeHelper>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkFixedPointVolumeRayCastCompositeGOShadeHelper^ vtkFixedPointVolumeRayCastCompositeGOShadeHelper::NewInstance()
{
  ::vtkFixedPointVolumeRayCastCompositeGOShadeHelper* retVal = static_cast<::vtkFixedPointVolumeRayCastCompositeGOShadeHelper*>(vtk::ConvertManagedToNative<::vtkFixedPointVolumeRayCastCompositeGOShadeHelper>(m_instance)->NewInstance());
  return gcnew vtkFixedPointVolumeRayCastCompositeGOShadeHelper(IntPtr(retVal), false);
}



vtkFixedPointVolumeRayCastCompositeGOShadeHelper^ vtkFixedPointVolumeRayCastCompositeGOShadeHelper::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkFixedPointVolumeRayCastCompositeGOShadeHelper* retVal = static_cast<::vtkFixedPointVolumeRayCastCompositeGOShadeHelper*>(::vtkFixedPointVolumeRayCastCompositeGOShadeHelper::SafeDownCast(oWrap));
  return gcnew vtkFixedPointVolumeRayCastCompositeGOShadeHelper(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkFixedPointVolumeRayCastCompositeGOShadeHelper::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkFixedPointVolumeRayCastCompositeGOShadeHelper>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkFixedPointVolumeRayCastCompositeGOShadeHelper::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkFixedPointVolumeRayCastCompositeGOShadeHelper>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkFixedPointVolumeRayCastCompositeGOShadeHelper::GenerateImage(int threadID, int threadCount, vtkVolume^ vol, vtkFixedPointVolumeRayCastMapper^ mapper)
{
  ::vtkVolume* volWrap = vtk::ConvertManagedToNative<::vtkVolume>(vol->GetNativePointer());
  ::vtkFixedPointVolumeRayCastMapper* mapperWrap = vtk::ConvertManagedToNative<::vtkFixedPointVolumeRayCastMapper>(mapper->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkFixedPointVolumeRayCastCompositeGOShadeHelper>(m_instance)->GenerateImage(threadID, threadCount, volWrap, mapperWrap);
}



  vtkFixedPointVolumeRayCastCompositeGOShadeHelper::vtkFixedPointVolumeRayCastCompositeGOShadeHelper(System::IntPtr native, bool bConst) : vtkFixedPointVolumeRayCastHelper(native, bConst) {}



  vtkFixedPointVolumeRayCastCompositeGOShadeHelper::vtkFixedPointVolumeRayCastCompositeGOShadeHelper(bool donothing) : vtkFixedPointVolumeRayCastHelper(donothing) {}



  vtkFixedPointVolumeRayCastCompositeGOShadeHelper::vtkFixedPointVolumeRayCastCompositeGOShadeHelper() : vtkFixedPointVolumeRayCastHelper(false) {
  this->SetNativePointer(IntPtr(::vtkFixedPointVolumeRayCastCompositeGOShadeHelper::New()));
}



  vtkFixedPointVolumeRayCastCompositeGOShadeHelper::~vtkFixedPointVolumeRayCastCompositeGOShadeHelper() { }





} // end namespace vtkVolumeRendering
