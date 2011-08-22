

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkPolyDataSourceDotNet.h"
#include "vtkPolyDataDotNet.h"

// native includes
#include "strstream"
#include "vtkPolyDataSource.h"
#include "vtkPolyData.h"

using namespace System;

namespace vtk {

System::String^ vtkPolyDataSource::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkPolyDataSource>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkPolyDataSource::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkPolyDataSource>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkPolyDataSource^ vtkPolyDataSource::NewInstance()
{
  ::vtkPolyDataSource* retVal = static_cast<::vtkPolyDataSource*>(vtk::ConvertManagedToNative<::vtkPolyDataSource>(m_instance)->NewInstance());
  return gcnew vtkPolyDataSource(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkPolyDataSource::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkPolyDataSource>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkPolyDataSource::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkPolyDataSource>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




vtkPolyData^ vtkPolyDataSource::GetOutput()
{
  ::vtkPolyData* retVal = static_cast<::vtkPolyData*>(vtk::ConvertManagedToNative<::vtkPolyDataSource>(m_instance)->GetOutput());
  return gcnew vtkPolyData(IntPtr(retVal), false);
}



vtkPolyData^ vtkPolyDataSource::GetOutput(int idx)
{
  ::vtkPolyData* retVal = static_cast<::vtkPolyData*>(vtk::ConvertManagedToNative<::vtkPolyDataSource>(m_instance)->GetOutput(idx));
  return gcnew vtkPolyData(IntPtr(retVal), false);
}



void vtkPolyDataSource::SetOutput(vtkPolyData^ output)
{
  ::vtkPolyData* outputWrap = vtk::ConvertManagedToNative<::vtkPolyData>(output->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkPolyDataSource>(m_instance)->SetOutput(outputWrap);
}



  vtkPolyDataSource::vtkPolyDataSource(System::IntPtr native, bool bConst) : vtkSource(native, bConst) {}



  vtkPolyDataSource::vtkPolyDataSource(bool donothing) : vtkSource(donothing) {}



  vtkPolyDataSource::vtkPolyDataSource() : vtkSource(false) {
  this->SetNativePointer(IntPtr(::vtkPolyDataSource::New()));
}



  vtkPolyDataSource::~vtkPolyDataSource() { }





} // end namespace vtkFiltering
