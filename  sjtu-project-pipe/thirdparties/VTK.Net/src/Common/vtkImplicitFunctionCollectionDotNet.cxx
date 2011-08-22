

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkImplicitFunctionCollectionDotNet.h"
#include "vtkImplicitFunctionDotNet.h"
#include "vtkObjectDotNet.h"

// native includes
#include "strstream"
#include "vtkImplicitFunctionCollection.h"
#include "vtkImplicitFunction.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkImplicitFunctionCollection::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkImplicitFunctionCollection>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkImplicitFunctionCollection::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkImplicitFunctionCollection>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkImplicitFunctionCollection^ vtkImplicitFunctionCollection::NewInstance()
{
  ::vtkImplicitFunctionCollection* retVal = static_cast<::vtkImplicitFunctionCollection*>(vtk::ConvertManagedToNative<::vtkImplicitFunctionCollection>(m_instance)->NewInstance());
  return gcnew vtkImplicitFunctionCollection(IntPtr(retVal), false);
}



vtkImplicitFunctionCollection^ vtkImplicitFunctionCollection::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkImplicitFunctionCollection* retVal = static_cast<::vtkImplicitFunctionCollection*>(::vtkImplicitFunctionCollection::SafeDownCast(oWrap));
  return gcnew vtkImplicitFunctionCollection(IntPtr(retVal), false);
}



void vtkImplicitFunctionCollection::AddItem(vtkImplicitFunction^ arg0)
{
  ::vtkImplicitFunction* arg0Wrap = vtk::ConvertManagedToNative<::vtkImplicitFunction>(arg0->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkImplicitFunctionCollection>(m_instance)->AddItem(arg0Wrap);
}



vtkImplicitFunction^ vtkImplicitFunctionCollection::GetNextItem()
{
  ::vtkImplicitFunction* retVal = static_cast<::vtkImplicitFunction*>(vtk::ConvertManagedToNative<::vtkImplicitFunctionCollection>(m_instance)->GetNextItem());
  return gcnew vtkImplicitFunction(IntPtr(retVal), false);
}



  vtkImplicitFunctionCollection::vtkImplicitFunctionCollection(System::IntPtr native, bool bConst) : vtkCollection(native, bConst) {}



  vtkImplicitFunctionCollection::vtkImplicitFunctionCollection(bool donothing) : vtkCollection(donothing) {}



  vtkImplicitFunctionCollection::vtkImplicitFunctionCollection() : vtkCollection(false) {
  this->SetNativePointer(IntPtr(::vtkImplicitFunctionCollection::New()));
}



  vtkImplicitFunctionCollection::~vtkImplicitFunctionCollection() { }





} // end namespace vtkCommon
