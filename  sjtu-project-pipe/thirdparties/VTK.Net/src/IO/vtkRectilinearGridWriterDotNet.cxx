

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkRectilinearGridWriterDotNet.h"

// native includes
#include "strstream"
#include "vtkRectilinearGridWriter.h"
#include "vtkObject.h"
#include "vtkRectilinearGrid.h"

using namespace System;

namespace vtk {

System::String^ vtkRectilinearGridWriter::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkRectilinearGridWriter>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkRectilinearGridWriter::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkRectilinearGridWriter>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkRectilinearGridWriter^ vtkRectilinearGridWriter::NewInstance()
{
  ::vtkRectilinearGridWriter* retVal = static_cast<::vtkRectilinearGridWriter*>(vtk::ConvertManagedToNative<::vtkRectilinearGridWriter>(m_instance)->NewInstance());
  return gcnew vtkRectilinearGridWriter(IntPtr(retVal), false);
}



vtkRectilinearGridWriter^ vtkRectilinearGridWriter::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkRectilinearGridWriter* retVal = static_cast<::vtkRectilinearGridWriter*>(::vtkRectilinearGridWriter::SafeDownCast(oWrap));
  return gcnew vtkRectilinearGridWriter(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkRectilinearGridWriter::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkRectilinearGridWriter>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkRectilinearGridWriter::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkRectilinearGridWriter>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




vtkRectilinearGrid^ vtkRectilinearGridWriter::GetInput()
{
  ::vtkRectilinearGrid* retVal = static_cast<::vtkRectilinearGrid*>(vtk::ConvertManagedToNative<::vtkRectilinearGridWriter>(m_instance)->GetInput());
  return gcnew vtkRectilinearGrid(IntPtr(retVal), false);
}



vtkRectilinearGrid^ vtkRectilinearGridWriter::GetInput(int port)
{
  ::vtkRectilinearGrid* retVal = static_cast<::vtkRectilinearGrid*>(vtk::ConvertManagedToNative<::vtkRectilinearGridWriter>(m_instance)->GetInput(port));
  return gcnew vtkRectilinearGrid(IntPtr(retVal), false);
}



  vtkRectilinearGridWriter::vtkRectilinearGridWriter(System::IntPtr native, bool bConst) : vtkDataWriter(native, bConst) {}



  vtkRectilinearGridWriter::vtkRectilinearGridWriter(bool donothing) : vtkDataWriter(donothing) {}



  vtkRectilinearGridWriter::vtkRectilinearGridWriter() : vtkDataWriter(false) {
  this->SetNativePointer(IntPtr(::vtkRectilinearGridWriter::New()));
}



  vtkRectilinearGridWriter::~vtkRectilinearGridWriter() { }





} // end namespace vtkIO
