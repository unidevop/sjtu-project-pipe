

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkImageSeparableConvolutionDotNet.h"

// native includes
#include "strstream"
#include "vtkImageSeparableConvolution.h"
#include "vtkFloatArray.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkImageSeparableConvolution::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkImageSeparableConvolution>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkImageSeparableConvolution::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkImageSeparableConvolution>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkImageSeparableConvolution^ vtkImageSeparableConvolution::NewInstance()
{
  ::vtkImageSeparableConvolution* retVal = static_cast<::vtkImageSeparableConvolution*>(vtk::ConvertManagedToNative<::vtkImageSeparableConvolution>(m_instance)->NewInstance());
  return gcnew vtkImageSeparableConvolution(IntPtr(retVal), false);
}



vtkImageSeparableConvolution^ vtkImageSeparableConvolution::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkImageSeparableConvolution* retVal = static_cast<::vtkImageSeparableConvolution*>(::vtkImageSeparableConvolution::SafeDownCast(oWrap));
  return gcnew vtkImageSeparableConvolution(IntPtr(retVal), false);
}



void vtkImageSeparableConvolution::SetXKernel(vtkFloatArray^ arg0)
{
  ::vtkFloatArray* arg0Wrap = vtk::ConvertManagedToNative<::vtkFloatArray>(arg0->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkImageSeparableConvolution>(m_instance)->SetXKernel(arg0Wrap);
}



vtkFloatArray^ vtkImageSeparableConvolution::GetXKernel()
{
  ::vtkFloatArray* retVal = static_cast<::vtkFloatArray*>(vtk::ConvertManagedToNative<::vtkImageSeparableConvolution>(m_instance)->GetXKernel());
  return gcnew vtkFloatArray(IntPtr(retVal), false);
}



void vtkImageSeparableConvolution::SetYKernel(vtkFloatArray^ arg0)
{
  ::vtkFloatArray* arg0Wrap = vtk::ConvertManagedToNative<::vtkFloatArray>(arg0->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkImageSeparableConvolution>(m_instance)->SetYKernel(arg0Wrap);
}



vtkFloatArray^ vtkImageSeparableConvolution::GetYKernel()
{
  ::vtkFloatArray* retVal = static_cast<::vtkFloatArray*>(vtk::ConvertManagedToNative<::vtkImageSeparableConvolution>(m_instance)->GetYKernel());
  return gcnew vtkFloatArray(IntPtr(retVal), false);
}



void vtkImageSeparableConvolution::SetZKernel(vtkFloatArray^ arg0)
{
  ::vtkFloatArray* arg0Wrap = vtk::ConvertManagedToNative<::vtkFloatArray>(arg0->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkImageSeparableConvolution>(m_instance)->SetZKernel(arg0Wrap);
}



vtkFloatArray^ vtkImageSeparableConvolution::GetZKernel()
{
  ::vtkFloatArray* retVal = static_cast<::vtkFloatArray*>(vtk::ConvertManagedToNative<::vtkImageSeparableConvolution>(m_instance)->GetZKernel());
  return gcnew vtkFloatArray(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkImageSeparableConvolution::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkImageSeparableConvolution>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkImageSeparableConvolution::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkImageSeparableConvolution>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




unsigned long vtkImageSeparableConvolution::GetMTime()
{
  unsigned long retVal = vtk::ConvertManagedToNative<::vtkImageSeparableConvolution>(m_instance)->GetMTime();
  return retVal;
}



  vtkImageSeparableConvolution::vtkImageSeparableConvolution(System::IntPtr native, bool bConst) : vtkImageDecomposeFilter(native, bConst) {}



  vtkImageSeparableConvolution::vtkImageSeparableConvolution(bool donothing) : vtkImageDecomposeFilter(donothing) {}



  vtkImageSeparableConvolution::vtkImageSeparableConvolution() : vtkImageDecomposeFilter(false) {
  this->SetNativePointer(IntPtr(::vtkImageSeparableConvolution::New()));
}



  vtkImageSeparableConvolution::~vtkImageSeparableConvolution() { }





} // end namespace vtkImaging
