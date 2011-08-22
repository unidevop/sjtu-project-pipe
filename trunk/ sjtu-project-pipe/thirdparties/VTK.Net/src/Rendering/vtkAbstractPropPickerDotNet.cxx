

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkAbstractPropPickerDotNet.h"
#include "vtkActorDotNet.h"
#include "vtkAssemblyDotNet.h"
#include "vtkProp3DDotNet.h"
#include "vtkVolumeDotNet.h"

// native includes
#include "strstream"
#include "vtkAbstractPropPicker.h"
#include "vtkActor.h"
#include "vtkActor2D.h"
#include "vtkAssembly.h"
#include "vtkAssemblyPath.h"
#include "vtkProp.h"
#include "vtkProp3D.h"
#include "vtkPropAssembly.h"
#include "vtkVolume.h"

using namespace System;

namespace vtk {

System::String^ vtkAbstractPropPicker::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkAbstractPropPicker>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkAbstractPropPicker::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkAbstractPropPicker>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkAbstractPropPicker^ vtkAbstractPropPicker::NewInstance()
{
  ::vtkAbstractPropPicker* retVal = static_cast<::vtkAbstractPropPicker*>(vtk::ConvertManagedToNative<::vtkAbstractPropPicker>(m_instance)->NewInstance());
  return gcnew vtkAbstractPropPicker(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkAbstractPropPicker::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkAbstractPropPicker>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkAbstractPropPicker::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkAbstractPropPicker>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkAbstractPropPicker::SetPath(vtkAssemblyPath^ arg0)
{
  ::vtkAssemblyPath* arg0Wrap = vtk::ConvertManagedToNative<::vtkAssemblyPath>(arg0->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkAbstractPropPicker>(m_instance)->SetPath(arg0Wrap);
}



vtkAssemblyPath^ vtkAbstractPropPicker::GetPath()
{
  ::vtkAssemblyPath* retVal = static_cast<::vtkAssemblyPath*>(vtk::ConvertManagedToNative<::vtkAbstractPropPicker>(m_instance)->GetPath());
  return gcnew vtkAssemblyPath(IntPtr(retVal), false);
}



vtkProp^ vtkAbstractPropPicker::GetViewProp()
{
  ::vtkProp* retVal = static_cast<::vtkProp*>(vtk::ConvertManagedToNative<::vtkAbstractPropPicker>(m_instance)->GetViewProp());
  return gcnew vtkProp(IntPtr(retVal), false);
}



vtkProp3D^ vtkAbstractPropPicker::GetProp3D()
{
  ::vtkProp3D* retVal = static_cast<::vtkProp3D*>(vtk::ConvertManagedToNative<::vtkAbstractPropPicker>(m_instance)->GetProp3D());
  return gcnew vtkProp3D(IntPtr(retVal), false);
}



vtkActor^ vtkAbstractPropPicker::GetActor()
{
  ::vtkActor* retVal = static_cast<::vtkActor*>(vtk::ConvertManagedToNative<::vtkAbstractPropPicker>(m_instance)->GetActor());
  return gcnew vtkActor(IntPtr(retVal), false);
}



vtkActor2D^ vtkAbstractPropPicker::GetActor2D()
{
  ::vtkActor2D* retVal = static_cast<::vtkActor2D*>(vtk::ConvertManagedToNative<::vtkAbstractPropPicker>(m_instance)->GetActor2D());
  return gcnew vtkActor2D(IntPtr(retVal), false);
}



vtkVolume^ vtkAbstractPropPicker::GetVolume()
{
  ::vtkVolume* retVal = static_cast<::vtkVolume*>(vtk::ConvertManagedToNative<::vtkAbstractPropPicker>(m_instance)->GetVolume());
  return gcnew vtkVolume(IntPtr(retVal), false);
}



vtkAssembly^ vtkAbstractPropPicker::GetAssembly()
{
  ::vtkAssembly* retVal = static_cast<::vtkAssembly*>(vtk::ConvertManagedToNative<::vtkAbstractPropPicker>(m_instance)->GetAssembly());
  return gcnew vtkAssembly(IntPtr(retVal), false);
}



vtkPropAssembly^ vtkAbstractPropPicker::GetPropAssembly()
{
  ::vtkPropAssembly* retVal = static_cast<::vtkPropAssembly*>(vtk::ConvertManagedToNative<::vtkAbstractPropPicker>(m_instance)->GetPropAssembly());
  return gcnew vtkPropAssembly(IntPtr(retVal), false);
}



vtkProp^ vtkAbstractPropPicker::GetProp()
{
  ::vtkProp* retVal = static_cast<::vtkProp*>(vtk::ConvertManagedToNative<::vtkAbstractPropPicker>(m_instance)->GetProp());
  return gcnew vtkProp(IntPtr(retVal), false);
}



  vtkAbstractPropPicker::vtkAbstractPropPicker(System::IntPtr native, bool bConst) : vtkAbstractPicker(native, bConst) {}



  vtkAbstractPropPicker::vtkAbstractPropPicker(bool donothing) : vtkAbstractPicker(donothing) {}



  vtkAbstractPropPicker::vtkAbstractPropPicker() : vtkAbstractPicker(false) {
  this->SetNativePointer(IntPtr(::vtkAbstractPropPicker::New()));
}



  vtkAbstractPropPicker::~vtkAbstractPropPicker() { }





} // end namespace vtkRendering
