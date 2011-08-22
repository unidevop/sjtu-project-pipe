

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkParametricSplineDotNet.h"
#include "vtkSplineDotNet.h"

// native includes
#include "strstream"
#include "vtkParametricSpline.h"
#include "vtkObject.h"
#include "vtkPoints.h"
#include "vtkSpline.h"

using namespace System;

namespace vtk {

System::String^ vtkParametricSpline::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkParametricSpline>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkParametricSpline::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkParametricSpline>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkParametricSpline^ vtkParametricSpline::NewInstance()
{
  ::vtkParametricSpline* retVal = static_cast<::vtkParametricSpline*>(vtk::ConvertManagedToNative<::vtkParametricSpline>(m_instance)->NewInstance());
  return gcnew vtkParametricSpline(IntPtr(retVal), false);
}



vtkParametricSpline^ vtkParametricSpline::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkParametricSpline* retVal = static_cast<::vtkParametricSpline*>(::vtkParametricSpline::SafeDownCast(oWrap));
  return gcnew vtkParametricSpline(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkParametricSpline::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkParametricSpline>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkParametricSpline::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkParametricSpline>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




int vtkParametricSpline::GetDimension()
{
  int retVal = vtk::ConvertManagedToNative<::vtkParametricSpline>(m_instance)->GetDimension();
  return retVal;
}



void vtkParametricSpline::Evaluate(array<double>^ u, array<double>^ Pt, array<double>^ Du)
{
  pin_ptr<double> uPin = &u[0];
  double* nativeuPin = uPin;
  pin_ptr<double> PtPin = &Pt[0];
  double* nativePtPin = PtPin;
  pin_ptr<double> DuPin = &Du[0];
  double* nativeDuPin = DuPin;
  vtk::ConvertManagedToNative<::vtkParametricSpline>(m_instance)->Evaluate(nativeuPin, nativePtPin, nativeDuPin);
}



double vtkParametricSpline::EvaluateScalar(array<double>^ u, array<double>^ Pt, array<double>^ Du)
{
  pin_ptr<double> uPin = &u[0];
  double* nativeuPin = uPin;
  pin_ptr<double> PtPin = &Pt[0];
  double* nativePtPin = PtPin;
  pin_ptr<double> DuPin = &Du[0];
  double* nativeDuPin = DuPin;
  double retVal = vtk::ConvertManagedToNative<::vtkParametricSpline>(m_instance)->EvaluateScalar(nativeuPin, nativePtPin, nativeDuPin);
  return retVal;
}



void vtkParametricSpline::SetXSpline(vtkSpline^ arg0)
{
  ::vtkSpline* arg0Wrap = vtk::ConvertManagedToNative<::vtkSpline>(arg0->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkParametricSpline>(m_instance)->SetXSpline(arg0Wrap);
}



void vtkParametricSpline::SetYSpline(vtkSpline^ arg0)
{
  ::vtkSpline* arg0Wrap = vtk::ConvertManagedToNative<::vtkSpline>(arg0->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkParametricSpline>(m_instance)->SetYSpline(arg0Wrap);
}



void vtkParametricSpline::SetZSpline(vtkSpline^ arg0)
{
  ::vtkSpline* arg0Wrap = vtk::ConvertManagedToNative<::vtkSpline>(arg0->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkParametricSpline>(m_instance)->SetZSpline(arg0Wrap);
}



vtkSpline^ vtkParametricSpline::GetXSpline()
{
  ::vtkSpline* retVal = static_cast<::vtkSpline*>(vtk::ConvertManagedToNative<::vtkParametricSpline>(m_instance)->GetXSpline());
  return gcnew vtkSpline(IntPtr(retVal), false);
}



vtkSpline^ vtkParametricSpline::GetYSpline()
{
  ::vtkSpline* retVal = static_cast<::vtkSpline*>(vtk::ConvertManagedToNative<::vtkParametricSpline>(m_instance)->GetYSpline());
  return gcnew vtkSpline(IntPtr(retVal), false);
}



vtkSpline^ vtkParametricSpline::GetZSpline()
{
  ::vtkSpline* retVal = static_cast<::vtkSpline*>(vtk::ConvertManagedToNative<::vtkParametricSpline>(m_instance)->GetZSpline());
  return gcnew vtkSpline(IntPtr(retVal), false);
}



void vtkParametricSpline::SetPoints(vtkPoints^ arg0)
{
  ::vtkPoints* arg0Wrap = vtk::ConvertManagedToNative<::vtkPoints>(arg0->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkParametricSpline>(m_instance)->SetPoints(arg0Wrap);
}



vtkPoints^ vtkParametricSpline::GetPoints()
{
  ::vtkPoints* retVal = static_cast<::vtkPoints*>(vtk::ConvertManagedToNative<::vtkParametricSpline>(m_instance)->GetPoints());
  return gcnew vtkPoints(IntPtr(retVal), false);
}



void vtkParametricSpline::SetClosed(int arg0)
{
  vtk::ConvertManagedToNative<::vtkParametricSpline>(m_instance)->SetClosed(arg0);
}



int vtkParametricSpline::GetClosed()
{
  int retVal = vtk::ConvertManagedToNative<::vtkParametricSpline>(m_instance)->GetClosed();
  return retVal;
}



void vtkParametricSpline::ClosedOn()
{
  vtk::ConvertManagedToNative<::vtkParametricSpline>(m_instance)->ClosedOn();
}



void vtkParametricSpline::ClosedOff()
{
  vtk::ConvertManagedToNative<::vtkParametricSpline>(m_instance)->ClosedOff();
}



void vtkParametricSpline::SetParameterizeByLength(int arg0)
{
  vtk::ConvertManagedToNative<::vtkParametricSpline>(m_instance)->SetParameterizeByLength(arg0);
}



int vtkParametricSpline::GetParameterizeByLength()
{
  int retVal = vtk::ConvertManagedToNative<::vtkParametricSpline>(m_instance)->GetParameterizeByLength();
  return retVal;
}



void vtkParametricSpline::ParameterizeByLengthOn()
{
  vtk::ConvertManagedToNative<::vtkParametricSpline>(m_instance)->ParameterizeByLengthOn();
}



void vtkParametricSpline::ParameterizeByLengthOff()
{
  vtk::ConvertManagedToNative<::vtkParametricSpline>(m_instance)->ParameterizeByLengthOff();
}



void vtkParametricSpline::SetLeftConstraint(int arg0)
{
  vtk::ConvertManagedToNative<::vtkParametricSpline>(m_instance)->SetLeftConstraint(arg0);
}



int vtkParametricSpline::GetLeftConstraintMinValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkParametricSpline>(m_instance)->GetLeftConstraintMinValue();
  return retVal;
}



int vtkParametricSpline::GetLeftConstraintMaxValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkParametricSpline>(m_instance)->GetLeftConstraintMaxValue();
  return retVal;
}



int vtkParametricSpline::GetLeftConstraint()
{
  int retVal = vtk::ConvertManagedToNative<::vtkParametricSpline>(m_instance)->GetLeftConstraint();
  return retVal;
}



void vtkParametricSpline::SetRightConstraint(int arg0)
{
  vtk::ConvertManagedToNative<::vtkParametricSpline>(m_instance)->SetRightConstraint(arg0);
}



int vtkParametricSpline::GetRightConstraintMinValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkParametricSpline>(m_instance)->GetRightConstraintMinValue();
  return retVal;
}



int vtkParametricSpline::GetRightConstraintMaxValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkParametricSpline>(m_instance)->GetRightConstraintMaxValue();
  return retVal;
}



int vtkParametricSpline::GetRightConstraint()
{
  int retVal = vtk::ConvertManagedToNative<::vtkParametricSpline>(m_instance)->GetRightConstraint();
  return retVal;
}



void vtkParametricSpline::SetLeftValue(double arg0)
{
  vtk::ConvertManagedToNative<::vtkParametricSpline>(m_instance)->SetLeftValue(arg0);
}



double vtkParametricSpline::GetLeftValue()
{
  double retVal = vtk::ConvertManagedToNative<::vtkParametricSpline>(m_instance)->GetLeftValue();
  return retVal;
}



void vtkParametricSpline::SetRightValue(double arg0)
{
  vtk::ConvertManagedToNative<::vtkParametricSpline>(m_instance)->SetRightValue(arg0);
}



double vtkParametricSpline::GetRightValue()
{
  double retVal = vtk::ConvertManagedToNative<::vtkParametricSpline>(m_instance)->GetRightValue();
  return retVal;
}



  vtkParametricSpline::vtkParametricSpline(System::IntPtr native, bool bConst) : vtkParametricFunction(native, bConst) {}



  vtkParametricSpline::vtkParametricSpline(bool donothing) : vtkParametricFunction(donothing) {}



  vtkParametricSpline::vtkParametricSpline() : vtkParametricFunction(false) {
  this->SetNativePointer(IntPtr(::vtkParametricSpline::New()));
}



  vtkParametricSpline::~vtkParametricSpline() { }





} // end namespace vtkFiltering
