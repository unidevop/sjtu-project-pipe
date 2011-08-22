

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkParametricEllipsoidDotNet.h"
#include "vtkObjectDotNet.h"

// native includes
#include "strstream"
#include "vtkParametricEllipsoid.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkParametricEllipsoid::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkParametricEllipsoid>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkParametricEllipsoid::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkParametricEllipsoid>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkParametricEllipsoid^ vtkParametricEllipsoid::NewInstance()
{
  ::vtkParametricEllipsoid* retVal = static_cast<::vtkParametricEllipsoid*>(vtk::ConvertManagedToNative<::vtkParametricEllipsoid>(m_instance)->NewInstance());
  return gcnew vtkParametricEllipsoid(IntPtr(retVal), false);
}



vtkParametricEllipsoid^ vtkParametricEllipsoid::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkParametricEllipsoid* retVal = static_cast<::vtkParametricEllipsoid*>(::vtkParametricEllipsoid::SafeDownCast(oWrap));
  return gcnew vtkParametricEllipsoid(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkParametricEllipsoid::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkParametricEllipsoid>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkParametricEllipsoid::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkParametricEllipsoid>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




int vtkParametricEllipsoid::GetDimension()
{
  int retVal = vtk::ConvertManagedToNative<::vtkParametricEllipsoid>(m_instance)->GetDimension();
  return retVal;
}



void vtkParametricEllipsoid::SetXRadius(double arg0)
{
  vtk::ConvertManagedToNative<::vtkParametricEllipsoid>(m_instance)->SetXRadius(arg0);
}



double vtkParametricEllipsoid::GetXRadius()
{
  double retVal = vtk::ConvertManagedToNative<::vtkParametricEllipsoid>(m_instance)->GetXRadius();
  return retVal;
}



void vtkParametricEllipsoid::SetYRadius(double arg0)
{
  vtk::ConvertManagedToNative<::vtkParametricEllipsoid>(m_instance)->SetYRadius(arg0);
}



double vtkParametricEllipsoid::GetYRadius()
{
  double retVal = vtk::ConvertManagedToNative<::vtkParametricEllipsoid>(m_instance)->GetYRadius();
  return retVal;
}



void vtkParametricEllipsoid::SetZRadius(double arg0)
{
  vtk::ConvertManagedToNative<::vtkParametricEllipsoid>(m_instance)->SetZRadius(arg0);
}



double vtkParametricEllipsoid::GetZRadius()
{
  double retVal = vtk::ConvertManagedToNative<::vtkParametricEllipsoid>(m_instance)->GetZRadius();
  return retVal;
}



void vtkParametricEllipsoid::Evaluate(array<double>^ uvw, array<double>^ Pt, array<double>^ Duvw)
{
  pin_ptr<double> uvwPin = &uvw[0];
  double* nativeuvwPin = uvwPin;
  pin_ptr<double> PtPin = &Pt[0];
  double* nativePtPin = PtPin;
  pin_ptr<double> DuvwPin = &Duvw[0];
  double* nativeDuvwPin = DuvwPin;
  vtk::ConvertManagedToNative<::vtkParametricEllipsoid>(m_instance)->Evaluate(nativeuvwPin, nativePtPin, nativeDuvwPin);
}



double vtkParametricEllipsoid::EvaluateScalar(array<double>^ uvw, array<double>^ Pt, array<double>^ Duvw)
{
  pin_ptr<double> uvwPin = &uvw[0];
  double* nativeuvwPin = uvwPin;
  pin_ptr<double> PtPin = &Pt[0];
  double* nativePtPin = PtPin;
  pin_ptr<double> DuvwPin = &Duvw[0];
  double* nativeDuvwPin = DuvwPin;
  double retVal = vtk::ConvertManagedToNative<::vtkParametricEllipsoid>(m_instance)->EvaluateScalar(nativeuvwPin, nativePtPin, nativeDuvwPin);
  return retVal;
}



  vtkParametricEllipsoid::vtkParametricEllipsoid(System::IntPtr native, bool bConst) : vtkParametricFunction(native, bConst) {}



  vtkParametricEllipsoid::vtkParametricEllipsoid(bool donothing) : vtkParametricFunction(donothing) {}



  vtkParametricEllipsoid::vtkParametricEllipsoid() : vtkParametricFunction(false) {
  this->SetNativePointer(IntPtr(::vtkParametricEllipsoid::New()));
}



  vtkParametricEllipsoid::~vtkParametricEllipsoid() { }





} // end namespace vtkCommon
