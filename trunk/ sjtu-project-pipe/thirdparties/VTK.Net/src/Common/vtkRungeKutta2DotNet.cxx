

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkRungeKutta2DotNet.h"
#include "vtkObjectDotNet.h"

// native includes
#include "strstream"
#include "vtkRungeKutta2.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkRungeKutta2::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkRungeKutta2>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkRungeKutta2::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkRungeKutta2>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkRungeKutta2^ vtkRungeKutta2::NewInstance()
{
  ::vtkRungeKutta2* retVal = static_cast<::vtkRungeKutta2*>(vtk::ConvertManagedToNative<::vtkRungeKutta2>(m_instance)->NewInstance());
  return gcnew vtkRungeKutta2(IntPtr(retVal), false);
}



vtkRungeKutta2^ vtkRungeKutta2::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkRungeKutta2* retVal = static_cast<::vtkRungeKutta2*>(::vtkRungeKutta2::SafeDownCast(oWrap));
  return gcnew vtkRungeKutta2(IntPtr(retVal), false);
}



int vtkRungeKutta2::ComputeNextStep(array<double>^ xprev, array<double>^ xnext, double t, double% delT, double maxError, double% error)
{
  pin_ptr<double> xprevPin = &xprev[0];
  double* nativexprevPin = xprevPin;
  pin_ptr<double> xnextPin = &xnext[0];
  double* nativexnextPin = xnextPin;
  pin_ptr<double> delTPin = &delT;
  pin_ptr<double> errorPin = &error;
  int retVal = vtk::ConvertManagedToNative<::vtkRungeKutta2>(m_instance)->ComputeNextStep(nativexprevPin, nativexnextPin, t, *delTPin, maxError, *errorPin);
  return retVal;
}



int vtkRungeKutta2::ComputeNextStep(array<double>^ xprev, array<double>^ dxprev, array<double>^ xnext, double t, double% delT, double maxError, double% error)
{
  pin_ptr<double> xprevPin = &xprev[0];
  double* nativexprevPin = xprevPin;
  pin_ptr<double> dxprevPin = &dxprev[0];
  double* nativedxprevPin = dxprevPin;
  pin_ptr<double> xnextPin = &xnext[0];
  double* nativexnextPin = xnextPin;
  pin_ptr<double> delTPin = &delT;
  pin_ptr<double> errorPin = &error;
  int retVal = vtk::ConvertManagedToNative<::vtkRungeKutta2>(m_instance)->ComputeNextStep(nativexprevPin, nativedxprevPin, nativexnextPin, t, *delTPin, maxError, *errorPin);
  return retVal;
}



int vtkRungeKutta2::ComputeNextStep(array<double>^ xprev, array<double>^ xnext, double t, double% delT, double% delTActual, double minStep, double maxStep, double maxError, double% error)
{
  pin_ptr<double> xprevPin = &xprev[0];
  double* nativexprevPin = xprevPin;
  pin_ptr<double> xnextPin = &xnext[0];
  double* nativexnextPin = xnextPin;
  pin_ptr<double> delTPin = &delT;
  pin_ptr<double> delTActualPin = &delTActual;
  pin_ptr<double> errorPin = &error;
  int retVal = vtk::ConvertManagedToNative<::vtkRungeKutta2>(m_instance)->ComputeNextStep(nativexprevPin, nativexnextPin, t, *delTPin, *delTActualPin, minStep, maxStep, maxError, *errorPin);
  return retVal;
}



int vtkRungeKutta2::ComputeNextStep(array<double>^ xprev, array<double>^ dxprev, array<double>^ xnext, double t, double% delT, double% delTActual, double minStep, double maxStep, double maxError, double% error)
{
  pin_ptr<double> xprevPin = &xprev[0];
  double* nativexprevPin = xprevPin;
  pin_ptr<double> dxprevPin = &dxprev[0];
  double* nativedxprevPin = dxprevPin;
  pin_ptr<double> xnextPin = &xnext[0];
  double* nativexnextPin = xnextPin;
  pin_ptr<double> delTPin = &delT;
  pin_ptr<double> delTActualPin = &delTActual;
  pin_ptr<double> errorPin = &error;
  int retVal = vtk::ConvertManagedToNative<::vtkRungeKutta2>(m_instance)->ComputeNextStep(nativexprevPin, nativedxprevPin, nativexnextPin, t, *delTPin, *delTActualPin, minStep, maxStep, maxError, *errorPin);
  return retVal;
}



  vtkRungeKutta2::vtkRungeKutta2(System::IntPtr native, bool bConst) : vtkInitialValueProblemSolver(native, bConst) {}



  vtkRungeKutta2::vtkRungeKutta2(bool donothing) : vtkInitialValueProblemSolver(donothing) {}



  vtkRungeKutta2::vtkRungeKutta2() : vtkInitialValueProblemSolver(false) {
  this->SetNativePointer(IntPtr(::vtkRungeKutta2::New()));
}



  vtkRungeKutta2::~vtkRungeKutta2() { }





} // end namespace vtkCommon
