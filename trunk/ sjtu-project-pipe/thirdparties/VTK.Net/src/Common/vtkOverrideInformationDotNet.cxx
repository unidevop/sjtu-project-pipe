

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkOverrideInformationDotNet.h"
#include "vtkObjectFactoryDotNet.h"

// native includes
#include "strstream"
#include "vtkOverrideInformation.h"
#include "vtkObjectFactory.h"

using namespace System;

namespace vtk {

System::String^ vtkOverrideInformation::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkOverrideInformation>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkOverrideInformation::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkOverrideInformation>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkOverrideInformation^ vtkOverrideInformation::NewInstance()
{
  ::vtkOverrideInformation* retVal = static_cast<::vtkOverrideInformation*>(vtk::ConvertManagedToNative<::vtkOverrideInformation>(m_instance)->NewInstance());
  return gcnew vtkOverrideInformation(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkOverrideInformation::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkOverrideInformation>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkOverrideInformation::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkOverrideInformation>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




System::String^ vtkOverrideInformation::GetClassOverrideName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkOverrideInformation>(m_instance)->GetClassOverrideName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



System::String^ vtkOverrideInformation::GetClassOverrideWithName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkOverrideInformation>(m_instance)->GetClassOverrideWithName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



System::String^ vtkOverrideInformation::GetDescription()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkOverrideInformation>(m_instance)->GetDescription();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



vtkObjectFactory^ vtkOverrideInformation::GetObjectFactory()
{
  ::vtkObjectFactory* retVal = static_cast<::vtkObjectFactory*>(vtk::ConvertManagedToNative<::vtkOverrideInformation>(m_instance)->GetObjectFactory());
  return gcnew vtkObjectFactory(IntPtr(retVal), false);
}



void vtkOverrideInformation::SetClassOverrideName(System::String^ arg0)
{
  char* arg0Wrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(arg0).ToPointer());
  vtk::ConvertManagedToNative<::vtkOverrideInformation>(m_instance)->SetClassOverrideName(arg0Wrap);
  arg0->Remove(0,arg0->Length);
  arg0->Insert(0,System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(arg0Wrap)));
System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(arg0Wrap));
}



void vtkOverrideInformation::SetClassOverrideWithName(System::String^ arg0)
{
  char* arg0Wrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(arg0).ToPointer());
  vtk::ConvertManagedToNative<::vtkOverrideInformation>(m_instance)->SetClassOverrideWithName(arg0Wrap);
  arg0->Remove(0,arg0->Length);
  arg0->Insert(0,System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(arg0Wrap)));
System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(arg0Wrap));
}



void vtkOverrideInformation::SetDescription(System::String^ arg0)
{
  char* arg0Wrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(arg0).ToPointer());
  vtk::ConvertManagedToNative<::vtkOverrideInformation>(m_instance)->SetDescription(arg0Wrap);
  arg0->Remove(0,arg0->Length);
  arg0->Insert(0,System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(arg0Wrap)));
System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(arg0Wrap));
}



  vtkOverrideInformation::vtkOverrideInformation(System::IntPtr native, bool bConst) : vtkObject(native, bConst) {}



  vtkOverrideInformation::vtkOverrideInformation(bool donothing) : vtkObject(donothing) {}



  vtkOverrideInformation::vtkOverrideInformation() : vtkObject(false) {
  this->SetNativePointer(IntPtr(::vtkOverrideInformation::New()));
}



  vtkOverrideInformation::~vtkOverrideInformation() { }





} // end namespace vtkCommon
