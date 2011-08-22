

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkPerlinNoiseDotNet.h"

// native includes
#include "strstream"
#include "vtkPerlinNoise.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkPerlinNoise::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkPerlinNoise>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkPerlinNoise::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkPerlinNoise>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkPerlinNoise^ vtkPerlinNoise::NewInstance()
{
  ::vtkPerlinNoise* retVal = static_cast<::vtkPerlinNoise*>(vtk::ConvertManagedToNative<::vtkPerlinNoise>(m_instance)->NewInstance());
  return gcnew vtkPerlinNoise(IntPtr(retVal), false);
}



vtkPerlinNoise^ vtkPerlinNoise::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkPerlinNoise* retVal = static_cast<::vtkPerlinNoise*>(::vtkPerlinNoise::SafeDownCast(oWrap));
  return gcnew vtkPerlinNoise(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkPerlinNoise::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkPerlinNoise>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkPerlinNoise::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkPerlinNoise>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




double vtkPerlinNoise::EvaluateFunction(array<double>^ x)
{
  pin_ptr<double> xPin = &x[0];
  double* nativexPin = xPin;
  double retVal = vtk::ConvertManagedToNative<::vtkPerlinNoise>(m_instance)->EvaluateFunction(nativexPin);
  return retVal;
}



double vtkPerlinNoise::EvaluateFunction(double x, double y, double z)
{
  double retVal = vtk::ConvertManagedToNative<::vtkPerlinNoise>(m_instance)->EvaluateFunction(x, y, z);
  return retVal;
}



void vtkPerlinNoise::EvaluateGradient(array<double>^ x, array<double>^ n)
{
  pin_ptr<double> xPin = &x[0];
  double* nativexPin = xPin;
  pin_ptr<double> nPin = &n[0];
  double* nativenPin = nPin;
  vtk::ConvertManagedToNative<::vtkPerlinNoise>(m_instance)->EvaluateGradient(nativexPin, nativenPin);
}



void vtkPerlinNoise::SetFrequency(double arg0, double arg1, double arg2)
{
  vtk::ConvertManagedToNative<::vtkPerlinNoise>(m_instance)->SetFrequency(arg0, arg1, arg2);
}



void vtkPerlinNoise::SetFrequency(array<double>^ a)
{
  pin_ptr<double> aPin = &a[0];
  double* nativeaPin = aPin;
  vtk::ConvertManagedToNative<::vtkPerlinNoise>(m_instance)->SetFrequency(nativeaPin);
}



array<double>^ vtkPerlinNoise::GetFrequency()
{
  const double* retVal = vtk::ConvertManagedToNative<::vtkPerlinNoise>(m_instance)->GetFrequency();
  array<double>^ mRetVal = gcnew array<double>(3);
  for (size_t cprIdx=0; cprIdx<3; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



void vtkPerlinNoise::SetPhase(double arg0, double arg1, double arg2)
{
  vtk::ConvertManagedToNative<::vtkPerlinNoise>(m_instance)->SetPhase(arg0, arg1, arg2);
}



void vtkPerlinNoise::SetPhase(array<double>^ a)
{
  pin_ptr<double> aPin = &a[0];
  double* nativeaPin = aPin;
  vtk::ConvertManagedToNative<::vtkPerlinNoise>(m_instance)->SetPhase(nativeaPin);
}



array<double>^ vtkPerlinNoise::GetPhase()
{
  const double* retVal = vtk::ConvertManagedToNative<::vtkPerlinNoise>(m_instance)->GetPhase();
  array<double>^ mRetVal = gcnew array<double>(3);
  for (size_t cprIdx=0; cprIdx<3; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



void vtkPerlinNoise::SetAmplitude(double arg0)
{
  vtk::ConvertManagedToNative<::vtkPerlinNoise>(m_instance)->SetAmplitude(arg0);
}



double vtkPerlinNoise::GetAmplitude()
{
  double retVal = vtk::ConvertManagedToNative<::vtkPerlinNoise>(m_instance)->GetAmplitude();
  return retVal;
}



  vtkPerlinNoise::vtkPerlinNoise(System::IntPtr native, bool bConst) : vtkImplicitFunction(native, bConst) {}



  vtkPerlinNoise::vtkPerlinNoise(bool donothing) : vtkImplicitFunction(donothing) {}



  vtkPerlinNoise::vtkPerlinNoise() : vtkImplicitFunction(false) {
  this->SetNativePointer(IntPtr(::vtkPerlinNoise::New()));
}



  vtkPerlinNoise::~vtkPerlinNoise() { }





} // end namespace vtkFiltering
