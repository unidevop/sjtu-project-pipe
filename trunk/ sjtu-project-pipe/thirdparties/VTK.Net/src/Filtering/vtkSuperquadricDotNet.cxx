

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkSuperquadricDotNet.h"

// native includes
#include "strstream"
#include "vtkSuperquadric.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkSuperquadric::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkSuperquadric>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkSuperquadric::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkSuperquadric>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkSuperquadric^ vtkSuperquadric::NewInstance()
{
  ::vtkSuperquadric* retVal = static_cast<::vtkSuperquadric*>(vtk::ConvertManagedToNative<::vtkSuperquadric>(m_instance)->NewInstance());
  return gcnew vtkSuperquadric(IntPtr(retVal), false);
}



vtkSuperquadric^ vtkSuperquadric::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkSuperquadric* retVal = static_cast<::vtkSuperquadric*>(::vtkSuperquadric::SafeDownCast(oWrap));
  return gcnew vtkSuperquadric(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkSuperquadric::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkSuperquadric>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkSuperquadric::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkSuperquadric>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




double vtkSuperquadric::EvaluateFunction(array<double>^ x)
{
  pin_ptr<double> xPin = &x[0];
  double* nativexPin = xPin;
  double retVal = vtk::ConvertManagedToNative<::vtkSuperquadric>(m_instance)->EvaluateFunction(nativexPin);
  return retVal;
}



double vtkSuperquadric::EvaluateFunction(double x, double y, double z)
{
  double retVal = vtk::ConvertManagedToNative<::vtkSuperquadric>(m_instance)->EvaluateFunction(x, y, z);
  return retVal;
}



void vtkSuperquadric::EvaluateGradient(array<double>^ x, array<double>^ g)
{
  pin_ptr<double> xPin = &x[0];
  double* nativexPin = xPin;
  pin_ptr<double> gPin = &g[0];
  double* nativegPin = gPin;
  vtk::ConvertManagedToNative<::vtkSuperquadric>(m_instance)->EvaluateGradient(nativexPin, nativegPin);
}



void vtkSuperquadric::SetCenter(double arg0, double arg1, double arg2)
{
  vtk::ConvertManagedToNative<::vtkSuperquadric>(m_instance)->SetCenter(arg0, arg1, arg2);
}



void vtkSuperquadric::SetCenter(array<double>^ a)
{
  pin_ptr<double> aPin = &a[0];
  double* nativeaPin = aPin;
  vtk::ConvertManagedToNative<::vtkSuperquadric>(m_instance)->SetCenter(nativeaPin);
}



array<double>^ vtkSuperquadric::GetCenter()
{
  const double* retVal = vtk::ConvertManagedToNative<::vtkSuperquadric>(m_instance)->GetCenter();
  array<double>^ mRetVal = gcnew array<double>(3);
  for (size_t cprIdx=0; cprIdx<3; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



void vtkSuperquadric::SetScale(double arg0, double arg1, double arg2)
{
  vtk::ConvertManagedToNative<::vtkSuperquadric>(m_instance)->SetScale(arg0, arg1, arg2);
}



void vtkSuperquadric::SetScale(array<double>^ a)
{
  pin_ptr<double> aPin = &a[0];
  double* nativeaPin = aPin;
  vtk::ConvertManagedToNative<::vtkSuperquadric>(m_instance)->SetScale(nativeaPin);
}



array<double>^ vtkSuperquadric::GetScale()
{
  const double* retVal = vtk::ConvertManagedToNative<::vtkSuperquadric>(m_instance)->GetScale();
  array<double>^ mRetVal = gcnew array<double>(3);
  for (size_t cprIdx=0; cprIdx<3; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



double vtkSuperquadric::GetThickness()
{
  double retVal = vtk::ConvertManagedToNative<::vtkSuperquadric>(m_instance)->GetThickness();
  return retVal;
}



void vtkSuperquadric::SetThickness(double arg0)
{
  vtk::ConvertManagedToNative<::vtkSuperquadric>(m_instance)->SetThickness(arg0);
}



double vtkSuperquadric::GetThicknessMinValue()
{
  double retVal = vtk::ConvertManagedToNative<::vtkSuperquadric>(m_instance)->GetThicknessMinValue();
  return retVal;
}



double vtkSuperquadric::GetThicknessMaxValue()
{
  double retVal = vtk::ConvertManagedToNative<::vtkSuperquadric>(m_instance)->GetThicknessMaxValue();
  return retVal;
}



double vtkSuperquadric::GetPhiRoundness()
{
  double retVal = vtk::ConvertManagedToNative<::vtkSuperquadric>(m_instance)->GetPhiRoundness();
  return retVal;
}



void vtkSuperquadric::SetPhiRoundness(double e)
{
  vtk::ConvertManagedToNative<::vtkSuperquadric>(m_instance)->SetPhiRoundness(e);
}



double vtkSuperquadric::GetThetaRoundness()
{
  double retVal = vtk::ConvertManagedToNative<::vtkSuperquadric>(m_instance)->GetThetaRoundness();
  return retVal;
}



void vtkSuperquadric::SetThetaRoundness(double e)
{
  vtk::ConvertManagedToNative<::vtkSuperquadric>(m_instance)->SetThetaRoundness(e);
}



void vtkSuperquadric::SetSize(double arg0)
{
  vtk::ConvertManagedToNative<::vtkSuperquadric>(m_instance)->SetSize(arg0);
}



double vtkSuperquadric::GetSize()
{
  double retVal = vtk::ConvertManagedToNative<::vtkSuperquadric>(m_instance)->GetSize();
  return retVal;
}



void vtkSuperquadric::ToroidalOn()
{
  vtk::ConvertManagedToNative<::vtkSuperquadric>(m_instance)->ToroidalOn();
}



void vtkSuperquadric::ToroidalOff()
{
  vtk::ConvertManagedToNative<::vtkSuperquadric>(m_instance)->ToroidalOff();
}



int vtkSuperquadric::GetToroidal()
{
  int retVal = vtk::ConvertManagedToNative<::vtkSuperquadric>(m_instance)->GetToroidal();
  return retVal;
}



void vtkSuperquadric::SetToroidal(int arg0)
{
  vtk::ConvertManagedToNative<::vtkSuperquadric>(m_instance)->SetToroidal(arg0);
}



  vtkSuperquadric::vtkSuperquadric(System::IntPtr native, bool bConst) : vtkImplicitFunction(native, bConst) {}



  vtkSuperquadric::vtkSuperquadric(bool donothing) : vtkImplicitFunction(donothing) {}



  vtkSuperquadric::vtkSuperquadric() : vtkImplicitFunction(false) {
  this->SetNativePointer(IntPtr(::vtkSuperquadric::New()));
}



  vtkSuperquadric::~vtkSuperquadric() { }





} // end namespace vtkFiltering
