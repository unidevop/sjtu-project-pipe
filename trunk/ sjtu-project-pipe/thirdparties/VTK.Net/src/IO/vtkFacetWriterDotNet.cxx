

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkFacetWriterDotNet.h"

// native includes
#include "strstream"
#include "vtkFacetWriter.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkFacetWriter::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkFacetWriter>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkFacetWriter::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkFacetWriter>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkFacetWriter^ vtkFacetWriter::NewInstance()
{
  ::vtkFacetWriter* retVal = static_cast<::vtkFacetWriter*>(vtk::ConvertManagedToNative<::vtkFacetWriter>(m_instance)->NewInstance());
  return gcnew vtkFacetWriter(IntPtr(retVal), false);
}



vtkFacetWriter^ vtkFacetWriter::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkFacetWriter* retVal = static_cast<::vtkFacetWriter*>(::vtkFacetWriter::SafeDownCast(oWrap));
  return gcnew vtkFacetWriter(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkFacetWriter::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkFacetWriter>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkFacetWriter::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkFacetWriter>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkFacetWriter::SetFileName(System::String^ arg0)
{
  char* arg0Wrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(arg0).ToPointer());
  vtk::ConvertManagedToNative<::vtkFacetWriter>(m_instance)->SetFileName(arg0Wrap);
  arg0->Remove(0,arg0->Length);
  arg0->Insert(0,System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(arg0Wrap)));
System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(arg0Wrap));
}



System::String^ vtkFacetWriter::GetFileName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkFacetWriter>(m_instance)->GetFileName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



void vtkFacetWriter::Write()
{
  vtk::ConvertManagedToNative<::vtkFacetWriter>(m_instance)->Write();
}



  vtkFacetWriter::vtkFacetWriter(System::IntPtr native, bool bConst) : vtkPolyDataAlgorithm(native, bConst) {}



  vtkFacetWriter::vtkFacetWriter(bool donothing) : vtkPolyDataAlgorithm(donothing) {}



  vtkFacetWriter::vtkFacetWriter() : vtkPolyDataAlgorithm(false) {
  this->SetNativePointer(IntPtr(::vtkFacetWriter::New()));
}



  vtkFacetWriter::~vtkFacetWriter() { }





} // end namespace vtkIO
