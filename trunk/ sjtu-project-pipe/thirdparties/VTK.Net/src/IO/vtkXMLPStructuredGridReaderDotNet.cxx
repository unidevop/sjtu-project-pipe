

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkXMLPStructuredGridReaderDotNet.h"

// native includes
#include "strstream"
#include "vtkXMLPStructuredGridReader.h"
#include "vtkObject.h"
#include "vtkStructuredGrid.h"

using namespace System;

namespace vtk {

System::String^ vtkXMLPStructuredGridReader::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkXMLPStructuredGridReader>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkXMLPStructuredGridReader::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkXMLPStructuredGridReader>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkXMLPStructuredGridReader^ vtkXMLPStructuredGridReader::NewInstance()
{
  ::vtkXMLPStructuredGridReader* retVal = static_cast<::vtkXMLPStructuredGridReader*>(vtk::ConvertManagedToNative<::vtkXMLPStructuredGridReader>(m_instance)->NewInstance());
  return gcnew vtkXMLPStructuredGridReader(IntPtr(retVal), false);
}



vtkXMLPStructuredGridReader^ vtkXMLPStructuredGridReader::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkXMLPStructuredGridReader* retVal = static_cast<::vtkXMLPStructuredGridReader*>(::vtkXMLPStructuredGridReader::SafeDownCast(oWrap));
  return gcnew vtkXMLPStructuredGridReader(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkXMLPStructuredGridReader::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkXMLPStructuredGridReader>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkXMLPStructuredGridReader::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkXMLPStructuredGridReader>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkXMLPStructuredGridReader::SetOutput(vtkStructuredGrid^ output)
{
  ::vtkStructuredGrid* outputWrap = vtk::ConvertManagedToNative<::vtkStructuredGrid>(output->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkXMLPStructuredGridReader>(m_instance)->SetOutput(outputWrap);
}



vtkStructuredGrid^ vtkXMLPStructuredGridReader::GetOutput()
{
  ::vtkStructuredGrid* retVal = static_cast<::vtkStructuredGrid*>(vtk::ConvertManagedToNative<::vtkXMLPStructuredGridReader>(m_instance)->GetOutput());
  return gcnew vtkStructuredGrid(IntPtr(retVal), false);
}



vtkStructuredGrid^ vtkXMLPStructuredGridReader::GetOutput(int idx)
{
  ::vtkStructuredGrid* retVal = static_cast<::vtkStructuredGrid*>(vtk::ConvertManagedToNative<::vtkXMLPStructuredGridReader>(m_instance)->GetOutput(idx));
  return gcnew vtkStructuredGrid(IntPtr(retVal), false);
}



  vtkXMLPStructuredGridReader::vtkXMLPStructuredGridReader(System::IntPtr native, bool bConst) : vtkXMLPStructuredDataReader(native, bConst) {}



  vtkXMLPStructuredGridReader::vtkXMLPStructuredGridReader(bool donothing) : vtkXMLPStructuredDataReader(donothing) {}



  vtkXMLPStructuredGridReader::vtkXMLPStructuredGridReader() : vtkXMLPStructuredDataReader(false) {
  this->SetNativePointer(IntPtr(::vtkXMLPStructuredGridReader::New()));
}



  vtkXMLPStructuredGridReader::~vtkXMLPStructuredGridReader() { }





} // end namespace vtkIO
