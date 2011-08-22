

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkDelaunay2DDotNet.h"

// native includes
#include "strstream"
#include "vtkDelaunay2D.h"
#include "vtkAbstractTransform.h"
#include "vtkAlgorithmOutput.h"
#include "vtkObject.h"
#include "vtkPolyData.h"

using namespace System;

namespace vtk {

System::String^ vtkDelaunay2D::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkDelaunay2D>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkDelaunay2D::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkDelaunay2D>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkDelaunay2D^ vtkDelaunay2D::NewInstance()
{
  ::vtkDelaunay2D* retVal = static_cast<::vtkDelaunay2D*>(vtk::ConvertManagedToNative<::vtkDelaunay2D>(m_instance)->NewInstance());
  return gcnew vtkDelaunay2D(IntPtr(retVal), false);
}



vtkDelaunay2D^ vtkDelaunay2D::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkDelaunay2D* retVal = static_cast<::vtkDelaunay2D*>(::vtkDelaunay2D::SafeDownCast(oWrap));
  return gcnew vtkDelaunay2D(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkDelaunay2D::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkDelaunay2D>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkDelaunay2D::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkDelaunay2D>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkDelaunay2D::SetSource(vtkPolyData^ arg0)
{
  ::vtkPolyData* arg0Wrap = vtk::ConvertManagedToNative<::vtkPolyData>(arg0->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkDelaunay2D>(m_instance)->SetSource(arg0Wrap);
}



void vtkDelaunay2D::SetSourceConnection(vtkAlgorithmOutput^ algOutput)
{
  ::vtkAlgorithmOutput* algOutputWrap = vtk::ConvertManagedToNative<::vtkAlgorithmOutput>(algOutput->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkDelaunay2D>(m_instance)->SetSourceConnection(algOutputWrap);
}



vtkPolyData^ vtkDelaunay2D::GetSource()
{
  ::vtkPolyData* retVal = static_cast<::vtkPolyData*>(vtk::ConvertManagedToNative<::vtkDelaunay2D>(m_instance)->GetSource());
  return gcnew vtkPolyData(IntPtr(retVal), false);
}



void vtkDelaunay2D::SetAlpha(double arg0)
{
  vtk::ConvertManagedToNative<::vtkDelaunay2D>(m_instance)->SetAlpha(arg0);
}



double vtkDelaunay2D::GetAlphaMinValue()
{
  double retVal = vtk::ConvertManagedToNative<::vtkDelaunay2D>(m_instance)->GetAlphaMinValue();
  return retVal;
}



double vtkDelaunay2D::GetAlphaMaxValue()
{
  double retVal = vtk::ConvertManagedToNative<::vtkDelaunay2D>(m_instance)->GetAlphaMaxValue();
  return retVal;
}



double vtkDelaunay2D::GetAlpha()
{
  double retVal = vtk::ConvertManagedToNative<::vtkDelaunay2D>(m_instance)->GetAlpha();
  return retVal;
}



void vtkDelaunay2D::SetTolerance(double arg0)
{
  vtk::ConvertManagedToNative<::vtkDelaunay2D>(m_instance)->SetTolerance(arg0);
}



double vtkDelaunay2D::GetToleranceMinValue()
{
  double retVal = vtk::ConvertManagedToNative<::vtkDelaunay2D>(m_instance)->GetToleranceMinValue();
  return retVal;
}



double vtkDelaunay2D::GetToleranceMaxValue()
{
  double retVal = vtk::ConvertManagedToNative<::vtkDelaunay2D>(m_instance)->GetToleranceMaxValue();
  return retVal;
}



double vtkDelaunay2D::GetTolerance()
{
  double retVal = vtk::ConvertManagedToNative<::vtkDelaunay2D>(m_instance)->GetTolerance();
  return retVal;
}



void vtkDelaunay2D::SetOffset(double arg0)
{
  vtk::ConvertManagedToNative<::vtkDelaunay2D>(m_instance)->SetOffset(arg0);
}



double vtkDelaunay2D::GetOffsetMinValue()
{
  double retVal = vtk::ConvertManagedToNative<::vtkDelaunay2D>(m_instance)->GetOffsetMinValue();
  return retVal;
}



double vtkDelaunay2D::GetOffsetMaxValue()
{
  double retVal = vtk::ConvertManagedToNative<::vtkDelaunay2D>(m_instance)->GetOffsetMaxValue();
  return retVal;
}



double vtkDelaunay2D::GetOffset()
{
  double retVal = vtk::ConvertManagedToNative<::vtkDelaunay2D>(m_instance)->GetOffset();
  return retVal;
}



void vtkDelaunay2D::SetBoundingTriangulation(int arg0)
{
  vtk::ConvertManagedToNative<::vtkDelaunay2D>(m_instance)->SetBoundingTriangulation(arg0);
}



int vtkDelaunay2D::GetBoundingTriangulation()
{
  int retVal = vtk::ConvertManagedToNative<::vtkDelaunay2D>(m_instance)->GetBoundingTriangulation();
  return retVal;
}



void vtkDelaunay2D::BoundingTriangulationOn()
{
  vtk::ConvertManagedToNative<::vtkDelaunay2D>(m_instance)->BoundingTriangulationOn();
}



void vtkDelaunay2D::BoundingTriangulationOff()
{
  vtk::ConvertManagedToNative<::vtkDelaunay2D>(m_instance)->BoundingTriangulationOff();
}



void vtkDelaunay2D::SetTransform(vtkAbstractTransform^ arg0)
{
  ::vtkAbstractTransform* arg0Wrap = vtk::ConvertManagedToNative<::vtkAbstractTransform>(arg0->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkDelaunay2D>(m_instance)->SetTransform(arg0Wrap);
}



vtkAbstractTransform^ vtkDelaunay2D::GetTransform()
{
  ::vtkAbstractTransform* retVal = static_cast<::vtkAbstractTransform*>(vtk::ConvertManagedToNative<::vtkDelaunay2D>(m_instance)->GetTransform());
  return gcnew vtkAbstractTransform(IntPtr(retVal), false);
}



void vtkDelaunay2D::SetProjectionPlaneMode(int arg0)
{
  vtk::ConvertManagedToNative<::vtkDelaunay2D>(m_instance)->SetProjectionPlaneMode(arg0);
}



int vtkDelaunay2D::GetProjectionPlaneModeMinValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkDelaunay2D>(m_instance)->GetProjectionPlaneModeMinValue();
  return retVal;
}



int vtkDelaunay2D::GetProjectionPlaneModeMaxValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkDelaunay2D>(m_instance)->GetProjectionPlaneModeMaxValue();
  return retVal;
}



int vtkDelaunay2D::GetProjectionPlaneMode()
{
  int retVal = vtk::ConvertManagedToNative<::vtkDelaunay2D>(m_instance)->GetProjectionPlaneMode();
  return retVal;
}



  vtkDelaunay2D::vtkDelaunay2D(System::IntPtr native, bool bConst) : vtkPolyDataAlgorithm(native, bConst) {}



  vtkDelaunay2D::vtkDelaunay2D(bool donothing) : vtkPolyDataAlgorithm(donothing) {}



  vtkDelaunay2D::vtkDelaunay2D() : vtkPolyDataAlgorithm(false) {
  this->SetNativePointer(IntPtr(::vtkDelaunay2D::New()));
}



  vtkDelaunay2D::~vtkDelaunay2D() { }





} // end namespace vtkGraphics
