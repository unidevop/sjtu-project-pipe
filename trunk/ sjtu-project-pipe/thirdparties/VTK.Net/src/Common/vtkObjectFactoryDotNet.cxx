

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkObjectFactoryDotNet.h"
#include "vtkCollectionDotNet.h"
#include "vtkObjectFactoryCollectionDotNet.h"
#include "vtkOverrideInformationCollectionDotNet.h"

// native includes
#include "strstream"
#include "vtkObjectFactory.h"
#include "vtkCollection.h"
#include "vtkObjectFactoryCollection.h"
#include "vtkOverrideInformationCollection.h"

using namespace System;

namespace vtk {

vtkObject^ vtkObjectFactory::CreateInstance(System::String^ arg0)
{
  char* arg0Wrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(arg0).ToPointer());
  ::vtkObject* retVal = static_cast<::vtkObject*>(::vtkObjectFactory::CreateInstance(arg0Wrap));
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(arg0Wrap));
  return gcnew vtkObject(IntPtr(retVal), false);
}



void vtkObjectFactory::CreateAllInstance(System::String^ arg0, vtkCollection^ retList)
{
  char* arg0Wrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(arg0).ToPointer());
  ::vtkCollection* retListWrap = vtk::ConvertManagedToNative<::vtkCollection>(retList->GetNativePointer());
  ::vtkObjectFactory::CreateAllInstance(arg0Wrap, retListWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(arg0Wrap));
}



void vtkObjectFactory::ReHash()
{
  ::vtkObjectFactory::ReHash();
}



void vtkObjectFactory::RegisterFactory(vtkObjectFactory^ arg0)
{
  ::vtkObjectFactory* arg0Wrap = vtk::ConvertManagedToNative<::vtkObjectFactory>(arg0->GetNativePointer());
  ::vtkObjectFactory::RegisterFactory(arg0Wrap);
}



void vtkObjectFactory::UnRegisterFactory(vtkObjectFactory^ arg0)
{
  ::vtkObjectFactory* arg0Wrap = vtk::ConvertManagedToNative<::vtkObjectFactory>(arg0->GetNativePointer());
  ::vtkObjectFactory::UnRegisterFactory(arg0Wrap);
}



void vtkObjectFactory::UnRegisterAllFactories()
{
  ::vtkObjectFactory::UnRegisterAllFactories();
}



vtkObjectFactoryCollection^ vtkObjectFactory::GetRegisteredFactories()
{
  ::vtkObjectFactoryCollection* retVal = static_cast<::vtkObjectFactoryCollection*>(::vtkObjectFactory::GetRegisteredFactories());
  return gcnew vtkObjectFactoryCollection(IntPtr(retVal), false);
}



int vtkObjectFactory::HasOverrideAny(System::String^ className)
{
  char* classNameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(className).ToPointer());
  int retVal = ::vtkObjectFactory::HasOverrideAny(classNameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(classNameWrap));
  return retVal;
}



void vtkObjectFactory::GetOverrideInformation(System::String^ name, vtkOverrideInformationCollection^ arg1)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  ::vtkOverrideInformationCollection* arg1Wrap = vtk::ConvertManagedToNative<::vtkOverrideInformationCollection>(arg1->GetNativePointer());
  ::vtkObjectFactory::GetOverrideInformation(nameWrap, arg1Wrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
}



void vtkObjectFactory::SetAllEnableFlags(int flag, System::String^ className)
{
  char* classNameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(className).ToPointer());
  ::vtkObjectFactory::SetAllEnableFlags(flag, classNameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(classNameWrap));
}



void vtkObjectFactory::SetAllEnableFlags(int flag, System::String^ className, System::String^ subclassName)
{
  char* classNameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(className).ToPointer());
  char* subclassNameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(subclassName).ToPointer());
  ::vtkObjectFactory::SetAllEnableFlags(flag, classNameWrap, subclassNameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(classNameWrap));
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(subclassNameWrap));
}



System::String^ vtkObjectFactory::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkObjectFactory>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkObjectFactory::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkObjectFactory>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkObjectFactory^ vtkObjectFactory::NewInstance()
{
  ::vtkObjectFactory* retVal = static_cast<::vtkObjectFactory*>(vtk::ConvertManagedToNative<::vtkObjectFactory>(m_instance)->NewInstance());
  return gcnew vtkObjectFactory(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkObjectFactory::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkObjectFactory>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkObjectFactory::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkObjectFactory>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




System::String^ vtkObjectFactory::GetVTKSourceVersion()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkObjectFactory>(m_instance)->GetVTKSourceVersion();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



System::String^ vtkObjectFactory::GetDescription()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkObjectFactory>(m_instance)->GetDescription();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkObjectFactory::GetNumberOfOverrides()
{
  int retVal = vtk::ConvertManagedToNative<::vtkObjectFactory>(m_instance)->GetNumberOfOverrides();
  return retVal;
}



System::String^ vtkObjectFactory::GetClassOverrideName(int index)
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkObjectFactory>(m_instance)->GetClassOverrideName(index);
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



System::String^ vtkObjectFactory::GetClassOverrideWithName(int index)
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkObjectFactory>(m_instance)->GetClassOverrideWithName(index);
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkObjectFactory::GetEnableFlag(int index)
{
  int retVal = vtk::ConvertManagedToNative<::vtkObjectFactory>(m_instance)->GetEnableFlag(index);
  return retVal;
}



System::String^ vtkObjectFactory::GetOverrideDescription(int index)
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkObjectFactory>(m_instance)->GetOverrideDescription(index);
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



void vtkObjectFactory::SetEnableFlag(int flag, System::String^ className, System::String^ subclassName)
{
  char* classNameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(className).ToPointer());
  char* subclassNameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(subclassName).ToPointer());
  vtk::ConvertManagedToNative<::vtkObjectFactory>(m_instance)->SetEnableFlag(flag, classNameWrap, subclassNameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(classNameWrap));
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(subclassNameWrap));
}



int vtkObjectFactory::GetEnableFlag(System::String^ className, System::String^ subclassName)
{
  char* classNameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(className).ToPointer());
  char* subclassNameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(subclassName).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkObjectFactory>(m_instance)->GetEnableFlag(classNameWrap, subclassNameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(classNameWrap));
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(subclassNameWrap));
  return retVal;
}



int vtkObjectFactory::HasOverride(System::String^ className)
{
  char* classNameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(className).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkObjectFactory>(m_instance)->HasOverride(classNameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(classNameWrap));
  return retVal;
}



int vtkObjectFactory::HasOverride(System::String^ className, System::String^ subclassName)
{
  char* classNameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(className).ToPointer());
  char* subclassNameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(subclassName).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkObjectFactory>(m_instance)->HasOverride(classNameWrap, subclassNameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(classNameWrap));
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(subclassNameWrap));
  return retVal;
}



void vtkObjectFactory::Disable(System::String^ className)
{
  char* classNameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(className).ToPointer());
  vtk::ConvertManagedToNative<::vtkObjectFactory>(m_instance)->Disable(classNameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(classNameWrap));
}



System::String^ vtkObjectFactory::GetLibraryPath()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkObjectFactory>(m_instance)->GetLibraryPath();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



  vtkObjectFactory::vtkObjectFactory(System::IntPtr native, bool bConst) : vtkObject(native, bConst) {}



  vtkObjectFactory::vtkObjectFactory(bool donothing) : vtkObject(donothing) {}



  vtkObjectFactory::vtkObjectFactory() : vtkObject(false) {
  this->SetNativePointer(IntPtr(::vtkObjectFactory::New()));
}



  vtkObjectFactory::~vtkObjectFactory() { }





} // end namespace vtkCommon
