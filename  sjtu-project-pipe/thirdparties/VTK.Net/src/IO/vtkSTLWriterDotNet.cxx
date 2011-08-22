

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkSTLWriterDotNet.h"

// native includes
#include "strstream"
#include "vtkSTLWriter.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkSTLWriter::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkSTLWriter>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkSTLWriter::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkSTLWriter>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkSTLWriter^ vtkSTLWriter::NewInstance()
{
  ::vtkSTLWriter* retVal = static_cast<::vtkSTLWriter*>(vtk::ConvertManagedToNative<::vtkSTLWriter>(m_instance)->NewInstance());
  return gcnew vtkSTLWriter(IntPtr(retVal), false);
}



vtkSTLWriter^ vtkSTLWriter::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkSTLWriter* retVal = static_cast<::vtkSTLWriter*>(::vtkSTLWriter::SafeDownCast(oWrap));
  return gcnew vtkSTLWriter(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkSTLWriter::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkSTLWriter>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkSTLWriter::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkSTLWriter>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




  vtkSTLWriter::vtkSTLWriter(System::IntPtr native, bool bConst) : vtkPolyDataWriter(native, bConst) {}



  vtkSTLWriter::vtkSTLWriter(bool donothing) : vtkPolyDataWriter(donothing) {}



  vtkSTLWriter::vtkSTLWriter() : vtkPolyDataWriter(false) {
  this->SetNativePointer(IntPtr(::vtkSTLWriter::New()));
}



  vtkSTLWriter::~vtkSTLWriter() { }





} // end namespace vtkIO
