

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkFixedPointVolumeRayCastMIPHelperDotNet.h"
#include "vtkFixedPointVolumeRayCastMapperDotNet.h"

// native includes
#include "strstream"
#include "vtkFixedPointVolumeRayCastMIPHelper.h"
#include "vtkFixedPointVolumeRayCastMapper.h"
#include "vtkObject.h"
#include "vtkVolume.h"

using namespace System;

namespace vtk {

System::String^ vtkFixedPointVolumeRayCastMIPHelper::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkFixedPointVolumeRayCastMIPHelper>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkFixedPointVolumeRayCastMIPHelper::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkFixedPointVolumeRayCastMIPHelper>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkFixedPointVolumeRayCastMIPHelper^ vtkFixedPointVolumeRayCastMIPHelper::NewInstance()
{
  ::vtkFixedPointVolumeRayCastMIPHelper* retVal = static_cast<::vtkFixedPointVolumeRayCastMIPHelper*>(vtk::ConvertManagedToNative<::vtkFixedPointVolumeRayCastMIPHelper>(m_instance)->NewInstance());
  return gcnew vtkFixedPointVolumeRayCastMIPHelper(IntPtr(retVal), false);
}



vtkFixedPointVolumeRayCastMIPHelper^ vtkFixedPointVolumeRayCastMIPHelper::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkFixedPointVolumeRayCastMIPHelper* retVal = static_cast<::vtkFixedPointVolumeRayCastMIPHelper*>(::vtkFixedPointVolumeRayCastMIPHelper::SafeDownCast(oWrap));
  return gcnew vtkFixedPointVolumeRayCastMIPHelper(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkFixedPointVolumeRayCastMIPHelper::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkFixedPointVolumeRayCastMIPHelper>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkFixedPointVolumeRayCastMIPHelper::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkFixedPointVolumeRayCastMIPHelper>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkFixedPointVolumeRayCastMIPHelper::GenerateImage(int threadID, int threadCount, vtkVolume^ vol, vtkFixedPointVolumeRayCastMapper^ mapper)
{
  ::vtkVolume* volWrap = vtk::ConvertManagedToNative<::vtkVolume>(vol->GetNativePointer());
  ::vtkFixedPointVolumeRayCastMapper* mapperWrap = vtk::ConvertManagedToNative<::vtkFixedPointVolumeRayCastMapper>(mapper->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkFixedPointVolumeRayCastMIPHelper>(m_instance)->GenerateImage(threadID, threadCount, volWrap, mapperWrap);
}



  vtkFixedPointVolumeRayCastMIPHelper::vtkFixedPointVolumeRayCastMIPHelper(System::IntPtr native, bool bConst) : vtkFixedPointVolumeRayCastHelper(native, bConst) {}



  vtkFixedPointVolumeRayCastMIPHelper::vtkFixedPointVolumeRayCastMIPHelper(bool donothing) : vtkFixedPointVolumeRayCastHelper(donothing) {}



  vtkFixedPointVolumeRayCastMIPHelper::vtkFixedPointVolumeRayCastMIPHelper() : vtkFixedPointVolumeRayCastHelper(false) {
  this->SetNativePointer(IntPtr(::vtkFixedPointVolumeRayCastMIPHelper::New()));
}



  vtkFixedPointVolumeRayCastMIPHelper::~vtkFixedPointVolumeRayCastMIPHelper() { }





} // end namespace vtkVolumeRendering
