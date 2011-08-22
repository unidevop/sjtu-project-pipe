

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkVRMLImporterDotNet.h"

// native includes
#include "strstream"
#include "vtkVRMLImporter.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkVRMLImporter::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkVRMLImporter>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkVRMLImporter::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkVRMLImporter>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkVRMLImporter^ vtkVRMLImporter::NewInstance()
{
  ::vtkVRMLImporter* retVal = static_cast<::vtkVRMLImporter*>(vtk::ConvertManagedToNative<::vtkVRMLImporter>(m_instance)->NewInstance());
  return gcnew vtkVRMLImporter(IntPtr(retVal), false);
}



vtkVRMLImporter^ vtkVRMLImporter::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkVRMLImporter* retVal = static_cast<::vtkVRMLImporter*>(::vtkVRMLImporter::SafeDownCast(oWrap));
  return gcnew vtkVRMLImporter(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkVRMLImporter::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkVRMLImporter>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkVRMLImporter::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkVRMLImporter>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




vtkObject^ vtkVRMLImporter::GetVRMLDEFObject(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  ::vtkObject* retVal = static_cast<::vtkObject*>(vtk::ConvertManagedToNative<::vtkVRMLImporter>(m_instance)->GetVRMLDEFObject(nameWrap));
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return gcnew vtkObject(IntPtr(retVal), false);
}



void vtkVRMLImporter::enterNode(System::String^ arg0)
{
  char* arg0Wrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(arg0).ToPointer());
  vtk::ConvertManagedToNative<::vtkVRMLImporter>(m_instance)->enterNode(arg0Wrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(arg0Wrap));
}



void vtkVRMLImporter::exitNode()
{
  vtk::ConvertManagedToNative<::vtkVRMLImporter>(m_instance)->exitNode();
}



void vtkVRMLImporter::enterField(System::String^ arg0)
{
  char* arg0Wrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(arg0).ToPointer());
  vtk::ConvertManagedToNative<::vtkVRMLImporter>(m_instance)->enterField(arg0Wrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(arg0Wrap));
}



void vtkVRMLImporter::exitField()
{
  vtk::ConvertManagedToNative<::vtkVRMLImporter>(m_instance)->exitField();
}



void vtkVRMLImporter::useNode(System::String^ arg0)
{
  char* arg0Wrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(arg0).ToPointer());
  vtk::ConvertManagedToNative<::vtkVRMLImporter>(m_instance)->useNode(arg0Wrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(arg0Wrap));
}



void vtkVRMLImporter::SetFileName(System::String^ arg0)
{
  char* arg0Wrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(arg0).ToPointer());
  vtk::ConvertManagedToNative<::vtkVRMLImporter>(m_instance)->SetFileName(arg0Wrap);
  arg0->Remove(0,arg0->Length);
  arg0->Insert(0,System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(arg0Wrap)));
System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(arg0Wrap));
}



System::String^ vtkVRMLImporter::GetFileName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkVRMLImporter>(m_instance)->GetFileName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



  vtkVRMLImporter::vtkVRMLImporter(System::IntPtr native, bool bConst) : vtkImporter(native, bConst) {}



  vtkVRMLImporter::vtkVRMLImporter(bool donothing) : vtkImporter(donothing) {}



  vtkVRMLImporter::vtkVRMLImporter() : vtkImporter(false) {
  this->SetNativePointer(IntPtr(::vtkVRMLImporter::New()));
}



  vtkVRMLImporter::~vtkVRMLImporter() { }





} // end namespace vtkHybrid
