

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkParametricRandomHillsDotNet.h"
#include "vtkObjectDotNet.h"

// native includes
#include "strstream"
#include "vtkParametricRandomHills.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkParametricRandomHills::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkParametricRandomHills>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkParametricRandomHills::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkParametricRandomHills>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkParametricRandomHills^ vtkParametricRandomHills::NewInstance()
{
  ::vtkParametricRandomHills* retVal = static_cast<::vtkParametricRandomHills*>(vtk::ConvertManagedToNative<::vtkParametricRandomHills>(m_instance)->NewInstance());
  return gcnew vtkParametricRandomHills(IntPtr(retVal), false);
}



vtkParametricRandomHills^ vtkParametricRandomHills::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkParametricRandomHills* retVal = static_cast<::vtkParametricRandomHills*>(::vtkParametricRandomHills::SafeDownCast(oWrap));
  return gcnew vtkParametricRandomHills(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkParametricRandomHills::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkParametricRandomHills>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkParametricRandomHills::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkParametricRandomHills>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




int vtkParametricRandomHills::GetDimension()
{
  int retVal = vtk::ConvertManagedToNative<::vtkParametricRandomHills>(m_instance)->GetDimension();
  return retVal;
}



void vtkParametricRandomHills::SetNumberOfHills(int arg0)
{
  vtk::ConvertManagedToNative<::vtkParametricRandomHills>(m_instance)->SetNumberOfHills(arg0);
}



int vtkParametricRandomHills::GetNumberOfHills()
{
  int retVal = vtk::ConvertManagedToNative<::vtkParametricRandomHills>(m_instance)->GetNumberOfHills();
  return retVal;
}



void vtkParametricRandomHills::SetHillXVariance(double arg0)
{
  vtk::ConvertManagedToNative<::vtkParametricRandomHills>(m_instance)->SetHillXVariance(arg0);
}



double vtkParametricRandomHills::GetHillXVariance()
{
  double retVal = vtk::ConvertManagedToNative<::vtkParametricRandomHills>(m_instance)->GetHillXVariance();
  return retVal;
}



void vtkParametricRandomHills::SetHillYVariance(double arg0)
{
  vtk::ConvertManagedToNative<::vtkParametricRandomHills>(m_instance)->SetHillYVariance(arg0);
}



double vtkParametricRandomHills::GetHillYVariance()
{
  double retVal = vtk::ConvertManagedToNative<::vtkParametricRandomHills>(m_instance)->GetHillYVariance();
  return retVal;
}



void vtkParametricRandomHills::SetHillAmplitude(double arg0)
{
  vtk::ConvertManagedToNative<::vtkParametricRandomHills>(m_instance)->SetHillAmplitude(arg0);
}



double vtkParametricRandomHills::GetHillAmplitude()
{
  double retVal = vtk::ConvertManagedToNative<::vtkParametricRandomHills>(m_instance)->GetHillAmplitude();
  return retVal;
}



void vtkParametricRandomHills::SetRandomSeed(int arg0)
{
  vtk::ConvertManagedToNative<::vtkParametricRandomHills>(m_instance)->SetRandomSeed(arg0);
}



int vtkParametricRandomHills::GetRandomSeed()
{
  int retVal = vtk::ConvertManagedToNative<::vtkParametricRandomHills>(m_instance)->GetRandomSeed();
  return retVal;
}



void vtkParametricRandomHills::SetAllowRandomGeneration(int arg0)
{
  vtk::ConvertManagedToNative<::vtkParametricRandomHills>(m_instance)->SetAllowRandomGeneration(arg0);
}



int vtkParametricRandomHills::GetAllowRandomGeneration()
{
  int retVal = vtk::ConvertManagedToNative<::vtkParametricRandomHills>(m_instance)->GetAllowRandomGeneration();
  return retVal;
}



void vtkParametricRandomHills::AllowRandomGenerationOn()
{
  vtk::ConvertManagedToNative<::vtkParametricRandomHills>(m_instance)->AllowRandomGenerationOn();
}



void vtkParametricRandomHills::AllowRandomGenerationOff()
{
  vtk::ConvertManagedToNative<::vtkParametricRandomHills>(m_instance)->AllowRandomGenerationOff();
}



void vtkParametricRandomHills::SetXVarianceScaleFactor(double arg0)
{
  vtk::ConvertManagedToNative<::vtkParametricRandomHills>(m_instance)->SetXVarianceScaleFactor(arg0);
}



double vtkParametricRandomHills::GetXVarianceScaleFactor()
{
  double retVal = vtk::ConvertManagedToNative<::vtkParametricRandomHills>(m_instance)->GetXVarianceScaleFactor();
  return retVal;
}



void vtkParametricRandomHills::SetYVarianceScaleFactor(double arg0)
{
  vtk::ConvertManagedToNative<::vtkParametricRandomHills>(m_instance)->SetYVarianceScaleFactor(arg0);
}



double vtkParametricRandomHills::GetYVarianceScaleFactor()
{
  double retVal = vtk::ConvertManagedToNative<::vtkParametricRandomHills>(m_instance)->GetYVarianceScaleFactor();
  return retVal;
}



void vtkParametricRandomHills::SetAmplitudeScaleFactor(double arg0)
{
  vtk::ConvertManagedToNative<::vtkParametricRandomHills>(m_instance)->SetAmplitudeScaleFactor(arg0);
}



double vtkParametricRandomHills::GetAmplitudeScaleFactor()
{
  double retVal = vtk::ConvertManagedToNative<::vtkParametricRandomHills>(m_instance)->GetAmplitudeScaleFactor();
  return retVal;
}



void vtkParametricRandomHills::GenerateTheHills()
{
  vtk::ConvertManagedToNative<::vtkParametricRandomHills>(m_instance)->GenerateTheHills();
}



void vtkParametricRandomHills::Evaluate(array<double>^ uvw, array<double>^ Pt, array<double>^ Duvw)
{
  pin_ptr<double> uvwPin = &uvw[0];
  double* nativeuvwPin = uvwPin;
  pin_ptr<double> PtPin = &Pt[0];
  double* nativePtPin = PtPin;
  pin_ptr<double> DuvwPin = &Duvw[0];
  double* nativeDuvwPin = DuvwPin;
  vtk::ConvertManagedToNative<::vtkParametricRandomHills>(m_instance)->Evaluate(nativeuvwPin, nativePtPin, nativeDuvwPin);
}



double vtkParametricRandomHills::EvaluateScalar(array<double>^ uvw, array<double>^ Pt, array<double>^ Duvw)
{
  pin_ptr<double> uvwPin = &uvw[0];
  double* nativeuvwPin = uvwPin;
  pin_ptr<double> PtPin = &Pt[0];
  double* nativePtPin = PtPin;
  pin_ptr<double> DuvwPin = &Duvw[0];
  double* nativeDuvwPin = DuvwPin;
  double retVal = vtk::ConvertManagedToNative<::vtkParametricRandomHills>(m_instance)->EvaluateScalar(nativeuvwPin, nativePtPin, nativeDuvwPin);
  return retVal;
}



  vtkParametricRandomHills::vtkParametricRandomHills(System::IntPtr native, bool bConst) : vtkParametricFunction(native, bConst) {}



  vtkParametricRandomHills::vtkParametricRandomHills(bool donothing) : vtkParametricFunction(donothing) {}



  vtkParametricRandomHills::vtkParametricRandomHills() : vtkParametricFunction(false) {
  this->SetNativePointer(IntPtr(::vtkParametricRandomHills::New()));
}



  vtkParametricRandomHills::~vtkParametricRandomHills() { }





} // end namespace vtkCommon
