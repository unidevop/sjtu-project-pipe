

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkGenericStreamTracerDotNet.h"

// native includes
#include "strstream"
#include "vtkGenericStreamTracer.h"
#include "vtkDataSet.h"
#include "vtkGenericDataSet.h"
#include "vtkGenericInterpolatedVelocityField.h"
#include "vtkInitialValueProblemSolver.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkGenericStreamTracer::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkGenericStreamTracer>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkGenericStreamTracer::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkGenericStreamTracer>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkGenericStreamTracer^ vtkGenericStreamTracer::NewInstance()
{
  ::vtkGenericStreamTracer* retVal = static_cast<::vtkGenericStreamTracer*>(vtk::ConvertManagedToNative<::vtkGenericStreamTracer>(m_instance)->NewInstance());
  return gcnew vtkGenericStreamTracer(IntPtr(retVal), false);
}



vtkGenericStreamTracer^ vtkGenericStreamTracer::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkGenericStreamTracer* retVal = static_cast<::vtkGenericStreamTracer*>(::vtkGenericStreamTracer::SafeDownCast(oWrap));
  return gcnew vtkGenericStreamTracer(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkGenericStreamTracer::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkGenericStreamTracer>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkGenericStreamTracer::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkGenericStreamTracer>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkGenericStreamTracer::SetStartPosition(double arg0, double arg1, double arg2)
{
  vtk::ConvertManagedToNative<::vtkGenericStreamTracer>(m_instance)->SetStartPosition(arg0, arg1, arg2);
}



void vtkGenericStreamTracer::SetStartPosition(array<double>^ a)
{
  pin_ptr<double> aPin = &a[0];
  double* nativeaPin = aPin;
  vtk::ConvertManagedToNative<::vtkGenericStreamTracer>(m_instance)->SetStartPosition(nativeaPin);
}



array<double>^ vtkGenericStreamTracer::GetStartPosition()
{
  const double* retVal = vtk::ConvertManagedToNative<::vtkGenericStreamTracer>(m_instance)->GetStartPosition();
  array<double>^ mRetVal = gcnew array<double>(3);
  for (size_t cprIdx=0; cprIdx<3; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



void vtkGenericStreamTracer::SetSource(vtkDataSet^ source)
{
  ::vtkDataSet* sourceWrap = vtk::ConvertManagedToNative<::vtkDataSet>(source->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkGenericStreamTracer>(m_instance)->SetSource(sourceWrap);
}



vtkDataSet^ vtkGenericStreamTracer::GetSource()
{
  ::vtkDataSet* retVal = static_cast<::vtkDataSet*>(vtk::ConvertManagedToNative<::vtkGenericStreamTracer>(m_instance)->GetSource());
  return gcnew vtkDataSet(IntPtr(retVal), false);
}



void vtkGenericStreamTracer::SetIntegrator(vtkInitialValueProblemSolver^ arg0)
{
  ::vtkInitialValueProblemSolver* arg0Wrap = vtk::ConvertManagedToNative<::vtkInitialValueProblemSolver>(arg0->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkGenericStreamTracer>(m_instance)->SetIntegrator(arg0Wrap);
}



vtkInitialValueProblemSolver^ vtkGenericStreamTracer::GetIntegrator()
{
  ::vtkInitialValueProblemSolver* retVal = static_cast<::vtkInitialValueProblemSolver*>(vtk::ConvertManagedToNative<::vtkGenericStreamTracer>(m_instance)->GetIntegrator());
  return gcnew vtkInitialValueProblemSolver(IntPtr(retVal), false);
}



void vtkGenericStreamTracer::SetIntegratorType(int type)
{
  vtk::ConvertManagedToNative<::vtkGenericStreamTracer>(m_instance)->SetIntegratorType(type);
}



int vtkGenericStreamTracer::GetIntegratorType()
{
  int retVal = vtk::ConvertManagedToNative<::vtkGenericStreamTracer>(m_instance)->GetIntegratorType();
  return retVal;
}



void vtkGenericStreamTracer::SetIntegratorTypeToRungeKutta2()
{
  vtk::ConvertManagedToNative<::vtkGenericStreamTracer>(m_instance)->SetIntegratorTypeToRungeKutta2();
}



void vtkGenericStreamTracer::SetIntegratorTypeToRungeKutta4()
{
  vtk::ConvertManagedToNative<::vtkGenericStreamTracer>(m_instance)->SetIntegratorTypeToRungeKutta4();
}



void vtkGenericStreamTracer::SetIntegratorTypeToRungeKutta45()
{
  vtk::ConvertManagedToNative<::vtkGenericStreamTracer>(m_instance)->SetIntegratorTypeToRungeKutta45();
}



void vtkGenericStreamTracer::SetMaximumPropagation(int unit, double max)
{
  vtk::ConvertManagedToNative<::vtkGenericStreamTracer>(m_instance)->SetMaximumPropagation(unit, max);
}



void vtkGenericStreamTracer::SetMaximumPropagation(double max)
{
  vtk::ConvertManagedToNative<::vtkGenericStreamTracer>(m_instance)->SetMaximumPropagation(max);
}



void vtkGenericStreamTracer::SetMaximumPropagationUnit(int unit)
{
  vtk::ConvertManagedToNative<::vtkGenericStreamTracer>(m_instance)->SetMaximumPropagationUnit(unit);
}



int vtkGenericStreamTracer::GetMaximumPropagationUnit()
{
  int retVal = vtk::ConvertManagedToNative<::vtkGenericStreamTracer>(m_instance)->GetMaximumPropagationUnit();
  return retVal;
}



double vtkGenericStreamTracer::GetMaximumPropagation()
{
  double retVal = vtk::ConvertManagedToNative<::vtkGenericStreamTracer>(m_instance)->GetMaximumPropagation();
  return retVal;
}



void vtkGenericStreamTracer::SetMaximumPropagationUnitToTimeUnit()
{
  vtk::ConvertManagedToNative<::vtkGenericStreamTracer>(m_instance)->SetMaximumPropagationUnitToTimeUnit();
}



void vtkGenericStreamTracer::SetMaximumPropagationUnitToLengthUnit()
{
  vtk::ConvertManagedToNative<::vtkGenericStreamTracer>(m_instance)->SetMaximumPropagationUnitToLengthUnit();
}



void vtkGenericStreamTracer::SetMaximumPropagationUnitToCellLengthUnit()
{
  vtk::ConvertManagedToNative<::vtkGenericStreamTracer>(m_instance)->SetMaximumPropagationUnitToCellLengthUnit();
}



void vtkGenericStreamTracer::SetMinimumIntegrationStep(int unit, double step)
{
  vtk::ConvertManagedToNative<::vtkGenericStreamTracer>(m_instance)->SetMinimumIntegrationStep(unit, step);
}



void vtkGenericStreamTracer::SetMinimumIntegrationStepUnit(int unit)
{
  vtk::ConvertManagedToNative<::vtkGenericStreamTracer>(m_instance)->SetMinimumIntegrationStepUnit(unit);
}



void vtkGenericStreamTracer::SetMinimumIntegrationStep(double step)
{
  vtk::ConvertManagedToNative<::vtkGenericStreamTracer>(m_instance)->SetMinimumIntegrationStep(step);
}



int vtkGenericStreamTracer::GetMinimumIntegrationStepUnit()
{
  int retVal = vtk::ConvertManagedToNative<::vtkGenericStreamTracer>(m_instance)->GetMinimumIntegrationStepUnit();
  return retVal;
}



double vtkGenericStreamTracer::GetMinimumIntegrationStep()
{
  double retVal = vtk::ConvertManagedToNative<::vtkGenericStreamTracer>(m_instance)->GetMinimumIntegrationStep();
  return retVal;
}



void vtkGenericStreamTracer::SetMinimumIntegrationStepUnitToTimeUnit()
{
  vtk::ConvertManagedToNative<::vtkGenericStreamTracer>(m_instance)->SetMinimumIntegrationStepUnitToTimeUnit();
}



void vtkGenericStreamTracer::SetMinimumIntegrationStepUnitToLengthUnit()
{
  vtk::ConvertManagedToNative<::vtkGenericStreamTracer>(m_instance)->SetMinimumIntegrationStepUnitToLengthUnit();
}



void vtkGenericStreamTracer::SetMinimumIntegrationStepUnitToCellLengthUnit()
{
  vtk::ConvertManagedToNative<::vtkGenericStreamTracer>(m_instance)->SetMinimumIntegrationStepUnitToCellLengthUnit();
}



void vtkGenericStreamTracer::SetMaximumIntegrationStep(int unit, double step)
{
  vtk::ConvertManagedToNative<::vtkGenericStreamTracer>(m_instance)->SetMaximumIntegrationStep(unit, step);
}



void vtkGenericStreamTracer::SetMaximumIntegrationStepUnit(int unit)
{
  vtk::ConvertManagedToNative<::vtkGenericStreamTracer>(m_instance)->SetMaximumIntegrationStepUnit(unit);
}



void vtkGenericStreamTracer::SetMaximumIntegrationStep(double step)
{
  vtk::ConvertManagedToNative<::vtkGenericStreamTracer>(m_instance)->SetMaximumIntegrationStep(step);
}



int vtkGenericStreamTracer::GetMaximumIntegrationStepUnit()
{
  int retVal = vtk::ConvertManagedToNative<::vtkGenericStreamTracer>(m_instance)->GetMaximumIntegrationStepUnit();
  return retVal;
}



double vtkGenericStreamTracer::GetMaximumIntegrationStep()
{
  double retVal = vtk::ConvertManagedToNative<::vtkGenericStreamTracer>(m_instance)->GetMaximumIntegrationStep();
  return retVal;
}



void vtkGenericStreamTracer::SetMaximumIntegrationStepUnitToTimeUnit()
{
  vtk::ConvertManagedToNative<::vtkGenericStreamTracer>(m_instance)->SetMaximumIntegrationStepUnitToTimeUnit();
}



void vtkGenericStreamTracer::SetMaximumIntegrationStepUnitToLengthUnit()
{
  vtk::ConvertManagedToNative<::vtkGenericStreamTracer>(m_instance)->SetMaximumIntegrationStepUnitToLengthUnit();
}



void vtkGenericStreamTracer::SetMaximumIntegrationStepUnitToCellLengthUnit()
{
  vtk::ConvertManagedToNative<::vtkGenericStreamTracer>(m_instance)->SetMaximumIntegrationStepUnitToCellLengthUnit();
}



void vtkGenericStreamTracer::SetInitialIntegrationStep(int unit, double step)
{
  vtk::ConvertManagedToNative<::vtkGenericStreamTracer>(m_instance)->SetInitialIntegrationStep(unit, step);
}



void vtkGenericStreamTracer::SetInitialIntegrationStepUnit(int unit)
{
  vtk::ConvertManagedToNative<::vtkGenericStreamTracer>(m_instance)->SetInitialIntegrationStepUnit(unit);
}



void vtkGenericStreamTracer::SetInitialIntegrationStep(double step)
{
  vtk::ConvertManagedToNative<::vtkGenericStreamTracer>(m_instance)->SetInitialIntegrationStep(step);
}



int vtkGenericStreamTracer::GetInitialIntegrationStepUnit()
{
  int retVal = vtk::ConvertManagedToNative<::vtkGenericStreamTracer>(m_instance)->GetInitialIntegrationStepUnit();
  return retVal;
}



double vtkGenericStreamTracer::GetInitialIntegrationStep()
{
  double retVal = vtk::ConvertManagedToNative<::vtkGenericStreamTracer>(m_instance)->GetInitialIntegrationStep();
  return retVal;
}



void vtkGenericStreamTracer::SetInitialIntegrationStepUnitToTimeUnit()
{
  vtk::ConvertManagedToNative<::vtkGenericStreamTracer>(m_instance)->SetInitialIntegrationStepUnitToTimeUnit();
}



void vtkGenericStreamTracer::SetInitialIntegrationStepUnitToLengthUnit()
{
  vtk::ConvertManagedToNative<::vtkGenericStreamTracer>(m_instance)->SetInitialIntegrationStepUnitToLengthUnit();
}



void vtkGenericStreamTracer::SetInitialIntegrationStepUnitToCellLengthUnit()
{
  vtk::ConvertManagedToNative<::vtkGenericStreamTracer>(m_instance)->SetInitialIntegrationStepUnitToCellLengthUnit();
}



void vtkGenericStreamTracer::SetMaximumError(double arg0)
{
  vtk::ConvertManagedToNative<::vtkGenericStreamTracer>(m_instance)->SetMaximumError(arg0);
}



double vtkGenericStreamTracer::GetMaximumError()
{
  double retVal = vtk::ConvertManagedToNative<::vtkGenericStreamTracer>(m_instance)->GetMaximumError();
  return retVal;
}



void vtkGenericStreamTracer::SetMaximumNumberOfSteps(int arg0)
{
  vtk::ConvertManagedToNative<::vtkGenericStreamTracer>(m_instance)->SetMaximumNumberOfSteps(arg0);
}



int vtkGenericStreamTracer::GetMaximumNumberOfSteps()
{
  int retVal = vtk::ConvertManagedToNative<::vtkGenericStreamTracer>(m_instance)->GetMaximumNumberOfSteps();
  return retVal;
}



void vtkGenericStreamTracer::SetTerminalSpeed(double arg0)
{
  vtk::ConvertManagedToNative<::vtkGenericStreamTracer>(m_instance)->SetTerminalSpeed(arg0);
}



double vtkGenericStreamTracer::GetTerminalSpeed()
{
  double retVal = vtk::ConvertManagedToNative<::vtkGenericStreamTracer>(m_instance)->GetTerminalSpeed();
  return retVal;
}



void vtkGenericStreamTracer::SetIntegrationDirection(int arg0)
{
  vtk::ConvertManagedToNative<::vtkGenericStreamTracer>(m_instance)->SetIntegrationDirection(arg0);
}



int vtkGenericStreamTracer::GetIntegrationDirectionMinValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkGenericStreamTracer>(m_instance)->GetIntegrationDirectionMinValue();
  return retVal;
}



int vtkGenericStreamTracer::GetIntegrationDirectionMaxValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkGenericStreamTracer>(m_instance)->GetIntegrationDirectionMaxValue();
  return retVal;
}



int vtkGenericStreamTracer::GetIntegrationDirection()
{
  int retVal = vtk::ConvertManagedToNative<::vtkGenericStreamTracer>(m_instance)->GetIntegrationDirection();
  return retVal;
}



void vtkGenericStreamTracer::SetIntegrationDirectionToForward()
{
  vtk::ConvertManagedToNative<::vtkGenericStreamTracer>(m_instance)->SetIntegrationDirectionToForward();
}



void vtkGenericStreamTracer::SetIntegrationDirectionToBackward()
{
  vtk::ConvertManagedToNative<::vtkGenericStreamTracer>(m_instance)->SetIntegrationDirectionToBackward();
}



void vtkGenericStreamTracer::SetIntegrationDirectionToBoth()
{
  vtk::ConvertManagedToNative<::vtkGenericStreamTracer>(m_instance)->SetIntegrationDirectionToBoth();
}



void vtkGenericStreamTracer::SetComputeVorticity(int arg0)
{
  vtk::ConvertManagedToNative<::vtkGenericStreamTracer>(m_instance)->SetComputeVorticity(arg0);
}



int vtkGenericStreamTracer::GetComputeVorticity()
{
  int retVal = vtk::ConvertManagedToNative<::vtkGenericStreamTracer>(m_instance)->GetComputeVorticity();
  return retVal;
}



void vtkGenericStreamTracer::ComputeVorticityOn()
{
  vtk::ConvertManagedToNative<::vtkGenericStreamTracer>(m_instance)->ComputeVorticityOn();
}



void vtkGenericStreamTracer::ComputeVorticityOff()
{
  vtk::ConvertManagedToNative<::vtkGenericStreamTracer>(m_instance)->ComputeVorticityOff();
}



void vtkGenericStreamTracer::SetRotationScale(double arg0)
{
  vtk::ConvertManagedToNative<::vtkGenericStreamTracer>(m_instance)->SetRotationScale(arg0);
}



double vtkGenericStreamTracer::GetRotationScale()
{
  double retVal = vtk::ConvertManagedToNative<::vtkGenericStreamTracer>(m_instance)->GetRotationScale();
  return retVal;
}



System::String^ vtkGenericStreamTracer::GetInputVectorsSelection()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkGenericStreamTracer>(m_instance)->GetInputVectorsSelection();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



void vtkGenericStreamTracer::SelectInputVectors(System::String^ fieldName)
{
  char* fieldNameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(fieldName).ToPointer());
  vtk::ConvertManagedToNative<::vtkGenericStreamTracer>(m_instance)->SelectInputVectors(fieldNameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(fieldNameWrap));
}



void vtkGenericStreamTracer::AddInput(vtkGenericDataSet^ in)
{
  ::vtkGenericDataSet* inWrap = vtk::ConvertManagedToNative<::vtkGenericDataSet>(in->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkGenericStreamTracer>(m_instance)->AddInput(inWrap);
}



void vtkGenericStreamTracer::SetInterpolatorPrototype(vtkGenericInterpolatedVelocityField^ ivf)
{
  ::vtkGenericInterpolatedVelocityField* ivfWrap = vtk::ConvertManagedToNative<::vtkGenericInterpolatedVelocityField>(ivf->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkGenericStreamTracer>(m_instance)->SetInterpolatorPrototype(ivfWrap);
}



  vtkGenericStreamTracer::vtkGenericStreamTracer(System::IntPtr native, bool bConst) : vtkPolyDataAlgorithm(native, bConst) {}



  vtkGenericStreamTracer::vtkGenericStreamTracer(bool donothing) : vtkPolyDataAlgorithm(donothing) {}



  vtkGenericStreamTracer::vtkGenericStreamTracer() : vtkPolyDataAlgorithm(false) {
  this->SetNativePointer(IntPtr(::vtkGenericStreamTracer::New()));
}



  vtkGenericStreamTracer::~vtkGenericStreamTracer() { }





} // end namespace vtkGenericFiltering
