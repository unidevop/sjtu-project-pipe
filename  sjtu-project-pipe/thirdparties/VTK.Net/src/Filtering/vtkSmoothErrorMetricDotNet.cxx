

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkSmoothErrorMetricDotNet.h"

// native includes
#include "strstream"
#include "vtkSmoothErrorMetric.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkSmoothErrorMetric::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkSmoothErrorMetric>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkSmoothErrorMetric::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkSmoothErrorMetric>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkSmoothErrorMetric^ vtkSmoothErrorMetric::NewInstance()
{
  ::vtkSmoothErrorMetric* retVal = static_cast<::vtkSmoothErrorMetric*>(vtk::ConvertManagedToNative<::vtkSmoothErrorMetric>(m_instance)->NewInstance());
  return gcnew vtkSmoothErrorMetric(IntPtr(retVal), false);
}



vtkSmoothErrorMetric^ vtkSmoothErrorMetric::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkSmoothErrorMetric* retVal = static_cast<::vtkSmoothErrorMetric*>(::vtkSmoothErrorMetric::SafeDownCast(oWrap));
  return gcnew vtkSmoothErrorMetric(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkSmoothErrorMetric::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkSmoothErrorMetric>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkSmoothErrorMetric::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkSmoothErrorMetric>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




double vtkSmoothErrorMetric::GetAngleTolerance()
{
  double retVal = vtk::ConvertManagedToNative<::vtkSmoothErrorMetric>(m_instance)->GetAngleTolerance();
  return retVal;
}



void vtkSmoothErrorMetric::SetAngleTolerance(double value)
{
  vtk::ConvertManagedToNative<::vtkSmoothErrorMetric>(m_instance)->SetAngleTolerance(value);
}



int vtkSmoothErrorMetric::RequiresEdgeSubdivision(array<double>^ leftPoint, array<double>^ midPoint, array<double>^ rightPoint, double alpha)
{
  pin_ptr<double> leftPointPin = &leftPoint[0];
  double* nativeleftPointPin = leftPointPin;
  pin_ptr<double> midPointPin = &midPoint[0];
  double* nativemidPointPin = midPointPin;
  pin_ptr<double> rightPointPin = &rightPoint[0];
  double* nativerightPointPin = rightPointPin;
  int retVal = vtk::ConvertManagedToNative<::vtkSmoothErrorMetric>(m_instance)->RequiresEdgeSubdivision(nativeleftPointPin, nativemidPointPin, nativerightPointPin, alpha);
  return retVal;
}



double vtkSmoothErrorMetric::GetError(array<double>^ leftPoint, array<double>^ midPoint, array<double>^ rightPoint, double alpha)
{
  pin_ptr<double> leftPointPin = &leftPoint[0];
  double* nativeleftPointPin = leftPointPin;
  pin_ptr<double> midPointPin = &midPoint[0];
  double* nativemidPointPin = midPointPin;
  pin_ptr<double> rightPointPin = &rightPoint[0];
  double* nativerightPointPin = rightPointPin;
  double retVal = vtk::ConvertManagedToNative<::vtkSmoothErrorMetric>(m_instance)->GetError(nativeleftPointPin, nativemidPointPin, nativerightPointPin, alpha);
  return retVal;
}



  vtkSmoothErrorMetric::vtkSmoothErrorMetric(System::IntPtr native, bool bConst) : vtkGenericSubdivisionErrorMetric(native, bConst) {}



  vtkSmoothErrorMetric::vtkSmoothErrorMetric(bool donothing) : vtkGenericSubdivisionErrorMetric(donothing) {}



  vtkSmoothErrorMetric::vtkSmoothErrorMetric() : vtkGenericSubdivisionErrorMetric(false) {
  this->SetNativePointer(IntPtr(::vtkSmoothErrorMetric::New()));
}



  vtkSmoothErrorMetric::~vtkSmoothErrorMetric() { }





} // end namespace vtkFiltering
