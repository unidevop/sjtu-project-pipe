

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkIVExporterDotNet.h"

// native includes
#include "strstream"
#include "vtkIVExporter.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkIVExporter::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkIVExporter>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkIVExporter::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkIVExporter>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkIVExporter^ vtkIVExporter::NewInstance()
{
  ::vtkIVExporter* retVal = static_cast<::vtkIVExporter*>(vtk::ConvertManagedToNative<::vtkIVExporter>(m_instance)->NewInstance());
  return gcnew vtkIVExporter(IntPtr(retVal), false);
}



vtkIVExporter^ vtkIVExporter::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkIVExporter* retVal = static_cast<::vtkIVExporter*>(::vtkIVExporter::SafeDownCast(oWrap));
  return gcnew vtkIVExporter(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkIVExporter::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkIVExporter>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkIVExporter::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkIVExporter>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkIVExporter::SetFileName(System::String^ arg0)
{
  char* arg0Wrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(arg0).ToPointer());
  vtk::ConvertManagedToNative<::vtkIVExporter>(m_instance)->SetFileName(arg0Wrap);
  arg0->Remove(0,arg0->Length);
  arg0->Insert(0,System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(arg0Wrap)));
System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(arg0Wrap));
}



System::String^ vtkIVExporter::GetFileName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkIVExporter>(m_instance)->GetFileName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



  vtkIVExporter::vtkIVExporter(System::IntPtr native, bool bConst) : vtkExporter(native, bConst) {}



  vtkIVExporter::vtkIVExporter(bool donothing) : vtkExporter(donothing) {}



  vtkIVExporter::vtkIVExporter() : vtkExporter(false) {
  this->SetNativePointer(IntPtr(::vtkIVExporter::New()));
}



  vtkIVExporter::~vtkIVExporter() { }





} // end namespace vtkRendering
