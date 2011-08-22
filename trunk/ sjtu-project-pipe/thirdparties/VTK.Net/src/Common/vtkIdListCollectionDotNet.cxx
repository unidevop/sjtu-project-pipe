

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkIdListCollectionDotNet.h"
#include "vtkIdListDotNet.h"
#include "vtkObjectDotNet.h"

// native includes
#include "strstream"
#include "vtkIdListCollection.h"
#include "vtkIdList.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkIdListCollection::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkIdListCollection>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkIdListCollection::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkIdListCollection>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkIdListCollection^ vtkIdListCollection::NewInstance()
{
  ::vtkIdListCollection* retVal = static_cast<::vtkIdListCollection*>(vtk::ConvertManagedToNative<::vtkIdListCollection>(m_instance)->NewInstance());
  return gcnew vtkIdListCollection(IntPtr(retVal), false);
}



vtkIdListCollection^ vtkIdListCollection::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkIdListCollection* retVal = static_cast<::vtkIdListCollection*>(::vtkIdListCollection::SafeDownCast(oWrap));
  return gcnew vtkIdListCollection(IntPtr(retVal), false);
}



void vtkIdListCollection::AddItem(vtkIdList^ ds)
{
  ::vtkIdList* dsWrap = vtk::ConvertManagedToNative<::vtkIdList>(ds->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkIdListCollection>(m_instance)->AddItem(dsWrap);
}



vtkIdList^ vtkIdListCollection::GetNextItem()
{
  ::vtkIdList* retVal = static_cast<::vtkIdList*>(vtk::ConvertManagedToNative<::vtkIdListCollection>(m_instance)->GetNextItem());
  return gcnew vtkIdList(IntPtr(retVal), false);
}



vtkIdList^ vtkIdListCollection::GetItem(int i)
{
  ::vtkIdList* retVal = static_cast<::vtkIdList*>(vtk::ConvertManagedToNative<::vtkIdListCollection>(m_instance)->GetItem(i));
  return gcnew vtkIdList(IntPtr(retVal), false);
}



  vtkIdListCollection::vtkIdListCollection(System::IntPtr native, bool bConst) : vtkCollection(native, bConst) {}



  vtkIdListCollection::vtkIdListCollection(bool donothing) : vtkCollection(donothing) {}



  vtkIdListCollection::vtkIdListCollection() : vtkCollection(false) {
  this->SetNativePointer(IntPtr(::vtkIdListCollection::New()));
}



  vtkIdListCollection::~vtkIdListCollection() { }





} // end namespace vtkCommon
