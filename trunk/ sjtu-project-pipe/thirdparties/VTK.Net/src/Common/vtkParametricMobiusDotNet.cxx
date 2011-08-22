

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkParametricMobiusDotNet.h"
#include "vtkObjectDotNet.h"

// native includes
#include "strstream"
#include "vtkParametricMobius.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkParametricMobius::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkParametricMobius>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkParametricMobius::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkParametricMobius>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkParametricMobius^ vtkParametricMobius::NewInstance()
{
  ::vtkParametricMobius* retVal = static_cast<::vtkParametricMobius*>(vtk::ConvertManagedToNative<::vtkParametricMobius>(m_instance)->NewInstance());
  return gcnew vtkParametricMobius(IntPtr(retVal), false);
}



vtkParametricMobius^ vtkParametricMobius::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkParametricMobius* retVal = static_cast<::vtkParametricMobius*>(::vtkParametricMobius::SafeDownCast(oWrap));
  return gcnew vtkParametricMobius(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkParametricMobius::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkParametricMobius>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkParametricMobius::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkParametricMobius>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkParametricMobius::SetRadius(double arg0)
{
  vtk::ConvertManagedToNative<::vtkParametricMobius>(m_instance)->SetRadius(arg0);
}



double vtkParametricMobius::GetRadius()
{
  double retVal = vtk::ConvertManagedToNative<::vtkParametricMobius>(m_instance)->GetRadius();
  return retVal;
}



int vtkParametricMobius::GetDimension()
{
  int retVal = vtk::ConvertManagedToNative<::vtkParametricMobius>(m_instance)->GetDimension();
  return retVal;
}



void vtkParametricMobius::Evaluate(array<double>^ uvw, array<double>^ Pt, array<double>^ Duvw)
{
  pin_ptr<double> uvwPin = &uvw[0];
  double* nativeuvwPin = uvwPin;
  pin_ptr<double> PtPin = &Pt[0];
  double* nativePtPin = PtPin;
  pin_ptr<double> DuvwPin = &Duvw[0];
  double* nativeDuvwPin = DuvwPin;
  vtk::ConvertManagedToNative<::vtkParametricMobius>(m_instance)->Evaluate(nativeuvwPin, nativePtPin, nativeDuvwPin);
}



double vtkParametricMobius::EvaluateScalar(array<double>^ uvw, array<double>^ Pt, array<double>^ Duvw)
{
  pin_ptr<double> uvwPin = &uvw[0];
  double* nativeuvwPin = uvwPin;
  pin_ptr<double> PtPin = &Pt[0];
  double* nativePtPin = PtPin;
  pin_ptr<double> DuvwPin = &Duvw[0];
  double* nativeDuvwPin = DuvwPin;
  double retVal = vtk::ConvertManagedToNative<::vtkParametricMobius>(m_instance)->EvaluateScalar(nativeuvwPin, nativePtPin, nativeDuvwPin);
  return retVal;
}



  vtkParametricMobius::vtkParametricMobius(System::IntPtr native, bool bConst) : vtkParametricFunction(native, bConst) {}



  vtkParametricMobius::vtkParametricMobius(bool donothing) : vtkParametricFunction(donothing) {}



  vtkParametricMobius::vtkParametricMobius() : vtkParametricFunction(false) {
  this->SetNativePointer(IntPtr(::vtkParametricMobius::New()));
}



  vtkParametricMobius::~vtkParametricMobius() { }





} // end namespace vtkCommon
