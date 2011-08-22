

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkDataSetCollectionDotNet.h"
#include "vtkDataSetDotNet.h"

// native includes
#include "strstream"
#include "vtkDataSetCollection.h"
#include "vtkDataSet.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkDataSetCollection::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkDataSetCollection>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkDataSetCollection::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkDataSetCollection>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkDataSetCollection^ vtkDataSetCollection::NewInstance()
{
  ::vtkDataSetCollection* retVal = static_cast<::vtkDataSetCollection*>(vtk::ConvertManagedToNative<::vtkDataSetCollection>(m_instance)->NewInstance());
  return gcnew vtkDataSetCollection(IntPtr(retVal), false);
}



vtkDataSetCollection^ vtkDataSetCollection::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkDataSetCollection* retVal = static_cast<::vtkDataSetCollection*>(::vtkDataSetCollection::SafeDownCast(oWrap));
  return gcnew vtkDataSetCollection(IntPtr(retVal), false);
}



void vtkDataSetCollection::AddItem(vtkDataSet^ ds)
{
  ::vtkDataSet* dsWrap = vtk::ConvertManagedToNative<::vtkDataSet>(ds->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkDataSetCollection>(m_instance)->AddItem(dsWrap);
}



vtkDataSet^ vtkDataSetCollection::GetNextItem()
{
  ::vtkDataSet* retVal = static_cast<::vtkDataSet*>(vtk::ConvertManagedToNative<::vtkDataSetCollection>(m_instance)->GetNextItem());
  return gcnew vtkDataSet(IntPtr(retVal), false);
}



vtkDataSet^ vtkDataSetCollection::GetNextDataSet()
{
  ::vtkDataSet* retVal = static_cast<::vtkDataSet*>(vtk::ConvertManagedToNative<::vtkDataSetCollection>(m_instance)->GetNextDataSet());
  return gcnew vtkDataSet(IntPtr(retVal), false);
}



vtkDataSet^ vtkDataSetCollection::GetItem(int i)
{
  ::vtkDataSet* retVal = static_cast<::vtkDataSet*>(vtk::ConvertManagedToNative<::vtkDataSetCollection>(m_instance)->GetItem(i));
  return gcnew vtkDataSet(IntPtr(retVal), false);
}



vtkDataSet^ vtkDataSetCollection::GetDataSet(int i)
{
  ::vtkDataSet* retVal = static_cast<::vtkDataSet*>(vtk::ConvertManagedToNative<::vtkDataSetCollection>(m_instance)->GetDataSet(i));
  return gcnew vtkDataSet(IntPtr(retVal), false);
}



  vtkDataSetCollection::vtkDataSetCollection(System::IntPtr native, bool bConst) : vtkCollection(native, bConst) {}



  vtkDataSetCollection::vtkDataSetCollection(bool donothing) : vtkCollection(donothing) {}



  vtkDataSetCollection::vtkDataSetCollection() : vtkCollection(false) {
  this->SetNativePointer(IntPtr(::vtkDataSetCollection::New()));
}



  vtkDataSetCollection::~vtkDataSetCollection() { }





} // end namespace vtkFiltering
