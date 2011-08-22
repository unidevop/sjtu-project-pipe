

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkXMLRectilinearGridWriterDotNet.h"

// native includes
#include "strstream"
#include "vtkXMLRectilinearGridWriter.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkXMLRectilinearGridWriter::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkXMLRectilinearGridWriter>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkXMLRectilinearGridWriter::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkXMLRectilinearGridWriter>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkXMLRectilinearGridWriter^ vtkXMLRectilinearGridWriter::NewInstance()
{
  ::vtkXMLRectilinearGridWriter* retVal = static_cast<::vtkXMLRectilinearGridWriter*>(vtk::ConvertManagedToNative<::vtkXMLRectilinearGridWriter>(m_instance)->NewInstance());
  return gcnew vtkXMLRectilinearGridWriter(IntPtr(retVal), false);
}



vtkXMLRectilinearGridWriter^ vtkXMLRectilinearGridWriter::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkXMLRectilinearGridWriter* retVal = static_cast<::vtkXMLRectilinearGridWriter*>(::vtkXMLRectilinearGridWriter::SafeDownCast(oWrap));
  return gcnew vtkXMLRectilinearGridWriter(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkXMLRectilinearGridWriter::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkXMLRectilinearGridWriter>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkXMLRectilinearGridWriter::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkXMLRectilinearGridWriter>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




System::String^ vtkXMLRectilinearGridWriter::GetDefaultFileExtension()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkXMLRectilinearGridWriter>(m_instance)->GetDefaultFileExtension();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



  vtkXMLRectilinearGridWriter::vtkXMLRectilinearGridWriter(System::IntPtr native, bool bConst) : vtkXMLStructuredDataWriter(native, bConst) {}



  vtkXMLRectilinearGridWriter::vtkXMLRectilinearGridWriter(bool donothing) : vtkXMLStructuredDataWriter(donothing) {}



  vtkXMLRectilinearGridWriter::vtkXMLRectilinearGridWriter() : vtkXMLStructuredDataWriter(false) {
  this->SetNativePointer(IntPtr(::vtkXMLRectilinearGridWriter::New()));
}



  vtkXMLRectilinearGridWriter::~vtkXMLRectilinearGridWriter() { }





} // end namespace vtkIO
