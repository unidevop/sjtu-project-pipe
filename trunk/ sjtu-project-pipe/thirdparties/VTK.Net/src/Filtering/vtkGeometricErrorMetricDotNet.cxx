

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkGeometricErrorMetricDotNet.h"
#include "vtkGenericDataSetDotNet.h"

// native includes
#include "strstream"
#include "vtkGeometricErrorMetric.h"
#include "vtkGenericDataSet.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkGeometricErrorMetric::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkGeometricErrorMetric>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkGeometricErrorMetric::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkGeometricErrorMetric>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkGeometricErrorMetric^ vtkGeometricErrorMetric::NewInstance()
{
  ::vtkGeometricErrorMetric* retVal = static_cast<::vtkGeometricErrorMetric*>(vtk::ConvertManagedToNative<::vtkGeometricErrorMetric>(m_instance)->NewInstance());
  return gcnew vtkGeometricErrorMetric(IntPtr(retVal), false);
}



vtkGeometricErrorMetric^ vtkGeometricErrorMetric::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkGeometricErrorMetric* retVal = static_cast<::vtkGeometricErrorMetric*>(::vtkGeometricErrorMetric::SafeDownCast(oWrap));
  return gcnew vtkGeometricErrorMetric(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkGeometricErrorMetric::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkGeometricErrorMetric>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkGeometricErrorMetric::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkGeometricErrorMetric>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




double vtkGeometricErrorMetric::GetAbsoluteGeometricTolerance()
{
  double retVal = vtk::ConvertManagedToNative<::vtkGeometricErrorMetric>(m_instance)->GetAbsoluteGeometricTolerance();
  return retVal;
}



void vtkGeometricErrorMetric::SetAbsoluteGeometricTolerance(double value)
{
  vtk::ConvertManagedToNative<::vtkGeometricErrorMetric>(m_instance)->SetAbsoluteGeometricTolerance(value);
}



void vtkGeometricErrorMetric::SetRelativeGeometricTolerance(double value, vtkGenericDataSet^ ds)
{
  ::vtkGenericDataSet* dsWrap = vtk::ConvertManagedToNative<::vtkGenericDataSet>(ds->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkGeometricErrorMetric>(m_instance)->SetRelativeGeometricTolerance(value, dsWrap);
}



int vtkGeometricErrorMetric::RequiresEdgeSubdivision(array<double>^ leftPoint, array<double>^ midPoint, array<double>^ rightPoint, double alpha)
{
  pin_ptr<double> leftPointPin = &leftPoint[0];
  double* nativeleftPointPin = leftPointPin;
  pin_ptr<double> midPointPin = &midPoint[0];
  double* nativemidPointPin = midPointPin;
  pin_ptr<double> rightPointPin = &rightPoint[0];
  double* nativerightPointPin = rightPointPin;
  int retVal = vtk::ConvertManagedToNative<::vtkGeometricErrorMetric>(m_instance)->RequiresEdgeSubdivision(nativeleftPointPin, nativemidPointPin, nativerightPointPin, alpha);
  return retVal;
}



double vtkGeometricErrorMetric::GetError(array<double>^ leftPoint, array<double>^ midPoint, array<double>^ rightPoint, double alpha)
{
  pin_ptr<double> leftPointPin = &leftPoint[0];
  double* nativeleftPointPin = leftPointPin;
  pin_ptr<double> midPointPin = &midPoint[0];
  double* nativemidPointPin = midPointPin;
  pin_ptr<double> rightPointPin = &rightPoint[0];
  double* nativerightPointPin = rightPointPin;
  double retVal = vtk::ConvertManagedToNative<::vtkGeometricErrorMetric>(m_instance)->GetError(nativeleftPointPin, nativemidPointPin, nativerightPointPin, alpha);
  return retVal;
}



int vtkGeometricErrorMetric::GetRelative()
{
  int retVal = vtk::ConvertManagedToNative<::vtkGeometricErrorMetric>(m_instance)->GetRelative();
  return retVal;
}



  vtkGeometricErrorMetric::vtkGeometricErrorMetric(System::IntPtr native, bool bConst) : vtkGenericSubdivisionErrorMetric(native, bConst) {}



  vtkGeometricErrorMetric::vtkGeometricErrorMetric(bool donothing) : vtkGenericSubdivisionErrorMetric(donothing) {}



  vtkGeometricErrorMetric::vtkGeometricErrorMetric() : vtkGenericSubdivisionErrorMetric(false) {
  this->SetNativePointer(IntPtr(::vtkGeometricErrorMetric::New()));
}



  vtkGeometricErrorMetric::~vtkGeometricErrorMetric() { }





} // end namespace vtkFiltering
