

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkVRMLExporterDotNet.h"

// native includes
#include "strstream"
#include "vtkVRMLExporter.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkVRMLExporter::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkVRMLExporter>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkVRMLExporter::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkVRMLExporter>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkVRMLExporter^ vtkVRMLExporter::NewInstance()
{
  ::vtkVRMLExporter* retVal = static_cast<::vtkVRMLExporter*>(vtk::ConvertManagedToNative<::vtkVRMLExporter>(m_instance)->NewInstance());
  return gcnew vtkVRMLExporter(IntPtr(retVal), false);
}



vtkVRMLExporter^ vtkVRMLExporter::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkVRMLExporter* retVal = static_cast<::vtkVRMLExporter*>(::vtkVRMLExporter::SafeDownCast(oWrap));
  return gcnew vtkVRMLExporter(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkVRMLExporter::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkVRMLExporter>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkVRMLExporter::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkVRMLExporter>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkVRMLExporter::SetFileName(System::String^ arg0)
{
  char* arg0Wrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(arg0).ToPointer());
  vtk::ConvertManagedToNative<::vtkVRMLExporter>(m_instance)->SetFileName(arg0Wrap);
  arg0->Remove(0,arg0->Length);
  arg0->Insert(0,System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(arg0Wrap)));
System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(arg0Wrap));
}



System::String^ vtkVRMLExporter::GetFileName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkVRMLExporter>(m_instance)->GetFileName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



void vtkVRMLExporter::SetSpeed(double arg0)
{
  vtk::ConvertManagedToNative<::vtkVRMLExporter>(m_instance)->SetSpeed(arg0);
}



double vtkVRMLExporter::GetSpeed()
{
  double retVal = vtk::ConvertManagedToNative<::vtkVRMLExporter>(m_instance)->GetSpeed();
  return retVal;
}



  vtkVRMLExporter::vtkVRMLExporter(System::IntPtr native, bool bConst) : vtkExporter(native, bConst) {}



  vtkVRMLExporter::vtkVRMLExporter(bool donothing) : vtkExporter(donothing) {}



  vtkVRMLExporter::vtkVRMLExporter() : vtkExporter(false) {
  this->SetNativePointer(IntPtr(::vtkVRMLExporter::New()));
}



  vtkVRMLExporter::~vtkVRMLExporter() { }





} // end namespace vtkRendering
