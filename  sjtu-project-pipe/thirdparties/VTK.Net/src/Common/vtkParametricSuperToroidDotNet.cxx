

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkParametricSuperToroidDotNet.h"
#include "vtkObjectDotNet.h"

// native includes
#include "strstream"
#include "vtkParametricSuperToroid.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkParametricSuperToroid::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkParametricSuperToroid>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkParametricSuperToroid::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkParametricSuperToroid>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkParametricSuperToroid^ vtkParametricSuperToroid::NewInstance()
{
  ::vtkParametricSuperToroid* retVal = static_cast<::vtkParametricSuperToroid*>(vtk::ConvertManagedToNative<::vtkParametricSuperToroid>(m_instance)->NewInstance());
  return gcnew vtkParametricSuperToroid(IntPtr(retVal), false);
}



vtkParametricSuperToroid^ vtkParametricSuperToroid::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkParametricSuperToroid* retVal = static_cast<::vtkParametricSuperToroid*>(::vtkParametricSuperToroid::SafeDownCast(oWrap));
  return gcnew vtkParametricSuperToroid(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkParametricSuperToroid::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkParametricSuperToroid>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkParametricSuperToroid::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkParametricSuperToroid>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




int vtkParametricSuperToroid::GetDimension()
{
  int retVal = vtk::ConvertManagedToNative<::vtkParametricSuperToroid>(m_instance)->GetDimension();
  return retVal;
}



void vtkParametricSuperToroid::SetRingRadius(double arg0)
{
  vtk::ConvertManagedToNative<::vtkParametricSuperToroid>(m_instance)->SetRingRadius(arg0);
}



double vtkParametricSuperToroid::GetRingRadius()
{
  double retVal = vtk::ConvertManagedToNative<::vtkParametricSuperToroid>(m_instance)->GetRingRadius();
  return retVal;
}



void vtkParametricSuperToroid::SetCrossSectionRadius(double arg0)
{
  vtk::ConvertManagedToNative<::vtkParametricSuperToroid>(m_instance)->SetCrossSectionRadius(arg0);
}



double vtkParametricSuperToroid::GetCrossSectionRadius()
{
  double retVal = vtk::ConvertManagedToNative<::vtkParametricSuperToroid>(m_instance)->GetCrossSectionRadius();
  return retVal;
}



void vtkParametricSuperToroid::SetXRadius(double arg0)
{
  vtk::ConvertManagedToNative<::vtkParametricSuperToroid>(m_instance)->SetXRadius(arg0);
}



double vtkParametricSuperToroid::GetXRadius()
{
  double retVal = vtk::ConvertManagedToNative<::vtkParametricSuperToroid>(m_instance)->GetXRadius();
  return retVal;
}



void vtkParametricSuperToroid::SetYRadius(double arg0)
{
  vtk::ConvertManagedToNative<::vtkParametricSuperToroid>(m_instance)->SetYRadius(arg0);
}



double vtkParametricSuperToroid::GetYRadius()
{
  double retVal = vtk::ConvertManagedToNative<::vtkParametricSuperToroid>(m_instance)->GetYRadius();
  return retVal;
}



void vtkParametricSuperToroid::SetZRadius(double arg0)
{
  vtk::ConvertManagedToNative<::vtkParametricSuperToroid>(m_instance)->SetZRadius(arg0);
}



double vtkParametricSuperToroid::GetZRadius()
{
  double retVal = vtk::ConvertManagedToNative<::vtkParametricSuperToroid>(m_instance)->GetZRadius();
  return retVal;
}



void vtkParametricSuperToroid::SetN1(double arg0)
{
  vtk::ConvertManagedToNative<::vtkParametricSuperToroid>(m_instance)->SetN1(arg0);
}



double vtkParametricSuperToroid::GetN1()
{
  double retVal = vtk::ConvertManagedToNative<::vtkParametricSuperToroid>(m_instance)->GetN1();
  return retVal;
}



void vtkParametricSuperToroid::SetN2(double arg0)
{
  vtk::ConvertManagedToNative<::vtkParametricSuperToroid>(m_instance)->SetN2(arg0);
}



double vtkParametricSuperToroid::GetN2()
{
  double retVal = vtk::ConvertManagedToNative<::vtkParametricSuperToroid>(m_instance)->GetN2();
  return retVal;
}



void vtkParametricSuperToroid::Evaluate(array<double>^ uvw, array<double>^ Pt, array<double>^ Duvw)
{
  pin_ptr<double> uvwPin = &uvw[0];
  double* nativeuvwPin = uvwPin;
  pin_ptr<double> PtPin = &Pt[0];
  double* nativePtPin = PtPin;
  pin_ptr<double> DuvwPin = &Duvw[0];
  double* nativeDuvwPin = DuvwPin;
  vtk::ConvertManagedToNative<::vtkParametricSuperToroid>(m_instance)->Evaluate(nativeuvwPin, nativePtPin, nativeDuvwPin);
}



double vtkParametricSuperToroid::EvaluateScalar(array<double>^ uvw, array<double>^ Pt, array<double>^ Duvw)
{
  pin_ptr<double> uvwPin = &uvw[0];
  double* nativeuvwPin = uvwPin;
  pin_ptr<double> PtPin = &Pt[0];
  double* nativePtPin = PtPin;
  pin_ptr<double> DuvwPin = &Duvw[0];
  double* nativeDuvwPin = DuvwPin;
  double retVal = vtk::ConvertManagedToNative<::vtkParametricSuperToroid>(m_instance)->EvaluateScalar(nativeuvwPin, nativePtPin, nativeDuvwPin);
  return retVal;
}



  vtkParametricSuperToroid::vtkParametricSuperToroid(System::IntPtr native, bool bConst) : vtkParametricFunction(native, bConst) {}



  vtkParametricSuperToroid::vtkParametricSuperToroid(bool donothing) : vtkParametricFunction(donothing) {}



  vtkParametricSuperToroid::vtkParametricSuperToroid() : vtkParametricFunction(false) {
  this->SetNativePointer(IntPtr(::vtkParametricSuperToroid::New()));
}



  vtkParametricSuperToroid::~vtkParametricSuperToroid() { }





} // end namespace vtkCommon
