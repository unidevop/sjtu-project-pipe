

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkParametricTorusDotNet.h"
#include "vtkObjectDotNet.h"

// native includes
#include "strstream"
#include "vtkParametricTorus.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkParametricTorus::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkParametricTorus>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkParametricTorus::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkParametricTorus>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkParametricTorus^ vtkParametricTorus::NewInstance()
{
  ::vtkParametricTorus* retVal = static_cast<::vtkParametricTorus*>(vtk::ConvertManagedToNative<::vtkParametricTorus>(m_instance)->NewInstance());
  return gcnew vtkParametricTorus(IntPtr(retVal), false);
}



vtkParametricTorus^ vtkParametricTorus::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkParametricTorus* retVal = static_cast<::vtkParametricTorus*>(::vtkParametricTorus::SafeDownCast(oWrap));
  return gcnew vtkParametricTorus(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkParametricTorus::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkParametricTorus>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkParametricTorus::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkParametricTorus>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkParametricTorus::SetRingRadius(double arg0)
{
  vtk::ConvertManagedToNative<::vtkParametricTorus>(m_instance)->SetRingRadius(arg0);
}



double vtkParametricTorus::GetRingRadius()
{
  double retVal = vtk::ConvertManagedToNative<::vtkParametricTorus>(m_instance)->GetRingRadius();
  return retVal;
}



void vtkParametricTorus::SetCrossSectionRadius(double arg0)
{
  vtk::ConvertManagedToNative<::vtkParametricTorus>(m_instance)->SetCrossSectionRadius(arg0);
}



double vtkParametricTorus::GetCrossSectionRadius()
{
  double retVal = vtk::ConvertManagedToNative<::vtkParametricTorus>(m_instance)->GetCrossSectionRadius();
  return retVal;
}



int vtkParametricTorus::GetDimension()
{
  int retVal = vtk::ConvertManagedToNative<::vtkParametricTorus>(m_instance)->GetDimension();
  return retVal;
}



void vtkParametricTorus::Evaluate(array<double>^ uvw, array<double>^ Pt, array<double>^ Duvw)
{
  pin_ptr<double> uvwPin = &uvw[0];
  double* nativeuvwPin = uvwPin;
  pin_ptr<double> PtPin = &Pt[0];
  double* nativePtPin = PtPin;
  pin_ptr<double> DuvwPin = &Duvw[0];
  double* nativeDuvwPin = DuvwPin;
  vtk::ConvertManagedToNative<::vtkParametricTorus>(m_instance)->Evaluate(nativeuvwPin, nativePtPin, nativeDuvwPin);
}



double vtkParametricTorus::EvaluateScalar(array<double>^ uvw, array<double>^ Pt, array<double>^ Duvw)
{
  pin_ptr<double> uvwPin = &uvw[0];
  double* nativeuvwPin = uvwPin;
  pin_ptr<double> PtPin = &Pt[0];
  double* nativePtPin = PtPin;
  pin_ptr<double> DuvwPin = &Duvw[0];
  double* nativeDuvwPin = DuvwPin;
  double retVal = vtk::ConvertManagedToNative<::vtkParametricTorus>(m_instance)->EvaluateScalar(nativeuvwPin, nativePtPin, nativeDuvwPin);
  return retVal;
}



  vtkParametricTorus::vtkParametricTorus(System::IntPtr native, bool bConst) : vtkParametricFunction(native, bConst) {}



  vtkParametricTorus::vtkParametricTorus(bool donothing) : vtkParametricFunction(donothing) {}



  vtkParametricTorus::vtkParametricTorus() : vtkParametricFunction(false) {
  this->SetNativePointer(IntPtr(::vtkParametricTorus::New()));
}



  vtkParametricTorus::~vtkParametricTorus() { }





} // end namespace vtkCommon
