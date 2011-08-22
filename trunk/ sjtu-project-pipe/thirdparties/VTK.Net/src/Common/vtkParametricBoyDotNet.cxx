

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkParametricBoyDotNet.h"
#include "vtkObjectDotNet.h"

// native includes
#include "strstream"
#include "vtkParametricBoy.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkParametricBoy::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkParametricBoy>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkParametricBoy::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkParametricBoy>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkParametricBoy^ vtkParametricBoy::NewInstance()
{
  ::vtkParametricBoy* retVal = static_cast<::vtkParametricBoy*>(vtk::ConvertManagedToNative<::vtkParametricBoy>(m_instance)->NewInstance());
  return gcnew vtkParametricBoy(IntPtr(retVal), false);
}



vtkParametricBoy^ vtkParametricBoy::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkParametricBoy* retVal = static_cast<::vtkParametricBoy*>(::vtkParametricBoy::SafeDownCast(oWrap));
  return gcnew vtkParametricBoy(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkParametricBoy::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkParametricBoy>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkParametricBoy::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkParametricBoy>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




int vtkParametricBoy::GetDimension()
{
  int retVal = vtk::ConvertManagedToNative<::vtkParametricBoy>(m_instance)->GetDimension();
  return retVal;
}



void vtkParametricBoy::SetZScale(double arg0)
{
  vtk::ConvertManagedToNative<::vtkParametricBoy>(m_instance)->SetZScale(arg0);
}



double vtkParametricBoy::GetZScale()
{
  double retVal = vtk::ConvertManagedToNative<::vtkParametricBoy>(m_instance)->GetZScale();
  return retVal;
}



void vtkParametricBoy::Evaluate(array<double>^ uvw, array<double>^ Pt, array<double>^ Duvw)
{
  pin_ptr<double> uvwPin = &uvw[0];
  double* nativeuvwPin = uvwPin;
  pin_ptr<double> PtPin = &Pt[0];
  double* nativePtPin = PtPin;
  pin_ptr<double> DuvwPin = &Duvw[0];
  double* nativeDuvwPin = DuvwPin;
  vtk::ConvertManagedToNative<::vtkParametricBoy>(m_instance)->Evaluate(nativeuvwPin, nativePtPin, nativeDuvwPin);
}



double vtkParametricBoy::EvaluateScalar(array<double>^ uvw, array<double>^ Pt, array<double>^ Duvw)
{
  pin_ptr<double> uvwPin = &uvw[0];
  double* nativeuvwPin = uvwPin;
  pin_ptr<double> PtPin = &Pt[0];
  double* nativePtPin = PtPin;
  pin_ptr<double> DuvwPin = &Duvw[0];
  double* nativeDuvwPin = DuvwPin;
  double retVal = vtk::ConvertManagedToNative<::vtkParametricBoy>(m_instance)->EvaluateScalar(nativeuvwPin, nativePtPin, nativeDuvwPin);
  return retVal;
}



  vtkParametricBoy::vtkParametricBoy(System::IntPtr native, bool bConst) : vtkParametricFunction(native, bConst) {}



  vtkParametricBoy::vtkParametricBoy(bool donothing) : vtkParametricFunction(donothing) {}



  vtkParametricBoy::vtkParametricBoy() : vtkParametricFunction(false) {
  this->SetNativePointer(IntPtr(::vtkParametricBoy::New()));
}



  vtkParametricBoy::~vtkParametricBoy() { }





} // end namespace vtkCommon
