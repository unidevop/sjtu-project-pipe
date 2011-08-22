

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkRungeKutta4DotNet.h"
#include "vtkObjectDotNet.h"

// native includes
#include "strstream"
#include "vtkRungeKutta4.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkRungeKutta4::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkRungeKutta4>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkRungeKutta4::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkRungeKutta4>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkRungeKutta4^ vtkRungeKutta4::NewInstance()
{
  ::vtkRungeKutta4* retVal = static_cast<::vtkRungeKutta4*>(vtk::ConvertManagedToNative<::vtkRungeKutta4>(m_instance)->NewInstance());
  return gcnew vtkRungeKutta4(IntPtr(retVal), false);
}



vtkRungeKutta4^ vtkRungeKutta4::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkRungeKutta4* retVal = static_cast<::vtkRungeKutta4*>(::vtkRungeKutta4::SafeDownCast(oWrap));
  return gcnew vtkRungeKutta4(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkRungeKutta4::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkRungeKutta4>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkRungeKutta4::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkRungeKutta4>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




int vtkRungeKutta4::ComputeNextStep(array<double>^ xprev, array<double>^ xnext, double t, double% delT, double maxError, double% error)
{
  pin_ptr<double> xprevPin = &xprev[0];
  double* nativexprevPin = xprevPin;
  pin_ptr<double> xnextPin = &xnext[0];
  double* nativexnextPin = xnextPin;
  pin_ptr<double> delTPin = &delT;
  pin_ptr<double> errorPin = &error;
  int retVal = vtk::ConvertManagedToNative<::vtkRungeKutta4>(m_instance)->ComputeNextStep(nativexprevPin, nativexnextPin, t, *delTPin, maxError, *errorPin);
  return retVal;
}



int vtkRungeKutta4::ComputeNextStep(array<double>^ xprev, array<double>^ dxprev, array<double>^ xnext, double t, double% delT, double maxError, double% error)
{
  pin_ptr<double> xprevPin = &xprev[0];
  double* nativexprevPin = xprevPin;
  pin_ptr<double> dxprevPin = &dxprev[0];
  double* nativedxprevPin = dxprevPin;
  pin_ptr<double> xnextPin = &xnext[0];
  double* nativexnextPin = xnextPin;
  pin_ptr<double> delTPin = &delT;
  pin_ptr<double> errorPin = &error;
  int retVal = vtk::ConvertManagedToNative<::vtkRungeKutta4>(m_instance)->ComputeNextStep(nativexprevPin, nativedxprevPin, nativexnextPin, t, *delTPin, maxError, *errorPin);
  return retVal;
}



int vtkRungeKutta4::ComputeNextStep(array<double>^ xprev, array<double>^ xnext, double t, double% delT, double% delTActual, double minStep, double maxStep, double maxError, double% error)
{
  pin_ptr<double> xprevPin = &xprev[0];
  double* nativexprevPin = xprevPin;
  pin_ptr<double> xnextPin = &xnext[0];
  double* nativexnextPin = xnextPin;
  pin_ptr<double> delTPin = &delT;
  pin_ptr<double> delTActualPin = &delTActual;
  pin_ptr<double> errorPin = &error;
  int retVal = vtk::ConvertManagedToNative<::vtkRungeKutta4>(m_instance)->ComputeNextStep(nativexprevPin, nativexnextPin, t, *delTPin, *delTActualPin, minStep, maxStep, maxError, *errorPin);
  return retVal;
}



int vtkRungeKutta4::ComputeNextStep(array<double>^ xprev, array<double>^ dxprev, array<double>^ xnext, double t, double% delT, double% delTActual, double minStep, double maxStep, double maxError, double% error)
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
  int retVal = vtk::ConvertManagedToNative<::vtkRungeKutta4>(m_instance)->ComputeNextStep(nativexprevPin, nativedxprevPin, nativexnextPin, t, *delTPin, *delTActualPin, minStep, maxStep, maxError, *errorPin);
  return retVal;
}



  vtkRungeKutta4::vtkRungeKutta4(System::IntPtr native, bool bConst) : vtkInitialValueProblemSolver(native, bConst) {}



  vtkRungeKutta4::vtkRungeKutta4(bool donothing) : vtkInitialValueProblemSolver(donothing) {}



  vtkRungeKutta4::vtkRungeKutta4() : vtkInitialValueProblemSolver(false) {
  this->SetNativePointer(IntPtr(::vtkRungeKutta4::New()));
}



  vtkRungeKutta4::~vtkRungeKutta4() { }





} // end namespace vtkCommon
