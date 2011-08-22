

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkPostScriptWriterDotNet.h"

// native includes
#include "strstream"
#include "vtkPostScriptWriter.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkPostScriptWriter::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkPostScriptWriter>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkPostScriptWriter::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkPostScriptWriter>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkPostScriptWriter^ vtkPostScriptWriter::NewInstance()
{
  ::vtkPostScriptWriter* retVal = static_cast<::vtkPostScriptWriter*>(vtk::ConvertManagedToNative<::vtkPostScriptWriter>(m_instance)->NewInstance());
  return gcnew vtkPostScriptWriter(IntPtr(retVal), false);
}



vtkPostScriptWriter^ vtkPostScriptWriter::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkPostScriptWriter* retVal = static_cast<::vtkPostScriptWriter*>(::vtkPostScriptWriter::SafeDownCast(oWrap));
  return gcnew vtkPostScriptWriter(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkPostScriptWriter::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkPostScriptWriter>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkPostScriptWriter::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkPostScriptWriter>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




  vtkPostScriptWriter::vtkPostScriptWriter(System::IntPtr native, bool bConst) : vtkImageWriter(native, bConst) {}



  vtkPostScriptWriter::vtkPostScriptWriter(bool donothing) : vtkImageWriter(donothing) {}



  vtkPostScriptWriter::vtkPostScriptWriter() : vtkImageWriter(false) {
  this->SetNativePointer(IntPtr(::vtkPostScriptWriter::New()));
}



  vtkPostScriptWriter::~vtkPostScriptWriter() { }





} // end namespace vtkIO
