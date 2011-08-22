

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkAttributesErrorMetricDotNet.h"

// native includes
#include "strstream"
#include "vtkAttributesErrorMetric.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkAttributesErrorMetric::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkAttributesErrorMetric>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkAttributesErrorMetric::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkAttributesErrorMetric>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkAttributesErrorMetric^ vtkAttributesErrorMetric::NewInstance()
{
  ::vtkAttributesErrorMetric* retVal = static_cast<::vtkAttributesErrorMetric*>(vtk::ConvertManagedToNative<::vtkAttributesErrorMetric>(m_instance)->NewInstance());
  return gcnew vtkAttributesErrorMetric(IntPtr(retVal), false);
}



vtkAttributesErrorMetric^ vtkAttributesErrorMetric::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkAttributesErrorMetric* retVal = static_cast<::vtkAttributesErrorMetric*>(::vtkAttributesErrorMetric::SafeDownCast(oWrap));
  return gcnew vtkAttributesErrorMetric(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkAttributesErrorMetric::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkAttributesErrorMetric>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkAttributesErrorMetric::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkAttributesErrorMetric>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




double vtkAttributesErrorMetric::GetAbsoluteAttributeTolerance()
{
  double retVal = vtk::ConvertManagedToNative<::vtkAttributesErrorMetric>(m_instance)->GetAbsoluteAttributeTolerance();
  return retVal;
}



void vtkAttributesErrorMetric::SetAbsoluteAttributeTolerance(double value)
{
  vtk::ConvertManagedToNative<::vtkAttributesErrorMetric>(m_instance)->SetAbsoluteAttributeTolerance(value);
}



double vtkAttributesErrorMetric::GetAttributeTolerance()
{
  double retVal = vtk::ConvertManagedToNative<::vtkAttributesErrorMetric>(m_instance)->GetAttributeTolerance();
  return retVal;
}



void vtkAttributesErrorMetric::SetAttributeTolerance(double value)
{
  vtk::ConvertManagedToNative<::vtkAttributesErrorMetric>(m_instance)->SetAttributeTolerance(value);
}



int vtkAttributesErrorMetric::RequiresEdgeSubdivision(array<double>^ leftPoint, array<double>^ midPoint, array<double>^ rightPoint, double alpha)
{
  pin_ptr<double> leftPointPin = &leftPoint[0];
  double* nativeleftPointPin = leftPointPin;
  pin_ptr<double> midPointPin = &midPoint[0];
  double* nativemidPointPin = midPointPin;
  pin_ptr<double> rightPointPin = &rightPoint[0];
  double* nativerightPointPin = rightPointPin;
  int retVal = vtk::ConvertManagedToNative<::vtkAttributesErrorMetric>(m_instance)->RequiresEdgeSubdivision(nativeleftPointPin, nativemidPointPin, nativerightPointPin, alpha);
  return retVal;
}



double vtkAttributesErrorMetric::GetError(array<double>^ leftPoint, array<double>^ midPoint, array<double>^ rightPoint, double alpha)
{
  pin_ptr<double> leftPointPin = &leftPoint[0];
  double* nativeleftPointPin = leftPointPin;
  pin_ptr<double> midPointPin = &midPoint[0];
  double* nativemidPointPin = midPointPin;
  pin_ptr<double> rightPointPin = &rightPoint[0];
  double* nativerightPointPin = rightPointPin;
  double retVal = vtk::ConvertManagedToNative<::vtkAttributesErrorMetric>(m_instance)->GetError(nativeleftPointPin, nativemidPointPin, nativerightPointPin, alpha);
  return retVal;
}



  vtkAttributesErrorMetric::vtkAttributesErrorMetric(System::IntPtr native, bool bConst) : vtkGenericSubdivisionErrorMetric(native, bConst) {}



  vtkAttributesErrorMetric::vtkAttributesErrorMetric(bool donothing) : vtkGenericSubdivisionErrorMetric(donothing) {}



  vtkAttributesErrorMetric::vtkAttributesErrorMetric() : vtkGenericSubdivisionErrorMetric(false) {
  this->SetNativePointer(IntPtr(::vtkAttributesErrorMetric::New()));
}



  vtkAttributesErrorMetric::~vtkAttributesErrorMetric() { }





} // end namespace vtkFiltering
