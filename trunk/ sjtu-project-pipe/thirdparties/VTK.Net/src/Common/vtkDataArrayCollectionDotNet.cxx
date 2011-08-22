

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkDataArrayCollectionDotNet.h"
#include "vtkDataArrayDotNet.h"
#include "vtkObjectDotNet.h"

// native includes
#include "strstream"
#include "vtkDataArrayCollection.h"
#include "vtkDataArray.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkDataArrayCollection::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkDataArrayCollection>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkDataArrayCollection::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkDataArrayCollection>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkDataArrayCollection^ vtkDataArrayCollection::NewInstance()
{
  ::vtkDataArrayCollection* retVal = static_cast<::vtkDataArrayCollection*>(vtk::ConvertManagedToNative<::vtkDataArrayCollection>(m_instance)->NewInstance());
  return gcnew vtkDataArrayCollection(IntPtr(retVal), false);
}



vtkDataArrayCollection^ vtkDataArrayCollection::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkDataArrayCollection* retVal = static_cast<::vtkDataArrayCollection*>(::vtkDataArrayCollection::SafeDownCast(oWrap));
  return gcnew vtkDataArrayCollection(IntPtr(retVal), false);
}



void vtkDataArrayCollection::AddItem(vtkDataArray^ ds)
{
  ::vtkDataArray* dsWrap = vtk::ConvertManagedToNative<::vtkDataArray>(ds->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkDataArrayCollection>(m_instance)->AddItem(dsWrap);
}



vtkDataArray^ vtkDataArrayCollection::GetNextItem()
{
  ::vtkDataArray* retVal = static_cast<::vtkDataArray*>(vtk::ConvertManagedToNative<::vtkDataArrayCollection>(m_instance)->GetNextItem());
  return gcnew vtkDataArray(IntPtr(retVal), false);
}



vtkDataArray^ vtkDataArrayCollection::GetItem(int i)
{
  ::vtkDataArray* retVal = static_cast<::vtkDataArray*>(vtk::ConvertManagedToNative<::vtkDataArrayCollection>(m_instance)->GetItem(i));
  return gcnew vtkDataArray(IntPtr(retVal), false);
}



  vtkDataArrayCollection::vtkDataArrayCollection(System::IntPtr native, bool bConst) : vtkCollection(native, bConst) {}



  vtkDataArrayCollection::vtkDataArrayCollection(bool donothing) : vtkCollection(donothing) {}



  vtkDataArrayCollection::vtkDataArrayCollection() : vtkCollection(false) {
  this->SetNativePointer(IntPtr(::vtkDataArrayCollection::New()));
}



  vtkDataArrayCollection::~vtkDataArrayCollection() { }





} // end namespace vtkCommon
