

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkSmoothPolyDataFilterDotNet.h"

// native includes
#include "strstream"
#include "vtkSmoothPolyDataFilter.h"
#include "vtkObject.h"
#include "vtkPolyData.h"

using namespace System;

namespace vtk {

System::String^ vtkSmoothPolyDataFilter::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkSmoothPolyDataFilter>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkSmoothPolyDataFilter::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkSmoothPolyDataFilter>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkSmoothPolyDataFilter^ vtkSmoothPolyDataFilter::NewInstance()
{
  ::vtkSmoothPolyDataFilter* retVal = static_cast<::vtkSmoothPolyDataFilter*>(vtk::ConvertManagedToNative<::vtkSmoothPolyDataFilter>(m_instance)->NewInstance());
  return gcnew vtkSmoothPolyDataFilter(IntPtr(retVal), false);
}



vtkSmoothPolyDataFilter^ vtkSmoothPolyDataFilter::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkSmoothPolyDataFilter* retVal = static_cast<::vtkSmoothPolyDataFilter*>(::vtkSmoothPolyDataFilter::SafeDownCast(oWrap));
  return gcnew vtkSmoothPolyDataFilter(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkSmoothPolyDataFilter::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkSmoothPolyDataFilter>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkSmoothPolyDataFilter::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkSmoothPolyDataFilter>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkSmoothPolyDataFilter::SetConvergence(double arg0)
{
  vtk::ConvertManagedToNative<::vtkSmoothPolyDataFilter>(m_instance)->SetConvergence(arg0);
}



double vtkSmoothPolyDataFilter::GetConvergenceMinValue()
{
  double retVal = vtk::ConvertManagedToNative<::vtkSmoothPolyDataFilter>(m_instance)->GetConvergenceMinValue();
  return retVal;
}



double vtkSmoothPolyDataFilter::GetConvergenceMaxValue()
{
  double retVal = vtk::ConvertManagedToNative<::vtkSmoothPolyDataFilter>(m_instance)->GetConvergenceMaxValue();
  return retVal;
}



double vtkSmoothPolyDataFilter::GetConvergence()
{
  double retVal = vtk::ConvertManagedToNative<::vtkSmoothPolyDataFilter>(m_instance)->GetConvergence();
  return retVal;
}



void vtkSmoothPolyDataFilter::SetNumberOfIterations(int arg0)
{
  vtk::ConvertManagedToNative<::vtkSmoothPolyDataFilter>(m_instance)->SetNumberOfIterations(arg0);
}



int vtkSmoothPolyDataFilter::GetNumberOfIterationsMinValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkSmoothPolyDataFilter>(m_instance)->GetNumberOfIterationsMinValue();
  return retVal;
}



int vtkSmoothPolyDataFilter::GetNumberOfIterationsMaxValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkSmoothPolyDataFilter>(m_instance)->GetNumberOfIterationsMaxValue();
  return retVal;
}



int vtkSmoothPolyDataFilter::GetNumberOfIterations()
{
  int retVal = vtk::ConvertManagedToNative<::vtkSmoothPolyDataFilter>(m_instance)->GetNumberOfIterations();
  return retVal;
}



void vtkSmoothPolyDataFilter::SetRelaxationFactor(double arg0)
{
  vtk::ConvertManagedToNative<::vtkSmoothPolyDataFilter>(m_instance)->SetRelaxationFactor(arg0);
}



double vtkSmoothPolyDataFilter::GetRelaxationFactor()
{
  double retVal = vtk::ConvertManagedToNative<::vtkSmoothPolyDataFilter>(m_instance)->GetRelaxationFactor();
  return retVal;
}



void vtkSmoothPolyDataFilter::SetFeatureEdgeSmoothing(int arg0)
{
  vtk::ConvertManagedToNative<::vtkSmoothPolyDataFilter>(m_instance)->SetFeatureEdgeSmoothing(arg0);
}



int vtkSmoothPolyDataFilter::GetFeatureEdgeSmoothing()
{
  int retVal = vtk::ConvertManagedToNative<::vtkSmoothPolyDataFilter>(m_instance)->GetFeatureEdgeSmoothing();
  return retVal;
}



void vtkSmoothPolyDataFilter::FeatureEdgeSmoothingOn()
{
  vtk::ConvertManagedToNative<::vtkSmoothPolyDataFilter>(m_instance)->FeatureEdgeSmoothingOn();
}



void vtkSmoothPolyDataFilter::FeatureEdgeSmoothingOff()
{
  vtk::ConvertManagedToNative<::vtkSmoothPolyDataFilter>(m_instance)->FeatureEdgeSmoothingOff();
}



void vtkSmoothPolyDataFilter::SetFeatureAngle(double arg0)
{
  vtk::ConvertManagedToNative<::vtkSmoothPolyDataFilter>(m_instance)->SetFeatureAngle(arg0);
}



double vtkSmoothPolyDataFilter::GetFeatureAngleMinValue()
{
  double retVal = vtk::ConvertManagedToNative<::vtkSmoothPolyDataFilter>(m_instance)->GetFeatureAngleMinValue();
  return retVal;
}



double vtkSmoothPolyDataFilter::GetFeatureAngleMaxValue()
{
  double retVal = vtk::ConvertManagedToNative<::vtkSmoothPolyDataFilter>(m_instance)->GetFeatureAngleMaxValue();
  return retVal;
}



double vtkSmoothPolyDataFilter::GetFeatureAngle()
{
  double retVal = vtk::ConvertManagedToNative<::vtkSmoothPolyDataFilter>(m_instance)->GetFeatureAngle();
  return retVal;
}



void vtkSmoothPolyDataFilter::SetEdgeAngle(double arg0)
{
  vtk::ConvertManagedToNative<::vtkSmoothPolyDataFilter>(m_instance)->SetEdgeAngle(arg0);
}



double vtkSmoothPolyDataFilter::GetEdgeAngleMinValue()
{
  double retVal = vtk::ConvertManagedToNative<::vtkSmoothPolyDataFilter>(m_instance)->GetEdgeAngleMinValue();
  return retVal;
}



double vtkSmoothPolyDataFilter::GetEdgeAngleMaxValue()
{
  double retVal = vtk::ConvertManagedToNative<::vtkSmoothPolyDataFilter>(m_instance)->GetEdgeAngleMaxValue();
  return retVal;
}



double vtkSmoothPolyDataFilter::GetEdgeAngle()
{
  double retVal = vtk::ConvertManagedToNative<::vtkSmoothPolyDataFilter>(m_instance)->GetEdgeAngle();
  return retVal;
}



void vtkSmoothPolyDataFilter::SetBoundarySmoothing(int arg0)
{
  vtk::ConvertManagedToNative<::vtkSmoothPolyDataFilter>(m_instance)->SetBoundarySmoothing(arg0);
}



int vtkSmoothPolyDataFilter::GetBoundarySmoothing()
{
  int retVal = vtk::ConvertManagedToNative<::vtkSmoothPolyDataFilter>(m_instance)->GetBoundarySmoothing();
  return retVal;
}



void vtkSmoothPolyDataFilter::BoundarySmoothingOn()
{
  vtk::ConvertManagedToNative<::vtkSmoothPolyDataFilter>(m_instance)->BoundarySmoothingOn();
}



void vtkSmoothPolyDataFilter::BoundarySmoothingOff()
{
  vtk::ConvertManagedToNative<::vtkSmoothPolyDataFilter>(m_instance)->BoundarySmoothingOff();
}



void vtkSmoothPolyDataFilter::SetGenerateErrorScalars(int arg0)
{
  vtk::ConvertManagedToNative<::vtkSmoothPolyDataFilter>(m_instance)->SetGenerateErrorScalars(arg0);
}



int vtkSmoothPolyDataFilter::GetGenerateErrorScalars()
{
  int retVal = vtk::ConvertManagedToNative<::vtkSmoothPolyDataFilter>(m_instance)->GetGenerateErrorScalars();
  return retVal;
}



void vtkSmoothPolyDataFilter::GenerateErrorScalarsOn()
{
  vtk::ConvertManagedToNative<::vtkSmoothPolyDataFilter>(m_instance)->GenerateErrorScalarsOn();
}



void vtkSmoothPolyDataFilter::GenerateErrorScalarsOff()
{
  vtk::ConvertManagedToNative<::vtkSmoothPolyDataFilter>(m_instance)->GenerateErrorScalarsOff();
}



void vtkSmoothPolyDataFilter::SetGenerateErrorVectors(int arg0)
{
  vtk::ConvertManagedToNative<::vtkSmoothPolyDataFilter>(m_instance)->SetGenerateErrorVectors(arg0);
}



int vtkSmoothPolyDataFilter::GetGenerateErrorVectors()
{
  int retVal = vtk::ConvertManagedToNative<::vtkSmoothPolyDataFilter>(m_instance)->GetGenerateErrorVectors();
  return retVal;
}



void vtkSmoothPolyDataFilter::GenerateErrorVectorsOn()
{
  vtk::ConvertManagedToNative<::vtkSmoothPolyDataFilter>(m_instance)->GenerateErrorVectorsOn();
}



void vtkSmoothPolyDataFilter::GenerateErrorVectorsOff()
{
  vtk::ConvertManagedToNative<::vtkSmoothPolyDataFilter>(m_instance)->GenerateErrorVectorsOff();
}



void vtkSmoothPolyDataFilter::SetSource(vtkPolyData^ source)
{
  ::vtkPolyData* sourceWrap = vtk::ConvertManagedToNative<::vtkPolyData>(source->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkSmoothPolyDataFilter>(m_instance)->SetSource(sourceWrap);
}



vtkPolyData^ vtkSmoothPolyDataFilter::GetSource()
{
  ::vtkPolyData* retVal = static_cast<::vtkPolyData*>(vtk::ConvertManagedToNative<::vtkSmoothPolyDataFilter>(m_instance)->GetSource());
  return gcnew vtkPolyData(IntPtr(retVal), false);
}



  vtkSmoothPolyDataFilter::vtkSmoothPolyDataFilter(System::IntPtr native, bool bConst) : vtkPolyDataAlgorithm(native, bConst) {}



  vtkSmoothPolyDataFilter::vtkSmoothPolyDataFilter(bool donothing) : vtkPolyDataAlgorithm(donothing) {}



  vtkSmoothPolyDataFilter::vtkSmoothPolyDataFilter() : vtkPolyDataAlgorithm(false) {
  this->SetNativePointer(IntPtr(::vtkSmoothPolyDataFilter::New()));
}



  vtkSmoothPolyDataFilter::~vtkSmoothPolyDataFilter() { }





} // end namespace vtkGraphics
