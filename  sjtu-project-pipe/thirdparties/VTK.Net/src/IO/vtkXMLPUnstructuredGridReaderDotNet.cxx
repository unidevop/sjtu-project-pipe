

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkXMLPUnstructuredGridReaderDotNet.h"

// native includes
#include "strstream"
#include "vtkXMLPUnstructuredGridReader.h"
#include "vtkObject.h"
#include "vtkUnstructuredGrid.h"

using namespace System;

namespace vtk {

System::String^ vtkXMLPUnstructuredGridReader::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkXMLPUnstructuredGridReader>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkXMLPUnstructuredGridReader::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkXMLPUnstructuredGridReader>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkXMLPUnstructuredGridReader^ vtkXMLPUnstructuredGridReader::NewInstance()
{
  ::vtkXMLPUnstructuredGridReader* retVal = static_cast<::vtkXMLPUnstructuredGridReader*>(vtk::ConvertManagedToNative<::vtkXMLPUnstructuredGridReader>(m_instance)->NewInstance());
  return gcnew vtkXMLPUnstructuredGridReader(IntPtr(retVal), false);
}



vtkXMLPUnstructuredGridReader^ vtkXMLPUnstructuredGridReader::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkXMLPUnstructuredGridReader* retVal = static_cast<::vtkXMLPUnstructuredGridReader*>(::vtkXMLPUnstructuredGridReader::SafeDownCast(oWrap));
  return gcnew vtkXMLPUnstructuredGridReader(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkXMLPUnstructuredGridReader::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkXMLPUnstructuredGridReader>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkXMLPUnstructuredGridReader::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkXMLPUnstructuredGridReader>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkXMLPUnstructuredGridReader::SetOutput(vtkUnstructuredGrid^ output)
{
  ::vtkUnstructuredGrid* outputWrap = vtk::ConvertManagedToNative<::vtkUnstructuredGrid>(output->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkXMLPUnstructuredGridReader>(m_instance)->SetOutput(outputWrap);
}



vtkUnstructuredGrid^ vtkXMLPUnstructuredGridReader::GetOutput()
{
  ::vtkUnstructuredGrid* retVal = static_cast<::vtkUnstructuredGrid*>(vtk::ConvertManagedToNative<::vtkXMLPUnstructuredGridReader>(m_instance)->GetOutput());
  return gcnew vtkUnstructuredGrid(IntPtr(retVal), false);
}



vtkUnstructuredGrid^ vtkXMLPUnstructuredGridReader::GetOutput(int idx)
{
  ::vtkUnstructuredGrid* retVal = static_cast<::vtkUnstructuredGrid*>(vtk::ConvertManagedToNative<::vtkXMLPUnstructuredGridReader>(m_instance)->GetOutput(idx));
  return gcnew vtkUnstructuredGrid(IntPtr(retVal), false);
}



  vtkXMLPUnstructuredGridReader::vtkXMLPUnstructuredGridReader(System::IntPtr native, bool bConst) : vtkXMLPUnstructuredDataReader(native, bConst) {}



  vtkXMLPUnstructuredGridReader::vtkXMLPUnstructuredGridReader(bool donothing) : vtkXMLPUnstructuredDataReader(donothing) {}



  vtkXMLPUnstructuredGridReader::vtkXMLPUnstructuredGridReader() : vtkXMLPUnstructuredDataReader(false) {
  this->SetNativePointer(IntPtr(::vtkXMLPUnstructuredGridReader::New()));
}



  vtkXMLPUnstructuredGridReader::~vtkXMLPUnstructuredGridReader() { }





} // end namespace vtkIO
