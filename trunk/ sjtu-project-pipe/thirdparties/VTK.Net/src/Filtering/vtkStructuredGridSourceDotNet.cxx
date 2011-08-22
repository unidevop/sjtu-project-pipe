

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkStructuredGridSourceDotNet.h"
#include "vtkStructuredGridDotNet.h"

// native includes
#include "strstream"
#include "vtkStructuredGridSource.h"
#include "vtkStructuredGrid.h"

using namespace System;

namespace vtk {

System::String^ vtkStructuredGridSource::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkStructuredGridSource>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkStructuredGridSource::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkStructuredGridSource>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkStructuredGridSource^ vtkStructuredGridSource::NewInstance()
{
  ::vtkStructuredGridSource* retVal = static_cast<::vtkStructuredGridSource*>(vtk::ConvertManagedToNative<::vtkStructuredGridSource>(m_instance)->NewInstance());
  return gcnew vtkStructuredGridSource(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkStructuredGridSource::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkStructuredGridSource>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkStructuredGridSource::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkStructuredGridSource>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




vtkStructuredGrid^ vtkStructuredGridSource::GetOutput()
{
  ::vtkStructuredGrid* retVal = static_cast<::vtkStructuredGrid*>(vtk::ConvertManagedToNative<::vtkStructuredGridSource>(m_instance)->GetOutput());
  return gcnew vtkStructuredGrid(IntPtr(retVal), false);
}



vtkStructuredGrid^ vtkStructuredGridSource::GetOutput(int idx)
{
  ::vtkStructuredGrid* retVal = static_cast<::vtkStructuredGrid*>(vtk::ConvertManagedToNative<::vtkStructuredGridSource>(m_instance)->GetOutput(idx));
  return gcnew vtkStructuredGrid(IntPtr(retVal), false);
}



void vtkStructuredGridSource::SetOutput(vtkStructuredGrid^ output)
{
  ::vtkStructuredGrid* outputWrap = vtk::ConvertManagedToNative<::vtkStructuredGrid>(output->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkStructuredGridSource>(m_instance)->SetOutput(outputWrap);
}



  vtkStructuredGridSource::vtkStructuredGridSource(System::IntPtr native, bool bConst) : vtkSource(native, bConst) {}



  vtkStructuredGridSource::vtkStructuredGridSource(bool donothing) : vtkSource(donothing) {}



  vtkStructuredGridSource::vtkStructuredGridSource() : vtkSource(false) {
  this->SetNativePointer(IntPtr(::vtkStructuredGridSource::New()));
}



  vtkStructuredGridSource::~vtkStructuredGridSource() { }





} // end namespace vtkFiltering
