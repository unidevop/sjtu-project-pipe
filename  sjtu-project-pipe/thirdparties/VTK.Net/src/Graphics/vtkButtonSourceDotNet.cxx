

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkButtonSourceDotNet.h"

// native includes
#include "strstream"
#include "vtkButtonSource.h"

using namespace System;

namespace vtk {

  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkButtonSource::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkButtonSource>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkButtonSource::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkButtonSource>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




System::String^ vtkButtonSource::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkButtonSource>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkButtonSource::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkButtonSource>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkButtonSource^ vtkButtonSource::NewInstance()
{
  ::vtkButtonSource* retVal = static_cast<::vtkButtonSource*>(vtk::ConvertManagedToNative<::vtkButtonSource>(m_instance)->NewInstance());
  return gcnew vtkButtonSource(IntPtr(retVal), false);
}



void vtkButtonSource::SetCenter(double arg0, double arg1, double arg2)
{
  vtk::ConvertManagedToNative<::vtkButtonSource>(m_instance)->SetCenter(arg0, arg1, arg2);
}



void vtkButtonSource::SetCenter(array<double>^ a)
{
  pin_ptr<double> aPin = &a[0];
  double* nativeaPin = aPin;
  vtk::ConvertManagedToNative<::vtkButtonSource>(m_instance)->SetCenter(nativeaPin);
}



array<double>^ vtkButtonSource::GetCenter()
{
  const double* retVal = vtk::ConvertManagedToNative<::vtkButtonSource>(m_instance)->GetCenter();
  array<double>^ mRetVal = gcnew array<double>(3);
  for (size_t cprIdx=0; cprIdx<3; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



void vtkButtonSource::SetTextureStyle(int arg0)
{
  vtk::ConvertManagedToNative<::vtkButtonSource>(m_instance)->SetTextureStyle(arg0);
}



int vtkButtonSource::GetTextureStyleMinValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkButtonSource>(m_instance)->GetTextureStyleMinValue();
  return retVal;
}



int vtkButtonSource::GetTextureStyleMaxValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkButtonSource>(m_instance)->GetTextureStyleMaxValue();
  return retVal;
}



int vtkButtonSource::GetTextureStyle()
{
  int retVal = vtk::ConvertManagedToNative<::vtkButtonSource>(m_instance)->GetTextureStyle();
  return retVal;
}



void vtkButtonSource::SetTextureStyleToFitImage()
{
  vtk::ConvertManagedToNative<::vtkButtonSource>(m_instance)->SetTextureStyleToFitImage();
}



void vtkButtonSource::SetTextureStyleToProportional()
{
  vtk::ConvertManagedToNative<::vtkButtonSource>(m_instance)->SetTextureStyleToProportional();
}



void vtkButtonSource::SetTextureDimensions(int arg0, int arg1)
{
  vtk::ConvertManagedToNative<::vtkButtonSource>(m_instance)->SetTextureDimensions(arg0, arg1);
}



void vtkButtonSource::SetTextureDimensions(array<int>^ a)
{
  pin_ptr<int> aPin = &a[0];
  int* nativeaPin = aPin;
  vtk::ConvertManagedToNative<::vtkButtonSource>(m_instance)->SetTextureDimensions(nativeaPin);
}



array<int>^ vtkButtonSource::GetTextureDimensions()
{
  const int* retVal = vtk::ConvertManagedToNative<::vtkButtonSource>(m_instance)->GetTextureDimensions();
  array<int>^ mRetVal = gcnew array<int>(2);
  for (size_t cprIdx=0; cprIdx<2; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



void vtkButtonSource::SetShoulderTextureCoordinate(double arg0, double arg1)
{
  vtk::ConvertManagedToNative<::vtkButtonSource>(m_instance)->SetShoulderTextureCoordinate(arg0, arg1);
}



void vtkButtonSource::SetShoulderTextureCoordinate(array<double>^ a)
{
  pin_ptr<double> aPin = &a[0];
  double* nativeaPin = aPin;
  vtk::ConvertManagedToNative<::vtkButtonSource>(m_instance)->SetShoulderTextureCoordinate(nativeaPin);
}



array<double>^ vtkButtonSource::GetShoulderTextureCoordinate()
{
  const double* retVal = vtk::ConvertManagedToNative<::vtkButtonSource>(m_instance)->GetShoulderTextureCoordinate();
  array<double>^ mRetVal = gcnew array<double>(2);
  for (size_t cprIdx=0; cprIdx<2; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



void vtkButtonSource::SetTwoSided(int arg0)
{
  vtk::ConvertManagedToNative<::vtkButtonSource>(m_instance)->SetTwoSided(arg0);
}



int vtkButtonSource::GetTwoSided()
{
  int retVal = vtk::ConvertManagedToNative<::vtkButtonSource>(m_instance)->GetTwoSided();
  return retVal;
}



void vtkButtonSource::TwoSidedOn()
{
  vtk::ConvertManagedToNative<::vtkButtonSource>(m_instance)->TwoSidedOn();
}



void vtkButtonSource::TwoSidedOff()
{
  vtk::ConvertManagedToNative<::vtkButtonSource>(m_instance)->TwoSidedOff();
}



  vtkButtonSource::vtkButtonSource(System::IntPtr native, bool bConst) : vtkPolyDataAlgorithm(native, bConst) {}



  vtkButtonSource::vtkButtonSource(bool donothing) : vtkPolyDataAlgorithm(donothing) {}



  vtkButtonSource::vtkButtonSource() : vtkPolyDataAlgorithm(false) {
  this->SetNativePointer(IntPtr(::vtkButtonSource::New()));
}



  vtkButtonSource::~vtkButtonSource() { }





} // end namespace vtkGraphics
