

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkVolumeCollectionDotNet.h"
#include "vtkVolumeDotNet.h"

// native includes
#include "strstream"
#include "vtkVolumeCollection.h"
#include "vtkObject.h"
#include "vtkVolume.h"

using namespace System;

namespace vtk {

System::String^ vtkVolumeCollection::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkVolumeCollection>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkVolumeCollection::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkVolumeCollection>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkVolumeCollection^ vtkVolumeCollection::NewInstance()
{
  ::vtkVolumeCollection* retVal = static_cast<::vtkVolumeCollection*>(vtk::ConvertManagedToNative<::vtkVolumeCollection>(m_instance)->NewInstance());
  return gcnew vtkVolumeCollection(IntPtr(retVal), false);
}



vtkVolumeCollection^ vtkVolumeCollection::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkVolumeCollection* retVal = static_cast<::vtkVolumeCollection*>(::vtkVolumeCollection::SafeDownCast(oWrap));
  return gcnew vtkVolumeCollection(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkVolumeCollection::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkVolumeCollection>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkVolumeCollection::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkVolumeCollection>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkVolumeCollection::AddItem(vtkVolume^ a)
{
  ::vtkVolume* aWrap = vtk::ConvertManagedToNative<::vtkVolume>(a->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkVolumeCollection>(m_instance)->AddItem(aWrap);
}



vtkVolume^ vtkVolumeCollection::GetNextVolume()
{
  ::vtkVolume* retVal = static_cast<::vtkVolume*>(vtk::ConvertManagedToNative<::vtkVolumeCollection>(m_instance)->GetNextVolume());
  return gcnew vtkVolume(IntPtr(retVal), false);
}



vtkVolume^ vtkVolumeCollection::GetNextItem()
{
  ::vtkVolume* retVal = static_cast<::vtkVolume*>(vtk::ConvertManagedToNative<::vtkVolumeCollection>(m_instance)->GetNextItem());
  return gcnew vtkVolume(IntPtr(retVal), false);
}



  vtkVolumeCollection::vtkVolumeCollection(System::IntPtr native, bool bConst) : vtkPropCollection(native, bConst) {}



  vtkVolumeCollection::vtkVolumeCollection(bool donothing) : vtkPropCollection(donothing) {}



  vtkVolumeCollection::vtkVolumeCollection() : vtkPropCollection(false) {
  this->SetNativePointer(IntPtr(::vtkVolumeCollection::New()));
}



  vtkVolumeCollection::~vtkVolumeCollection() { }





} // end namespace vtkRendering
