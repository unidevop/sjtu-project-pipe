

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkPropCollectionDotNet.h"
#include "vtkObjectDotNet.h"
#include "vtkPropDotNet.h"

// native includes
#include "strstream"
#include "vtkPropCollection.h"
#include "vtkObject.h"
#include "vtkProp.h"

using namespace System;

namespace vtk {

System::String^ vtkPropCollection::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkPropCollection>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkPropCollection::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkPropCollection>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkPropCollection^ vtkPropCollection::NewInstance()
{
  ::vtkPropCollection* retVal = static_cast<::vtkPropCollection*>(vtk::ConvertManagedToNative<::vtkPropCollection>(m_instance)->NewInstance());
  return gcnew vtkPropCollection(IntPtr(retVal), false);
}



vtkPropCollection^ vtkPropCollection::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkPropCollection* retVal = static_cast<::vtkPropCollection*>(::vtkPropCollection::SafeDownCast(oWrap));
  return gcnew vtkPropCollection(IntPtr(retVal), false);
}



void vtkPropCollection::AddItem(vtkProp^ a)
{
  ::vtkProp* aWrap = vtk::ConvertManagedToNative<::vtkProp>(a->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkPropCollection>(m_instance)->AddItem(aWrap);
}



vtkProp^ vtkPropCollection::GetNextProp()
{
  ::vtkProp* retVal = static_cast<::vtkProp*>(vtk::ConvertManagedToNative<::vtkPropCollection>(m_instance)->GetNextProp());
  return gcnew vtkProp(IntPtr(retVal), false);
}



vtkProp^ vtkPropCollection::GetLastProp()
{
  ::vtkProp* retVal = static_cast<::vtkProp*>(vtk::ConvertManagedToNative<::vtkPropCollection>(m_instance)->GetLastProp());
  return gcnew vtkProp(IntPtr(retVal), false);
}



int vtkPropCollection::GetNumberOfPaths()
{
  int retVal = vtk::ConvertManagedToNative<::vtkPropCollection>(m_instance)->GetNumberOfPaths();
  return retVal;
}



  vtkPropCollection::vtkPropCollection(System::IntPtr native, bool bConst) : vtkCollection(native, bConst) {}



  vtkPropCollection::vtkPropCollection(bool donothing) : vtkCollection(donothing) {}



  vtkPropCollection::vtkPropCollection() : vtkCollection(false) {
  this->SetNativePointer(IntPtr(::vtkPropCollection::New()));
}



  vtkPropCollection::~vtkPropCollection() { }





} // end namespace vtkCommon
