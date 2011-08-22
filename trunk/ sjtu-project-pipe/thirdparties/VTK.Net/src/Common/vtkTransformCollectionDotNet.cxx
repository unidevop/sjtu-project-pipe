

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkTransformCollectionDotNet.h"
#include "vtkObjectDotNet.h"
#include "vtkTransformDotNet.h"

// native includes
#include "strstream"
#include "vtkTransformCollection.h"
#include "vtkObject.h"
#include "vtkTransform.h"

using namespace System;

namespace vtk {

System::String^ vtkTransformCollection::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkTransformCollection>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkTransformCollection::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkTransformCollection>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkTransformCollection^ vtkTransformCollection::NewInstance()
{
  ::vtkTransformCollection* retVal = static_cast<::vtkTransformCollection*>(vtk::ConvertManagedToNative<::vtkTransformCollection>(m_instance)->NewInstance());
  return gcnew vtkTransformCollection(IntPtr(retVal), false);
}



vtkTransformCollection^ vtkTransformCollection::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkTransformCollection* retVal = static_cast<::vtkTransformCollection*>(::vtkTransformCollection::SafeDownCast(oWrap));
  return gcnew vtkTransformCollection(IntPtr(retVal), false);
}



void vtkTransformCollection::AddItem(vtkTransform^ arg0)
{
  ::vtkTransform* arg0Wrap = vtk::ConvertManagedToNative<::vtkTransform>(arg0->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkTransformCollection>(m_instance)->AddItem(arg0Wrap);
}



vtkTransform^ vtkTransformCollection::GetNextItem()
{
  ::vtkTransform* retVal = static_cast<::vtkTransform*>(vtk::ConvertManagedToNative<::vtkTransformCollection>(m_instance)->GetNextItem());
  return gcnew vtkTransform(IntPtr(retVal), false);
}



  vtkTransformCollection::vtkTransformCollection(System::IntPtr native, bool bConst) : vtkCollection(native, bConst) {}



  vtkTransformCollection::vtkTransformCollection(bool donothing) : vtkCollection(donothing) {}



  vtkTransformCollection::vtkTransformCollection() : vtkCollection(false) {
  this->SetNativePointer(IntPtr(::vtkTransformCollection::New()));
}



  vtkTransformCollection::~vtkTransformCollection() { }





} // end namespace vtkCommon
