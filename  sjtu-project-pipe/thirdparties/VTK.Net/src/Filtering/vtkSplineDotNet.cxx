

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkSplineDotNet.h"

// native includes
#include "strstream"
#include "vtkSpline.h"

using namespace System;

namespace vtk {

System::String^ vtkSpline::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkSpline>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkSpline::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkSpline>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkSpline^ vtkSpline::NewInstance()
{
  ::vtkSpline* retVal = static_cast<::vtkSpline*>(vtk::ConvertManagedToNative<::vtkSpline>(m_instance)->NewInstance());
  return gcnew vtkSpline(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkSpline::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkSpline>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkSpline::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkSpline>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkSpline::SetParametricRange(double tMin, double tMax)
{
  vtk::ConvertManagedToNative<::vtkSpline>(m_instance)->SetParametricRange(tMin, tMax);
}



void vtkSpline::SetParametricRange(array<double>^ tRange)
{
  pin_ptr<double> tRangePin = &tRange[0];
  double* nativetRangePin = tRangePin;
  vtk::ConvertManagedToNative<::vtkSpline>(m_instance)->SetParametricRange(nativetRangePin);
}



void vtkSpline::GetParametricRange(array<double>^ tRange)
{
  pin_ptr<double> tRangePin = &tRange[0];
  double* nativetRangePin = tRangePin;
  vtk::ConvertManagedToNative<::vtkSpline>(m_instance)->GetParametricRange(nativetRangePin);
}



void vtkSpline::SetClampValue(int arg0)
{
  vtk::ConvertManagedToNative<::vtkSpline>(m_instance)->SetClampValue(arg0);
}



int vtkSpline::GetClampValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkSpline>(m_instance)->GetClampValue();
  return retVal;
}



void vtkSpline::ClampValueOn()
{
  vtk::ConvertManagedToNative<::vtkSpline>(m_instance)->ClampValueOn();
}



void vtkSpline::ClampValueOff()
{
  vtk::ConvertManagedToNative<::vtkSpline>(m_instance)->ClampValueOff();
}



void vtkSpline::Compute()
{
  vtk::ConvertManagedToNative<::vtkSpline>(m_instance)->Compute();
}



double vtkSpline::Evaluate(double t)
{
  double retVal = vtk::ConvertManagedToNative<::vtkSpline>(m_instance)->Evaluate(t);
  return retVal;
}



int vtkSpline::GetNumberOfPoints()
{
  int retVal = vtk::ConvertManagedToNative<::vtkSpline>(m_instance)->GetNumberOfPoints();
  return retVal;
}



void vtkSpline::AddPoint(double t, double x)
{
  vtk::ConvertManagedToNative<::vtkSpline>(m_instance)->AddPoint(t, x);
}



void vtkSpline::RemovePoint(double t)
{
  vtk::ConvertManagedToNative<::vtkSpline>(m_instance)->RemovePoint(t);
}



void vtkSpline::RemoveAllPoints()
{
  vtk::ConvertManagedToNative<::vtkSpline>(m_instance)->RemoveAllPoints();
}



void vtkSpline::SetClosed(int arg0)
{
  vtk::ConvertManagedToNative<::vtkSpline>(m_instance)->SetClosed(arg0);
}



int vtkSpline::GetClosed()
{
  int retVal = vtk::ConvertManagedToNative<::vtkSpline>(m_instance)->GetClosed();
  return retVal;
}



void vtkSpline::ClosedOn()
{
  vtk::ConvertManagedToNative<::vtkSpline>(m_instance)->ClosedOn();
}



void vtkSpline::ClosedOff()
{
  vtk::ConvertManagedToNative<::vtkSpline>(m_instance)->ClosedOff();
}



void vtkSpline::SetLeftConstraint(int arg0)
{
  vtk::ConvertManagedToNative<::vtkSpline>(m_instance)->SetLeftConstraint(arg0);
}



int vtkSpline::GetLeftConstraintMinValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkSpline>(m_instance)->GetLeftConstraintMinValue();
  return retVal;
}



int vtkSpline::GetLeftConstraintMaxValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkSpline>(m_instance)->GetLeftConstraintMaxValue();
  return retVal;
}



int vtkSpline::GetLeftConstraint()
{
  int retVal = vtk::ConvertManagedToNative<::vtkSpline>(m_instance)->GetLeftConstraint();
  return retVal;
}



void vtkSpline::SetRightConstraint(int arg0)
{
  vtk::ConvertManagedToNative<::vtkSpline>(m_instance)->SetRightConstraint(arg0);
}



int vtkSpline::GetRightConstraintMinValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkSpline>(m_instance)->GetRightConstraintMinValue();
  return retVal;
}



int vtkSpline::GetRightConstraintMaxValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkSpline>(m_instance)->GetRightConstraintMaxValue();
  return retVal;
}



int vtkSpline::GetRightConstraint()
{
  int retVal = vtk::ConvertManagedToNative<::vtkSpline>(m_instance)->GetRightConstraint();
  return retVal;
}



void vtkSpline::SetLeftValue(double arg0)
{
  vtk::ConvertManagedToNative<::vtkSpline>(m_instance)->SetLeftValue(arg0);
}



double vtkSpline::GetLeftValue()
{
  double retVal = vtk::ConvertManagedToNative<::vtkSpline>(m_instance)->GetLeftValue();
  return retVal;
}



void vtkSpline::SetRightValue(double arg0)
{
  vtk::ConvertManagedToNative<::vtkSpline>(m_instance)->SetRightValue(arg0);
}



double vtkSpline::GetRightValue()
{
  double retVal = vtk::ConvertManagedToNative<::vtkSpline>(m_instance)->GetRightValue();
  return retVal;
}



unsigned long vtkSpline::GetMTime()
{
  unsigned long retVal = vtk::ConvertManagedToNative<::vtkSpline>(m_instance)->GetMTime();
  return retVal;
}



void vtkSpline::DeepCopy(vtkSpline^ s)
{
  ::vtkSpline* sWrap = vtk::ConvertManagedToNative<::vtkSpline>(s->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkSpline>(m_instance)->DeepCopy(sWrap);
}



  vtkSpline::vtkSpline(System::IntPtr native, bool bConst) : vtkObject(native, bConst) {}



  vtkSpline::vtkSpline(bool donothing) : vtkObject(donothing) {}



  vtkSpline::vtkSpline() : vtkObject(false) {
  this->SetNativePointer(IntPtr(::vtkSpline::New()));
}



  vtkSpline::~vtkSpline() { }





} // end namespace vtkFiltering
