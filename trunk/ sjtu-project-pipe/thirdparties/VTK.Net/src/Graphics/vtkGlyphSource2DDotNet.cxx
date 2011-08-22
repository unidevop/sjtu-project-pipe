

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkGlyphSource2DDotNet.h"

// native includes
#include "strstream"
#include "vtkGlyphSource2D.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkGlyphSource2D::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkGlyphSource2D>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkGlyphSource2D::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkGlyphSource2D>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkGlyphSource2D^ vtkGlyphSource2D::NewInstance()
{
  ::vtkGlyphSource2D* retVal = static_cast<::vtkGlyphSource2D*>(vtk::ConvertManagedToNative<::vtkGlyphSource2D>(m_instance)->NewInstance());
  return gcnew vtkGlyphSource2D(IntPtr(retVal), false);
}



vtkGlyphSource2D^ vtkGlyphSource2D::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkGlyphSource2D* retVal = static_cast<::vtkGlyphSource2D*>(::vtkGlyphSource2D::SafeDownCast(oWrap));
  return gcnew vtkGlyphSource2D(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkGlyphSource2D::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkGlyphSource2D>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkGlyphSource2D::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkGlyphSource2D>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkGlyphSource2D::SetCenter(double arg0, double arg1, double arg2)
{
  vtk::ConvertManagedToNative<::vtkGlyphSource2D>(m_instance)->SetCenter(arg0, arg1, arg2);
}



void vtkGlyphSource2D::SetCenter(array<double>^ a)
{
  pin_ptr<double> aPin = &a[0];
  double* nativeaPin = aPin;
  vtk::ConvertManagedToNative<::vtkGlyphSource2D>(m_instance)->SetCenter(nativeaPin);
}



array<double>^ vtkGlyphSource2D::GetCenter()
{
  const double* retVal = vtk::ConvertManagedToNative<::vtkGlyphSource2D>(m_instance)->GetCenter();
  array<double>^ mRetVal = gcnew array<double>(3);
  for (size_t cprIdx=0; cprIdx<3; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



void vtkGlyphSource2D::SetScale(double arg0)
{
  vtk::ConvertManagedToNative<::vtkGlyphSource2D>(m_instance)->SetScale(arg0);
}



double vtkGlyphSource2D::GetScaleMinValue()
{
  double retVal = vtk::ConvertManagedToNative<::vtkGlyphSource2D>(m_instance)->GetScaleMinValue();
  return retVal;
}



double vtkGlyphSource2D::GetScaleMaxValue()
{
  double retVal = vtk::ConvertManagedToNative<::vtkGlyphSource2D>(m_instance)->GetScaleMaxValue();
  return retVal;
}



double vtkGlyphSource2D::GetScale()
{
  double retVal = vtk::ConvertManagedToNative<::vtkGlyphSource2D>(m_instance)->GetScale();
  return retVal;
}



void vtkGlyphSource2D::SetScale2(double arg0)
{
  vtk::ConvertManagedToNative<::vtkGlyphSource2D>(m_instance)->SetScale2(arg0);
}



double vtkGlyphSource2D::GetScale2MinValue()
{
  double retVal = vtk::ConvertManagedToNative<::vtkGlyphSource2D>(m_instance)->GetScale2MinValue();
  return retVal;
}



double vtkGlyphSource2D::GetScale2MaxValue()
{
  double retVal = vtk::ConvertManagedToNative<::vtkGlyphSource2D>(m_instance)->GetScale2MaxValue();
  return retVal;
}



double vtkGlyphSource2D::GetScale2()
{
  double retVal = vtk::ConvertManagedToNative<::vtkGlyphSource2D>(m_instance)->GetScale2();
  return retVal;
}



void vtkGlyphSource2D::SetColor(double arg0, double arg1, double arg2)
{
  vtk::ConvertManagedToNative<::vtkGlyphSource2D>(m_instance)->SetColor(arg0, arg1, arg2);
}



void vtkGlyphSource2D::SetColor(array<double>^ a)
{
  pin_ptr<double> aPin = &a[0];
  double* nativeaPin = aPin;
  vtk::ConvertManagedToNative<::vtkGlyphSource2D>(m_instance)->SetColor(nativeaPin);
}



array<double>^ vtkGlyphSource2D::GetColor()
{
  const double* retVal = vtk::ConvertManagedToNative<::vtkGlyphSource2D>(m_instance)->GetColor();
  array<double>^ mRetVal = gcnew array<double>(3);
  for (size_t cprIdx=0; cprIdx<3; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



void vtkGlyphSource2D::SetFilled(int arg0)
{
  vtk::ConvertManagedToNative<::vtkGlyphSource2D>(m_instance)->SetFilled(arg0);
}



int vtkGlyphSource2D::GetFilled()
{
  int retVal = vtk::ConvertManagedToNative<::vtkGlyphSource2D>(m_instance)->GetFilled();
  return retVal;
}



void vtkGlyphSource2D::FilledOn()
{
  vtk::ConvertManagedToNative<::vtkGlyphSource2D>(m_instance)->FilledOn();
}



void vtkGlyphSource2D::FilledOff()
{
  vtk::ConvertManagedToNative<::vtkGlyphSource2D>(m_instance)->FilledOff();
}



void vtkGlyphSource2D::SetDash(int arg0)
{
  vtk::ConvertManagedToNative<::vtkGlyphSource2D>(m_instance)->SetDash(arg0);
}



int vtkGlyphSource2D::GetDash()
{
  int retVal = vtk::ConvertManagedToNative<::vtkGlyphSource2D>(m_instance)->GetDash();
  return retVal;
}



void vtkGlyphSource2D::DashOn()
{
  vtk::ConvertManagedToNative<::vtkGlyphSource2D>(m_instance)->DashOn();
}



void vtkGlyphSource2D::DashOff()
{
  vtk::ConvertManagedToNative<::vtkGlyphSource2D>(m_instance)->DashOff();
}



void vtkGlyphSource2D::SetCross(int arg0)
{
  vtk::ConvertManagedToNative<::vtkGlyphSource2D>(m_instance)->SetCross(arg0);
}



int vtkGlyphSource2D::GetCross()
{
  int retVal = vtk::ConvertManagedToNative<::vtkGlyphSource2D>(m_instance)->GetCross();
  return retVal;
}



void vtkGlyphSource2D::CrossOn()
{
  vtk::ConvertManagedToNative<::vtkGlyphSource2D>(m_instance)->CrossOn();
}



void vtkGlyphSource2D::CrossOff()
{
  vtk::ConvertManagedToNative<::vtkGlyphSource2D>(m_instance)->CrossOff();
}



void vtkGlyphSource2D::SetRotationAngle(double arg0)
{
  vtk::ConvertManagedToNative<::vtkGlyphSource2D>(m_instance)->SetRotationAngle(arg0);
}



double vtkGlyphSource2D::GetRotationAngle()
{
  double retVal = vtk::ConvertManagedToNative<::vtkGlyphSource2D>(m_instance)->GetRotationAngle();
  return retVal;
}



void vtkGlyphSource2D::SetGlyphType(int arg0)
{
  vtk::ConvertManagedToNative<::vtkGlyphSource2D>(m_instance)->SetGlyphType(arg0);
}



int vtkGlyphSource2D::GetGlyphTypeMinValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkGlyphSource2D>(m_instance)->GetGlyphTypeMinValue();
  return retVal;
}



int vtkGlyphSource2D::GetGlyphTypeMaxValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkGlyphSource2D>(m_instance)->GetGlyphTypeMaxValue();
  return retVal;
}



int vtkGlyphSource2D::GetGlyphType()
{
  int retVal = vtk::ConvertManagedToNative<::vtkGlyphSource2D>(m_instance)->GetGlyphType();
  return retVal;
}



void vtkGlyphSource2D::SetGlyphTypeToNone()
{
  vtk::ConvertManagedToNative<::vtkGlyphSource2D>(m_instance)->SetGlyphTypeToNone();
}



void vtkGlyphSource2D::SetGlyphTypeToVertex()
{
  vtk::ConvertManagedToNative<::vtkGlyphSource2D>(m_instance)->SetGlyphTypeToVertex();
}



void vtkGlyphSource2D::SetGlyphTypeToDash()
{
  vtk::ConvertManagedToNative<::vtkGlyphSource2D>(m_instance)->SetGlyphTypeToDash();
}



void vtkGlyphSource2D::SetGlyphTypeToCross()
{
  vtk::ConvertManagedToNative<::vtkGlyphSource2D>(m_instance)->SetGlyphTypeToCross();
}



void vtkGlyphSource2D::SetGlyphTypeToThickCross()
{
  vtk::ConvertManagedToNative<::vtkGlyphSource2D>(m_instance)->SetGlyphTypeToThickCross();
}



void vtkGlyphSource2D::SetGlyphTypeToTriangle()
{
  vtk::ConvertManagedToNative<::vtkGlyphSource2D>(m_instance)->SetGlyphTypeToTriangle();
}



void vtkGlyphSource2D::SetGlyphTypeToSquare()
{
  vtk::ConvertManagedToNative<::vtkGlyphSource2D>(m_instance)->SetGlyphTypeToSquare();
}



void vtkGlyphSource2D::SetGlyphTypeToCircle()
{
  vtk::ConvertManagedToNative<::vtkGlyphSource2D>(m_instance)->SetGlyphTypeToCircle();
}



void vtkGlyphSource2D::SetGlyphTypeToDiamond()
{
  vtk::ConvertManagedToNative<::vtkGlyphSource2D>(m_instance)->SetGlyphTypeToDiamond();
}



void vtkGlyphSource2D::SetGlyphTypeToArrow()
{
  vtk::ConvertManagedToNative<::vtkGlyphSource2D>(m_instance)->SetGlyphTypeToArrow();
}



void vtkGlyphSource2D::SetGlyphTypeToThickArrow()
{
  vtk::ConvertManagedToNative<::vtkGlyphSource2D>(m_instance)->SetGlyphTypeToThickArrow();
}



void vtkGlyphSource2D::SetGlyphTypeToHookedArrow()
{
  vtk::ConvertManagedToNative<::vtkGlyphSource2D>(m_instance)->SetGlyphTypeToHookedArrow();
}



  vtkGlyphSource2D::vtkGlyphSource2D(System::IntPtr native, bool bConst) : vtkPolyDataAlgorithm(native, bConst) {}



  vtkGlyphSource2D::vtkGlyphSource2D(bool donothing) : vtkPolyDataAlgorithm(donothing) {}



  vtkGlyphSource2D::vtkGlyphSource2D() : vtkPolyDataAlgorithm(false) {
  this->SetNativePointer(IntPtr(::vtkGlyphSource2D::New()));
}



  vtkGlyphSource2D::~vtkGlyphSource2D() { }





} // end namespace vtkGraphics
