

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkImageToImageStencilDotNet.h"

// native includes
#include "strstream"
#include "vtkImageToImageStencil.h"
#include "vtkImageData.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkImageToImageStencil::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkImageToImageStencil>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkImageToImageStencil::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkImageToImageStencil>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkImageToImageStencil^ vtkImageToImageStencil::NewInstance()
{
  ::vtkImageToImageStencil* retVal = static_cast<::vtkImageToImageStencil*>(vtk::ConvertManagedToNative<::vtkImageToImageStencil>(m_instance)->NewInstance());
  return gcnew vtkImageToImageStencil(IntPtr(retVal), false);
}



vtkImageToImageStencil^ vtkImageToImageStencil::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkImageToImageStencil* retVal = static_cast<::vtkImageToImageStencil*>(::vtkImageToImageStencil::SafeDownCast(oWrap));
  return gcnew vtkImageToImageStencil(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkImageToImageStencil::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkImageToImageStencil>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkImageToImageStencil::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkImageToImageStencil>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkImageToImageStencil::SetInput(vtkImageData^ input)
{
  ::vtkImageData* inputWrap = vtk::ConvertManagedToNative<::vtkImageData>(input->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkImageToImageStencil>(m_instance)->SetInput(inputWrap);
}



vtkImageData^ vtkImageToImageStencil::GetInput()
{
  ::vtkImageData* retVal = static_cast<::vtkImageData*>(vtk::ConvertManagedToNative<::vtkImageToImageStencil>(m_instance)->GetInput());
  return gcnew vtkImageData(IntPtr(retVal), false);
}



void vtkImageToImageStencil::ThresholdByUpper(double thresh)
{
  vtk::ConvertManagedToNative<::vtkImageToImageStencil>(m_instance)->ThresholdByUpper(thresh);
}



void vtkImageToImageStencil::ThresholdByLower(double thresh)
{
  vtk::ConvertManagedToNative<::vtkImageToImageStencil>(m_instance)->ThresholdByLower(thresh);
}



void vtkImageToImageStencil::ThresholdBetween(double lower, double upper)
{
  vtk::ConvertManagedToNative<::vtkImageToImageStencil>(m_instance)->ThresholdBetween(lower, upper);
}



void vtkImageToImageStencil::SetUpperThreshold(double arg0)
{
  vtk::ConvertManagedToNative<::vtkImageToImageStencil>(m_instance)->SetUpperThreshold(arg0);
}



double vtkImageToImageStencil::GetUpperThreshold()
{
  double retVal = vtk::ConvertManagedToNative<::vtkImageToImageStencil>(m_instance)->GetUpperThreshold();
  return retVal;
}



void vtkImageToImageStencil::SetLowerThreshold(double arg0)
{
  vtk::ConvertManagedToNative<::vtkImageToImageStencil>(m_instance)->SetLowerThreshold(arg0);
}



double vtkImageToImageStencil::GetLowerThreshold()
{
  double retVal = vtk::ConvertManagedToNative<::vtkImageToImageStencil>(m_instance)->GetLowerThreshold();
  return retVal;
}



  vtkImageToImageStencil::vtkImageToImageStencil(System::IntPtr native, bool bConst) : vtkImageStencilSource(native, bConst) {}



  vtkImageToImageStencil::vtkImageToImageStencil(bool donothing) : vtkImageStencilSource(donothing) {}



  vtkImageToImageStencil::vtkImageToImageStencil() : vtkImageStencilSource(false) {
  this->SetNativePointer(IntPtr(::vtkImageToImageStencil::New()));
}



  vtkImageToImageStencil::~vtkImageToImageStencil() { }





} // end namespace vtkImaging
