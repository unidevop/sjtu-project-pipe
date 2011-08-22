

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkDepthSortPolyDataDotNet.h"

// native includes
#include "strstream"
#include "vtkDepthSortPolyData.h"
#include "vtkCamera.h"
#include "vtkObject.h"
#include "vtkProp3D.h"

using namespace System;

namespace vtk {

System::String^ vtkDepthSortPolyData::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkDepthSortPolyData>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkDepthSortPolyData::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkDepthSortPolyData>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkDepthSortPolyData^ vtkDepthSortPolyData::NewInstance()
{
  ::vtkDepthSortPolyData* retVal = static_cast<::vtkDepthSortPolyData*>(vtk::ConvertManagedToNative<::vtkDepthSortPolyData>(m_instance)->NewInstance());
  return gcnew vtkDepthSortPolyData(IntPtr(retVal), false);
}



vtkDepthSortPolyData^ vtkDepthSortPolyData::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkDepthSortPolyData* retVal = static_cast<::vtkDepthSortPolyData*>(::vtkDepthSortPolyData::SafeDownCast(oWrap));
  return gcnew vtkDepthSortPolyData(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkDepthSortPolyData::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkDepthSortPolyData>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkDepthSortPolyData::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkDepthSortPolyData>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkDepthSortPolyData::SetDirection(int arg0)
{
  vtk::ConvertManagedToNative<::vtkDepthSortPolyData>(m_instance)->SetDirection(arg0);
}



int vtkDepthSortPolyData::GetDirection()
{
  int retVal = vtk::ConvertManagedToNative<::vtkDepthSortPolyData>(m_instance)->GetDirection();
  return retVal;
}



void vtkDepthSortPolyData::SetDirectionToFrontToBack()
{
  vtk::ConvertManagedToNative<::vtkDepthSortPolyData>(m_instance)->SetDirectionToFrontToBack();
}



void vtkDepthSortPolyData::SetDirectionToBackToFront()
{
  vtk::ConvertManagedToNative<::vtkDepthSortPolyData>(m_instance)->SetDirectionToBackToFront();
}



void vtkDepthSortPolyData::SetDirectionToSpecifiedVector()
{
  vtk::ConvertManagedToNative<::vtkDepthSortPolyData>(m_instance)->SetDirectionToSpecifiedVector();
}



void vtkDepthSortPolyData::SetDepthSortMode(int arg0)
{
  vtk::ConvertManagedToNative<::vtkDepthSortPolyData>(m_instance)->SetDepthSortMode(arg0);
}



int vtkDepthSortPolyData::GetDepthSortMode()
{
  int retVal = vtk::ConvertManagedToNative<::vtkDepthSortPolyData>(m_instance)->GetDepthSortMode();
  return retVal;
}



void vtkDepthSortPolyData::SetDepthSortModeToFirstPoint()
{
  vtk::ConvertManagedToNative<::vtkDepthSortPolyData>(m_instance)->SetDepthSortModeToFirstPoint();
}



void vtkDepthSortPolyData::SetDepthSortModeToBoundsCenter()
{
  vtk::ConvertManagedToNative<::vtkDepthSortPolyData>(m_instance)->SetDepthSortModeToBoundsCenter();
}



void vtkDepthSortPolyData::SetDepthSortModeToParametricCenter()
{
  vtk::ConvertManagedToNative<::vtkDepthSortPolyData>(m_instance)->SetDepthSortModeToParametricCenter();
}



void vtkDepthSortPolyData::SetCamera(vtkCamera^ arg0)
{
  ::vtkCamera* arg0Wrap = vtk::ConvertManagedToNative<::vtkCamera>(arg0->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkDepthSortPolyData>(m_instance)->SetCamera(arg0Wrap);
}



vtkCamera^ vtkDepthSortPolyData::GetCamera()
{
  ::vtkCamera* retVal = static_cast<::vtkCamera*>(vtk::ConvertManagedToNative<::vtkDepthSortPolyData>(m_instance)->GetCamera());
  return gcnew vtkCamera(IntPtr(retVal), false);
}



void vtkDepthSortPolyData::SetProp3D(vtkProp3D^ arg0)
{
  ::vtkProp3D* arg0Wrap = vtk::ConvertManagedToNative<::vtkProp3D>(arg0->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkDepthSortPolyData>(m_instance)->SetProp3D(arg0Wrap);
}



vtkProp3D^ vtkDepthSortPolyData::GetProp3D()
{
  ::vtkProp3D* retVal = static_cast<::vtkProp3D*>(vtk::ConvertManagedToNative<::vtkDepthSortPolyData>(m_instance)->GetProp3D());
  return gcnew vtkProp3D(IntPtr(retVal), false);
}



void vtkDepthSortPolyData::SetVector(double arg0, double arg1, double arg2)
{
  vtk::ConvertManagedToNative<::vtkDepthSortPolyData>(m_instance)->SetVector(arg0, arg1, arg2);
}



void vtkDepthSortPolyData::SetVector(array<double>^ a)
{
  pin_ptr<double> aPin = &a[0];
  double* nativeaPin = aPin;
  vtk::ConvertManagedToNative<::vtkDepthSortPolyData>(m_instance)->SetVector(nativeaPin);
}



array<double>^ vtkDepthSortPolyData::GetVector()
{
  const double* retVal = vtk::ConvertManagedToNative<::vtkDepthSortPolyData>(m_instance)->GetVector();
  array<double>^ mRetVal = gcnew array<double>(3);
  for (size_t cprIdx=0; cprIdx<3; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



void vtkDepthSortPolyData::SetOrigin(double arg0, double arg1, double arg2)
{
  vtk::ConvertManagedToNative<::vtkDepthSortPolyData>(m_instance)->SetOrigin(arg0, arg1, arg2);
}



void vtkDepthSortPolyData::SetOrigin(array<double>^ a)
{
  pin_ptr<double> aPin = &a[0];
  double* nativeaPin = aPin;
  vtk::ConvertManagedToNative<::vtkDepthSortPolyData>(m_instance)->SetOrigin(nativeaPin);
}



array<double>^ vtkDepthSortPolyData::GetOrigin()
{
  const double* retVal = vtk::ConvertManagedToNative<::vtkDepthSortPolyData>(m_instance)->GetOrigin();
  array<double>^ mRetVal = gcnew array<double>(3);
  for (size_t cprIdx=0; cprIdx<3; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



void vtkDepthSortPolyData::SetSortScalars(int arg0)
{
  vtk::ConvertManagedToNative<::vtkDepthSortPolyData>(m_instance)->SetSortScalars(arg0);
}



int vtkDepthSortPolyData::GetSortScalars()
{
  int retVal = vtk::ConvertManagedToNative<::vtkDepthSortPolyData>(m_instance)->GetSortScalars();
  return retVal;
}



void vtkDepthSortPolyData::SortScalarsOn()
{
  vtk::ConvertManagedToNative<::vtkDepthSortPolyData>(m_instance)->SortScalarsOn();
}



void vtkDepthSortPolyData::SortScalarsOff()
{
  vtk::ConvertManagedToNative<::vtkDepthSortPolyData>(m_instance)->SortScalarsOff();
}



unsigned long vtkDepthSortPolyData::GetMTime()
{
  unsigned long retVal = vtk::ConvertManagedToNative<::vtkDepthSortPolyData>(m_instance)->GetMTime();
  return retVal;
}



  vtkDepthSortPolyData::vtkDepthSortPolyData(System::IntPtr native, bool bConst) : vtkPolyDataAlgorithm(native, bConst) {}



  vtkDepthSortPolyData::vtkDepthSortPolyData(bool donothing) : vtkPolyDataAlgorithm(donothing) {}



  vtkDepthSortPolyData::vtkDepthSortPolyData() : vtkPolyDataAlgorithm(false) {
  this->SetNativePointer(IntPtr(::vtkDepthSortPolyData::New()));
}



  vtkDepthSortPolyData::~vtkDepthSortPolyData() { }





} // end namespace vtkHybrid
