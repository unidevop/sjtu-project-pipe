

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkImageStencilSourceDotNet.h"
#include "vtkImageStencilDataDotNet.h"

// native includes
#include "strstream"
#include "vtkImageStencilSource.h"
#include "vtkImageStencilData.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkImageStencilSource::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkImageStencilSource>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkImageStencilSource::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkImageStencilSource>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkImageStencilSource^ vtkImageStencilSource::NewInstance()
{
  ::vtkImageStencilSource* retVal = static_cast<::vtkImageStencilSource*>(vtk::ConvertManagedToNative<::vtkImageStencilSource>(m_instance)->NewInstance());
  return gcnew vtkImageStencilSource(IntPtr(retVal), false);
}



vtkImageStencilSource^ vtkImageStencilSource::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkImageStencilSource* retVal = static_cast<::vtkImageStencilSource*>(::vtkImageStencilSource::SafeDownCast(oWrap));
  return gcnew vtkImageStencilSource(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkImageStencilSource::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkImageStencilSource>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkImageStencilSource::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkImageStencilSource>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkImageStencilSource::SetOutput(vtkImageStencilData^ output)
{
  ::vtkImageStencilData* outputWrap = vtk::ConvertManagedToNative<::vtkImageStencilData>(output->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkImageStencilSource>(m_instance)->SetOutput(outputWrap);
}



vtkImageStencilData^ vtkImageStencilSource::GetOutput()
{
  ::vtkImageStencilData* retVal = static_cast<::vtkImageStencilData*>(vtk::ConvertManagedToNative<::vtkImageStencilSource>(m_instance)->GetOutput());
  return gcnew vtkImageStencilData(IntPtr(retVal), false);
}



  vtkImageStencilSource::vtkImageStencilSource(System::IntPtr native, bool bConst) : vtkAlgorithm(native, bConst) {}



  vtkImageStencilSource::vtkImageStencilSource(bool donothing) : vtkAlgorithm(donothing) {}



  vtkImageStencilSource::vtkImageStencilSource() : vtkAlgorithm(false) {
  this->SetNativePointer(IntPtr(::vtkImageStencilSource::New()));
}



  vtkImageStencilSource::~vtkImageStencilSource() { }





} // end namespace vtkImaging
