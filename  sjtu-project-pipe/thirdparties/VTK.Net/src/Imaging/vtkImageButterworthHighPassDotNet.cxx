

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkImageButterworthHighPassDotNet.h"

// native includes
#include "strstream"
#include "vtkImageButterworthHighPass.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkImageButterworthHighPass::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkImageButterworthHighPass>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkImageButterworthHighPass::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkImageButterworthHighPass>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkImageButterworthHighPass^ vtkImageButterworthHighPass::NewInstance()
{
  ::vtkImageButterworthHighPass* retVal = static_cast<::vtkImageButterworthHighPass*>(vtk::ConvertManagedToNative<::vtkImageButterworthHighPass>(m_instance)->NewInstance());
  return gcnew vtkImageButterworthHighPass(IntPtr(retVal), false);
}



vtkImageButterworthHighPass^ vtkImageButterworthHighPass::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkImageButterworthHighPass* retVal = static_cast<::vtkImageButterworthHighPass*>(::vtkImageButterworthHighPass::SafeDownCast(oWrap));
  return gcnew vtkImageButterworthHighPass(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkImageButterworthHighPass::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkImageButterworthHighPass>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkImageButterworthHighPass::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkImageButterworthHighPass>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkImageButterworthHighPass::SetCutOff(double arg0, double arg1, double arg2)
{
  vtk::ConvertManagedToNative<::vtkImageButterworthHighPass>(m_instance)->SetCutOff(arg0, arg1, arg2);
}



void vtkImageButterworthHighPass::SetCutOff(array<double>^ a)
{
  pin_ptr<double> aPin = &a[0];
  double* nativeaPin = aPin;
  vtk::ConvertManagedToNative<::vtkImageButterworthHighPass>(m_instance)->SetCutOff(nativeaPin);
}



void vtkImageButterworthHighPass::SetCutOff(double v)
{
  vtk::ConvertManagedToNative<::vtkImageButterworthHighPass>(m_instance)->SetCutOff(v);
}



void vtkImageButterworthHighPass::SetXCutOff(double v)
{
  vtk::ConvertManagedToNative<::vtkImageButterworthHighPass>(m_instance)->SetXCutOff(v);
}



void vtkImageButterworthHighPass::SetYCutOff(double v)
{
  vtk::ConvertManagedToNative<::vtkImageButterworthHighPass>(m_instance)->SetYCutOff(v);
}



void vtkImageButterworthHighPass::SetZCutOff(double v)
{
  vtk::ConvertManagedToNative<::vtkImageButterworthHighPass>(m_instance)->SetZCutOff(v);
}



array<double>^ vtkImageButterworthHighPass::GetCutOff()
{
  const double* retVal = vtk::ConvertManagedToNative<::vtkImageButterworthHighPass>(m_instance)->GetCutOff();
  array<double>^ mRetVal = gcnew array<double>(3);
  for (size_t cprIdx=0; cprIdx<3; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



double vtkImageButterworthHighPass::GetXCutOff()
{
  double retVal = vtk::ConvertManagedToNative<::vtkImageButterworthHighPass>(m_instance)->GetXCutOff();
  return retVal;
}



double vtkImageButterworthHighPass::GetYCutOff()
{
  double retVal = vtk::ConvertManagedToNative<::vtkImageButterworthHighPass>(m_instance)->GetYCutOff();
  return retVal;
}



double vtkImageButterworthHighPass::GetZCutOff()
{
  double retVal = vtk::ConvertManagedToNative<::vtkImageButterworthHighPass>(m_instance)->GetZCutOff();
  return retVal;
}



void vtkImageButterworthHighPass::SetOrder(int arg0)
{
  vtk::ConvertManagedToNative<::vtkImageButterworthHighPass>(m_instance)->SetOrder(arg0);
}



int vtkImageButterworthHighPass::GetOrder()
{
  int retVal = vtk::ConvertManagedToNative<::vtkImageButterworthHighPass>(m_instance)->GetOrder();
  return retVal;
}



  vtkImageButterworthHighPass::vtkImageButterworthHighPass(System::IntPtr native, bool bConst) : vtkThreadedImageAlgorithm(native, bConst) {}



  vtkImageButterworthHighPass::vtkImageButterworthHighPass(bool donothing) : vtkThreadedImageAlgorithm(donothing) {}



  vtkImageButterworthHighPass::vtkImageButterworthHighPass() : vtkThreadedImageAlgorithm(false) {
  this->SetNativePointer(IntPtr(::vtkImageButterworthHighPass::New()));
}



  vtkImageButterworthHighPass::~vtkImageButterworthHighPass() { }





} // end namespace vtkImaging
