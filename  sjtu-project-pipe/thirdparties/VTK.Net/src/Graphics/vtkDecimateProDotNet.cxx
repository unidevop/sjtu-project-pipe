

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkDecimateProDotNet.h"

// native includes
#include "strstream"
#include "vtkDecimatePro.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkDecimatePro::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkDecimatePro>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkDecimatePro::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkDecimatePro>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkDecimatePro^ vtkDecimatePro::NewInstance()
{
  ::vtkDecimatePro* retVal = static_cast<::vtkDecimatePro*>(vtk::ConvertManagedToNative<::vtkDecimatePro>(m_instance)->NewInstance());
  return gcnew vtkDecimatePro(IntPtr(retVal), false);
}



vtkDecimatePro^ vtkDecimatePro::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkDecimatePro* retVal = static_cast<::vtkDecimatePro*>(::vtkDecimatePro::SafeDownCast(oWrap));
  return gcnew vtkDecimatePro(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkDecimatePro::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkDecimatePro>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkDecimatePro::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkDecimatePro>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkDecimatePro::SetTargetReduction(double arg0)
{
  vtk::ConvertManagedToNative<::vtkDecimatePro>(m_instance)->SetTargetReduction(arg0);
}



double vtkDecimatePro::GetTargetReductionMinValue()
{
  double retVal = vtk::ConvertManagedToNative<::vtkDecimatePro>(m_instance)->GetTargetReductionMinValue();
  return retVal;
}



double vtkDecimatePro::GetTargetReductionMaxValue()
{
  double retVal = vtk::ConvertManagedToNative<::vtkDecimatePro>(m_instance)->GetTargetReductionMaxValue();
  return retVal;
}



double vtkDecimatePro::GetTargetReduction()
{
  double retVal = vtk::ConvertManagedToNative<::vtkDecimatePro>(m_instance)->GetTargetReduction();
  return retVal;
}



void vtkDecimatePro::SetPreserveTopology(int arg0)
{
  vtk::ConvertManagedToNative<::vtkDecimatePro>(m_instance)->SetPreserveTopology(arg0);
}



int vtkDecimatePro::GetPreserveTopology()
{
  int retVal = vtk::ConvertManagedToNative<::vtkDecimatePro>(m_instance)->GetPreserveTopology();
  return retVal;
}



void vtkDecimatePro::PreserveTopologyOn()
{
  vtk::ConvertManagedToNative<::vtkDecimatePro>(m_instance)->PreserveTopologyOn();
}



void vtkDecimatePro::PreserveTopologyOff()
{
  vtk::ConvertManagedToNative<::vtkDecimatePro>(m_instance)->PreserveTopologyOff();
}



void vtkDecimatePro::SetFeatureAngle(double arg0)
{
  vtk::ConvertManagedToNative<::vtkDecimatePro>(m_instance)->SetFeatureAngle(arg0);
}



double vtkDecimatePro::GetFeatureAngleMinValue()
{
  double retVal = vtk::ConvertManagedToNative<::vtkDecimatePro>(m_instance)->GetFeatureAngleMinValue();
  return retVal;
}



double vtkDecimatePro::GetFeatureAngleMaxValue()
{
  double retVal = vtk::ConvertManagedToNative<::vtkDecimatePro>(m_instance)->GetFeatureAngleMaxValue();
  return retVal;
}



double vtkDecimatePro::GetFeatureAngle()
{
  double retVal = vtk::ConvertManagedToNative<::vtkDecimatePro>(m_instance)->GetFeatureAngle();
  return retVal;
}



void vtkDecimatePro::SetSplitting(int arg0)
{
  vtk::ConvertManagedToNative<::vtkDecimatePro>(m_instance)->SetSplitting(arg0);
}



int vtkDecimatePro::GetSplitting()
{
  int retVal = vtk::ConvertManagedToNative<::vtkDecimatePro>(m_instance)->GetSplitting();
  return retVal;
}



void vtkDecimatePro::SplittingOn()
{
  vtk::ConvertManagedToNative<::vtkDecimatePro>(m_instance)->SplittingOn();
}



void vtkDecimatePro::SplittingOff()
{
  vtk::ConvertManagedToNative<::vtkDecimatePro>(m_instance)->SplittingOff();
}



void vtkDecimatePro::SetSplitAngle(double arg0)
{
  vtk::ConvertManagedToNative<::vtkDecimatePro>(m_instance)->SetSplitAngle(arg0);
}



double vtkDecimatePro::GetSplitAngleMinValue()
{
  double retVal = vtk::ConvertManagedToNative<::vtkDecimatePro>(m_instance)->GetSplitAngleMinValue();
  return retVal;
}



double vtkDecimatePro::GetSplitAngleMaxValue()
{
  double retVal = vtk::ConvertManagedToNative<::vtkDecimatePro>(m_instance)->GetSplitAngleMaxValue();
  return retVal;
}



double vtkDecimatePro::GetSplitAngle()
{
  double retVal = vtk::ConvertManagedToNative<::vtkDecimatePro>(m_instance)->GetSplitAngle();
  return retVal;
}



void vtkDecimatePro::SetPreSplitMesh(int arg0)
{
  vtk::ConvertManagedToNative<::vtkDecimatePro>(m_instance)->SetPreSplitMesh(arg0);
}



int vtkDecimatePro::GetPreSplitMesh()
{
  int retVal = vtk::ConvertManagedToNative<::vtkDecimatePro>(m_instance)->GetPreSplitMesh();
  return retVal;
}



void vtkDecimatePro::PreSplitMeshOn()
{
  vtk::ConvertManagedToNative<::vtkDecimatePro>(m_instance)->PreSplitMeshOn();
}



void vtkDecimatePro::PreSplitMeshOff()
{
  vtk::ConvertManagedToNative<::vtkDecimatePro>(m_instance)->PreSplitMeshOff();
}



void vtkDecimatePro::SetMaximumError(double arg0)
{
  vtk::ConvertManagedToNative<::vtkDecimatePro>(m_instance)->SetMaximumError(arg0);
}



double vtkDecimatePro::GetMaximumErrorMinValue()
{
  double retVal = vtk::ConvertManagedToNative<::vtkDecimatePro>(m_instance)->GetMaximumErrorMinValue();
  return retVal;
}



double vtkDecimatePro::GetMaximumErrorMaxValue()
{
  double retVal = vtk::ConvertManagedToNative<::vtkDecimatePro>(m_instance)->GetMaximumErrorMaxValue();
  return retVal;
}



double vtkDecimatePro::GetMaximumError()
{
  double retVal = vtk::ConvertManagedToNative<::vtkDecimatePro>(m_instance)->GetMaximumError();
  return retVal;
}



void vtkDecimatePro::SetAccumulateError(int arg0)
{
  vtk::ConvertManagedToNative<::vtkDecimatePro>(m_instance)->SetAccumulateError(arg0);
}



int vtkDecimatePro::GetAccumulateError()
{
  int retVal = vtk::ConvertManagedToNative<::vtkDecimatePro>(m_instance)->GetAccumulateError();
  return retVal;
}



void vtkDecimatePro::AccumulateErrorOn()
{
  vtk::ConvertManagedToNative<::vtkDecimatePro>(m_instance)->AccumulateErrorOn();
}



void vtkDecimatePro::AccumulateErrorOff()
{
  vtk::ConvertManagedToNative<::vtkDecimatePro>(m_instance)->AccumulateErrorOff();
}



void vtkDecimatePro::SetErrorIsAbsolute(int arg0)
{
  vtk::ConvertManagedToNative<::vtkDecimatePro>(m_instance)->SetErrorIsAbsolute(arg0);
}



int vtkDecimatePro::GetErrorIsAbsolute()
{
  int retVal = vtk::ConvertManagedToNative<::vtkDecimatePro>(m_instance)->GetErrorIsAbsolute();
  return retVal;
}



void vtkDecimatePro::SetAbsoluteError(double arg0)
{
  vtk::ConvertManagedToNative<::vtkDecimatePro>(m_instance)->SetAbsoluteError(arg0);
}



double vtkDecimatePro::GetAbsoluteErrorMinValue()
{
  double retVal = vtk::ConvertManagedToNative<::vtkDecimatePro>(m_instance)->GetAbsoluteErrorMinValue();
  return retVal;
}



double vtkDecimatePro::GetAbsoluteErrorMaxValue()
{
  double retVal = vtk::ConvertManagedToNative<::vtkDecimatePro>(m_instance)->GetAbsoluteErrorMaxValue();
  return retVal;
}



double vtkDecimatePro::GetAbsoluteError()
{
  double retVal = vtk::ConvertManagedToNative<::vtkDecimatePro>(m_instance)->GetAbsoluteError();
  return retVal;
}



void vtkDecimatePro::SetBoundaryVertexDeletion(int arg0)
{
  vtk::ConvertManagedToNative<::vtkDecimatePro>(m_instance)->SetBoundaryVertexDeletion(arg0);
}



int vtkDecimatePro::GetBoundaryVertexDeletion()
{
  int retVal = vtk::ConvertManagedToNative<::vtkDecimatePro>(m_instance)->GetBoundaryVertexDeletion();
  return retVal;
}



void vtkDecimatePro::BoundaryVertexDeletionOn()
{
  vtk::ConvertManagedToNative<::vtkDecimatePro>(m_instance)->BoundaryVertexDeletionOn();
}



void vtkDecimatePro::BoundaryVertexDeletionOff()
{
  vtk::ConvertManagedToNative<::vtkDecimatePro>(m_instance)->BoundaryVertexDeletionOff();
}



void vtkDecimatePro::SetDegree(int arg0)
{
  vtk::ConvertManagedToNative<::vtkDecimatePro>(m_instance)->SetDegree(arg0);
}



int vtkDecimatePro::GetDegreeMinValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkDecimatePro>(m_instance)->GetDegreeMinValue();
  return retVal;
}



int vtkDecimatePro::GetDegreeMaxValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkDecimatePro>(m_instance)->GetDegreeMaxValue();
  return retVal;
}



int vtkDecimatePro::GetDegree()
{
  int retVal = vtk::ConvertManagedToNative<::vtkDecimatePro>(m_instance)->GetDegree();
  return retVal;
}



void vtkDecimatePro::SetInflectionPointRatio(double arg0)
{
  vtk::ConvertManagedToNative<::vtkDecimatePro>(m_instance)->SetInflectionPointRatio(arg0);
}



double vtkDecimatePro::GetInflectionPointRatioMinValue()
{
  double retVal = vtk::ConvertManagedToNative<::vtkDecimatePro>(m_instance)->GetInflectionPointRatioMinValue();
  return retVal;
}



double vtkDecimatePro::GetInflectionPointRatioMaxValue()
{
  double retVal = vtk::ConvertManagedToNative<::vtkDecimatePro>(m_instance)->GetInflectionPointRatioMaxValue();
  return retVal;
}



double vtkDecimatePro::GetInflectionPointRatio()
{
  double retVal = vtk::ConvertManagedToNative<::vtkDecimatePro>(m_instance)->GetInflectionPointRatio();
  return retVal;
}



int vtkDecimatePro::GetNumberOfInflectionPoints()
{
  int retVal = vtk::ConvertManagedToNative<::vtkDecimatePro>(m_instance)->GetNumberOfInflectionPoints();
  return retVal;
}



void vtkDecimatePro::GetInflectionPoints(array<double>^ inflectionPoints)
{
  pin_ptr<double> inflectionPointsPin = &inflectionPoints[0];
  double* nativeinflectionPointsPin = inflectionPointsPin;
  vtk::ConvertManagedToNative<::vtkDecimatePro>(m_instance)->GetInflectionPoints(nativeinflectionPointsPin);
}



  vtkDecimatePro::vtkDecimatePro(System::IntPtr native, bool bConst) : vtkPolyDataAlgorithm(native, bConst) {}



  vtkDecimatePro::vtkDecimatePro(bool donothing) : vtkPolyDataAlgorithm(donothing) {}



  vtkDecimatePro::vtkDecimatePro() : vtkPolyDataAlgorithm(false) {
  this->SetNativePointer(IntPtr(::vtkDecimatePro::New()));
}



  vtkDecimatePro::~vtkDecimatePro() { }





} // end namespace vtkGraphics
