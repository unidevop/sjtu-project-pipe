

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkTextureMapToPlaneDotNet.h"

// native includes
#include "strstream"
#include "vtkTextureMapToPlane.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkTextureMapToPlane::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkTextureMapToPlane>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkTextureMapToPlane::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkTextureMapToPlane>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkTextureMapToPlane^ vtkTextureMapToPlane::NewInstance()
{
  ::vtkTextureMapToPlane* retVal = static_cast<::vtkTextureMapToPlane*>(vtk::ConvertManagedToNative<::vtkTextureMapToPlane>(m_instance)->NewInstance());
  return gcnew vtkTextureMapToPlane(IntPtr(retVal), false);
}



vtkTextureMapToPlane^ vtkTextureMapToPlane::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkTextureMapToPlane* retVal = static_cast<::vtkTextureMapToPlane*>(::vtkTextureMapToPlane::SafeDownCast(oWrap));
  return gcnew vtkTextureMapToPlane(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkTextureMapToPlane::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkTextureMapToPlane>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkTextureMapToPlane::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkTextureMapToPlane>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkTextureMapToPlane::SetOrigin(double arg0, double arg1, double arg2)
{
  vtk::ConvertManagedToNative<::vtkTextureMapToPlane>(m_instance)->SetOrigin(arg0, arg1, arg2);
}



void vtkTextureMapToPlane::SetOrigin(array<double>^ a)
{
  pin_ptr<double> aPin = &a[0];
  double* nativeaPin = aPin;
  vtk::ConvertManagedToNative<::vtkTextureMapToPlane>(m_instance)->SetOrigin(nativeaPin);
}



array<double>^ vtkTextureMapToPlane::GetOrigin()
{
  const double* retVal = vtk::ConvertManagedToNative<::vtkTextureMapToPlane>(m_instance)->GetOrigin();
  array<double>^ mRetVal = gcnew array<double>(3);
  for (size_t cprIdx=0; cprIdx<3; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



void vtkTextureMapToPlane::SetPoint1(double arg0, double arg1, double arg2)
{
  vtk::ConvertManagedToNative<::vtkTextureMapToPlane>(m_instance)->SetPoint1(arg0, arg1, arg2);
}



void vtkTextureMapToPlane::SetPoint1(array<double>^ a)
{
  pin_ptr<double> aPin = &a[0];
  double* nativeaPin = aPin;
  vtk::ConvertManagedToNative<::vtkTextureMapToPlane>(m_instance)->SetPoint1(nativeaPin);
}



array<double>^ vtkTextureMapToPlane::GetPoint1()
{
  const double* retVal = vtk::ConvertManagedToNative<::vtkTextureMapToPlane>(m_instance)->GetPoint1();
  array<double>^ mRetVal = gcnew array<double>(3);
  for (size_t cprIdx=0; cprIdx<3; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



void vtkTextureMapToPlane::SetPoint2(double arg0, double arg1, double arg2)
{
  vtk::ConvertManagedToNative<::vtkTextureMapToPlane>(m_instance)->SetPoint2(arg0, arg1, arg2);
}



void vtkTextureMapToPlane::SetPoint2(array<double>^ a)
{
  pin_ptr<double> aPin = &a[0];
  double* nativeaPin = aPin;
  vtk::ConvertManagedToNative<::vtkTextureMapToPlane>(m_instance)->SetPoint2(nativeaPin);
}



array<double>^ vtkTextureMapToPlane::GetPoint2()
{
  const double* retVal = vtk::ConvertManagedToNative<::vtkTextureMapToPlane>(m_instance)->GetPoint2();
  array<double>^ mRetVal = gcnew array<double>(3);
  for (size_t cprIdx=0; cprIdx<3; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



void vtkTextureMapToPlane::SetNormal(double arg0, double arg1, double arg2)
{
  vtk::ConvertManagedToNative<::vtkTextureMapToPlane>(m_instance)->SetNormal(arg0, arg1, arg2);
}



void vtkTextureMapToPlane::SetNormal(array<double>^ a)
{
  pin_ptr<double> aPin = &a[0];
  double* nativeaPin = aPin;
  vtk::ConvertManagedToNative<::vtkTextureMapToPlane>(m_instance)->SetNormal(nativeaPin);
}



array<double>^ vtkTextureMapToPlane::GetNormal()
{
  const double* retVal = vtk::ConvertManagedToNative<::vtkTextureMapToPlane>(m_instance)->GetNormal();
  array<double>^ mRetVal = gcnew array<double>(3);
  for (size_t cprIdx=0; cprIdx<3; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



void vtkTextureMapToPlane::SetSRange(double arg0, double arg1)
{
  vtk::ConvertManagedToNative<::vtkTextureMapToPlane>(m_instance)->SetSRange(arg0, arg1);
}



void vtkTextureMapToPlane::SetSRange(array<double>^ a)
{
  pin_ptr<double> aPin = &a[0];
  double* nativeaPin = aPin;
  vtk::ConvertManagedToNative<::vtkTextureMapToPlane>(m_instance)->SetSRange(nativeaPin);
}



array<double>^ vtkTextureMapToPlane::GetSRange()
{
  const double* retVal = vtk::ConvertManagedToNative<::vtkTextureMapToPlane>(m_instance)->GetSRange();
  array<double>^ mRetVal = gcnew array<double>(2);
  for (size_t cprIdx=0; cprIdx<2; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



void vtkTextureMapToPlane::SetTRange(double arg0, double arg1)
{
  vtk::ConvertManagedToNative<::vtkTextureMapToPlane>(m_instance)->SetTRange(arg0, arg1);
}



void vtkTextureMapToPlane::SetTRange(array<double>^ a)
{
  pin_ptr<double> aPin = &a[0];
  double* nativeaPin = aPin;
  vtk::ConvertManagedToNative<::vtkTextureMapToPlane>(m_instance)->SetTRange(nativeaPin);
}



array<double>^ vtkTextureMapToPlane::GetTRange()
{
  const double* retVal = vtk::ConvertManagedToNative<::vtkTextureMapToPlane>(m_instance)->GetTRange();
  array<double>^ mRetVal = gcnew array<double>(2);
  for (size_t cprIdx=0; cprIdx<2; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



void vtkTextureMapToPlane::SetAutomaticPlaneGeneration(int arg0)
{
  vtk::ConvertManagedToNative<::vtkTextureMapToPlane>(m_instance)->SetAutomaticPlaneGeneration(arg0);
}



int vtkTextureMapToPlane::GetAutomaticPlaneGeneration()
{
  int retVal = vtk::ConvertManagedToNative<::vtkTextureMapToPlane>(m_instance)->GetAutomaticPlaneGeneration();
  return retVal;
}



void vtkTextureMapToPlane::AutomaticPlaneGenerationOn()
{
  vtk::ConvertManagedToNative<::vtkTextureMapToPlane>(m_instance)->AutomaticPlaneGenerationOn();
}



void vtkTextureMapToPlane::AutomaticPlaneGenerationOff()
{
  vtk::ConvertManagedToNative<::vtkTextureMapToPlane>(m_instance)->AutomaticPlaneGenerationOff();
}



  vtkTextureMapToPlane::vtkTextureMapToPlane(System::IntPtr native, bool bConst) : vtkDataSetAlgorithm(native, bConst) {}



  vtkTextureMapToPlane::vtkTextureMapToPlane(bool donothing) : vtkDataSetAlgorithm(donothing) {}



  vtkTextureMapToPlane::vtkTextureMapToPlane() : vtkDataSetAlgorithm(false) {
  this->SetNativePointer(IntPtr(::vtkTextureMapToPlane::New()));
}



  vtkTextureMapToPlane::~vtkTextureMapToPlane() { }





} // end namespace vtkGraphics
