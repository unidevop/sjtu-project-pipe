

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkPolyDataWriterDotNet.h"

// native includes
#include "strstream"
#include "vtkPolyDataWriter.h"
#include "vtkObject.h"
#include "vtkPolyData.h"

using namespace System;

namespace vtk {

System::String^ vtkPolyDataWriter::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkPolyDataWriter>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkPolyDataWriter::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkPolyDataWriter>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkPolyDataWriter^ vtkPolyDataWriter::NewInstance()
{
  ::vtkPolyDataWriter* retVal = static_cast<::vtkPolyDataWriter*>(vtk::ConvertManagedToNative<::vtkPolyDataWriter>(m_instance)->NewInstance());
  return gcnew vtkPolyDataWriter(IntPtr(retVal), false);
}



vtkPolyDataWriter^ vtkPolyDataWriter::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkPolyDataWriter* retVal = static_cast<::vtkPolyDataWriter*>(::vtkPolyDataWriter::SafeDownCast(oWrap));
  return gcnew vtkPolyDataWriter(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkPolyDataWriter::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkPolyDataWriter>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkPolyDataWriter::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkPolyDataWriter>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




vtkPolyData^ vtkPolyDataWriter::GetInput()
{
  ::vtkPolyData* retVal = static_cast<::vtkPolyData*>(vtk::ConvertManagedToNative<::vtkPolyDataWriter>(m_instance)->GetInput());
  return gcnew vtkPolyData(IntPtr(retVal), false);
}



vtkPolyData^ vtkPolyDataWriter::GetInput(int port)
{
  ::vtkPolyData* retVal = static_cast<::vtkPolyData*>(vtk::ConvertManagedToNative<::vtkPolyDataWriter>(m_instance)->GetInput(port));
  return gcnew vtkPolyData(IntPtr(retVal), false);
}



  vtkPolyDataWriter::vtkPolyDataWriter(System::IntPtr native, bool bConst) : vtkDataWriter(native, bConst) {}



  vtkPolyDataWriter::vtkPolyDataWriter(bool donothing) : vtkDataWriter(donothing) {}



  vtkPolyDataWriter::vtkPolyDataWriter() : vtkDataWriter(false) {
  this->SetNativePointer(IntPtr(::vtkPolyDataWriter::New()));
}



  vtkPolyDataWriter::~vtkPolyDataWriter() { }





} // end namespace vtkIO
