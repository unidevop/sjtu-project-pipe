

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkXMLPRectilinearGridWriterDotNet.h"

// native includes
#include "strstream"
#include "vtkXMLPRectilinearGridWriter.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkXMLPRectilinearGridWriter::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkXMLPRectilinearGridWriter>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkXMLPRectilinearGridWriter::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkXMLPRectilinearGridWriter>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkXMLPRectilinearGridWriter^ vtkXMLPRectilinearGridWriter::NewInstance()
{
  ::vtkXMLPRectilinearGridWriter* retVal = static_cast<::vtkXMLPRectilinearGridWriter*>(vtk::ConvertManagedToNative<::vtkXMLPRectilinearGridWriter>(m_instance)->NewInstance());
  return gcnew vtkXMLPRectilinearGridWriter(IntPtr(retVal), false);
}



vtkXMLPRectilinearGridWriter^ vtkXMLPRectilinearGridWriter::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkXMLPRectilinearGridWriter* retVal = static_cast<::vtkXMLPRectilinearGridWriter*>(::vtkXMLPRectilinearGridWriter::SafeDownCast(oWrap));
  return gcnew vtkXMLPRectilinearGridWriter(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkXMLPRectilinearGridWriter::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkXMLPRectilinearGridWriter>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkXMLPRectilinearGridWriter::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkXMLPRectilinearGridWriter>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




System::String^ vtkXMLPRectilinearGridWriter::GetDefaultFileExtension()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkXMLPRectilinearGridWriter>(m_instance)->GetDefaultFileExtension();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



  vtkXMLPRectilinearGridWriter::vtkXMLPRectilinearGridWriter(System::IntPtr native, bool bConst) : vtkXMLPStructuredDataWriter(native, bConst) {}



  vtkXMLPRectilinearGridWriter::vtkXMLPRectilinearGridWriter(bool donothing) : vtkXMLPStructuredDataWriter(donothing) {}



  vtkXMLPRectilinearGridWriter::vtkXMLPRectilinearGridWriter() : vtkXMLPStructuredDataWriter(false) {
  this->SetNativePointer(IntPtr(::vtkXMLPRectilinearGridWriter::New()));
}



  vtkXMLPRectilinearGridWriter::~vtkXMLPRectilinearGridWriter() { }





} // end namespace vtkIO
