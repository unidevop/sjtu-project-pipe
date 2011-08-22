

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkCoordinateDotNet.h"
#include "vtkViewportDotNet.h"

// native includes
#include "strstream"
#include "vtkCoordinate.h"
#include "vtkViewport.h"

using namespace System;

namespace vtk {

System::String^ vtkCoordinate::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkCoordinate>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkCoordinate::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkCoordinate>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkCoordinate^ vtkCoordinate::NewInstance()
{
  ::vtkCoordinate* retVal = static_cast<::vtkCoordinate*>(vtk::ConvertManagedToNative<::vtkCoordinate>(m_instance)->NewInstance());
  return gcnew vtkCoordinate(IntPtr(retVal), false);
}



vtkCoordinate^ vtkCoordinate::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkCoordinate* retVal = static_cast<::vtkCoordinate*>(::vtkCoordinate::SafeDownCast(oWrap));
  return gcnew vtkCoordinate(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkCoordinate::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkCoordinate>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkCoordinate::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkCoordinate>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkCoordinate::SetCoordinateSystem(int arg0)
{
  vtk::ConvertManagedToNative<::vtkCoordinate>(m_instance)->SetCoordinateSystem(arg0);
}



int vtkCoordinate::GetCoordinateSystem()
{
  int retVal = vtk::ConvertManagedToNative<::vtkCoordinate>(m_instance)->GetCoordinateSystem();
  return retVal;
}



void vtkCoordinate::SetCoordinateSystemToDisplay()
{
  vtk::ConvertManagedToNative<::vtkCoordinate>(m_instance)->SetCoordinateSystemToDisplay();
}



void vtkCoordinate::SetCoordinateSystemToNormalizedDisplay()
{
  vtk::ConvertManagedToNative<::vtkCoordinate>(m_instance)->SetCoordinateSystemToNormalizedDisplay();
}



void vtkCoordinate::SetCoordinateSystemToViewport()
{
  vtk::ConvertManagedToNative<::vtkCoordinate>(m_instance)->SetCoordinateSystemToViewport();
}



void vtkCoordinate::SetCoordinateSystemToNormalizedViewport()
{
  vtk::ConvertManagedToNative<::vtkCoordinate>(m_instance)->SetCoordinateSystemToNormalizedViewport();
}



void vtkCoordinate::SetCoordinateSystemToView()
{
  vtk::ConvertManagedToNative<::vtkCoordinate>(m_instance)->SetCoordinateSystemToView();
}



void vtkCoordinate::SetCoordinateSystemToWorld()
{
  vtk::ConvertManagedToNative<::vtkCoordinate>(m_instance)->SetCoordinateSystemToWorld();
}



System::String^ vtkCoordinate::GetCoordinateSystemAsString()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkCoordinate>(m_instance)->GetCoordinateSystemAsString();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



void vtkCoordinate::SetValue(double arg0, double arg1, double arg2)
{
  vtk::ConvertManagedToNative<::vtkCoordinate>(m_instance)->SetValue(arg0, arg1, arg2);
}



void vtkCoordinate::SetValue(array<double>^ a)
{
  pin_ptr<double> aPin = &a[0];
  double* nativeaPin = aPin;
  vtk::ConvertManagedToNative<::vtkCoordinate>(m_instance)->SetValue(nativeaPin);
}



array<double>^ vtkCoordinate::GetValue()
{
  const double* retVal = vtk::ConvertManagedToNative<::vtkCoordinate>(m_instance)->GetValue();
  array<double>^ mRetVal = gcnew array<double>(3);
  for (size_t cprIdx=0; cprIdx<3; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



void vtkCoordinate::SetValue(double a, double b)
{
  vtk::ConvertManagedToNative<::vtkCoordinate>(m_instance)->SetValue(a, b);
}



void vtkCoordinate::SetReferenceCoordinate(vtkCoordinate^ arg0)
{
  ::vtkCoordinate* arg0Wrap = vtk::ConvertManagedToNative<::vtkCoordinate>(arg0->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkCoordinate>(m_instance)->SetReferenceCoordinate(arg0Wrap);
}



vtkCoordinate^ vtkCoordinate::GetReferenceCoordinate()
{
  ::vtkCoordinate* retVal = static_cast<::vtkCoordinate*>(vtk::ConvertManagedToNative<::vtkCoordinate>(m_instance)->GetReferenceCoordinate());
  return gcnew vtkCoordinate(IntPtr(retVal), false);
}



void vtkCoordinate::SetViewport(vtkViewport^ viewport)
{
  ::vtkViewport* viewportWrap = vtk::ConvertManagedToNative<::vtkViewport>(viewport->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkCoordinate>(m_instance)->SetViewport(viewportWrap);
}



vtkViewport^ vtkCoordinate::GetViewport()
{
  ::vtkViewport* retVal = static_cast<::vtkViewport*>(vtk::ConvertManagedToNative<::vtkCoordinate>(m_instance)->GetViewport());
  return gcnew vtkViewport(IntPtr(retVal), false);
}



array<double>^ vtkCoordinate::GetComputedWorldValue(vtkViewport^ arg0)
{
  ::vtkViewport* arg0Wrap = vtk::ConvertManagedToNative<::vtkViewport>(arg0->GetNativePointer());
  const double* retVal = vtk::ConvertManagedToNative<::vtkCoordinate>(m_instance)->GetComputedWorldValue(arg0Wrap);
  array<double>^ mRetVal = gcnew array<double>(3);
  for (size_t cprIdx=0; cprIdx<3; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



array<int>^ vtkCoordinate::GetComputedViewportValue(vtkViewport^ arg0)
{
  ::vtkViewport* arg0Wrap = vtk::ConvertManagedToNative<::vtkViewport>(arg0->GetNativePointer());
  const int* retVal = vtk::ConvertManagedToNative<::vtkCoordinate>(m_instance)->GetComputedViewportValue(arg0Wrap);
  array<int>^ mRetVal = gcnew array<int>(2);
  for (size_t cprIdx=0; cprIdx<2; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



array<int>^ vtkCoordinate::GetComputedDisplayValue(vtkViewport^ arg0)
{
  ::vtkViewport* arg0Wrap = vtk::ConvertManagedToNative<::vtkViewport>(arg0->GetNativePointer());
  const int* retVal = vtk::ConvertManagedToNative<::vtkCoordinate>(m_instance)->GetComputedDisplayValue(arg0Wrap);
  array<int>^ mRetVal = gcnew array<int>(2);
  for (size_t cprIdx=0; cprIdx<2; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



array<int>^ vtkCoordinate::GetComputedLocalDisplayValue(vtkViewport^ arg0)
{
  ::vtkViewport* arg0Wrap = vtk::ConvertManagedToNative<::vtkViewport>(arg0->GetNativePointer());
  const int* retVal = vtk::ConvertManagedToNative<::vtkCoordinate>(m_instance)->GetComputedLocalDisplayValue(arg0Wrap);
  array<int>^ mRetVal = gcnew array<int>(2);
  for (size_t cprIdx=0; cprIdx<2; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



array<double>^ vtkCoordinate::GetComputedDoubleViewportValue(vtkViewport^ arg0)
{
  ::vtkViewport* arg0Wrap = vtk::ConvertManagedToNative<::vtkViewport>(arg0->GetNativePointer());
  const double* retVal = vtk::ConvertManagedToNative<::vtkCoordinate>(m_instance)->GetComputedDoubleViewportValue(arg0Wrap);
  array<double>^ mRetVal = gcnew array<double>(2);
  for (size_t cprIdx=0; cprIdx<2; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



array<double>^ vtkCoordinate::GetComputedDoubleDisplayValue(vtkViewport^ arg0)
{
  ::vtkViewport* arg0Wrap = vtk::ConvertManagedToNative<::vtkViewport>(arg0->GetNativePointer());
  const double* retVal = vtk::ConvertManagedToNative<::vtkCoordinate>(m_instance)->GetComputedDoubleDisplayValue(arg0Wrap);
  array<double>^ mRetVal = gcnew array<double>(2);
  for (size_t cprIdx=0; cprIdx<2; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



  vtkCoordinate::vtkCoordinate(System::IntPtr native, bool bConst) : vtkObject(native, bConst) {}



  vtkCoordinate::vtkCoordinate(bool donothing) : vtkObject(donothing) {}



  vtkCoordinate::vtkCoordinate() : vtkObject(false) {
  this->SetNativePointer(IntPtr(::vtkCoordinate::New()));
}



  vtkCoordinate::~vtkCoordinate() { }





} // end namespace vtkFiltering
