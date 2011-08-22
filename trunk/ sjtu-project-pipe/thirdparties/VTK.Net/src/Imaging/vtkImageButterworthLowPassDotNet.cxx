

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkImageButterworthLowPassDotNet.h"

// native includes
#include "strstream"
#include "vtkImageButterworthLowPass.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkImageButterworthLowPass::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkImageButterworthLowPass>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkImageButterworthLowPass::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkImageButterworthLowPass>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkImageButterworthLowPass^ vtkImageButterworthLowPass::NewInstance()
{
  ::vtkImageButterworthLowPass* retVal = static_cast<::vtkImageButterworthLowPass*>(vtk::ConvertManagedToNative<::vtkImageButterworthLowPass>(m_instance)->NewInstance());
  return gcnew vtkImageButterworthLowPass(IntPtr(retVal), false);
}



vtkImageButterworthLowPass^ vtkImageButterworthLowPass::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkImageButterworthLowPass* retVal = static_cast<::vtkImageButterworthLowPass*>(::vtkImageButterworthLowPass::SafeDownCast(oWrap));
  return gcnew vtkImageButterworthLowPass(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkImageButterworthLowPass::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkImageButterworthLowPass>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkImageButterworthLowPass::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkImageButterworthLowPass>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkImageButterworthLowPass::SetCutOff(double arg0, double arg1, double arg2)
{
  vtk::ConvertManagedToNative<::vtkImageButterworthLowPass>(m_instance)->SetCutOff(arg0, arg1, arg2);
}



void vtkImageButterworthLowPass::SetCutOff(array<double>^ a)
{
  pin_ptr<double> aPin = &a[0];
  double* nativeaPin = aPin;
  vtk::ConvertManagedToNative<::vtkImageButterworthLowPass>(m_instance)->SetCutOff(nativeaPin);
}



void vtkImageButterworthLowPass::SetCutOff(double v)
{
  vtk::ConvertManagedToNative<::vtkImageButterworthLowPass>(m_instance)->SetCutOff(v);
}



void vtkImageButterworthLowPass::SetXCutOff(double v)
{
  vtk::ConvertManagedToNative<::vtkImageButterworthLowPass>(m_instance)->SetXCutOff(v);
}



void vtkImageButterworthLowPass::SetYCutOff(double v)
{
  vtk::ConvertManagedToNative<::vtkImageButterworthLowPass>(m_instance)->SetYCutOff(v);
}



void vtkImageButterworthLowPass::SetZCutOff(double v)
{
  vtk::ConvertManagedToNative<::vtkImageButterworthLowPass>(m_instance)->SetZCutOff(v);
}



array<double>^ vtkImageButterworthLowPass::GetCutOff()
{
  const double* retVal = vtk::ConvertManagedToNative<::vtkImageButterworthLowPass>(m_instance)->GetCutOff();
  array<double>^ mRetVal = gcnew array<double>(3);
  for (size_t cprIdx=0; cprIdx<3; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



double vtkImageButterworthLowPass::GetXCutOff()
{
  double retVal = vtk::ConvertManagedToNative<::vtkImageButterworthLowPass>(m_instance)->GetXCutOff();
  return retVal;
}



double vtkImageButterworthLowPass::GetYCutOff()
{
  double retVal = vtk::ConvertManagedToNative<::vtkImageButterworthLowPass>(m_instance)->GetYCutOff();
  return retVal;
}



double vtkImageButterworthLowPass::GetZCutOff()
{
  double retVal = vtk::ConvertManagedToNative<::vtkImageButterworthLowPass>(m_instance)->GetZCutOff();
  return retVal;
}



void vtkImageButterworthLowPass::SetOrder(int arg0)
{
  vtk::ConvertManagedToNative<::vtkImageButterworthLowPass>(m_instance)->SetOrder(arg0);
}



int vtkImageButterworthLowPass::GetOrder()
{
  int retVal = vtk::ConvertManagedToNative<::vtkImageButterworthLowPass>(m_instance)->GetOrder();
  return retVal;
}



  vtkImageButterworthLowPass::vtkImageButterworthLowPass(System::IntPtr native, bool bConst) : vtkThreadedImageAlgorithm(native, bConst) {}



  vtkImageButterworthLowPass::vtkImageButterworthLowPass(bool donothing) : vtkThreadedImageAlgorithm(donothing) {}



  vtkImageButterworthLowPass::vtkImageButterworthLowPass() : vtkThreadedImageAlgorithm(false) {
  this->SetNativePointer(IntPtr(::vtkImageButterworthLowPass::New()));
}



  vtkImageButterworthLowPass::~vtkImageButterworthLowPass() { }





} // end namespace vtkImaging
