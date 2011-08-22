

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkActor2DCollectionDotNet.h"
#include "vtkActor2DDotNet.h"
#include "vtkViewportDotNet.h"

// native includes
#include "strstream"
#include "vtkActor2DCollection.h"
#include "vtkActor2D.h"
#include "vtkObject.h"
#include "vtkViewport.h"

using namespace System;

namespace vtk {

System::String^ vtkActor2DCollection::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkActor2DCollection>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkActor2DCollection::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkActor2DCollection>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkActor2DCollection^ vtkActor2DCollection::NewInstance()
{
  ::vtkActor2DCollection* retVal = static_cast<::vtkActor2DCollection*>(vtk::ConvertManagedToNative<::vtkActor2DCollection>(m_instance)->NewInstance());
  return gcnew vtkActor2DCollection(IntPtr(retVal), false);
}



vtkActor2DCollection^ vtkActor2DCollection::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkActor2DCollection* retVal = static_cast<::vtkActor2DCollection*>(::vtkActor2DCollection::SafeDownCast(oWrap));
  return gcnew vtkActor2DCollection(IntPtr(retVal), false);
}



void vtkActor2DCollection::Sort()
{
  vtk::ConvertManagedToNative<::vtkActor2DCollection>(m_instance)->Sort();
}



void vtkActor2DCollection::AddItem(vtkActor2D^ a)
{
  ::vtkActor2D* aWrap = vtk::ConvertManagedToNative<::vtkActor2D>(a->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkActor2DCollection>(m_instance)->AddItem(aWrap);
}



int vtkActor2DCollection::IsItemPresent(vtkActor2D^ a)
{
  ::vtkActor2D* aWrap = vtk::ConvertManagedToNative<::vtkActor2D>(a->GetNativePointer());
  int retVal = vtk::ConvertManagedToNative<::vtkActor2DCollection>(m_instance)->IsItemPresent(aWrap);
  return retVal;
}



vtkActor2D^ vtkActor2DCollection::GetNextActor2D()
{
  ::vtkActor2D* retVal = static_cast<::vtkActor2D*>(vtk::ConvertManagedToNative<::vtkActor2DCollection>(m_instance)->GetNextActor2D());
  return gcnew vtkActor2D(IntPtr(retVal), false);
}



vtkActor2D^ vtkActor2DCollection::GetLastActor2D()
{
  ::vtkActor2D* retVal = static_cast<::vtkActor2D*>(vtk::ConvertManagedToNative<::vtkActor2DCollection>(m_instance)->GetLastActor2D());
  return gcnew vtkActor2D(IntPtr(retVal), false);
}



vtkActor2D^ vtkActor2DCollection::GetNextItem()
{
  ::vtkActor2D* retVal = static_cast<::vtkActor2D*>(vtk::ConvertManagedToNative<::vtkActor2DCollection>(m_instance)->GetNextItem());
  return gcnew vtkActor2D(IntPtr(retVal), false);
}



vtkActor2D^ vtkActor2DCollection::GetLastItem()
{
  ::vtkActor2D* retVal = static_cast<::vtkActor2D*>(vtk::ConvertManagedToNative<::vtkActor2DCollection>(m_instance)->GetLastItem());
  return gcnew vtkActor2D(IntPtr(retVal), false);
}



void vtkActor2DCollection::RenderOverlay(vtkViewport^ viewport)
{
  ::vtkViewport* viewportWrap = vtk::ConvertManagedToNative<::vtkViewport>(viewport->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkActor2DCollection>(m_instance)->RenderOverlay(viewportWrap);
}



  vtkActor2DCollection::vtkActor2DCollection(System::IntPtr native, bool bConst) : vtkPropCollection(native, bConst) {}



  vtkActor2DCollection::vtkActor2DCollection(bool donothing) : vtkPropCollection(donothing) {}



  vtkActor2DCollection::vtkActor2DCollection() : vtkPropCollection(false) {
  this->SetNativePointer(IntPtr(::vtkActor2DCollection::New()));
}



  vtkActor2DCollection::~vtkActor2DCollection() { }





} // end namespace vtkFiltering
