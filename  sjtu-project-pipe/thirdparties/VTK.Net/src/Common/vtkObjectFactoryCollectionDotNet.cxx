

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkObjectFactoryCollectionDotNet.h"
#include "vtkObjectDotNet.h"
#include "vtkObjectFactoryDotNet.h"

// native includes
#include "strstream"
#include "vtkObjectFactoryCollection.h"
#include "vtkObject.h"
#include "vtkObjectFactory.h"

using namespace System;

namespace vtk {

System::String^ vtkObjectFactoryCollection::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkObjectFactoryCollection>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkObjectFactoryCollection::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkObjectFactoryCollection>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkObjectFactoryCollection^ vtkObjectFactoryCollection::NewInstance()
{
  ::vtkObjectFactoryCollection* retVal = static_cast<::vtkObjectFactoryCollection*>(vtk::ConvertManagedToNative<::vtkObjectFactoryCollection>(m_instance)->NewInstance());
  return gcnew vtkObjectFactoryCollection(IntPtr(retVal), false);
}



vtkObjectFactoryCollection^ vtkObjectFactoryCollection::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkObjectFactoryCollection* retVal = static_cast<::vtkObjectFactoryCollection*>(::vtkObjectFactoryCollection::SafeDownCast(oWrap));
  return gcnew vtkObjectFactoryCollection(IntPtr(retVal), false);
}



void vtkObjectFactoryCollection::AddItem(vtkObjectFactory^ t)
{
  ::vtkObjectFactory* tWrap = vtk::ConvertManagedToNative<::vtkObjectFactory>(t->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkObjectFactoryCollection>(m_instance)->AddItem(tWrap);
}



vtkObjectFactory^ vtkObjectFactoryCollection::GetNextItem()
{
  ::vtkObjectFactory* retVal = static_cast<::vtkObjectFactory*>(vtk::ConvertManagedToNative<::vtkObjectFactoryCollection>(m_instance)->GetNextItem());
  return gcnew vtkObjectFactory(IntPtr(retVal), false);
}



  vtkObjectFactoryCollection::vtkObjectFactoryCollection(System::IntPtr native, bool bConst) : vtkCollection(native, bConst) {}



  vtkObjectFactoryCollection::vtkObjectFactoryCollection(bool donothing) : vtkCollection(donothing) {}



  vtkObjectFactoryCollection::vtkObjectFactoryCollection() : vtkCollection(false) {
  this->SetNativePointer(IntPtr(::vtkObjectFactoryCollection::New()));
}



  vtkObjectFactoryCollection::~vtkObjectFactoryCollection() { }





} // end namespace vtkCommon
