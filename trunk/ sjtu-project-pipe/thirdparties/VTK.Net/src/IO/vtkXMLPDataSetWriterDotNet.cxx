

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkXMLPDataSetWriterDotNet.h"

// native includes
#include "strstream"
#include "vtkXMLPDataSetWriter.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkXMLPDataSetWriter::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkXMLPDataSetWriter>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkXMLPDataSetWriter::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkXMLPDataSetWriter>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkXMLPDataSetWriter^ vtkXMLPDataSetWriter::NewInstance()
{
  ::vtkXMLPDataSetWriter* retVal = static_cast<::vtkXMLPDataSetWriter*>(vtk::ConvertManagedToNative<::vtkXMLPDataSetWriter>(m_instance)->NewInstance());
  return gcnew vtkXMLPDataSetWriter(IntPtr(retVal), false);
}



vtkXMLPDataSetWriter^ vtkXMLPDataSetWriter::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkXMLPDataSetWriter* retVal = static_cast<::vtkXMLPDataSetWriter*>(::vtkXMLPDataSetWriter::SafeDownCast(oWrap));
  return gcnew vtkXMLPDataSetWriter(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkXMLPDataSetWriter::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkXMLPDataSetWriter>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkXMLPDataSetWriter::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkXMLPDataSetWriter>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




  vtkXMLPDataSetWriter::vtkXMLPDataSetWriter(System::IntPtr native, bool bConst) : vtkXMLPDataWriter(native, bConst) {}



  vtkXMLPDataSetWriter::vtkXMLPDataSetWriter(bool donothing) : vtkXMLPDataWriter(donothing) {}



  vtkXMLPDataSetWriter::vtkXMLPDataSetWriter() : vtkXMLPDataWriter(false) {
  this->SetNativePointer(IntPtr(::vtkXMLPDataSetWriter::New()));
}



  vtkXMLPDataSetWriter::~vtkXMLPDataSetWriter() { }





} // end namespace vtkIO
