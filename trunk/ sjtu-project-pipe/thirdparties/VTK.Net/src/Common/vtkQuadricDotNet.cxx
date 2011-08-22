

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkQuadricDotNet.h"
#include "vtkObjectDotNet.h"

// native includes
#include "strstream"
#include "vtkQuadric.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkQuadric::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkQuadric>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkQuadric::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkQuadric>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkQuadric^ vtkQuadric::NewInstance()
{
  ::vtkQuadric* retVal = static_cast<::vtkQuadric*>(vtk::ConvertManagedToNative<::vtkQuadric>(m_instance)->NewInstance());
  return gcnew vtkQuadric(IntPtr(retVal), false);
}



vtkQuadric^ vtkQuadric::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkQuadric* retVal = static_cast<::vtkQuadric*>(::vtkQuadric::SafeDownCast(oWrap));
  return gcnew vtkQuadric(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkQuadric::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkQuadric>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkQuadric::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkQuadric>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




double vtkQuadric::EvaluateFunction(array<double>^ x)
{
  pin_ptr<double> xPin = &x[0];
  double* nativexPin = xPin;
  double retVal = vtk::ConvertManagedToNative<::vtkQuadric>(m_instance)->EvaluateFunction(nativexPin);
  return retVal;
}



double vtkQuadric::EvaluateFunction(double x, double y, double z)
{
  double retVal = vtk::ConvertManagedToNative<::vtkQuadric>(m_instance)->EvaluateFunction(x, y, z);
  return retVal;
}



void vtkQuadric::EvaluateGradient(array<double>^ x, array<double>^ g)
{
  pin_ptr<double> xPin = &x[0];
  double* nativexPin = xPin;
  pin_ptr<double> gPin = &g[0];
  double* nativegPin = gPin;
  vtk::ConvertManagedToNative<::vtkQuadric>(m_instance)->EvaluateGradient(nativexPin, nativegPin);
}



void vtkQuadric::SetCoefficients(array<double>^ a)
{
  pin_ptr<double> aPin = &a[0];
  double* nativeaPin = aPin;
  vtk::ConvertManagedToNative<::vtkQuadric>(m_instance)->SetCoefficients(nativeaPin);
}



void vtkQuadric::SetCoefficients(double a0, double a1, double a2, double a3, double a4, double a5, double a6, double a7, double a8, double a9)
{
  vtk::ConvertManagedToNative<::vtkQuadric>(m_instance)->SetCoefficients(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9);
}



array<double>^ vtkQuadric::GetCoefficients()
{
  const double* retVal = vtk::ConvertManagedToNative<::vtkQuadric>(m_instance)->GetCoefficients();
  array<double>^ mRetVal = gcnew array<double>(10);
  for (size_t cprIdx=0; cprIdx<10; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



  vtkQuadric::vtkQuadric(System::IntPtr native, bool bConst) : vtkImplicitFunction(native, bConst) {}



  vtkQuadric::vtkQuadric(bool donothing) : vtkImplicitFunction(donothing) {}



  vtkQuadric::vtkQuadric() : vtkImplicitFunction(false) {
  this->SetNativePointer(IntPtr(::vtkQuadric::New()));
}



  vtkQuadric::~vtkQuadric() { }





} // end namespace vtkCommon
