

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkPropDotNet.h"
#include "vtkAssemblyPathDotNet.h"
#include "vtkMatrix4x4DotNet.h"
#include "vtkPropCollectionDotNet.h"

// native includes
#include "strstream"
#include "vtkProp.h"
#include "vtkAssemblyPath.h"
#include "vtkMatrix4x4.h"
#include "vtkPropCollection.h"

using namespace System;

namespace vtk {

System::String^ vtkProp::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkProp>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkProp::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkProp>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkProp^ vtkProp::NewInstance()
{
  ::vtkProp* retVal = static_cast<::vtkProp*>(vtk::ConvertManagedToNative<::vtkProp>(m_instance)->NewInstance());
  return gcnew vtkProp(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkProp::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkProp>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkProp::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkProp>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkProp::GetActors(vtkPropCollection^ arg0)
{
  ::vtkPropCollection* arg0Wrap = vtk::ConvertManagedToNative<::vtkPropCollection>(arg0->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkProp>(m_instance)->GetActors(arg0Wrap);
}



void vtkProp::GetActors2D(vtkPropCollection^ arg0)
{
  ::vtkPropCollection* arg0Wrap = vtk::ConvertManagedToNative<::vtkPropCollection>(arg0->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkProp>(m_instance)->GetActors2D(arg0Wrap);
}



void vtkProp::GetVolumes(vtkPropCollection^ arg0)
{
  ::vtkPropCollection* arg0Wrap = vtk::ConvertManagedToNative<::vtkPropCollection>(arg0->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkProp>(m_instance)->GetVolumes(arg0Wrap);
}



void vtkProp::SetVisibility(int arg0)
{
  vtk::ConvertManagedToNative<::vtkProp>(m_instance)->SetVisibility(arg0);
}



int vtkProp::GetVisibility()
{
  int retVal = vtk::ConvertManagedToNative<::vtkProp>(m_instance)->GetVisibility();
  return retVal;
}



void vtkProp::VisibilityOn()
{
  vtk::ConvertManagedToNative<::vtkProp>(m_instance)->VisibilityOn();
}



void vtkProp::VisibilityOff()
{
  vtk::ConvertManagedToNative<::vtkProp>(m_instance)->VisibilityOff();
}



void vtkProp::SetPickable(int arg0)
{
  vtk::ConvertManagedToNative<::vtkProp>(m_instance)->SetPickable(arg0);
}



int vtkProp::GetPickable()
{
  int retVal = vtk::ConvertManagedToNative<::vtkProp>(m_instance)->GetPickable();
  return retVal;
}



void vtkProp::PickableOn()
{
  vtk::ConvertManagedToNative<::vtkProp>(m_instance)->PickableOn();
}



void vtkProp::PickableOff()
{
  vtk::ConvertManagedToNative<::vtkProp>(m_instance)->PickableOff();
}



void vtkProp::Pick()
{
  vtk::ConvertManagedToNative<::vtkProp>(m_instance)->Pick();
}



void vtkProp::SetDragable(int arg0)
{
  vtk::ConvertManagedToNative<::vtkProp>(m_instance)->SetDragable(arg0);
}



int vtkProp::GetDragable()
{
  int retVal = vtk::ConvertManagedToNative<::vtkProp>(m_instance)->GetDragable();
  return retVal;
}



void vtkProp::DragableOn()
{
  vtk::ConvertManagedToNative<::vtkProp>(m_instance)->DragableOn();
}



void vtkProp::DragableOff()
{
  vtk::ConvertManagedToNative<::vtkProp>(m_instance)->DragableOff();
}



unsigned long vtkProp::GetRedrawMTime()
{
  unsigned long retVal = vtk::ConvertManagedToNative<::vtkProp>(m_instance)->GetRedrawMTime();
  return retVal;
}



void vtkProp::ShallowCopy(vtkProp^ prop)
{
  ::vtkProp* propWrap = vtk::ConvertManagedToNative<::vtkProp>(prop->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkProp>(m_instance)->ShallowCopy(propWrap);
}



void vtkProp::InitPathTraversal()
{
  vtk::ConvertManagedToNative<::vtkProp>(m_instance)->InitPathTraversal();
}



vtkAssemblyPath^ vtkProp::GetNextPath()
{
  ::vtkAssemblyPath* retVal = static_cast<::vtkAssemblyPath*>(vtk::ConvertManagedToNative<::vtkProp>(m_instance)->GetNextPath());
  return gcnew vtkAssemblyPath(IntPtr(retVal), false);
}



int vtkProp::GetNumberOfPaths()
{
  int retVal = vtk::ConvertManagedToNative<::vtkProp>(m_instance)->GetNumberOfPaths();
  return retVal;
}



void vtkProp::PokeMatrix(vtkMatrix4x4^ arg0)
{
  ::vtkMatrix4x4* arg0Wrap = vtk::ConvertManagedToNative<::vtkMatrix4x4>(arg0->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkProp>(m_instance)->PokeMatrix(arg0Wrap);
}



vtkMatrix4x4^ vtkProp::GetMatrix()
{
  ::vtkMatrix4x4* retVal = static_cast<::vtkMatrix4x4*>(vtk::ConvertManagedToNative<::vtkProp>(m_instance)->GetMatrix());
  return gcnew vtkMatrix4x4(IntPtr(retVal), false);
}



  vtkProp::vtkProp(System::IntPtr native, bool bConst) : vtkObject(native, bConst) {}



  vtkProp::vtkProp(bool donothing) : vtkObject(donothing) {}



  vtkProp::vtkProp() : vtkObject(false) {
  this->SetNativePointer(IntPtr(::vtkProp::New()));
}



  vtkProp::~vtkProp() { }





} // end namespace vtkCommon
