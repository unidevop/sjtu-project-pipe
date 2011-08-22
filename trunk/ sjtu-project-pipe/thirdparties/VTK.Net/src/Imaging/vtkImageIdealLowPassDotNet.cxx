

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkImageIdealLowPassDotNet.h"

// native includes
#include "strstream"
#include "vtkImageIdealLowPass.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkImageIdealLowPass::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkImageIdealLowPass>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkImageIdealLowPass::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkImageIdealLowPass>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkImageIdealLowPass^ vtkImageIdealLowPass::NewInstance()
{
  ::vtkImageIdealLowPass* retVal = static_cast<::vtkImageIdealLowPass*>(vtk::ConvertManagedToNative<::vtkImageIdealLowPass>(m_instance)->NewInstance());
  return gcnew vtkImageIdealLowPass(IntPtr(retVal), false);
}



vtkImageIdealLowPass^ vtkImageIdealLowPass::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkImageIdealLowPass* retVal = static_cast<::vtkImageIdealLowPass*>(::vtkImageIdealLowPass::SafeDownCast(oWrap));
  return gcnew vtkImageIdealLowPass(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkImageIdealLowPass::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkImageIdealLowPass>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkImageIdealLowPass::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkImageIdealLowPass>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkImageIdealLowPass::SetCutOff(double arg0, double arg1, double arg2)
{
  vtk::ConvertManagedToNative<::vtkImageIdealLowPass>(m_instance)->SetCutOff(arg0, arg1, arg2);
}



void vtkImageIdealLowPass::SetCutOff(array<double>^ a)
{
  pin_ptr<double> aPin = &a[0];
  double* nativeaPin = aPin;
  vtk::ConvertManagedToNative<::vtkImageIdealLowPass>(m_instance)->SetCutOff(nativeaPin);
}



void vtkImageIdealLowPass::SetCutOff(double v)
{
  vtk::ConvertManagedToNative<::vtkImageIdealLowPass>(m_instance)->SetCutOff(v);
}



void vtkImageIdealLowPass::SetXCutOff(double v)
{
  vtk::ConvertManagedToNative<::vtkImageIdealLowPass>(m_instance)->SetXCutOff(v);
}



void vtkImageIdealLowPass::SetYCutOff(double v)
{
  vtk::ConvertManagedToNative<::vtkImageIdealLowPass>(m_instance)->SetYCutOff(v);
}



void vtkImageIdealLowPass::SetZCutOff(double v)
{
  vtk::ConvertManagedToNative<::vtkImageIdealLowPass>(m_instance)->SetZCutOff(v);
}



array<double>^ vtkImageIdealLowPass::GetCutOff()
{
  const double* retVal = vtk::ConvertManagedToNative<::vtkImageIdealLowPass>(m_instance)->GetCutOff();
  array<double>^ mRetVal = gcnew array<double>(3);
  for (size_t cprIdx=0; cprIdx<3; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



double vtkImageIdealLowPass::GetXCutOff()
{
  double retVal = vtk::ConvertManagedToNative<::vtkImageIdealLowPass>(m_instance)->GetXCutOff();
  return retVal;
}



double vtkImageIdealLowPass::GetYCutOff()
{
  double retVal = vtk::ConvertManagedToNative<::vtkImageIdealLowPass>(m_instance)->GetYCutOff();
  return retVal;
}



double vtkImageIdealLowPass::GetZCutOff()
{
  double retVal = vtk::ConvertManagedToNative<::vtkImageIdealLowPass>(m_instance)->GetZCutOff();
  return retVal;
}



  vtkImageIdealLowPass::vtkImageIdealLowPass(System::IntPtr native, bool bConst) : vtkThreadedImageAlgorithm(native, bConst) {}



  vtkImageIdealLowPass::vtkImageIdealLowPass(bool donothing) : vtkThreadedImageAlgorithm(donothing) {}



  vtkImageIdealLowPass::vtkImageIdealLowPass() : vtkThreadedImageAlgorithm(false) {
  this->SetNativePointer(IntPtr(::vtkImageIdealLowPass::New()));
}



  vtkImageIdealLowPass::~vtkImageIdealLowPass() { }





} // end namespace vtkImaging
