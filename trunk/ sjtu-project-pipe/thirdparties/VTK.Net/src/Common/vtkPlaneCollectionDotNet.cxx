

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkPlaneCollectionDotNet.h"
#include "vtkObjectDotNet.h"
#include "vtkPlaneDotNet.h"

// native includes
#include "strstream"
#include "vtkPlaneCollection.h"
#include "vtkObject.h"
#include "vtkPlane.h"

using namespace System;

namespace vtk {

System::String^ vtkPlaneCollection::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkPlaneCollection>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkPlaneCollection::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkPlaneCollection>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkPlaneCollection^ vtkPlaneCollection::NewInstance()
{
  ::vtkPlaneCollection* retVal = static_cast<::vtkPlaneCollection*>(vtk::ConvertManagedToNative<::vtkPlaneCollection>(m_instance)->NewInstance());
  return gcnew vtkPlaneCollection(IntPtr(retVal), false);
}



vtkPlaneCollection^ vtkPlaneCollection::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkPlaneCollection* retVal = static_cast<::vtkPlaneCollection*>(::vtkPlaneCollection::SafeDownCast(oWrap));
  return gcnew vtkPlaneCollection(IntPtr(retVal), false);
}



void vtkPlaneCollection::AddItem(vtkPlane^ arg0)
{
  ::vtkPlane* arg0Wrap = vtk::ConvertManagedToNative<::vtkPlane>(arg0->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkPlaneCollection>(m_instance)->AddItem(arg0Wrap);
}



vtkPlane^ vtkPlaneCollection::GetNextItem()
{
  ::vtkPlane* retVal = static_cast<::vtkPlane*>(vtk::ConvertManagedToNative<::vtkPlaneCollection>(m_instance)->GetNextItem());
  return gcnew vtkPlane(IntPtr(retVal), false);
}



  vtkPlaneCollection::vtkPlaneCollection(System::IntPtr native, bool bConst) : vtkCollection(native, bConst) {}



  vtkPlaneCollection::vtkPlaneCollection(bool donothing) : vtkCollection(donothing) {}



  vtkPlaneCollection::vtkPlaneCollection() : vtkCollection(false) {
  this->SetNativePointer(IntPtr(::vtkPlaneCollection::New()));
}



  vtkPlaneCollection::~vtkPlaneCollection() { }





} // end namespace vtkCommon
