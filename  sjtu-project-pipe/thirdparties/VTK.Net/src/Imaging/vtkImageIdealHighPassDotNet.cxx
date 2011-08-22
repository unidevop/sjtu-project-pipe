

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkImageIdealHighPassDotNet.h"

// native includes
#include "strstream"
#include "vtkImageIdealHighPass.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkImageIdealHighPass::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkImageIdealHighPass>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkImageIdealHighPass::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkImageIdealHighPass>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkImageIdealHighPass^ vtkImageIdealHighPass::NewInstance()
{
  ::vtkImageIdealHighPass* retVal = static_cast<::vtkImageIdealHighPass*>(vtk::ConvertManagedToNative<::vtkImageIdealHighPass>(m_instance)->NewInstance());
  return gcnew vtkImageIdealHighPass(IntPtr(retVal), false);
}



vtkImageIdealHighPass^ vtkImageIdealHighPass::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkImageIdealHighPass* retVal = static_cast<::vtkImageIdealHighPass*>(::vtkImageIdealHighPass::SafeDownCast(oWrap));
  return gcnew vtkImageIdealHighPass(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkImageIdealHighPass::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkImageIdealHighPass>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkImageIdealHighPass::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkImageIdealHighPass>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkImageIdealHighPass::SetCutOff(double arg0, double arg1, double arg2)
{
  vtk::ConvertManagedToNative<::vtkImageIdealHighPass>(m_instance)->SetCutOff(arg0, arg1, arg2);
}



void vtkImageIdealHighPass::SetCutOff(array<double>^ a)
{
  pin_ptr<double> aPin = &a[0];
  double* nativeaPin = aPin;
  vtk::ConvertManagedToNative<::vtkImageIdealHighPass>(m_instance)->SetCutOff(nativeaPin);
}



void vtkImageIdealHighPass::SetCutOff(double v)
{
  vtk::ConvertManagedToNative<::vtkImageIdealHighPass>(m_instance)->SetCutOff(v);
}



void vtkImageIdealHighPass::SetXCutOff(double v)
{
  vtk::ConvertManagedToNative<::vtkImageIdealHighPass>(m_instance)->SetXCutOff(v);
}



void vtkImageIdealHighPass::SetYCutOff(double v)
{
  vtk::ConvertManagedToNative<::vtkImageIdealHighPass>(m_instance)->SetYCutOff(v);
}



void vtkImageIdealHighPass::SetZCutOff(double v)
{
  vtk::ConvertManagedToNative<::vtkImageIdealHighPass>(m_instance)->SetZCutOff(v);
}



array<double>^ vtkImageIdealHighPass::GetCutOff()
{
  const double* retVal = vtk::ConvertManagedToNative<::vtkImageIdealHighPass>(m_instance)->GetCutOff();
  array<double>^ mRetVal = gcnew array<double>(3);
  for (size_t cprIdx=0; cprIdx<3; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



double vtkImageIdealHighPass::GetXCutOff()
{
  double retVal = vtk::ConvertManagedToNative<::vtkImageIdealHighPass>(m_instance)->GetXCutOff();
  return retVal;
}



double vtkImageIdealHighPass::GetYCutOff()
{
  double retVal = vtk::ConvertManagedToNative<::vtkImageIdealHighPass>(m_instance)->GetYCutOff();
  return retVal;
}



double vtkImageIdealHighPass::GetZCutOff()
{
  double retVal = vtk::ConvertManagedToNative<::vtkImageIdealHighPass>(m_instance)->GetZCutOff();
  return retVal;
}



  vtkImageIdealHighPass::vtkImageIdealHighPass(System::IntPtr native, bool bConst) : vtkThreadedImageAlgorithm(native, bConst) {}



  vtkImageIdealHighPass::vtkImageIdealHighPass(bool donothing) : vtkThreadedImageAlgorithm(donothing) {}



  vtkImageIdealHighPass::vtkImageIdealHighPass() : vtkThreadedImageAlgorithm(false) {
  this->SetNativePointer(IntPtr(::vtkImageIdealHighPass::New()));
}



  vtkImageIdealHighPass::~vtkImageIdealHighPass() { }





} // end namespace vtkImaging
