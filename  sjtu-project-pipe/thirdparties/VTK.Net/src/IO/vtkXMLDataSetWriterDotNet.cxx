

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkXMLDataSetWriterDotNet.h"

// native includes
#include "strstream"
#include "vtkXMLDataSetWriter.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkXMLDataSetWriter::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkXMLDataSetWriter>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkXMLDataSetWriter::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkXMLDataSetWriter>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkXMLDataSetWriter^ vtkXMLDataSetWriter::NewInstance()
{
  ::vtkXMLDataSetWriter* retVal = static_cast<::vtkXMLDataSetWriter*>(vtk::ConvertManagedToNative<::vtkXMLDataSetWriter>(m_instance)->NewInstance());
  return gcnew vtkXMLDataSetWriter(IntPtr(retVal), false);
}



vtkXMLDataSetWriter^ vtkXMLDataSetWriter::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkXMLDataSetWriter* retVal = static_cast<::vtkXMLDataSetWriter*>(::vtkXMLDataSetWriter::SafeDownCast(oWrap));
  return gcnew vtkXMLDataSetWriter(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkXMLDataSetWriter::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkXMLDataSetWriter>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkXMLDataSetWriter::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkXMLDataSetWriter>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




  vtkXMLDataSetWriter::vtkXMLDataSetWriter(System::IntPtr native, bool bConst) : vtkXMLWriter(native, bConst) {}



  vtkXMLDataSetWriter::vtkXMLDataSetWriter(bool donothing) : vtkXMLWriter(donothing) {}



  vtkXMLDataSetWriter::vtkXMLDataSetWriter() : vtkXMLWriter(false) {
  this->SetNativePointer(IntPtr(::vtkXMLDataSetWriter::New()));
}



  vtkXMLDataSetWriter::~vtkXMLDataSetWriter() { }





} // end namespace vtkIO
