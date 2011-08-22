

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkParametricDiniDotNet.h"
#include "vtkObjectDotNet.h"

// native includes
#include "strstream"
#include "vtkParametricDini.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkParametricDini::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkParametricDini>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkParametricDini::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkParametricDini>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkParametricDini^ vtkParametricDini::NewInstance()
{
  ::vtkParametricDini* retVal = static_cast<::vtkParametricDini*>(vtk::ConvertManagedToNative<::vtkParametricDini>(m_instance)->NewInstance());
  return gcnew vtkParametricDini(IntPtr(retVal), false);
}



vtkParametricDini^ vtkParametricDini::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkParametricDini* retVal = static_cast<::vtkParametricDini*>(::vtkParametricDini::SafeDownCast(oWrap));
  return gcnew vtkParametricDini(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkParametricDini::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkParametricDini>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkParametricDini::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkParametricDini>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




int vtkParametricDini::GetDimension()
{
  int retVal = vtk::ConvertManagedToNative<::vtkParametricDini>(m_instance)->GetDimension();
  return retVal;
}



void vtkParametricDini::SetA(double arg0)
{
  vtk::ConvertManagedToNative<::vtkParametricDini>(m_instance)->SetA(arg0);
}



double vtkParametricDini::GetA()
{
  double retVal = vtk::ConvertManagedToNative<::vtkParametricDini>(m_instance)->GetA();
  return retVal;
}



void vtkParametricDini::SetB(double arg0)
{
  vtk::ConvertManagedToNative<::vtkParametricDini>(m_instance)->SetB(arg0);
}



double vtkParametricDini::GetB()
{
  double retVal = vtk::ConvertManagedToNative<::vtkParametricDini>(m_instance)->GetB();
  return retVal;
}



void vtkParametricDini::Evaluate(array<double>^ uvw, array<double>^ Pt, array<double>^ Duvw)
{
  pin_ptr<double> uvwPin = &uvw[0];
  double* nativeuvwPin = uvwPin;
  pin_ptr<double> PtPin = &Pt[0];
  double* nativePtPin = PtPin;
  pin_ptr<double> DuvwPin = &Duvw[0];
  double* nativeDuvwPin = DuvwPin;
  vtk::ConvertManagedToNative<::vtkParametricDini>(m_instance)->Evaluate(nativeuvwPin, nativePtPin, nativeDuvwPin);
}



double vtkParametricDini::EvaluateScalar(array<double>^ uvw, array<double>^ Pt, array<double>^ Duvw)
{
  pin_ptr<double> uvwPin = &uvw[0];
  double* nativeuvwPin = uvwPin;
  pin_ptr<double> PtPin = &Pt[0];
  double* nativePtPin = PtPin;
  pin_ptr<double> DuvwPin = &Duvw[0];
  double* nativeDuvwPin = DuvwPin;
  double retVal = vtk::ConvertManagedToNative<::vtkParametricDini>(m_instance)->EvaluateScalar(nativeuvwPin, nativePtPin, nativeDuvwPin);
  return retVal;
}



  vtkParametricDini::vtkParametricDini(System::IntPtr native, bool bConst) : vtkParametricFunction(native, bConst) {}



  vtkParametricDini::vtkParametricDini(bool donothing) : vtkParametricFunction(donothing) {}



  vtkParametricDini::vtkParametricDini() : vtkParametricFunction(false) {
  this->SetNativePointer(IntPtr(::vtkParametricDini::New()));
}



  vtkParametricDini::~vtkParametricDini() { }





} // end namespace vtkCommon
