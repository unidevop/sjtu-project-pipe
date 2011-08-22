

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkParametricSuperEllipsoidDotNet.h"
#include "vtkObjectDotNet.h"

// native includes
#include "strstream"
#include "vtkParametricSuperEllipsoid.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkParametricSuperEllipsoid::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkParametricSuperEllipsoid>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkParametricSuperEllipsoid::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkParametricSuperEllipsoid>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkParametricSuperEllipsoid^ vtkParametricSuperEllipsoid::NewInstance()
{
  ::vtkParametricSuperEllipsoid* retVal = static_cast<::vtkParametricSuperEllipsoid*>(vtk::ConvertManagedToNative<::vtkParametricSuperEllipsoid>(m_instance)->NewInstance());
  return gcnew vtkParametricSuperEllipsoid(IntPtr(retVal), false);
}



vtkParametricSuperEllipsoid^ vtkParametricSuperEllipsoid::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkParametricSuperEllipsoid* retVal = static_cast<::vtkParametricSuperEllipsoid*>(::vtkParametricSuperEllipsoid::SafeDownCast(oWrap));
  return gcnew vtkParametricSuperEllipsoid(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkParametricSuperEllipsoid::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkParametricSuperEllipsoid>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkParametricSuperEllipsoid::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkParametricSuperEllipsoid>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




int vtkParametricSuperEllipsoid::GetDimension()
{
  int retVal = vtk::ConvertManagedToNative<::vtkParametricSuperEllipsoid>(m_instance)->GetDimension();
  return retVal;
}



void vtkParametricSuperEllipsoid::SetXRadius(double arg0)
{
  vtk::ConvertManagedToNative<::vtkParametricSuperEllipsoid>(m_instance)->SetXRadius(arg0);
}



double vtkParametricSuperEllipsoid::GetXRadius()
{
  double retVal = vtk::ConvertManagedToNative<::vtkParametricSuperEllipsoid>(m_instance)->GetXRadius();
  return retVal;
}



void vtkParametricSuperEllipsoid::SetYRadius(double arg0)
{
  vtk::ConvertManagedToNative<::vtkParametricSuperEllipsoid>(m_instance)->SetYRadius(arg0);
}



double vtkParametricSuperEllipsoid::GetYRadius()
{
  double retVal = vtk::ConvertManagedToNative<::vtkParametricSuperEllipsoid>(m_instance)->GetYRadius();
  return retVal;
}



void vtkParametricSuperEllipsoid::SetZRadius(double arg0)
{
  vtk::ConvertManagedToNative<::vtkParametricSuperEllipsoid>(m_instance)->SetZRadius(arg0);
}



double vtkParametricSuperEllipsoid::GetZRadius()
{
  double retVal = vtk::ConvertManagedToNative<::vtkParametricSuperEllipsoid>(m_instance)->GetZRadius();
  return retVal;
}



void vtkParametricSuperEllipsoid::SetN1(double arg0)
{
  vtk::ConvertManagedToNative<::vtkParametricSuperEllipsoid>(m_instance)->SetN1(arg0);
}



double vtkParametricSuperEllipsoid::GetN1()
{
  double retVal = vtk::ConvertManagedToNative<::vtkParametricSuperEllipsoid>(m_instance)->GetN1();
  return retVal;
}



void vtkParametricSuperEllipsoid::SetN2(double arg0)
{
  vtk::ConvertManagedToNative<::vtkParametricSuperEllipsoid>(m_instance)->SetN2(arg0);
}



double vtkParametricSuperEllipsoid::GetN2()
{
  double retVal = vtk::ConvertManagedToNative<::vtkParametricSuperEllipsoid>(m_instance)->GetN2();
  return retVal;
}



void vtkParametricSuperEllipsoid::Evaluate(array<double>^ uvw, array<double>^ Pt, array<double>^ Duvw)
{
  pin_ptr<double> uvwPin = &uvw[0];
  double* nativeuvwPin = uvwPin;
  pin_ptr<double> PtPin = &Pt[0];
  double* nativePtPin = PtPin;
  pin_ptr<double> DuvwPin = &Duvw[0];
  double* nativeDuvwPin = DuvwPin;
  vtk::ConvertManagedToNative<::vtkParametricSuperEllipsoid>(m_instance)->Evaluate(nativeuvwPin, nativePtPin, nativeDuvwPin);
}



double vtkParametricSuperEllipsoid::EvaluateScalar(array<double>^ uvw, array<double>^ Pt, array<double>^ Duvw)
{
  pin_ptr<double> uvwPin = &uvw[0];
  double* nativeuvwPin = uvwPin;
  pin_ptr<double> PtPin = &Pt[0];
  double* nativePtPin = PtPin;
  pin_ptr<double> DuvwPin = &Duvw[0];
  double* nativeDuvwPin = DuvwPin;
  double retVal = vtk::ConvertManagedToNative<::vtkParametricSuperEllipsoid>(m_instance)->EvaluateScalar(nativeuvwPin, nativePtPin, nativeDuvwPin);
  return retVal;
}



  vtkParametricSuperEllipsoid::vtkParametricSuperEllipsoid(System::IntPtr native, bool bConst) : vtkParametricFunction(native, bConst) {}



  vtkParametricSuperEllipsoid::vtkParametricSuperEllipsoid(bool donothing) : vtkParametricFunction(donothing) {}



  vtkParametricSuperEllipsoid::vtkParametricSuperEllipsoid() : vtkParametricFunction(false) {
  this->SetNativePointer(IntPtr(::vtkParametricSuperEllipsoid::New()));
}



  vtkParametricSuperEllipsoid::~vtkParametricSuperEllipsoid() { }





} // end namespace vtkCommon
