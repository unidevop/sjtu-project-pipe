

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkFixedPointVolumeRayCastCompositeGOHelperDotNet.h"
#include "vtkFixedPointVolumeRayCastMapperDotNet.h"

// native includes
#include "strstream"
#include "vtkFixedPointVolumeRayCastCompositeGOHelper.h"
#include "vtkFixedPointVolumeRayCastMapper.h"
#include "vtkObject.h"
#include "vtkVolume.h"

using namespace System;

namespace vtk {

System::String^ vtkFixedPointVolumeRayCastCompositeGOHelper::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkFixedPointVolumeRayCastCompositeGOHelper>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkFixedPointVolumeRayCastCompositeGOHelper::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkFixedPointVolumeRayCastCompositeGOHelper>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkFixedPointVolumeRayCastCompositeGOHelper^ vtkFixedPointVolumeRayCastCompositeGOHelper::NewInstance()
{
  ::vtkFixedPointVolumeRayCastCompositeGOHelper* retVal = static_cast<::vtkFixedPointVolumeRayCastCompositeGOHelper*>(vtk::ConvertManagedToNative<::vtkFixedPointVolumeRayCastCompositeGOHelper>(m_instance)->NewInstance());
  return gcnew vtkFixedPointVolumeRayCastCompositeGOHelper(IntPtr(retVal), false);
}



vtkFixedPointVolumeRayCastCompositeGOHelper^ vtkFixedPointVolumeRayCastCompositeGOHelper::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkFixedPointVolumeRayCastCompositeGOHelper* retVal = static_cast<::vtkFixedPointVolumeRayCastCompositeGOHelper*>(::vtkFixedPointVolumeRayCastCompositeGOHelper::SafeDownCast(oWrap));
  return gcnew vtkFixedPointVolumeRayCastCompositeGOHelper(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkFixedPointVolumeRayCastCompositeGOHelper::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkFixedPointVolumeRayCastCompositeGOHelper>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkFixedPointVolumeRayCastCompositeGOHelper::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkFixedPointVolumeRayCastCompositeGOHelper>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkFixedPointVolumeRayCastCompositeGOHelper::GenerateImage(int threadID, int threadCount, vtkVolume^ vol, vtkFixedPointVolumeRayCastMapper^ mapper)
{
  ::vtkVolume* volWrap = vtk::ConvertManagedToNative<::vtkVolume>(vol->GetNativePointer());
  ::vtkFixedPointVolumeRayCastMapper* mapperWrap = vtk::ConvertManagedToNative<::vtkFixedPointVolumeRayCastMapper>(mapper->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkFixedPointVolumeRayCastCompositeGOHelper>(m_instance)->GenerateImage(threadID, threadCount, volWrap, mapperWrap);
}



  vtkFixedPointVolumeRayCastCompositeGOHelper::vtkFixedPointVolumeRayCastCompositeGOHelper(System::IntPtr native, bool bConst) : vtkFixedPointVolumeRayCastHelper(native, bConst) {}



  vtkFixedPointVolumeRayCastCompositeGOHelper::vtkFixedPointVolumeRayCastCompositeGOHelper(bool donothing) : vtkFixedPointVolumeRayCastHelper(donothing) {}



  vtkFixedPointVolumeRayCastCompositeGOHelper::vtkFixedPointVolumeRayCastCompositeGOHelper() : vtkFixedPointVolumeRayCastHelper(false) {
  this->SetNativePointer(IntPtr(::vtkFixedPointVolumeRayCastCompositeGOHelper::New()));
}



  vtkFixedPointVolumeRayCastCompositeGOHelper::~vtkFixedPointVolumeRayCastCompositeGOHelper() { }





} // end namespace vtkVolumeRendering
