

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkViewDependentErrorMetricDotNet.h"
#include "vtkViewportDotNet.h"

// native includes
#include "strstream"
#include "vtkViewDependentErrorMetric.h"
#include "vtkObject.h"
#include "vtkViewport.h"

using namespace System;

namespace vtk {

System::String^ vtkViewDependentErrorMetric::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkViewDependentErrorMetric>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkViewDependentErrorMetric::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkViewDependentErrorMetric>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkViewDependentErrorMetric^ vtkViewDependentErrorMetric::NewInstance()
{
  ::vtkViewDependentErrorMetric* retVal = static_cast<::vtkViewDependentErrorMetric*>(vtk::ConvertManagedToNative<::vtkViewDependentErrorMetric>(m_instance)->NewInstance());
  return gcnew vtkViewDependentErrorMetric(IntPtr(retVal), false);
}



vtkViewDependentErrorMetric^ vtkViewDependentErrorMetric::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkViewDependentErrorMetric* retVal = static_cast<::vtkViewDependentErrorMetric*>(::vtkViewDependentErrorMetric::SafeDownCast(oWrap));
  return gcnew vtkViewDependentErrorMetric(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkViewDependentErrorMetric::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkViewDependentErrorMetric>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkViewDependentErrorMetric::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkViewDependentErrorMetric>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




double vtkViewDependentErrorMetric::GetPixelTolerance()
{
  double retVal = vtk::ConvertManagedToNative<::vtkViewDependentErrorMetric>(m_instance)->GetPixelTolerance();
  return retVal;
}



void vtkViewDependentErrorMetric::SetPixelTolerance(double value)
{
  vtk::ConvertManagedToNative<::vtkViewDependentErrorMetric>(m_instance)->SetPixelTolerance(value);
}



vtkViewport^ vtkViewDependentErrorMetric::GetViewport()
{
  ::vtkViewport* retVal = static_cast<::vtkViewport*>(vtk::ConvertManagedToNative<::vtkViewDependentErrorMetric>(m_instance)->GetViewport());
  return gcnew vtkViewport(IntPtr(retVal), false);
}



void vtkViewDependentErrorMetric::SetViewport(vtkViewport^ viewport)
{
  ::vtkViewport* viewportWrap = vtk::ConvertManagedToNative<::vtkViewport>(viewport->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkViewDependentErrorMetric>(m_instance)->SetViewport(viewportWrap);
}



int vtkViewDependentErrorMetric::RequiresEdgeSubdivision(array<double>^ leftPoint, array<double>^ midPoint, array<double>^ rightPoint, double alpha)
{
  pin_ptr<double> leftPointPin = &leftPoint[0];
  double* nativeleftPointPin = leftPointPin;
  pin_ptr<double> midPointPin = &midPoint[0];
  double* nativemidPointPin = midPointPin;
  pin_ptr<double> rightPointPin = &rightPoint[0];
  double* nativerightPointPin = rightPointPin;
  int retVal = vtk::ConvertManagedToNative<::vtkViewDependentErrorMetric>(m_instance)->RequiresEdgeSubdivision(nativeleftPointPin, nativemidPointPin, nativerightPointPin, alpha);
  return retVal;
}



double vtkViewDependentErrorMetric::GetError(array<double>^ leftPoint, array<double>^ midPoint, array<double>^ rightPoint, double alpha)
{
  pin_ptr<double> leftPointPin = &leftPoint[0];
  double* nativeleftPointPin = leftPointPin;
  pin_ptr<double> midPointPin = &midPoint[0];
  double* nativemidPointPin = midPointPin;
  pin_ptr<double> rightPointPin = &rightPoint[0];
  double* nativerightPointPin = rightPointPin;
  double retVal = vtk::ConvertManagedToNative<::vtkViewDependentErrorMetric>(m_instance)->GetError(nativeleftPointPin, nativemidPointPin, nativerightPointPin, alpha);
  return retVal;
}



  vtkViewDependentErrorMetric::vtkViewDependentErrorMetric(System::IntPtr native, bool bConst) : vtkGenericSubdivisionErrorMetric(native, bConst) {}



  vtkViewDependentErrorMetric::vtkViewDependentErrorMetric(bool donothing) : vtkGenericSubdivisionErrorMetric(donothing) {}



  vtkViewDependentErrorMetric::vtkViewDependentErrorMetric() : vtkGenericSubdivisionErrorMetric(false) {
  this->SetNativePointer(IntPtr(::vtkViewDependentErrorMetric::New()));
}



  vtkViewDependentErrorMetric::~vtkViewDependentErrorMetric() { }





} // end namespace vtkFiltering
