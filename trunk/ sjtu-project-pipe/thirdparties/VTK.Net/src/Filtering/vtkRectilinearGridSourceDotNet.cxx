

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkRectilinearGridSourceDotNet.h"
#include "vtkRectilinearGridDotNet.h"

// native includes
#include "strstream"
#include "vtkRectilinearGridSource.h"
#include "vtkRectilinearGrid.h"

using namespace System;

namespace vtk {

System::String^ vtkRectilinearGridSource::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkRectilinearGridSource>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkRectilinearGridSource::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkRectilinearGridSource>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkRectilinearGridSource^ vtkRectilinearGridSource::NewInstance()
{
  ::vtkRectilinearGridSource* retVal = static_cast<::vtkRectilinearGridSource*>(vtk::ConvertManagedToNative<::vtkRectilinearGridSource>(m_instance)->NewInstance());
  return gcnew vtkRectilinearGridSource(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkRectilinearGridSource::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkRectilinearGridSource>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkRectilinearGridSource::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkRectilinearGridSource>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




vtkRectilinearGrid^ vtkRectilinearGridSource::GetOutput()
{
  ::vtkRectilinearGrid* retVal = static_cast<::vtkRectilinearGrid*>(vtk::ConvertManagedToNative<::vtkRectilinearGridSource>(m_instance)->GetOutput());
  return gcnew vtkRectilinearGrid(IntPtr(retVal), false);
}



vtkRectilinearGrid^ vtkRectilinearGridSource::GetOutput(int idx)
{
  ::vtkRectilinearGrid* retVal = static_cast<::vtkRectilinearGrid*>(vtk::ConvertManagedToNative<::vtkRectilinearGridSource>(m_instance)->GetOutput(idx));
  return gcnew vtkRectilinearGrid(IntPtr(retVal), false);
}



void vtkRectilinearGridSource::SetOutput(vtkRectilinearGrid^ output)
{
  ::vtkRectilinearGrid* outputWrap = vtk::ConvertManagedToNative<::vtkRectilinearGrid>(output->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkRectilinearGridSource>(m_instance)->SetOutput(outputWrap);
}



  vtkRectilinearGridSource::vtkRectilinearGridSource(System::IntPtr native, bool bConst) : vtkSource(native, bConst) {}



  vtkRectilinearGridSource::vtkRectilinearGridSource(bool donothing) : vtkSource(donothing) {}



  vtkRectilinearGridSource::vtkRectilinearGridSource() : vtkSource(false) {
  this->SetNativePointer(IntPtr(::vtkRectilinearGridSource::New()));
}



  vtkRectilinearGridSource::~vtkRectilinearGridSource() { }





} // end namespace vtkFiltering
