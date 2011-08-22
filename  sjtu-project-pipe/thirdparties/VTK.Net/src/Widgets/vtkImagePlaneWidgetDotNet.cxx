

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkImagePlaneWidgetDotNet.h"

// native includes
#include "strstream"
#include "vtkImagePlaneWidget.h"
#include "vtkCellPicker.h"
#include "vtkDataSet.h"
#include "vtkImageData.h"
#include "vtkImageMapToColors.h"
#include "vtkLookupTable.h"
#include "vtkObject.h"
#include "vtkPolyData.h"
#include "vtkPolyDataAlgorithm.h"
#include "vtkProperty.h"
#include "vtkTextProperty.h"
#include "vtkTexture.h"

using namespace System;

namespace vtk {

System::String^ vtkImagePlaneWidget::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkImagePlaneWidget>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkImagePlaneWidget::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkImagePlaneWidget>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkImagePlaneWidget^ vtkImagePlaneWidget::NewInstance()
{
  ::vtkImagePlaneWidget* retVal = static_cast<::vtkImagePlaneWidget*>(vtk::ConvertManagedToNative<::vtkImagePlaneWidget>(m_instance)->NewInstance());
  return gcnew vtkImagePlaneWidget(IntPtr(retVal), false);
}



vtkImagePlaneWidget^ vtkImagePlaneWidget::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkImagePlaneWidget* retVal = static_cast<::vtkImagePlaneWidget*>(::vtkImagePlaneWidget::SafeDownCast(oWrap));
  return gcnew vtkImagePlaneWidget(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkImagePlaneWidget::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkImagePlaneWidget>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkImagePlaneWidget::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkImagePlaneWidget>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkImagePlaneWidget::SetEnabled(int arg0)
{
  vtk::ConvertManagedToNative<::vtkImagePlaneWidget>(m_instance)->SetEnabled(arg0);
}



void vtkImagePlaneWidget::PlaceWidget(array<double>^ bounds)
{
  pin_ptr<double> boundsPin = &bounds[0];
  double* nativeboundsPin = boundsPin;
  vtk::ConvertManagedToNative<::vtkImagePlaneWidget>(m_instance)->PlaceWidget(nativeboundsPin);
}



void vtkImagePlaneWidget::PlaceWidget()
{
  vtk::ConvertManagedToNative<::vtkImagePlaneWidget>(m_instance)->PlaceWidget();
}



void vtkImagePlaneWidget::PlaceWidget(double xmin, double xmax, double ymin, double ymax, double zmin, double zmax)
{
  vtk::ConvertManagedToNative<::vtkImagePlaneWidget>(m_instance)->PlaceWidget(xmin, xmax, ymin, ymax, zmin, zmax);
}



void vtkImagePlaneWidget::SetInput(vtkDataSet^ input)
{
  ::vtkDataSet* inputWrap = vtk::ConvertManagedToNative<::vtkDataSet>(input->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkImagePlaneWidget>(m_instance)->SetInput(inputWrap);
}



void vtkImagePlaneWidget::SetOrigin(double x, double y, double z)
{
  vtk::ConvertManagedToNative<::vtkImagePlaneWidget>(m_instance)->SetOrigin(x, y, z);
}



void vtkImagePlaneWidget::SetOrigin(array<double>^ xyz)
{
  pin_ptr<double> xyzPin = &xyz[0];
  double* nativexyzPin = xyzPin;
  vtk::ConvertManagedToNative<::vtkImagePlaneWidget>(m_instance)->SetOrigin(nativexyzPin);
}



array<double>^ vtkImagePlaneWidget::GetOrigin()
{
  const double* retVal = vtk::ConvertManagedToNative<::vtkImagePlaneWidget>(m_instance)->GetOrigin();
  array<double>^ mRetVal = gcnew array<double>(3);
  for (size_t cprIdx=0; cprIdx<3; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



void vtkImagePlaneWidget::GetOrigin(array<double>^ xyz)
{
  pin_ptr<double> xyzPin = &xyz[0];
  double* nativexyzPin = xyzPin;
  vtk::ConvertManagedToNative<::vtkImagePlaneWidget>(m_instance)->GetOrigin(nativexyzPin);
}



void vtkImagePlaneWidget::SetPoint1(double x, double y, double z)
{
  vtk::ConvertManagedToNative<::vtkImagePlaneWidget>(m_instance)->SetPoint1(x, y, z);
}



void vtkImagePlaneWidget::SetPoint1(array<double>^ xyz)
{
  pin_ptr<double> xyzPin = &xyz[0];
  double* nativexyzPin = xyzPin;
  vtk::ConvertManagedToNative<::vtkImagePlaneWidget>(m_instance)->SetPoint1(nativexyzPin);
}



array<double>^ vtkImagePlaneWidget::GetPoint1()
{
  const double* retVal = vtk::ConvertManagedToNative<::vtkImagePlaneWidget>(m_instance)->GetPoint1();
  array<double>^ mRetVal = gcnew array<double>(3);
  for (size_t cprIdx=0; cprIdx<3; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



void vtkImagePlaneWidget::GetPoint1(array<double>^ xyz)
{
  pin_ptr<double> xyzPin = &xyz[0];
  double* nativexyzPin = xyzPin;
  vtk::ConvertManagedToNative<::vtkImagePlaneWidget>(m_instance)->GetPoint1(nativexyzPin);
}



void vtkImagePlaneWidget::SetPoint2(double x, double y, double z)
{
  vtk::ConvertManagedToNative<::vtkImagePlaneWidget>(m_instance)->SetPoint2(x, y, z);
}



void vtkImagePlaneWidget::SetPoint2(array<double>^ xyz)
{
  pin_ptr<double> xyzPin = &xyz[0];
  double* nativexyzPin = xyzPin;
  vtk::ConvertManagedToNative<::vtkImagePlaneWidget>(m_instance)->SetPoint2(nativexyzPin);
}



array<double>^ vtkImagePlaneWidget::GetPoint2()
{
  const double* retVal = vtk::ConvertManagedToNative<::vtkImagePlaneWidget>(m_instance)->GetPoint2();
  array<double>^ mRetVal = gcnew array<double>(3);
  for (size_t cprIdx=0; cprIdx<3; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



void vtkImagePlaneWidget::GetPoint2(array<double>^ xyz)
{
  pin_ptr<double> xyzPin = &xyz[0];
  double* nativexyzPin = xyzPin;
  vtk::ConvertManagedToNative<::vtkImagePlaneWidget>(m_instance)->GetPoint2(nativexyzPin);
}



array<double>^ vtkImagePlaneWidget::GetCenter()
{
  const double* retVal = vtk::ConvertManagedToNative<::vtkImagePlaneWidget>(m_instance)->GetCenter();
  array<double>^ mRetVal = gcnew array<double>(3);
  for (size_t cprIdx=0; cprIdx<3; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



void vtkImagePlaneWidget::GetCenter(array<double>^ xyz)
{
  pin_ptr<double> xyzPin = &xyz[0];
  double* nativexyzPin = xyzPin;
  vtk::ConvertManagedToNative<::vtkImagePlaneWidget>(m_instance)->GetCenter(nativexyzPin);
}



array<double>^ vtkImagePlaneWidget::GetNormal()
{
  const double* retVal = vtk::ConvertManagedToNative<::vtkImagePlaneWidget>(m_instance)->GetNormal();
  array<double>^ mRetVal = gcnew array<double>(3);
  for (size_t cprIdx=0; cprIdx<3; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



void vtkImagePlaneWidget::GetNormal(array<double>^ xyz)
{
  pin_ptr<double> xyzPin = &xyz[0];
  double* nativexyzPin = xyzPin;
  vtk::ConvertManagedToNative<::vtkImagePlaneWidget>(m_instance)->GetNormal(nativexyzPin);
}



void vtkImagePlaneWidget::GetVector1(array<double>^ v1)
{
  pin_ptr<double> v1Pin = &v1[0];
  double* nativev1Pin = v1Pin;
  vtk::ConvertManagedToNative<::vtkImagePlaneWidget>(m_instance)->GetVector1(nativev1Pin);
}



void vtkImagePlaneWidget::GetVector2(array<double>^ v2)
{
  pin_ptr<double> v2Pin = &v2[0];
  double* nativev2Pin = v2Pin;
  vtk::ConvertManagedToNative<::vtkImagePlaneWidget>(m_instance)->GetVector2(nativev2Pin);
}



int vtkImagePlaneWidget::GetSliceIndex()
{
  int retVal = vtk::ConvertManagedToNative<::vtkImagePlaneWidget>(m_instance)->GetSliceIndex();
  return retVal;
}



void vtkImagePlaneWidget::SetSliceIndex(int index)
{
  vtk::ConvertManagedToNative<::vtkImagePlaneWidget>(m_instance)->SetSliceIndex(index);
}



double vtkImagePlaneWidget::GetSlicePosition()
{
  double retVal = vtk::ConvertManagedToNative<::vtkImagePlaneWidget>(m_instance)->GetSlicePosition();
  return retVal;
}



void vtkImagePlaneWidget::SetSlicePosition(double position)
{
  vtk::ConvertManagedToNative<::vtkImagePlaneWidget>(m_instance)->SetSlicePosition(position);
}



void vtkImagePlaneWidget::SetResliceInterpolate(int arg0)
{
  vtk::ConvertManagedToNative<::vtkImagePlaneWidget>(m_instance)->SetResliceInterpolate(arg0);
}



int vtkImagePlaneWidget::GetResliceInterpolate()
{
  int retVal = vtk::ConvertManagedToNative<::vtkImagePlaneWidget>(m_instance)->GetResliceInterpolate();
  return retVal;
}



void vtkImagePlaneWidget::SetResliceInterpolateToNearestNeighbour()
{
  vtk::ConvertManagedToNative<::vtkImagePlaneWidget>(m_instance)->SetResliceInterpolateToNearestNeighbour();
}



void vtkImagePlaneWidget::SetResliceInterpolateToLinear()
{
  vtk::ConvertManagedToNative<::vtkImagePlaneWidget>(m_instance)->SetResliceInterpolateToLinear();
}



void vtkImagePlaneWidget::SetResliceInterpolateToCubic()
{
  vtk::ConvertManagedToNative<::vtkImagePlaneWidget>(m_instance)->SetResliceInterpolateToCubic();
}



vtkImageData^ vtkImagePlaneWidget::GetResliceOutput()
{
  ::vtkImageData* retVal = static_cast<::vtkImageData*>(vtk::ConvertManagedToNative<::vtkImagePlaneWidget>(m_instance)->GetResliceOutput());
  return gcnew vtkImageData(IntPtr(retVal), false);
}



void vtkImagePlaneWidget::SetRestrictPlaneToVolume(int arg0)
{
  vtk::ConvertManagedToNative<::vtkImagePlaneWidget>(m_instance)->SetRestrictPlaneToVolume(arg0);
}



int vtkImagePlaneWidget::GetRestrictPlaneToVolume()
{
  int retVal = vtk::ConvertManagedToNative<::vtkImagePlaneWidget>(m_instance)->GetRestrictPlaneToVolume();
  return retVal;
}



void vtkImagePlaneWidget::RestrictPlaneToVolumeOn()
{
  vtk::ConvertManagedToNative<::vtkImagePlaneWidget>(m_instance)->RestrictPlaneToVolumeOn();
}



void vtkImagePlaneWidget::RestrictPlaneToVolumeOff()
{
  vtk::ConvertManagedToNative<::vtkImagePlaneWidget>(m_instance)->RestrictPlaneToVolumeOff();
}



void vtkImagePlaneWidget::SetUserControlledLookupTable(int arg0)
{
  vtk::ConvertManagedToNative<::vtkImagePlaneWidget>(m_instance)->SetUserControlledLookupTable(arg0);
}



int vtkImagePlaneWidget::GetUserControlledLookupTable()
{
  int retVal = vtk::ConvertManagedToNative<::vtkImagePlaneWidget>(m_instance)->GetUserControlledLookupTable();
  return retVal;
}



void vtkImagePlaneWidget::UserControlledLookupTableOn()
{
  vtk::ConvertManagedToNative<::vtkImagePlaneWidget>(m_instance)->UserControlledLookupTableOn();
}



void vtkImagePlaneWidget::UserControlledLookupTableOff()
{
  vtk::ConvertManagedToNative<::vtkImagePlaneWidget>(m_instance)->UserControlledLookupTableOff();
}



void vtkImagePlaneWidget::SetTextureInterpolate(int arg0)
{
  vtk::ConvertManagedToNative<::vtkImagePlaneWidget>(m_instance)->SetTextureInterpolate(arg0);
}



int vtkImagePlaneWidget::GetTextureInterpolate()
{
  int retVal = vtk::ConvertManagedToNative<::vtkImagePlaneWidget>(m_instance)->GetTextureInterpolate();
  return retVal;
}



void vtkImagePlaneWidget::TextureInterpolateOn()
{
  vtk::ConvertManagedToNative<::vtkImagePlaneWidget>(m_instance)->TextureInterpolateOn();
}



void vtkImagePlaneWidget::TextureInterpolateOff()
{
  vtk::ConvertManagedToNative<::vtkImagePlaneWidget>(m_instance)->TextureInterpolateOff();
}



void vtkImagePlaneWidget::SetTextureVisibility(int arg0)
{
  vtk::ConvertManagedToNative<::vtkImagePlaneWidget>(m_instance)->SetTextureVisibility(arg0);
}



int vtkImagePlaneWidget::GetTextureVisibility()
{
  int retVal = vtk::ConvertManagedToNative<::vtkImagePlaneWidget>(m_instance)->GetTextureVisibility();
  return retVal;
}



void vtkImagePlaneWidget::TextureVisibilityOn()
{
  vtk::ConvertManagedToNative<::vtkImagePlaneWidget>(m_instance)->TextureVisibilityOn();
}



void vtkImagePlaneWidget::TextureVisibilityOff()
{
  vtk::ConvertManagedToNative<::vtkImagePlaneWidget>(m_instance)->TextureVisibilityOff();
}



void vtkImagePlaneWidget::GetPolyData(vtkPolyData^ pd)
{
  ::vtkPolyData* pdWrap = vtk::ConvertManagedToNative<::vtkPolyData>(pd->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkImagePlaneWidget>(m_instance)->GetPolyData(pdWrap);
}



vtkPolyDataAlgorithm^ vtkImagePlaneWidget::GetPolyDataAlgorithm()
{
  ::vtkPolyDataAlgorithm* retVal = static_cast<::vtkPolyDataAlgorithm*>(vtk::ConvertManagedToNative<::vtkImagePlaneWidget>(m_instance)->GetPolyDataAlgorithm());
  return gcnew vtkPolyDataAlgorithm(IntPtr(retVal), false);
}



void vtkImagePlaneWidget::UpdatePlacement()
{
  vtk::ConvertManagedToNative<::vtkImagePlaneWidget>(m_instance)->UpdatePlacement();
}



vtkTexture^ vtkImagePlaneWidget::GetTexture()
{
  ::vtkTexture* retVal = static_cast<::vtkTexture*>(vtk::ConvertManagedToNative<::vtkImagePlaneWidget>(m_instance)->GetTexture());
  return gcnew vtkTexture(IntPtr(retVal), false);
}



vtkImageMapToColors^ vtkImagePlaneWidget::GetColorMap()
{
  ::vtkImageMapToColors* retVal = static_cast<::vtkImageMapToColors*>(vtk::ConvertManagedToNative<::vtkImagePlaneWidget>(m_instance)->GetColorMap());
  return gcnew vtkImageMapToColors(IntPtr(retVal), false);
}



void vtkImagePlaneWidget::SetColorMap(vtkImageMapToColors^ arg0)
{
  ::vtkImageMapToColors* arg0Wrap = vtk::ConvertManagedToNative<::vtkImageMapToColors>(arg0->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkImagePlaneWidget>(m_instance)->SetColorMap(arg0Wrap);
}



void vtkImagePlaneWidget::SetPlaneProperty(vtkProperty^ arg0)
{
  ::vtkProperty* arg0Wrap = vtk::ConvertManagedToNative<::vtkProperty>(arg0->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkImagePlaneWidget>(m_instance)->SetPlaneProperty(arg0Wrap);
}



vtkProperty^ vtkImagePlaneWidget::GetPlaneProperty()
{
  ::vtkProperty* retVal = static_cast<::vtkProperty*>(vtk::ConvertManagedToNative<::vtkImagePlaneWidget>(m_instance)->GetPlaneProperty());
  return gcnew vtkProperty(IntPtr(retVal), false);
}



void vtkImagePlaneWidget::SetSelectedPlaneProperty(vtkProperty^ arg0)
{
  ::vtkProperty* arg0Wrap = vtk::ConvertManagedToNative<::vtkProperty>(arg0->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkImagePlaneWidget>(m_instance)->SetSelectedPlaneProperty(arg0Wrap);
}



vtkProperty^ vtkImagePlaneWidget::GetSelectedPlaneProperty()
{
  ::vtkProperty* retVal = static_cast<::vtkProperty*>(vtk::ConvertManagedToNative<::vtkImagePlaneWidget>(m_instance)->GetSelectedPlaneProperty());
  return gcnew vtkProperty(IntPtr(retVal), false);
}



void vtkImagePlaneWidget::SetPlaneOrientation(int arg0)
{
  vtk::ConvertManagedToNative<::vtkImagePlaneWidget>(m_instance)->SetPlaneOrientation(arg0);
}



int vtkImagePlaneWidget::GetPlaneOrientation()
{
  int retVal = vtk::ConvertManagedToNative<::vtkImagePlaneWidget>(m_instance)->GetPlaneOrientation();
  return retVal;
}



void vtkImagePlaneWidget::SetPlaneOrientationToXAxes()
{
  vtk::ConvertManagedToNative<::vtkImagePlaneWidget>(m_instance)->SetPlaneOrientationToXAxes();
}



void vtkImagePlaneWidget::SetPlaneOrientationToYAxes()
{
  vtk::ConvertManagedToNative<::vtkImagePlaneWidget>(m_instance)->SetPlaneOrientationToYAxes();
}



void vtkImagePlaneWidget::SetPlaneOrientationToZAxes()
{
  vtk::ConvertManagedToNative<::vtkImagePlaneWidget>(m_instance)->SetPlaneOrientationToZAxes();
}



void vtkImagePlaneWidget::SetPicker(vtkCellPicker^ arg0)
{
  ::vtkCellPicker* arg0Wrap = vtk::ConvertManagedToNative<::vtkCellPicker>(arg0->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkImagePlaneWidget>(m_instance)->SetPicker(arg0Wrap);
}



void vtkImagePlaneWidget::SetLookupTable(vtkLookupTable^ arg0)
{
  ::vtkLookupTable* arg0Wrap = vtk::ConvertManagedToNative<::vtkLookupTable>(arg0->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkImagePlaneWidget>(m_instance)->SetLookupTable(arg0Wrap);
}



vtkLookupTable^ vtkImagePlaneWidget::GetLookupTable()
{
  ::vtkLookupTable* retVal = static_cast<::vtkLookupTable*>(vtk::ConvertManagedToNative<::vtkImagePlaneWidget>(m_instance)->GetLookupTable());
  return gcnew vtkLookupTable(IntPtr(retVal), false);
}



void vtkImagePlaneWidget::SetDisplayText(int arg0)
{
  vtk::ConvertManagedToNative<::vtkImagePlaneWidget>(m_instance)->SetDisplayText(arg0);
}



int vtkImagePlaneWidget::GetDisplayText()
{
  int retVal = vtk::ConvertManagedToNative<::vtkImagePlaneWidget>(m_instance)->GetDisplayText();
  return retVal;
}



void vtkImagePlaneWidget::DisplayTextOn()
{
  vtk::ConvertManagedToNative<::vtkImagePlaneWidget>(m_instance)->DisplayTextOn();
}



void vtkImagePlaneWidget::DisplayTextOff()
{
  vtk::ConvertManagedToNative<::vtkImagePlaneWidget>(m_instance)->DisplayTextOff();
}



void vtkImagePlaneWidget::SetCursorProperty(vtkProperty^ arg0)
{
  ::vtkProperty* arg0Wrap = vtk::ConvertManagedToNative<::vtkProperty>(arg0->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkImagePlaneWidget>(m_instance)->SetCursorProperty(arg0Wrap);
}



vtkProperty^ vtkImagePlaneWidget::GetCursorProperty()
{
  ::vtkProperty* retVal = static_cast<::vtkProperty*>(vtk::ConvertManagedToNative<::vtkImagePlaneWidget>(m_instance)->GetCursorProperty());
  return gcnew vtkProperty(IntPtr(retVal), false);
}



void vtkImagePlaneWidget::SetMarginProperty(vtkProperty^ arg0)
{
  ::vtkProperty* arg0Wrap = vtk::ConvertManagedToNative<::vtkProperty>(arg0->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkImagePlaneWidget>(m_instance)->SetMarginProperty(arg0Wrap);
}



vtkProperty^ vtkImagePlaneWidget::GetMarginProperty()
{
  ::vtkProperty* retVal = static_cast<::vtkProperty*>(vtk::ConvertManagedToNative<::vtkImagePlaneWidget>(m_instance)->GetMarginProperty());
  return gcnew vtkProperty(IntPtr(retVal), false);
}



void vtkImagePlaneWidget::SetTextProperty(vtkTextProperty^ tprop)
{
  ::vtkTextProperty* tpropWrap = vtk::ConvertManagedToNative<::vtkTextProperty>(tprop->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkImagePlaneWidget>(m_instance)->SetTextProperty(tpropWrap);
}



vtkTextProperty^ vtkImagePlaneWidget::GetTextProperty()
{
  ::vtkTextProperty* retVal = static_cast<::vtkTextProperty*>(vtk::ConvertManagedToNative<::vtkImagePlaneWidget>(m_instance)->GetTextProperty());
  return gcnew vtkTextProperty(IntPtr(retVal), false);
}



void vtkImagePlaneWidget::SetTexturePlaneProperty(vtkProperty^ arg0)
{
  ::vtkProperty* arg0Wrap = vtk::ConvertManagedToNative<::vtkProperty>(arg0->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkImagePlaneWidget>(m_instance)->SetTexturePlaneProperty(arg0Wrap);
}



vtkProperty^ vtkImagePlaneWidget::GetTexturePlaneProperty()
{
  ::vtkProperty* retVal = static_cast<::vtkProperty*>(vtk::ConvertManagedToNative<::vtkImagePlaneWidget>(m_instance)->GetTexturePlaneProperty());
  return gcnew vtkProperty(IntPtr(retVal), false);
}



void vtkImagePlaneWidget::SetWindowLevel(double window, double level)
{
  vtk::ConvertManagedToNative<::vtkImagePlaneWidget>(m_instance)->SetWindowLevel(window, level);
}



void vtkImagePlaneWidget::GetWindowLevel(array<double>^ wl)
{
  pin_ptr<double> wlPin = &wl[0];
  double* nativewlPin = wlPin;
  vtk::ConvertManagedToNative<::vtkImagePlaneWidget>(m_instance)->GetWindowLevel(nativewlPin);
}



int vtkImagePlaneWidget::GetCursorData(array<double>^ xyzv)
{
  pin_ptr<double> xyzvPin = &xyzv[0];
  double* nativexyzvPin = xyzvPin;
  int retVal = vtk::ConvertManagedToNative<::vtkImagePlaneWidget>(m_instance)->GetCursorData(nativexyzvPin);
  return retVal;
}



int vtkImagePlaneWidget::GetCursorDataStatus()
{
  int retVal = vtk::ConvertManagedToNative<::vtkImagePlaneWidget>(m_instance)->GetCursorDataStatus();
  return retVal;
}



array<double>^ vtkImagePlaneWidget::GetCurrentCursorPosition()
{
  const double* retVal = vtk::ConvertManagedToNative<::vtkImagePlaneWidget>(m_instance)->GetCurrentCursorPosition();
  array<double>^ mRetVal = gcnew array<double>(3);
  for (size_t cprIdx=0; cprIdx<3; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



double vtkImagePlaneWidget::GetCurrentImageValue()
{
  double retVal = vtk::ConvertManagedToNative<::vtkImagePlaneWidget>(m_instance)->GetCurrentImageValue();
  return retVal;
}



void vtkImagePlaneWidget::SetUseContinuousCursor(int arg0)
{
  vtk::ConvertManagedToNative<::vtkImagePlaneWidget>(m_instance)->SetUseContinuousCursor(arg0);
}



int vtkImagePlaneWidget::GetUseContinuousCursor()
{
  int retVal = vtk::ConvertManagedToNative<::vtkImagePlaneWidget>(m_instance)->GetUseContinuousCursor();
  return retVal;
}



void vtkImagePlaneWidget::UseContinuousCursorOn()
{
  vtk::ConvertManagedToNative<::vtkImagePlaneWidget>(m_instance)->UseContinuousCursorOn();
}



void vtkImagePlaneWidget::UseContinuousCursorOff()
{
  vtk::ConvertManagedToNative<::vtkImagePlaneWidget>(m_instance)->UseContinuousCursorOff();
}



void vtkImagePlaneWidget::SetInteraction(int interact)
{
  vtk::ConvertManagedToNative<::vtkImagePlaneWidget>(m_instance)->SetInteraction(interact);
}



int vtkImagePlaneWidget::GetInteraction()
{
  int retVal = vtk::ConvertManagedToNative<::vtkImagePlaneWidget>(m_instance)->GetInteraction();
  return retVal;
}



void vtkImagePlaneWidget::InteractionOn()
{
  vtk::ConvertManagedToNative<::vtkImagePlaneWidget>(m_instance)->InteractionOn();
}



void vtkImagePlaneWidget::InteractionOff()
{
  vtk::ConvertManagedToNative<::vtkImagePlaneWidget>(m_instance)->InteractionOff();
}



void vtkImagePlaneWidget::SetLeftButtonAction(int arg0)
{
  vtk::ConvertManagedToNative<::vtkImagePlaneWidget>(m_instance)->SetLeftButtonAction(arg0);
}



int vtkImagePlaneWidget::GetLeftButtonActionMinValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkImagePlaneWidget>(m_instance)->GetLeftButtonActionMinValue();
  return retVal;
}



int vtkImagePlaneWidget::GetLeftButtonActionMaxValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkImagePlaneWidget>(m_instance)->GetLeftButtonActionMaxValue();
  return retVal;
}



int vtkImagePlaneWidget::GetLeftButtonAction()
{
  int retVal = vtk::ConvertManagedToNative<::vtkImagePlaneWidget>(m_instance)->GetLeftButtonAction();
  return retVal;
}



void vtkImagePlaneWidget::SetMiddleButtonAction(int arg0)
{
  vtk::ConvertManagedToNative<::vtkImagePlaneWidget>(m_instance)->SetMiddleButtonAction(arg0);
}



int vtkImagePlaneWidget::GetMiddleButtonActionMinValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkImagePlaneWidget>(m_instance)->GetMiddleButtonActionMinValue();
  return retVal;
}



int vtkImagePlaneWidget::GetMiddleButtonActionMaxValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkImagePlaneWidget>(m_instance)->GetMiddleButtonActionMaxValue();
  return retVal;
}



int vtkImagePlaneWidget::GetMiddleButtonAction()
{
  int retVal = vtk::ConvertManagedToNative<::vtkImagePlaneWidget>(m_instance)->GetMiddleButtonAction();
  return retVal;
}



void vtkImagePlaneWidget::SetRightButtonAction(int arg0)
{
  vtk::ConvertManagedToNative<::vtkImagePlaneWidget>(m_instance)->SetRightButtonAction(arg0);
}



int vtkImagePlaneWidget::GetRightButtonActionMinValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkImagePlaneWidget>(m_instance)->GetRightButtonActionMinValue();
  return retVal;
}



int vtkImagePlaneWidget::GetRightButtonActionMaxValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkImagePlaneWidget>(m_instance)->GetRightButtonActionMaxValue();
  return retVal;
}



int vtkImagePlaneWidget::GetRightButtonAction()
{
  int retVal = vtk::ConvertManagedToNative<::vtkImagePlaneWidget>(m_instance)->GetRightButtonAction();
  return retVal;
}



void vtkImagePlaneWidget::SetLeftButtonAutoModifier(int arg0)
{
  vtk::ConvertManagedToNative<::vtkImagePlaneWidget>(m_instance)->SetLeftButtonAutoModifier(arg0);
}



int vtkImagePlaneWidget::GetLeftButtonAutoModifierMinValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkImagePlaneWidget>(m_instance)->GetLeftButtonAutoModifierMinValue();
  return retVal;
}



int vtkImagePlaneWidget::GetLeftButtonAutoModifierMaxValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkImagePlaneWidget>(m_instance)->GetLeftButtonAutoModifierMaxValue();
  return retVal;
}



int vtkImagePlaneWidget::GetLeftButtonAutoModifier()
{
  int retVal = vtk::ConvertManagedToNative<::vtkImagePlaneWidget>(m_instance)->GetLeftButtonAutoModifier();
  return retVal;
}



void vtkImagePlaneWidget::SetMiddleButtonAutoModifier(int arg0)
{
  vtk::ConvertManagedToNative<::vtkImagePlaneWidget>(m_instance)->SetMiddleButtonAutoModifier(arg0);
}



int vtkImagePlaneWidget::GetMiddleButtonAutoModifierMinValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkImagePlaneWidget>(m_instance)->GetMiddleButtonAutoModifierMinValue();
  return retVal;
}



int vtkImagePlaneWidget::GetMiddleButtonAutoModifierMaxValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkImagePlaneWidget>(m_instance)->GetMiddleButtonAutoModifierMaxValue();
  return retVal;
}



int vtkImagePlaneWidget::GetMiddleButtonAutoModifier()
{
  int retVal = vtk::ConvertManagedToNative<::vtkImagePlaneWidget>(m_instance)->GetMiddleButtonAutoModifier();
  return retVal;
}



void vtkImagePlaneWidget::SetRightButtonAutoModifier(int arg0)
{
  vtk::ConvertManagedToNative<::vtkImagePlaneWidget>(m_instance)->SetRightButtonAutoModifier(arg0);
}



int vtkImagePlaneWidget::GetRightButtonAutoModifierMinValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkImagePlaneWidget>(m_instance)->GetRightButtonAutoModifierMinValue();
  return retVal;
}



int vtkImagePlaneWidget::GetRightButtonAutoModifierMaxValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkImagePlaneWidget>(m_instance)->GetRightButtonAutoModifierMaxValue();
  return retVal;
}



int vtkImagePlaneWidget::GetRightButtonAutoModifier()
{
  int retVal = vtk::ConvertManagedToNative<::vtkImagePlaneWidget>(m_instance)->GetRightButtonAutoModifier();
  return retVal;
}



  vtkImagePlaneWidget::vtkImagePlaneWidget(System::IntPtr native, bool bConst) : vtkPolyDataSourceWidget(native, bConst) {}



  vtkImagePlaneWidget::vtkImagePlaneWidget(bool donothing) : vtkPolyDataSourceWidget(donothing) {}



  vtkImagePlaneWidget::vtkImagePlaneWidget() : vtkPolyDataSourceWidget(false) {
  this->SetNativePointer(IntPtr(::vtkImagePlaneWidget::New()));
}



  vtkImagePlaneWidget::~vtkImagePlaneWidget() { }





} // end namespace vtkWidgets
