

// managed includes
#include "vtkDotNetConvert.h"
#include "vtk3DSImporterDotNet.h"

// native includes
#include "strstream"
#include "vtk3DSImporter.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtk3DSImporter::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtk3DSImporter>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtk3DSImporter::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtk3DSImporter>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtk3DSImporter^ vtk3DSImporter::NewInstance()
{
  ::vtk3DSImporter* retVal = static_cast<::vtk3DSImporter*>(vtk::ConvertManagedToNative<::vtk3DSImporter>(m_instance)->NewInstance());
  return gcnew vtk3DSImporter(IntPtr(retVal), false);
}



vtk3DSImporter^ vtk3DSImporter::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtk3DSImporter* retVal = static_cast<::vtk3DSImporter*>(::vtk3DSImporter::SafeDownCast(oWrap));
  return gcnew vtk3DSImporter(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtk3DSImporter::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtk3DSImporter>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtk3DSImporter::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtk3DSImporter>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtk3DSImporter::SetFileName(System::String^ arg0)
{
  char* arg0Wrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(arg0).ToPointer());
  vtk::ConvertManagedToNative<::vtk3DSImporter>(m_instance)->SetFileName(arg0Wrap);
  arg0->Remove(0,arg0->Length);
  arg0->Insert(0,System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(arg0Wrap)));
System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(arg0Wrap));
}



System::String^ vtk3DSImporter::GetFileName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtk3DSImporter>(m_instance)->GetFileName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



void vtk3DSImporter::SetComputeNormals(int arg0)
{
  vtk::ConvertManagedToNative<::vtk3DSImporter>(m_instance)->SetComputeNormals(arg0);
}



int vtk3DSImporter::GetComputeNormals()
{
  int retVal = vtk::ConvertManagedToNative<::vtk3DSImporter>(m_instance)->GetComputeNormals();
  return retVal;
}



void vtk3DSImporter::ComputeNormalsOn()
{
  vtk::ConvertManagedToNative<::vtk3DSImporter>(m_instance)->ComputeNormalsOn();
}



void vtk3DSImporter::ComputeNormalsOff()
{
  vtk::ConvertManagedToNative<::vtk3DSImporter>(m_instance)->ComputeNormalsOff();
}



  vtk3DSImporter::vtk3DSImporter(System::IntPtr native, bool bConst) : vtkImporter(native, bConst) {}



  vtk3DSImporter::vtk3DSImporter(bool donothing) : vtkImporter(donothing) {}



  vtk3DSImporter::vtk3DSImporter() : vtkImporter(false) {
  this->SetNativePointer(IntPtr(::vtk3DSImporter::New()));
}



  vtk3DSImporter::~vtk3DSImporter() { }

/// <summary>
/// Return the ActorCollection
/// </summary>
vtkActorCollection^ vtk3DSImporter::ActorCollection()
{
	::vtkActorCollection* retVal = static_cast<::vtkActorCollection*>(vtk::ConvertManagedToNative<::vtk3DSImporter>(m_instance)->ActorCollection);
	if (retVal != nullptr)
	{
		return gcnew vtkActorCollection(IntPtr(retVal), false);
	}
	return nullptr;
}



} // end namespace vtkHybrid
