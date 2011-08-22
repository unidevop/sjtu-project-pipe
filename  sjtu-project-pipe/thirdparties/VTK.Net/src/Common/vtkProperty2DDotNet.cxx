

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkProperty2DDotNet.h"

// native includes
#include "strstream"
#include "vtkProperty2D.h"

using namespace System;

namespace vtk {

System::String^ vtkProperty2D::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkProperty2D>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkProperty2D::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkProperty2D>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkProperty2D^ vtkProperty2D::NewInstance()
{
  ::vtkProperty2D* retVal = static_cast<::vtkProperty2D*>(vtk::ConvertManagedToNative<::vtkProperty2D>(m_instance)->NewInstance());
  return gcnew vtkProperty2D(IntPtr(retVal), false);
}



vtkProperty2D^ vtkProperty2D::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkProperty2D* retVal = static_cast<::vtkProperty2D*>(::vtkProperty2D::SafeDownCast(oWrap));
  return gcnew vtkProperty2D(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkProperty2D::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkProperty2D>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkProperty2D::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkProperty2D>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkProperty2D::DeepCopy(vtkProperty2D^ p)
{
  ::vtkProperty2D* pWrap = vtk::ConvertManagedToNative<::vtkProperty2D>(p->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkProperty2D>(m_instance)->DeepCopy(pWrap);
}



void vtkProperty2D::SetColor(double arg0, double arg1, double arg2)
{
  vtk::ConvertManagedToNative<::vtkProperty2D>(m_instance)->SetColor(arg0, arg1, arg2);
}



void vtkProperty2D::SetColor(array<double>^ a)
{
  pin_ptr<double> aPin = &a[0];
  double* nativeaPin = aPin;
  vtk::ConvertManagedToNative<::vtkProperty2D>(m_instance)->SetColor(nativeaPin);
}



array<double>^ vtkProperty2D::GetColor()
{
  const double* retVal = vtk::ConvertManagedToNative<::vtkProperty2D>(m_instance)->GetColor();
  array<double>^ mRetVal = gcnew array<double>(3);
  for (size_t cprIdx=0; cprIdx<3; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



double vtkProperty2D::GetOpacity()
{
  double retVal = vtk::ConvertManagedToNative<::vtkProperty2D>(m_instance)->GetOpacity();
  return retVal;
}



void vtkProperty2D::SetOpacity(double arg0)
{
  vtk::ConvertManagedToNative<::vtkProperty2D>(m_instance)->SetOpacity(arg0);
}



void vtkProperty2D::SetPointSize(float arg0)
{
  vtk::ConvertManagedToNative<::vtkProperty2D>(m_instance)->SetPointSize(arg0);
}



float vtkProperty2D::GetPointSizeMinValue()
{
  float retVal = vtk::ConvertManagedToNative<::vtkProperty2D>(m_instance)->GetPointSizeMinValue();
  return retVal;
}



float vtkProperty2D::GetPointSizeMaxValue()
{
  float retVal = vtk::ConvertManagedToNative<::vtkProperty2D>(m_instance)->GetPointSizeMaxValue();
  return retVal;
}



float vtkProperty2D::GetPointSize()
{
  float retVal = vtk::ConvertManagedToNative<::vtkProperty2D>(m_instance)->GetPointSize();
  return retVal;
}



void vtkProperty2D::SetLineWidth(float arg0)
{
  vtk::ConvertManagedToNative<::vtkProperty2D>(m_instance)->SetLineWidth(arg0);
}



float vtkProperty2D::GetLineWidthMinValue()
{
  float retVal = vtk::ConvertManagedToNative<::vtkProperty2D>(m_instance)->GetLineWidthMinValue();
  return retVal;
}



float vtkProperty2D::GetLineWidthMaxValue()
{
  float retVal = vtk::ConvertManagedToNative<::vtkProperty2D>(m_instance)->GetLineWidthMaxValue();
  return retVal;
}



float vtkProperty2D::GetLineWidth()
{
  float retVal = vtk::ConvertManagedToNative<::vtkProperty2D>(m_instance)->GetLineWidth();
  return retVal;
}



void vtkProperty2D::SetLineStipplePattern(int arg0)
{
  vtk::ConvertManagedToNative<::vtkProperty2D>(m_instance)->SetLineStipplePattern(arg0);
}



int vtkProperty2D::GetLineStipplePattern()
{
  int retVal = vtk::ConvertManagedToNative<::vtkProperty2D>(m_instance)->GetLineStipplePattern();
  return retVal;
}



void vtkProperty2D::SetLineStippleRepeatFactor(int arg0)
{
  vtk::ConvertManagedToNative<::vtkProperty2D>(m_instance)->SetLineStippleRepeatFactor(arg0);
}



int vtkProperty2D::GetLineStippleRepeatFactorMinValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkProperty2D>(m_instance)->GetLineStippleRepeatFactorMinValue();
  return retVal;
}



int vtkProperty2D::GetLineStippleRepeatFactorMaxValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkProperty2D>(m_instance)->GetLineStippleRepeatFactorMaxValue();
  return retVal;
}



int vtkProperty2D::GetLineStippleRepeatFactor()
{
  int retVal = vtk::ConvertManagedToNative<::vtkProperty2D>(m_instance)->GetLineStippleRepeatFactor();
  return retVal;
}



void vtkProperty2D::SetDisplayLocation(int arg0)
{
  vtk::ConvertManagedToNative<::vtkProperty2D>(m_instance)->SetDisplayLocation(arg0);
}



int vtkProperty2D::GetDisplayLocationMinValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkProperty2D>(m_instance)->GetDisplayLocationMinValue();
  return retVal;
}



int vtkProperty2D::GetDisplayLocationMaxValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkProperty2D>(m_instance)->GetDisplayLocationMaxValue();
  return retVal;
}



int vtkProperty2D::GetDisplayLocation()
{
  int retVal = vtk::ConvertManagedToNative<::vtkProperty2D>(m_instance)->GetDisplayLocation();
  return retVal;
}



void vtkProperty2D::SetDisplayLocationToBackground()
{
  vtk::ConvertManagedToNative<::vtkProperty2D>(m_instance)->SetDisplayLocationToBackground();
}



void vtkProperty2D::SetDisplayLocationToForeground()
{
  vtk::ConvertManagedToNative<::vtkProperty2D>(m_instance)->SetDisplayLocationToForeground();
}



  vtkProperty2D::vtkProperty2D(System::IntPtr native, bool bConst) : vtkObject(native, bConst) {}



  vtkProperty2D::vtkProperty2D(bool donothing) : vtkObject(donothing) {}



  vtkProperty2D::vtkProperty2D() : vtkObject(false) {
  this->SetNativePointer(IntPtr(::vtkProperty2D::New()));
}



  vtkProperty2D::~vtkProperty2D() { }





} // end namespace vtkCommon
