

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkImplicitWindowFunctionDotNet.h"

// native includes
#include "strstream"
#include "vtkImplicitWindowFunction.h"
#include "vtkObject.h"
#include "vtkObjectBase.h"

using namespace System;

namespace vtk {

System::String^ vtkImplicitWindowFunction::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkImplicitWindowFunction>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkImplicitWindowFunction::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkImplicitWindowFunction>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkImplicitWindowFunction^ vtkImplicitWindowFunction::NewInstance()
{
  ::vtkImplicitWindowFunction* retVal = static_cast<::vtkImplicitWindowFunction*>(vtk::ConvertManagedToNative<::vtkImplicitWindowFunction>(m_instance)->NewInstance());
  return gcnew vtkImplicitWindowFunction(IntPtr(retVal), false);
}



vtkImplicitWindowFunction^ vtkImplicitWindowFunction::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkImplicitWindowFunction* retVal = static_cast<::vtkImplicitWindowFunction*>(::vtkImplicitWindowFunction::SafeDownCast(oWrap));
  return gcnew vtkImplicitWindowFunction(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkImplicitWindowFunction::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkImplicitWindowFunction>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkImplicitWindowFunction::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkImplicitWindowFunction>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




double vtkImplicitWindowFunction::EvaluateFunction(array<double>^ x)
{
  pin_ptr<double> xPin = &x[0];
  double* nativexPin = xPin;
  double retVal = vtk::ConvertManagedToNative<::vtkImplicitWindowFunction>(m_instance)->EvaluateFunction(nativexPin);
  return retVal;
}



double vtkImplicitWindowFunction::EvaluateFunction(double x, double y, double z)
{
  double retVal = vtk::ConvertManagedToNative<::vtkImplicitWindowFunction>(m_instance)->EvaluateFunction(x, y, z);
  return retVal;
}



void vtkImplicitWindowFunction::EvaluateGradient(array<double>^ x, array<double>^ n)
{
  pin_ptr<double> xPin = &x[0];
  double* nativexPin = xPin;
  pin_ptr<double> nPin = &n[0];
  double* nativenPin = nPin;
  vtk::ConvertManagedToNative<::vtkImplicitWindowFunction>(m_instance)->EvaluateGradient(nativexPin, nativenPin);
}



void vtkImplicitWindowFunction::SetImplicitFunction(vtkImplicitFunction^ arg0)
{
  ::vtkImplicitFunction* arg0Wrap = vtk::ConvertManagedToNative<::vtkImplicitFunction>(arg0->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkImplicitWindowFunction>(m_instance)->SetImplicitFunction(arg0Wrap);
}



vtkImplicitFunction^ vtkImplicitWindowFunction::GetImplicitFunction()
{
  ::vtkImplicitFunction* retVal = static_cast<::vtkImplicitFunction*>(vtk::ConvertManagedToNative<::vtkImplicitWindowFunction>(m_instance)->GetImplicitFunction());
  return gcnew vtkImplicitFunction(IntPtr(retVal), false);
}



void vtkImplicitWindowFunction::SetWindowRange(double arg0, double arg1)
{
  vtk::ConvertManagedToNative<::vtkImplicitWindowFunction>(m_instance)->SetWindowRange(arg0, arg1);
}



void vtkImplicitWindowFunction::SetWindowRange(array<double>^ a)
{
  pin_ptr<double> aPin = &a[0];
  double* nativeaPin = aPin;
  vtk::ConvertManagedToNative<::vtkImplicitWindowFunction>(m_instance)->SetWindowRange(nativeaPin);
}



array<double>^ vtkImplicitWindowFunction::GetWindowRange()
{
  const double* retVal = vtk::ConvertManagedToNative<::vtkImplicitWindowFunction>(m_instance)->GetWindowRange();
  array<double>^ mRetVal = gcnew array<double>(2);
  for (size_t cprIdx=0; cprIdx<2; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



void vtkImplicitWindowFunction::SetWindowValues(double arg0, double arg1)
{
  vtk::ConvertManagedToNative<::vtkImplicitWindowFunction>(m_instance)->SetWindowValues(arg0, arg1);
}



void vtkImplicitWindowFunction::SetWindowValues(array<double>^ a)
{
  pin_ptr<double> aPin = &a[0];
  double* nativeaPin = aPin;
  vtk::ConvertManagedToNative<::vtkImplicitWindowFunction>(m_instance)->SetWindowValues(nativeaPin);
}



array<double>^ vtkImplicitWindowFunction::GetWindowValues()
{
  const double* retVal = vtk::ConvertManagedToNative<::vtkImplicitWindowFunction>(m_instance)->GetWindowValues();
  array<double>^ mRetVal = gcnew array<double>(2);
  for (size_t cprIdx=0; cprIdx<2; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



unsigned long vtkImplicitWindowFunction::GetMTime()
{
  unsigned long retVal = vtk::ConvertManagedToNative<::vtkImplicitWindowFunction>(m_instance)->GetMTime();
  return retVal;
}



void vtkImplicitWindowFunction::Register(vtkObjectBase^ o)
{
  ::vtkObjectBase* oWrap = static_cast<::vtkObjectBase*>(o->GetNativePointer().ToPointer());
  vtk::ConvertManagedToNative<::vtkImplicitWindowFunction>(m_instance)->Register(oWrap);
}



void vtkImplicitWindowFunction::UnRegister(vtkObjectBase^ o)
{
  ::vtkObjectBase* oWrap = static_cast<::vtkObjectBase*>(o->GetNativePointer().ToPointer());
  vtk::ConvertManagedToNative<::vtkImplicitWindowFunction>(m_instance)->UnRegister(oWrap);
}



  vtkImplicitWindowFunction::vtkImplicitWindowFunction(System::IntPtr native, bool bConst) : vtkImplicitFunction(native, bConst) {}



  vtkImplicitWindowFunction::vtkImplicitWindowFunction(bool donothing) : vtkImplicitFunction(donothing) {}



  vtkImplicitWindowFunction::vtkImplicitWindowFunction() : vtkImplicitFunction(false) {
  this->SetNativePointer(IntPtr(::vtkImplicitWindowFunction::New()));
}



  vtkImplicitWindowFunction::~vtkImplicitWindowFunction() { }





} // end namespace vtkFiltering
