

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkAVIWriterDotNet.h"

// native includes
#include "strstream"
#include "vtkAVIWriter.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkAVIWriter::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkAVIWriter>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkAVIWriter::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkAVIWriter>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkAVIWriter^ vtkAVIWriter::NewInstance()
{
  ::vtkAVIWriter* retVal = static_cast<::vtkAVIWriter*>(vtk::ConvertManagedToNative<::vtkAVIWriter>(m_instance)->NewInstance());
  return gcnew vtkAVIWriter(IntPtr(retVal), false);
}



vtkAVIWriter^ vtkAVIWriter::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkAVIWriter* retVal = static_cast<::vtkAVIWriter*>(::vtkAVIWriter::SafeDownCast(oWrap));
  return gcnew vtkAVIWriter(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkAVIWriter::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkAVIWriter>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkAVIWriter::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkAVIWriter>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkAVIWriter::Start()
{
  vtk::ConvertManagedToNative<::vtkAVIWriter>(m_instance)->Start();
}



void vtkAVIWriter::Write()
{
  vtk::ConvertManagedToNative<::vtkAVIWriter>(m_instance)->Write();
}



void vtkAVIWriter::End()
{
  vtk::ConvertManagedToNative<::vtkAVIWriter>(m_instance)->End();
}



  vtkAVIWriter::vtkAVIWriter(System::IntPtr native, bool bConst) : vtkGenericMovieWriter(native, bConst) {}



  vtkAVIWriter::vtkAVIWriter(bool donothing) : vtkGenericMovieWriter(donothing) {}



  vtkAVIWriter::vtkAVIWriter() : vtkGenericMovieWriter(false) {
  this->SetNativePointer(IntPtr(::vtkAVIWriter::New()));
}



  vtkAVIWriter::~vtkAVIWriter() { }





} // end namespace vtkIO
