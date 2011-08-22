

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkXMLPStructuredGridWriterDotNet.h"

// native includes
#include "strstream"
#include "vtkXMLPStructuredGridWriter.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkXMLPStructuredGridWriter::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkXMLPStructuredGridWriter>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkXMLPStructuredGridWriter::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkXMLPStructuredGridWriter>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkXMLPStructuredGridWriter^ vtkXMLPStructuredGridWriter::NewInstance()
{
  ::vtkXMLPStructuredGridWriter* retVal = static_cast<::vtkXMLPStructuredGridWriter*>(vtk::ConvertManagedToNative<::vtkXMLPStructuredGridWriter>(m_instance)->NewInstance());
  return gcnew vtkXMLPStructuredGridWriter(IntPtr(retVal), false);
}



vtkXMLPStructuredGridWriter^ vtkXMLPStructuredGridWriter::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkXMLPStructuredGridWriter* retVal = static_cast<::vtkXMLPStructuredGridWriter*>(::vtkXMLPStructuredGridWriter::SafeDownCast(oWrap));
  return gcnew vtkXMLPStructuredGridWriter(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkXMLPStructuredGridWriter::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkXMLPStructuredGridWriter>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkXMLPStructuredGridWriter::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkXMLPStructuredGridWriter>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




  vtkXMLPStructuredGridWriter::vtkXMLPStructuredGridWriter(System::IntPtr native, bool bConst) : vtkXMLPStructuredDataWriter(native, bConst) {}



  vtkXMLPStructuredGridWriter::vtkXMLPStructuredGridWriter(bool donothing) : vtkXMLPStructuredDataWriter(donothing) {}



  vtkXMLPStructuredGridWriter::vtkXMLPStructuredGridWriter() : vtkXMLPStructuredDataWriter(false) {
  this->SetNativePointer(IntPtr(::vtkXMLPStructuredGridWriter::New()));
}



  vtkXMLPStructuredGridWriter::~vtkXMLPStructuredGridWriter() { }





} // end namespace vtkIO
