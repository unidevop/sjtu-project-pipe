

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkStreamTracerDotNet.h"

// native includes
#include "strstream"
#include "vtkStreamTracer.h"
#include "vtkAlgorithmOutput.h"
#include "vtkDataSet.h"
#include "vtkInitialValueProblemSolver.h"
#include "vtkInterpolatedVelocityField.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkStreamTracer::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkStreamTracer>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkStreamTracer::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkStreamTracer>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkStreamTracer^ vtkStreamTracer::NewInstance()
{
  ::vtkStreamTracer* retVal = static_cast<::vtkStreamTracer*>(vtk::ConvertManagedToNative<::vtkStreamTracer>(m_instance)->NewInstance());
  return gcnew vtkStreamTracer(IntPtr(retVal), false);
}



vtkStreamTracer^ vtkStreamTracer::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkStreamTracer* retVal = static_cast<::vtkStreamTracer*>(::vtkStreamTracer::SafeDownCast(oWrap));
  return gcnew vtkStreamTracer(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkStreamTracer::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkStreamTracer>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkStreamTracer::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkStreamTracer>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkStreamTracer::SetStartPosition(double arg0, double arg1, double arg2)
{
  vtk::ConvertManagedToNative<::vtkStreamTracer>(m_instance)->SetStartPosition(arg0, arg1, arg2);
}



void vtkStreamTracer::SetStartPosition(array<double>^ a)
{
  pin_ptr<double> aPin = &a[0];
  double* nativeaPin = aPin;
  vtk::ConvertManagedToNative<::vtkStreamTracer>(m_instance)->SetStartPosition(nativeaPin);
}



array<double>^ vtkStreamTracer::GetStartPosition()
{
  const double* retVal = vtk::ConvertManagedToNative<::vtkStreamTracer>(m_instance)->GetStartPosition();
  array<double>^ mRetVal = gcnew array<double>(3);
  for (size_t cprIdx=0; cprIdx<3; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



void vtkStreamTracer::SetSource(vtkDataSet^ source)
{
  ::vtkDataSet* sourceWrap = vtk::ConvertManagedToNative<::vtkDataSet>(source->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkStreamTracer>(m_instance)->SetSource(sourceWrap);
}



vtkDataSet^ vtkStreamTracer::GetSource()
{
  ::vtkDataSet* retVal = static_cast<::vtkDataSet*>(vtk::ConvertManagedToNative<::vtkStreamTracer>(m_instance)->GetSource());
  return gcnew vtkDataSet(IntPtr(retVal), false);
}



void vtkStreamTracer::SetSourceConnection(vtkAlgorithmOutput^ algOutput)
{
  ::vtkAlgorithmOutput* algOutputWrap = vtk::ConvertManagedToNative<::vtkAlgorithmOutput>(algOutput->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkStreamTracer>(m_instance)->SetSourceConnection(algOutputWrap);
}



void vtkStreamTracer::SetIntegrator(vtkInitialValueProblemSolver^ arg0)
{
  ::vtkInitialValueProblemSolver* arg0Wrap = vtk::ConvertManagedToNative<::vtkInitialValueProblemSolver>(arg0->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkStreamTracer>(m_instance)->SetIntegrator(arg0Wrap);
}



vtkInitialValueProblemSolver^ vtkStreamTracer::GetIntegrator()
{
  ::vtkInitialValueProblemSolver* retVal = static_cast<::vtkInitialValueProblemSolver*>(vtk::ConvertManagedToNative<::vtkStreamTracer>(m_instance)->GetIntegrator());
  return gcnew vtkInitialValueProblemSolver(IntPtr(retVal), false);
}



void vtkStreamTracer::SetIntegratorType(int type)
{
  vtk::ConvertManagedToNative<::vtkStreamTracer>(m_instance)->SetIntegratorType(type);
}



int vtkStreamTracer::GetIntegratorType()
{
  int retVal = vtk::ConvertManagedToNative<::vtkStreamTracer>(m_instance)->GetIntegratorType();
  return retVal;
}



void vtkStreamTracer::SetIntegratorTypeToRungeKutta2()
{
  vtk::ConvertManagedToNative<::vtkStreamTracer>(m_instance)->SetIntegratorTypeToRungeKutta2();
}



void vtkStreamTracer::SetIntegratorTypeToRungeKutta4()
{
  vtk::ConvertManagedToNative<::vtkStreamTracer>(m_instance)->SetIntegratorTypeToRungeKutta4();
}



void vtkStreamTracer::SetIntegratorTypeToRungeKutta45()
{
  vtk::ConvertManagedToNative<::vtkStreamTracer>(m_instance)->SetIntegratorTypeToRungeKutta45();
}



void vtkStreamTracer::SetMaximumPropagation(int unit, double max)
{
  vtk::ConvertManagedToNative<::vtkStreamTracer>(m_instance)->SetMaximumPropagation(unit, max);
}



void vtkStreamTracer::SetMaximumPropagation(double max)
{
  vtk::ConvertManagedToNative<::vtkStreamTracer>(m_instance)->SetMaximumPropagation(max);
}



void vtkStreamTracer::SetMaximumPropagationUnit(int unit)
{
  vtk::ConvertManagedToNative<::vtkStreamTracer>(m_instance)->SetMaximumPropagationUnit(unit);
}



int vtkStreamTracer::GetMaximumPropagationUnit()
{
  int retVal = vtk::ConvertManagedToNative<::vtkStreamTracer>(m_instance)->GetMaximumPropagationUnit();
  return retVal;
}



double vtkStreamTracer::GetMaximumPropagation()
{
  double retVal = vtk::ConvertManagedToNative<::vtkStreamTracer>(m_instance)->GetMaximumPropagation();
  return retVal;
}



void vtkStreamTracer::SetMaximumPropagationUnitToTimeUnit()
{
  vtk::ConvertManagedToNative<::vtkStreamTracer>(m_instance)->SetMaximumPropagationUnitToTimeUnit();
}



void vtkStreamTracer::SetMaximumPropagationUnitToLengthUnit()
{
  vtk::ConvertManagedToNative<::vtkStreamTracer>(m_instance)->SetMaximumPropagationUnitToLengthUnit();
}



void vtkStreamTracer::SetMaximumPropagationUnitToCellLengthUnit()
{
  vtk::ConvertManagedToNative<::vtkStreamTracer>(m_instance)->SetMaximumPropagationUnitToCellLengthUnit();
}



void vtkStreamTracer::SetMinimumIntegrationStep(int unit, double step)
{
  vtk::ConvertManagedToNative<::vtkStreamTracer>(m_instance)->SetMinimumIntegrationStep(unit, step);
}



void vtkStreamTracer::SetMinimumIntegrationStepUnit(int unit)
{
  vtk::ConvertManagedToNative<::vtkStreamTracer>(m_instance)->SetMinimumIntegrationStepUnit(unit);
}



void vtkStreamTracer::SetMinimumIntegrationStep(double step)
{
  vtk::ConvertManagedToNative<::vtkStreamTracer>(m_instance)->SetMinimumIntegrationStep(step);
}



int vtkStreamTracer::GetMinimumIntegrationStepUnit()
{
  int retVal = vtk::ConvertManagedToNative<::vtkStreamTracer>(m_instance)->GetMinimumIntegrationStepUnit();
  return retVal;
}



double vtkStreamTracer::GetMinimumIntegrationStep()
{
  double retVal = vtk::ConvertManagedToNative<::vtkStreamTracer>(m_instance)->GetMinimumIntegrationStep();
  return retVal;
}



void vtkStreamTracer::SetMinimumIntegrationStepUnitToTimeUnit()
{
  vtk::ConvertManagedToNative<::vtkStreamTracer>(m_instance)->SetMinimumIntegrationStepUnitToTimeUnit();
}



void vtkStreamTracer::SetMinimumIntegrationStepUnitToLengthUnit()
{
  vtk::ConvertManagedToNative<::vtkStreamTracer>(m_instance)->SetMinimumIntegrationStepUnitToLengthUnit();
}



void vtkStreamTracer::SetMinimumIntegrationStepUnitToCellLengthUnit()
{
  vtk::ConvertManagedToNative<::vtkStreamTracer>(m_instance)->SetMinimumIntegrationStepUnitToCellLengthUnit();
}



void vtkStreamTracer::SetMaximumIntegrationStep(int unit, double step)
{
  vtk::ConvertManagedToNative<::vtkStreamTracer>(m_instance)->SetMaximumIntegrationStep(unit, step);
}



void vtkStreamTracer::SetMaximumIntegrationStepUnit(int unit)
{
  vtk::ConvertManagedToNative<::vtkStreamTracer>(m_instance)->SetMaximumIntegrationStepUnit(unit);
}



void vtkStreamTracer::SetMaximumIntegrationStep(double step)
{
  vtk::ConvertManagedToNative<::vtkStreamTracer>(m_instance)->SetMaximumIntegrationStep(step);
}



int vtkStreamTracer::GetMaximumIntegrationStepUnit()
{
  int retVal = vtk::ConvertManagedToNative<::vtkStreamTracer>(m_instance)->GetMaximumIntegrationStepUnit();
  return retVal;
}



double vtkStreamTracer::GetMaximumIntegrationStep()
{
  double retVal = vtk::ConvertManagedToNative<::vtkStreamTracer>(m_instance)->GetMaximumIntegrationStep();
  return retVal;
}



void vtkStreamTracer::SetMaximumIntegrationStepUnitToTimeUnit()
{
  vtk::ConvertManagedToNative<::vtkStreamTracer>(m_instance)->SetMaximumIntegrationStepUnitToTimeUnit();
}



void vtkStreamTracer::SetMaximumIntegrationStepUnitToLengthUnit()
{
  vtk::ConvertManagedToNative<::vtkStreamTracer>(m_instance)->SetMaximumIntegrationStepUnitToLengthUnit();
}



void vtkStreamTracer::SetMaximumIntegrationStepUnitToCellLengthUnit()
{
  vtk::ConvertManagedToNative<::vtkStreamTracer>(m_instance)->SetMaximumIntegrationStepUnitToCellLengthUnit();
}



void vtkStreamTracer::SetInitialIntegrationStep(int unit, double step)
{
  vtk::ConvertManagedToNative<::vtkStreamTracer>(m_instance)->SetInitialIntegrationStep(unit, step);
}



void vtkStreamTracer::SetInitialIntegrationStepUnit(int unit)
{
  vtk::ConvertManagedToNative<::vtkStreamTracer>(m_instance)->SetInitialIntegrationStepUnit(unit);
}



void vtkStreamTracer::SetInitialIntegrationStep(double step)
{
  vtk::ConvertManagedToNative<::vtkStreamTracer>(m_instance)->SetInitialIntegrationStep(step);
}



int vtkStreamTracer::GetInitialIntegrationStepUnit()
{
  int retVal = vtk::ConvertManagedToNative<::vtkStreamTracer>(m_instance)->GetInitialIntegrationStepUnit();
  return retVal;
}



double vtkStreamTracer::GetInitialIntegrationStep()
{
  double retVal = vtk::ConvertManagedToNative<::vtkStreamTracer>(m_instance)->GetInitialIntegrationStep();
  return retVal;
}



void vtkStreamTracer::SetInitialIntegrationStepUnitToTimeUnit()
{
  vtk::ConvertManagedToNative<::vtkStreamTracer>(m_instance)->SetInitialIntegrationStepUnitToTimeUnit();
}



void vtkStreamTracer::SetInitialIntegrationStepUnitToLengthUnit()
{
  vtk::ConvertManagedToNative<::vtkStreamTracer>(m_instance)->SetInitialIntegrationStepUnitToLengthUnit();
}



void vtkStreamTracer::SetInitialIntegrationStepUnitToCellLengthUnit()
{
  vtk::ConvertManagedToNative<::vtkStreamTracer>(m_instance)->SetInitialIntegrationStepUnitToCellLengthUnit();
}



void vtkStreamTracer::SetMaximumError(double arg0)
{
  vtk::ConvertManagedToNative<::vtkStreamTracer>(m_instance)->SetMaximumError(arg0);
}



double vtkStreamTracer::GetMaximumError()
{
  double retVal = vtk::ConvertManagedToNative<::vtkStreamTracer>(m_instance)->GetMaximumError();
  return retVal;
}



void vtkStreamTracer::SetMaximumNumberOfSteps(int arg0)
{
  vtk::ConvertManagedToNative<::vtkStreamTracer>(m_instance)->SetMaximumNumberOfSteps(arg0);
}



int vtkStreamTracer::GetMaximumNumberOfSteps()
{
  int retVal = vtk::ConvertManagedToNative<::vtkStreamTracer>(m_instance)->GetMaximumNumberOfSteps();
  return retVal;
}



void vtkStreamTracer::SetTerminalSpeed(double arg0)
{
  vtk::ConvertManagedToNative<::vtkStreamTracer>(m_instance)->SetTerminalSpeed(arg0);
}



double vtkStreamTracer::GetTerminalSpeed()
{
  double retVal = vtk::ConvertManagedToNative<::vtkStreamTracer>(m_instance)->GetTerminalSpeed();
  return retVal;
}



void vtkStreamTracer::SetIntegrationDirection(int arg0)
{
  vtk::ConvertManagedToNative<::vtkStreamTracer>(m_instance)->SetIntegrationDirection(arg0);
}



int vtkStreamTracer::GetIntegrationDirectionMinValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkStreamTracer>(m_instance)->GetIntegrationDirectionMinValue();
  return retVal;
}



int vtkStreamTracer::GetIntegrationDirectionMaxValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkStreamTracer>(m_instance)->GetIntegrationDirectionMaxValue();
  return retVal;
}



int vtkStreamTracer::GetIntegrationDirection()
{
  int retVal = vtk::ConvertManagedToNative<::vtkStreamTracer>(m_instance)->GetIntegrationDirection();
  return retVal;
}



void vtkStreamTracer::SetIntegrationDirectionToForward()
{
  vtk::ConvertManagedToNative<::vtkStreamTracer>(m_instance)->SetIntegrationDirectionToForward();
}



void vtkStreamTracer::SetIntegrationDirectionToBackward()
{
  vtk::ConvertManagedToNative<::vtkStreamTracer>(m_instance)->SetIntegrationDirectionToBackward();
}



void vtkStreamTracer::SetIntegrationDirectionToBoth()
{
  vtk::ConvertManagedToNative<::vtkStreamTracer>(m_instance)->SetIntegrationDirectionToBoth();
}



void vtkStreamTracer::SetComputeVorticity(int arg0)
{
  vtk::ConvertManagedToNative<::vtkStreamTracer>(m_instance)->SetComputeVorticity(arg0);
}



int vtkStreamTracer::GetComputeVorticity()
{
  int retVal = vtk::ConvertManagedToNative<::vtkStreamTracer>(m_instance)->GetComputeVorticity();
  return retVal;
}



void vtkStreamTracer::ComputeVorticityOn()
{
  vtk::ConvertManagedToNative<::vtkStreamTracer>(m_instance)->ComputeVorticityOn();
}



void vtkStreamTracer::ComputeVorticityOff()
{
  vtk::ConvertManagedToNative<::vtkStreamTracer>(m_instance)->ComputeVorticityOff();
}



void vtkStreamTracer::SetRotationScale(double arg0)
{
  vtk::ConvertManagedToNative<::vtkStreamTracer>(m_instance)->SetRotationScale(arg0);
}



double vtkStreamTracer::GetRotationScale()
{
  double retVal = vtk::ConvertManagedToNative<::vtkStreamTracer>(m_instance)->GetRotationScale();
  return retVal;
}



void vtkStreamTracer::AddInput(vtkDataSet^ in)
{
  ::vtkDataSet* inWrap = vtk::ConvertManagedToNative<::vtkDataSet>(in->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkStreamTracer>(m_instance)->AddInput(inWrap);
}



void vtkStreamTracer::SetInterpolatorPrototype(vtkInterpolatedVelocityField^ ivf)
{
  ::vtkInterpolatedVelocityField* ivfWrap = vtk::ConvertManagedToNative<::vtkInterpolatedVelocityField>(ivf->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkStreamTracer>(m_instance)->SetInterpolatorPrototype(ivfWrap);
}



  vtkStreamTracer::vtkStreamTracer(System::IntPtr native, bool bConst) : vtkPolyDataAlgorithm(native, bConst) {}



  vtkStreamTracer::vtkStreamTracer(bool donothing) : vtkPolyDataAlgorithm(donothing) {}



  vtkStreamTracer::vtkStreamTracer() : vtkPolyDataAlgorithm(false) {
  this->SetNativePointer(IntPtr(::vtkStreamTracer::New()));
}



  vtkStreamTracer::~vtkStreamTracer() { }





} // end namespace vtkGraphics
