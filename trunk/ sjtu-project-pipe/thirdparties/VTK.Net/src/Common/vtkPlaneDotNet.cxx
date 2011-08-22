

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkPlaneDotNet.h"
#include "vtkObjectDotNet.h"

// native includes
#include "strstream"
#include "vtkPlane.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkPlane::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkPlane>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkPlane::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkPlane>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkPlane^ vtkPlane::NewInstance()
{
  ::vtkPlane* retVal = static_cast<::vtkPlane*>(vtk::ConvertManagedToNative<::vtkPlane>(m_instance)->NewInstance());
  return gcnew vtkPlane(IntPtr(retVal), false);
}



vtkPlane^ vtkPlane::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkPlane* retVal = static_cast<::vtkPlane*>(::vtkPlane::SafeDownCast(oWrap));
  return gcnew vtkPlane(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkPlane::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkPlane>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkPlane::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkPlane>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




double vtkPlane::EvaluateFunction(array<double>^ x)
{
  pin_ptr<double> xPin = &x[0];
  double* nativexPin = xPin;
  double retVal = vtk::ConvertManagedToNative<::vtkPlane>(m_instance)->EvaluateFunction(nativexPin);
  return retVal;
}



double vtkPlane::EvaluateFunction(double x, double y, double z)
{
  double retVal = vtk::ConvertManagedToNative<::vtkPlane>(m_instance)->EvaluateFunction(x, y, z);
  return retVal;
}



void vtkPlane::EvaluateGradient(array<double>^ x, array<double>^ g)
{
  pin_ptr<double> xPin = &x[0];
  double* nativexPin = xPin;
  pin_ptr<double> gPin = &g[0];
  double* nativegPin = gPin;
  vtk::ConvertManagedToNative<::vtkPlane>(m_instance)->EvaluateGradient(nativexPin, nativegPin);
}



void vtkPlane::SetNormal(double arg0, double arg1, double arg2)
{
  vtk::ConvertManagedToNative<::vtkPlane>(m_instance)->SetNormal(arg0, arg1, arg2);
}



void vtkPlane::SetNormal(array<double>^ a)
{
  pin_ptr<double> aPin = &a[0];
  double* nativeaPin = aPin;
  vtk::ConvertManagedToNative<::vtkPlane>(m_instance)->SetNormal(nativeaPin);
}



array<double>^ vtkPlane::GetNormal()
{
  const double* retVal = vtk::ConvertManagedToNative<::vtkPlane>(m_instance)->GetNormal();
  array<double>^ mRetVal = gcnew array<double>(3);
  for (size_t cprIdx=0; cprIdx<3; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



void vtkPlane::SetOrigin(double arg0, double arg1, double arg2)
{
  vtk::ConvertManagedToNative<::vtkPlane>(m_instance)->SetOrigin(arg0, arg1, arg2);
}



void vtkPlane::SetOrigin(array<double>^ a)
{
  pin_ptr<double> aPin = &a[0];
  double* nativeaPin = aPin;
  vtk::ConvertManagedToNative<::vtkPlane>(m_instance)->SetOrigin(nativeaPin);
}



array<double>^ vtkPlane::GetOrigin()
{
  const double* retVal = vtk::ConvertManagedToNative<::vtkPlane>(m_instance)->GetOrigin();
  array<double>^ mRetVal = gcnew array<double>(3);
  for (size_t cprIdx=0; cprIdx<3; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



void vtkPlane::Push(double distance)
{
  vtk::ConvertManagedToNative<::vtkPlane>(m_instance)->Push(distance);
}



void vtkPlane::ProjectPoint(array<double>^ x, array<double>^ origin, array<double>^ normal, array<double>^ xproj)
{
  pin_ptr<double> xPin = &x[0];
  double* nativexPin = xPin;
  pin_ptr<double> originPin = &origin[0];
  double* nativeoriginPin = originPin;
  pin_ptr<double> normalPin = &normal[0];
  double* nativenormalPin = normalPin;
  pin_ptr<double> xprojPin = &xproj[0];
  double* nativexprojPin = xprojPin;
  ::vtkPlane::ProjectPoint(nativexPin, nativeoriginPin, nativenormalPin, nativexprojPin);
}



void vtkPlane::GeneralizedProjectPoint(array<double>^ x, array<double>^ origin, array<double>^ normal, array<double>^ xproj)
{
  pin_ptr<double> xPin = &x[0];
  double* nativexPin = xPin;
  pin_ptr<double> originPin = &origin[0];
  double* nativeoriginPin = originPin;
  pin_ptr<double> normalPin = &normal[0];
  double* nativenormalPin = normalPin;
  pin_ptr<double> xprojPin = &xproj[0];
  double* nativexprojPin = xprojPin;
  ::vtkPlane::GeneralizedProjectPoint(nativexPin, nativeoriginPin, nativenormalPin, nativexprojPin);
}



double vtkPlane::Evaluate(array<double>^ normal, array<double>^ origin, array<double>^ x)
{
  pin_ptr<double> normalPin = &normal[0];
  double* nativenormalPin = normalPin;
  pin_ptr<double> originPin = &origin[0];
  double* nativeoriginPin = originPin;
  pin_ptr<double> xPin = &x[0];
  double* nativexPin = xPin;
  double retVal = ::vtkPlane::Evaluate(nativenormalPin, nativeoriginPin, nativexPin);
  return retVal;
}



double vtkPlane::DistanceToPlane(array<double>^ x, array<double>^ n, array<double>^ p0)
{
  pin_ptr<double> xPin = &x[0];
  double* nativexPin = xPin;
  pin_ptr<double> nPin = &n[0];
  double* nativenPin = nPin;
  pin_ptr<double> p0Pin = &p0[0];
  double* nativep0Pin = p0Pin;
  double retVal = ::vtkPlane::DistanceToPlane(nativexPin, nativenPin, nativep0Pin);
  return retVal;
}



int vtkPlane::IntersectWithLine(array<double>^ p1, array<double>^ p2, array<double>^ n, array<double>^ p0, double% t, array<double>^ x)
{
  pin_ptr<double> p1Pin = &p1[0];
  double* nativep1Pin = p1Pin;
  pin_ptr<double> p2Pin = &p2[0];
  double* nativep2Pin = p2Pin;
  pin_ptr<double> nPin = &n[0];
  double* nativenPin = nPin;
  pin_ptr<double> p0Pin = &p0[0];
  double* nativep0Pin = p0Pin;
  pin_ptr<double> tPin = &t;
  pin_ptr<double> xPin = &x[0];
  double* nativexPin = xPin;
  int retVal = ::vtkPlane::IntersectWithLine(nativep1Pin, nativep2Pin, nativenPin, nativep0Pin, *tPin, nativexPin);
  return retVal;
}



  vtkPlane::vtkPlane(System::IntPtr native, bool bConst) : vtkImplicitFunction(native, bConst) {}



  vtkPlane::vtkPlane(bool donothing) : vtkImplicitFunction(donothing) {}



  vtkPlane::vtkPlane() : vtkImplicitFunction(false) {
  this->SetNativePointer(IntPtr(::vtkPlane::New()));
}



  vtkPlane::~vtkPlane() { }





} // end namespace vtkCommon
