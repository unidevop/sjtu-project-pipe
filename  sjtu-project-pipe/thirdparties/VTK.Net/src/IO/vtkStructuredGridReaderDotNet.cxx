

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkStructuredGridReaderDotNet.h"

// native includes
#include "strstream"
#include "vtkStructuredGridReader.h"
#include "vtkInformation.h"
#include "vtkObject.h"
#include "vtkStructuredGrid.h"

using namespace System;

namespace vtk {

System::String^ vtkStructuredGridReader::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkStructuredGridReader>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkStructuredGridReader::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkStructuredGridReader>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkStructuredGridReader^ vtkStructuredGridReader::NewInstance()
{
  ::vtkStructuredGridReader* retVal = static_cast<::vtkStructuredGridReader*>(vtk::ConvertManagedToNative<::vtkStructuredGridReader>(m_instance)->NewInstance());
  return gcnew vtkStructuredGridReader(IntPtr(retVal), false);
}



vtkStructuredGridReader^ vtkStructuredGridReader::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkStructuredGridReader* retVal = static_cast<::vtkStructuredGridReader*>(::vtkStructuredGridReader::SafeDownCast(oWrap));
  return gcnew vtkStructuredGridReader(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkStructuredGridReader::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkStructuredGridReader>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkStructuredGridReader::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkStructuredGridReader>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




vtkStructuredGrid^ vtkStructuredGridReader::GetOutput()
{
  ::vtkStructuredGrid* retVal = static_cast<::vtkStructuredGrid*>(vtk::ConvertManagedToNative<::vtkStructuredGridReader>(m_instance)->GetOutput());
  return gcnew vtkStructuredGrid(IntPtr(retVal), false);
}



vtkStructuredGrid^ vtkStructuredGridReader::GetOutput(int idx)
{
  ::vtkStructuredGrid* retVal = static_cast<::vtkStructuredGrid*>(vtk::ConvertManagedToNative<::vtkStructuredGridReader>(m_instance)->GetOutput(idx));
  return gcnew vtkStructuredGrid(IntPtr(retVal), false);
}



void vtkStructuredGridReader::SetOutput(vtkStructuredGrid^ output)
{
  ::vtkStructuredGrid* outputWrap = vtk::ConvertManagedToNative<::vtkStructuredGrid>(output->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkStructuredGridReader>(m_instance)->SetOutput(outputWrap);
}



int vtkStructuredGridReader::ReadMetaData(vtkInformation^ outInfo)
{
  ::vtkInformation* outInfoWrap = vtk::ConvertManagedToNative<::vtkInformation>(outInfo->GetNativePointer());
  int retVal = vtk::ConvertManagedToNative<::vtkStructuredGridReader>(m_instance)->ReadMetaData(outInfoWrap);
  return retVal;
}



  vtkStructuredGridReader::vtkStructuredGridReader(System::IntPtr native, bool bConst) : vtkDataReader(native, bConst) {}



  vtkStructuredGridReader::vtkStructuredGridReader(bool donothing) : vtkDataReader(donothing) {}



  vtkStructuredGridReader::vtkStructuredGridReader() : vtkDataReader(false) {
  this->SetNativePointer(IntPtr(::vtkStructuredGridReader::New()));
}



  vtkStructuredGridReader::~vtkStructuredGridReader() { }





} // end namespace vtkIO
