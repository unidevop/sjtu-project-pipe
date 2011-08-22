

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkImagingFactoryDotNet.h"

// native includes
#include "strstream"
#include "vtkImagingFactory.h"

using namespace System;

namespace vtk {

System::String^ vtkImagingFactory::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkImagingFactory>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkImagingFactory::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkImagingFactory>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkImagingFactory^ vtkImagingFactory::NewInstance()
{
  ::vtkImagingFactory* retVal = static_cast<::vtkImagingFactory*>(vtk::ConvertManagedToNative<::vtkImagingFactory>(m_instance)->NewInstance());
  return gcnew vtkImagingFactory(IntPtr(retVal), false);
}



vtkImagingFactory^ vtkImagingFactory::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkImagingFactory* retVal = static_cast<::vtkImagingFactory*>(::vtkImagingFactory::SafeDownCast(oWrap));
  return gcnew vtkImagingFactory(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkImagingFactory::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkImagingFactory>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkImagingFactory::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkImagingFactory>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




vtkObject^ vtkImagingFactory::CreateInstance(System::String^ arg0)
{
  char* arg0Wrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(arg0).ToPointer());
  ::vtkObject* retVal = static_cast<::vtkObject*>(::vtkImagingFactory::CreateInstance(arg0Wrap));
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(arg0Wrap));
  return gcnew vtkObject(IntPtr(retVal), false);
}



void vtkImagingFactory::SetUseMesaClasses(int use)
{
  ::vtkImagingFactory::SetUseMesaClasses(use);
}



int vtkImagingFactory::GetUseMesaClasses()
{
  int retVal = ::vtkImagingFactory::GetUseMesaClasses();
  return retVal;
}



  vtkImagingFactory::vtkImagingFactory(System::IntPtr native, bool bConst) : vtkObject(native, bConst) {}



  vtkImagingFactory::vtkImagingFactory(bool donothing) : vtkObject(donothing) {}



  vtkImagingFactory::vtkImagingFactory() : vtkObject(false) {
  this->SetNativePointer(IntPtr(::vtkImagingFactory::New()));
}



  vtkImagingFactory::~vtkImagingFactory() { }





} // end namespace vtkRendering
