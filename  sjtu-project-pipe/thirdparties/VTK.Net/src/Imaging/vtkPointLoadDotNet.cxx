

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkPointLoadDotNet.h"

// native includes
#include "strstream"
#include "vtkPointLoad.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkPointLoad::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkPointLoad>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkPointLoad::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkPointLoad>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkPointLoad^ vtkPointLoad::NewInstance()
{
  ::vtkPointLoad* retVal = static_cast<::vtkPointLoad*>(vtk::ConvertManagedToNative<::vtkPointLoad>(m_instance)->NewInstance());
  return gcnew vtkPointLoad(IntPtr(retVal), false);
}



vtkPointLoad^ vtkPointLoad::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkPointLoad* retVal = static_cast<::vtkPointLoad*>(::vtkPointLoad::SafeDownCast(oWrap));
  return gcnew vtkPointLoad(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkPointLoad::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkPointLoad>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkPointLoad::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkPointLoad>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkPointLoad::SetLoadValue(double arg0)
{
  vtk::ConvertManagedToNative<::vtkPointLoad>(m_instance)->SetLoadValue(arg0);
}



double vtkPointLoad::GetLoadValue()
{
  double retVal = vtk::ConvertManagedToNative<::vtkPointLoad>(m_instance)->GetLoadValue();
  return retVal;
}



void vtkPointLoad::SetSampleDimensions(int i, int j, int k)
{
  vtk::ConvertManagedToNative<::vtkPointLoad>(m_instance)->SetSampleDimensions(i, j, k);
}



void vtkPointLoad::SetSampleDimensions(array<int>^ dim)
{
  pin_ptr<int> dimPin = &dim[0];
  int* nativedimPin = dimPin;
  vtk::ConvertManagedToNative<::vtkPointLoad>(m_instance)->SetSampleDimensions(nativedimPin);
}



array<int>^ vtkPointLoad::GetSampleDimensions()
{
  const int* retVal = vtk::ConvertManagedToNative<::vtkPointLoad>(m_instance)->GetSampleDimensions();
  array<int>^ mRetVal = gcnew array<int>(3);
  for (size_t cprIdx=0; cprIdx<3; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



void vtkPointLoad::SetModelBounds(double arg0, double arg1, double arg2, double arg3, double arg4, double arg5)
{
  vtk::ConvertManagedToNative<::vtkPointLoad>(m_instance)->SetModelBounds(arg0, arg1, arg2, arg3, arg4, arg5);
}



void vtkPointLoad::SetModelBounds(array<double>^ a)
{
  pin_ptr<double> aPin = &a[0];
  double* nativeaPin = aPin;
  vtk::ConvertManagedToNative<::vtkPointLoad>(m_instance)->SetModelBounds(nativeaPin);
}



array<double>^ vtkPointLoad::GetModelBounds()
{
  const double* retVal = vtk::ConvertManagedToNative<::vtkPointLoad>(m_instance)->GetModelBounds();
  array<double>^ mRetVal = gcnew array<double>(6);
  for (size_t cprIdx=0; cprIdx<6; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



void vtkPointLoad::SetPoissonsRatio(double arg0)
{
  vtk::ConvertManagedToNative<::vtkPointLoad>(m_instance)->SetPoissonsRatio(arg0);
}



double vtkPointLoad::GetPoissonsRatio()
{
  double retVal = vtk::ConvertManagedToNative<::vtkPointLoad>(m_instance)->GetPoissonsRatio();
  return retVal;
}



void vtkPointLoad::SetComputeEffectiveStress(int arg0)
{
  vtk::ConvertManagedToNative<::vtkPointLoad>(m_instance)->SetComputeEffectiveStress(arg0);
}



int vtkPointLoad::GetComputeEffectiveStress()
{
  int retVal = vtk::ConvertManagedToNative<::vtkPointLoad>(m_instance)->GetComputeEffectiveStress();
  return retVal;
}



void vtkPointLoad::ComputeEffectiveStressOn()
{
  vtk::ConvertManagedToNative<::vtkPointLoad>(m_instance)->ComputeEffectiveStressOn();
}



void vtkPointLoad::ComputeEffectiveStressOff()
{
  vtk::ConvertManagedToNative<::vtkPointLoad>(m_instance)->ComputeEffectiveStressOff();
}



  vtkPointLoad::vtkPointLoad(System::IntPtr native, bool bConst) : vtkImageAlgorithm(native, bConst) {}



  vtkPointLoad::vtkPointLoad(bool donothing) : vtkImageAlgorithm(donothing) {}



  vtkPointLoad::vtkPointLoad() : vtkImageAlgorithm(false) {
  this->SetNativePointer(IntPtr(::vtkPointLoad::New()));
}



  vtkPointLoad::~vtkPointLoad() { }





} // end namespace vtkImaging
