

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkParametricFunctionDotNet.h"

// native includes
#include "strstream"
#include "vtkParametricFunction.h"

using namespace System;

namespace vtk {

System::String^ vtkParametricFunction::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkParametricFunction>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkParametricFunction::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkParametricFunction>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkParametricFunction^ vtkParametricFunction::NewInstance()
{
  ::vtkParametricFunction* retVal = static_cast<::vtkParametricFunction*>(vtk::ConvertManagedToNative<::vtkParametricFunction>(m_instance)->NewInstance());
  return gcnew vtkParametricFunction(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkParametricFunction::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkParametricFunction>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkParametricFunction::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkParametricFunction>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




int vtkParametricFunction::GetDimension()
{
  int retVal = vtk::ConvertManagedToNative<::vtkParametricFunction>(m_instance)->GetDimension();
  return retVal;
}



void vtkParametricFunction::Evaluate(array<double>^ uvw, array<double>^ Pt, array<double>^ Duvw)
{
  pin_ptr<double> uvwPin = &uvw[0];
  double* nativeuvwPin = uvwPin;
  pin_ptr<double> PtPin = &Pt[0];
  double* nativePtPin = PtPin;
  pin_ptr<double> DuvwPin = &Duvw[0];
  double* nativeDuvwPin = DuvwPin;
  vtk::ConvertManagedToNative<::vtkParametricFunction>(m_instance)->Evaluate(nativeuvwPin, nativePtPin, nativeDuvwPin);
}



double vtkParametricFunction::EvaluateScalar(array<double>^ uvw, array<double>^ Pt, array<double>^ Duvw)
{
  pin_ptr<double> uvwPin = &uvw[0];
  double* nativeuvwPin = uvwPin;
  pin_ptr<double> PtPin = &Pt[0];
  double* nativePtPin = PtPin;
  pin_ptr<double> DuvwPin = &Duvw[0];
  double* nativeDuvwPin = DuvwPin;
  double retVal = vtk::ConvertManagedToNative<::vtkParametricFunction>(m_instance)->EvaluateScalar(nativeuvwPin, nativePtPin, nativeDuvwPin);
  return retVal;
}



void vtkParametricFunction::SetMinimumU(double arg0)
{
  vtk::ConvertManagedToNative<::vtkParametricFunction>(m_instance)->SetMinimumU(arg0);
}



double vtkParametricFunction::GetMinimumU()
{
  double retVal = vtk::ConvertManagedToNative<::vtkParametricFunction>(m_instance)->GetMinimumU();
  return retVal;
}



void vtkParametricFunction::SetMaximumU(double arg0)
{
  vtk::ConvertManagedToNative<::vtkParametricFunction>(m_instance)->SetMaximumU(arg0);
}



double vtkParametricFunction::GetMaximumU()
{
  double retVal = vtk::ConvertManagedToNative<::vtkParametricFunction>(m_instance)->GetMaximumU();
  return retVal;
}



void vtkParametricFunction::SetMinimumV(double arg0)
{
  vtk::ConvertManagedToNative<::vtkParametricFunction>(m_instance)->SetMinimumV(arg0);
}



double vtkParametricFunction::GetMinimumV()
{
  double retVal = vtk::ConvertManagedToNative<::vtkParametricFunction>(m_instance)->GetMinimumV();
  return retVal;
}



void vtkParametricFunction::SetMaximumV(double arg0)
{
  vtk::ConvertManagedToNative<::vtkParametricFunction>(m_instance)->SetMaximumV(arg0);
}



double vtkParametricFunction::GetMaximumV()
{
  double retVal = vtk::ConvertManagedToNative<::vtkParametricFunction>(m_instance)->GetMaximumV();
  return retVal;
}



void vtkParametricFunction::SetMinimumW(double arg0)
{
  vtk::ConvertManagedToNative<::vtkParametricFunction>(m_instance)->SetMinimumW(arg0);
}



double vtkParametricFunction::GetMinimumW()
{
  double retVal = vtk::ConvertManagedToNative<::vtkParametricFunction>(m_instance)->GetMinimumW();
  return retVal;
}



void vtkParametricFunction::SetMaximumW(double arg0)
{
  vtk::ConvertManagedToNative<::vtkParametricFunction>(m_instance)->SetMaximumW(arg0);
}



double vtkParametricFunction::GetMaximumW()
{
  double retVal = vtk::ConvertManagedToNative<::vtkParametricFunction>(m_instance)->GetMaximumW();
  return retVal;
}



void vtkParametricFunction::SetJoinU(int arg0)
{
  vtk::ConvertManagedToNative<::vtkParametricFunction>(m_instance)->SetJoinU(arg0);
}



int vtkParametricFunction::GetJoinU()
{
  int retVal = vtk::ConvertManagedToNative<::vtkParametricFunction>(m_instance)->GetJoinU();
  return retVal;
}



void vtkParametricFunction::JoinUOn()
{
  vtk::ConvertManagedToNative<::vtkParametricFunction>(m_instance)->JoinUOn();
}



void vtkParametricFunction::JoinUOff()
{
  vtk::ConvertManagedToNative<::vtkParametricFunction>(m_instance)->JoinUOff();
}



void vtkParametricFunction::SetJoinV(int arg0)
{
  vtk::ConvertManagedToNative<::vtkParametricFunction>(m_instance)->SetJoinV(arg0);
}



int vtkParametricFunction::GetJoinV()
{
  int retVal = vtk::ConvertManagedToNative<::vtkParametricFunction>(m_instance)->GetJoinV();
  return retVal;
}



void vtkParametricFunction::JoinVOn()
{
  vtk::ConvertManagedToNative<::vtkParametricFunction>(m_instance)->JoinVOn();
}



void vtkParametricFunction::JoinVOff()
{
  vtk::ConvertManagedToNative<::vtkParametricFunction>(m_instance)->JoinVOff();
}



void vtkParametricFunction::SetTwistU(int arg0)
{
  vtk::ConvertManagedToNative<::vtkParametricFunction>(m_instance)->SetTwistU(arg0);
}



int vtkParametricFunction::GetTwistU()
{
  int retVal = vtk::ConvertManagedToNative<::vtkParametricFunction>(m_instance)->GetTwistU();
  return retVal;
}



void vtkParametricFunction::TwistUOn()
{
  vtk::ConvertManagedToNative<::vtkParametricFunction>(m_instance)->TwistUOn();
}



void vtkParametricFunction::TwistUOff()
{
  vtk::ConvertManagedToNative<::vtkParametricFunction>(m_instance)->TwistUOff();
}



void vtkParametricFunction::SetTwistV(int arg0)
{
  vtk::ConvertManagedToNative<::vtkParametricFunction>(m_instance)->SetTwistV(arg0);
}



int vtkParametricFunction::GetTwistV()
{
  int retVal = vtk::ConvertManagedToNative<::vtkParametricFunction>(m_instance)->GetTwistV();
  return retVal;
}



void vtkParametricFunction::TwistVOn()
{
  vtk::ConvertManagedToNative<::vtkParametricFunction>(m_instance)->TwistVOn();
}



void vtkParametricFunction::TwistVOff()
{
  vtk::ConvertManagedToNative<::vtkParametricFunction>(m_instance)->TwistVOff();
}



void vtkParametricFunction::SetClockwiseOrdering(int arg0)
{
  vtk::ConvertManagedToNative<::vtkParametricFunction>(m_instance)->SetClockwiseOrdering(arg0);
}



int vtkParametricFunction::GetClockwiseOrdering()
{
  int retVal = vtk::ConvertManagedToNative<::vtkParametricFunction>(m_instance)->GetClockwiseOrdering();
  return retVal;
}



void vtkParametricFunction::ClockwiseOrderingOn()
{
  vtk::ConvertManagedToNative<::vtkParametricFunction>(m_instance)->ClockwiseOrderingOn();
}



void vtkParametricFunction::ClockwiseOrderingOff()
{
  vtk::ConvertManagedToNative<::vtkParametricFunction>(m_instance)->ClockwiseOrderingOff();
}



void vtkParametricFunction::SetDerivativesAvailable(int arg0)
{
  vtk::ConvertManagedToNative<::vtkParametricFunction>(m_instance)->SetDerivativesAvailable(arg0);
}



int vtkParametricFunction::GetDerivativesAvailable()
{
  int retVal = vtk::ConvertManagedToNative<::vtkParametricFunction>(m_instance)->GetDerivativesAvailable();
  return retVal;
}



void vtkParametricFunction::DerivativesAvailableOn()
{
  vtk::ConvertManagedToNative<::vtkParametricFunction>(m_instance)->DerivativesAvailableOn();
}



void vtkParametricFunction::DerivativesAvailableOff()
{
  vtk::ConvertManagedToNative<::vtkParametricFunction>(m_instance)->DerivativesAvailableOff();
}



  vtkParametricFunction::vtkParametricFunction(System::IntPtr native, bool bConst) : vtkObject(native, bConst) {}



  vtkParametricFunction::vtkParametricFunction(bool donothing) : vtkObject(donothing) {}



  vtkParametricFunction::vtkParametricFunction() : vtkObject(false) {
  this->SetNativePointer(IntPtr(::vtkParametricFunction::New()));
}



  vtkParametricFunction::~vtkParametricFunction() { }





} // end namespace vtkCommon
