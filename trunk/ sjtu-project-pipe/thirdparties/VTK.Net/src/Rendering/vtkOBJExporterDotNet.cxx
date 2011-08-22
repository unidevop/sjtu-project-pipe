

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkOBJExporterDotNet.h"

// native includes
#include "strstream"
#include "vtkOBJExporter.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkOBJExporter::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkOBJExporter>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkOBJExporter::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkOBJExporter>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkOBJExporter^ vtkOBJExporter::NewInstance()
{
  ::vtkOBJExporter* retVal = static_cast<::vtkOBJExporter*>(vtk::ConvertManagedToNative<::vtkOBJExporter>(m_instance)->NewInstance());
  return gcnew vtkOBJExporter(IntPtr(retVal), false);
}



vtkOBJExporter^ vtkOBJExporter::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkOBJExporter* retVal = static_cast<::vtkOBJExporter*>(::vtkOBJExporter::SafeDownCast(oWrap));
  return gcnew vtkOBJExporter(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkOBJExporter::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkOBJExporter>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkOBJExporter::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkOBJExporter>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkOBJExporter::SetFilePrefix(System::String^ arg0)
{
  char* arg0Wrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(arg0).ToPointer());
  vtk::ConvertManagedToNative<::vtkOBJExporter>(m_instance)->SetFilePrefix(arg0Wrap);
  arg0->Remove(0,arg0->Length);
  arg0->Insert(0,System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(arg0Wrap)));
System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(arg0Wrap));
}



System::String^ vtkOBJExporter::GetFilePrefix()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkOBJExporter>(m_instance)->GetFilePrefix();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



  vtkOBJExporter::vtkOBJExporter(System::IntPtr native, bool bConst) : vtkExporter(native, bConst) {}



  vtkOBJExporter::vtkOBJExporter(bool donothing) : vtkExporter(donothing) {}



  vtkOBJExporter::vtkOBJExporter() : vtkExporter(false) {
  this->SetNativePointer(IntPtr(::vtkOBJExporter::New()));
}



  vtkOBJExporter::~vtkOBJExporter() { }





} // end namespace vtkRendering
