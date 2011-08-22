

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkImplicitVolumeDotNet.h"
#include "vtkImageDataDotNet.h"

// native includes
#include "strstream"
#include "vtkImplicitVolume.h"
#include "vtkImageData.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkImplicitVolume::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkImplicitVolume>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkImplicitVolume::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkImplicitVolume>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkImplicitVolume^ vtkImplicitVolume::NewInstance()
{
  ::vtkImplicitVolume* retVal = static_cast<::vtkImplicitVolume*>(vtk::ConvertManagedToNative<::vtkImplicitVolume>(m_instance)->NewInstance());
  return gcnew vtkImplicitVolume(IntPtr(retVal), false);
}



vtkImplicitVolume^ vtkImplicitVolume::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkImplicitVolume* retVal = static_cast<::vtkImplicitVolume*>(::vtkImplicitVolume::SafeDownCast(oWrap));
  return gcnew vtkImplicitVolume(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkImplicitVolume::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkImplicitVolume>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkImplicitVolume::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkImplicitVolume>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




unsigned long vtkImplicitVolume::GetMTime()
{
  unsigned long retVal = vtk::ConvertManagedToNative<::vtkImplicitVolume>(m_instance)->GetMTime();
  return retVal;
}



double vtkImplicitVolume::EvaluateFunction(array<double>^ x)
{
  pin_ptr<double> xPin = &x[0];
  double* nativexPin = xPin;
  double retVal = vtk::ConvertManagedToNative<::vtkImplicitVolume>(m_instance)->EvaluateFunction(nativexPin);
  return retVal;
}



double vtkImplicitVolume::EvaluateFunction(double x, double y, double z)
{
  double retVal = vtk::ConvertManagedToNative<::vtkImplicitVolume>(m_instance)->EvaluateFunction(x, y, z);
  return retVal;
}



void vtkImplicitVolume::EvaluateGradient(array<double>^ x, array<double>^ n)
{
  pin_ptr<double> xPin = &x[0];
  double* nativexPin = xPin;
  pin_ptr<double> nPin = &n[0];
  double* nativenPin = nPin;
  vtk::ConvertManagedToNative<::vtkImplicitVolume>(m_instance)->EvaluateGradient(nativexPin, nativenPin);
}



void vtkImplicitVolume::SetVolume(vtkImageData^ arg0)
{
  ::vtkImageData* arg0Wrap = vtk::ConvertManagedToNative<::vtkImageData>(arg0->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkImplicitVolume>(m_instance)->SetVolume(arg0Wrap);
}



vtkImageData^ vtkImplicitVolume::GetVolume()
{
  ::vtkImageData* retVal = static_cast<::vtkImageData*>(vtk::ConvertManagedToNative<::vtkImplicitVolume>(m_instance)->GetVolume());
  return gcnew vtkImageData(IntPtr(retVal), false);
}



void vtkImplicitVolume::SetOutValue(double arg0)
{
  vtk::ConvertManagedToNative<::vtkImplicitVolume>(m_instance)->SetOutValue(arg0);
}



double vtkImplicitVolume::GetOutValue()
{
  double retVal = vtk::ConvertManagedToNative<::vtkImplicitVolume>(m_instance)->GetOutValue();
  return retVal;
}



void vtkImplicitVolume::SetOutGradient(double arg0, double arg1, double arg2)
{
  vtk::ConvertManagedToNative<::vtkImplicitVolume>(m_instance)->SetOutGradient(arg0, arg1, arg2);
}



void vtkImplicitVolume::SetOutGradient(array<double>^ a)
{
  pin_ptr<double> aPin = &a[0];
  double* nativeaPin = aPin;
  vtk::ConvertManagedToNative<::vtkImplicitVolume>(m_instance)->SetOutGradient(nativeaPin);
}



array<double>^ vtkImplicitVolume::GetOutGradient()
{
  const double* retVal = vtk::ConvertManagedToNative<::vtkImplicitVolume>(m_instance)->GetOutGradient();
  array<double>^ mRetVal = gcnew array<double>(3);
  for (size_t cprIdx=0; cprIdx<3; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



  vtkImplicitVolume::vtkImplicitVolume(System::IntPtr native, bool bConst) : vtkImplicitFunction(native, bConst) {}



  vtkImplicitVolume::vtkImplicitVolume(bool donothing) : vtkImplicitFunction(donothing) {}



  vtkImplicitVolume::vtkImplicitVolume() : vtkImplicitFunction(false) {
  this->SetNativePointer(IntPtr(::vtkImplicitVolume::New()));
}



  vtkImplicitVolume::~vtkImplicitVolume() { }





} // end namespace vtkFiltering
