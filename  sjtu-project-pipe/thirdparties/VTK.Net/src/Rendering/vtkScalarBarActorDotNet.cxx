

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkScalarBarActorDotNet.h"
#include "vtkTextPropertyDotNet.h"

// native includes
#include "strstream"
#include "vtkScalarBarActor.h"
#include "vtkObject.h"
#include "vtkProp.h"
#include "vtkScalarsToColors.h"
#include "vtkTextProperty.h"
#include "vtkViewport.h"
#include "vtkWindow.h"

using namespace System;

namespace vtk {

System::String^ vtkScalarBarActor::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkScalarBarActor>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkScalarBarActor::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkScalarBarActor>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkScalarBarActor^ vtkScalarBarActor::NewInstance()
{
  ::vtkScalarBarActor* retVal = static_cast<::vtkScalarBarActor*>(vtk::ConvertManagedToNative<::vtkScalarBarActor>(m_instance)->NewInstance());
  return gcnew vtkScalarBarActor(IntPtr(retVal), false);
}



vtkScalarBarActor^ vtkScalarBarActor::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkScalarBarActor* retVal = static_cast<::vtkScalarBarActor*>(::vtkScalarBarActor::SafeDownCast(oWrap));
  return gcnew vtkScalarBarActor(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkScalarBarActor::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkScalarBarActor>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkScalarBarActor::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkScalarBarActor>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




int vtkScalarBarActor::RenderOpaqueGeometry(vtkViewport^ viewport)
{
  ::vtkViewport* viewportWrap = vtk::ConvertManagedToNative<::vtkViewport>(viewport->GetNativePointer());
  int retVal = vtk::ConvertManagedToNative<::vtkScalarBarActor>(m_instance)->RenderOpaqueGeometry(viewportWrap);
  return retVal;
}



int vtkScalarBarActor::RenderTranslucentGeometry(vtkViewport^ arg0)
{
  ::vtkViewport* arg0Wrap = vtk::ConvertManagedToNative<::vtkViewport>(arg0->GetNativePointer());
  int retVal = vtk::ConvertManagedToNative<::vtkScalarBarActor>(m_instance)->RenderTranslucentGeometry(arg0Wrap);
  return retVal;
}



int vtkScalarBarActor::RenderOverlay(vtkViewport^ viewport)
{
  ::vtkViewport* viewportWrap = vtk::ConvertManagedToNative<::vtkViewport>(viewport->GetNativePointer());
  int retVal = vtk::ConvertManagedToNative<::vtkScalarBarActor>(m_instance)->RenderOverlay(viewportWrap);
  return retVal;
}



void vtkScalarBarActor::ReleaseGraphicsResources(vtkWindow^ arg0)
{
  ::vtkWindow* arg0Wrap = vtk::ConvertManagedToNative<::vtkWindow>(arg0->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkScalarBarActor>(m_instance)->ReleaseGraphicsResources(arg0Wrap);
}



void vtkScalarBarActor::SetLookupTable(vtkScalarsToColors^ arg0)
{
  ::vtkScalarsToColors* arg0Wrap = vtk::ConvertManagedToNative<::vtkScalarsToColors>(arg0->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkScalarBarActor>(m_instance)->SetLookupTable(arg0Wrap);
}



vtkScalarsToColors^ vtkScalarBarActor::GetLookupTable()
{
  ::vtkScalarsToColors* retVal = static_cast<::vtkScalarsToColors*>(vtk::ConvertManagedToNative<::vtkScalarBarActor>(m_instance)->GetLookupTable());
  return gcnew vtkScalarsToColors(IntPtr(retVal), false);
}



void vtkScalarBarActor::SetMaximumNumberOfColors(int arg0)
{
  vtk::ConvertManagedToNative<::vtkScalarBarActor>(m_instance)->SetMaximumNumberOfColors(arg0);
}



int vtkScalarBarActor::GetMaximumNumberOfColorsMinValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkScalarBarActor>(m_instance)->GetMaximumNumberOfColorsMinValue();
  return retVal;
}



int vtkScalarBarActor::GetMaximumNumberOfColorsMaxValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkScalarBarActor>(m_instance)->GetMaximumNumberOfColorsMaxValue();
  return retVal;
}



int vtkScalarBarActor::GetMaximumNumberOfColors()
{
  int retVal = vtk::ConvertManagedToNative<::vtkScalarBarActor>(m_instance)->GetMaximumNumberOfColors();
  return retVal;
}



void vtkScalarBarActor::SetNumberOfLabels(int arg0)
{
  vtk::ConvertManagedToNative<::vtkScalarBarActor>(m_instance)->SetNumberOfLabels(arg0);
}



int vtkScalarBarActor::GetNumberOfLabelsMinValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkScalarBarActor>(m_instance)->GetNumberOfLabelsMinValue();
  return retVal;
}



int vtkScalarBarActor::GetNumberOfLabelsMaxValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkScalarBarActor>(m_instance)->GetNumberOfLabelsMaxValue();
  return retVal;
}



int vtkScalarBarActor::GetNumberOfLabels()
{
  int retVal = vtk::ConvertManagedToNative<::vtkScalarBarActor>(m_instance)->GetNumberOfLabels();
  return retVal;
}



void vtkScalarBarActor::SetOrientation(int arg0)
{
  vtk::ConvertManagedToNative<::vtkScalarBarActor>(m_instance)->SetOrientation(arg0);
}



int vtkScalarBarActor::GetOrientationMinValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkScalarBarActor>(m_instance)->GetOrientationMinValue();
  return retVal;
}



int vtkScalarBarActor::GetOrientationMaxValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkScalarBarActor>(m_instance)->GetOrientationMaxValue();
  return retVal;
}



int vtkScalarBarActor::GetOrientation()
{
  int retVal = vtk::ConvertManagedToNative<::vtkScalarBarActor>(m_instance)->GetOrientation();
  return retVal;
}



void vtkScalarBarActor::SetOrientationToHorizontal()
{
  vtk::ConvertManagedToNative<::vtkScalarBarActor>(m_instance)->SetOrientationToHorizontal();
}



void vtkScalarBarActor::SetOrientationToVertical()
{
  vtk::ConvertManagedToNative<::vtkScalarBarActor>(m_instance)->SetOrientationToVertical();
}



void vtkScalarBarActor::SetTitleTextProperty(vtkTextProperty^ p)
{
  ::vtkTextProperty* pWrap = vtk::ConvertManagedToNative<::vtkTextProperty>(p->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkScalarBarActor>(m_instance)->SetTitleTextProperty(pWrap);
}



vtkTextProperty^ vtkScalarBarActor::GetTitleTextProperty()
{
  ::vtkTextProperty* retVal = static_cast<::vtkTextProperty*>(vtk::ConvertManagedToNative<::vtkScalarBarActor>(m_instance)->GetTitleTextProperty());
  return gcnew vtkTextProperty(IntPtr(retVal), false);
}



void vtkScalarBarActor::SetLabelTextProperty(vtkTextProperty^ p)
{
  ::vtkTextProperty* pWrap = vtk::ConvertManagedToNative<::vtkTextProperty>(p->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkScalarBarActor>(m_instance)->SetLabelTextProperty(pWrap);
}



vtkTextProperty^ vtkScalarBarActor::GetLabelTextProperty()
{
  ::vtkTextProperty* retVal = static_cast<::vtkTextProperty*>(vtk::ConvertManagedToNative<::vtkScalarBarActor>(m_instance)->GetLabelTextProperty());
  return gcnew vtkTextProperty(IntPtr(retVal), false);
}



void vtkScalarBarActor::SetLabelFormat(System::String^ arg0)
{
  char* arg0Wrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(arg0).ToPointer());
  vtk::ConvertManagedToNative<::vtkScalarBarActor>(m_instance)->SetLabelFormat(arg0Wrap);
  arg0->Remove(0,arg0->Length);
  arg0->Insert(0,System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(arg0Wrap)));
System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(arg0Wrap));
}



System::String^ vtkScalarBarActor::GetLabelFormat()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkScalarBarActor>(m_instance)->GetLabelFormat();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



void vtkScalarBarActor::SetTitle(System::String^ arg0)
{
  char* arg0Wrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(arg0).ToPointer());
  vtk::ConvertManagedToNative<::vtkScalarBarActor>(m_instance)->SetTitle(arg0Wrap);
  arg0->Remove(0,arg0->Length);
  arg0->Insert(0,System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(arg0Wrap)));
System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(arg0Wrap));
}



System::String^ vtkScalarBarActor::GetTitle()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkScalarBarActor>(m_instance)->GetTitle();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



void vtkScalarBarActor::ShallowCopy(vtkProp^ prop)
{
  ::vtkProp* propWrap = vtk::ConvertManagedToNative<::vtkProp>(prop->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkScalarBarActor>(m_instance)->ShallowCopy(propWrap);
}



  vtkScalarBarActor::vtkScalarBarActor(System::IntPtr native, bool bConst) : vtkActor2D(native, bConst) {}



  vtkScalarBarActor::vtkScalarBarActor(bool donothing) : vtkActor2D(donothing) {}



  vtkScalarBarActor::vtkScalarBarActor() : vtkActor2D(false) {
  this->SetNativePointer(IntPtr(::vtkScalarBarActor::New()));
}



  vtkScalarBarActor::~vtkScalarBarActor() { }





} // end namespace vtkRendering
