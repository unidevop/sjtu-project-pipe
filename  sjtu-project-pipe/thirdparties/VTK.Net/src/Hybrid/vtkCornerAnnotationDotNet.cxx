

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkCornerAnnotationDotNet.h"

// native includes
#include "strstream"
#include "vtkCornerAnnotation.h"
#include "vtkImageActor.h"
#include "vtkImageMapToWindowLevelColors.h"
#include "vtkObject.h"
#include "vtkTextProperty.h"
#include "vtkViewport.h"
#include "vtkWindow.h"

using namespace System;

namespace vtk {

System::String^ vtkCornerAnnotation::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkCornerAnnotation>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkCornerAnnotation::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkCornerAnnotation>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkCornerAnnotation^ vtkCornerAnnotation::NewInstance()
{
  ::vtkCornerAnnotation* retVal = static_cast<::vtkCornerAnnotation*>(vtk::ConvertManagedToNative<::vtkCornerAnnotation>(m_instance)->NewInstance());
  return gcnew vtkCornerAnnotation(IntPtr(retVal), false);
}



vtkCornerAnnotation^ vtkCornerAnnotation::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkCornerAnnotation* retVal = static_cast<::vtkCornerAnnotation*>(::vtkCornerAnnotation::SafeDownCast(oWrap));
  return gcnew vtkCornerAnnotation(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkCornerAnnotation::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkCornerAnnotation>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkCornerAnnotation::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkCornerAnnotation>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




int vtkCornerAnnotation::RenderOpaqueGeometry(vtkViewport^ viewport)
{
  ::vtkViewport* viewportWrap = vtk::ConvertManagedToNative<::vtkViewport>(viewport->GetNativePointer());
  int retVal = vtk::ConvertManagedToNative<::vtkCornerAnnotation>(m_instance)->RenderOpaqueGeometry(viewportWrap);
  return retVal;
}



int vtkCornerAnnotation::RenderTranslucentGeometry(vtkViewport^ arg0)
{
  ::vtkViewport* arg0Wrap = vtk::ConvertManagedToNative<::vtkViewport>(arg0->GetNativePointer());
  int retVal = vtk::ConvertManagedToNative<::vtkCornerAnnotation>(m_instance)->RenderTranslucentGeometry(arg0Wrap);
  return retVal;
}



int vtkCornerAnnotation::RenderOverlay(vtkViewport^ viewport)
{
  ::vtkViewport* viewportWrap = vtk::ConvertManagedToNative<::vtkViewport>(viewport->GetNativePointer());
  int retVal = vtk::ConvertManagedToNative<::vtkCornerAnnotation>(m_instance)->RenderOverlay(viewportWrap);
  return retVal;
}



void vtkCornerAnnotation::SetMaximumLineHeight(double arg0)
{
  vtk::ConvertManagedToNative<::vtkCornerAnnotation>(m_instance)->SetMaximumLineHeight(arg0);
}



double vtkCornerAnnotation::GetMaximumLineHeight()
{
  double retVal = vtk::ConvertManagedToNative<::vtkCornerAnnotation>(m_instance)->GetMaximumLineHeight();
  return retVal;
}



void vtkCornerAnnotation::SetMinimumFontSize(int arg0)
{
  vtk::ConvertManagedToNative<::vtkCornerAnnotation>(m_instance)->SetMinimumFontSize(arg0);
}



int vtkCornerAnnotation::GetMinimumFontSize()
{
  int retVal = vtk::ConvertManagedToNative<::vtkCornerAnnotation>(m_instance)->GetMinimumFontSize();
  return retVal;
}



void vtkCornerAnnotation::SetMaximumFontSize(int arg0)
{
  vtk::ConvertManagedToNative<::vtkCornerAnnotation>(m_instance)->SetMaximumFontSize(arg0);
}



int vtkCornerAnnotation::GetMaximumFontSize()
{
  int retVal = vtk::ConvertManagedToNative<::vtkCornerAnnotation>(m_instance)->GetMaximumFontSize();
  return retVal;
}



void vtkCornerAnnotation::SetLinearFontScaleFactor(double arg0)
{
  vtk::ConvertManagedToNative<::vtkCornerAnnotation>(m_instance)->SetLinearFontScaleFactor(arg0);
}



double vtkCornerAnnotation::GetLinearFontScaleFactor()
{
  double retVal = vtk::ConvertManagedToNative<::vtkCornerAnnotation>(m_instance)->GetLinearFontScaleFactor();
  return retVal;
}



void vtkCornerAnnotation::SetNonlinearFontScaleFactor(double arg0)
{
  vtk::ConvertManagedToNative<::vtkCornerAnnotation>(m_instance)->SetNonlinearFontScaleFactor(arg0);
}



double vtkCornerAnnotation::GetNonlinearFontScaleFactor()
{
  double retVal = vtk::ConvertManagedToNative<::vtkCornerAnnotation>(m_instance)->GetNonlinearFontScaleFactor();
  return retVal;
}



void vtkCornerAnnotation::ReleaseGraphicsResources(vtkWindow^ arg0)
{
  ::vtkWindow* arg0Wrap = vtk::ConvertManagedToNative<::vtkWindow>(arg0->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkCornerAnnotation>(m_instance)->ReleaseGraphicsResources(arg0Wrap);
}



void vtkCornerAnnotation::SetText(int i, System::String^ text)
{
  char* textWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(text).ToPointer());
  vtk::ConvertManagedToNative<::vtkCornerAnnotation>(m_instance)->SetText(i, textWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(textWrap));
}



System::String^ vtkCornerAnnotation::GetText(int i)
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkCornerAnnotation>(m_instance)->GetText(i);
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



void vtkCornerAnnotation::ClearAllTexts()
{
  vtk::ConvertManagedToNative<::vtkCornerAnnotation>(m_instance)->ClearAllTexts();
}



void vtkCornerAnnotation::CopyAllTextsFrom(vtkCornerAnnotation^ ca)
{
  ::vtkCornerAnnotation* caWrap = vtk::ConvertManagedToNative<::vtkCornerAnnotation>(ca->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkCornerAnnotation>(m_instance)->CopyAllTextsFrom(caWrap);
}



void vtkCornerAnnotation::SetImageActor(vtkImageActor^ arg0)
{
  ::vtkImageActor* arg0Wrap = vtk::ConvertManagedToNative<::vtkImageActor>(arg0->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkCornerAnnotation>(m_instance)->SetImageActor(arg0Wrap);
}



vtkImageActor^ vtkCornerAnnotation::GetImageActor()
{
  ::vtkImageActor* retVal = static_cast<::vtkImageActor*>(vtk::ConvertManagedToNative<::vtkCornerAnnotation>(m_instance)->GetImageActor());
  return gcnew vtkImageActor(IntPtr(retVal), false);
}



void vtkCornerAnnotation::SetWindowLevel(vtkImageMapToWindowLevelColors^ arg0)
{
  ::vtkImageMapToWindowLevelColors* arg0Wrap = vtk::ConvertManagedToNative<::vtkImageMapToWindowLevelColors>(arg0->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkCornerAnnotation>(m_instance)->SetWindowLevel(arg0Wrap);
}



vtkImageMapToWindowLevelColors^ vtkCornerAnnotation::GetWindowLevel()
{
  ::vtkImageMapToWindowLevelColors* retVal = static_cast<::vtkImageMapToWindowLevelColors*>(vtk::ConvertManagedToNative<::vtkCornerAnnotation>(m_instance)->GetWindowLevel());
  return gcnew vtkImageMapToWindowLevelColors(IntPtr(retVal), false);
}



void vtkCornerAnnotation::SetLevelShift(double arg0)
{
  vtk::ConvertManagedToNative<::vtkCornerAnnotation>(m_instance)->SetLevelShift(arg0);
}



double vtkCornerAnnotation::GetLevelShift()
{
  double retVal = vtk::ConvertManagedToNative<::vtkCornerAnnotation>(m_instance)->GetLevelShift();
  return retVal;
}



void vtkCornerAnnotation::SetLevelScale(double arg0)
{
  vtk::ConvertManagedToNative<::vtkCornerAnnotation>(m_instance)->SetLevelScale(arg0);
}



double vtkCornerAnnotation::GetLevelScale()
{
  double retVal = vtk::ConvertManagedToNative<::vtkCornerAnnotation>(m_instance)->GetLevelScale();
  return retVal;
}



void vtkCornerAnnotation::SetTextProperty(vtkTextProperty^ p)
{
  ::vtkTextProperty* pWrap = vtk::ConvertManagedToNative<::vtkTextProperty>(p->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkCornerAnnotation>(m_instance)->SetTextProperty(pWrap);
}



vtkTextProperty^ vtkCornerAnnotation::GetTextProperty()
{
  ::vtkTextProperty* retVal = static_cast<::vtkTextProperty*>(vtk::ConvertManagedToNative<::vtkCornerAnnotation>(m_instance)->GetTextProperty());
  return gcnew vtkTextProperty(IntPtr(retVal), false);
}



void vtkCornerAnnotation::ShowSliceAndImageOn()
{
  vtk::ConvertManagedToNative<::vtkCornerAnnotation>(m_instance)->ShowSliceAndImageOn();
}



void vtkCornerAnnotation::ShowSliceAndImageOff()
{
  vtk::ConvertManagedToNative<::vtkCornerAnnotation>(m_instance)->ShowSliceAndImageOff();
}



void vtkCornerAnnotation::SetShowSliceAndImage(int arg0)
{
  vtk::ConvertManagedToNative<::vtkCornerAnnotation>(m_instance)->SetShowSliceAndImage(arg0);
}



int vtkCornerAnnotation::GetShowSliceAndImage()
{
  int retVal = vtk::ConvertManagedToNative<::vtkCornerAnnotation>(m_instance)->GetShowSliceAndImage();
  return retVal;
}



  vtkCornerAnnotation::vtkCornerAnnotation(System::IntPtr native, bool bConst) : vtkActor2D(native, bConst) {}



  vtkCornerAnnotation::vtkCornerAnnotation(bool donothing) : vtkActor2D(donothing) {}



  vtkCornerAnnotation::vtkCornerAnnotation() : vtkActor2D(false) {
  this->SetNativePointer(IntPtr(::vtkCornerAnnotation::New()));
}



  vtkCornerAnnotation::~vtkCornerAnnotation() { }





} // end namespace vtkHybrid
