

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkCubeAxesActor2DDotNet.h"

// native includes
#include "strstream"
#include "vtkCubeAxesActor2D.h"
#include "vtkAxisActor2D.h"
#include "vtkCamera.h"
#include "vtkDataSet.h"
#include "vtkObject.h"
#include "vtkProp.h"
#include "vtkTextProperty.h"
#include "vtkViewport.h"
#include "vtkWindow.h"

using namespace System;

namespace vtk {

System::String^ vtkCubeAxesActor2D::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkCubeAxesActor2D>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkCubeAxesActor2D::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkCubeAxesActor2D>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkCubeAxesActor2D^ vtkCubeAxesActor2D::NewInstance()
{
  ::vtkCubeAxesActor2D* retVal = static_cast<::vtkCubeAxesActor2D*>(vtk::ConvertManagedToNative<::vtkCubeAxesActor2D>(m_instance)->NewInstance());
  return gcnew vtkCubeAxesActor2D(IntPtr(retVal), false);
}



vtkCubeAxesActor2D^ vtkCubeAxesActor2D::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkCubeAxesActor2D* retVal = static_cast<::vtkCubeAxesActor2D*>(::vtkCubeAxesActor2D::SafeDownCast(oWrap));
  return gcnew vtkCubeAxesActor2D(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkCubeAxesActor2D::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkCubeAxesActor2D>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkCubeAxesActor2D::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkCubeAxesActor2D>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




int vtkCubeAxesActor2D::RenderOverlay(vtkViewport^ arg0)
{
  ::vtkViewport* arg0Wrap = vtk::ConvertManagedToNative<::vtkViewport>(arg0->GetNativePointer());
  int retVal = vtk::ConvertManagedToNative<::vtkCubeAxesActor2D>(m_instance)->RenderOverlay(arg0Wrap);
  return retVal;
}



int vtkCubeAxesActor2D::RenderOpaqueGeometry(vtkViewport^ arg0)
{
  ::vtkViewport* arg0Wrap = vtk::ConvertManagedToNative<::vtkViewport>(arg0->GetNativePointer());
  int retVal = vtk::ConvertManagedToNative<::vtkCubeAxesActor2D>(m_instance)->RenderOpaqueGeometry(arg0Wrap);
  return retVal;
}



int vtkCubeAxesActor2D::RenderTranslucentGeometry(vtkViewport^ arg0)
{
  ::vtkViewport* arg0Wrap = vtk::ConvertManagedToNative<::vtkViewport>(arg0->GetNativePointer());
  int retVal = vtk::ConvertManagedToNative<::vtkCubeAxesActor2D>(m_instance)->RenderTranslucentGeometry(arg0Wrap);
  return retVal;
}



void vtkCubeAxesActor2D::SetInput(vtkDataSet^ arg0)
{
  ::vtkDataSet* arg0Wrap = vtk::ConvertManagedToNative<::vtkDataSet>(arg0->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkCubeAxesActor2D>(m_instance)->SetInput(arg0Wrap);
}



vtkDataSet^ vtkCubeAxesActor2D::GetInput()
{
  ::vtkDataSet* retVal = static_cast<::vtkDataSet*>(vtk::ConvertManagedToNative<::vtkCubeAxesActor2D>(m_instance)->GetInput());
  return gcnew vtkDataSet(IntPtr(retVal), false);
}



void vtkCubeAxesActor2D::SetViewProp(vtkProp^ prop)
{
  ::vtkProp* propWrap = vtk::ConvertManagedToNative<::vtkProp>(prop->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkCubeAxesActor2D>(m_instance)->SetViewProp(propWrap);
}



vtkProp^ vtkCubeAxesActor2D::GetViewProp()
{
  ::vtkProp* retVal = static_cast<::vtkProp*>(vtk::ConvertManagedToNative<::vtkCubeAxesActor2D>(m_instance)->GetViewProp());
  return gcnew vtkProp(IntPtr(retVal), false);
}



void vtkCubeAxesActor2D::SetBounds(double arg0, double arg1, double arg2, double arg3, double arg4, double arg5)
{
  vtk::ConvertManagedToNative<::vtkCubeAxesActor2D>(m_instance)->SetBounds(arg0, arg1, arg2, arg3, arg4, arg5);
}



void vtkCubeAxesActor2D::SetBounds(array<double>^ a)
{
  pin_ptr<double> aPin = &a[0];
  double* nativeaPin = aPin;
  vtk::ConvertManagedToNative<::vtkCubeAxesActor2D>(m_instance)->SetBounds(nativeaPin);
}



array<double>^ vtkCubeAxesActor2D::GetBounds()
{
  const double* retVal = vtk::ConvertManagedToNative<::vtkCubeAxesActor2D>(m_instance)->GetBounds();
  array<double>^ mRetVal = gcnew array<double>(6);
  for (size_t cprIdx=0; cprIdx<6; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



void vtkCubeAxesActor2D::GetBounds(double% xmin, double% xmax, double% ymin, double% ymax, double% zmin, double% zmax)
{
  pin_ptr<double> xminPin = &xmin;
  pin_ptr<double> xmaxPin = &xmax;
  pin_ptr<double> yminPin = &ymin;
  pin_ptr<double> ymaxPin = &ymax;
  pin_ptr<double> zminPin = &zmin;
  pin_ptr<double> zmaxPin = &zmax;
  vtk::ConvertManagedToNative<::vtkCubeAxesActor2D>(m_instance)->GetBounds(*xminPin, *xmaxPin, *yminPin, *ymaxPin, *zminPin, *zmaxPin);
}



void vtkCubeAxesActor2D::GetBounds(array<double>^ bounds)
{
  pin_ptr<double> boundsPin = &bounds[0];
  double* nativeboundsPin = boundsPin;
  vtk::ConvertManagedToNative<::vtkCubeAxesActor2D>(m_instance)->GetBounds(nativeboundsPin);
}



void vtkCubeAxesActor2D::SetRanges(double arg0, double arg1, double arg2, double arg3, double arg4, double arg5)
{
  vtk::ConvertManagedToNative<::vtkCubeAxesActor2D>(m_instance)->SetRanges(arg0, arg1, arg2, arg3, arg4, arg5);
}



void vtkCubeAxesActor2D::SetRanges(array<double>^ a)
{
  pin_ptr<double> aPin = &a[0];
  double* nativeaPin = aPin;
  vtk::ConvertManagedToNative<::vtkCubeAxesActor2D>(m_instance)->SetRanges(nativeaPin);
}



array<double>^ vtkCubeAxesActor2D::GetRanges()
{
  const double* retVal = vtk::ConvertManagedToNative<::vtkCubeAxesActor2D>(m_instance)->GetRanges();
  array<double>^ mRetVal = gcnew array<double>(6);
  for (size_t cprIdx=0; cprIdx<6; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



void vtkCubeAxesActor2D::GetRanges(double% xmin, double% xmax, double% ymin, double% ymax, double% zmin, double% zmax)
{
  pin_ptr<double> xminPin = &xmin;
  pin_ptr<double> xmaxPin = &xmax;
  pin_ptr<double> yminPin = &ymin;
  pin_ptr<double> ymaxPin = &ymax;
  pin_ptr<double> zminPin = &zmin;
  pin_ptr<double> zmaxPin = &zmax;
  vtk::ConvertManagedToNative<::vtkCubeAxesActor2D>(m_instance)->GetRanges(*xminPin, *xmaxPin, *yminPin, *ymaxPin, *zminPin, *zmaxPin);
}



void vtkCubeAxesActor2D::GetRanges(array<double>^ ranges)
{
  pin_ptr<double> rangesPin = &ranges[0];
  double* nativerangesPin = rangesPin;
  vtk::ConvertManagedToNative<::vtkCubeAxesActor2D>(m_instance)->GetRanges(nativerangesPin);
}



void vtkCubeAxesActor2D::SetUseRanges(int arg0)
{
  vtk::ConvertManagedToNative<::vtkCubeAxesActor2D>(m_instance)->SetUseRanges(arg0);
}



int vtkCubeAxesActor2D::GetUseRanges()
{
  int retVal = vtk::ConvertManagedToNative<::vtkCubeAxesActor2D>(m_instance)->GetUseRanges();
  return retVal;
}



void vtkCubeAxesActor2D::UseRangesOn()
{
  vtk::ConvertManagedToNative<::vtkCubeAxesActor2D>(m_instance)->UseRangesOn();
}



void vtkCubeAxesActor2D::UseRangesOff()
{
  vtk::ConvertManagedToNative<::vtkCubeAxesActor2D>(m_instance)->UseRangesOff();
}



void vtkCubeAxesActor2D::SetCamera(vtkCamera^ arg0)
{
  ::vtkCamera* arg0Wrap = vtk::ConvertManagedToNative<::vtkCamera>(arg0->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkCubeAxesActor2D>(m_instance)->SetCamera(arg0Wrap);
}



vtkCamera^ vtkCubeAxesActor2D::GetCamera()
{
  ::vtkCamera* retVal = static_cast<::vtkCamera*>(vtk::ConvertManagedToNative<::vtkCubeAxesActor2D>(m_instance)->GetCamera());
  return gcnew vtkCamera(IntPtr(retVal), false);
}



void vtkCubeAxesActor2D::SetFlyMode(int arg0)
{
  vtk::ConvertManagedToNative<::vtkCubeAxesActor2D>(m_instance)->SetFlyMode(arg0);
}



int vtkCubeAxesActor2D::GetFlyModeMinValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkCubeAxesActor2D>(m_instance)->GetFlyModeMinValue();
  return retVal;
}



int vtkCubeAxesActor2D::GetFlyModeMaxValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkCubeAxesActor2D>(m_instance)->GetFlyModeMaxValue();
  return retVal;
}



int vtkCubeAxesActor2D::GetFlyMode()
{
  int retVal = vtk::ConvertManagedToNative<::vtkCubeAxesActor2D>(m_instance)->GetFlyMode();
  return retVal;
}



void vtkCubeAxesActor2D::SetFlyModeToOuterEdges()
{
  vtk::ConvertManagedToNative<::vtkCubeAxesActor2D>(m_instance)->SetFlyModeToOuterEdges();
}



void vtkCubeAxesActor2D::SetFlyModeToClosestTriad()
{
  vtk::ConvertManagedToNative<::vtkCubeAxesActor2D>(m_instance)->SetFlyModeToClosestTriad();
}



void vtkCubeAxesActor2D::SetScaling(int arg0)
{
  vtk::ConvertManagedToNative<::vtkCubeAxesActor2D>(m_instance)->SetScaling(arg0);
}



int vtkCubeAxesActor2D::GetScaling()
{
  int retVal = vtk::ConvertManagedToNative<::vtkCubeAxesActor2D>(m_instance)->GetScaling();
  return retVal;
}



void vtkCubeAxesActor2D::ScalingOn()
{
  vtk::ConvertManagedToNative<::vtkCubeAxesActor2D>(m_instance)->ScalingOn();
}



void vtkCubeAxesActor2D::ScalingOff()
{
  vtk::ConvertManagedToNative<::vtkCubeAxesActor2D>(m_instance)->ScalingOff();
}



void vtkCubeAxesActor2D::SetNumberOfLabels(int arg0)
{
  vtk::ConvertManagedToNative<::vtkCubeAxesActor2D>(m_instance)->SetNumberOfLabels(arg0);
}



int vtkCubeAxesActor2D::GetNumberOfLabelsMinValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkCubeAxesActor2D>(m_instance)->GetNumberOfLabelsMinValue();
  return retVal;
}



int vtkCubeAxesActor2D::GetNumberOfLabelsMaxValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkCubeAxesActor2D>(m_instance)->GetNumberOfLabelsMaxValue();
  return retVal;
}



int vtkCubeAxesActor2D::GetNumberOfLabels()
{
  int retVal = vtk::ConvertManagedToNative<::vtkCubeAxesActor2D>(m_instance)->GetNumberOfLabels();
  return retVal;
}



void vtkCubeAxesActor2D::SetXLabel(System::String^ arg0)
{
  char* arg0Wrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(arg0).ToPointer());
  vtk::ConvertManagedToNative<::vtkCubeAxesActor2D>(m_instance)->SetXLabel(arg0Wrap);
  arg0->Remove(0,arg0->Length);
  arg0->Insert(0,System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(arg0Wrap)));
System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(arg0Wrap));
}



System::String^ vtkCubeAxesActor2D::GetXLabel()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkCubeAxesActor2D>(m_instance)->GetXLabel();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



void vtkCubeAxesActor2D::SetYLabel(System::String^ arg0)
{
  char* arg0Wrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(arg0).ToPointer());
  vtk::ConvertManagedToNative<::vtkCubeAxesActor2D>(m_instance)->SetYLabel(arg0Wrap);
  arg0->Remove(0,arg0->Length);
  arg0->Insert(0,System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(arg0Wrap)));
System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(arg0Wrap));
}



System::String^ vtkCubeAxesActor2D::GetYLabel()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkCubeAxesActor2D>(m_instance)->GetYLabel();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



void vtkCubeAxesActor2D::SetZLabel(System::String^ arg0)
{
  char* arg0Wrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(arg0).ToPointer());
  vtk::ConvertManagedToNative<::vtkCubeAxesActor2D>(m_instance)->SetZLabel(arg0Wrap);
  arg0->Remove(0,arg0->Length);
  arg0->Insert(0,System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(arg0Wrap)));
System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(arg0Wrap));
}



System::String^ vtkCubeAxesActor2D::GetZLabel()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkCubeAxesActor2D>(m_instance)->GetZLabel();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



vtkAxisActor2D^ vtkCubeAxesActor2D::GetXAxisActor2D()
{
  ::vtkAxisActor2D* retVal = static_cast<::vtkAxisActor2D*>(vtk::ConvertManagedToNative<::vtkCubeAxesActor2D>(m_instance)->GetXAxisActor2D());
  return gcnew vtkAxisActor2D(IntPtr(retVal), false);
}



vtkAxisActor2D^ vtkCubeAxesActor2D::GetYAxisActor2D()
{
  ::vtkAxisActor2D* retVal = static_cast<::vtkAxisActor2D*>(vtk::ConvertManagedToNative<::vtkCubeAxesActor2D>(m_instance)->GetYAxisActor2D());
  return gcnew vtkAxisActor2D(IntPtr(retVal), false);
}



vtkAxisActor2D^ vtkCubeAxesActor2D::GetZAxisActor2D()
{
  ::vtkAxisActor2D* retVal = static_cast<::vtkAxisActor2D*>(vtk::ConvertManagedToNative<::vtkCubeAxesActor2D>(m_instance)->GetZAxisActor2D());
  return gcnew vtkAxisActor2D(IntPtr(retVal), false);
}



void vtkCubeAxesActor2D::SetAxisTitleTextProperty(vtkTextProperty^ p)
{
  ::vtkTextProperty* pWrap = vtk::ConvertManagedToNative<::vtkTextProperty>(p->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkCubeAxesActor2D>(m_instance)->SetAxisTitleTextProperty(pWrap);
}



vtkTextProperty^ vtkCubeAxesActor2D::GetAxisTitleTextProperty()
{
  ::vtkTextProperty* retVal = static_cast<::vtkTextProperty*>(vtk::ConvertManagedToNative<::vtkCubeAxesActor2D>(m_instance)->GetAxisTitleTextProperty());
  return gcnew vtkTextProperty(IntPtr(retVal), false);
}



void vtkCubeAxesActor2D::SetAxisLabelTextProperty(vtkTextProperty^ p)
{
  ::vtkTextProperty* pWrap = vtk::ConvertManagedToNative<::vtkTextProperty>(p->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkCubeAxesActor2D>(m_instance)->SetAxisLabelTextProperty(pWrap);
}



vtkTextProperty^ vtkCubeAxesActor2D::GetAxisLabelTextProperty()
{
  ::vtkTextProperty* retVal = static_cast<::vtkTextProperty*>(vtk::ConvertManagedToNative<::vtkCubeAxesActor2D>(m_instance)->GetAxisLabelTextProperty());
  return gcnew vtkTextProperty(IntPtr(retVal), false);
}



void vtkCubeAxesActor2D::SetLabelFormat(System::String^ arg0)
{
  char* arg0Wrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(arg0).ToPointer());
  vtk::ConvertManagedToNative<::vtkCubeAxesActor2D>(m_instance)->SetLabelFormat(arg0Wrap);
  arg0->Remove(0,arg0->Length);
  arg0->Insert(0,System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(arg0Wrap)));
System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(arg0Wrap));
}



System::String^ vtkCubeAxesActor2D::GetLabelFormat()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkCubeAxesActor2D>(m_instance)->GetLabelFormat();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



void vtkCubeAxesActor2D::SetFontFactor(double arg0)
{
  vtk::ConvertManagedToNative<::vtkCubeAxesActor2D>(m_instance)->SetFontFactor(arg0);
}



double vtkCubeAxesActor2D::GetFontFactorMinValue()
{
  double retVal = vtk::ConvertManagedToNative<::vtkCubeAxesActor2D>(m_instance)->GetFontFactorMinValue();
  return retVal;
}



double vtkCubeAxesActor2D::GetFontFactorMaxValue()
{
  double retVal = vtk::ConvertManagedToNative<::vtkCubeAxesActor2D>(m_instance)->GetFontFactorMaxValue();
  return retVal;
}



double vtkCubeAxesActor2D::GetFontFactor()
{
  double retVal = vtk::ConvertManagedToNative<::vtkCubeAxesActor2D>(m_instance)->GetFontFactor();
  return retVal;
}



void vtkCubeAxesActor2D::SetInertia(int arg0)
{
  vtk::ConvertManagedToNative<::vtkCubeAxesActor2D>(m_instance)->SetInertia(arg0);
}



int vtkCubeAxesActor2D::GetInertiaMinValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkCubeAxesActor2D>(m_instance)->GetInertiaMinValue();
  return retVal;
}



int vtkCubeAxesActor2D::GetInertiaMaxValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkCubeAxesActor2D>(m_instance)->GetInertiaMaxValue();
  return retVal;
}



int vtkCubeAxesActor2D::GetInertia()
{
  int retVal = vtk::ConvertManagedToNative<::vtkCubeAxesActor2D>(m_instance)->GetInertia();
  return retVal;
}



void vtkCubeAxesActor2D::SetShowActualBounds(int arg0)
{
  vtk::ConvertManagedToNative<::vtkCubeAxesActor2D>(m_instance)->SetShowActualBounds(arg0);
}



int vtkCubeAxesActor2D::GetShowActualBoundsMinValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkCubeAxesActor2D>(m_instance)->GetShowActualBoundsMinValue();
  return retVal;
}



int vtkCubeAxesActor2D::GetShowActualBoundsMaxValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkCubeAxesActor2D>(m_instance)->GetShowActualBoundsMaxValue();
  return retVal;
}



int vtkCubeAxesActor2D::GetShowActualBounds()
{
  int retVal = vtk::ConvertManagedToNative<::vtkCubeAxesActor2D>(m_instance)->GetShowActualBounds();
  return retVal;
}



void vtkCubeAxesActor2D::SetCornerOffset(double arg0)
{
  vtk::ConvertManagedToNative<::vtkCubeAxesActor2D>(m_instance)->SetCornerOffset(arg0);
}



double vtkCubeAxesActor2D::GetCornerOffset()
{
  double retVal = vtk::ConvertManagedToNative<::vtkCubeAxesActor2D>(m_instance)->GetCornerOffset();
  return retVal;
}



void vtkCubeAxesActor2D::ReleaseGraphicsResources(vtkWindow^ arg0)
{
  ::vtkWindow* arg0Wrap = vtk::ConvertManagedToNative<::vtkWindow>(arg0->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkCubeAxesActor2D>(m_instance)->ReleaseGraphicsResources(arg0Wrap);
}



void vtkCubeAxesActor2D::SetXAxisVisibility(int arg0)
{
  vtk::ConvertManagedToNative<::vtkCubeAxesActor2D>(m_instance)->SetXAxisVisibility(arg0);
}



int vtkCubeAxesActor2D::GetXAxisVisibility()
{
  int retVal = vtk::ConvertManagedToNative<::vtkCubeAxesActor2D>(m_instance)->GetXAxisVisibility();
  return retVal;
}



void vtkCubeAxesActor2D::XAxisVisibilityOn()
{
  vtk::ConvertManagedToNative<::vtkCubeAxesActor2D>(m_instance)->XAxisVisibilityOn();
}



void vtkCubeAxesActor2D::XAxisVisibilityOff()
{
  vtk::ConvertManagedToNative<::vtkCubeAxesActor2D>(m_instance)->XAxisVisibilityOff();
}



void vtkCubeAxesActor2D::SetYAxisVisibility(int arg0)
{
  vtk::ConvertManagedToNative<::vtkCubeAxesActor2D>(m_instance)->SetYAxisVisibility(arg0);
}



int vtkCubeAxesActor2D::GetYAxisVisibility()
{
  int retVal = vtk::ConvertManagedToNative<::vtkCubeAxesActor2D>(m_instance)->GetYAxisVisibility();
  return retVal;
}



void vtkCubeAxesActor2D::YAxisVisibilityOn()
{
  vtk::ConvertManagedToNative<::vtkCubeAxesActor2D>(m_instance)->YAxisVisibilityOn();
}



void vtkCubeAxesActor2D::YAxisVisibilityOff()
{
  vtk::ConvertManagedToNative<::vtkCubeAxesActor2D>(m_instance)->YAxisVisibilityOff();
}



void vtkCubeAxesActor2D::SetZAxisVisibility(int arg0)
{
  vtk::ConvertManagedToNative<::vtkCubeAxesActor2D>(m_instance)->SetZAxisVisibility(arg0);
}



int vtkCubeAxesActor2D::GetZAxisVisibility()
{
  int retVal = vtk::ConvertManagedToNative<::vtkCubeAxesActor2D>(m_instance)->GetZAxisVisibility();
  return retVal;
}



void vtkCubeAxesActor2D::ZAxisVisibilityOn()
{
  vtk::ConvertManagedToNative<::vtkCubeAxesActor2D>(m_instance)->ZAxisVisibilityOn();
}



void vtkCubeAxesActor2D::ZAxisVisibilityOff()
{
  vtk::ConvertManagedToNative<::vtkCubeAxesActor2D>(m_instance)->ZAxisVisibilityOff();
}



void vtkCubeAxesActor2D::ShallowCopy(vtkCubeAxesActor2D^ actor)
{
  ::vtkCubeAxesActor2D* actorWrap = vtk::ConvertManagedToNative<::vtkCubeAxesActor2D>(actor->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkCubeAxesActor2D>(m_instance)->ShallowCopy(actorWrap);
}



void vtkCubeAxesActor2D::SetProp(vtkProp^ prop)
{
  ::vtkProp* propWrap = vtk::ConvertManagedToNative<::vtkProp>(prop->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkCubeAxesActor2D>(m_instance)->SetProp(propWrap);
}



vtkProp^ vtkCubeAxesActor2D::GetProp()
{
  ::vtkProp* retVal = static_cast<::vtkProp*>(vtk::ConvertManagedToNative<::vtkCubeAxesActor2D>(m_instance)->GetProp());
  return gcnew vtkProp(IntPtr(retVal), false);
}



  vtkCubeAxesActor2D::vtkCubeAxesActor2D(System::IntPtr native, bool bConst) : vtkActor2D(native, bConst) {}



  vtkCubeAxesActor2D::vtkCubeAxesActor2D(bool donothing) : vtkActor2D(donothing) {}



  vtkCubeAxesActor2D::vtkCubeAxesActor2D() : vtkActor2D(false) {
  this->SetNativePointer(IntPtr(::vtkCubeAxesActor2D::New()));
}



  vtkCubeAxesActor2D::~vtkCubeAxesActor2D() { }





} // end namespace vtkHybrid
