

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkDebugLeaksDotNet.h"

// native includes
#include "strstream"
#include "vtkDebugLeaks.h"

using namespace System;

namespace vtk {

System::String^ vtkDebugLeaks::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkDebugLeaks>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkDebugLeaks::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkDebugLeaks>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkDebugLeaks^ vtkDebugLeaks::NewInstance()
{
  ::vtkDebugLeaks* retVal = static_cast<::vtkDebugLeaks*>(vtk::ConvertManagedToNative<::vtkDebugLeaks>(m_instance)->NewInstance());
  return gcnew vtkDebugLeaks(IntPtr(retVal), false);
}



vtkDebugLeaks^ vtkDebugLeaks::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkDebugLeaks* retVal = static_cast<::vtkDebugLeaks*>(::vtkDebugLeaks::SafeDownCast(oWrap));
  return gcnew vtkDebugLeaks(IntPtr(retVal), false);
}



void vtkDebugLeaks::ConstructClass(System::String^ classname)
{
  char* classnameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(classname).ToPointer());
  ::vtkDebugLeaks::ConstructClass(classnameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(classnameWrap));
}



void vtkDebugLeaks::DestructClass(System::String^ classname)
{
  char* classnameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(classname).ToPointer());
  ::vtkDebugLeaks::DestructClass(classnameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(classnameWrap));
}



int vtkDebugLeaks::PrintCurrentLeaks()
{
  int retVal = ::vtkDebugLeaks::PrintCurrentLeaks();
  return retVal;
}



void vtkDebugLeaks::PromptUserOn()
{
  ::vtkDebugLeaks::PromptUserOn();
}



void vtkDebugLeaks::PromptUserOff()
{
  ::vtkDebugLeaks::PromptUserOff();
}



int vtkDebugLeaks::GetExitError()
{
  int retVal = ::vtkDebugLeaks::GetExitError();
  return retVal;
}



void vtkDebugLeaks::SetExitError(int arg0)
{
  ::vtkDebugLeaks::SetExitError(arg0);
}



  vtkDebugLeaks::vtkDebugLeaks(System::IntPtr native, bool bConst) : vtkObject(native, bConst) {}



  vtkDebugLeaks::vtkDebugLeaks(bool donothing) : vtkObject(donothing) {}



  vtkDebugLeaks::vtkDebugLeaks() : vtkObject(false) {
  this->SetNativePointer(IntPtr(::vtkDebugLeaks::New()));
}



  vtkDebugLeaks::~vtkDebugLeaks() { }





} // end namespace vtkCommon
