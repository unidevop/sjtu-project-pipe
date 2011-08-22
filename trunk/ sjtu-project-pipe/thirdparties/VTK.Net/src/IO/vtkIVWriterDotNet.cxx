

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkIVWriterDotNet.h"

// native includes
#include "strstream"
#include "vtkIVWriter.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkIVWriter::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkIVWriter>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkIVWriter::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkIVWriter>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkIVWriter^ vtkIVWriter::NewInstance()
{
  ::vtkIVWriter* retVal = static_cast<::vtkIVWriter*>(vtk::ConvertManagedToNative<::vtkIVWriter>(m_instance)->NewInstance());
  return gcnew vtkIVWriter(IntPtr(retVal), false);
}



vtkIVWriter^ vtkIVWriter::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkIVWriter* retVal = static_cast<::vtkIVWriter*>(::vtkIVWriter::SafeDownCast(oWrap));
  return gcnew vtkIVWriter(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkIVWriter::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkIVWriter>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkIVWriter::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkIVWriter>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




  vtkIVWriter::vtkIVWriter(System::IntPtr native, bool bConst) : vtkPolyDataWriter(native, bConst) {}



  vtkIVWriter::vtkIVWriter(bool donothing) : vtkPolyDataWriter(donothing) {}



  vtkIVWriter::vtkIVWriter() : vtkPolyDataWriter(false) {
  this->SetNativePointer(IntPtr(::vtkIVWriter::New()));
}



  vtkIVWriter::~vtkIVWriter() { }





} // end namespace vtkIO
