

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkXMLRectilinearGridReaderDotNet.h"

// native includes
#include "strstream"
#include "vtkXMLRectilinearGridReader.h"
#include "vtkObject.h"
#include "vtkRectilinearGrid.h"

using namespace System;

namespace vtk {

System::String^ vtkXMLRectilinearGridReader::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkXMLRectilinearGridReader>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkXMLRectilinearGridReader::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkXMLRectilinearGridReader>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkXMLRectilinearGridReader^ vtkXMLRectilinearGridReader::NewInstance()
{
  ::vtkXMLRectilinearGridReader* retVal = static_cast<::vtkXMLRectilinearGridReader*>(vtk::ConvertManagedToNative<::vtkXMLRectilinearGridReader>(m_instance)->NewInstance());
  return gcnew vtkXMLRectilinearGridReader(IntPtr(retVal), false);
}



vtkXMLRectilinearGridReader^ vtkXMLRectilinearGridReader::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkXMLRectilinearGridReader* retVal = static_cast<::vtkXMLRectilinearGridReader*>(::vtkXMLRectilinearGridReader::SafeDownCast(oWrap));
  return gcnew vtkXMLRectilinearGridReader(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkXMLRectilinearGridReader::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkXMLRectilinearGridReader>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkXMLRectilinearGridReader::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkXMLRectilinearGridReader>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkXMLRectilinearGridReader::SetOutput(vtkRectilinearGrid^ output)
{
  ::vtkRectilinearGrid* outputWrap = vtk::ConvertManagedToNative<::vtkRectilinearGrid>(output->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkXMLRectilinearGridReader>(m_instance)->SetOutput(outputWrap);
}



vtkRectilinearGrid^ vtkXMLRectilinearGridReader::GetOutput()
{
  ::vtkRectilinearGrid* retVal = static_cast<::vtkRectilinearGrid*>(vtk::ConvertManagedToNative<::vtkXMLRectilinearGridReader>(m_instance)->GetOutput());
  return gcnew vtkRectilinearGrid(IntPtr(retVal), false);
}



vtkRectilinearGrid^ vtkXMLRectilinearGridReader::GetOutput(int idx)
{
  ::vtkRectilinearGrid* retVal = static_cast<::vtkRectilinearGrid*>(vtk::ConvertManagedToNative<::vtkXMLRectilinearGridReader>(m_instance)->GetOutput(idx));
  return gcnew vtkRectilinearGrid(IntPtr(retVal), false);
}



  vtkXMLRectilinearGridReader::vtkXMLRectilinearGridReader(System::IntPtr native, bool bConst) : vtkXMLStructuredDataReader(native, bConst) {}



  vtkXMLRectilinearGridReader::vtkXMLRectilinearGridReader(bool donothing) : vtkXMLStructuredDataReader(donothing) {}



  vtkXMLRectilinearGridReader::vtkXMLRectilinearGridReader() : vtkXMLStructuredDataReader(false) {
  this->SetNativePointer(IntPtr(::vtkXMLRectilinearGridReader::New()));
}



  vtkXMLRectilinearGridReader::~vtkXMLRectilinearGridReader() { }





} // end namespace vtkIO
