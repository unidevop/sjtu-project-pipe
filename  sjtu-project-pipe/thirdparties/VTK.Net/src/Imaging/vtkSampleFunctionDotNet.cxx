

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkSampleFunctionDotNet.h"

// native includes
#include "strstream"
#include "vtkSampleFunction.h"
#include "vtkDataArray.h"
#include "vtkImplicitFunction.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkSampleFunction::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkSampleFunction>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkSampleFunction::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkSampleFunction>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkSampleFunction^ vtkSampleFunction::NewInstance()
{
  ::vtkSampleFunction* retVal = static_cast<::vtkSampleFunction*>(vtk::ConvertManagedToNative<::vtkSampleFunction>(m_instance)->NewInstance());
  return gcnew vtkSampleFunction(IntPtr(retVal), false);
}



vtkSampleFunction^ vtkSampleFunction::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkSampleFunction* retVal = static_cast<::vtkSampleFunction*>(::vtkSampleFunction::SafeDownCast(oWrap));
  return gcnew vtkSampleFunction(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkSampleFunction::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkSampleFunction>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkSampleFunction::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkSampleFunction>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkSampleFunction::SetImplicitFunction(vtkImplicitFunction^ arg0)
{
  ::vtkImplicitFunction* arg0Wrap = vtk::ConvertManagedToNative<::vtkImplicitFunction>(arg0->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkSampleFunction>(m_instance)->SetImplicitFunction(arg0Wrap);
}



vtkImplicitFunction^ vtkSampleFunction::GetImplicitFunction()
{
  ::vtkImplicitFunction* retVal = static_cast<::vtkImplicitFunction*>(vtk::ConvertManagedToNative<::vtkSampleFunction>(m_instance)->GetImplicitFunction());
  return gcnew vtkImplicitFunction(IntPtr(retVal), false);
}



void vtkSampleFunction::SetOutputScalarType(int arg0)
{
  vtk::ConvertManagedToNative<::vtkSampleFunction>(m_instance)->SetOutputScalarType(arg0);
}



int vtkSampleFunction::GetOutputScalarType()
{
  int retVal = vtk::ConvertManagedToNative<::vtkSampleFunction>(m_instance)->GetOutputScalarType();
  return retVal;
}



void vtkSampleFunction::SetOutputScalarTypeToDouble()
{
  vtk::ConvertManagedToNative<::vtkSampleFunction>(m_instance)->SetOutputScalarTypeToDouble();
}



void vtkSampleFunction::SetOutputScalarTypeToFloat()
{
  vtk::ConvertManagedToNative<::vtkSampleFunction>(m_instance)->SetOutputScalarTypeToFloat();
}



void vtkSampleFunction::SetOutputScalarTypeToLong()
{
  vtk::ConvertManagedToNative<::vtkSampleFunction>(m_instance)->SetOutputScalarTypeToLong();
}



void vtkSampleFunction::SetOutputScalarTypeToUnsignedLong()
{
  vtk::ConvertManagedToNative<::vtkSampleFunction>(m_instance)->SetOutputScalarTypeToUnsignedLong();
}



void vtkSampleFunction::SetOutputScalarTypeToInt()
{
  vtk::ConvertManagedToNative<::vtkSampleFunction>(m_instance)->SetOutputScalarTypeToInt();
}



void vtkSampleFunction::SetOutputScalarTypeToUnsignedInt()
{
  vtk::ConvertManagedToNative<::vtkSampleFunction>(m_instance)->SetOutputScalarTypeToUnsignedInt();
}



void vtkSampleFunction::SetOutputScalarTypeToShort()
{
  vtk::ConvertManagedToNative<::vtkSampleFunction>(m_instance)->SetOutputScalarTypeToShort();
}



void vtkSampleFunction::SetOutputScalarTypeToUnsignedShort()
{
  vtk::ConvertManagedToNative<::vtkSampleFunction>(m_instance)->SetOutputScalarTypeToUnsignedShort();
}



void vtkSampleFunction::SetOutputScalarTypeToChar()
{
  vtk::ConvertManagedToNative<::vtkSampleFunction>(m_instance)->SetOutputScalarTypeToChar();
}



void vtkSampleFunction::SetOutputScalarTypeToUnsignedChar()
{
  vtk::ConvertManagedToNative<::vtkSampleFunction>(m_instance)->SetOutputScalarTypeToUnsignedChar();
}



void vtkSampleFunction::SetScalars(vtkDataArray^ da)
{
  ::vtkDataArray* daWrap = vtk::ConvertManagedToNative<::vtkDataArray>(da->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkSampleFunction>(m_instance)->SetScalars(daWrap);
}



void vtkSampleFunction::SetSampleDimensions(int i, int j, int k)
{
  vtk::ConvertManagedToNative<::vtkSampleFunction>(m_instance)->SetSampleDimensions(i, j, k);
}



void vtkSampleFunction::SetSampleDimensions(array<int>^ dim)
{
  pin_ptr<int> dimPin = &dim[0];
  int* nativedimPin = dimPin;
  vtk::ConvertManagedToNative<::vtkSampleFunction>(m_instance)->SetSampleDimensions(nativedimPin);
}



array<int>^ vtkSampleFunction::GetSampleDimensions()
{
  const int* retVal = vtk::ConvertManagedToNative<::vtkSampleFunction>(m_instance)->GetSampleDimensions();
  array<int>^ mRetVal = gcnew array<int>(3);
  for (size_t cprIdx=0; cprIdx<3; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



void vtkSampleFunction::SetModelBounds(double arg0, double arg1, double arg2, double arg3, double arg4, double arg5)
{
  vtk::ConvertManagedToNative<::vtkSampleFunction>(m_instance)->SetModelBounds(arg0, arg1, arg2, arg3, arg4, arg5);
}



void vtkSampleFunction::SetModelBounds(array<double>^ a)
{
  pin_ptr<double> aPin = &a[0];
  double* nativeaPin = aPin;
  vtk::ConvertManagedToNative<::vtkSampleFunction>(m_instance)->SetModelBounds(nativeaPin);
}



array<double>^ vtkSampleFunction::GetModelBounds()
{
  const double* retVal = vtk::ConvertManagedToNative<::vtkSampleFunction>(m_instance)->GetModelBounds();
  array<double>^ mRetVal = gcnew array<double>(6);
  for (size_t cprIdx=0; cprIdx<6; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



void vtkSampleFunction::SetCapping(int arg0)
{
  vtk::ConvertManagedToNative<::vtkSampleFunction>(m_instance)->SetCapping(arg0);
}



int vtkSampleFunction::GetCapping()
{
  int retVal = vtk::ConvertManagedToNative<::vtkSampleFunction>(m_instance)->GetCapping();
  return retVal;
}



void vtkSampleFunction::CappingOn()
{
  vtk::ConvertManagedToNative<::vtkSampleFunction>(m_instance)->CappingOn();
}



void vtkSampleFunction::CappingOff()
{
  vtk::ConvertManagedToNative<::vtkSampleFunction>(m_instance)->CappingOff();
}



void vtkSampleFunction::SetCapValue(double arg0)
{
  vtk::ConvertManagedToNative<::vtkSampleFunction>(m_instance)->SetCapValue(arg0);
}



double vtkSampleFunction::GetCapValue()
{
  double retVal = vtk::ConvertManagedToNative<::vtkSampleFunction>(m_instance)->GetCapValue();
  return retVal;
}



void vtkSampleFunction::SetComputeNormals(int arg0)
{
  vtk::ConvertManagedToNative<::vtkSampleFunction>(m_instance)->SetComputeNormals(arg0);
}



int vtkSampleFunction::GetComputeNormals()
{
  int retVal = vtk::ConvertManagedToNative<::vtkSampleFunction>(m_instance)->GetComputeNormals();
  return retVal;
}



void vtkSampleFunction::ComputeNormalsOn()
{
  vtk::ConvertManagedToNative<::vtkSampleFunction>(m_instance)->ComputeNormalsOn();
}



void vtkSampleFunction::ComputeNormalsOff()
{
  vtk::ConvertManagedToNative<::vtkSampleFunction>(m_instance)->ComputeNormalsOff();
}



unsigned long vtkSampleFunction::GetMTime()
{
  unsigned long retVal = vtk::ConvertManagedToNative<::vtkSampleFunction>(m_instance)->GetMTime();
  return retVal;
}



  vtkSampleFunction::vtkSampleFunction(System::IntPtr native, bool bConst) : vtkImageAlgorithm(native, bConst) {}



  vtkSampleFunction::vtkSampleFunction(bool donothing) : vtkImageAlgorithm(donothing) {}



  vtkSampleFunction::vtkSampleFunction() : vtkImageAlgorithm(false) {
  this->SetNativePointer(IntPtr(::vtkSampleFunction::New()));
}



  vtkSampleFunction::~vtkSampleFunction() { }





} // end namespace vtkImaging
