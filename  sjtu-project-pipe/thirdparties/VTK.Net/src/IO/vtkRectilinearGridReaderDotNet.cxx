

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkRectilinearGridReaderDotNet.h"

// native includes
#include "strstream"
#include "vtkRectilinearGridReader.h"
#include "vtkInformation.h"
#include "vtkObject.h"
#include "vtkRectilinearGrid.h"

using namespace System;

namespace vtk {

System::String^ vtkRectilinearGridReader::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkRectilinearGridReader>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkRectilinearGridReader::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkRectilinearGridReader>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkRectilinearGridReader^ vtkRectilinearGridReader::NewInstance()
{
  ::vtkRectilinearGridReader* retVal = static_cast<::vtkRectilinearGridReader*>(vtk::ConvertManagedToNative<::vtkRectilinearGridReader>(m_instance)->NewInstance());
  return gcnew vtkRectilinearGridReader(IntPtr(retVal), false);
}



vtkRectilinearGridReader^ vtkRectilinearGridReader::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkRectilinearGridReader* retVal = static_cast<::vtkRectilinearGridReader*>(::vtkRectilinearGridReader::SafeDownCast(oWrap));
  return gcnew vtkRectilinearGridReader(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkRectilinearGridReader::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkRectilinearGridReader>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkRectilinearGridReader::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkRectilinearGridReader>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




vtkRectilinearGrid^ vtkRectilinearGridReader::GetOutput()
{
  ::vtkRectilinearGrid* retVal = static_cast<::vtkRectilinearGrid*>(vtk::ConvertManagedToNative<::vtkRectilinearGridReader>(m_instance)->GetOutput());
  return gcnew vtkRectilinearGrid(IntPtr(retVal), false);
}



vtkRectilinearGrid^ vtkRectilinearGridReader::GetOutput(int idx)
{
  ::vtkRectilinearGrid* retVal = static_cast<::vtkRectilinearGrid*>(vtk::ConvertManagedToNative<::vtkRectilinearGridReader>(m_instance)->GetOutput(idx));
  return gcnew vtkRectilinearGrid(IntPtr(retVal), false);
}



void vtkRectilinearGridReader::SetOutput(vtkRectilinearGrid^ output)
{
  ::vtkRectilinearGrid* outputWrap = vtk::ConvertManagedToNative<::vtkRectilinearGrid>(output->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkRectilinearGridReader>(m_instance)->SetOutput(outputWrap);
}



int vtkRectilinearGridReader::ReadMetaData(vtkInformation^ outInfo)
{
  ::vtkInformation* outInfoWrap = vtk::ConvertManagedToNative<::vtkInformation>(outInfo->GetNativePointer());
  int retVal = vtk::ConvertManagedToNative<::vtkRectilinearGridReader>(m_instance)->ReadMetaData(outInfoWrap);
  return retVal;
}



  vtkRectilinearGridReader::vtkRectilinearGridReader(System::IntPtr native, bool bConst) : vtkDataReader(native, bConst) {}



  vtkRectilinearGridReader::vtkRectilinearGridReader(bool donothing) : vtkDataReader(donothing) {}



  vtkRectilinearGridReader::vtkRectilinearGridReader() : vtkDataReader(false) {
  this->SetNativePointer(IntPtr(::vtkRectilinearGridReader::New()));
}



  vtkRectilinearGridReader::~vtkRectilinearGridReader() { }





} // end namespace vtkIO
