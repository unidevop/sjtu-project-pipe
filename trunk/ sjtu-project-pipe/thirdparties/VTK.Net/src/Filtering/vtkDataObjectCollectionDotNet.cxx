

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkDataObjectCollectionDotNet.h"
#include "vtkDataObjectDotNet.h"

// native includes
#include "strstream"
#include "vtkDataObjectCollection.h"
#include "vtkDataObject.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkDataObjectCollection::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkDataObjectCollection>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkDataObjectCollection::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkDataObjectCollection>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkDataObjectCollection^ vtkDataObjectCollection::NewInstance()
{
  ::vtkDataObjectCollection* retVal = static_cast<::vtkDataObjectCollection*>(vtk::ConvertManagedToNative<::vtkDataObjectCollection>(m_instance)->NewInstance());
  return gcnew vtkDataObjectCollection(IntPtr(retVal), false);
}



vtkDataObjectCollection^ vtkDataObjectCollection::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkDataObjectCollection* retVal = static_cast<::vtkDataObjectCollection*>(::vtkDataObjectCollection::SafeDownCast(oWrap));
  return gcnew vtkDataObjectCollection(IntPtr(retVal), false);
}



void vtkDataObjectCollection::AddItem(vtkDataObject^ ds)
{
  ::vtkDataObject* dsWrap = vtk::ConvertManagedToNative<::vtkDataObject>(ds->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkDataObjectCollection>(m_instance)->AddItem(dsWrap);
}



vtkDataObject^ vtkDataObjectCollection::GetNextItem()
{
  ::vtkDataObject* retVal = static_cast<::vtkDataObject*>(vtk::ConvertManagedToNative<::vtkDataObjectCollection>(m_instance)->GetNextItem());
  return gcnew vtkDataObject(IntPtr(retVal), false);
}



vtkDataObject^ vtkDataObjectCollection::GetItem(int i)
{
  ::vtkDataObject* retVal = static_cast<::vtkDataObject*>(vtk::ConvertManagedToNative<::vtkDataObjectCollection>(m_instance)->GetItem(i));
  return gcnew vtkDataObject(IntPtr(retVal), false);
}



  vtkDataObjectCollection::vtkDataObjectCollection(System::IntPtr native, bool bConst) : vtkCollection(native, bConst) {}



  vtkDataObjectCollection::vtkDataObjectCollection(bool donothing) : vtkCollection(donothing) {}



  vtkDataObjectCollection::vtkDataObjectCollection() : vtkCollection(false) {
  this->SetNativePointer(IntPtr(::vtkDataObjectCollection::New()));
}



  vtkDataObjectCollection::~vtkDataObjectCollection() { }





} // end namespace vtkFiltering
