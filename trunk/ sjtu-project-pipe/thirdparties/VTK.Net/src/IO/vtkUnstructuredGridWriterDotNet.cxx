

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkUnstructuredGridWriterDotNet.h"

// native includes
#include "strstream"
#include "vtkUnstructuredGridWriter.h"
#include "vtkObject.h"
#include "vtkUnstructuredGrid.h"

using namespace System;

namespace vtk {

System::String^ vtkUnstructuredGridWriter::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkUnstructuredGridWriter>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkUnstructuredGridWriter::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkUnstructuredGridWriter>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkUnstructuredGridWriter^ vtkUnstructuredGridWriter::NewInstance()
{
  ::vtkUnstructuredGridWriter* retVal = static_cast<::vtkUnstructuredGridWriter*>(vtk::ConvertManagedToNative<::vtkUnstructuredGridWriter>(m_instance)->NewInstance());
  return gcnew vtkUnstructuredGridWriter(IntPtr(retVal), false);
}



vtkUnstructuredGridWriter^ vtkUnstructuredGridWriter::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkUnstructuredGridWriter* retVal = static_cast<::vtkUnstructuredGridWriter*>(::vtkUnstructuredGridWriter::SafeDownCast(oWrap));
  return gcnew vtkUnstructuredGridWriter(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkUnstructuredGridWriter::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkUnstructuredGridWriter>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkUnstructuredGridWriter::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkUnstructuredGridWriter>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




vtkUnstructuredGrid^ vtkUnstructuredGridWriter::GetInput()
{
  ::vtkUnstructuredGrid* retVal = static_cast<::vtkUnstructuredGrid*>(vtk::ConvertManagedToNative<::vtkUnstructuredGridWriter>(m_instance)->GetInput());
  return gcnew vtkUnstructuredGrid(IntPtr(retVal), false);
}



vtkUnstructuredGrid^ vtkUnstructuredGridWriter::GetInput(int port)
{
  ::vtkUnstructuredGrid* retVal = static_cast<::vtkUnstructuredGrid*>(vtk::ConvertManagedToNative<::vtkUnstructuredGridWriter>(m_instance)->GetInput(port));
  return gcnew vtkUnstructuredGrid(IntPtr(retVal), false);
}



  vtkUnstructuredGridWriter::vtkUnstructuredGridWriter(System::IntPtr native, bool bConst) : vtkDataWriter(native, bConst) {}



  vtkUnstructuredGridWriter::vtkUnstructuredGridWriter(bool donothing) : vtkDataWriter(donothing) {}



  vtkUnstructuredGridWriter::vtkUnstructuredGridWriter() : vtkDataWriter(false) {
  this->SetNativePointer(IntPtr(::vtkUnstructuredGridWriter::New()));
}



  vtkUnstructuredGridWriter::~vtkUnstructuredGridWriter() { }





} // end namespace vtkIO
