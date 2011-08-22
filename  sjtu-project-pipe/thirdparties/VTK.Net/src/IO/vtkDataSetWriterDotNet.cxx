

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkDataSetWriterDotNet.h"

// native includes
#include "strstream"
#include "vtkDataSetWriter.h"
#include "vtkDataSet.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkDataSetWriter::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkDataSetWriter>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkDataSetWriter::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkDataSetWriter>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkDataSetWriter^ vtkDataSetWriter::NewInstance()
{
  ::vtkDataSetWriter* retVal = static_cast<::vtkDataSetWriter*>(vtk::ConvertManagedToNative<::vtkDataSetWriter>(m_instance)->NewInstance());
  return gcnew vtkDataSetWriter(IntPtr(retVal), false);
}



vtkDataSetWriter^ vtkDataSetWriter::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkDataSetWriter* retVal = static_cast<::vtkDataSetWriter*>(::vtkDataSetWriter::SafeDownCast(oWrap));
  return gcnew vtkDataSetWriter(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkDataSetWriter::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkDataSetWriter>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkDataSetWriter::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkDataSetWriter>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




vtkDataSet^ vtkDataSetWriter::GetInput()
{
  ::vtkDataSet* retVal = static_cast<::vtkDataSet*>(vtk::ConvertManagedToNative<::vtkDataSetWriter>(m_instance)->GetInput());
  return gcnew vtkDataSet(IntPtr(retVal), false);
}



vtkDataSet^ vtkDataSetWriter::GetInput(int port)
{
  ::vtkDataSet* retVal = static_cast<::vtkDataSet*>(vtk::ConvertManagedToNative<::vtkDataSetWriter>(m_instance)->GetInput(port));
  return gcnew vtkDataSet(IntPtr(retVal), false);
}



  vtkDataSetWriter::vtkDataSetWriter(System::IntPtr native, bool bConst) : vtkDataWriter(native, bConst) {}



  vtkDataSetWriter::vtkDataSetWriter(bool donothing) : vtkDataWriter(donothing) {}



  vtkDataSetWriter::vtkDataSetWriter() : vtkDataWriter(false) {
  this->SetNativePointer(IntPtr(::vtkDataSetWriter::New()));
}



  vtkDataSetWriter::~vtkDataSetWriter() { }





} // end namespace vtkIO
