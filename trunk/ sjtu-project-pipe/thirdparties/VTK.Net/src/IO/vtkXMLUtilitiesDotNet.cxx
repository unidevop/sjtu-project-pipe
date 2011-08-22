

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkXMLUtilitiesDotNet.h"
#include "vtkXMLDataElementDotNet.h"

// native includes
#include "strstream"
#include "vtkXMLUtilities.h"
#include "vtkXMLDataElement.h"

using namespace System;

namespace vtk {

System::String^ vtkXMLUtilities::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkXMLUtilities>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkXMLUtilities::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkXMLUtilities>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkXMLUtilities^ vtkXMLUtilities::NewInstance()
{
  ::vtkXMLUtilities* retVal = static_cast<::vtkXMLUtilities*>(vtk::ConvertManagedToNative<::vtkXMLUtilities>(m_instance)->NewInstance());
  return gcnew vtkXMLUtilities(IntPtr(retVal), false);
}



vtkXMLUtilities^ vtkXMLUtilities::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkXMLUtilities* retVal = static_cast<::vtkXMLUtilities*>(::vtkXMLUtilities::SafeDownCast(oWrap));
  return gcnew vtkXMLUtilities(IntPtr(retVal), false);
}



void vtkXMLUtilities::FactorElements(vtkXMLDataElement^ tree)
{
  ::vtkXMLDataElement* treeWrap = vtk::ConvertManagedToNative<::vtkXMLDataElement>(tree->GetNativePointer());
  ::vtkXMLUtilities::FactorElements(treeWrap);
}



void vtkXMLUtilities::UnFactorElements(vtkXMLDataElement^ tree)
{
  ::vtkXMLDataElement* treeWrap = vtk::ConvertManagedToNative<::vtkXMLDataElement>(tree->GetNativePointer());
  ::vtkXMLUtilities::UnFactorElements(treeWrap);
}



  vtkXMLUtilities::vtkXMLUtilities(System::IntPtr native, bool bConst) : vtkObject(native, bConst) {}



  vtkXMLUtilities::vtkXMLUtilities(bool donothing) : vtkObject(donothing) {}



  vtkXMLUtilities::vtkXMLUtilities() : vtkObject(false) {
  this->SetNativePointer(IntPtr(::vtkXMLUtilities::New()));
}



  vtkXMLUtilities::~vtkXMLUtilities() { }





} // end namespace vtkIO
