

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkParametricRomanDotNet.h"
#include "vtkObjectDotNet.h"

// native includes
#include "strstream"
#include "vtkParametricRoman.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkParametricRoman::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkParametricRoman>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkParametricRoman::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkParametricRoman>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkParametricRoman^ vtkParametricRoman::NewInstance()
{
  ::vtkParametricRoman* retVal = static_cast<::vtkParametricRoman*>(vtk::ConvertManagedToNative<::vtkParametricRoman>(m_instance)->NewInstance());
  return gcnew vtkParametricRoman(IntPtr(retVal), false);
}



vtkParametricRoman^ vtkParametricRoman::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkParametricRoman* retVal = static_cast<::vtkParametricRoman*>(::vtkParametricRoman::SafeDownCast(oWrap));
  return gcnew vtkParametricRoman(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkParametricRoman::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkParametricRoman>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkParametricRoman::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkParametricRoman>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




int vtkParametricRoman::GetDimension()
{
  int retVal = vtk::ConvertManagedToNative<::vtkParametricRoman>(m_instance)->GetDimension();
  return retVal;
}



void vtkParametricRoman::SetRadius(double arg0)
{
  vtk::ConvertManagedToNative<::vtkParametricRoman>(m_instance)->SetRadius(arg0);
}



double vtkParametricRoman::GetRadius()
{
  double retVal = vtk::ConvertManagedToNative<::vtkParametricRoman>(m_instance)->GetRadius();
  return retVal;
}



void vtkParametricRoman::Evaluate(array<double>^ uvw, array<double>^ Pt, array<double>^ Duvw)
{
  pin_ptr<double> uvwPin = &uvw[0];
  double* nativeuvwPin = uvwPin;
  pin_ptr<double> PtPin = &Pt[0];
  double* nativePtPin = PtPin;
  pin_ptr<double> DuvwPin = &Duvw[0];
  double* nativeDuvwPin = DuvwPin;
  vtk::ConvertManagedToNative<::vtkParametricRoman>(m_instance)->Evaluate(nativeuvwPin, nativePtPin, nativeDuvwPin);
}



double vtkParametricRoman::EvaluateScalar(array<double>^ uvw, array<double>^ Pt, array<double>^ Duvw)
{
  pin_ptr<double> uvwPin = &uvw[0];
  double* nativeuvwPin = uvwPin;
  pin_ptr<double> PtPin = &Pt[0];
  double* nativePtPin = PtPin;
  pin_ptr<double> DuvwPin = &Duvw[0];
  double* nativeDuvwPin = DuvwPin;
  double retVal = vtk::ConvertManagedToNative<::vtkParametricRoman>(m_instance)->EvaluateScalar(nativeuvwPin, nativePtPin, nativeDuvwPin);
  return retVal;
}



  vtkParametricRoman::vtkParametricRoman(System::IntPtr native, bool bConst) : vtkParametricFunction(native, bConst) {}



  vtkParametricRoman::vtkParametricRoman(bool donothing) : vtkParametricFunction(donothing) {}



  vtkParametricRoman::vtkParametricRoman() : vtkParametricFunction(false) {
  this->SetNativePointer(IntPtr(::vtkParametricRoman::New()));
}



  vtkParametricRoman::~vtkParametricRoman() { }





} // end namespace vtkCommon
