

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkImageSourceDotNet.h"
#include "vtkImageDataDotNet.h"

// native includes
#include "strstream"
#include "vtkImageSource.h"
#include "vtkImageData.h"

using namespace System;

namespace vtk {

System::String^ vtkImageSource::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkImageSource>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkImageSource::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkImageSource>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkImageSource^ vtkImageSource::NewInstance()
{
  ::vtkImageSource* retVal = static_cast<::vtkImageSource*>(vtk::ConvertManagedToNative<::vtkImageSource>(m_instance)->NewInstance());
  return gcnew vtkImageSource(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkImageSource::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkImageSource>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkImageSource::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkImageSource>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkImageSource::SetOutput(vtkImageData^ output)
{
  ::vtkImageData* outputWrap = vtk::ConvertManagedToNative<::vtkImageData>(output->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkImageSource>(m_instance)->SetOutput(outputWrap);
}



vtkImageData^ vtkImageSource::GetOutput()
{
  ::vtkImageData* retVal = static_cast<::vtkImageData*>(vtk::ConvertManagedToNative<::vtkImageSource>(m_instance)->GetOutput());
  return gcnew vtkImageData(IntPtr(retVal), false);
}



vtkImageData^ vtkImageSource::GetOutput(int idx)
{
  ::vtkImageData* retVal = static_cast<::vtkImageData*>(vtk::ConvertManagedToNative<::vtkImageSource>(m_instance)->GetOutput(idx));
  return gcnew vtkImageData(IntPtr(retVal), false);
}



  vtkImageSource::vtkImageSource(System::IntPtr native, bool bConst) : vtkSource(native, bConst) {}



  vtkImageSource::vtkImageSource(bool donothing) : vtkSource(donothing) {}



  vtkImageSource::vtkImageSource() : vtkSource(false) {
  this->SetNativePointer(IntPtr(::vtkImageSource::New()));
}



  vtkImageSource::~vtkImageSource() { }





} // end namespace vtkFiltering
