

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkXMLUnstructuredGridReaderDotNet.h"

// native includes
#include "strstream"
#include "vtkXMLUnstructuredGridReader.h"
#include "vtkObject.h"
#include "vtkUnstructuredGrid.h"

using namespace System;

namespace vtk {

System::String^ vtkXMLUnstructuredGridReader::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkXMLUnstructuredGridReader>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkXMLUnstructuredGridReader::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkXMLUnstructuredGridReader>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkXMLUnstructuredGridReader^ vtkXMLUnstructuredGridReader::NewInstance()
{
  ::vtkXMLUnstructuredGridReader* retVal = static_cast<::vtkXMLUnstructuredGridReader*>(vtk::ConvertManagedToNative<::vtkXMLUnstructuredGridReader>(m_instance)->NewInstance());
  return gcnew vtkXMLUnstructuredGridReader(IntPtr(retVal), false);
}



vtkXMLUnstructuredGridReader^ vtkXMLUnstructuredGridReader::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkXMLUnstructuredGridReader* retVal = static_cast<::vtkXMLUnstructuredGridReader*>(::vtkXMLUnstructuredGridReader::SafeDownCast(oWrap));
  return gcnew vtkXMLUnstructuredGridReader(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkXMLUnstructuredGridReader::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkXMLUnstructuredGridReader>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkXMLUnstructuredGridReader::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkXMLUnstructuredGridReader>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkXMLUnstructuredGridReader::SetOutput(vtkUnstructuredGrid^ output)
{
  ::vtkUnstructuredGrid* outputWrap = vtk::ConvertManagedToNative<::vtkUnstructuredGrid>(output->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkXMLUnstructuredGridReader>(m_instance)->SetOutput(outputWrap);
}



vtkUnstructuredGrid^ vtkXMLUnstructuredGridReader::GetOutput()
{
  ::vtkUnstructuredGrid* retVal = static_cast<::vtkUnstructuredGrid*>(vtk::ConvertManagedToNative<::vtkXMLUnstructuredGridReader>(m_instance)->GetOutput());
  return gcnew vtkUnstructuredGrid(IntPtr(retVal), false);
}



vtkUnstructuredGrid^ vtkXMLUnstructuredGridReader::GetOutput(int idx)
{
  ::vtkUnstructuredGrid* retVal = static_cast<::vtkUnstructuredGrid*>(vtk::ConvertManagedToNative<::vtkXMLUnstructuredGridReader>(m_instance)->GetOutput(idx));
  return gcnew vtkUnstructuredGrid(IntPtr(retVal), false);
}



  vtkXMLUnstructuredGridReader::vtkXMLUnstructuredGridReader(System::IntPtr native, bool bConst) : vtkXMLUnstructuredDataReader(native, bConst) {}



  vtkXMLUnstructuredGridReader::vtkXMLUnstructuredGridReader(bool donothing) : vtkXMLUnstructuredDataReader(donothing) {}



  vtkXMLUnstructuredGridReader::vtkXMLUnstructuredGridReader() : vtkXMLUnstructuredDataReader(false) {
  this->SetNativePointer(IntPtr(::vtkXMLUnstructuredGridReader::New()));
}



  vtkXMLUnstructuredGridReader::~vtkXMLUnstructuredGridReader() { }





} // end namespace vtkIO
