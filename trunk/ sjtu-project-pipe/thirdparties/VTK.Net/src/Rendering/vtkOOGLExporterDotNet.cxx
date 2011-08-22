

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkOOGLExporterDotNet.h"

// native includes
#include "strstream"
#include "vtkOOGLExporter.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkOOGLExporter::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkOOGLExporter>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkOOGLExporter::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkOOGLExporter>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkOOGLExporter^ vtkOOGLExporter::NewInstance()
{
  ::vtkOOGLExporter* retVal = static_cast<::vtkOOGLExporter*>(vtk::ConvertManagedToNative<::vtkOOGLExporter>(m_instance)->NewInstance());
  return gcnew vtkOOGLExporter(IntPtr(retVal), false);
}



vtkOOGLExporter^ vtkOOGLExporter::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkOOGLExporter* retVal = static_cast<::vtkOOGLExporter*>(::vtkOOGLExporter::SafeDownCast(oWrap));
  return gcnew vtkOOGLExporter(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkOOGLExporter::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkOOGLExporter>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkOOGLExporter::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkOOGLExporter>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkOOGLExporter::SetFileName(System::String^ arg0)
{
  char* arg0Wrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(arg0).ToPointer());
  vtk::ConvertManagedToNative<::vtkOOGLExporter>(m_instance)->SetFileName(arg0Wrap);
  arg0->Remove(0,arg0->Length);
  arg0->Insert(0,System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(arg0Wrap)));
System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(arg0Wrap));
}



System::String^ vtkOOGLExporter::GetFileName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkOOGLExporter>(m_instance)->GetFileName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



  vtkOOGLExporter::vtkOOGLExporter(System::IntPtr native, bool bConst) : vtkExporter(native, bConst) {}



  vtkOOGLExporter::vtkOOGLExporter(bool donothing) : vtkExporter(donothing) {}



  vtkOOGLExporter::vtkOOGLExporter() : vtkExporter(false) {
  this->SetNativePointer(IntPtr(::vtkOOGLExporter::New()));
}



  vtkOOGLExporter::~vtkOOGLExporter() { }





} // end namespace vtkRendering
