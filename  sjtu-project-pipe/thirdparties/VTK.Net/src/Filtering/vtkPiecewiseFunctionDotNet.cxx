

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkPiecewiseFunctionDotNet.h"

// native includes
#include "strstream"
#include "vtkPiecewiseFunction.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkPiecewiseFunction::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkPiecewiseFunction>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkPiecewiseFunction::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkPiecewiseFunction>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkPiecewiseFunction^ vtkPiecewiseFunction::NewInstance()
{
  ::vtkPiecewiseFunction* retVal = static_cast<::vtkPiecewiseFunction*>(vtk::ConvertManagedToNative<::vtkPiecewiseFunction>(m_instance)->NewInstance());
  return gcnew vtkPiecewiseFunction(IntPtr(retVal), false);
}



vtkPiecewiseFunction^ vtkPiecewiseFunction::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkPiecewiseFunction* retVal = static_cast<::vtkPiecewiseFunction*>(::vtkPiecewiseFunction::SafeDownCast(oWrap));
  return gcnew vtkPiecewiseFunction(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkPiecewiseFunction::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkPiecewiseFunction>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkPiecewiseFunction::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkPiecewiseFunction>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkPiecewiseFunction::Initialize()
{
  vtk::ConvertManagedToNative<::vtkPiecewiseFunction>(m_instance)->Initialize();
}



void vtkPiecewiseFunction::DeepCopy(vtkDataObject^ f)
{
  ::vtkDataObject* fWrap = vtk::ConvertManagedToNative<::vtkDataObject>(f->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkPiecewiseFunction>(m_instance)->DeepCopy(fWrap);
}



void vtkPiecewiseFunction::ShallowCopy(vtkDataObject^ f)
{
  ::vtkDataObject* fWrap = vtk::ConvertManagedToNative<::vtkDataObject>(f->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkPiecewiseFunction>(m_instance)->ShallowCopy(fWrap);
}



int vtkPiecewiseFunction::GetDataObjectType()
{
  int retVal = vtk::ConvertManagedToNative<::vtkPiecewiseFunction>(m_instance)->GetDataObjectType();
  return retVal;
}



int vtkPiecewiseFunction::GetSize()
{
  int retVal = vtk::ConvertManagedToNative<::vtkPiecewiseFunction>(m_instance)->GetSize();
  return retVal;
}



int vtkPiecewiseFunction::AddPoint(double x, double val)
{
  int retVal = vtk::ConvertManagedToNative<::vtkPiecewiseFunction>(m_instance)->AddPoint(x, val);
  return retVal;
}



int vtkPiecewiseFunction::RemovePoint(double x)
{
  int retVal = vtk::ConvertManagedToNative<::vtkPiecewiseFunction>(m_instance)->RemovePoint(x);
  return retVal;
}



void vtkPiecewiseFunction::RemoveAllPoints()
{
  vtk::ConvertManagedToNative<::vtkPiecewiseFunction>(m_instance)->RemoveAllPoints();
}



void vtkPiecewiseFunction::AddSegment(double x1, double val1, double x2, double val2)
{
  vtk::ConvertManagedToNative<::vtkPiecewiseFunction>(m_instance)->AddSegment(x1, val1, x2, val2);
}



double vtkPiecewiseFunction::GetValue(double x)
{
  double retVal = vtk::ConvertManagedToNative<::vtkPiecewiseFunction>(m_instance)->GetValue(x);
  return retVal;
}



void vtkPiecewiseFunction::FillFromDataPointer(int arg0, array<double>^ arg1)
{
  pin_ptr<double> arg1Pin = &arg1[0];
  double* nativearg1Pin = arg1Pin;
  vtk::ConvertManagedToNative<::vtkPiecewiseFunction>(m_instance)->FillFromDataPointer(arg0, nativearg1Pin);
}



array<double>^ vtkPiecewiseFunction::GetRange()
{
  const double* retVal = vtk::ConvertManagedToNative<::vtkPiecewiseFunction>(m_instance)->GetRange();
  array<double>^ mRetVal = gcnew array<double>(2);
  for (size_t cprIdx=0; cprIdx<2; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



int vtkPiecewiseFunction::AdjustRange(array<double>^ range)
{
  pin_ptr<double> rangePin = &range[0];
  double* nativerangePin = rangePin;
  int retVal = vtk::ConvertManagedToNative<::vtkPiecewiseFunction>(m_instance)->AdjustRange(nativerangePin);
  return retVal;
}



void vtkPiecewiseFunction::GetTable(double x1, double x2, int size, array<float>^ table, int stride)
{
  pin_ptr<float> tablePin = &table[0];
  float* nativetablePin = tablePin;
  vtk::ConvertManagedToNative<::vtkPiecewiseFunction>(m_instance)->GetTable(x1, x2, size, nativetablePin, stride);
}



void vtkPiecewiseFunction::GetTable(double x1, double x2, int size, array<double>^ table, int stride)
{
  pin_ptr<double> tablePin = &table[0];
  double* nativetablePin = tablePin;
  vtk::ConvertManagedToNative<::vtkPiecewiseFunction>(m_instance)->GetTable(x1, x2, size, nativetablePin, stride);
}



void vtkPiecewiseFunction::BuildFunctionFromTable(double x1, double x2, int size, array<double>^ table, int stride)
{
  pin_ptr<double> tablePin = &table[0];
  double* nativetablePin = tablePin;
  vtk::ConvertManagedToNative<::vtkPiecewiseFunction>(m_instance)->BuildFunctionFromTable(x1, x2, size, nativetablePin, stride);
}



void vtkPiecewiseFunction::SetClamping(int arg0)
{
  vtk::ConvertManagedToNative<::vtkPiecewiseFunction>(m_instance)->SetClamping(arg0);
}



int vtkPiecewiseFunction::GetClamping()
{
  int retVal = vtk::ConvertManagedToNative<::vtkPiecewiseFunction>(m_instance)->GetClamping();
  return retVal;
}



void vtkPiecewiseFunction::ClampingOn()
{
  vtk::ConvertManagedToNative<::vtkPiecewiseFunction>(m_instance)->ClampingOn();
}



void vtkPiecewiseFunction::ClampingOff()
{
  vtk::ConvertManagedToNative<::vtkPiecewiseFunction>(m_instance)->ClampingOff();
}



System::String^ vtkPiecewiseFunction::GetType()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkPiecewiseFunction>(m_instance)->GetType();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



double vtkPiecewiseFunction::GetFirstNonZeroValue()
{
  double retVal = vtk::ConvertManagedToNative<::vtkPiecewiseFunction>(m_instance)->GetFirstNonZeroValue();
  return retVal;
}



  vtkPiecewiseFunction::vtkPiecewiseFunction(System::IntPtr native, bool bConst) : vtkDataObject(native, bConst) {}



  vtkPiecewiseFunction::vtkPiecewiseFunction(bool donothing) : vtkDataObject(donothing) {}



  vtkPiecewiseFunction::vtkPiecewiseFunction() : vtkDataObject(false) {
  this->SetNativePointer(IntPtr(::vtkPiecewiseFunction::New()));
}



  vtkPiecewiseFunction::~vtkPiecewiseFunction() { }





} // end namespace vtkFiltering
