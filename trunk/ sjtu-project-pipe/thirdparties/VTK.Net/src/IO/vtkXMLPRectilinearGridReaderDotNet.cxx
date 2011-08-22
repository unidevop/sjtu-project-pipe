

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkXMLPRectilinearGridReaderDotNet.h"

// native includes
#include "strstream"
#include "vtkXMLPRectilinearGridReader.h"
#include "vtkObject.h"
#include "vtkRectilinearGrid.h"

using namespace System;

namespace vtk {

System::String^ vtkXMLPRectilinearGridReader::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkXMLPRectilinearGridReader>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkXMLPRectilinearGridReader::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkXMLPRectilinearGridReader>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkXMLPRectilinearGridReader^ vtkXMLPRectilinearGridReader::NewInstance()
{
  ::vtkXMLPRectilinearGridReader* retVal = static_cast<::vtkXMLPRectilinearGridReader*>(vtk::ConvertManagedToNative<::vtkXMLPRectilinearGridReader>(m_instance)->NewInstance());
  return gcnew vtkXMLPRectilinearGridReader(IntPtr(retVal), false);
}



vtkXMLPRectilinearGridReader^ vtkXMLPRectilinearGridReader::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkXMLPRectilinearGridReader* retVal = static_cast<::vtkXMLPRectilinearGridReader*>(::vtkXMLPRectilinearGridReader::SafeDownCast(oWrap));
  return gcnew vtkXMLPRectilinearGridReader(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkXMLPRectilinearGridReader::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkXMLPRectilinearGridReader>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkXMLPRectilinearGridReader::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkXMLPRectilinearGridReader>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkXMLPRectilinearGridReader::SetOutput(vtkRectilinearGrid^ output)
{
  ::vtkRectilinearGrid* outputWrap = vtk::ConvertManagedToNative<::vtkRectilinearGrid>(output->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkXMLPRectilinearGridReader>(m_instance)->SetOutput(outputWrap);
}



vtkRectilinearGrid^ vtkXMLPRectilinearGridReader::GetOutput()
{
  ::vtkRectilinearGrid* retVal = static_cast<::vtkRectilinearGrid*>(vtk::ConvertManagedToNative<::vtkXMLPRectilinearGridReader>(m_instance)->GetOutput());
  return gcnew vtkRectilinearGrid(IntPtr(retVal), false);
}



vtkRectilinearGrid^ vtkXMLPRectilinearGridReader::GetOutput(int idx)
{
  ::vtkRectilinearGrid* retVal = static_cast<::vtkRectilinearGrid*>(vtk::ConvertManagedToNative<::vtkXMLPRectilinearGridReader>(m_instance)->GetOutput(idx));
  return gcnew vtkRectilinearGrid(IntPtr(retVal), false);
}



  vtkXMLPRectilinearGridReader::vtkXMLPRectilinearGridReader(System::IntPtr native, bool bConst) : vtkXMLPStructuredDataReader(native, bConst) {}



  vtkXMLPRectilinearGridReader::vtkXMLPRectilinearGridReader(bool donothing) : vtkXMLPStructuredDataReader(donothing) {}



  vtkXMLPRectilinearGridReader::vtkXMLPRectilinearGridReader() : vtkXMLPStructuredDataReader(false) {
  this->SetNativePointer(IntPtr(::vtkXMLPRectilinearGridReader::New()));
}



  vtkXMLPRectilinearGridReader::~vtkXMLPRectilinearGridReader() { }





} // end namespace vtkIO
