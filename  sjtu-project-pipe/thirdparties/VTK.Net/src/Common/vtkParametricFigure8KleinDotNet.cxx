

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkParametricFigure8KleinDotNet.h"
#include "vtkObjectDotNet.h"

// native includes
#include "strstream"
#include "vtkParametricFigure8Klein.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkParametricFigure8Klein::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkParametricFigure8Klein>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkParametricFigure8Klein::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkParametricFigure8Klein>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkParametricFigure8Klein^ vtkParametricFigure8Klein::NewInstance()
{
  ::vtkParametricFigure8Klein* retVal = static_cast<::vtkParametricFigure8Klein*>(vtk::ConvertManagedToNative<::vtkParametricFigure8Klein>(m_instance)->NewInstance());
  return gcnew vtkParametricFigure8Klein(IntPtr(retVal), false);
}



vtkParametricFigure8Klein^ vtkParametricFigure8Klein::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkParametricFigure8Klein* retVal = static_cast<::vtkParametricFigure8Klein*>(::vtkParametricFigure8Klein::SafeDownCast(oWrap));
  return gcnew vtkParametricFigure8Klein(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkParametricFigure8Klein::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkParametricFigure8Klein>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkParametricFigure8Klein::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkParametricFigure8Klein>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkParametricFigure8Klein::SetRadius(double arg0)
{
  vtk::ConvertManagedToNative<::vtkParametricFigure8Klein>(m_instance)->SetRadius(arg0);
}



double vtkParametricFigure8Klein::GetRadius()
{
  double retVal = vtk::ConvertManagedToNative<::vtkParametricFigure8Klein>(m_instance)->GetRadius();
  return retVal;
}



int vtkParametricFigure8Klein::GetDimension()
{
  int retVal = vtk::ConvertManagedToNative<::vtkParametricFigure8Klein>(m_instance)->GetDimension();
  return retVal;
}



void vtkParametricFigure8Klein::Evaluate(array<double>^ uvw, array<double>^ Pt, array<double>^ Duvw)
{
  pin_ptr<double> uvwPin = &uvw[0];
  double* nativeuvwPin = uvwPin;
  pin_ptr<double> PtPin = &Pt[0];
  double* nativePtPin = PtPin;
  pin_ptr<double> DuvwPin = &Duvw[0];
  double* nativeDuvwPin = DuvwPin;
  vtk::ConvertManagedToNative<::vtkParametricFigure8Klein>(m_instance)->Evaluate(nativeuvwPin, nativePtPin, nativeDuvwPin);
}



double vtkParametricFigure8Klein::EvaluateScalar(array<double>^ uvw, array<double>^ Pt, array<double>^ Duvw)
{
  pin_ptr<double> uvwPin = &uvw[0];
  double* nativeuvwPin = uvwPin;
  pin_ptr<double> PtPin = &Pt[0];
  double* nativePtPin = PtPin;
  pin_ptr<double> DuvwPin = &Duvw[0];
  double* nativeDuvwPin = DuvwPin;
  double retVal = vtk::ConvertManagedToNative<::vtkParametricFigure8Klein>(m_instance)->EvaluateScalar(nativeuvwPin, nativePtPin, nativeDuvwPin);
  return retVal;
}



  vtkParametricFigure8Klein::vtkParametricFigure8Klein(System::IntPtr native, bool bConst) : vtkParametricFunction(native, bConst) {}



  vtkParametricFigure8Klein::vtkParametricFigure8Klein(bool donothing) : vtkParametricFunction(donothing) {}



  vtkParametricFigure8Klein::vtkParametricFigure8Klein() : vtkParametricFunction(false) {
  this->SetNativePointer(IntPtr(::vtkParametricFigure8Klein::New()));
}



  vtkParametricFigure8Klein::~vtkParametricFigure8Klein() { }





} // end namespace vtkCommon
