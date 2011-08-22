

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkImplicitFunctionDotNet.h"
#include "vtkAbstractTransformDotNet.h"

// native includes
#include "strstream"
#include "vtkImplicitFunction.h"
#include "vtkAbstractTransform.h"

using namespace System;

namespace vtk {

System::String^ vtkImplicitFunction::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkImplicitFunction>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkImplicitFunction::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkImplicitFunction>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkImplicitFunction^ vtkImplicitFunction::NewInstance()
{
  ::vtkImplicitFunction* retVal = static_cast<::vtkImplicitFunction*>(vtk::ConvertManagedToNative<::vtkImplicitFunction>(m_instance)->NewInstance());
  return gcnew vtkImplicitFunction(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkImplicitFunction::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkImplicitFunction>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkImplicitFunction::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkImplicitFunction>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




unsigned long vtkImplicitFunction::GetMTime()
{
  unsigned long retVal = vtk::ConvertManagedToNative<::vtkImplicitFunction>(m_instance)->GetMTime();
  return retVal;
}



double vtkImplicitFunction::FunctionValue(array<double>^ x)
{
  pin_ptr<double> xPin = &x[0];
  double* nativexPin = xPin;
  double retVal = vtk::ConvertManagedToNative<::vtkImplicitFunction>(m_instance)->FunctionValue(nativexPin);
  return retVal;
}



double vtkImplicitFunction::FunctionValue(double x, double y, double z)
{
  double retVal = vtk::ConvertManagedToNative<::vtkImplicitFunction>(m_instance)->FunctionValue(x, y, z);
  return retVal;
}



void vtkImplicitFunction::FunctionGradient(array<double>^ x, array<double>^ g)
{
  pin_ptr<double> xPin = &x[0];
  double* nativexPin = xPin;
  pin_ptr<double> gPin = &g[0];
  double* nativegPin = gPin;
  vtk::ConvertManagedToNative<::vtkImplicitFunction>(m_instance)->FunctionGradient(nativexPin, nativegPin);
}



array<double>^ vtkImplicitFunction::FunctionGradient(array<double>^ x)
{
  pin_ptr<double> xPin = &x[0];
  double* nativexPin = xPin;
  const double* retVal = vtk::ConvertManagedToNative<::vtkImplicitFunction>(m_instance)->FunctionGradient(nativexPin);
  array<double>^ mRetVal = gcnew array<double>(3);
  for (size_t cprIdx=0; cprIdx<3; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



array<double>^ vtkImplicitFunction::FunctionGradient(double x, double y, double z)
{
  const double* retVal = vtk::ConvertManagedToNative<::vtkImplicitFunction>(m_instance)->FunctionGradient(x, y, z);
  array<double>^ mRetVal = gcnew array<double>(3);
  for (size_t cprIdx=0; cprIdx<3; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



void vtkImplicitFunction::SetTransform(vtkAbstractTransform^ arg0)
{
  ::vtkAbstractTransform* arg0Wrap = vtk::ConvertManagedToNative<::vtkAbstractTransform>(arg0->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkImplicitFunction>(m_instance)->SetTransform(arg0Wrap);
}



void vtkImplicitFunction::SetTransform(array<double>^ elements)
{
  pin_ptr<double> elementsPin = &elements[0];
  double* nativeelementsPin = elementsPin;
  vtk::ConvertManagedToNative<::vtkImplicitFunction>(m_instance)->SetTransform(nativeelementsPin);
}



vtkAbstractTransform^ vtkImplicitFunction::GetTransform()
{
  ::vtkAbstractTransform* retVal = static_cast<::vtkAbstractTransform*>(vtk::ConvertManagedToNative<::vtkImplicitFunction>(m_instance)->GetTransform());
  return gcnew vtkAbstractTransform(IntPtr(retVal), false);
}



double vtkImplicitFunction::EvaluateFunction(array<double>^ x)
{
  pin_ptr<double> xPin = &x[0];
  double* nativexPin = xPin;
  double retVal = vtk::ConvertManagedToNative<::vtkImplicitFunction>(m_instance)->EvaluateFunction(nativexPin);
  return retVal;
}



double vtkImplicitFunction::EvaluateFunction(double x, double y, double z)
{
  double retVal = vtk::ConvertManagedToNative<::vtkImplicitFunction>(m_instance)->EvaluateFunction(x, y, z);
  return retVal;
}



void vtkImplicitFunction::EvaluateGradient(array<double>^ x, array<double>^ g)
{
  pin_ptr<double> xPin = &x[0];
  double* nativexPin = xPin;
  pin_ptr<double> gPin = &g[0];
  double* nativegPin = gPin;
  vtk::ConvertManagedToNative<::vtkImplicitFunction>(m_instance)->EvaluateGradient(nativexPin, nativegPin);
}



  vtkImplicitFunction::vtkImplicitFunction(System::IntPtr native, bool bConst) : vtkObject(native, bConst) {}



  vtkImplicitFunction::vtkImplicitFunction(bool donothing) : vtkObject(donothing) {}



  vtkImplicitFunction::vtkImplicitFunction() : vtkObject(false) {
  this->SetNativePointer(IntPtr(::vtkImplicitFunction::New()));
}



  vtkImplicitFunction::~vtkImplicitFunction() { }





} // end namespace vtkCommon
