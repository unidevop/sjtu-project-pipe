

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkImageGridSourceDotNet.h"

// native includes
#include "strstream"
#include "vtkImageGridSource.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkImageGridSource::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkImageGridSource>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkImageGridSource::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkImageGridSource>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkImageGridSource^ vtkImageGridSource::NewInstance()
{
  ::vtkImageGridSource* retVal = static_cast<::vtkImageGridSource*>(vtk::ConvertManagedToNative<::vtkImageGridSource>(m_instance)->NewInstance());
  return gcnew vtkImageGridSource(IntPtr(retVal), false);
}



vtkImageGridSource^ vtkImageGridSource::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkImageGridSource* retVal = static_cast<::vtkImageGridSource*>(::vtkImageGridSource::SafeDownCast(oWrap));
  return gcnew vtkImageGridSource(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkImageGridSource::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkImageGridSource>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkImageGridSource::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkImageGridSource>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkImageGridSource::SetGridSpacing(int arg0, int arg1, int arg2)
{
  vtk::ConvertManagedToNative<::vtkImageGridSource>(m_instance)->SetGridSpacing(arg0, arg1, arg2);
}



void vtkImageGridSource::SetGridSpacing(array<int>^ a)
{
  pin_ptr<int> aPin = &a[0];
  int* nativeaPin = aPin;
  vtk::ConvertManagedToNative<::vtkImageGridSource>(m_instance)->SetGridSpacing(nativeaPin);
}



array<int>^ vtkImageGridSource::GetGridSpacing()
{
  const int* retVal = vtk::ConvertManagedToNative<::vtkImageGridSource>(m_instance)->GetGridSpacing();
  array<int>^ mRetVal = gcnew array<int>(3);
  for (size_t cprIdx=0; cprIdx<3; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



void vtkImageGridSource::SetGridOrigin(int arg0, int arg1, int arg2)
{
  vtk::ConvertManagedToNative<::vtkImageGridSource>(m_instance)->SetGridOrigin(arg0, arg1, arg2);
}



void vtkImageGridSource::SetGridOrigin(array<int>^ a)
{
  pin_ptr<int> aPin = &a[0];
  int* nativeaPin = aPin;
  vtk::ConvertManagedToNative<::vtkImageGridSource>(m_instance)->SetGridOrigin(nativeaPin);
}



array<int>^ vtkImageGridSource::GetGridOrigin()
{
  const int* retVal = vtk::ConvertManagedToNative<::vtkImageGridSource>(m_instance)->GetGridOrigin();
  array<int>^ mRetVal = gcnew array<int>(3);
  for (size_t cprIdx=0; cprIdx<3; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



void vtkImageGridSource::SetLineValue(double arg0)
{
  vtk::ConvertManagedToNative<::vtkImageGridSource>(m_instance)->SetLineValue(arg0);
}



double vtkImageGridSource::GetLineValue()
{
  double retVal = vtk::ConvertManagedToNative<::vtkImageGridSource>(m_instance)->GetLineValue();
  return retVal;
}



void vtkImageGridSource::SetFillValue(double arg0)
{
  vtk::ConvertManagedToNative<::vtkImageGridSource>(m_instance)->SetFillValue(arg0);
}



double vtkImageGridSource::GetFillValue()
{
  double retVal = vtk::ConvertManagedToNative<::vtkImageGridSource>(m_instance)->GetFillValue();
  return retVal;
}



void vtkImageGridSource::SetDataScalarType(int arg0)
{
  vtk::ConvertManagedToNative<::vtkImageGridSource>(m_instance)->SetDataScalarType(arg0);
}



void vtkImageGridSource::SetDataScalarTypeToDouble()
{
  vtk::ConvertManagedToNative<::vtkImageGridSource>(m_instance)->SetDataScalarTypeToDouble();
}



void vtkImageGridSource::SetDataScalarTypeToInt()
{
  vtk::ConvertManagedToNative<::vtkImageGridSource>(m_instance)->SetDataScalarTypeToInt();
}



void vtkImageGridSource::SetDataScalarTypeToShort()
{
  vtk::ConvertManagedToNative<::vtkImageGridSource>(m_instance)->SetDataScalarTypeToShort();
}



void vtkImageGridSource::SetDataScalarTypeToUnsignedShort()
{
  vtk::ConvertManagedToNative<::vtkImageGridSource>(m_instance)->SetDataScalarTypeToUnsignedShort();
}



void vtkImageGridSource::SetDataScalarTypeToUnsignedChar()
{
  vtk::ConvertManagedToNative<::vtkImageGridSource>(m_instance)->SetDataScalarTypeToUnsignedChar();
}



int vtkImageGridSource::GetDataScalarType()
{
  int retVal = vtk::ConvertManagedToNative<::vtkImageGridSource>(m_instance)->GetDataScalarType();
  return retVal;
}



System::String^ vtkImageGridSource::GetDataScalarTypeAsString()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkImageGridSource>(m_instance)->GetDataScalarTypeAsString();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



void vtkImageGridSource::SetDataExtent(int arg0, int arg1, int arg2, int arg3, int arg4, int arg5)
{
  vtk::ConvertManagedToNative<::vtkImageGridSource>(m_instance)->SetDataExtent(arg0, arg1, arg2, arg3, arg4, arg5);
}



void vtkImageGridSource::SetDataExtent(array<int>^ a)
{
  pin_ptr<int> aPin = &a[0];
  int* nativeaPin = aPin;
  vtk::ConvertManagedToNative<::vtkImageGridSource>(m_instance)->SetDataExtent(nativeaPin);
}



array<int>^ vtkImageGridSource::GetDataExtent()
{
  const int* retVal = vtk::ConvertManagedToNative<::vtkImageGridSource>(m_instance)->GetDataExtent();
  array<int>^ mRetVal = gcnew array<int>(6);
  for (size_t cprIdx=0; cprIdx<6; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



void vtkImageGridSource::SetDataSpacing(double arg0, double arg1, double arg2)
{
  vtk::ConvertManagedToNative<::vtkImageGridSource>(m_instance)->SetDataSpacing(arg0, arg1, arg2);
}



void vtkImageGridSource::SetDataSpacing(array<double>^ a)
{
  pin_ptr<double> aPin = &a[0];
  double* nativeaPin = aPin;
  vtk::ConvertManagedToNative<::vtkImageGridSource>(m_instance)->SetDataSpacing(nativeaPin);
}



array<double>^ vtkImageGridSource::GetDataSpacing()
{
  const double* retVal = vtk::ConvertManagedToNative<::vtkImageGridSource>(m_instance)->GetDataSpacing();
  array<double>^ mRetVal = gcnew array<double>(3);
  for (size_t cprIdx=0; cprIdx<3; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



void vtkImageGridSource::SetDataOrigin(double arg0, double arg1, double arg2)
{
  vtk::ConvertManagedToNative<::vtkImageGridSource>(m_instance)->SetDataOrigin(arg0, arg1, arg2);
}



void vtkImageGridSource::SetDataOrigin(array<double>^ a)
{
  pin_ptr<double> aPin = &a[0];
  double* nativeaPin = aPin;
  vtk::ConvertManagedToNative<::vtkImageGridSource>(m_instance)->SetDataOrigin(nativeaPin);
}



array<double>^ vtkImageGridSource::GetDataOrigin()
{
  const double* retVal = vtk::ConvertManagedToNative<::vtkImageGridSource>(m_instance)->GetDataOrigin();
  array<double>^ mRetVal = gcnew array<double>(3);
  for (size_t cprIdx=0; cprIdx<3; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



  vtkImageGridSource::vtkImageGridSource(System::IntPtr native, bool bConst) : vtkImageAlgorithm(native, bConst) {}



  vtkImageGridSource::vtkImageGridSource(bool donothing) : vtkImageAlgorithm(donothing) {}



  vtkImageGridSource::vtkImageGridSource() : vtkImageAlgorithm(false) {
  this->SetNativePointer(IntPtr(::vtkImageGridSource::New()));
}



  vtkImageGridSource::~vtkImageGridSource() { }





} // end namespace vtkImaging
