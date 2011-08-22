

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkImplicitModellerDotNet.h"

// native includes
#include "strstream"
#include "vtkImplicitModeller.h"
#include "vtkDataSet.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkImplicitModeller::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkImplicitModeller>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkImplicitModeller::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkImplicitModeller>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkImplicitModeller^ vtkImplicitModeller::NewInstance()
{
  ::vtkImplicitModeller* retVal = static_cast<::vtkImplicitModeller*>(vtk::ConvertManagedToNative<::vtkImplicitModeller>(m_instance)->NewInstance());
  return gcnew vtkImplicitModeller(IntPtr(retVal), false);
}



vtkImplicitModeller^ vtkImplicitModeller::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkImplicitModeller* retVal = static_cast<::vtkImplicitModeller*>(::vtkImplicitModeller::SafeDownCast(oWrap));
  return gcnew vtkImplicitModeller(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkImplicitModeller::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkImplicitModeller>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkImplicitModeller::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkImplicitModeller>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




double vtkImplicitModeller::ComputeModelBounds(vtkDataSet^ inputNULL)
{
  ::vtkDataSet* inputNULLWrap = vtk::ConvertManagedToNative<::vtkDataSet>(inputNULL->GetNativePointer());
  double retVal = vtk::ConvertManagedToNative<::vtkImplicitModeller>(m_instance)->ComputeModelBounds(inputNULLWrap);
  return retVal;
}



array<int>^ vtkImplicitModeller::GetSampleDimensions()
{
  const int* retVal = vtk::ConvertManagedToNative<::vtkImplicitModeller>(m_instance)->GetSampleDimensions();
  array<int>^ mRetVal = gcnew array<int>(3);
  for (size_t cprIdx=0; cprIdx<3; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



void vtkImplicitModeller::SetSampleDimensions(int i, int j, int k)
{
  vtk::ConvertManagedToNative<::vtkImplicitModeller>(m_instance)->SetSampleDimensions(i, j, k);
}



void vtkImplicitModeller::SetSampleDimensions(array<int>^ dim)
{
  pin_ptr<int> dimPin = &dim[0];
  int* nativedimPin = dimPin;
  vtk::ConvertManagedToNative<::vtkImplicitModeller>(m_instance)->SetSampleDimensions(nativedimPin);
}



void vtkImplicitModeller::SetMaximumDistance(double arg0)
{
  vtk::ConvertManagedToNative<::vtkImplicitModeller>(m_instance)->SetMaximumDistance(arg0);
}



double vtkImplicitModeller::GetMaximumDistanceMinValue()
{
  double retVal = vtk::ConvertManagedToNative<::vtkImplicitModeller>(m_instance)->GetMaximumDistanceMinValue();
  return retVal;
}



double vtkImplicitModeller::GetMaximumDistanceMaxValue()
{
  double retVal = vtk::ConvertManagedToNative<::vtkImplicitModeller>(m_instance)->GetMaximumDistanceMaxValue();
  return retVal;
}



double vtkImplicitModeller::GetMaximumDistance()
{
  double retVal = vtk::ConvertManagedToNative<::vtkImplicitModeller>(m_instance)->GetMaximumDistance();
  return retVal;
}



void vtkImplicitModeller::SetModelBounds(double arg0, double arg1, double arg2, double arg3, double arg4, double arg5)
{
  vtk::ConvertManagedToNative<::vtkImplicitModeller>(m_instance)->SetModelBounds(arg0, arg1, arg2, arg3, arg4, arg5);
}



void vtkImplicitModeller::SetModelBounds(array<double>^ a)
{
  pin_ptr<double> aPin = &a[0];
  double* nativeaPin = aPin;
  vtk::ConvertManagedToNative<::vtkImplicitModeller>(m_instance)->SetModelBounds(nativeaPin);
}



array<double>^ vtkImplicitModeller::GetModelBounds()
{
  const double* retVal = vtk::ConvertManagedToNative<::vtkImplicitModeller>(m_instance)->GetModelBounds();
  array<double>^ mRetVal = gcnew array<double>(6);
  for (size_t cprIdx=0; cprIdx<6; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



void vtkImplicitModeller::SetAdjustBounds(int arg0)
{
  vtk::ConvertManagedToNative<::vtkImplicitModeller>(m_instance)->SetAdjustBounds(arg0);
}



int vtkImplicitModeller::GetAdjustBounds()
{
  int retVal = vtk::ConvertManagedToNative<::vtkImplicitModeller>(m_instance)->GetAdjustBounds();
  return retVal;
}



void vtkImplicitModeller::AdjustBoundsOn()
{
  vtk::ConvertManagedToNative<::vtkImplicitModeller>(m_instance)->AdjustBoundsOn();
}



void vtkImplicitModeller::AdjustBoundsOff()
{
  vtk::ConvertManagedToNative<::vtkImplicitModeller>(m_instance)->AdjustBoundsOff();
}



void vtkImplicitModeller::SetAdjustDistance(double arg0)
{
  vtk::ConvertManagedToNative<::vtkImplicitModeller>(m_instance)->SetAdjustDistance(arg0);
}



double vtkImplicitModeller::GetAdjustDistanceMinValue()
{
  double retVal = vtk::ConvertManagedToNative<::vtkImplicitModeller>(m_instance)->GetAdjustDistanceMinValue();
  return retVal;
}



double vtkImplicitModeller::GetAdjustDistanceMaxValue()
{
  double retVal = vtk::ConvertManagedToNative<::vtkImplicitModeller>(m_instance)->GetAdjustDistanceMaxValue();
  return retVal;
}



double vtkImplicitModeller::GetAdjustDistance()
{
  double retVal = vtk::ConvertManagedToNative<::vtkImplicitModeller>(m_instance)->GetAdjustDistance();
  return retVal;
}



void vtkImplicitModeller::SetCapping(int arg0)
{
  vtk::ConvertManagedToNative<::vtkImplicitModeller>(m_instance)->SetCapping(arg0);
}



int vtkImplicitModeller::GetCapping()
{
  int retVal = vtk::ConvertManagedToNative<::vtkImplicitModeller>(m_instance)->GetCapping();
  return retVal;
}



void vtkImplicitModeller::CappingOn()
{
  vtk::ConvertManagedToNative<::vtkImplicitModeller>(m_instance)->CappingOn();
}



void vtkImplicitModeller::CappingOff()
{
  vtk::ConvertManagedToNative<::vtkImplicitModeller>(m_instance)->CappingOff();
}



void vtkImplicitModeller::SetCapValue(double value)
{
  vtk::ConvertManagedToNative<::vtkImplicitModeller>(m_instance)->SetCapValue(value);
}



double vtkImplicitModeller::GetCapValue()
{
  double retVal = vtk::ConvertManagedToNative<::vtkImplicitModeller>(m_instance)->GetCapValue();
  return retVal;
}



void vtkImplicitModeller::SetScaleToMaximumDistance(int arg0)
{
  vtk::ConvertManagedToNative<::vtkImplicitModeller>(m_instance)->SetScaleToMaximumDistance(arg0);
}



int vtkImplicitModeller::GetScaleToMaximumDistance()
{
  int retVal = vtk::ConvertManagedToNative<::vtkImplicitModeller>(m_instance)->GetScaleToMaximumDistance();
  return retVal;
}



void vtkImplicitModeller::ScaleToMaximumDistanceOn()
{
  vtk::ConvertManagedToNative<::vtkImplicitModeller>(m_instance)->ScaleToMaximumDistanceOn();
}



void vtkImplicitModeller::ScaleToMaximumDistanceOff()
{
  vtk::ConvertManagedToNative<::vtkImplicitModeller>(m_instance)->ScaleToMaximumDistanceOff();
}



void vtkImplicitModeller::SetProcessMode(int arg0)
{
  vtk::ConvertManagedToNative<::vtkImplicitModeller>(m_instance)->SetProcessMode(arg0);
}



int vtkImplicitModeller::GetProcessModeMinValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkImplicitModeller>(m_instance)->GetProcessModeMinValue();
  return retVal;
}



int vtkImplicitModeller::GetProcessModeMaxValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkImplicitModeller>(m_instance)->GetProcessModeMaxValue();
  return retVal;
}



int vtkImplicitModeller::GetProcessMode()
{
  int retVal = vtk::ConvertManagedToNative<::vtkImplicitModeller>(m_instance)->GetProcessMode();
  return retVal;
}



void vtkImplicitModeller::SetProcessModeToPerVoxel()
{
  vtk::ConvertManagedToNative<::vtkImplicitModeller>(m_instance)->SetProcessModeToPerVoxel();
}



void vtkImplicitModeller::SetProcessModeToPerCell()
{
  vtk::ConvertManagedToNative<::vtkImplicitModeller>(m_instance)->SetProcessModeToPerCell();
}



System::String^ vtkImplicitModeller::GetProcessModeAsString()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkImplicitModeller>(m_instance)->GetProcessModeAsString();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



void vtkImplicitModeller::SetLocatorMaxLevel(int arg0)
{
  vtk::ConvertManagedToNative<::vtkImplicitModeller>(m_instance)->SetLocatorMaxLevel(arg0);
}



int vtkImplicitModeller::GetLocatorMaxLevel()
{
  int retVal = vtk::ConvertManagedToNative<::vtkImplicitModeller>(m_instance)->GetLocatorMaxLevel();
  return retVal;
}



void vtkImplicitModeller::SetNumberOfThreads(int arg0)
{
  vtk::ConvertManagedToNative<::vtkImplicitModeller>(m_instance)->SetNumberOfThreads(arg0);
}



int vtkImplicitModeller::GetNumberOfThreadsMinValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkImplicitModeller>(m_instance)->GetNumberOfThreadsMinValue();
  return retVal;
}



int vtkImplicitModeller::GetNumberOfThreadsMaxValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkImplicitModeller>(m_instance)->GetNumberOfThreadsMaxValue();
  return retVal;
}



int vtkImplicitModeller::GetNumberOfThreads()
{
  int retVal = vtk::ConvertManagedToNative<::vtkImplicitModeller>(m_instance)->GetNumberOfThreads();
  return retVal;
}



void vtkImplicitModeller::SetOutputScalarType(int type)
{
  vtk::ConvertManagedToNative<::vtkImplicitModeller>(m_instance)->SetOutputScalarType(type);
}



int vtkImplicitModeller::GetOutputScalarType()
{
  int retVal = vtk::ConvertManagedToNative<::vtkImplicitModeller>(m_instance)->GetOutputScalarType();
  return retVal;
}



void vtkImplicitModeller::SetOutputScalarTypeToFloat()
{
  vtk::ConvertManagedToNative<::vtkImplicitModeller>(m_instance)->SetOutputScalarTypeToFloat();
}



void vtkImplicitModeller::SetOutputScalarTypeToDouble()
{
  vtk::ConvertManagedToNative<::vtkImplicitModeller>(m_instance)->SetOutputScalarTypeToDouble();
}



void vtkImplicitModeller::SetOutputScalarTypeToInt()
{
  vtk::ConvertManagedToNative<::vtkImplicitModeller>(m_instance)->SetOutputScalarTypeToInt();
}



void vtkImplicitModeller::SetOutputScalarTypeToUnsignedInt()
{
  vtk::ConvertManagedToNative<::vtkImplicitModeller>(m_instance)->SetOutputScalarTypeToUnsignedInt();
}



void vtkImplicitModeller::SetOutputScalarTypeToLong()
{
  vtk::ConvertManagedToNative<::vtkImplicitModeller>(m_instance)->SetOutputScalarTypeToLong();
}



void vtkImplicitModeller::SetOutputScalarTypeToUnsignedLong()
{
  vtk::ConvertManagedToNative<::vtkImplicitModeller>(m_instance)->SetOutputScalarTypeToUnsignedLong();
}



void vtkImplicitModeller::SetOutputScalarTypeToShort()
{
  vtk::ConvertManagedToNative<::vtkImplicitModeller>(m_instance)->SetOutputScalarTypeToShort();
}



void vtkImplicitModeller::SetOutputScalarTypeToUnsignedShort()
{
  vtk::ConvertManagedToNative<::vtkImplicitModeller>(m_instance)->SetOutputScalarTypeToUnsignedShort();
}



void vtkImplicitModeller::SetOutputScalarTypeToUnsignedChar()
{
  vtk::ConvertManagedToNative<::vtkImplicitModeller>(m_instance)->SetOutputScalarTypeToUnsignedChar();
}



void vtkImplicitModeller::SetOutputScalarTypeToChar()
{
  vtk::ConvertManagedToNative<::vtkImplicitModeller>(m_instance)->SetOutputScalarTypeToChar();
}



void vtkImplicitModeller::StartAppend()
{
  vtk::ConvertManagedToNative<::vtkImplicitModeller>(m_instance)->StartAppend();
}



void vtkImplicitModeller::Append(vtkDataSet^ input)
{
  ::vtkDataSet* inputWrap = vtk::ConvertManagedToNative<::vtkDataSet>(input->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkImplicitModeller>(m_instance)->Append(inputWrap);
}



void vtkImplicitModeller::EndAppend()
{
  vtk::ConvertManagedToNative<::vtkImplicitModeller>(m_instance)->EndAppend();
}



  vtkImplicitModeller::vtkImplicitModeller(System::IntPtr native, bool bConst) : vtkImageAlgorithm(native, bConst) {}



  vtkImplicitModeller::vtkImplicitModeller(bool donothing) : vtkImageAlgorithm(donothing) {}



  vtkImplicitModeller::vtkImplicitModeller() : vtkImageAlgorithm(false) {
  this->SetNativePointer(IntPtr(::vtkImplicitModeller::New()));
}



  vtkImplicitModeller::~vtkImplicitModeller() { }





} // end namespace vtkHybrid
