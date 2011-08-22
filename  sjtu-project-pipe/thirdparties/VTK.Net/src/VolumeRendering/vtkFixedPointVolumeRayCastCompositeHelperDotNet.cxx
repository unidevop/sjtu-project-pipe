

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkFixedPointVolumeRayCastCompositeHelperDotNet.h"
#include "vtkFixedPointVolumeRayCastMapperDotNet.h"

// native includes
#include "strstream"
#include "vtkFixedPointVolumeRayCastCompositeHelper.h"
#include "vtkFixedPointVolumeRayCastMapper.h"
#include "vtkObject.h"
#include "vtkVolume.h"

using namespace System;

namespace vtk {

System::String^ vtkFixedPointVolumeRayCastCompositeHelper::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkFixedPointVolumeRayCastCompositeHelper>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkFixedPointVolumeRayCastCompositeHelper::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkFixedPointVolumeRayCastCompositeHelper>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkFixedPointVolumeRayCastCompositeHelper^ vtkFixedPointVolumeRayCastCompositeHelper::NewInstance()
{
  ::vtkFixedPointVolumeRayCastCompositeHelper* retVal = static_cast<::vtkFixedPointVolumeRayCastCompositeHelper*>(vtk::ConvertManagedToNative<::vtkFixedPointVolumeRayCastCompositeHelper>(m_instance)->NewInstance());
  return gcnew vtkFixedPointVolumeRayCastCompositeHelper(IntPtr(retVal), false);
}



vtkFixedPointVolumeRayCastCompositeHelper^ vtkFixedPointVolumeRayCastCompositeHelper::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkFixedPointVolumeRayCastCompositeHelper* retVal = static_cast<::vtkFixedPointVolumeRayCastCompositeHelper*>(::vtkFixedPointVolumeRayCastCompositeHelper::SafeDownCast(oWrap));
  return gcnew vtkFixedPointVolumeRayCastCompositeHelper(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkFixedPointVolumeRayCastCompositeHelper::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkFixedPointVolumeRayCastCompositeHelper>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkFixedPointVolumeRayCastCompositeHelper::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkFixedPointVolumeRayCastCompositeHelper>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkFixedPointVolumeRayCastCompositeHelper::GenerateImage(int threadID, int threadCount, vtkVolume^ vol, vtkFixedPointVolumeRayCastMapper^ mapper)
{
  ::vtkVolume* volWrap = vtk::ConvertManagedToNative<::vtkVolume>(vol->GetNativePointer());
  ::vtkFixedPointVolumeRayCastMapper* mapperWrap = vtk::ConvertManagedToNative<::vtkFixedPointVolumeRayCastMapper>(mapper->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkFixedPointVolumeRayCastCompositeHelper>(m_instance)->GenerateImage(threadID, threadCount, volWrap, mapperWrap);
}



  vtkFixedPointVolumeRayCastCompositeHelper::vtkFixedPointVolumeRayCastCompositeHelper(System::IntPtr native, bool bConst) : vtkFixedPointVolumeRayCastHelper(native, bConst) {}



  vtkFixedPointVolumeRayCastCompositeHelper::vtkFixedPointVolumeRayCastCompositeHelper(bool donothing) : vtkFixedPointVolumeRayCastHelper(donothing) {}



  vtkFixedPointVolumeRayCastCompositeHelper::vtkFixedPointVolumeRayCastCompositeHelper() : vtkFixedPointVolumeRayCastHelper(false) {
  this->SetNativePointer(IntPtr(::vtkFixedPointVolumeRayCastCompositeHelper::New()));
}



  vtkFixedPointVolumeRayCastCompositeHelper::~vtkFixedPointVolumeRayCastCompositeHelper() { }





} // end namespace vtkVolumeRendering
