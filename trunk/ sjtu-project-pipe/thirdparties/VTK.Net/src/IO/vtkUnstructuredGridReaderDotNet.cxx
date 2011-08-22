

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkUnstructuredGridReaderDotNet.h"

// native includes
#include "strstream"
#include "vtkUnstructuredGridReader.h"
#include "vtkObject.h"
#include "vtkUnstructuredGrid.h"

using namespace System;

namespace vtk {

System::String^ vtkUnstructuredGridReader::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkUnstructuredGridReader>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkUnstructuredGridReader::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkUnstructuredGridReader>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkUnstructuredGridReader^ vtkUnstructuredGridReader::NewInstance()
{
  ::vtkUnstructuredGridReader* retVal = static_cast<::vtkUnstructuredGridReader*>(vtk::ConvertManagedToNative<::vtkUnstructuredGridReader>(m_instance)->NewInstance());
  return gcnew vtkUnstructuredGridReader(IntPtr(retVal), false);
}



vtkUnstructuredGridReader^ vtkUnstructuredGridReader::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkUnstructuredGridReader* retVal = static_cast<::vtkUnstructuredGridReader*>(::vtkUnstructuredGridReader::SafeDownCast(oWrap));
  return gcnew vtkUnstructuredGridReader(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkUnstructuredGridReader::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkUnstructuredGridReader>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkUnstructuredGridReader::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkUnstructuredGridReader>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




vtkUnstructuredGrid^ vtkUnstructuredGridReader::GetOutput()
{
  ::vtkUnstructuredGrid* retVal = static_cast<::vtkUnstructuredGrid*>(vtk::ConvertManagedToNative<::vtkUnstructuredGridReader>(m_instance)->GetOutput());
  return gcnew vtkUnstructuredGrid(IntPtr(retVal), false);
}



vtkUnstructuredGrid^ vtkUnstructuredGridReader::GetOutput(int idx)
{
  ::vtkUnstructuredGrid* retVal = static_cast<::vtkUnstructuredGrid*>(vtk::ConvertManagedToNative<::vtkUnstructuredGridReader>(m_instance)->GetOutput(idx));
  return gcnew vtkUnstructuredGrid(IntPtr(retVal), false);
}



void vtkUnstructuredGridReader::SetOutput(vtkUnstructuredGrid^ output)
{
  ::vtkUnstructuredGrid* outputWrap = vtk::ConvertManagedToNative<::vtkUnstructuredGrid>(output->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkUnstructuredGridReader>(m_instance)->SetOutput(outputWrap);
}



  vtkUnstructuredGridReader::vtkUnstructuredGridReader(System::IntPtr native, bool bConst) : vtkDataReader(native, bConst) {}



  vtkUnstructuredGridReader::vtkUnstructuredGridReader(bool donothing) : vtkDataReader(donothing) {}



  vtkUnstructuredGridReader::vtkUnstructuredGridReader() : vtkDataReader(false) {
  this->SetNativePointer(IntPtr(::vtkUnstructuredGridReader::New()));
}



  vtkUnstructuredGridReader::~vtkUnstructuredGridReader() { }





} // end namespace vtkIO
