

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkImageConvolveDotNet.h"

// native includes
#include "strstream"
#include "vtkImageConvolve.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkImageConvolve::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkImageConvolve>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkImageConvolve::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkImageConvolve>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkImageConvolve^ vtkImageConvolve::NewInstance()
{
  ::vtkImageConvolve* retVal = static_cast<::vtkImageConvolve*>(vtk::ConvertManagedToNative<::vtkImageConvolve>(m_instance)->NewInstance());
  return gcnew vtkImageConvolve(IntPtr(retVal), false);
}



vtkImageConvolve^ vtkImageConvolve::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkImageConvolve* retVal = static_cast<::vtkImageConvolve*>(::vtkImageConvolve::SafeDownCast(oWrap));
  return gcnew vtkImageConvolve(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkImageConvolve::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkImageConvolve>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkImageConvolve::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkImageConvolve>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




array<int>^ vtkImageConvolve::GetKernelSize()
{
  const int* retVal = vtk::ConvertManagedToNative<::vtkImageConvolve>(m_instance)->GetKernelSize();
  array<int>^ mRetVal = gcnew array<int>(3);
  for (size_t cprIdx=0; cprIdx<3; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



void vtkImageConvolve::SetKernel3x3(array<double>^ kernel)
{
  pin_ptr<double> kernelPin = &kernel[0];
  double* nativekernelPin = kernelPin;
  vtk::ConvertManagedToNative<::vtkImageConvolve>(m_instance)->SetKernel3x3(nativekernelPin);
}



void vtkImageConvolve::SetKernel5x5(array<double>^ kernel)
{
  pin_ptr<double> kernelPin = &kernel[0];
  double* nativekernelPin = kernelPin;
  vtk::ConvertManagedToNative<::vtkImageConvolve>(m_instance)->SetKernel5x5(nativekernelPin);
}



void vtkImageConvolve::GetKernel3x3(array<double>^ kernel)
{
  pin_ptr<double> kernelPin = &kernel[0];
  double* nativekernelPin = kernelPin;
  vtk::ConvertManagedToNative<::vtkImageConvolve>(m_instance)->GetKernel3x3(nativekernelPin);
}



void vtkImageConvolve::GetKernel5x5(array<double>^ kernel)
{
  pin_ptr<double> kernelPin = &kernel[0];
  double* nativekernelPin = kernelPin;
  vtk::ConvertManagedToNative<::vtkImageConvolve>(m_instance)->GetKernel5x5(nativekernelPin);
}



void vtkImageConvolve::SetKernel3x3x3(array<double>^ kernel)
{
  pin_ptr<double> kernelPin = &kernel[0];
  double* nativekernelPin = kernelPin;
  vtk::ConvertManagedToNative<::vtkImageConvolve>(m_instance)->SetKernel3x3x3(nativekernelPin);
}



void vtkImageConvolve::GetKernel3x3x3(array<double>^ kernel)
{
  pin_ptr<double> kernelPin = &kernel[0];
  double* nativekernelPin = kernelPin;
  vtk::ConvertManagedToNative<::vtkImageConvolve>(m_instance)->GetKernel3x3x3(nativekernelPin);
}



  vtkImageConvolve::vtkImageConvolve(System::IntPtr native, bool bConst) : vtkThreadedImageAlgorithm(native, bConst) {}



  vtkImageConvolve::vtkImageConvolve(bool donothing) : vtkThreadedImageAlgorithm(donothing) {}



  vtkImageConvolve::vtkImageConvolve() : vtkThreadedImageAlgorithm(false) {
  this->SetNativePointer(IntPtr(::vtkImageConvolve::New()));
}



  vtkImageConvolve::~vtkImageConvolve() { }





} // end namespace vtkImaging
