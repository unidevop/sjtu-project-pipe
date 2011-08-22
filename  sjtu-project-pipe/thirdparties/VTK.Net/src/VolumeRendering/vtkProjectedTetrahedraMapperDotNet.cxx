

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkProjectedTetrahedraMapperDotNet.h"

// native includes
#include "strstream"
#include "vtkProjectedTetrahedraMapper.h"
#include "vtkDataArray.h"
#include "vtkObject.h"
#include "vtkRenderer.h"
#include "vtkVisibilitySort.h"
#include "vtkVolume.h"
#include "vtkWindow.h"

using namespace System;

namespace vtk {

System::String^ vtkProjectedTetrahedraMapper::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkProjectedTetrahedraMapper>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkProjectedTetrahedraMapper::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkProjectedTetrahedraMapper>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkProjectedTetrahedraMapper^ vtkProjectedTetrahedraMapper::NewInstance()
{
  ::vtkProjectedTetrahedraMapper* retVal = static_cast<::vtkProjectedTetrahedraMapper*>(vtk::ConvertManagedToNative<::vtkProjectedTetrahedraMapper>(m_instance)->NewInstance());
  return gcnew vtkProjectedTetrahedraMapper(IntPtr(retVal), false);
}



vtkProjectedTetrahedraMapper^ vtkProjectedTetrahedraMapper::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkProjectedTetrahedraMapper* retVal = static_cast<::vtkProjectedTetrahedraMapper*>(::vtkProjectedTetrahedraMapper::SafeDownCast(oWrap));
  return gcnew vtkProjectedTetrahedraMapper(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkProjectedTetrahedraMapper::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkProjectedTetrahedraMapper>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkProjectedTetrahedraMapper::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkProjectedTetrahedraMapper>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkProjectedTetrahedraMapper::SetVisibilitySort(vtkVisibilitySort^ sort)
{
  ::vtkVisibilitySort* sortWrap = vtk::ConvertManagedToNative<::vtkVisibilitySort>(sort->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkProjectedTetrahedraMapper>(m_instance)->SetVisibilitySort(sortWrap);
}



vtkVisibilitySort^ vtkProjectedTetrahedraMapper::GetVisibilitySort()
{
  ::vtkVisibilitySort* retVal = static_cast<::vtkVisibilitySort*>(vtk::ConvertManagedToNative<::vtkProjectedTetrahedraMapper>(m_instance)->GetVisibilitySort());
  return gcnew vtkVisibilitySort(IntPtr(retVal), false);
}



void vtkProjectedTetrahedraMapper::SetScalarMode(int arg0)
{
  vtk::ConvertManagedToNative<::vtkProjectedTetrahedraMapper>(m_instance)->SetScalarMode(arg0);
}



int vtkProjectedTetrahedraMapper::GetScalarMode()
{
  int retVal = vtk::ConvertManagedToNative<::vtkProjectedTetrahedraMapper>(m_instance)->GetScalarMode();
  return retVal;
}



void vtkProjectedTetrahedraMapper::SetScalarModeToDefault()
{
  vtk::ConvertManagedToNative<::vtkProjectedTetrahedraMapper>(m_instance)->SetScalarModeToDefault();
}



void vtkProjectedTetrahedraMapper::SetScalarModeToUsePointData()
{
  vtk::ConvertManagedToNative<::vtkProjectedTetrahedraMapper>(m_instance)->SetScalarModeToUsePointData();
}



void vtkProjectedTetrahedraMapper::SetScalarModeToUseCellData()
{
  vtk::ConvertManagedToNative<::vtkProjectedTetrahedraMapper>(m_instance)->SetScalarModeToUseCellData();
}



void vtkProjectedTetrahedraMapper::SetScalarModeToUsePointFieldData()
{
  vtk::ConvertManagedToNative<::vtkProjectedTetrahedraMapper>(m_instance)->SetScalarModeToUsePointFieldData();
}



void vtkProjectedTetrahedraMapper::SetScalarModeToUseCellFieldData()
{
  vtk::ConvertManagedToNative<::vtkProjectedTetrahedraMapper>(m_instance)->SetScalarModeToUseCellFieldData();
}



void vtkProjectedTetrahedraMapper::SelectScalarArray(int arrayNum)
{
  vtk::ConvertManagedToNative<::vtkProjectedTetrahedraMapper>(m_instance)->SelectScalarArray(arrayNum);
}



void vtkProjectedTetrahedraMapper::SelectScalarArray(System::String^ arrayName)
{
  char* arrayNameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(arrayName).ToPointer());
  vtk::ConvertManagedToNative<::vtkProjectedTetrahedraMapper>(m_instance)->SelectScalarArray(arrayNameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(arrayNameWrap));
}



System::String^ vtkProjectedTetrahedraMapper::GetArrayName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkProjectedTetrahedraMapper>(m_instance)->GetArrayName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkProjectedTetrahedraMapper::GetArrayId()
{
  int retVal = vtk::ConvertManagedToNative<::vtkProjectedTetrahedraMapper>(m_instance)->GetArrayId();
  return retVal;
}



int vtkProjectedTetrahedraMapper::GetArrayAccessMode()
{
  int retVal = vtk::ConvertManagedToNative<::vtkProjectedTetrahedraMapper>(m_instance)->GetArrayAccessMode();
  return retVal;
}



System::String^ vtkProjectedTetrahedraMapper::GetScalarModeAsString()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkProjectedTetrahedraMapper>(m_instance)->GetScalarModeAsString();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



void vtkProjectedTetrahedraMapper::Render(vtkRenderer^ renderer, vtkVolume^ volume)
{
  ::vtkRenderer* rendererWrap = vtk::ConvertManagedToNative<::vtkRenderer>(renderer->GetNativePointer());
  ::vtkVolume* volumeWrap = vtk::ConvertManagedToNative<::vtkVolume>(volume->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkProjectedTetrahedraMapper>(m_instance)->Render(rendererWrap, volumeWrap);
}



void vtkProjectedTetrahedraMapper::ReleaseGraphicsResources(vtkWindow^ window)
{
  ::vtkWindow* windowWrap = vtk::ConvertManagedToNative<::vtkWindow>(window->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkProjectedTetrahedraMapper>(m_instance)->ReleaseGraphicsResources(windowWrap);
}



void vtkProjectedTetrahedraMapper::MapScalarsToColors(vtkDataArray^ colors, vtkVolume^ volume, vtkDataArray^ scalars)
{
  ::vtkDataArray* colorsWrap = vtk::ConvertManagedToNative<::vtkDataArray>(colors->GetNativePointer());
  ::vtkVolume* volumeWrap = vtk::ConvertManagedToNative<::vtkVolume>(volume->GetNativePointer());
  ::vtkDataArray* scalarsWrap = vtk::ConvertManagedToNative<::vtkDataArray>(scalars->GetNativePointer());
  ::vtkProjectedTetrahedraMapper::MapScalarsToColors(colorsWrap, volumeWrap, scalarsWrap);
}



  vtkProjectedTetrahedraMapper::vtkProjectedTetrahedraMapper(System::IntPtr native, bool bConst) : vtkUnstructuredGridVolumeMapper(native, bConst) {}



  vtkProjectedTetrahedraMapper::vtkProjectedTetrahedraMapper(bool donothing) : vtkUnstructuredGridVolumeMapper(donothing) {}



  vtkProjectedTetrahedraMapper::vtkProjectedTetrahedraMapper() : vtkUnstructuredGridVolumeMapper(false) {
  this->SetNativePointer(IntPtr(::vtkProjectedTetrahedraMapper::New()));
}



  vtkProjectedTetrahedraMapper::~vtkProjectedTetrahedraMapper() { }





} // end namespace vtkVolumeRendering
