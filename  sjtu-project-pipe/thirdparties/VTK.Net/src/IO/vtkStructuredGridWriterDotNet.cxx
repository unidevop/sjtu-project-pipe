

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkStructuredGridWriterDotNet.h"

// native includes
#include "strstream"
#include "vtkStructuredGridWriter.h"
#include "vtkObject.h"
#include "vtkStructuredGrid.h"

using namespace System;

namespace vtk {

System::String^ vtkStructuredGridWriter::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkStructuredGridWriter>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkStructuredGridWriter::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkStructuredGridWriter>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkStructuredGridWriter^ vtkStructuredGridWriter::NewInstance()
{
  ::vtkStructuredGridWriter* retVal = static_cast<::vtkStructuredGridWriter*>(vtk::ConvertManagedToNative<::vtkStructuredGridWriter>(m_instance)->NewInstance());
  return gcnew vtkStructuredGridWriter(IntPtr(retVal), false);
}



vtkStructuredGridWriter^ vtkStructuredGridWriter::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkStructuredGridWriter* retVal = static_cast<::vtkStructuredGridWriter*>(::vtkStructuredGridWriter::SafeDownCast(oWrap));
  return gcnew vtkStructuredGridWriter(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkStructuredGridWriter::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkStructuredGridWriter>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkStructuredGridWriter::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkStructuredGridWriter>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




vtkStructuredGrid^ vtkStructuredGridWriter::GetInput()
{
  ::vtkStructuredGrid* retVal = static_cast<::vtkStructuredGrid*>(vtk::ConvertManagedToNative<::vtkStructuredGridWriter>(m_instance)->GetInput());
  return gcnew vtkStructuredGrid(IntPtr(retVal), false);
}



vtkStructuredGrid^ vtkStructuredGridWriter::GetInput(int port)
{
  ::vtkStructuredGrid* retVal = static_cast<::vtkStructuredGrid*>(vtk::ConvertManagedToNative<::vtkStructuredGridWriter>(m_instance)->GetInput(port));
  return gcnew vtkStructuredGrid(IntPtr(retVal), false);
}



  vtkStructuredGridWriter::vtkStructuredGridWriter(System::IntPtr native, bool bConst) : vtkDataWriter(native, bConst) {}



  vtkStructuredGridWriter::vtkStructuredGridWriter(bool donothing) : vtkDataWriter(donothing) {}



  vtkStructuredGridWriter::vtkStructuredGridWriter() : vtkDataWriter(false) {
  this->SetNativePointer(IntPtr(::vtkStructuredGridWriter::New()));
}



  vtkStructuredGridWriter::~vtkStructuredGridWriter() { }





} // end namespace vtkIO
