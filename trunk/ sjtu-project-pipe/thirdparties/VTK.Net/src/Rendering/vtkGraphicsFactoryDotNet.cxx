

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkGraphicsFactoryDotNet.h"

// native includes
#include "strstream"
#include "vtkGraphicsFactory.h"

using namespace System;

namespace vtk {

System::String^ vtkGraphicsFactory::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkGraphicsFactory>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkGraphicsFactory::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkGraphicsFactory>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkGraphicsFactory^ vtkGraphicsFactory::NewInstance()
{
  ::vtkGraphicsFactory* retVal = static_cast<::vtkGraphicsFactory*>(vtk::ConvertManagedToNative<::vtkGraphicsFactory>(m_instance)->NewInstance());
  return gcnew vtkGraphicsFactory(IntPtr(retVal), false);
}



vtkGraphicsFactory^ vtkGraphicsFactory::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkGraphicsFactory* retVal = static_cast<::vtkGraphicsFactory*>(::vtkGraphicsFactory::SafeDownCast(oWrap));
  return gcnew vtkGraphicsFactory(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkGraphicsFactory::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkGraphicsFactory>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkGraphicsFactory::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkGraphicsFactory>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




vtkObject^ vtkGraphicsFactory::CreateInstance(System::String^ arg0)
{
  char* arg0Wrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(arg0).ToPointer());
  ::vtkObject* retVal = static_cast<::vtkObject*>(::vtkGraphicsFactory::CreateInstance(arg0Wrap));
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(arg0Wrap));
  return gcnew vtkObject(IntPtr(retVal), false);
}



System::String^ vtkGraphicsFactory::GetRenderLibrary()
{
  const char* retVal = ::vtkGraphicsFactory::GetRenderLibrary();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



void vtkGraphicsFactory::SetUseMesaClasses(int use)
{
  ::vtkGraphicsFactory::SetUseMesaClasses(use);
}



int vtkGraphicsFactory::GetUseMesaClasses()
{
  int retVal = ::vtkGraphicsFactory::GetUseMesaClasses();
  return retVal;
}



void vtkGraphicsFactory::SetOffScreenOnlyMode(int use)
{
  ::vtkGraphicsFactory::SetOffScreenOnlyMode(use);
}



int vtkGraphicsFactory::GetOffScreenOnlyMode()
{
  int retVal = ::vtkGraphicsFactory::GetOffScreenOnlyMode();
  return retVal;
}



  vtkGraphicsFactory::vtkGraphicsFactory(System::IntPtr native, bool bConst) : vtkObject(native, bConst) {}



  vtkGraphicsFactory::vtkGraphicsFactory(bool donothing) : vtkObject(donothing) {}



  vtkGraphicsFactory::vtkGraphicsFactory() : vtkObject(false) {
  this->SetNativePointer(IntPtr(::vtkGraphicsFactory::New()));
}



  vtkGraphicsFactory::~vtkGraphicsFactory() { }





} // end namespace vtkRendering
