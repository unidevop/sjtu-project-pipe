

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkParametricConicSpiralDotNet.h"
#include "vtkObjectDotNet.h"

// native includes
#include "strstream"
#include "vtkParametricConicSpiral.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkParametricConicSpiral::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkParametricConicSpiral>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkParametricConicSpiral::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkParametricConicSpiral>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkParametricConicSpiral^ vtkParametricConicSpiral::NewInstance()
{
  ::vtkParametricConicSpiral* retVal = static_cast<::vtkParametricConicSpiral*>(vtk::ConvertManagedToNative<::vtkParametricConicSpiral>(m_instance)->NewInstance());
  return gcnew vtkParametricConicSpiral(IntPtr(retVal), false);
}



vtkParametricConicSpiral^ vtkParametricConicSpiral::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkParametricConicSpiral* retVal = static_cast<::vtkParametricConicSpiral*>(::vtkParametricConicSpiral::SafeDownCast(oWrap));
  return gcnew vtkParametricConicSpiral(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkParametricConicSpiral::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkParametricConicSpiral>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkParametricConicSpiral::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkParametricConicSpiral>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




int vtkParametricConicSpiral::GetDimension()
{
  int retVal = vtk::ConvertManagedToNative<::vtkParametricConicSpiral>(m_instance)->GetDimension();
  return retVal;
}



void vtkParametricConicSpiral::SetA(double arg0)
{
  vtk::ConvertManagedToNative<::vtkParametricConicSpiral>(m_instance)->SetA(arg0);
}



double vtkParametricConicSpiral::GetA()
{
  double retVal = vtk::ConvertManagedToNative<::vtkParametricConicSpiral>(m_instance)->GetA();
  return retVal;
}



void vtkParametricConicSpiral::SetB(double arg0)
{
  vtk::ConvertManagedToNative<::vtkParametricConicSpiral>(m_instance)->SetB(arg0);
}



double vtkParametricConicSpiral::GetB()
{
  double retVal = vtk::ConvertManagedToNative<::vtkParametricConicSpiral>(m_instance)->GetB();
  return retVal;
}



void vtkParametricConicSpiral::SetC(double arg0)
{
  vtk::ConvertManagedToNative<::vtkParametricConicSpiral>(m_instance)->SetC(arg0);
}



double vtkParametricConicSpiral::GetC()
{
  double retVal = vtk::ConvertManagedToNative<::vtkParametricConicSpiral>(m_instance)->GetC();
  return retVal;
}



void vtkParametricConicSpiral::SetN(double arg0)
{
  vtk::ConvertManagedToNative<::vtkParametricConicSpiral>(m_instance)->SetN(arg0);
}



double vtkParametricConicSpiral::GetN()
{
  double retVal = vtk::ConvertManagedToNative<::vtkParametricConicSpiral>(m_instance)->GetN();
  return retVal;
}



void vtkParametricConicSpiral::Evaluate(array<double>^ uvw, array<double>^ Pt, array<double>^ Duvw)
{
  pin_ptr<double> uvwPin = &uvw[0];
  double* nativeuvwPin = uvwPin;
  pin_ptr<double> PtPin = &Pt[0];
  double* nativePtPin = PtPin;
  pin_ptr<double> DuvwPin = &Duvw[0];
  double* nativeDuvwPin = DuvwPin;
  vtk::ConvertManagedToNative<::vtkParametricConicSpiral>(m_instance)->Evaluate(nativeuvwPin, nativePtPin, nativeDuvwPin);
}



double vtkParametricConicSpiral::EvaluateScalar(array<double>^ uvw, array<double>^ Pt, array<double>^ Duvw)
{
  pin_ptr<double> uvwPin = &uvw[0];
  double* nativeuvwPin = uvwPin;
  pin_ptr<double> PtPin = &Pt[0];
  double* nativePtPin = PtPin;
  pin_ptr<double> DuvwPin = &Duvw[0];
  double* nativeDuvwPin = DuvwPin;
  double retVal = vtk::ConvertManagedToNative<::vtkParametricConicSpiral>(m_instance)->EvaluateScalar(nativeuvwPin, nativePtPin, nativeDuvwPin);
  return retVal;
}



  vtkParametricConicSpiral::vtkParametricConicSpiral(System::IntPtr native, bool bConst) : vtkParametricFunction(native, bConst) {}



  vtkParametricConicSpiral::vtkParametricConicSpiral(bool donothing) : vtkParametricFunction(donothing) {}



  vtkParametricConicSpiral::vtkParametricConicSpiral() : vtkParametricFunction(false) {
  this->SetNativePointer(IntPtr(::vtkParametricConicSpiral::New()));
}



  vtkParametricConicSpiral::~vtkParametricConicSpiral() { }





} // end namespace vtkCommon
