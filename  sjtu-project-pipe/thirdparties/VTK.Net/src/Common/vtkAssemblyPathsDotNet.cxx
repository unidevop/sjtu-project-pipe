

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkAssemblyPathsDotNet.h"
#include "vtkAssemblyPathDotNet.h"
#include "vtkObjectDotNet.h"

// native includes
#include "strstream"
#include "vtkAssemblyPaths.h"
#include "vtkAssemblyPath.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkAssemblyPaths::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkAssemblyPaths>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkAssemblyPaths::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkAssemblyPaths>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkAssemblyPaths^ vtkAssemblyPaths::NewInstance()
{
  ::vtkAssemblyPaths* retVal = static_cast<::vtkAssemblyPaths*>(vtk::ConvertManagedToNative<::vtkAssemblyPaths>(m_instance)->NewInstance());
  return gcnew vtkAssemblyPaths(IntPtr(retVal), false);
}



vtkAssemblyPaths^ vtkAssemblyPaths::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkAssemblyPaths* retVal = static_cast<::vtkAssemblyPaths*>(::vtkAssemblyPaths::SafeDownCast(oWrap));
  return gcnew vtkAssemblyPaths(IntPtr(retVal), false);
}



void vtkAssemblyPaths::AddItem(vtkAssemblyPath^ p)
{
  ::vtkAssemblyPath* pWrap = vtk::ConvertManagedToNative<::vtkAssemblyPath>(p->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkAssemblyPaths>(m_instance)->AddItem(pWrap);
}



void vtkAssemblyPaths::RemoveItem(vtkAssemblyPath^ p)
{
  ::vtkAssemblyPath* pWrap = vtk::ConvertManagedToNative<::vtkAssemblyPath>(p->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkAssemblyPaths>(m_instance)->RemoveItem(pWrap);
}



int vtkAssemblyPaths::IsItemPresent(vtkAssemblyPath^ p)
{
  ::vtkAssemblyPath* pWrap = vtk::ConvertManagedToNative<::vtkAssemblyPath>(p->GetNativePointer());
  int retVal = vtk::ConvertManagedToNative<::vtkAssemblyPaths>(m_instance)->IsItemPresent(pWrap);
  return retVal;
}



vtkAssemblyPath^ vtkAssemblyPaths::GetNextItem()
{
  ::vtkAssemblyPath* retVal = static_cast<::vtkAssemblyPath*>(vtk::ConvertManagedToNative<::vtkAssemblyPaths>(m_instance)->GetNextItem());
  return gcnew vtkAssemblyPath(IntPtr(retVal), false);
}



unsigned long vtkAssemblyPaths::GetMTime()
{
  unsigned long retVal = vtk::ConvertManagedToNative<::vtkAssemblyPaths>(m_instance)->GetMTime();
  return retVal;
}



  vtkAssemblyPaths::vtkAssemblyPaths(System::IntPtr native, bool bConst) : vtkCollection(native, bConst) {}



  vtkAssemblyPaths::vtkAssemblyPaths(bool donothing) : vtkCollection(donothing) {}



  vtkAssemblyPaths::vtkAssemblyPaths() : vtkCollection(false) {
  this->SetNativePointer(IntPtr(::vtkAssemblyPaths::New()));
}



  vtkAssemblyPaths::~vtkAssemblyPaths() { }





} // end namespace vtkCommon
