

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkParametricKleinDotNet.h"
#include "vtkObjectDotNet.h"

// native includes
#include "strstream"
#include "vtkParametricKlein.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkParametricKlein::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkParametricKlein>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkParametricKlein::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkParametricKlein>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkParametricKlein^ vtkParametricKlein::NewInstance()
{
  ::vtkParametricKlein* retVal = static_cast<::vtkParametricKlein*>(vtk::ConvertManagedToNative<::vtkParametricKlein>(m_instance)->NewInstance());
  return gcnew vtkParametricKlein(IntPtr(retVal), false);
}



vtkParametricKlein^ vtkParametricKlein::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkParametricKlein* retVal = static_cast<::vtkParametricKlein*>(::vtkParametricKlein::SafeDownCast(oWrap));
  return gcnew vtkParametricKlein(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkParametricKlein::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkParametricKlein>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkParametricKlein::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkParametricKlein>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




int vtkParametricKlein::GetDimension()
{
  int retVal = vtk::ConvertManagedToNative<::vtkParametricKlein>(m_instance)->GetDimension();
  return retVal;
}



void vtkParametricKlein::Evaluate(array<double>^ uvw, array<double>^ Pt, array<double>^ Duvw)
{
  pin_ptr<double> uvwPin = &uvw[0];
  double* nativeuvwPin = uvwPin;
  pin_ptr<double> PtPin = &Pt[0];
  double* nativePtPin = PtPin;
  pin_ptr<double> DuvwPin = &Duvw[0];
  double* nativeDuvwPin = DuvwPin;
  vtk::ConvertManagedToNative<::vtkParametricKlein>(m_instance)->Evaluate(nativeuvwPin, nativePtPin, nativeDuvwPin);
}



double vtkParametricKlein::EvaluateScalar(array<double>^ uvw, array<double>^ Pt, array<double>^ Duvw)
{
  pin_ptr<double> uvwPin = &uvw[0];
  double* nativeuvwPin = uvwPin;
  pin_ptr<double> PtPin = &Pt[0];
  double* nativePtPin = PtPin;
  pin_ptr<double> DuvwPin = &Duvw[0];
  double* nativeDuvwPin = DuvwPin;
  double retVal = vtk::ConvertManagedToNative<::vtkParametricKlein>(m_instance)->EvaluateScalar(nativeuvwPin, nativePtPin, nativeDuvwPin);
  return retVal;
}



  vtkParametricKlein::vtkParametricKlein(System::IntPtr native, bool bConst) : vtkParametricFunction(native, bConst) {}



  vtkParametricKlein::vtkParametricKlein(bool donothing) : vtkParametricFunction(donothing) {}



  vtkParametricKlein::vtkParametricKlein() : vtkParametricFunction(false) {
  this->SetNativePointer(IntPtr(::vtkParametricKlein::New()));
}



  vtkParametricKlein::~vtkParametricKlein() { }





} // end namespace vtkCommon
