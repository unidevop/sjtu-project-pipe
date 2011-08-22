

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkShepardMethodDotNet.h"

// native includes
#include "strstream"
#include "vtkShepardMethod.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkShepardMethod::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkShepardMethod>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkShepardMethod::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkShepardMethod>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkShepardMethod^ vtkShepardMethod::NewInstance()
{
  ::vtkShepardMethod* retVal = static_cast<::vtkShepardMethod*>(vtk::ConvertManagedToNative<::vtkShepardMethod>(m_instance)->NewInstance());
  return gcnew vtkShepardMethod(IntPtr(retVal), false);
}



vtkShepardMethod^ vtkShepardMethod::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkShepardMethod* retVal = static_cast<::vtkShepardMethod*>(::vtkShepardMethod::SafeDownCast(oWrap));
  return gcnew vtkShepardMethod(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkShepardMethod::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkShepardMethod>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkShepardMethod::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkShepardMethod>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




double vtkShepardMethod::ComputeModelBounds(array<double>^ origin, array<double>^ ar)
{
  pin_ptr<double> originPin = &origin[0];
  double* nativeoriginPin = originPin;
  pin_ptr<double> arPin = &ar[0];
  double* nativearPin = arPin;
  double retVal = vtk::ConvertManagedToNative<::vtkShepardMethod>(m_instance)->ComputeModelBounds(nativeoriginPin, nativearPin);
  return retVal;
}



array<int>^ vtkShepardMethod::GetSampleDimensions()
{
  const int* retVal = vtk::ConvertManagedToNative<::vtkShepardMethod>(m_instance)->GetSampleDimensions();
  array<int>^ mRetVal = gcnew array<int>(3);
  for (size_t cprIdx=0; cprIdx<3; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



void vtkShepardMethod::SetSampleDimensions(int i, int j, int k)
{
  vtk::ConvertManagedToNative<::vtkShepardMethod>(m_instance)->SetSampleDimensions(i, j, k);
}



void vtkShepardMethod::SetSampleDimensions(array<int>^ dim)
{
  pin_ptr<int> dimPin = &dim[0];
  int* nativedimPin = dimPin;
  vtk::ConvertManagedToNative<::vtkShepardMethod>(m_instance)->SetSampleDimensions(nativedimPin);
}



void vtkShepardMethod::SetMaximumDistance(double arg0)
{
  vtk::ConvertManagedToNative<::vtkShepardMethod>(m_instance)->SetMaximumDistance(arg0);
}



double vtkShepardMethod::GetMaximumDistanceMinValue()
{
  double retVal = vtk::ConvertManagedToNative<::vtkShepardMethod>(m_instance)->GetMaximumDistanceMinValue();
  return retVal;
}



double vtkShepardMethod::GetMaximumDistanceMaxValue()
{
  double retVal = vtk::ConvertManagedToNative<::vtkShepardMethod>(m_instance)->GetMaximumDistanceMaxValue();
  return retVal;
}



double vtkShepardMethod::GetMaximumDistance()
{
  double retVal = vtk::ConvertManagedToNative<::vtkShepardMethod>(m_instance)->GetMaximumDistance();
  return retVal;
}



void vtkShepardMethod::SetModelBounds(double arg0, double arg1, double arg2, double arg3, double arg4, double arg5)
{
  vtk::ConvertManagedToNative<::vtkShepardMethod>(m_instance)->SetModelBounds(arg0, arg1, arg2, arg3, arg4, arg5);
}



void vtkShepardMethod::SetModelBounds(array<double>^ a)
{
  pin_ptr<double> aPin = &a[0];
  double* nativeaPin = aPin;
  vtk::ConvertManagedToNative<::vtkShepardMethod>(m_instance)->SetModelBounds(nativeaPin);
}



array<double>^ vtkShepardMethod::GetModelBounds()
{
  const double* retVal = vtk::ConvertManagedToNative<::vtkShepardMethod>(m_instance)->GetModelBounds();
  array<double>^ mRetVal = gcnew array<double>(6);
  for (size_t cprIdx=0; cprIdx<6; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



void vtkShepardMethod::SetNullValue(double arg0)
{
  vtk::ConvertManagedToNative<::vtkShepardMethod>(m_instance)->SetNullValue(arg0);
}



double vtkShepardMethod::GetNullValue()
{
  double retVal = vtk::ConvertManagedToNative<::vtkShepardMethod>(m_instance)->GetNullValue();
  return retVal;
}



  vtkShepardMethod::vtkShepardMethod(System::IntPtr native, bool bConst) : vtkImageAlgorithm(native, bConst) {}



  vtkShepardMethod::vtkShepardMethod(bool donothing) : vtkImageAlgorithm(donothing) {}



  vtkShepardMethod::vtkShepardMethod() : vtkImageAlgorithm(false) {
  this->SetNativePointer(IntPtr(::vtkShepardMethod::New()));
}



  vtkShepardMethod::~vtkShepardMethod() { }





} // end namespace vtkImaging
