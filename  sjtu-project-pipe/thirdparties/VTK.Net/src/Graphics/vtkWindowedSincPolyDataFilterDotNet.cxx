

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkWindowedSincPolyDataFilterDotNet.h"

// native includes
#include "strstream"
#include "vtkWindowedSincPolyDataFilter.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkWindowedSincPolyDataFilter::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkWindowedSincPolyDataFilter>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkWindowedSincPolyDataFilter::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkWindowedSincPolyDataFilter>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkWindowedSincPolyDataFilter^ vtkWindowedSincPolyDataFilter::NewInstance()
{
  ::vtkWindowedSincPolyDataFilter* retVal = static_cast<::vtkWindowedSincPolyDataFilter*>(vtk::ConvertManagedToNative<::vtkWindowedSincPolyDataFilter>(m_instance)->NewInstance());
  return gcnew vtkWindowedSincPolyDataFilter(IntPtr(retVal), false);
}



vtkWindowedSincPolyDataFilter^ vtkWindowedSincPolyDataFilter::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkWindowedSincPolyDataFilter* retVal = static_cast<::vtkWindowedSincPolyDataFilter*>(::vtkWindowedSincPolyDataFilter::SafeDownCast(oWrap));
  return gcnew vtkWindowedSincPolyDataFilter(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkWindowedSincPolyDataFilter::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkWindowedSincPolyDataFilter>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkWindowedSincPolyDataFilter::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkWindowedSincPolyDataFilter>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkWindowedSincPolyDataFilter::SetNumberOfIterations(int arg0)
{
  vtk::ConvertManagedToNative<::vtkWindowedSincPolyDataFilter>(m_instance)->SetNumberOfIterations(arg0);
}



int vtkWindowedSincPolyDataFilter::GetNumberOfIterationsMinValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkWindowedSincPolyDataFilter>(m_instance)->GetNumberOfIterationsMinValue();
  return retVal;
}



int vtkWindowedSincPolyDataFilter::GetNumberOfIterationsMaxValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkWindowedSincPolyDataFilter>(m_instance)->GetNumberOfIterationsMaxValue();
  return retVal;
}



int vtkWindowedSincPolyDataFilter::GetNumberOfIterations()
{
  int retVal = vtk::ConvertManagedToNative<::vtkWindowedSincPolyDataFilter>(m_instance)->GetNumberOfIterations();
  return retVal;
}



void vtkWindowedSincPolyDataFilter::SetPassBand(double arg0)
{
  vtk::ConvertManagedToNative<::vtkWindowedSincPolyDataFilter>(m_instance)->SetPassBand(arg0);
}



double vtkWindowedSincPolyDataFilter::GetPassBandMinValue()
{
  double retVal = vtk::ConvertManagedToNative<::vtkWindowedSincPolyDataFilter>(m_instance)->GetPassBandMinValue();
  return retVal;
}



double vtkWindowedSincPolyDataFilter::GetPassBandMaxValue()
{
  double retVal = vtk::ConvertManagedToNative<::vtkWindowedSincPolyDataFilter>(m_instance)->GetPassBandMaxValue();
  return retVal;
}



double vtkWindowedSincPolyDataFilter::GetPassBand()
{
  double retVal = vtk::ConvertManagedToNative<::vtkWindowedSincPolyDataFilter>(m_instance)->GetPassBand();
  return retVal;
}



void vtkWindowedSincPolyDataFilter::SetNormalizeCoordinates(int arg0)
{
  vtk::ConvertManagedToNative<::vtkWindowedSincPolyDataFilter>(m_instance)->SetNormalizeCoordinates(arg0);
}



int vtkWindowedSincPolyDataFilter::GetNormalizeCoordinates()
{
  int retVal = vtk::ConvertManagedToNative<::vtkWindowedSincPolyDataFilter>(m_instance)->GetNormalizeCoordinates();
  return retVal;
}



void vtkWindowedSincPolyDataFilter::NormalizeCoordinatesOn()
{
  vtk::ConvertManagedToNative<::vtkWindowedSincPolyDataFilter>(m_instance)->NormalizeCoordinatesOn();
}



void vtkWindowedSincPolyDataFilter::NormalizeCoordinatesOff()
{
  vtk::ConvertManagedToNative<::vtkWindowedSincPolyDataFilter>(m_instance)->NormalizeCoordinatesOff();
}



void vtkWindowedSincPolyDataFilter::SetFeatureEdgeSmoothing(int arg0)
{
  vtk::ConvertManagedToNative<::vtkWindowedSincPolyDataFilter>(m_instance)->SetFeatureEdgeSmoothing(arg0);
}



int vtkWindowedSincPolyDataFilter::GetFeatureEdgeSmoothing()
{
  int retVal = vtk::ConvertManagedToNative<::vtkWindowedSincPolyDataFilter>(m_instance)->GetFeatureEdgeSmoothing();
  return retVal;
}



void vtkWindowedSincPolyDataFilter::FeatureEdgeSmoothingOn()
{
  vtk::ConvertManagedToNative<::vtkWindowedSincPolyDataFilter>(m_instance)->FeatureEdgeSmoothingOn();
}



void vtkWindowedSincPolyDataFilter::FeatureEdgeSmoothingOff()
{
  vtk::ConvertManagedToNative<::vtkWindowedSincPolyDataFilter>(m_instance)->FeatureEdgeSmoothingOff();
}



void vtkWindowedSincPolyDataFilter::SetFeatureAngle(double arg0)
{
  vtk::ConvertManagedToNative<::vtkWindowedSincPolyDataFilter>(m_instance)->SetFeatureAngle(arg0);
}



double vtkWindowedSincPolyDataFilter::GetFeatureAngleMinValue()
{
  double retVal = vtk::ConvertManagedToNative<::vtkWindowedSincPolyDataFilter>(m_instance)->GetFeatureAngleMinValue();
  return retVal;
}



double vtkWindowedSincPolyDataFilter::GetFeatureAngleMaxValue()
{
  double retVal = vtk::ConvertManagedToNative<::vtkWindowedSincPolyDataFilter>(m_instance)->GetFeatureAngleMaxValue();
  return retVal;
}



double vtkWindowedSincPolyDataFilter::GetFeatureAngle()
{
  double retVal = vtk::ConvertManagedToNative<::vtkWindowedSincPolyDataFilter>(m_instance)->GetFeatureAngle();
  return retVal;
}



void vtkWindowedSincPolyDataFilter::SetEdgeAngle(double arg0)
{
  vtk::ConvertManagedToNative<::vtkWindowedSincPolyDataFilter>(m_instance)->SetEdgeAngle(arg0);
}



double vtkWindowedSincPolyDataFilter::GetEdgeAngleMinValue()
{
  double retVal = vtk::ConvertManagedToNative<::vtkWindowedSincPolyDataFilter>(m_instance)->GetEdgeAngleMinValue();
  return retVal;
}



double vtkWindowedSincPolyDataFilter::GetEdgeAngleMaxValue()
{
  double retVal = vtk::ConvertManagedToNative<::vtkWindowedSincPolyDataFilter>(m_instance)->GetEdgeAngleMaxValue();
  return retVal;
}



double vtkWindowedSincPolyDataFilter::GetEdgeAngle()
{
  double retVal = vtk::ConvertManagedToNative<::vtkWindowedSincPolyDataFilter>(m_instance)->GetEdgeAngle();
  return retVal;
}



void vtkWindowedSincPolyDataFilter::SetBoundarySmoothing(int arg0)
{
  vtk::ConvertManagedToNative<::vtkWindowedSincPolyDataFilter>(m_instance)->SetBoundarySmoothing(arg0);
}



int vtkWindowedSincPolyDataFilter::GetBoundarySmoothing()
{
  int retVal = vtk::ConvertManagedToNative<::vtkWindowedSincPolyDataFilter>(m_instance)->GetBoundarySmoothing();
  return retVal;
}



void vtkWindowedSincPolyDataFilter::BoundarySmoothingOn()
{
  vtk::ConvertManagedToNative<::vtkWindowedSincPolyDataFilter>(m_instance)->BoundarySmoothingOn();
}



void vtkWindowedSincPolyDataFilter::BoundarySmoothingOff()
{
  vtk::ConvertManagedToNative<::vtkWindowedSincPolyDataFilter>(m_instance)->BoundarySmoothingOff();
}



void vtkWindowedSincPolyDataFilter::SetNonManifoldSmoothing(int arg0)
{
  vtk::ConvertManagedToNative<::vtkWindowedSincPolyDataFilter>(m_instance)->SetNonManifoldSmoothing(arg0);
}



int vtkWindowedSincPolyDataFilter::GetNonManifoldSmoothing()
{
  int retVal = vtk::ConvertManagedToNative<::vtkWindowedSincPolyDataFilter>(m_instance)->GetNonManifoldSmoothing();
  return retVal;
}



void vtkWindowedSincPolyDataFilter::NonManifoldSmoothingOn()
{
  vtk::ConvertManagedToNative<::vtkWindowedSincPolyDataFilter>(m_instance)->NonManifoldSmoothingOn();
}



void vtkWindowedSincPolyDataFilter::NonManifoldSmoothingOff()
{
  vtk::ConvertManagedToNative<::vtkWindowedSincPolyDataFilter>(m_instance)->NonManifoldSmoothingOff();
}



void vtkWindowedSincPolyDataFilter::SetGenerateErrorScalars(int arg0)
{
  vtk::ConvertManagedToNative<::vtkWindowedSincPolyDataFilter>(m_instance)->SetGenerateErrorScalars(arg0);
}



int vtkWindowedSincPolyDataFilter::GetGenerateErrorScalars()
{
  int retVal = vtk::ConvertManagedToNative<::vtkWindowedSincPolyDataFilter>(m_instance)->GetGenerateErrorScalars();
  return retVal;
}



void vtkWindowedSincPolyDataFilter::GenerateErrorScalarsOn()
{
  vtk::ConvertManagedToNative<::vtkWindowedSincPolyDataFilter>(m_instance)->GenerateErrorScalarsOn();
}



void vtkWindowedSincPolyDataFilter::GenerateErrorScalarsOff()
{
  vtk::ConvertManagedToNative<::vtkWindowedSincPolyDataFilter>(m_instance)->GenerateErrorScalarsOff();
}



void vtkWindowedSincPolyDataFilter::SetGenerateErrorVectors(int arg0)
{
  vtk::ConvertManagedToNative<::vtkWindowedSincPolyDataFilter>(m_instance)->SetGenerateErrorVectors(arg0);
}



int vtkWindowedSincPolyDataFilter::GetGenerateErrorVectors()
{
  int retVal = vtk::ConvertManagedToNative<::vtkWindowedSincPolyDataFilter>(m_instance)->GetGenerateErrorVectors();
  return retVal;
}



void vtkWindowedSincPolyDataFilter::GenerateErrorVectorsOn()
{
  vtk::ConvertManagedToNative<::vtkWindowedSincPolyDataFilter>(m_instance)->GenerateErrorVectorsOn();
}



void vtkWindowedSincPolyDataFilter::GenerateErrorVectorsOff()
{
  vtk::ConvertManagedToNative<::vtkWindowedSincPolyDataFilter>(m_instance)->GenerateErrorVectorsOff();
}



  vtkWindowedSincPolyDataFilter::vtkWindowedSincPolyDataFilter(System::IntPtr native, bool bConst) : vtkPolyDataAlgorithm(native, bConst) {}



  vtkWindowedSincPolyDataFilter::vtkWindowedSincPolyDataFilter(bool donothing) : vtkPolyDataAlgorithm(donothing) {}



  vtkWindowedSincPolyDataFilter::vtkWindowedSincPolyDataFilter() : vtkPolyDataAlgorithm(false) {
  this->SetNativePointer(IntPtr(::vtkWindowedSincPolyDataFilter::New()));
}



  vtkWindowedSincPolyDataFilter::~vtkWindowedSincPolyDataFilter() { }





} // end namespace vtkGraphics
