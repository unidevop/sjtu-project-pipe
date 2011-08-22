

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkHyperStreamlineDotNet.h"

// native includes
#include "strstream"
#include "vtkHyperStreamline.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkHyperStreamline::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkHyperStreamline>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkHyperStreamline::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkHyperStreamline>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkHyperStreamline^ vtkHyperStreamline::NewInstance()
{
  ::vtkHyperStreamline* retVal = static_cast<::vtkHyperStreamline*>(vtk::ConvertManagedToNative<::vtkHyperStreamline>(m_instance)->NewInstance());
  return gcnew vtkHyperStreamline(IntPtr(retVal), false);
}



vtkHyperStreamline^ vtkHyperStreamline::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkHyperStreamline* retVal = static_cast<::vtkHyperStreamline*>(::vtkHyperStreamline::SafeDownCast(oWrap));
  return gcnew vtkHyperStreamline(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkHyperStreamline::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkHyperStreamline>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkHyperStreamline::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkHyperStreamline>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkHyperStreamline::SetStartLocation(int cellId, int subId, array<double>^ pcoords)
{
  pin_ptr<double> pcoordsPin = &pcoords[0];
  double* nativepcoordsPin = pcoordsPin;
  vtk::ConvertManagedToNative<::vtkHyperStreamline>(m_instance)->SetStartLocation(cellId, subId, nativepcoordsPin);
}



void vtkHyperStreamline::SetStartLocation(int cellId, int subId, double r, double s, double t)
{
  vtk::ConvertManagedToNative<::vtkHyperStreamline>(m_instance)->SetStartLocation(cellId, subId, r, s, t);
}



int vtkHyperStreamline::GetStartLocation(int% subId, array<double>^ pcoords)
{
  pin_ptr<int> subIdPin = &subId;
  pin_ptr<double> pcoordsPin = &pcoords[0];
  double* nativepcoordsPin = pcoordsPin;
  int retVal = vtk::ConvertManagedToNative<::vtkHyperStreamline>(m_instance)->GetStartLocation(*subIdPin, nativepcoordsPin);
  return retVal;
}



void vtkHyperStreamline::SetStartPosition(array<double>^ x)
{
  pin_ptr<double> xPin = &x[0];
  double* nativexPin = xPin;
  vtk::ConvertManagedToNative<::vtkHyperStreamline>(m_instance)->SetStartPosition(nativexPin);
}



void vtkHyperStreamline::SetStartPosition(double x, double y, double z)
{
  vtk::ConvertManagedToNative<::vtkHyperStreamline>(m_instance)->SetStartPosition(x, y, z);
}



array<double>^ vtkHyperStreamline::GetStartPosition()
{
  const double* retVal = vtk::ConvertManagedToNative<::vtkHyperStreamline>(m_instance)->GetStartPosition();
  array<double>^ mRetVal = gcnew array<double>(3);
  for (size_t cprIdx=0; cprIdx<3; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



void vtkHyperStreamline::SetMaximumPropagationDistance(double arg0)
{
  vtk::ConvertManagedToNative<::vtkHyperStreamline>(m_instance)->SetMaximumPropagationDistance(arg0);
}



double vtkHyperStreamline::GetMaximumPropagationDistanceMinValue()
{
  double retVal = vtk::ConvertManagedToNative<::vtkHyperStreamline>(m_instance)->GetMaximumPropagationDistanceMinValue();
  return retVal;
}



double vtkHyperStreamline::GetMaximumPropagationDistanceMaxValue()
{
  double retVal = vtk::ConvertManagedToNative<::vtkHyperStreamline>(m_instance)->GetMaximumPropagationDistanceMaxValue();
  return retVal;
}



double vtkHyperStreamline::GetMaximumPropagationDistance()
{
  double retVal = vtk::ConvertManagedToNative<::vtkHyperStreamline>(m_instance)->GetMaximumPropagationDistance();
  return retVal;
}



void vtkHyperStreamline::SetIntegrationEigenvector(int arg0)
{
  vtk::ConvertManagedToNative<::vtkHyperStreamline>(m_instance)->SetIntegrationEigenvector(arg0);
}



int vtkHyperStreamline::GetIntegrationEigenvectorMinValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkHyperStreamline>(m_instance)->GetIntegrationEigenvectorMinValue();
  return retVal;
}



int vtkHyperStreamline::GetIntegrationEigenvectorMaxValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkHyperStreamline>(m_instance)->GetIntegrationEigenvectorMaxValue();
  return retVal;
}



int vtkHyperStreamline::GetIntegrationEigenvector()
{
  int retVal = vtk::ConvertManagedToNative<::vtkHyperStreamline>(m_instance)->GetIntegrationEigenvector();
  return retVal;
}



void vtkHyperStreamline::SetIntegrationEigenvectorToMajor()
{
  vtk::ConvertManagedToNative<::vtkHyperStreamline>(m_instance)->SetIntegrationEigenvectorToMajor();
}



void vtkHyperStreamline::SetIntegrationEigenvectorToMedium()
{
  vtk::ConvertManagedToNative<::vtkHyperStreamline>(m_instance)->SetIntegrationEigenvectorToMedium();
}



void vtkHyperStreamline::SetIntegrationEigenvectorToMinor()
{
  vtk::ConvertManagedToNative<::vtkHyperStreamline>(m_instance)->SetIntegrationEigenvectorToMinor();
}



void vtkHyperStreamline::IntegrateMajorEigenvector()
{
  vtk::ConvertManagedToNative<::vtkHyperStreamline>(m_instance)->IntegrateMajorEigenvector();
}



void vtkHyperStreamline::IntegrateMediumEigenvector()
{
  vtk::ConvertManagedToNative<::vtkHyperStreamline>(m_instance)->IntegrateMediumEigenvector();
}



void vtkHyperStreamline::IntegrateMinorEigenvector()
{
  vtk::ConvertManagedToNative<::vtkHyperStreamline>(m_instance)->IntegrateMinorEigenvector();
}



void vtkHyperStreamline::SetIntegrationStepLength(double arg0)
{
  vtk::ConvertManagedToNative<::vtkHyperStreamline>(m_instance)->SetIntegrationStepLength(arg0);
}



double vtkHyperStreamline::GetIntegrationStepLengthMinValue()
{
  double retVal = vtk::ConvertManagedToNative<::vtkHyperStreamline>(m_instance)->GetIntegrationStepLengthMinValue();
  return retVal;
}



double vtkHyperStreamline::GetIntegrationStepLengthMaxValue()
{
  double retVal = vtk::ConvertManagedToNative<::vtkHyperStreamline>(m_instance)->GetIntegrationStepLengthMaxValue();
  return retVal;
}



double vtkHyperStreamline::GetIntegrationStepLength()
{
  double retVal = vtk::ConvertManagedToNative<::vtkHyperStreamline>(m_instance)->GetIntegrationStepLength();
  return retVal;
}



void vtkHyperStreamline::SetStepLength(double arg0)
{
  vtk::ConvertManagedToNative<::vtkHyperStreamline>(m_instance)->SetStepLength(arg0);
}



double vtkHyperStreamline::GetStepLengthMinValue()
{
  double retVal = vtk::ConvertManagedToNative<::vtkHyperStreamline>(m_instance)->GetStepLengthMinValue();
  return retVal;
}



double vtkHyperStreamline::GetStepLengthMaxValue()
{
  double retVal = vtk::ConvertManagedToNative<::vtkHyperStreamline>(m_instance)->GetStepLengthMaxValue();
  return retVal;
}



double vtkHyperStreamline::GetStepLength()
{
  double retVal = vtk::ConvertManagedToNative<::vtkHyperStreamline>(m_instance)->GetStepLength();
  return retVal;
}



void vtkHyperStreamline::SetIntegrationDirection(int arg0)
{
  vtk::ConvertManagedToNative<::vtkHyperStreamline>(m_instance)->SetIntegrationDirection(arg0);
}



int vtkHyperStreamline::GetIntegrationDirectionMinValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkHyperStreamline>(m_instance)->GetIntegrationDirectionMinValue();
  return retVal;
}



int vtkHyperStreamline::GetIntegrationDirectionMaxValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkHyperStreamline>(m_instance)->GetIntegrationDirectionMaxValue();
  return retVal;
}



int vtkHyperStreamline::GetIntegrationDirection()
{
  int retVal = vtk::ConvertManagedToNative<::vtkHyperStreamline>(m_instance)->GetIntegrationDirection();
  return retVal;
}



void vtkHyperStreamline::SetIntegrationDirectionToForward()
{
  vtk::ConvertManagedToNative<::vtkHyperStreamline>(m_instance)->SetIntegrationDirectionToForward();
}



void vtkHyperStreamline::SetIntegrationDirectionToBackward()
{
  vtk::ConvertManagedToNative<::vtkHyperStreamline>(m_instance)->SetIntegrationDirectionToBackward();
}



void vtkHyperStreamline::SetIntegrationDirectionToIntegrateBothDirections()
{
  vtk::ConvertManagedToNative<::vtkHyperStreamline>(m_instance)->SetIntegrationDirectionToIntegrateBothDirections();
}



void vtkHyperStreamline::SetTerminalEigenvalue(double arg0)
{
  vtk::ConvertManagedToNative<::vtkHyperStreamline>(m_instance)->SetTerminalEigenvalue(arg0);
}



double vtkHyperStreamline::GetTerminalEigenvalueMinValue()
{
  double retVal = vtk::ConvertManagedToNative<::vtkHyperStreamline>(m_instance)->GetTerminalEigenvalueMinValue();
  return retVal;
}



double vtkHyperStreamline::GetTerminalEigenvalueMaxValue()
{
  double retVal = vtk::ConvertManagedToNative<::vtkHyperStreamline>(m_instance)->GetTerminalEigenvalueMaxValue();
  return retVal;
}



double vtkHyperStreamline::GetTerminalEigenvalue()
{
  double retVal = vtk::ConvertManagedToNative<::vtkHyperStreamline>(m_instance)->GetTerminalEigenvalue();
  return retVal;
}



void vtkHyperStreamline::SetNumberOfSides(int arg0)
{
  vtk::ConvertManagedToNative<::vtkHyperStreamline>(m_instance)->SetNumberOfSides(arg0);
}



int vtkHyperStreamline::GetNumberOfSidesMinValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkHyperStreamline>(m_instance)->GetNumberOfSidesMinValue();
  return retVal;
}



int vtkHyperStreamline::GetNumberOfSidesMaxValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkHyperStreamline>(m_instance)->GetNumberOfSidesMaxValue();
  return retVal;
}



int vtkHyperStreamline::GetNumberOfSides()
{
  int retVal = vtk::ConvertManagedToNative<::vtkHyperStreamline>(m_instance)->GetNumberOfSides();
  return retVal;
}



void vtkHyperStreamline::SetRadius(double arg0)
{
  vtk::ConvertManagedToNative<::vtkHyperStreamline>(m_instance)->SetRadius(arg0);
}



double vtkHyperStreamline::GetRadiusMinValue()
{
  double retVal = vtk::ConvertManagedToNative<::vtkHyperStreamline>(m_instance)->GetRadiusMinValue();
  return retVal;
}



double vtkHyperStreamline::GetRadiusMaxValue()
{
  double retVal = vtk::ConvertManagedToNative<::vtkHyperStreamline>(m_instance)->GetRadiusMaxValue();
  return retVal;
}



double vtkHyperStreamline::GetRadius()
{
  double retVal = vtk::ConvertManagedToNative<::vtkHyperStreamline>(m_instance)->GetRadius();
  return retVal;
}



void vtkHyperStreamline::SetLogScaling(int arg0)
{
  vtk::ConvertManagedToNative<::vtkHyperStreamline>(m_instance)->SetLogScaling(arg0);
}



int vtkHyperStreamline::GetLogScaling()
{
  int retVal = vtk::ConvertManagedToNative<::vtkHyperStreamline>(m_instance)->GetLogScaling();
  return retVal;
}



void vtkHyperStreamline::LogScalingOn()
{
  vtk::ConvertManagedToNative<::vtkHyperStreamline>(m_instance)->LogScalingOn();
}



void vtkHyperStreamline::LogScalingOff()
{
  vtk::ConvertManagedToNative<::vtkHyperStreamline>(m_instance)->LogScalingOff();
}



  vtkHyperStreamline::vtkHyperStreamline(System::IntPtr native, bool bConst) : vtkPolyDataAlgorithm(native, bConst) {}



  vtkHyperStreamline::vtkHyperStreamline(bool donothing) : vtkPolyDataAlgorithm(donothing) {}



  vtkHyperStreamline::vtkHyperStreamline() : vtkPolyDataAlgorithm(false) {
  this->SetNativePointer(IntPtr(::vtkHyperStreamline::New()));
}



  vtkHyperStreamline::~vtkHyperStreamline() { }





} // end namespace vtkGraphics
