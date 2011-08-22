

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkStreamerDotNet.h"

// native includes
#include "strstream"
#include "vtkStreamer.h"
#include "vtkDataSet.h"
#include "vtkInitialValueProblemSolver.h"

using namespace System;

namespace vtk {

System::String^ vtkStreamer::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkStreamer>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkStreamer::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkStreamer>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkStreamer^ vtkStreamer::NewInstance()
{
  ::vtkStreamer* retVal = static_cast<::vtkStreamer*>(vtk::ConvertManagedToNative<::vtkStreamer>(m_instance)->NewInstance());
  return gcnew vtkStreamer(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkStreamer::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkStreamer>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkStreamer::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkStreamer>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkStreamer::SetStartLocation(int cellId, int subId, array<double>^ pcoords)
{
  pin_ptr<double> pcoordsPin = &pcoords[0];
  double* nativepcoordsPin = pcoordsPin;
  vtk::ConvertManagedToNative<::vtkStreamer>(m_instance)->SetStartLocation(cellId, subId, nativepcoordsPin);
}



void vtkStreamer::SetStartLocation(int cellId, int subId, double r, double s, double t)
{
  vtk::ConvertManagedToNative<::vtkStreamer>(m_instance)->SetStartLocation(cellId, subId, r, s, t);
}



int vtkStreamer::GetStartLocation(int% subId, array<double>^ pcoords)
{
  pin_ptr<int> subIdPin = &subId;
  pin_ptr<double> pcoordsPin = &pcoords[0];
  double* nativepcoordsPin = pcoordsPin;
  int retVal = vtk::ConvertManagedToNative<::vtkStreamer>(m_instance)->GetStartLocation(*subIdPin, nativepcoordsPin);
  return retVal;
}



void vtkStreamer::SetStartPosition(array<double>^ x)
{
  pin_ptr<double> xPin = &x[0];
  double* nativexPin = xPin;
  vtk::ConvertManagedToNative<::vtkStreamer>(m_instance)->SetStartPosition(nativexPin);
}



void vtkStreamer::SetStartPosition(double x, double y, double z)
{
  vtk::ConvertManagedToNative<::vtkStreamer>(m_instance)->SetStartPosition(x, y, z);
}



array<double>^ vtkStreamer::GetStartPosition()
{
  const double* retVal = vtk::ConvertManagedToNative<::vtkStreamer>(m_instance)->GetStartPosition();
  array<double>^ mRetVal = gcnew array<double>(3);
  for (size_t cprIdx=0; cprIdx<3; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



void vtkStreamer::SetSource(vtkDataSet^ source)
{
  ::vtkDataSet* sourceWrap = vtk::ConvertManagedToNative<::vtkDataSet>(source->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkStreamer>(m_instance)->SetSource(sourceWrap);
}



vtkDataSet^ vtkStreamer::GetSource()
{
  ::vtkDataSet* retVal = static_cast<::vtkDataSet*>(vtk::ConvertManagedToNative<::vtkStreamer>(m_instance)->GetSource());
  return gcnew vtkDataSet(IntPtr(retVal), false);
}



void vtkStreamer::SetMaximumPropagationTime(double arg0)
{
  vtk::ConvertManagedToNative<::vtkStreamer>(m_instance)->SetMaximumPropagationTime(arg0);
}



double vtkStreamer::GetMaximumPropagationTimeMinValue()
{
  double retVal = vtk::ConvertManagedToNative<::vtkStreamer>(m_instance)->GetMaximumPropagationTimeMinValue();
  return retVal;
}



double vtkStreamer::GetMaximumPropagationTimeMaxValue()
{
  double retVal = vtk::ConvertManagedToNative<::vtkStreamer>(m_instance)->GetMaximumPropagationTimeMaxValue();
  return retVal;
}



double vtkStreamer::GetMaximumPropagationTime()
{
  double retVal = vtk::ConvertManagedToNative<::vtkStreamer>(m_instance)->GetMaximumPropagationTime();
  return retVal;
}



void vtkStreamer::SetIntegrationDirection(int arg0)
{
  vtk::ConvertManagedToNative<::vtkStreamer>(m_instance)->SetIntegrationDirection(arg0);
}



int vtkStreamer::GetIntegrationDirectionMinValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkStreamer>(m_instance)->GetIntegrationDirectionMinValue();
  return retVal;
}



int vtkStreamer::GetIntegrationDirectionMaxValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkStreamer>(m_instance)->GetIntegrationDirectionMaxValue();
  return retVal;
}



int vtkStreamer::GetIntegrationDirection()
{
  int retVal = vtk::ConvertManagedToNative<::vtkStreamer>(m_instance)->GetIntegrationDirection();
  return retVal;
}



void vtkStreamer::SetIntegrationDirectionToForward()
{
  vtk::ConvertManagedToNative<::vtkStreamer>(m_instance)->SetIntegrationDirectionToForward();
}



void vtkStreamer::SetIntegrationDirectionToBackward()
{
  vtk::ConvertManagedToNative<::vtkStreamer>(m_instance)->SetIntegrationDirectionToBackward();
}



void vtkStreamer::SetIntegrationDirectionToIntegrateBothDirections()
{
  vtk::ConvertManagedToNative<::vtkStreamer>(m_instance)->SetIntegrationDirectionToIntegrateBothDirections();
}



System::String^ vtkStreamer::GetIntegrationDirectionAsString()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkStreamer>(m_instance)->GetIntegrationDirectionAsString();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



void vtkStreamer::SetIntegrationStepLength(double arg0)
{
  vtk::ConvertManagedToNative<::vtkStreamer>(m_instance)->SetIntegrationStepLength(arg0);
}



double vtkStreamer::GetIntegrationStepLengthMinValue()
{
  double retVal = vtk::ConvertManagedToNative<::vtkStreamer>(m_instance)->GetIntegrationStepLengthMinValue();
  return retVal;
}



double vtkStreamer::GetIntegrationStepLengthMaxValue()
{
  double retVal = vtk::ConvertManagedToNative<::vtkStreamer>(m_instance)->GetIntegrationStepLengthMaxValue();
  return retVal;
}



double vtkStreamer::GetIntegrationStepLength()
{
  double retVal = vtk::ConvertManagedToNative<::vtkStreamer>(m_instance)->GetIntegrationStepLength();
  return retVal;
}



void vtkStreamer::SetSpeedScalars(int arg0)
{
  vtk::ConvertManagedToNative<::vtkStreamer>(m_instance)->SetSpeedScalars(arg0);
}



int vtkStreamer::GetSpeedScalars()
{
  int retVal = vtk::ConvertManagedToNative<::vtkStreamer>(m_instance)->GetSpeedScalars();
  return retVal;
}



void vtkStreamer::SpeedScalarsOn()
{
  vtk::ConvertManagedToNative<::vtkStreamer>(m_instance)->SpeedScalarsOn();
}



void vtkStreamer::SpeedScalarsOff()
{
  vtk::ConvertManagedToNative<::vtkStreamer>(m_instance)->SpeedScalarsOff();
}



void vtkStreamer::SetOrientationScalars(int arg0)
{
  vtk::ConvertManagedToNative<::vtkStreamer>(m_instance)->SetOrientationScalars(arg0);
}



int vtkStreamer::GetOrientationScalars()
{
  int retVal = vtk::ConvertManagedToNative<::vtkStreamer>(m_instance)->GetOrientationScalars();
  return retVal;
}



void vtkStreamer::OrientationScalarsOn()
{
  vtk::ConvertManagedToNative<::vtkStreamer>(m_instance)->OrientationScalarsOn();
}



void vtkStreamer::OrientationScalarsOff()
{
  vtk::ConvertManagedToNative<::vtkStreamer>(m_instance)->OrientationScalarsOff();
}



void vtkStreamer::SetTerminalSpeed(double arg0)
{
  vtk::ConvertManagedToNative<::vtkStreamer>(m_instance)->SetTerminalSpeed(arg0);
}



double vtkStreamer::GetTerminalSpeedMinValue()
{
  double retVal = vtk::ConvertManagedToNative<::vtkStreamer>(m_instance)->GetTerminalSpeedMinValue();
  return retVal;
}



double vtkStreamer::GetTerminalSpeedMaxValue()
{
  double retVal = vtk::ConvertManagedToNative<::vtkStreamer>(m_instance)->GetTerminalSpeedMaxValue();
  return retVal;
}



double vtkStreamer::GetTerminalSpeed()
{
  double retVal = vtk::ConvertManagedToNative<::vtkStreamer>(m_instance)->GetTerminalSpeed();
  return retVal;
}



void vtkStreamer::SetVorticity(int arg0)
{
  vtk::ConvertManagedToNative<::vtkStreamer>(m_instance)->SetVorticity(arg0);
}



int vtkStreamer::GetVorticity()
{
  int retVal = vtk::ConvertManagedToNative<::vtkStreamer>(m_instance)->GetVorticity();
  return retVal;
}



void vtkStreamer::VorticityOn()
{
  vtk::ConvertManagedToNative<::vtkStreamer>(m_instance)->VorticityOn();
}



void vtkStreamer::VorticityOff()
{
  vtk::ConvertManagedToNative<::vtkStreamer>(m_instance)->VorticityOff();
}



void vtkStreamer::SetNumberOfThreads(int arg0)
{
  vtk::ConvertManagedToNative<::vtkStreamer>(m_instance)->SetNumberOfThreads(arg0);
}



int vtkStreamer::GetNumberOfThreads()
{
  int retVal = vtk::ConvertManagedToNative<::vtkStreamer>(m_instance)->GetNumberOfThreads();
  return retVal;
}



void vtkStreamer::SetSavePointInterval(double arg0)
{
  vtk::ConvertManagedToNative<::vtkStreamer>(m_instance)->SetSavePointInterval(arg0);
}



double vtkStreamer::GetSavePointInterval()
{
  double retVal = vtk::ConvertManagedToNative<::vtkStreamer>(m_instance)->GetSavePointInterval();
  return retVal;
}



void vtkStreamer::SetIntegrator(vtkInitialValueProblemSolver^ arg0)
{
  ::vtkInitialValueProblemSolver* arg0Wrap = vtk::ConvertManagedToNative<::vtkInitialValueProblemSolver>(arg0->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkStreamer>(m_instance)->SetIntegrator(arg0Wrap);
}



vtkInitialValueProblemSolver^ vtkStreamer::GetIntegrator()
{
  ::vtkInitialValueProblemSolver* retVal = static_cast<::vtkInitialValueProblemSolver*>(vtk::ConvertManagedToNative<::vtkStreamer>(m_instance)->GetIntegrator());
  return gcnew vtkInitialValueProblemSolver(IntPtr(retVal), false);
}



  vtkStreamer::vtkStreamer(System::IntPtr native, bool bConst) : vtkPolyDataAlgorithm(native, bConst) {}



  vtkStreamer::vtkStreamer(bool donothing) : vtkPolyDataAlgorithm(donothing) {}



  vtkStreamer::vtkStreamer() : vtkPolyDataAlgorithm(false) {
  this->SetNativePointer(IntPtr(::vtkStreamer::New()));
}



  vtkStreamer::~vtkStreamer() { }





} // end namespace vtkGraphics
