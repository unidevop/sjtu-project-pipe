

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkFixedPointVolumeRayCastCompositeShadeHelperDotNet.h"
#include "vtkFixedPointVolumeRayCastMapperDotNet.h"

// native includes
#include "strstream"
#include "vtkFixedPointVolumeRayCastCompositeShadeHelper.h"
#include "vtkFixedPointVolumeRayCastMapper.h"
#include "vtkObject.h"
#include "vtkVolume.h"

using namespace System;

namespace vtk {

System::String^ vtkFixedPointVolumeRayCastCompositeShadeHelper::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkFixedPointVolumeRayCastCompositeShadeHelper>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkFixedPointVolumeRayCastCompositeShadeHelper::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkFixedPointVolumeRayCastCompositeShadeHelper>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkFixedPointVolumeRayCastCompositeShadeHelper^ vtkFixedPointVolumeRayCastCompositeShadeHelper::NewInstance()
{
  ::vtkFixedPointVolumeRayCastCompositeShadeHelper* retVal = static_cast<::vtkFixedPointVolumeRayCastCompositeShadeHelper*>(vtk::ConvertManagedToNative<::vtkFixedPointVolumeRayCastCompositeShadeHelper>(m_instance)->NewInstance());
  return gcnew vtkFixedPointVolumeRayCastCompositeShadeHelper(IntPtr(retVal), false);
}



vtkFixedPointVolumeRayCastCompositeShadeHelper^ vtkFixedPointVolumeRayCastCompositeShadeHelper::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkFixedPointVolumeRayCastCompositeShadeHelper* retVal = static_cast<::vtkFixedPointVolumeRayCastCompositeShadeHelper*>(::vtkFixedPointVolumeRayCastCompositeShadeHelper::SafeDownCast(oWrap));
  return gcnew vtkFixedPointVolumeRayCastCompositeShadeHelper(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkFixedPointVolumeRayCastCompositeShadeHelper::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkFixedPointVolumeRayCastCompositeShadeHelper>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkFixedPointVolumeRayCastCompositeShadeHelper::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkFixedPointVolumeRayCastCompositeShadeHelper>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkFixedPointVolumeRayCastCompositeShadeHelper::GenerateImage(int threadID, int threadCount, vtkVolume^ vol, vtkFixedPointVolumeRayCastMapper^ mapper)
{
  ::vtkVolume* volWrap = vtk::ConvertManagedToNative<::vtkVolume>(vol->GetNativePointer());
  ::vtkFixedPointVolumeRayCastMapper* mapperWrap = vtk::ConvertManagedToNative<::vtkFixedPointVolumeRayCastMapper>(mapper->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkFixedPointVolumeRayCastCompositeShadeHelper>(m_instance)->GenerateImage(threadID, threadCount, volWrap, mapperWrap);
}



  vtkFixedPointVolumeRayCastCompositeShadeHelper::vtkFixedPointVolumeRayCastCompositeShadeHelper(System::IntPtr native, bool bConst) : vtkFixedPointVolumeRayCastHelper(native, bConst) {}



  vtkFixedPointVolumeRayCastCompositeShadeHelper::vtkFixedPointVolumeRayCastCompositeShadeHelper(bool donothing) : vtkFixedPointVolumeRayCastHelper(donothing) {}



  vtkFixedPointVolumeRayCastCompositeShadeHelper::vtkFixedPointVolumeRayCastCompositeShadeHelper() : vtkFixedPointVolumeRayCastHelper(false) {
  this->SetNativePointer(IntPtr(::vtkFixedPointVolumeRayCastCompositeShadeHelper::New()));
}



  vtkFixedPointVolumeRayCastCompositeShadeHelper::~vtkFixedPointVolumeRayCastCompositeShadeHelper() { }





} // end namespace vtkVolumeRendering
