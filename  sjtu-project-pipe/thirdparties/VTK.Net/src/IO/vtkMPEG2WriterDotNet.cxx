

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkMPEG2WriterDotNet.h"

// native includes
#include "strstream"
#include "vtkMPEG2Writer.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkMPEG2Writer::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkMPEG2Writer>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkMPEG2Writer::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkMPEG2Writer>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkMPEG2Writer^ vtkMPEG2Writer::NewInstance()
{
  ::vtkMPEG2Writer* retVal = static_cast<::vtkMPEG2Writer*>(vtk::ConvertManagedToNative<::vtkMPEG2Writer>(m_instance)->NewInstance());
  return gcnew vtkMPEG2Writer(IntPtr(retVal), false);
}



vtkMPEG2Writer^ vtkMPEG2Writer::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkMPEG2Writer* retVal = static_cast<::vtkMPEG2Writer*>(::vtkMPEG2Writer::SafeDownCast(oWrap));
  return gcnew vtkMPEG2Writer(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkMPEG2Writer::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkMPEG2Writer>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkMPEG2Writer::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkMPEG2Writer>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkMPEG2Writer::Start()
{
  vtk::ConvertManagedToNative<::vtkMPEG2Writer>(m_instance)->Start();
}



void vtkMPEG2Writer::Write()
{
  vtk::ConvertManagedToNative<::vtkMPEG2Writer>(m_instance)->Write();
}



void vtkMPEG2Writer::End()
{
  vtk::ConvertManagedToNative<::vtkMPEG2Writer>(m_instance)->End();
}



  vtkMPEG2Writer::vtkMPEG2Writer(System::IntPtr native, bool bConst) : vtkGenericMovieWriter(native, bConst) {}



  vtkMPEG2Writer::vtkMPEG2Writer(bool donothing) : vtkGenericMovieWriter(donothing) {}



  vtkMPEG2Writer::vtkMPEG2Writer() : vtkGenericMovieWriter(false) {
  this->SetNativePointer(IntPtr(::vtkMPEG2Writer::New()));
}



  vtkMPEG2Writer::~vtkMPEG2Writer() { }





} // end namespace vtkIO
