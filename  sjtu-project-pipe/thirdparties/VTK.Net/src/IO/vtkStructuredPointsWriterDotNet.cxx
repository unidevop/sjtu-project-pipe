

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkStructuredPointsWriterDotNet.h"

// native includes
#include "strstream"
#include "vtkStructuredPointsWriter.h"
#include "vtkImageData.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkStructuredPointsWriter::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkStructuredPointsWriter>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkStructuredPointsWriter::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkStructuredPointsWriter>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkStructuredPointsWriter^ vtkStructuredPointsWriter::NewInstance()
{
  ::vtkStructuredPointsWriter* retVal = static_cast<::vtkStructuredPointsWriter*>(vtk::ConvertManagedToNative<::vtkStructuredPointsWriter>(m_instance)->NewInstance());
  return gcnew vtkStructuredPointsWriter(IntPtr(retVal), false);
}



vtkStructuredPointsWriter^ vtkStructuredPointsWriter::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkStructuredPointsWriter* retVal = static_cast<::vtkStructuredPointsWriter*>(::vtkStructuredPointsWriter::SafeDownCast(oWrap));
  return gcnew vtkStructuredPointsWriter(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkStructuredPointsWriter::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkStructuredPointsWriter>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkStructuredPointsWriter::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkStructuredPointsWriter>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




vtkImageData^ vtkStructuredPointsWriter::GetInput()
{
  ::vtkImageData* retVal = static_cast<::vtkImageData*>(vtk::ConvertManagedToNative<::vtkStructuredPointsWriter>(m_instance)->GetInput());
  return gcnew vtkImageData(IntPtr(retVal), false);
}



vtkImageData^ vtkStructuredPointsWriter::GetInput(int port)
{
  ::vtkImageData* retVal = static_cast<::vtkImageData*>(vtk::ConvertManagedToNative<::vtkStructuredPointsWriter>(m_instance)->GetInput(port));
  return gcnew vtkImageData(IntPtr(retVal), false);
}



  vtkStructuredPointsWriter::vtkStructuredPointsWriter(System::IntPtr native, bool bConst) : vtkDataWriter(native, bConst) {}



  vtkStructuredPointsWriter::vtkStructuredPointsWriter(bool donothing) : vtkDataWriter(donothing) {}



  vtkStructuredPointsWriter::vtkStructuredPointsWriter() : vtkDataWriter(false) {
  this->SetNativePointer(IntPtr(::vtkStructuredPointsWriter::New()));
}



  vtkStructuredPointsWriter::~vtkStructuredPointsWriter() { }





} // end namespace vtkIO
