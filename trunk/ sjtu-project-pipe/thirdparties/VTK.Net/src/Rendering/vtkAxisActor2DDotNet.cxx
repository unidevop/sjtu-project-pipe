

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkAxisActor2DDotNet.h"
#include "vtkTextMapperDotNet.h"
#include "vtkTextPropertyDotNet.h"

// native includes
#include "strstream"
#include "vtkAxisActor2D.h"
#include "vtkCoordinate.h"
#include "vtkObject.h"
#include "vtkProp.h"
#include "vtkTextMapper.h"
#include "vtkTextProperty.h"
#include "vtkViewport.h"
#include "vtkWindow.h"

using namespace System;

namespace vtk {

System::String^ vtkAxisActor2D::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkAxisActor2D>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkAxisActor2D::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkAxisActor2D>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkAxisActor2D^ vtkAxisActor2D::NewInstance()
{
  ::vtkAxisActor2D* retVal = static_cast<::vtkAxisActor2D*>(vtk::ConvertManagedToNative<::vtkAxisActor2D>(m_instance)->NewInstance());
  return gcnew vtkAxisActor2D(IntPtr(retVal), false);
}



vtkAxisActor2D^ vtkAxisActor2D::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkAxisActor2D* retVal = static_cast<::vtkAxisActor2D*>(::vtkAxisActor2D::SafeDownCast(oWrap));
  return gcnew vtkAxisActor2D(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkAxisActor2D::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkAxisActor2D>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkAxisActor2D::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkAxisActor2D>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




vtkCoordinate^ vtkAxisActor2D::GetPoint1Coordinate()
{
  ::vtkCoordinate* retVal = static_cast<::vtkCoordinate*>(vtk::ConvertManagedToNative<::vtkAxisActor2D>(m_instance)->GetPoint1Coordinate());
  return gcnew vtkCoordinate(IntPtr(retVal), false);
}



void vtkAxisActor2D::SetPoint1(array<double>^ x)
{
  pin_ptr<double> xPin = &x[0];
  double* nativexPin = xPin;
  vtk::ConvertManagedToNative<::vtkAxisActor2D>(m_instance)->SetPoint1(nativexPin);
}



void vtkAxisActor2D::SetPoint1(double x, double y)
{
  vtk::ConvertManagedToNative<::vtkAxisActor2D>(m_instance)->SetPoint1(x, y);
}



vtkCoordinate^ vtkAxisActor2D::GetPoint2Coordinate()
{
  ::vtkCoordinate* retVal = static_cast<::vtkCoordinate*>(vtk::ConvertManagedToNative<::vtkAxisActor2D>(m_instance)->GetPoint2Coordinate());
  return gcnew vtkCoordinate(IntPtr(retVal), false);
}



void vtkAxisActor2D::SetPoint2(array<double>^ x)
{
  pin_ptr<double> xPin = &x[0];
  double* nativexPin = xPin;
  vtk::ConvertManagedToNative<::vtkAxisActor2D>(m_instance)->SetPoint2(nativexPin);
}



void vtkAxisActor2D::SetPoint2(double x, double y)
{
  vtk::ConvertManagedToNative<::vtkAxisActor2D>(m_instance)->SetPoint2(x, y);
}



void vtkAxisActor2D::SetRange(double arg0, double arg1)
{
  vtk::ConvertManagedToNative<::vtkAxisActor2D>(m_instance)->SetRange(arg0, arg1);
}



void vtkAxisActor2D::SetRange(array<double>^ a)
{
  pin_ptr<double> aPin = &a[0];
  double* nativeaPin = aPin;
  vtk::ConvertManagedToNative<::vtkAxisActor2D>(m_instance)->SetRange(nativeaPin);
}



array<double>^ vtkAxisActor2D::GetRange()
{
  const double* retVal = vtk::ConvertManagedToNative<::vtkAxisActor2D>(m_instance)->GetRange();
  array<double>^ mRetVal = gcnew array<double>(2);
  for (size_t cprIdx=0; cprIdx<2; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



void vtkAxisActor2D::SetNumberOfLabels(int arg0)
{
  vtk::ConvertManagedToNative<::vtkAxisActor2D>(m_instance)->SetNumberOfLabels(arg0);
}



int vtkAxisActor2D::GetNumberOfLabelsMinValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkAxisActor2D>(m_instance)->GetNumberOfLabelsMinValue();
  return retVal;
}



int vtkAxisActor2D::GetNumberOfLabelsMaxValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkAxisActor2D>(m_instance)->GetNumberOfLabelsMaxValue();
  return retVal;
}



int vtkAxisActor2D::GetNumberOfLabels()
{
  int retVal = vtk::ConvertManagedToNative<::vtkAxisActor2D>(m_instance)->GetNumberOfLabels();
  return retVal;
}



void vtkAxisActor2D::SetLabelFormat(System::String^ arg0)
{
  char* arg0Wrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(arg0).ToPointer());
  vtk::ConvertManagedToNative<::vtkAxisActor2D>(m_instance)->SetLabelFormat(arg0Wrap);
  arg0->Remove(0,arg0->Length);
  arg0->Insert(0,System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(arg0Wrap)));
System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(arg0Wrap));
}



System::String^ vtkAxisActor2D::GetLabelFormat()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkAxisActor2D>(m_instance)->GetLabelFormat();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



void vtkAxisActor2D::SetAdjustLabels(int arg0)
{
  vtk::ConvertManagedToNative<::vtkAxisActor2D>(m_instance)->SetAdjustLabels(arg0);
}



int vtkAxisActor2D::GetAdjustLabels()
{
  int retVal = vtk::ConvertManagedToNative<::vtkAxisActor2D>(m_instance)->GetAdjustLabels();
  return retVal;
}



void vtkAxisActor2D::AdjustLabelsOn()
{
  vtk::ConvertManagedToNative<::vtkAxisActor2D>(m_instance)->AdjustLabelsOn();
}



void vtkAxisActor2D::AdjustLabelsOff()
{
  vtk::ConvertManagedToNative<::vtkAxisActor2D>(m_instance)->AdjustLabelsOff();
}



void vtkAxisActor2D::GetAdjustedRange(double% _arg1, double% _arg2)
{
  pin_ptr<double> _arg1Pin = &_arg1;
  pin_ptr<double> _arg2Pin = &_arg2;
  vtk::ConvertManagedToNative<::vtkAxisActor2D>(m_instance)->GetAdjustedRange(*_arg1Pin, *_arg2Pin);
}



void vtkAxisActor2D::GetAdjustedRange(array<double>^ _arg)
{
  pin_ptr<double> _argPin = &_arg[0];
  double* native_argPin = _argPin;
  vtk::ConvertManagedToNative<::vtkAxisActor2D>(m_instance)->GetAdjustedRange(native_argPin);
}



int vtkAxisActor2D::GetAdjustedNumberOfLabels()
{
  int retVal = vtk::ConvertManagedToNative<::vtkAxisActor2D>(m_instance)->GetAdjustedNumberOfLabels();
  return retVal;
}



void vtkAxisActor2D::SetTitle(System::String^ arg0)
{
  char* arg0Wrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(arg0).ToPointer());
  vtk::ConvertManagedToNative<::vtkAxisActor2D>(m_instance)->SetTitle(arg0Wrap);
  arg0->Remove(0,arg0->Length);
  arg0->Insert(0,System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(arg0Wrap)));
System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(arg0Wrap));
}



System::String^ vtkAxisActor2D::GetTitle()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkAxisActor2D>(m_instance)->GetTitle();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



void vtkAxisActor2D::SetTitleTextProperty(vtkTextProperty^ p)
{
  ::vtkTextProperty* pWrap = vtk::ConvertManagedToNative<::vtkTextProperty>(p->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkAxisActor2D>(m_instance)->SetTitleTextProperty(pWrap);
}



vtkTextProperty^ vtkAxisActor2D::GetTitleTextProperty()
{
  ::vtkTextProperty* retVal = static_cast<::vtkTextProperty*>(vtk::ConvertManagedToNative<::vtkAxisActor2D>(m_instance)->GetTitleTextProperty());
  return gcnew vtkTextProperty(IntPtr(retVal), false);
}



void vtkAxisActor2D::SetLabelTextProperty(vtkTextProperty^ p)
{
  ::vtkTextProperty* pWrap = vtk::ConvertManagedToNative<::vtkTextProperty>(p->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkAxisActor2D>(m_instance)->SetLabelTextProperty(pWrap);
}



vtkTextProperty^ vtkAxisActor2D::GetLabelTextProperty()
{
  ::vtkTextProperty* retVal = static_cast<::vtkTextProperty*>(vtk::ConvertManagedToNative<::vtkAxisActor2D>(m_instance)->GetLabelTextProperty());
  return gcnew vtkTextProperty(IntPtr(retVal), false);
}



void vtkAxisActor2D::SetTickLength(int arg0)
{
  vtk::ConvertManagedToNative<::vtkAxisActor2D>(m_instance)->SetTickLength(arg0);
}



int vtkAxisActor2D::GetTickLengthMinValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkAxisActor2D>(m_instance)->GetTickLengthMinValue();
  return retVal;
}



int vtkAxisActor2D::GetTickLengthMaxValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkAxisActor2D>(m_instance)->GetTickLengthMaxValue();
  return retVal;
}



int vtkAxisActor2D::GetTickLength()
{
  int retVal = vtk::ConvertManagedToNative<::vtkAxisActor2D>(m_instance)->GetTickLength();
  return retVal;
}



void vtkAxisActor2D::SetTickOffset(int arg0)
{
  vtk::ConvertManagedToNative<::vtkAxisActor2D>(m_instance)->SetTickOffset(arg0);
}



int vtkAxisActor2D::GetTickOffsetMinValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkAxisActor2D>(m_instance)->GetTickOffsetMinValue();
  return retVal;
}



int vtkAxisActor2D::GetTickOffsetMaxValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkAxisActor2D>(m_instance)->GetTickOffsetMaxValue();
  return retVal;
}



int vtkAxisActor2D::GetTickOffset()
{
  int retVal = vtk::ConvertManagedToNative<::vtkAxisActor2D>(m_instance)->GetTickOffset();
  return retVal;
}



void vtkAxisActor2D::SetAxisVisibility(int arg0)
{
  vtk::ConvertManagedToNative<::vtkAxisActor2D>(m_instance)->SetAxisVisibility(arg0);
}



int vtkAxisActor2D::GetAxisVisibility()
{
  int retVal = vtk::ConvertManagedToNative<::vtkAxisActor2D>(m_instance)->GetAxisVisibility();
  return retVal;
}



void vtkAxisActor2D::AxisVisibilityOn()
{
  vtk::ConvertManagedToNative<::vtkAxisActor2D>(m_instance)->AxisVisibilityOn();
}



void vtkAxisActor2D::AxisVisibilityOff()
{
  vtk::ConvertManagedToNative<::vtkAxisActor2D>(m_instance)->AxisVisibilityOff();
}



void vtkAxisActor2D::SetTickVisibility(int arg0)
{
  vtk::ConvertManagedToNative<::vtkAxisActor2D>(m_instance)->SetTickVisibility(arg0);
}



int vtkAxisActor2D::GetTickVisibility()
{
  int retVal = vtk::ConvertManagedToNative<::vtkAxisActor2D>(m_instance)->GetTickVisibility();
  return retVal;
}



void vtkAxisActor2D::TickVisibilityOn()
{
  vtk::ConvertManagedToNative<::vtkAxisActor2D>(m_instance)->TickVisibilityOn();
}



void vtkAxisActor2D::TickVisibilityOff()
{
  vtk::ConvertManagedToNative<::vtkAxisActor2D>(m_instance)->TickVisibilityOff();
}



void vtkAxisActor2D::SetLabelVisibility(int arg0)
{
  vtk::ConvertManagedToNative<::vtkAxisActor2D>(m_instance)->SetLabelVisibility(arg0);
}



int vtkAxisActor2D::GetLabelVisibility()
{
  int retVal = vtk::ConvertManagedToNative<::vtkAxisActor2D>(m_instance)->GetLabelVisibility();
  return retVal;
}



void vtkAxisActor2D::LabelVisibilityOn()
{
  vtk::ConvertManagedToNative<::vtkAxisActor2D>(m_instance)->LabelVisibilityOn();
}



void vtkAxisActor2D::LabelVisibilityOff()
{
  vtk::ConvertManagedToNative<::vtkAxisActor2D>(m_instance)->LabelVisibilityOff();
}



void vtkAxisActor2D::SetTitleVisibility(int arg0)
{
  vtk::ConvertManagedToNative<::vtkAxisActor2D>(m_instance)->SetTitleVisibility(arg0);
}



int vtkAxisActor2D::GetTitleVisibility()
{
  int retVal = vtk::ConvertManagedToNative<::vtkAxisActor2D>(m_instance)->GetTitleVisibility();
  return retVal;
}



void vtkAxisActor2D::TitleVisibilityOn()
{
  vtk::ConvertManagedToNative<::vtkAxisActor2D>(m_instance)->TitleVisibilityOn();
}



void vtkAxisActor2D::TitleVisibilityOff()
{
  vtk::ConvertManagedToNative<::vtkAxisActor2D>(m_instance)->TitleVisibilityOff();
}



void vtkAxisActor2D::SetFontFactor(double arg0)
{
  vtk::ConvertManagedToNative<::vtkAxisActor2D>(m_instance)->SetFontFactor(arg0);
}



double vtkAxisActor2D::GetFontFactorMinValue()
{
  double retVal = vtk::ConvertManagedToNative<::vtkAxisActor2D>(m_instance)->GetFontFactorMinValue();
  return retVal;
}



double vtkAxisActor2D::GetFontFactorMaxValue()
{
  double retVal = vtk::ConvertManagedToNative<::vtkAxisActor2D>(m_instance)->GetFontFactorMaxValue();
  return retVal;
}



double vtkAxisActor2D::GetFontFactor()
{
  double retVal = vtk::ConvertManagedToNative<::vtkAxisActor2D>(m_instance)->GetFontFactor();
  return retVal;
}



void vtkAxisActor2D::SetLabelFactor(double arg0)
{
  vtk::ConvertManagedToNative<::vtkAxisActor2D>(m_instance)->SetLabelFactor(arg0);
}



double vtkAxisActor2D::GetLabelFactorMinValue()
{
  double retVal = vtk::ConvertManagedToNative<::vtkAxisActor2D>(m_instance)->GetLabelFactorMinValue();
  return retVal;
}



double vtkAxisActor2D::GetLabelFactorMaxValue()
{
  double retVal = vtk::ConvertManagedToNative<::vtkAxisActor2D>(m_instance)->GetLabelFactorMaxValue();
  return retVal;
}



double vtkAxisActor2D::GetLabelFactor()
{
  double retVal = vtk::ConvertManagedToNative<::vtkAxisActor2D>(m_instance)->GetLabelFactor();
  return retVal;
}



int vtkAxisActor2D::RenderOverlay(vtkViewport^ viewport)
{
  ::vtkViewport* viewportWrap = vtk::ConvertManagedToNative<::vtkViewport>(viewport->GetNativePointer());
  int retVal = vtk::ConvertManagedToNative<::vtkAxisActor2D>(m_instance)->RenderOverlay(viewportWrap);
  return retVal;
}



int vtkAxisActor2D::RenderOpaqueGeometry(vtkViewport^ viewport)
{
  ::vtkViewport* viewportWrap = vtk::ConvertManagedToNative<::vtkViewport>(viewport->GetNativePointer());
  int retVal = vtk::ConvertManagedToNative<::vtkAxisActor2D>(m_instance)->RenderOpaqueGeometry(viewportWrap);
  return retVal;
}



int vtkAxisActor2D::RenderTranslucentGeometry(vtkViewport^ arg0)
{
  ::vtkViewport* arg0Wrap = vtk::ConvertManagedToNative<::vtkViewport>(arg0->GetNativePointer());
  int retVal = vtk::ConvertManagedToNative<::vtkAxisActor2D>(m_instance)->RenderTranslucentGeometry(arg0Wrap);
  return retVal;
}



void vtkAxisActor2D::ReleaseGraphicsResources(vtkWindow^ arg0)
{
  ::vtkWindow* arg0Wrap = vtk::ConvertManagedToNative<::vtkWindow>(arg0->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkAxisActor2D>(m_instance)->ReleaseGraphicsResources(arg0Wrap);
}



void vtkAxisActor2D::ComputeRange(array<double>^ inRange, array<double>^ outRange, int inNumTicks, int% outNumTicks, double% interval)
{
  pin_ptr<double> inRangePin = &inRange[0];
  double* nativeinRangePin = inRangePin;
  pin_ptr<double> outRangePin = &outRange[0];
  double* nativeoutRangePin = outRangePin;
  pin_ptr<int> outNumTicksPin = &outNumTicks;
  pin_ptr<double> intervalPin = &interval;
  ::vtkAxisActor2D::ComputeRange(nativeinRangePin, nativeoutRangePin, inNumTicks, *outNumTicksPin, *intervalPin);
}



int vtkAxisActor2D::SetFontSize(vtkViewport^ viewport, vtkTextMapper^ textMapper, array<int>^ targetSize, double factor, array<int>^ stringSize)
{
  ::vtkViewport* viewportWrap = vtk::ConvertManagedToNative<::vtkViewport>(viewport->GetNativePointer());
  ::vtkTextMapper* textMapperWrap = vtk::ConvertManagedToNative<::vtkTextMapper>(textMapper->GetNativePointer());
  pin_ptr<int> targetSizePin = &targetSize[0];
  int* nativetargetSizePin = targetSizePin;
  pin_ptr<int> stringSizePin = &stringSize[0];
  int* nativestringSizePin = stringSizePin;
  int retVal = ::vtkAxisActor2D::SetFontSize(viewportWrap, textMapperWrap, nativetargetSizePin, factor, nativestringSizePin);
  return retVal;
}



void vtkAxisActor2D::ShallowCopy(vtkProp^ prop)
{
  ::vtkProp* propWrap = vtk::ConvertManagedToNative<::vtkProp>(prop->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkAxisActor2D>(m_instance)->ShallowCopy(propWrap);
}



  vtkAxisActor2D::vtkAxisActor2D(System::IntPtr native, bool bConst) : vtkActor2D(native, bConst) {}



  vtkAxisActor2D::vtkAxisActor2D(bool donothing) : vtkActor2D(donothing) {}



  vtkAxisActor2D::vtkAxisActor2D() : vtkActor2D(false) {
  this->SetNativePointer(IntPtr(::vtkAxisActor2D::New()));
}



  vtkAxisActor2D::~vtkAxisActor2D() { }





} // end namespace vtkRendering
