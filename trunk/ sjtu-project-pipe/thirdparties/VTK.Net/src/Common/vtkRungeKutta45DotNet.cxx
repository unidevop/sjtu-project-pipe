

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkRungeKutta45DotNet.h"
#include "vtkObjectDotNet.h"

// native includes
#include "strstream"
#include "vtkRungeKutta45.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkRungeKutta45::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkRungeKutta45>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkRungeKutta45::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkRungeKutta45>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkRungeKutta45^ vtkRungeKutta45::NewInstance()
{
  ::vtkRungeKutta45* retVal = static_cast<::vtkRungeKutta45*>(vtk::ConvertManagedToNative<::vtkRungeKutta45>(m_instance)->NewInstance());
  return gcnew vtkRungeKutta45(IntPtr(retVal), false);
}



vtkRungeKutta45^ vtkRungeKutta45::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkRungeKutta45* retVal = static_cast<::vtkRungeKutta45*>(::vtkRungeKutta45::SafeDownCast(oWrap));
  return gcnew vtkRungeKutta45(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkRungeKutta45::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkRungeKutta45>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkRungeKutta45::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkRungeKutta45>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




int vtkRungeKutta45::ComputeNextStep(array<double>^ xprev, array<double>^ xnext, double t, double% delT, double maxError, double% error)
{
  pin_ptr<double> xprevPin = &xprev[0];
  double* nativexprevPin = xprevPin;
  pin_ptr<double> xnextPin = &xnext[0];
  double* nativexnextPin = xnextPin;
  pin_ptr<double> delTPin = &delT;
  pin_ptr<double> errorPin = &error;
  int retVal = vtk::ConvertManagedToNative<::vtkRungeKutta45>(m_instance)->ComputeNextStep(nativexprevPin, nativexnextPin, t, *delTPin, maxError, *errorPin);
  return retVal;
}



int vtkRungeKutta45::ComputeNextStep(array<double>^ xprev, array<double>^ dxprev, array<double>^ xnext, double t, double% delT, double maxError, double% error)
{
  pin_ptr<double> xprevPin = &xprev[0];
  double* nativexprevPin = xprevPin;
  pin_ptr<double> dxprevPin = &dxprev[0];
  double* nativedxprevPin = dxprevPin;
  pin_ptr<double> xnextPin = &xnext[0];
  double* nativexnextPin = xnextPin;
  pin_ptr<double> delTPin = &delT;
  pin_ptr<double> errorPin = &error;
  int retVal = vtk::ConvertManagedToNative<::vtkRungeKutta45>(m_instance)->ComputeNextStep(nativexprevPin, nativedxprevPin, nativexnextPin, t, *delTPin, maxError, *errorPin);
  return retVal;
}



int vtkRungeKutta45::ComputeNextStep(array<double>^ xprev, array<double>^ xnext, double t, double% delT, double% delTActual, double minStep, double maxStep, double maxError, double% error)
{
  pin_ptr<double> xprevPin = &xprev[0];
  double* nativexprevPin = xprevPin;
  pin_ptr<double> xnextPin = &xnext[0];
  double* nativexnextPin = xnextPin;
  pin_ptr<double> delTPin = &delT;
  pin_ptr<double> delTActualPin = &delTActual;
  pin_ptr<double> errorPin = &error;
  int retVal = vtk::ConvertManagedToNative<::vtkRungeKutta45>(m_instance)->ComputeNextStep(nativexprevPin, nativexnextPin, t, *delTPin, *delTActualPin, minStep, maxStep, maxError, *errorPin);
  return retVal;
}



int vtkRungeKutta45::ComputeNextStep(array<double>^ xprev, array<double>^ dxprev, array<double>^ xnext, double t, double% delT, double% delTActual, double minStep, double maxStep, double maxError, double% error)
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
  int retVal = vtk::ConvertManagedToNative<::vtkRungeKutta45>(m_instance)->ComputeNextStep(nativexprevPin, nativedxprevPin, nativexnextPin, t, *delTPin, *delTActualPin, minStep, maxStep, maxError, *errorPin);
  return retVal;
}



  vtkRungeKutta45::vtkRungeKutta45(System::IntPtr native, bool bConst) : vtkInitialValueProblemSolver(native, bConst) {}



  vtkRungeKutta45::vtkRungeKutta45(bool donothing) : vtkInitialValueProblemSolver(donothing) {}



  vtkRungeKutta45::vtkRungeKutta45() : vtkInitialValueProblemSolver(false) {
  this->SetNativePointer(IntPtr(::vtkRungeKutta45::New()));
}



  vtkRungeKutta45::~vtkRungeKutta45() { }





} // end namespace vtkCommon
