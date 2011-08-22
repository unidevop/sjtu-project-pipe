

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkUnstructuredGridSourceDotNet.h"
#include "vtkUnstructuredGridDotNet.h"

// native includes
#include "strstream"
#include "vtkUnstructuredGridSource.h"
#include "vtkUnstructuredGrid.h"

using namespace System;

namespace vtk {

System::String^ vtkUnstructuredGridSource::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkUnstructuredGridSource>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkUnstructuredGridSource::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkUnstructuredGridSource>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkUnstructuredGridSource^ vtkUnstructuredGridSource::NewInstance()
{
  ::vtkUnstructuredGridSource* retVal = static_cast<::vtkUnstructuredGridSource*>(vtk::ConvertManagedToNative<::vtkUnstructuredGridSource>(m_instance)->NewInstance());
  return gcnew vtkUnstructuredGridSource(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkUnstructuredGridSource::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkUnstructuredGridSource>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkUnstructuredGridSource::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkUnstructuredGridSource>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




vtkUnstructuredGrid^ vtkUnstructuredGridSource::GetOutput()
{
  ::vtkUnstructuredGrid* retVal = static_cast<::vtkUnstructuredGrid*>(vtk::ConvertManagedToNative<::vtkUnstructuredGridSource>(m_instance)->GetOutput());
  return gcnew vtkUnstructuredGrid(IntPtr(retVal), false);
}



vtkUnstructuredGrid^ vtkUnstructuredGridSource::GetOutput(int idx)
{
  ::vtkUnstructuredGrid* retVal = static_cast<::vtkUnstructuredGrid*>(vtk::ConvertManagedToNative<::vtkUnstructuredGridSource>(m_instance)->GetOutput(idx));
  return gcnew vtkUnstructuredGrid(IntPtr(retVal), false);
}



void vtkUnstructuredGridSource::SetOutput(vtkUnstructuredGrid^ output)
{
  ::vtkUnstructuredGrid* outputWrap = vtk::ConvertManagedToNative<::vtkUnstructuredGrid>(output->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkUnstructuredGridSource>(m_instance)->SetOutput(outputWrap);
}



  vtkUnstructuredGridSource::vtkUnstructuredGridSource(System::IntPtr native, bool bConst) : vtkSource(native, bConst) {}



  vtkUnstructuredGridSource::vtkUnstructuredGridSource(bool donothing) : vtkSource(donothing) {}



  vtkUnstructuredGridSource::vtkUnstructuredGridSource() : vtkSource(false) {
  this->SetNativePointer(IntPtr(::vtkUnstructuredGridSource::New()));
}



  vtkUnstructuredGridSource::~vtkUnstructuredGridSource() { }





} // end namespace vtkFiltering
