

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkVolumeRenderingFactoryDotNet.h"

// native includes
#include "strstream"
#include "vtkVolumeRenderingFactory.h"

using namespace System;

namespace vtk {

System::String^ vtkVolumeRenderingFactory::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkVolumeRenderingFactory>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkVolumeRenderingFactory::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkVolumeRenderingFactory>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkVolumeRenderingFactory^ vtkVolumeRenderingFactory::NewInstance()
{
  ::vtkVolumeRenderingFactory* retVal = static_cast<::vtkVolumeRenderingFactory*>(vtk::ConvertManagedToNative<::vtkVolumeRenderingFactory>(m_instance)->NewInstance());
  return gcnew vtkVolumeRenderingFactory(IntPtr(retVal), false);
}



vtkVolumeRenderingFactory^ vtkVolumeRenderingFactory::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkVolumeRenderingFactory* retVal = static_cast<::vtkVolumeRenderingFactory*>(::vtkVolumeRenderingFactory::SafeDownCast(oWrap));
  return gcnew vtkVolumeRenderingFactory(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkVolumeRenderingFactory::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkVolumeRenderingFactory>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkVolumeRenderingFactory::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkVolumeRenderingFactory>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




vtkObject^ vtkVolumeRenderingFactory::CreateInstance(System::String^ arg0)
{
  char* arg0Wrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(arg0).ToPointer());
  ::vtkObject* retVal = static_cast<::vtkObject*>(::vtkVolumeRenderingFactory::CreateInstance(arg0Wrap));
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(arg0Wrap));
  return gcnew vtkObject(IntPtr(retVal), false);
}



  vtkVolumeRenderingFactory::vtkVolumeRenderingFactory(System::IntPtr native, bool bConst) : vtkObject(native, bConst) {}



  vtkVolumeRenderingFactory::vtkVolumeRenderingFactory(bool donothing) : vtkObject(donothing) {}



  vtkVolumeRenderingFactory::vtkVolumeRenderingFactory() : vtkObject(false) {
  this->SetNativePointer(IntPtr(::vtkVolumeRenderingFactory::New()));
}



  vtkVolumeRenderingFactory::~vtkVolumeRenderingFactory() { }





} // end namespace vtkVolumeRendering
