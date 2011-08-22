

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkXMLStructuredGridReaderDotNet.h"

// native includes
#include "strstream"
#include "vtkXMLStructuredGridReader.h"
#include "vtkObject.h"
#include "vtkStructuredGrid.h"

using namespace System;

namespace vtk {

System::String^ vtkXMLStructuredGridReader::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkXMLStructuredGridReader>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkXMLStructuredGridReader::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkXMLStructuredGridReader>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkXMLStructuredGridReader^ vtkXMLStructuredGridReader::NewInstance()
{
  ::vtkXMLStructuredGridReader* retVal = static_cast<::vtkXMLStructuredGridReader*>(vtk::ConvertManagedToNative<::vtkXMLStructuredGridReader>(m_instance)->NewInstance());
  return gcnew vtkXMLStructuredGridReader(IntPtr(retVal), false);
}



vtkXMLStructuredGridReader^ vtkXMLStructuredGridReader::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkXMLStructuredGridReader* retVal = static_cast<::vtkXMLStructuredGridReader*>(::vtkXMLStructuredGridReader::SafeDownCast(oWrap));
  return gcnew vtkXMLStructuredGridReader(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkXMLStructuredGridReader::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkXMLStructuredGridReader>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkXMLStructuredGridReader::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkXMLStructuredGridReader>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkXMLStructuredGridReader::SetOutput(vtkStructuredGrid^ output)
{
  ::vtkStructuredGrid* outputWrap = vtk::ConvertManagedToNative<::vtkStructuredGrid>(output->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkXMLStructuredGridReader>(m_instance)->SetOutput(outputWrap);
}



vtkStructuredGrid^ vtkXMLStructuredGridReader::GetOutput()
{
  ::vtkStructuredGrid* retVal = static_cast<::vtkStructuredGrid*>(vtk::ConvertManagedToNative<::vtkXMLStructuredGridReader>(m_instance)->GetOutput());
  return gcnew vtkStructuredGrid(IntPtr(retVal), false);
}



vtkStructuredGrid^ vtkXMLStructuredGridReader::GetOutput(int idx)
{
  ::vtkStructuredGrid* retVal = static_cast<::vtkStructuredGrid*>(vtk::ConvertManagedToNative<::vtkXMLStructuredGridReader>(m_instance)->GetOutput(idx));
  return gcnew vtkStructuredGrid(IntPtr(retVal), false);
}



  vtkXMLStructuredGridReader::vtkXMLStructuredGridReader(System::IntPtr native, bool bConst) : vtkXMLStructuredDataReader(native, bConst) {}



  vtkXMLStructuredGridReader::vtkXMLStructuredGridReader(bool donothing) : vtkXMLStructuredDataReader(donothing) {}



  vtkXMLStructuredGridReader::vtkXMLStructuredGridReader() : vtkXMLStructuredDataReader(false) {
  this->SetNativePointer(IntPtr(::vtkXMLStructuredGridReader::New()));
}



  vtkXMLStructuredGridReader::~vtkXMLStructuredGridReader() { }





} // end namespace vtkIO
