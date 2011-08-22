

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkGenericMovieWriterDotNet.h"

// native includes
#include "strstream"
#include "vtkGenericMovieWriter.h"
#include "vtkImageData.h"

using namespace System;

namespace vtk {

System::String^ vtkGenericMovieWriter::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkGenericMovieWriter>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkGenericMovieWriter::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkGenericMovieWriter>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkGenericMovieWriter^ vtkGenericMovieWriter::NewInstance()
{
  ::vtkGenericMovieWriter* retVal = static_cast<::vtkGenericMovieWriter*>(vtk::ConvertManagedToNative<::vtkGenericMovieWriter>(m_instance)->NewInstance());
  return gcnew vtkGenericMovieWriter(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkGenericMovieWriter::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkGenericMovieWriter>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkGenericMovieWriter::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkGenericMovieWriter>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkGenericMovieWriter::SetInput(vtkImageData^ input)
{
  ::vtkImageData* inputWrap = vtk::ConvertManagedToNative<::vtkImageData>(input->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkGenericMovieWriter>(m_instance)->SetInput(inputWrap);
}



vtkImageData^ vtkGenericMovieWriter::GetInput()
{
  ::vtkImageData* retVal = static_cast<::vtkImageData*>(vtk::ConvertManagedToNative<::vtkGenericMovieWriter>(m_instance)->GetInput());
  return gcnew vtkImageData(IntPtr(retVal), false);
}



void vtkGenericMovieWriter::SetFileName(System::String^ arg0)
{
  char* arg0Wrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(arg0).ToPointer());
  vtk::ConvertManagedToNative<::vtkGenericMovieWriter>(m_instance)->SetFileName(arg0Wrap);
  arg0->Remove(0,arg0->Length);
  arg0->Insert(0,System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(arg0Wrap)));
System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(arg0Wrap));
}



System::String^ vtkGenericMovieWriter::GetFileName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkGenericMovieWriter>(m_instance)->GetFileName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



void vtkGenericMovieWriter::Start()
{
  vtk::ConvertManagedToNative<::vtkGenericMovieWriter>(m_instance)->Start();
}



void vtkGenericMovieWriter::Write()
{
  vtk::ConvertManagedToNative<::vtkGenericMovieWriter>(m_instance)->Write();
}



void vtkGenericMovieWriter::End()
{
  vtk::ConvertManagedToNative<::vtkGenericMovieWriter>(m_instance)->End();
}



int vtkGenericMovieWriter::GetError()
{
  int retVal = vtk::ConvertManagedToNative<::vtkGenericMovieWriter>(m_instance)->GetError();
  return retVal;
}



  vtkGenericMovieWriter::vtkGenericMovieWriter(System::IntPtr native, bool bConst) : vtkProcessObject(native, bConst) {}



  vtkGenericMovieWriter::vtkGenericMovieWriter(bool donothing) : vtkProcessObject(donothing) {}



  vtkGenericMovieWriter::vtkGenericMovieWriter() : vtkProcessObject(false) {
  this->SetNativePointer(IntPtr(::vtkGenericMovieWriter::New()));
}



  vtkGenericMovieWriter::~vtkGenericMovieWriter() { }





} // end namespace vtkIO
