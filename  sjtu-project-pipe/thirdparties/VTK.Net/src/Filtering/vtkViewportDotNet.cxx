

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkViewportDotNet.h"
#include "vtkActor2DCollectionDotNet.h"

// native includes
#include "strstream"
#include "vtkViewport.h"
#include "vtkActor2DCollection.h"
#include "vtkAssemblyPath.h"
#include "vtkProp.h"
#include "vtkPropCollection.h"
#include "vtkWindow.h"

using namespace System;

namespace vtk {

System::String^ vtkViewport::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkViewport>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkViewport::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkViewport>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkViewport^ vtkViewport::NewInstance()
{
  ::vtkViewport* retVal = static_cast<::vtkViewport*>(vtk::ConvertManagedToNative<::vtkViewport>(m_instance)->NewInstance());
  return gcnew vtkViewport(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkViewport::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkViewport>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkViewport::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkViewport>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkViewport::AddViewProp(vtkProp^ arg0)
{
  ::vtkProp* arg0Wrap = vtk::ConvertManagedToNative<::vtkProp>(arg0->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkViewport>(m_instance)->AddViewProp(arg0Wrap);
}



vtkPropCollection^ vtkViewport::GetViewProps()
{
  ::vtkPropCollection* retVal = static_cast<::vtkPropCollection*>(vtk::ConvertManagedToNative<::vtkViewport>(m_instance)->GetViewProps());
  return gcnew vtkPropCollection(IntPtr(retVal), false);
}



int vtkViewport::HasViewProp(vtkProp^ arg0)
{
  ::vtkProp* arg0Wrap = vtk::ConvertManagedToNative<::vtkProp>(arg0->GetNativePointer());
  int retVal = vtk::ConvertManagedToNative<::vtkViewport>(m_instance)->HasViewProp(arg0Wrap);
  return retVal;
}



void vtkViewport::RemoveViewProp(vtkProp^ arg0)
{
  ::vtkProp* arg0Wrap = vtk::ConvertManagedToNative<::vtkProp>(arg0->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkViewport>(m_instance)->RemoveViewProp(arg0Wrap);
}



void vtkViewport::RemoveAllViewProps()
{
  vtk::ConvertManagedToNative<::vtkViewport>(m_instance)->RemoveAllViewProps();
}



void vtkViewport::AddActor2D(vtkProp^ p)
{
  ::vtkProp* pWrap = vtk::ConvertManagedToNative<::vtkProp>(p->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkViewport>(m_instance)->AddActor2D(pWrap);
}



void vtkViewport::RemoveActor2D(vtkProp^ p)
{
  ::vtkProp* pWrap = vtk::ConvertManagedToNative<::vtkProp>(p->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkViewport>(m_instance)->RemoveActor2D(pWrap);
}



vtkActor2DCollection^ vtkViewport::GetActors2D()
{
  ::vtkActor2DCollection* retVal = static_cast<::vtkActor2DCollection*>(vtk::ConvertManagedToNative<::vtkViewport>(m_instance)->GetActors2D());
  return gcnew vtkActor2DCollection(IntPtr(retVal), false);
}



void vtkViewport::SetBackground(double arg0, double arg1, double arg2)
{
  vtk::ConvertManagedToNative<::vtkViewport>(m_instance)->SetBackground(arg0, arg1, arg2);
}



void vtkViewport::SetBackground(array<double>^ a)
{
  pin_ptr<double> aPin = &a[0];
  double* nativeaPin = aPin;
  vtk::ConvertManagedToNative<::vtkViewport>(m_instance)->SetBackground(nativeaPin);
}



array<double>^ vtkViewport::GetBackground()
{
  const double* retVal = vtk::ConvertManagedToNative<::vtkViewport>(m_instance)->GetBackground();
  array<double>^ mRetVal = gcnew array<double>(3);
  for (size_t cprIdx=0; cprIdx<3; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



void vtkViewport::SetAspect(double arg0, double arg1)
{
  vtk::ConvertManagedToNative<::vtkViewport>(m_instance)->SetAspect(arg0, arg1);
}



void vtkViewport::SetAspect(array<double>^ a)
{
  pin_ptr<double> aPin = &a[0];
  double* nativeaPin = aPin;
  vtk::ConvertManagedToNative<::vtkViewport>(m_instance)->SetAspect(nativeaPin);
}



array<double>^ vtkViewport::GetAspect()
{
  const double* retVal = vtk::ConvertManagedToNative<::vtkViewport>(m_instance)->GetAspect();
  array<double>^ mRetVal = gcnew array<double>(2);
  for (size_t cprIdx=0; cprIdx<2; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



void vtkViewport::ComputeAspect()
{
  vtk::ConvertManagedToNative<::vtkViewport>(m_instance)->ComputeAspect();
}



void vtkViewport::SetPixelAspect(double arg0, double arg1)
{
  vtk::ConvertManagedToNative<::vtkViewport>(m_instance)->SetPixelAspect(arg0, arg1);
}



void vtkViewport::SetPixelAspect(array<double>^ a)
{
  pin_ptr<double> aPin = &a[0];
  double* nativeaPin = aPin;
  vtk::ConvertManagedToNative<::vtkViewport>(m_instance)->SetPixelAspect(nativeaPin);
}



array<double>^ vtkViewport::GetPixelAspect()
{
  const double* retVal = vtk::ConvertManagedToNative<::vtkViewport>(m_instance)->GetPixelAspect();
  array<double>^ mRetVal = gcnew array<double>(2);
  for (size_t cprIdx=0; cprIdx<2; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



void vtkViewport::SetViewport(double arg0, double arg1, double arg2, double arg3)
{
  vtk::ConvertManagedToNative<::vtkViewport>(m_instance)->SetViewport(arg0, arg1, arg2, arg3);
}



void vtkViewport::SetViewport(array<double>^ a)
{
  pin_ptr<double> aPin = &a[0];
  double* nativeaPin = aPin;
  vtk::ConvertManagedToNative<::vtkViewport>(m_instance)->SetViewport(nativeaPin);
}



array<double>^ vtkViewport::GetViewport()
{
  const double* retVal = vtk::ConvertManagedToNative<::vtkViewport>(m_instance)->GetViewport();
  array<double>^ mRetVal = gcnew array<double>(4);
  for (size_t cprIdx=0; cprIdx<4; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



void vtkViewport::SetDisplayPoint(double arg0, double arg1, double arg2)
{
  vtk::ConvertManagedToNative<::vtkViewport>(m_instance)->SetDisplayPoint(arg0, arg1, arg2);
}



void vtkViewport::SetDisplayPoint(array<double>^ a)
{
  pin_ptr<double> aPin = &a[0];
  double* nativeaPin = aPin;
  vtk::ConvertManagedToNative<::vtkViewport>(m_instance)->SetDisplayPoint(nativeaPin);
}



array<double>^ vtkViewport::GetDisplayPoint()
{
  const double* retVal = vtk::ConvertManagedToNative<::vtkViewport>(m_instance)->GetDisplayPoint();
  array<double>^ mRetVal = gcnew array<double>(3);
  for (size_t cprIdx=0; cprIdx<3; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



void vtkViewport::SetViewPoint(double arg0, double arg1, double arg2)
{
  vtk::ConvertManagedToNative<::vtkViewport>(m_instance)->SetViewPoint(arg0, arg1, arg2);
}



void vtkViewport::SetViewPoint(array<double>^ a)
{
  pin_ptr<double> aPin = &a[0];
  double* nativeaPin = aPin;
  vtk::ConvertManagedToNative<::vtkViewport>(m_instance)->SetViewPoint(nativeaPin);
}



array<double>^ vtkViewport::GetViewPoint()
{
  const double* retVal = vtk::ConvertManagedToNative<::vtkViewport>(m_instance)->GetViewPoint();
  array<double>^ mRetVal = gcnew array<double>(3);
  for (size_t cprIdx=0; cprIdx<3; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



void vtkViewport::SetWorldPoint(double arg0, double arg1, double arg2, double arg3)
{
  vtk::ConvertManagedToNative<::vtkViewport>(m_instance)->SetWorldPoint(arg0, arg1, arg2, arg3);
}



void vtkViewport::SetWorldPoint(array<double>^ a)
{
  pin_ptr<double> aPin = &a[0];
  double* nativeaPin = aPin;
  vtk::ConvertManagedToNative<::vtkViewport>(m_instance)->SetWorldPoint(nativeaPin);
}



array<double>^ vtkViewport::GetWorldPoint()
{
  const double* retVal = vtk::ConvertManagedToNative<::vtkViewport>(m_instance)->GetWorldPoint();
  array<double>^ mRetVal = gcnew array<double>(4);
  for (size_t cprIdx=0; cprIdx<4; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



array<double>^ vtkViewport::GetCenter()
{
  const double* retVal = vtk::ConvertManagedToNative<::vtkViewport>(m_instance)->GetCenter();
  array<double>^ mRetVal = gcnew array<double>(2);
  for (size_t cprIdx=0; cprIdx<2; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



int vtkViewport::IsInViewport(int x, int y)
{
  int retVal = vtk::ConvertManagedToNative<::vtkViewport>(m_instance)->IsInViewport(x, y);
  return retVal;
}



vtkWindow^ vtkViewport::GetVTKWindow()
{
  ::vtkWindow* retVal = static_cast<::vtkWindow*>(vtk::ConvertManagedToNative<::vtkViewport>(m_instance)->GetVTKWindow());
  return gcnew vtkWindow(IntPtr(retVal), false);
}



void vtkViewport::DisplayToView()
{
  vtk::ConvertManagedToNative<::vtkViewport>(m_instance)->DisplayToView();
}



void vtkViewport::ViewToDisplay()
{
  vtk::ConvertManagedToNative<::vtkViewport>(m_instance)->ViewToDisplay();
}



void vtkViewport::WorldToView()
{
  vtk::ConvertManagedToNative<::vtkViewport>(m_instance)->WorldToView();
}



void vtkViewport::ViewToWorld()
{
  vtk::ConvertManagedToNative<::vtkViewport>(m_instance)->ViewToWorld();
}



void vtkViewport::DisplayToWorld()
{
  vtk::ConvertManagedToNative<::vtkViewport>(m_instance)->DisplayToWorld();
}



void vtkViewport::WorldToDisplay()
{
  vtk::ConvertManagedToNative<::vtkViewport>(m_instance)->WorldToDisplay();
}



void vtkViewport::LocalDisplayToDisplay(double% x, double% y)
{
  pin_ptr<double> xPin = &x;
  pin_ptr<double> yPin = &y;
  vtk::ConvertManagedToNative<::vtkViewport>(m_instance)->LocalDisplayToDisplay(*xPin, *yPin);
}



void vtkViewport::DisplayToNormalizedDisplay(double% u, double% v)
{
  pin_ptr<double> uPin = &u;
  pin_ptr<double> vPin = &v;
  vtk::ConvertManagedToNative<::vtkViewport>(m_instance)->DisplayToNormalizedDisplay(*uPin, *vPin);
}



void vtkViewport::NormalizedDisplayToViewport(double% x, double% y)
{
  pin_ptr<double> xPin = &x;
  pin_ptr<double> yPin = &y;
  vtk::ConvertManagedToNative<::vtkViewport>(m_instance)->NormalizedDisplayToViewport(*xPin, *yPin);
}



void vtkViewport::ViewportToNormalizedViewport(double% u, double% v)
{
  pin_ptr<double> uPin = &u;
  pin_ptr<double> vPin = &v;
  vtk::ConvertManagedToNative<::vtkViewport>(m_instance)->ViewportToNormalizedViewport(*uPin, *vPin);
}



void vtkViewport::NormalizedViewportToView(double% x, double% y, double% z)
{
  pin_ptr<double> xPin = &x;
  pin_ptr<double> yPin = &y;
  pin_ptr<double> zPin = &z;
  vtk::ConvertManagedToNative<::vtkViewport>(m_instance)->NormalizedViewportToView(*xPin, *yPin, *zPin);
}



void vtkViewport::ViewToWorld(double% arg0, double% arg1, double% arg2)
{
  pin_ptr<double> arg0Pin = &arg0;
  pin_ptr<double> arg1Pin = &arg1;
  pin_ptr<double> arg2Pin = &arg2;
  vtk::ConvertManagedToNative<::vtkViewport>(m_instance)->ViewToWorld(*arg0Pin, *arg1Pin, *arg2Pin);
}



void vtkViewport::DisplayToLocalDisplay(double% x, double% y)
{
  pin_ptr<double> xPin = &x;
  pin_ptr<double> yPin = &y;
  vtk::ConvertManagedToNative<::vtkViewport>(m_instance)->DisplayToLocalDisplay(*xPin, *yPin);
}



void vtkViewport::NormalizedDisplayToDisplay(double% u, double% v)
{
  pin_ptr<double> uPin = &u;
  pin_ptr<double> vPin = &v;
  vtk::ConvertManagedToNative<::vtkViewport>(m_instance)->NormalizedDisplayToDisplay(*uPin, *vPin);
}



void vtkViewport::ViewportToNormalizedDisplay(double% x, double% y)
{
  pin_ptr<double> xPin = &x;
  pin_ptr<double> yPin = &y;
  vtk::ConvertManagedToNative<::vtkViewport>(m_instance)->ViewportToNormalizedDisplay(*xPin, *yPin);
}



void vtkViewport::NormalizedViewportToViewport(double% u, double% v)
{
  pin_ptr<double> uPin = &u;
  pin_ptr<double> vPin = &v;
  vtk::ConvertManagedToNative<::vtkViewport>(m_instance)->NormalizedViewportToViewport(*uPin, *vPin);
}



void vtkViewport::ViewToNormalizedViewport(double% x, double% y, double% z)
{
  pin_ptr<double> xPin = &x;
  pin_ptr<double> yPin = &y;
  pin_ptr<double> zPin = &z;
  vtk::ConvertManagedToNative<::vtkViewport>(m_instance)->ViewToNormalizedViewport(*xPin, *yPin, *zPin);
}



void vtkViewport::WorldToView(double% arg0, double% arg1, double% arg2)
{
  pin_ptr<double> arg0Pin = &arg0;
  pin_ptr<double> arg1Pin = &arg1;
  pin_ptr<double> arg2Pin = &arg2;
  vtk::ConvertManagedToNative<::vtkViewport>(m_instance)->WorldToView(*arg0Pin, *arg1Pin, *arg2Pin);
}



array<int>^ vtkViewport::GetSize()
{
  const int* retVal = vtk::ConvertManagedToNative<::vtkViewport>(m_instance)->GetSize();
  array<int>^ mRetVal = gcnew array<int>(2);
  for (size_t cprIdx=0; cprIdx<2; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



array<int>^ vtkViewport::GetOrigin()
{
  const int* retVal = vtk::ConvertManagedToNative<::vtkViewport>(m_instance)->GetOrigin();
  array<int>^ mRetVal = gcnew array<int>(2);
  for (size_t cprIdx=0; cprIdx<2; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



void vtkViewport::GetTiledSize(array<int>^ width, array<int>^ height)
{
  pin_ptr<int> widthPin = &width[0];
  int* nativewidthPin = widthPin;
  pin_ptr<int> heightPin = &height[0];
  int* nativeheightPin = heightPin;
  vtk::ConvertManagedToNative<::vtkViewport>(m_instance)->GetTiledSize(nativewidthPin, nativeheightPin);
}



void vtkViewport::GetTiledSizeAndOrigin(array<int>^ width, array<int>^ height, array<int>^ lowerLeftX, array<int>^ lowerLeftY)
{
  pin_ptr<int> widthPin = &width[0];
  int* nativewidthPin = widthPin;
  pin_ptr<int> heightPin = &height[0];
  int* nativeheightPin = heightPin;
  pin_ptr<int> lowerLeftXPin = &lowerLeftX[0];
  int* nativelowerLeftXPin = lowerLeftXPin;
  pin_ptr<int> lowerLeftYPin = &lowerLeftY[0];
  int* nativelowerLeftYPin = lowerLeftYPin;
  vtk::ConvertManagedToNative<::vtkViewport>(m_instance)->GetTiledSizeAndOrigin(nativewidthPin, nativeheightPin, nativelowerLeftXPin, nativelowerLeftYPin);
}



vtkAssemblyPath^ vtkViewport::PickProp(double selectionX, double selectionY)
{
  ::vtkAssemblyPath* retVal = static_cast<::vtkAssemblyPath*>(vtk::ConvertManagedToNative<::vtkViewport>(m_instance)->PickProp(selectionX, selectionY));
  return gcnew vtkAssemblyPath(IntPtr(retVal), false);
}



vtkAssemblyPath^ vtkViewport::PickPropFrom(double selectionX, double selectionY, vtkPropCollection^ arg2)
{
  ::vtkPropCollection* arg2Wrap = vtk::ConvertManagedToNative<::vtkPropCollection>(arg2->GetNativePointer());
  ::vtkAssemblyPath* retVal = static_cast<::vtkAssemblyPath*>(vtk::ConvertManagedToNative<::vtkViewport>(m_instance)->PickPropFrom(selectionX, selectionY, arg2Wrap));
  return gcnew vtkAssemblyPath(IntPtr(retVal), false);
}



double vtkViewport::GetPickX()
{
  double retVal = vtk::ConvertManagedToNative<::vtkViewport>(m_instance)->GetPickX();
  return retVal;
}



double vtkViewport::GetPickY()
{
  double retVal = vtk::ConvertManagedToNative<::vtkViewport>(m_instance)->GetPickY();
  return retVal;
}



int vtkViewport::GetIsPicking()
{
  int retVal = vtk::ConvertManagedToNative<::vtkViewport>(m_instance)->GetIsPicking();
  return retVal;
}



double vtkViewport::GetPickedZ()
{
  double retVal = vtk::ConvertManagedToNative<::vtkViewport>(m_instance)->GetPickedZ();
  return retVal;
}



void vtkViewport::RemoveProp(vtkProp^ arg0)
{
  ::vtkProp* arg0Wrap = vtk::ConvertManagedToNative<::vtkProp>(arg0->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkViewport>(m_instance)->RemoveProp(arg0Wrap);
}



void vtkViewport::AddProp(vtkProp^ arg0)
{
  ::vtkProp* arg0Wrap = vtk::ConvertManagedToNative<::vtkProp>(arg0->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkViewport>(m_instance)->AddProp(arg0Wrap);
}



vtkPropCollection^ vtkViewport::GetProps()
{
  ::vtkPropCollection* retVal = static_cast<::vtkPropCollection*>(vtk::ConvertManagedToNative<::vtkViewport>(m_instance)->GetProps());
  return gcnew vtkPropCollection(IntPtr(retVal), false);
}



int vtkViewport::HasProp(vtkProp^ arg0)
{
  ::vtkProp* arg0Wrap = vtk::ConvertManagedToNative<::vtkProp>(arg0->GetNativePointer());
  int retVal = vtk::ConvertManagedToNative<::vtkViewport>(m_instance)->HasProp(arg0Wrap);
  return retVal;
}



void vtkViewport::RemoveAllProps()
{
  vtk::ConvertManagedToNative<::vtkViewport>(m_instance)->RemoveAllProps();
}



  vtkViewport::vtkViewport(System::IntPtr native, bool bConst) : vtkObject(native, bConst) {}



  vtkViewport::vtkViewport(bool donothing) : vtkObject(donothing) {}



  vtkViewport::vtkViewport() : vtkObject(false) {
  this->SetNativePointer(IntPtr(::vtkViewport::New()));
}



  vtkViewport::~vtkViewport() { }





} // end namespace vtkFiltering
