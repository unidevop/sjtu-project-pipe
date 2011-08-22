

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkParametricCrossCapDotNet.h"
#include "vtkObjectDotNet.h"

// native includes
#include "strstream"
#include "vtkParametricCrossCap.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkParametricCrossCap::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkParametricCrossCap>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkParametricCrossCap::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkParametricCrossCap>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkParametricCrossCap^ vtkParametricCrossCap::NewInstance()
{
  ::vtkParametricCrossCap* retVal = static_cast<::vtkParametricCrossCap*>(vtk::ConvertManagedToNative<::vtkParametricCrossCap>(m_instance)->NewInstance());
  return gcnew vtkParametricCrossCap(IntPtr(retVal), false);
}



vtkParametricCrossCap^ vtkParametricCrossCap::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkParametricCrossCap* retVal = static_cast<::vtkParametricCrossCap*>(::vtkParametricCrossCap::SafeDownCast(oWrap));
  return gcnew vtkParametricCrossCap(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkParametricCrossCap::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkParametricCrossCap>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkParametricCrossCap::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkParametricCrossCap>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




int vtkParametricCrossCap::GetDimension()
{
  int retVal = vtk::ConvertManagedToNative<::vtkParametricCrossCap>(m_instance)->GetDimension();
  return retVal;
}



void vtkParametricCrossCap::Evaluate(array<double>^ uvw, array<double>^ Pt, array<double>^ Duvw)
{
  pin_ptr<double> uvwPin = &uvw[0];
  double* nativeuvwPin = uvwPin;
  pin_ptr<double> PtPin = &Pt[0];
  double* nativePtPin = PtPin;
  pin_ptr<double> DuvwPin = &Duvw[0];
  double* nativeDuvwPin = DuvwPin;
  vtk::ConvertManagedToNative<::vtkParametricCrossCap>(m_instance)->Evaluate(nativeuvwPin, nativePtPin, nativeDuvwPin);
}



double vtkParametricCrossCap::EvaluateScalar(array<double>^ uvw, array<double>^ Pt, array<double>^ Duvw)
{
  pin_ptr<double> uvwPin = &uvw[0];
  double* nativeuvwPin = uvwPin;
  pin_ptr<double> PtPin = &Pt[0];
  double* nativePtPin = PtPin;
  pin_ptr<double> DuvwPin = &Duvw[0];
  double* nativeDuvwPin = DuvwPin;
  double retVal = vtk::ConvertManagedToNative<::vtkParametricCrossCap>(m_instance)->EvaluateScalar(nativeuvwPin, nativePtPin, nativeDuvwPin);
  return retVal;
}



  vtkParametricCrossCap::vtkParametricCrossCap(System::IntPtr native, bool bConst) : vtkParametricFunction(native, bConst) {}



  vtkParametricCrossCap::vtkParametricCrossCap(bool donothing) : vtkParametricFunction(donothing) {}



  vtkParametricCrossCap::vtkParametricCrossCap() : vtkParametricFunction(false) {
  this->SetNativePointer(IntPtr(::vtkParametricCrossCap::New()));
}



  vtkParametricCrossCap::~vtkParametricCrossCap() { }





} // end namespace vtkCommon
