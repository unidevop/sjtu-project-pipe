

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkImplicitDataSetDotNet.h"
#include "vtkDataSetDotNet.h"

// native includes
#include "strstream"
#include "vtkImplicitDataSet.h"
#include "vtkDataSet.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkImplicitDataSet::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkImplicitDataSet>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkImplicitDataSet::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkImplicitDataSet>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkImplicitDataSet^ vtkImplicitDataSet::NewInstance()
{
  ::vtkImplicitDataSet* retVal = static_cast<::vtkImplicitDataSet*>(vtk::ConvertManagedToNative<::vtkImplicitDataSet>(m_instance)->NewInstance());
  return gcnew vtkImplicitDataSet(IntPtr(retVal), false);
}



vtkImplicitDataSet^ vtkImplicitDataSet::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkImplicitDataSet* retVal = static_cast<::vtkImplicitDataSet*>(::vtkImplicitDataSet::SafeDownCast(oWrap));
  return gcnew vtkImplicitDataSet(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkImplicitDataSet::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkImplicitDataSet>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkImplicitDataSet::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkImplicitDataSet>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




unsigned long vtkImplicitDataSet::GetMTime()
{
  unsigned long retVal = vtk::ConvertManagedToNative<::vtkImplicitDataSet>(m_instance)->GetMTime();
  return retVal;
}



double vtkImplicitDataSet::EvaluateFunction(array<double>^ x)
{
  pin_ptr<double> xPin = &x[0];
  double* nativexPin = xPin;
  double retVal = vtk::ConvertManagedToNative<::vtkImplicitDataSet>(m_instance)->EvaluateFunction(nativexPin);
  return retVal;
}



double vtkImplicitDataSet::EvaluateFunction(double x, double y, double z)
{
  double retVal = vtk::ConvertManagedToNative<::vtkImplicitDataSet>(m_instance)->EvaluateFunction(x, y, z);
  return retVal;
}



void vtkImplicitDataSet::EvaluateGradient(array<double>^ x, array<double>^ n)
{
  pin_ptr<double> xPin = &x[0];
  double* nativexPin = xPin;
  pin_ptr<double> nPin = &n[0];
  double* nativenPin = nPin;
  vtk::ConvertManagedToNative<::vtkImplicitDataSet>(m_instance)->EvaluateGradient(nativexPin, nativenPin);
}



void vtkImplicitDataSet::SetDataSet(vtkDataSet^ arg0)
{
  ::vtkDataSet* arg0Wrap = vtk::ConvertManagedToNative<::vtkDataSet>(arg0->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkImplicitDataSet>(m_instance)->SetDataSet(arg0Wrap);
}



vtkDataSet^ vtkImplicitDataSet::GetDataSet()
{
  ::vtkDataSet* retVal = static_cast<::vtkDataSet*>(vtk::ConvertManagedToNative<::vtkImplicitDataSet>(m_instance)->GetDataSet());
  return gcnew vtkDataSet(IntPtr(retVal), false);
}



void vtkImplicitDataSet::SetOutValue(double arg0)
{
  vtk::ConvertManagedToNative<::vtkImplicitDataSet>(m_instance)->SetOutValue(arg0);
}



double vtkImplicitDataSet::GetOutValue()
{
  double retVal = vtk::ConvertManagedToNative<::vtkImplicitDataSet>(m_instance)->GetOutValue();
  return retVal;
}



void vtkImplicitDataSet::SetOutGradient(double arg0, double arg1, double arg2)
{
  vtk::ConvertManagedToNative<::vtkImplicitDataSet>(m_instance)->SetOutGradient(arg0, arg1, arg2);
}



void vtkImplicitDataSet::SetOutGradient(array<double>^ a)
{
  pin_ptr<double> aPin = &a[0];
  double* nativeaPin = aPin;
  vtk::ConvertManagedToNative<::vtkImplicitDataSet>(m_instance)->SetOutGradient(nativeaPin);
}



array<double>^ vtkImplicitDataSet::GetOutGradient()
{
  const double* retVal = vtk::ConvertManagedToNative<::vtkImplicitDataSet>(m_instance)->GetOutGradient();
  array<double>^ mRetVal = gcnew array<double>(3);
  for (size_t cprIdx=0; cprIdx<3; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



  vtkImplicitDataSet::vtkImplicitDataSet(System::IntPtr native, bool bConst) : vtkImplicitFunction(native, bConst) {}



  vtkImplicitDataSet::vtkImplicitDataSet(bool donothing) : vtkImplicitFunction(donothing) {}



  vtkImplicitDataSet::vtkImplicitDataSet() : vtkImplicitFunction(false) {
  this->SetNativePointer(IntPtr(::vtkImplicitDataSet::New()));
}



  vtkImplicitDataSet::~vtkImplicitDataSet() { }





} // end namespace vtkFiltering
