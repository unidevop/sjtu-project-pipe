

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkOverrideInformationCollectionDotNet.h"
#include "vtkOverrideInformationDotNet.h"

// native includes
#include "strstream"
#include "vtkOverrideInformationCollection.h"
#include "vtkOverrideInformation.h"

using namespace System;

namespace vtk {

System::String^ vtkOverrideInformationCollection::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkOverrideInformationCollection>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkOverrideInformationCollection::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkOverrideInformationCollection>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkOverrideInformationCollection^ vtkOverrideInformationCollection::NewInstance()
{
  ::vtkOverrideInformationCollection* retVal = static_cast<::vtkOverrideInformationCollection*>(vtk::ConvertManagedToNative<::vtkOverrideInformationCollection>(m_instance)->NewInstance());
  return gcnew vtkOverrideInformationCollection(IntPtr(retVal), false);
}



void vtkOverrideInformationCollection::AddItem(vtkOverrideInformation^ arg0)
{
  ::vtkOverrideInformation* arg0Wrap = vtk::ConvertManagedToNative<::vtkOverrideInformation>(arg0->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkOverrideInformationCollection>(m_instance)->AddItem(arg0Wrap);
}



vtkOverrideInformation^ vtkOverrideInformationCollection::GetNextItem()
{
  ::vtkOverrideInformation* retVal = static_cast<::vtkOverrideInformation*>(vtk::ConvertManagedToNative<::vtkOverrideInformationCollection>(m_instance)->GetNextItem());
  return gcnew vtkOverrideInformation(IntPtr(retVal), false);
}



  vtkOverrideInformationCollection::vtkOverrideInformationCollection(System::IntPtr native, bool bConst) : vtkCollection(native, bConst) {}



  vtkOverrideInformationCollection::vtkOverrideInformationCollection(bool donothing) : vtkCollection(donothing) {}



  vtkOverrideInformationCollection::vtkOverrideInformationCollection() : vtkCollection(false) {
  this->SetNativePointer(IntPtr(::vtkOverrideInformationCollection::New()));
}



  vtkOverrideInformationCollection::~vtkOverrideInformationCollection() { }





} // end namespace vtkCommon
