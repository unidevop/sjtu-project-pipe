

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkConeSourceDotNet.h"

// native includes
#include "strstream"
#include "vtkConeSource.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkConeSource::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkConeSource>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkConeSource::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkConeSource>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkConeSource^ vtkConeSource::NewInstance()
{
  ::vtkConeSource* retVal = static_cast<::vtkConeSource*>(vtk::ConvertManagedToNative<::vtkConeSource>(m_instance)->NewInstance());
  return gcnew vtkConeSource(IntPtr(retVal), false);
}



vtkConeSource^ vtkConeSource::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkConeSource* retVal = static_cast<::vtkConeSource*>(::vtkConeSource::SafeDownCast(oWrap));
  return gcnew vtkConeSource(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkConeSource::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkConeSource>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkConeSource::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkConeSource>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkConeSource::SetHeight(double arg0)
{
  vtk::ConvertManagedToNative<::vtkConeSource>(m_instance)->SetHeight(arg0);
}



double vtkConeSource::GetHeightMinValue()
{
  double retVal = vtk::ConvertManagedToNative<::vtkConeSource>(m_instance)->GetHeightMinValue();
  return retVal;
}



double vtkConeSource::GetHeightMaxValue()
{
  double retVal = vtk::ConvertManagedToNative<::vtkConeSource>(m_instance)->GetHeightMaxValue();
  return retVal;
}



double vtkConeSource::GetHeight()
{
  double retVal = vtk::ConvertManagedToNative<::vtkConeSource>(m_instance)->GetHeight();
  return retVal;
}



void vtkConeSource::SetRadius(double arg0)
{
  vtk::ConvertManagedToNative<::vtkConeSource>(m_instance)->SetRadius(arg0);
}



double vtkConeSource::GetRadiusMinValue()
{
  double retVal = vtk::ConvertManagedToNative<::vtkConeSource>(m_instance)->GetRadiusMinValue();
  return retVal;
}



double vtkConeSource::GetRadiusMaxValue()
{
  double retVal = vtk::ConvertManagedToNative<::vtkConeSource>(m_instance)->GetRadiusMaxValue();
  return retVal;
}



double vtkConeSource::GetRadius()
{
  double retVal = vtk::ConvertManagedToNative<::vtkConeSource>(m_instance)->GetRadius();
  return retVal;
}



void vtkConeSource::SetResolution(int arg0)
{
  vtk::ConvertManagedToNative<::vtkConeSource>(m_instance)->SetResolution(arg0);
}



int vtkConeSource::GetResolutionMinValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkConeSource>(m_instance)->GetResolutionMinValue();
  return retVal;
}



int vtkConeSource::GetResolutionMaxValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkConeSource>(m_instance)->GetResolutionMaxValue();
  return retVal;
}



int vtkConeSource::GetResolution()
{
  int retVal = vtk::ConvertManagedToNative<::vtkConeSource>(m_instance)->GetResolution();
  return retVal;
}



void vtkConeSource::SetCenter(double arg0, double arg1, double arg2)
{
  vtk::ConvertManagedToNative<::vtkConeSource>(m_instance)->SetCenter(arg0, arg1, arg2);
}



void vtkConeSource::SetCenter(array<double>^ a)
{
  pin_ptr<double> aPin = &a[0];
  double* nativeaPin = aPin;
  vtk::ConvertManagedToNative<::vtkConeSource>(m_instance)->SetCenter(nativeaPin);
}



array<double>^ vtkConeSource::GetCenter()
{
  const double* retVal = vtk::ConvertManagedToNative<::vtkConeSource>(m_instance)->GetCenter();
  array<double>^ mRetVal = gcnew array<double>(3);
  for (size_t cprIdx=0; cprIdx<3; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



void vtkConeSource::SetDirection(double arg0, double arg1, double arg2)
{
  vtk::ConvertManagedToNative<::vtkConeSource>(m_instance)->SetDirection(arg0, arg1, arg2);
}



void vtkConeSource::SetDirection(array<double>^ a)
{
  pin_ptr<double> aPin = &a[0];
  double* nativeaPin = aPin;
  vtk::ConvertManagedToNative<::vtkConeSource>(m_instance)->SetDirection(nativeaPin);
}



array<double>^ vtkConeSource::GetDirection()
{
  const double* retVal = vtk::ConvertManagedToNative<::vtkConeSource>(m_instance)->GetDirection();
  array<double>^ mRetVal = gcnew array<double>(3);
  for (size_t cprIdx=0; cprIdx<3; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



void vtkConeSource::SetAngle(double angle)
{
  vtk::ConvertManagedToNative<::vtkConeSource>(m_instance)->SetAngle(angle);
}



double vtkConeSource::GetAngle()
{
  double retVal = vtk::ConvertManagedToNative<::vtkConeSource>(m_instance)->GetAngle();
  return retVal;
}



void vtkConeSource::SetCapping(int arg0)
{
  vtk::ConvertManagedToNative<::vtkConeSource>(m_instance)->SetCapping(arg0);
}



int vtkConeSource::GetCapping()
{
  int retVal = vtk::ConvertManagedToNative<::vtkConeSource>(m_instance)->GetCapping();
  return retVal;
}



void vtkConeSource::CappingOn()
{
  vtk::ConvertManagedToNative<::vtkConeSource>(m_instance)->CappingOn();
}



void vtkConeSource::CappingOff()
{
  vtk::ConvertManagedToNative<::vtkConeSource>(m_instance)->CappingOff();
}



  vtkConeSource::vtkConeSource(System::IntPtr native, bool bConst) : vtkPolyDataAlgorithm(native, bConst) {}



  vtkConeSource::vtkConeSource(bool donothing) : vtkPolyDataAlgorithm(donothing) {}



  vtkConeSource::vtkConeSource() : vtkPolyDataAlgorithm(false) {
  this->SetNativePointer(IntPtr(::vtkConeSource::New()));
}



  vtkConeSource::~vtkConeSource() { }





} // end namespace vtkGraphics
