

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkStructuredPointsSourceDotNet.h"
#include "vtkStructuredPointsDotNet.h"

// native includes
#include "strstream"
#include "vtkStructuredPointsSource.h"
#include "vtkStructuredPoints.h"

using namespace System;

namespace vtk {

System::String^ vtkStructuredPointsSource::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkStructuredPointsSource>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkStructuredPointsSource::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkStructuredPointsSource>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkStructuredPointsSource^ vtkStructuredPointsSource::NewInstance()
{
  ::vtkStructuredPointsSource* retVal = static_cast<::vtkStructuredPointsSource*>(vtk::ConvertManagedToNative<::vtkStructuredPointsSource>(m_instance)->NewInstance());
  return gcnew vtkStructuredPointsSource(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkStructuredPointsSource::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkStructuredPointsSource>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkStructuredPointsSource::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkStructuredPointsSource>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkStructuredPointsSource::SetOutput(vtkStructuredPoints^ output)
{
  ::vtkStructuredPoints* outputWrap = vtk::ConvertManagedToNative<::vtkStructuredPoints>(output->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkStructuredPointsSource>(m_instance)->SetOutput(outputWrap);
}



vtkStructuredPoints^ vtkStructuredPointsSource::GetOutput()
{
  ::vtkStructuredPoints* retVal = static_cast<::vtkStructuredPoints*>(vtk::ConvertManagedToNative<::vtkStructuredPointsSource>(m_instance)->GetOutput());
  return gcnew vtkStructuredPoints(IntPtr(retVal), false);
}



vtkStructuredPoints^ vtkStructuredPointsSource::GetOutput(int idx)
{
  ::vtkStructuredPoints* retVal = static_cast<::vtkStructuredPoints*>(vtk::ConvertManagedToNative<::vtkStructuredPointsSource>(m_instance)->GetOutput(idx));
  return gcnew vtkStructuredPoints(IntPtr(retVal), false);
}



  vtkStructuredPointsSource::vtkStructuredPointsSource(System::IntPtr native, bool bConst) : vtkSource(native, bConst) {}



  vtkStructuredPointsSource::vtkStructuredPointsSource(bool donothing) : vtkSource(donothing) {}



  vtkStructuredPointsSource::vtkStructuredPointsSource() : vtkSource(false) {
  this->SetNativePointer(IntPtr(::vtkStructuredPointsSource::New()));
}



  vtkStructuredPointsSource::~vtkStructuredPointsSource() { }





} // end namespace vtkFiltering
