

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkImageMaskDotNet.h"

// native includes
#include "strstream"
#include "vtkImageMask.h"
#include "vtkDataObject.h"
#include "vtkImageData.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkImageMask::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkImageMask>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkImageMask::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkImageMask>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkImageMask^ vtkImageMask::NewInstance()
{
  ::vtkImageMask* retVal = static_cast<::vtkImageMask*>(vtk::ConvertManagedToNative<::vtkImageMask>(m_instance)->NewInstance());
  return gcnew vtkImageMask(IntPtr(retVal), false);
}



vtkImageMask^ vtkImageMask::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkImageMask* retVal = static_cast<::vtkImageMask*>(::vtkImageMask::SafeDownCast(oWrap));
  return gcnew vtkImageMask(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkImageMask::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkImageMask>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkImageMask::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkImageMask>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkImageMask::SetMaskedOutputValue(int num, array<double>^ v)
{
  pin_ptr<double> vPin = &v[0];
  double* nativevPin = vPin;
  vtk::ConvertManagedToNative<::vtkImageMask>(m_instance)->SetMaskedOutputValue(num, nativevPin);
}



void vtkImageMask::SetMaskedOutputValue(double v)
{
  vtk::ConvertManagedToNative<::vtkImageMask>(m_instance)->SetMaskedOutputValue(v);
}



void vtkImageMask::SetMaskedOutputValue(double v1, double v2)
{
  vtk::ConvertManagedToNative<::vtkImageMask>(m_instance)->SetMaskedOutputValue(v1, v2);
}



void vtkImageMask::SetMaskedOutputValue(double v1, double v2, double v3)
{
  vtk::ConvertManagedToNative<::vtkImageMask>(m_instance)->SetMaskedOutputValue(v1, v2, v3);
}



int vtkImageMask::GetMaskedOutputValueLength()
{
  int retVal = vtk::ConvertManagedToNative<::vtkImageMask>(m_instance)->GetMaskedOutputValueLength();
  return retVal;
}



void vtkImageMask::SetMaskAlpha(double arg0)
{
  vtk::ConvertManagedToNative<::vtkImageMask>(m_instance)->SetMaskAlpha(arg0);
}



double vtkImageMask::GetMaskAlphaMinValue()
{
  double retVal = vtk::ConvertManagedToNative<::vtkImageMask>(m_instance)->GetMaskAlphaMinValue();
  return retVal;
}



double vtkImageMask::GetMaskAlphaMaxValue()
{
  double retVal = vtk::ConvertManagedToNative<::vtkImageMask>(m_instance)->GetMaskAlphaMaxValue();
  return retVal;
}



double vtkImageMask::GetMaskAlpha()
{
  double retVal = vtk::ConvertManagedToNative<::vtkImageMask>(m_instance)->GetMaskAlpha();
  return retVal;
}



void vtkImageMask::SetImageInput(vtkImageData^ in)
{
  ::vtkImageData* inWrap = vtk::ConvertManagedToNative<::vtkImageData>(in->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkImageMask>(m_instance)->SetImageInput(inWrap);
}



void vtkImageMask::SetMaskInput(vtkImageData^ in)
{
  ::vtkImageData* inWrap = vtk::ConvertManagedToNative<::vtkImageData>(in->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkImageMask>(m_instance)->SetMaskInput(inWrap);
}



void vtkImageMask::SetNotMask(int arg0)
{
  vtk::ConvertManagedToNative<::vtkImageMask>(m_instance)->SetNotMask(arg0);
}



int vtkImageMask::GetNotMask()
{
  int retVal = vtk::ConvertManagedToNative<::vtkImageMask>(m_instance)->GetNotMask();
  return retVal;
}



void vtkImageMask::NotMaskOn()
{
  vtk::ConvertManagedToNative<::vtkImageMask>(m_instance)->NotMaskOn();
}



void vtkImageMask::NotMaskOff()
{
  vtk::ConvertManagedToNative<::vtkImageMask>(m_instance)->NotMaskOff();
}



void vtkImageMask::SetInput1(vtkDataObject^ in)
{
  ::vtkDataObject* inWrap = vtk::ConvertManagedToNative<::vtkDataObject>(in->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkImageMask>(m_instance)->SetInput1(inWrap);
}



void vtkImageMask::SetInput2(vtkDataObject^ in)
{
  ::vtkDataObject* inWrap = vtk::ConvertManagedToNative<::vtkDataObject>(in->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkImageMask>(m_instance)->SetInput2(inWrap);
}



  vtkImageMask::vtkImageMask(System::IntPtr native, bool bConst) : vtkThreadedImageAlgorithm(native, bConst) {}



  vtkImageMask::vtkImageMask(bool donothing) : vtkThreadedImageAlgorithm(donothing) {}



  vtkImageMask::vtkImageMask() : vtkThreadedImageAlgorithm(false) {
  this->SetNativePointer(IntPtr(::vtkImageMask::New()));
}



  vtkImageMask::~vtkImageMask() { }





} // end namespace vtkImaging
