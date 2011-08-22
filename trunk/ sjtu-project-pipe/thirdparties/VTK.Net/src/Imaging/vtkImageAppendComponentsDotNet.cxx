

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkImageAppendComponentsDotNet.h"

// native includes
#include "strstream"
#include "vtkImageAppendComponents.h"
#include "vtkDataObject.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkImageAppendComponents::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkImageAppendComponents>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkImageAppendComponents::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkImageAppendComponents>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkImageAppendComponents^ vtkImageAppendComponents::NewInstance()
{
  ::vtkImageAppendComponents* retVal = static_cast<::vtkImageAppendComponents*>(vtk::ConvertManagedToNative<::vtkImageAppendComponents>(m_instance)->NewInstance());
  return gcnew vtkImageAppendComponents(IntPtr(retVal), false);
}



vtkImageAppendComponents^ vtkImageAppendComponents::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkImageAppendComponents* retVal = static_cast<::vtkImageAppendComponents*>(::vtkImageAppendComponents::SafeDownCast(oWrap));
  return gcnew vtkImageAppendComponents(IntPtr(retVal), false);
}



void vtkImageAppendComponents::SetInput(int num, vtkDataObject^ input)
{
  ::vtkDataObject* inputWrap = vtk::ConvertManagedToNative<::vtkDataObject>(input->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkImageAppendComponents>(m_instance)->SetInput(num, inputWrap);
}



void vtkImageAppendComponents::SetInput(vtkDataObject^ input)
{
  ::vtkDataObject* inputWrap = vtk::ConvertManagedToNative<::vtkDataObject>(input->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkImageAppendComponents>(m_instance)->SetInput(inputWrap);
}



vtkDataObject^ vtkImageAppendComponents::GetInput(int num)
{
  ::vtkDataObject* retVal = static_cast<::vtkDataObject*>(vtk::ConvertManagedToNative<::vtkImageAppendComponents>(m_instance)->GetInput(num));
  return gcnew vtkDataObject(IntPtr(retVal), false);
}



vtkDataObject^ vtkImageAppendComponents::GetInput()
{
  ::vtkDataObject* retVal = static_cast<::vtkDataObject*>(vtk::ConvertManagedToNative<::vtkImageAppendComponents>(m_instance)->GetInput());
  return gcnew vtkDataObject(IntPtr(retVal), false);
}



int vtkImageAppendComponents::GetNumberOfInputs()
{
  int retVal = vtk::ConvertManagedToNative<::vtkImageAppendComponents>(m_instance)->GetNumberOfInputs();
  return retVal;
}



  vtkImageAppendComponents::vtkImageAppendComponents(System::IntPtr native, bool bConst) : vtkThreadedImageAlgorithm(native, bConst) {}



  vtkImageAppendComponents::vtkImageAppendComponents(bool donothing) : vtkThreadedImageAlgorithm(donothing) {}



  vtkImageAppendComponents::vtkImageAppendComponents() : vtkThreadedImageAlgorithm(false) {
  this->SetNativePointer(IntPtr(::vtkImageAppendComponents::New()));
}



  vtkImageAppendComponents::~vtkImageAppendComponents() { }





} // end namespace vtkImaging
