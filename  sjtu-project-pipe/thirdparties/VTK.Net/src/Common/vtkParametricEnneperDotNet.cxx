

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkParametricEnneperDotNet.h"
#include "vtkObjectDotNet.h"

// native includes
#include "strstream"
#include "vtkParametricEnneper.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkParametricEnneper::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkParametricEnneper>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkParametricEnneper::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkParametricEnneper>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkParametricEnneper^ vtkParametricEnneper::NewInstance()
{
  ::vtkParametricEnneper* retVal = static_cast<::vtkParametricEnneper*>(vtk::ConvertManagedToNative<::vtkParametricEnneper>(m_instance)->NewInstance());
  return gcnew vtkParametricEnneper(IntPtr(retVal), false);
}



vtkParametricEnneper^ vtkParametricEnneper::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkParametricEnneper* retVal = static_cast<::vtkParametricEnneper*>(::vtkParametricEnneper::SafeDownCast(oWrap));
  return gcnew vtkParametricEnneper(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkParametricEnneper::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkParametricEnneper>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkParametricEnneper::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkParametricEnneper>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




int vtkParametricEnneper::GetDimension()
{
  int retVal = vtk::ConvertManagedToNative<::vtkParametricEnneper>(m_instance)->GetDimension();
  return retVal;
}



void vtkParametricEnneper::Evaluate(array<double>^ uvw, array<double>^ Pt, array<double>^ Duvw)
{
  pin_ptr<double> uvwPin = &uvw[0];
  double* nativeuvwPin = uvwPin;
  pin_ptr<double> PtPin = &Pt[0];
  double* nativePtPin = PtPin;
  pin_ptr<double> DuvwPin = &Duvw[0];
  double* nativeDuvwPin = DuvwPin;
  vtk::ConvertManagedToNative<::vtkParametricEnneper>(m_instance)->Evaluate(nativeuvwPin, nativePtPin, nativeDuvwPin);
}



double vtkParametricEnneper::EvaluateScalar(array<double>^ uvw, array<double>^ Pt, array<double>^ Duvw)
{
  pin_ptr<double> uvwPin = &uvw[0];
  double* nativeuvwPin = uvwPin;
  pin_ptr<double> PtPin = &Pt[0];
  double* nativePtPin = PtPin;
  pin_ptr<double> DuvwPin = &Duvw[0];
  double* nativeDuvwPin = DuvwPin;
  double retVal = vtk::ConvertManagedToNative<::vtkParametricEnneper>(m_instance)->EvaluateScalar(nativeuvwPin, nativePtPin, nativeDuvwPin);
  return retVal;
}



  vtkParametricEnneper::vtkParametricEnneper(System::IntPtr native, bool bConst) : vtkParametricFunction(native, bConst) {}



  vtkParametricEnneper::vtkParametricEnneper(bool donothing) : vtkParametricFunction(donothing) {}



  vtkParametricEnneper::vtkParametricEnneper() : vtkParametricFunction(false) {
  this->SetNativePointer(IntPtr(::vtkParametricEnneper::New()));
}



  vtkParametricEnneper::~vtkParametricEnneper() { }





} // end namespace vtkCommon
