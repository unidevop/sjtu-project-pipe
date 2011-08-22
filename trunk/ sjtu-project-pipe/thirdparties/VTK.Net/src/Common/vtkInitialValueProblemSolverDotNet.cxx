

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkInitialValueProblemSolverDotNet.h"
#include "vtkFunctionSetDotNet.h"

// native includes
#include "strstream"
#include "vtkInitialValueProblemSolver.h"
#include "vtkFunctionSet.h"

using namespace System;

namespace vtk {

System::String^ vtkInitialValueProblemSolver::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkInitialValueProblemSolver>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkInitialValueProblemSolver::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkInitialValueProblemSolver>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkInitialValueProblemSolver^ vtkInitialValueProblemSolver::NewInstance()
{
  ::vtkInitialValueProblemSolver* retVal = static_cast<::vtkInitialValueProblemSolver*>(vtk::ConvertManagedToNative<::vtkInitialValueProblemSolver>(m_instance)->NewInstance());
  return gcnew vtkInitialValueProblemSolver(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkInitialValueProblemSolver::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkInitialValueProblemSolver>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkInitialValueProblemSolver::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkInitialValueProblemSolver>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




int vtkInitialValueProblemSolver::ComputeNextStep(array<double>^ xprev, array<double>^ xnext, double t, double% delT, double maxError, double% error)
{
  pin_ptr<double> xprevPin = &xprev[0];
  double* nativexprevPin = xprevPin;
  pin_ptr<double> xnextPin = &xnext[0];
  double* nativexnextPin = xnextPin;
  pin_ptr<double> delTPin = &delT;
  pin_ptr<double> errorPin = &error;
  int retVal = vtk::ConvertManagedToNative<::vtkInitialValueProblemSolver>(m_instance)->ComputeNextStep(nativexprevPin, nativexnextPin, t, *delTPin, maxError, *errorPin);
  return retVal;
}



int vtkInitialValueProblemSolver::ComputeNextStep(array<double>^ xprev, array<double>^ dxprev, array<double>^ xnext, double t, double% delT, double maxError, double% error)
{
  pin_ptr<double> xprevPin = &xprev[0];
  double* nativexprevPin = xprevPin;
  pin_ptr<double> dxprevPin = &dxprev[0];
  double* nativedxprevPin = dxprevPin;
  pin_ptr<double> xnextPin = &xnext[0];
  double* nativexnextPin = xnextPin;
  pin_ptr<double> delTPin = &delT;
  pin_ptr<double> errorPin = &error;
  int retVal = vtk::ConvertManagedToNative<::vtkInitialValueProblemSolver>(m_instance)->ComputeNextStep(nativexprevPin, nativedxprevPin, nativexnextPin, t, *delTPin, maxError, *errorPin);
  return retVal;
}



int vtkInitialValueProblemSolver::ComputeNextStep(array<double>^ xprev, array<double>^ xnext, double t, double% delT, double% delTActual, double minStep, double maxStep, double maxError, double% error)
{
  pin_ptr<double> xprevPin = &xprev[0];
  double* nativexprevPin = xprevPin;
  pin_ptr<double> xnextPin = &xnext[0];
  double* nativexnextPin = xnextPin;
  pin_ptr<double> delTPin = &delT;
  pin_ptr<double> delTActualPin = &delTActual;
  pin_ptr<double> errorPin = &error;
  int retVal = vtk::ConvertManagedToNative<::vtkInitialValueProblemSolver>(m_instance)->ComputeNextStep(nativexprevPin, nativexnextPin, t, *delTPin, *delTActualPin, minStep, maxStep, maxError, *errorPin);
  return retVal;
}



int vtkInitialValueProblemSolver::ComputeNextStep(array<double>^ xprev, array<double>^ dxprev, array<double>^ xnext, double t, double% delT, double% delTActual, double minStep, double maxStep, double maxError, double% error)
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
  int retVal = vtk::ConvertManagedToNative<::vtkInitialValueProblemSolver>(m_instance)->ComputeNextStep(nativexprevPin, nativedxprevPin, nativexnextPin, t, *delTPin, *delTActualPin, minStep, maxStep, maxError, *errorPin);
  return retVal;
}



void vtkInitialValueProblemSolver::SetFunctionSet(vtkFunctionSet^ functionset)
{
  ::vtkFunctionSet* functionsetWrap = vtk::ConvertManagedToNative<::vtkFunctionSet>(functionset->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkInitialValueProblemSolver>(m_instance)->SetFunctionSet(functionsetWrap);
}



vtkFunctionSet^ vtkInitialValueProblemSolver::GetFunctionSet()
{
  ::vtkFunctionSet* retVal = static_cast<::vtkFunctionSet*>(vtk::ConvertManagedToNative<::vtkInitialValueProblemSolver>(m_instance)->GetFunctionSet());
  return gcnew vtkFunctionSet(IntPtr(retVal), false);
}



int vtkInitialValueProblemSolver::IsAdaptive()
{
  int retVal = vtk::ConvertManagedToNative<::vtkInitialValueProblemSolver>(m_instance)->IsAdaptive();
  return retVal;
}



  vtkInitialValueProblemSolver::vtkInitialValueProblemSolver(System::IntPtr native, bool bConst) : vtkObject(native, bConst) {}



  vtkInitialValueProblemSolver::vtkInitialValueProblemSolver(bool donothing) : vtkObject(donothing) {}



  vtkInitialValueProblemSolver::vtkInitialValueProblemSolver() : vtkObject(false) {
  this->SetNativePointer(IntPtr(::vtkInitialValueProblemSolver::New()));
}



  vtkInitialValueProblemSolver::~vtkInitialValueProblemSolver() { }





} // end namespace vtkCommon
