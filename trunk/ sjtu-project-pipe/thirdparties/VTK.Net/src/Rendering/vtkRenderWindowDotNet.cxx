

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkRenderWindowDotNet.h"
#include "vtkRenderWindowInteractorDotNet.h"
#include "vtkRendererDotNet.h"
#include "vtkRendererCollectionDotNet.h"

// native includes
#include "strstream"
#include "vtkRenderWindow.h"
#include "vtkFloatArray.h"
#include "vtkObject.h"
#include "vtkObjectBase.h"
#include "vtkRenderWindowInteractor.h"
#include "vtkRenderer.h"
#include "vtkRendererCollection.h"
#include "vtkUnsignedCharArray.h"

using namespace System;

namespace vtk {

System::String^ vtkRenderWindow::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkRenderWindow>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkRenderWindow::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkRenderWindow>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkRenderWindow^ vtkRenderWindow::NewInstance()
{
  ::vtkRenderWindow* retVal = static_cast<::vtkRenderWindow*>(vtk::ConvertManagedToNative<::vtkRenderWindow>(m_instance)->NewInstance());
  return gcnew vtkRenderWindow(IntPtr(retVal), false);
}



vtkRenderWindow^ vtkRenderWindow::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkRenderWindow* retVal = static_cast<::vtkRenderWindow*>(::vtkRenderWindow::SafeDownCast(oWrap));
  return gcnew vtkRenderWindow(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkRenderWindow::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkRenderWindow>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkRenderWindow::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkRenderWindow>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkRenderWindow::AddRenderer(vtkRenderer^ arg0)
{
  ::vtkRenderer* arg0Wrap = vtk::ConvertManagedToNative<::vtkRenderer>(arg0->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkRenderWindow>(m_instance)->AddRenderer(arg0Wrap);
}



void vtkRenderWindow::RemoveRenderer(vtkRenderer^ arg0)
{
  ::vtkRenderer* arg0Wrap = vtk::ConvertManagedToNative<::vtkRenderer>(arg0->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkRenderWindow>(m_instance)->RemoveRenderer(arg0Wrap);
}



int vtkRenderWindow::HasRenderer(vtkRenderer^ arg0)
{
  ::vtkRenderer* arg0Wrap = vtk::ConvertManagedToNative<::vtkRenderer>(arg0->GetNativePointer());
  int retVal = vtk::ConvertManagedToNative<::vtkRenderWindow>(m_instance)->HasRenderer(arg0Wrap);
  return retVal;
}



System::String^ vtkRenderWindow::GetRenderLibrary()
{
  const char* retVal = ::vtkRenderWindow::GetRenderLibrary();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



vtkRendererCollection^ vtkRenderWindow::GetRenderers()
{
  ::vtkRendererCollection* retVal = static_cast<::vtkRendererCollection*>(vtk::ConvertManagedToNative<::vtkRenderWindow>(m_instance)->GetRenderers());
  return gcnew vtkRendererCollection(IntPtr(retVal), false);
}



void vtkRenderWindow::Render()
{
  vtk::ConvertManagedToNative<::vtkRenderWindow>(m_instance)->Render();
}



void vtkRenderWindow::Start()
{
  vtk::ConvertManagedToNative<::vtkRenderWindow>(m_instance)->Start();
}



void vtkRenderWindow::FinalizeWrap()
{
  vtk::ConvertManagedToNative<::vtkRenderWindow>(m_instance)->Finalize();
}



void vtkRenderWindow::Frame()
{
  vtk::ConvertManagedToNative<::vtkRenderWindow>(m_instance)->Frame();
}



void vtkRenderWindow::CopyResultFrame()
{
  vtk::ConvertManagedToNative<::vtkRenderWindow>(m_instance)->CopyResultFrame();
}



vtkRenderWindowInteractor^ vtkRenderWindow::MakeRenderWindowInteractor()
{
  ::vtkRenderWindowInteractor* retVal = static_cast<::vtkRenderWindowInteractor*>(vtk::ConvertManagedToNative<::vtkRenderWindow>(m_instance)->MakeRenderWindowInteractor());
  return gcnew vtkRenderWindowInteractor(IntPtr(retVal), false);
}



void vtkRenderWindow::HideCursor()
{
  vtk::ConvertManagedToNative<::vtkRenderWindow>(m_instance)->HideCursor();
}



void vtkRenderWindow::ShowCursor()
{
  vtk::ConvertManagedToNative<::vtkRenderWindow>(m_instance)->ShowCursor();
}



void vtkRenderWindow::SetCursorPosition(int arg0, int arg1)
{
  vtk::ConvertManagedToNative<::vtkRenderWindow>(m_instance)->SetCursorPosition(arg0, arg1);
}



void vtkRenderWindow::SetCurrentCursor(int arg0)
{
  vtk::ConvertManagedToNative<::vtkRenderWindow>(m_instance)->SetCurrentCursor(arg0);
}



int vtkRenderWindow::GetCurrentCursor()
{
  int retVal = vtk::ConvertManagedToNative<::vtkRenderWindow>(m_instance)->GetCurrentCursor();
  return retVal;
}



void vtkRenderWindow::SetFullScreen(int arg0)
{
  vtk::ConvertManagedToNative<::vtkRenderWindow>(m_instance)->SetFullScreen(arg0);
}



int vtkRenderWindow::GetFullScreen()
{
  int retVal = vtk::ConvertManagedToNative<::vtkRenderWindow>(m_instance)->GetFullScreen();
  return retVal;
}



void vtkRenderWindow::FullScreenOn()
{
  vtk::ConvertManagedToNative<::vtkRenderWindow>(m_instance)->FullScreenOn();
}



void vtkRenderWindow::FullScreenOff()
{
  vtk::ConvertManagedToNative<::vtkRenderWindow>(m_instance)->FullScreenOff();
}



void vtkRenderWindow::SetBorders(int arg0)
{
  vtk::ConvertManagedToNative<::vtkRenderWindow>(m_instance)->SetBorders(arg0);
}



int vtkRenderWindow::GetBorders()
{
  int retVal = vtk::ConvertManagedToNative<::vtkRenderWindow>(m_instance)->GetBorders();
  return retVal;
}



void vtkRenderWindow::BordersOn()
{
  vtk::ConvertManagedToNative<::vtkRenderWindow>(m_instance)->BordersOn();
}



void vtkRenderWindow::BordersOff()
{
  vtk::ConvertManagedToNative<::vtkRenderWindow>(m_instance)->BordersOff();
}



int vtkRenderWindow::GetStereoCapableWindow()
{
  int retVal = vtk::ConvertManagedToNative<::vtkRenderWindow>(m_instance)->GetStereoCapableWindow();
  return retVal;
}



void vtkRenderWindow::StereoCapableWindowOn()
{
  vtk::ConvertManagedToNative<::vtkRenderWindow>(m_instance)->StereoCapableWindowOn();
}



void vtkRenderWindow::StereoCapableWindowOff()
{
  vtk::ConvertManagedToNative<::vtkRenderWindow>(m_instance)->StereoCapableWindowOff();
}



void vtkRenderWindow::SetStereoCapableWindow(int capable)
{
  vtk::ConvertManagedToNative<::vtkRenderWindow>(m_instance)->SetStereoCapableWindow(capable);
}



int vtkRenderWindow::GetStereoRender()
{
  int retVal = vtk::ConvertManagedToNative<::vtkRenderWindow>(m_instance)->GetStereoRender();
  return retVal;
}



void vtkRenderWindow::SetStereoRender(int stereo)
{
  vtk::ConvertManagedToNative<::vtkRenderWindow>(m_instance)->SetStereoRender(stereo);
}



void vtkRenderWindow::StereoRenderOn()
{
  vtk::ConvertManagedToNative<::vtkRenderWindow>(m_instance)->StereoRenderOn();
}



void vtkRenderWindow::StereoRenderOff()
{
  vtk::ConvertManagedToNative<::vtkRenderWindow>(m_instance)->StereoRenderOff();
}



void vtkRenderWindow::SetAlphaBitPlanes(int arg0)
{
  vtk::ConvertManagedToNative<::vtkRenderWindow>(m_instance)->SetAlphaBitPlanes(arg0);
}



int vtkRenderWindow::GetAlphaBitPlanes()
{
  int retVal = vtk::ConvertManagedToNative<::vtkRenderWindow>(m_instance)->GetAlphaBitPlanes();
  return retVal;
}



void vtkRenderWindow::AlphaBitPlanesOn()
{
  vtk::ConvertManagedToNative<::vtkRenderWindow>(m_instance)->AlphaBitPlanesOn();
}



void vtkRenderWindow::AlphaBitPlanesOff()
{
  vtk::ConvertManagedToNative<::vtkRenderWindow>(m_instance)->AlphaBitPlanesOff();
}



void vtkRenderWindow::SetPointSmoothing(int arg0)
{
  vtk::ConvertManagedToNative<::vtkRenderWindow>(m_instance)->SetPointSmoothing(arg0);
}



int vtkRenderWindow::GetPointSmoothing()
{
  int retVal = vtk::ConvertManagedToNative<::vtkRenderWindow>(m_instance)->GetPointSmoothing();
  return retVal;
}



void vtkRenderWindow::PointSmoothingOn()
{
  vtk::ConvertManagedToNative<::vtkRenderWindow>(m_instance)->PointSmoothingOn();
}



void vtkRenderWindow::PointSmoothingOff()
{
  vtk::ConvertManagedToNative<::vtkRenderWindow>(m_instance)->PointSmoothingOff();
}



void vtkRenderWindow::SetLineSmoothing(int arg0)
{
  vtk::ConvertManagedToNative<::vtkRenderWindow>(m_instance)->SetLineSmoothing(arg0);
}



int vtkRenderWindow::GetLineSmoothing()
{
  int retVal = vtk::ConvertManagedToNative<::vtkRenderWindow>(m_instance)->GetLineSmoothing();
  return retVal;
}



void vtkRenderWindow::LineSmoothingOn()
{
  vtk::ConvertManagedToNative<::vtkRenderWindow>(m_instance)->LineSmoothingOn();
}



void vtkRenderWindow::LineSmoothingOff()
{
  vtk::ConvertManagedToNative<::vtkRenderWindow>(m_instance)->LineSmoothingOff();
}



void vtkRenderWindow::SetPolygonSmoothing(int arg0)
{
  vtk::ConvertManagedToNative<::vtkRenderWindow>(m_instance)->SetPolygonSmoothing(arg0);
}



int vtkRenderWindow::GetPolygonSmoothing()
{
  int retVal = vtk::ConvertManagedToNative<::vtkRenderWindow>(m_instance)->GetPolygonSmoothing();
  return retVal;
}



void vtkRenderWindow::PolygonSmoothingOn()
{
  vtk::ConvertManagedToNative<::vtkRenderWindow>(m_instance)->PolygonSmoothingOn();
}



void vtkRenderWindow::PolygonSmoothingOff()
{
  vtk::ConvertManagedToNative<::vtkRenderWindow>(m_instance)->PolygonSmoothingOff();
}



int vtkRenderWindow::GetStereoType()
{
  int retVal = vtk::ConvertManagedToNative<::vtkRenderWindow>(m_instance)->GetStereoType();
  return retVal;
}



void vtkRenderWindow::SetStereoType(int arg0)
{
  vtk::ConvertManagedToNative<::vtkRenderWindow>(m_instance)->SetStereoType(arg0);
}



void vtkRenderWindow::SetStereoTypeToCrystalEyes()
{
  vtk::ConvertManagedToNative<::vtkRenderWindow>(m_instance)->SetStereoTypeToCrystalEyes();
}



void vtkRenderWindow::SetStereoTypeToRedBlue()
{
  vtk::ConvertManagedToNative<::vtkRenderWindow>(m_instance)->SetStereoTypeToRedBlue();
}



void vtkRenderWindow::SetStereoTypeToInterlaced()
{
  vtk::ConvertManagedToNative<::vtkRenderWindow>(m_instance)->SetStereoTypeToInterlaced();
}



void vtkRenderWindow::SetStereoTypeToLeft()
{
  vtk::ConvertManagedToNative<::vtkRenderWindow>(m_instance)->SetStereoTypeToLeft();
}



void vtkRenderWindow::SetStereoTypeToRight()
{
  vtk::ConvertManagedToNative<::vtkRenderWindow>(m_instance)->SetStereoTypeToRight();
}



void vtkRenderWindow::SetStereoTypeToDresden()
{
  vtk::ConvertManagedToNative<::vtkRenderWindow>(m_instance)->SetStereoTypeToDresden();
}



void vtkRenderWindow::SetStereoTypeToAnaglyph()
{
  vtk::ConvertManagedToNative<::vtkRenderWindow>(m_instance)->SetStereoTypeToAnaglyph();
}



System::String^ vtkRenderWindow::GetStereoTypeAsString()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkRenderWindow>(m_instance)->GetStereoTypeAsString();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



void vtkRenderWindow::StereoUpdate()
{
  vtk::ConvertManagedToNative<::vtkRenderWindow>(m_instance)->StereoUpdate();
}



void vtkRenderWindow::StereoMidpoint()
{
  vtk::ConvertManagedToNative<::vtkRenderWindow>(m_instance)->StereoMidpoint();
}



void vtkRenderWindow::StereoRenderComplete()
{
  vtk::ConvertManagedToNative<::vtkRenderWindow>(m_instance)->StereoRenderComplete();
}



void vtkRenderWindow::SetAnaglyphColorSaturation(float arg0)
{
  vtk::ConvertManagedToNative<::vtkRenderWindow>(m_instance)->SetAnaglyphColorSaturation(arg0);
}



float vtkRenderWindow::GetAnaglyphColorSaturationMinValue()
{
  float retVal = vtk::ConvertManagedToNative<::vtkRenderWindow>(m_instance)->GetAnaglyphColorSaturationMinValue();
  return retVal;
}



float vtkRenderWindow::GetAnaglyphColorSaturationMaxValue()
{
  float retVal = vtk::ConvertManagedToNative<::vtkRenderWindow>(m_instance)->GetAnaglyphColorSaturationMaxValue();
  return retVal;
}



float vtkRenderWindow::GetAnaglyphColorSaturation()
{
  float retVal = vtk::ConvertManagedToNative<::vtkRenderWindow>(m_instance)->GetAnaglyphColorSaturation();
  return retVal;
}



void vtkRenderWindow::SetAnaglyphColorMask(int arg0, int arg1)
{
  vtk::ConvertManagedToNative<::vtkRenderWindow>(m_instance)->SetAnaglyphColorMask(arg0, arg1);
}



void vtkRenderWindow::SetAnaglyphColorMask(array<int>^ a)
{
  pin_ptr<int> aPin = &a[0];
  int* nativeaPin = aPin;
  vtk::ConvertManagedToNative<::vtkRenderWindow>(m_instance)->SetAnaglyphColorMask(nativeaPin);
}



array<int>^ vtkRenderWindow::GetAnaglyphColorMask()
{
  const int* retVal = vtk::ConvertManagedToNative<::vtkRenderWindow>(m_instance)->GetAnaglyphColorMask();
  array<int>^ mRetVal = gcnew array<int>(2);
  for (size_t cprIdx=0; cprIdx<2; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



void vtkRenderWindow::WindowRemap()
{
  vtk::ConvertManagedToNative<::vtkRenderWindow>(m_instance)->WindowRemap();
}



void vtkRenderWindow::SetSwapBuffers(int arg0)
{
  vtk::ConvertManagedToNative<::vtkRenderWindow>(m_instance)->SetSwapBuffers(arg0);
}



int vtkRenderWindow::GetSwapBuffers()
{
  int retVal = vtk::ConvertManagedToNative<::vtkRenderWindow>(m_instance)->GetSwapBuffers();
  return retVal;
}



void vtkRenderWindow::SwapBuffersOn()
{
  vtk::ConvertManagedToNative<::vtkRenderWindow>(m_instance)->SwapBuffersOn();
}



void vtkRenderWindow::SwapBuffersOff()
{
  vtk::ConvertManagedToNative<::vtkRenderWindow>(m_instance)->SwapBuffersOff();
}



int vtkRenderWindow::SetPixelData(int arg0, int arg1, int arg2, int arg3, array<unsigned char>^ arg4, int arg5)
{
  pin_ptr<unsigned char> arg4Pin = &arg4[0];
  unsigned char* nativearg4Pin = arg4Pin;
  int retVal = vtk::ConvertManagedToNative<::vtkRenderWindow>(m_instance)->SetPixelData(arg0, arg1, arg2, arg3, nativearg4Pin, arg5);
  return retVal;
}



int vtkRenderWindow::SetPixelData(int arg0, int arg1, int arg2, int arg3, vtkUnsignedCharArray^ arg4, int arg5)
{
  ::vtkUnsignedCharArray* arg4Wrap = vtk::ConvertManagedToNative<::vtkUnsignedCharArray>(arg4->GetNativePointer());
  int retVal = vtk::ConvertManagedToNative<::vtkRenderWindow>(m_instance)->SetPixelData(arg0, arg1, arg2, arg3, arg4Wrap, arg5);
  return retVal;
}



int vtkRenderWindow::GetRGBAPixelData(int arg0, int arg1, int arg2, int arg3, int arg4, vtkFloatArray^ arg5)
{
  ::vtkFloatArray* arg5Wrap = vtk::ConvertManagedToNative<::vtkFloatArray>(arg5->GetNativePointer());
  int retVal = vtk::ConvertManagedToNative<::vtkRenderWindow>(m_instance)->GetRGBAPixelData(arg0, arg1, arg2, arg3, arg4, arg5Wrap);
  return retVal;
}



int vtkRenderWindow::SetRGBAPixelData(int arg0, int arg1, int arg2, int arg3, array<float>^ arg4, int arg5, int blend)
{
  pin_ptr<float> arg4Pin = &arg4[0];
  float* nativearg4Pin = arg4Pin;
  int retVal = vtk::ConvertManagedToNative<::vtkRenderWindow>(m_instance)->SetRGBAPixelData(arg0, arg1, arg2, arg3, nativearg4Pin, arg5, blend);
  return retVal;
}



int vtkRenderWindow::SetRGBAPixelData(int arg0, int arg1, int arg2, int arg3, vtkFloatArray^ arg4, int arg5, int blend)
{
  ::vtkFloatArray* arg4Wrap = vtk::ConvertManagedToNative<::vtkFloatArray>(arg4->GetNativePointer());
  int retVal = vtk::ConvertManagedToNative<::vtkRenderWindow>(m_instance)->SetRGBAPixelData(arg0, arg1, arg2, arg3, arg4Wrap, arg5, blend);
  return retVal;
}



void vtkRenderWindow::ReleaseRGBAPixelData(array<float>^ data)
{
  pin_ptr<float> dataPin = &data[0];
  float* nativedataPin = dataPin;
  vtk::ConvertManagedToNative<::vtkRenderWindow>(m_instance)->ReleaseRGBAPixelData(nativedataPin);
}



int vtkRenderWindow::GetRGBACharPixelData(int arg0, int arg1, int arg2, int arg3, int arg4, vtkUnsignedCharArray^ arg5)
{
  ::vtkUnsignedCharArray* arg5Wrap = vtk::ConvertManagedToNative<::vtkUnsignedCharArray>(arg5->GetNativePointer());
  int retVal = vtk::ConvertManagedToNative<::vtkRenderWindow>(m_instance)->GetRGBACharPixelData(arg0, arg1, arg2, arg3, arg4, arg5Wrap);
  return retVal;
}



int vtkRenderWindow::SetRGBACharPixelData(int arg0, int arg1, int arg2, int arg3, array<unsigned char>^ arg4, int arg5, int blend)
{
  pin_ptr<unsigned char> arg4Pin = &arg4[0];
  unsigned char* nativearg4Pin = arg4Pin;
  int retVal = vtk::ConvertManagedToNative<::vtkRenderWindow>(m_instance)->SetRGBACharPixelData(arg0, arg1, arg2, arg3, nativearg4Pin, arg5, blend);
  return retVal;
}



int vtkRenderWindow::SetRGBACharPixelData(int arg0, int arg1, int arg2, int arg3, vtkUnsignedCharArray^ arg4, int arg5, int blend)
{
  ::vtkUnsignedCharArray* arg4Wrap = vtk::ConvertManagedToNative<::vtkUnsignedCharArray>(arg4->GetNativePointer());
  int retVal = vtk::ConvertManagedToNative<::vtkRenderWindow>(m_instance)->SetRGBACharPixelData(arg0, arg1, arg2, arg3, arg4Wrap, arg5, blend);
  return retVal;
}



int vtkRenderWindow::GetZbufferData(int arg0, int arg1, int arg2, int arg3, array<float>^ arg4)
{
  pin_ptr<float> arg4Pin = &arg4[0];
  float* nativearg4Pin = arg4Pin;
  int retVal = vtk::ConvertManagedToNative<::vtkRenderWindow>(m_instance)->GetZbufferData(arg0, arg1, arg2, arg3, nativearg4Pin);
  return retVal;
}



int vtkRenderWindow::GetZbufferData(int arg0, int arg1, int arg2, int arg3, vtkFloatArray^ arg4)
{
  ::vtkFloatArray* arg4Wrap = vtk::ConvertManagedToNative<::vtkFloatArray>(arg4->GetNativePointer());
  int retVal = vtk::ConvertManagedToNative<::vtkRenderWindow>(m_instance)->GetZbufferData(arg0, arg1, arg2, arg3, arg4Wrap);
  return retVal;
}



int vtkRenderWindow::SetZbufferData(int arg0, int arg1, int arg2, int arg3, array<float>^ arg4)
{
  pin_ptr<float> arg4Pin = &arg4[0];
  float* nativearg4Pin = arg4Pin;
  int retVal = vtk::ConvertManagedToNative<::vtkRenderWindow>(m_instance)->SetZbufferData(arg0, arg1, arg2, arg3, nativearg4Pin);
  return retVal;
}



int vtkRenderWindow::SetZbufferData(int arg0, int arg1, int arg2, int arg3, vtkFloatArray^ arg4)
{
  ::vtkFloatArray* arg4Wrap = vtk::ConvertManagedToNative<::vtkFloatArray>(arg4->GetNativePointer());
  int retVal = vtk::ConvertManagedToNative<::vtkRenderWindow>(m_instance)->SetZbufferData(arg0, arg1, arg2, arg3, arg4Wrap);
  return retVal;
}



int vtkRenderWindow::GetAAFrames()
{
  int retVal = vtk::ConvertManagedToNative<::vtkRenderWindow>(m_instance)->GetAAFrames();
  return retVal;
}



void vtkRenderWindow::SetAAFrames(int arg0)
{
  vtk::ConvertManagedToNative<::vtkRenderWindow>(m_instance)->SetAAFrames(arg0);
}



int vtkRenderWindow::GetFDFrames()
{
  int retVal = vtk::ConvertManagedToNative<::vtkRenderWindow>(m_instance)->GetFDFrames();
  return retVal;
}



void vtkRenderWindow::SetFDFrames(int arg0)
{
  vtk::ConvertManagedToNative<::vtkRenderWindow>(m_instance)->SetFDFrames(arg0);
}



int vtkRenderWindow::GetSubFrames()
{
  int retVal = vtk::ConvertManagedToNative<::vtkRenderWindow>(m_instance)->GetSubFrames();
  return retVal;
}



void vtkRenderWindow::SetSubFrames(int subFrames)
{
  vtk::ConvertManagedToNative<::vtkRenderWindow>(m_instance)->SetSubFrames(subFrames);
}



int vtkRenderWindow::GetNeverRendered()
{
  int retVal = vtk::ConvertManagedToNative<::vtkRenderWindow>(m_instance)->GetNeverRendered();
  return retVal;
}



int vtkRenderWindow::GetAbortRender()
{
  int retVal = vtk::ConvertManagedToNative<::vtkRenderWindow>(m_instance)->GetAbortRender();
  return retVal;
}



void vtkRenderWindow::SetAbortRender(int arg0)
{
  vtk::ConvertManagedToNative<::vtkRenderWindow>(m_instance)->SetAbortRender(arg0);
}



int vtkRenderWindow::GetInAbortCheck()
{
  int retVal = vtk::ConvertManagedToNative<::vtkRenderWindow>(m_instance)->GetInAbortCheck();
  return retVal;
}



void vtkRenderWindow::SetInAbortCheck(int arg0)
{
  vtk::ConvertManagedToNative<::vtkRenderWindow>(m_instance)->SetInAbortCheck(arg0);
}



int vtkRenderWindow::CheckAbortStatus()
{
  int retVal = vtk::ConvertManagedToNative<::vtkRenderWindow>(m_instance)->CheckAbortStatus();
  return retVal;
}



int vtkRenderWindow::GetIsPicking()
{
  int retVal = vtk::ConvertManagedToNative<::vtkRenderWindow>(m_instance)->GetIsPicking();
  return retVal;
}



void vtkRenderWindow::SetIsPicking(int arg0)
{
  vtk::ConvertManagedToNative<::vtkRenderWindow>(m_instance)->SetIsPicking(arg0);
}



void vtkRenderWindow::IsPickingOn()
{
  vtk::ConvertManagedToNative<::vtkRenderWindow>(m_instance)->IsPickingOn();
}



void vtkRenderWindow::IsPickingOff()
{
  vtk::ConvertManagedToNative<::vtkRenderWindow>(m_instance)->IsPickingOff();
}



int vtkRenderWindow::GetEventPending()
{
  int retVal = vtk::ConvertManagedToNative<::vtkRenderWindow>(m_instance)->GetEventPending();
  return retVal;
}



int vtkRenderWindow::CheckInRenderStatus()
{
  int retVal = vtk::ConvertManagedToNative<::vtkRenderWindow>(m_instance)->CheckInRenderStatus();
  return retVal;
}



void vtkRenderWindow::ClearInRenderStatus()
{
  vtk::ConvertManagedToNative<::vtkRenderWindow>(m_instance)->ClearInRenderStatus();
}



void vtkRenderWindow::SetDesiredUpdateRate(double arg0)
{
  vtk::ConvertManagedToNative<::vtkRenderWindow>(m_instance)->SetDesiredUpdateRate(arg0);
}



double vtkRenderWindow::GetDesiredUpdateRate()
{
  double retVal = vtk::ConvertManagedToNative<::vtkRenderWindow>(m_instance)->GetDesiredUpdateRate();
  return retVal;
}



int vtkRenderWindow::GetNumberOfLayers()
{
  int retVal = vtk::ConvertManagedToNative<::vtkRenderWindow>(m_instance)->GetNumberOfLayers();
  return retVal;
}



void vtkRenderWindow::SetNumberOfLayers(int arg0)
{
  vtk::ConvertManagedToNative<::vtkRenderWindow>(m_instance)->SetNumberOfLayers(arg0);
}



int vtkRenderWindow::GetNumberOfLayersMinValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkRenderWindow>(m_instance)->GetNumberOfLayersMinValue();
  return retVal;
}



int vtkRenderWindow::GetNumberOfLayersMaxValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkRenderWindow>(m_instance)->GetNumberOfLayersMaxValue();
  return retVal;
}



vtkRenderWindowInteractor^ vtkRenderWindow::GetInteractor()
{
  ::vtkRenderWindowInteractor* retVal = static_cast<::vtkRenderWindowInteractor*>(vtk::ConvertManagedToNative<::vtkRenderWindow>(m_instance)->GetInteractor());
  return gcnew vtkRenderWindowInteractor(IntPtr(retVal), false);
}



void vtkRenderWindow::SetInteractor(vtkRenderWindowInteractor^ arg0)
{
  ::vtkRenderWindowInteractor* arg0Wrap = vtk::ConvertManagedToNative<::vtkRenderWindowInteractor>(arg0->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkRenderWindow>(m_instance)->SetInteractor(arg0Wrap);
}



void vtkRenderWindow::UnRegister(vtkObjectBase^ o)
{
  ::vtkObjectBase* oWrap = static_cast<::vtkObjectBase*>(o->GetNativePointer().ToPointer());
  vtk::ConvertManagedToNative<::vtkRenderWindow>(m_instance)->UnRegister(oWrap);
}



void vtkRenderWindow::SetDisplayId(System::IntPtr arg0)
{
  vtk::ConvertManagedToNative<::vtkRenderWindow>(m_instance)->SetDisplayId(arg0.ToPointer());
}



void vtkRenderWindow::SetWindowId(System::IntPtr arg0)
{
  vtk::ConvertManagedToNative<::vtkRenderWindow>(m_instance)->SetWindowId(arg0.ToPointer());
}



void vtkRenderWindow::SetNextWindowId(System::IntPtr arg0)
{
  vtk::ConvertManagedToNative<::vtkRenderWindow>(m_instance)->SetNextWindowId(arg0.ToPointer());
}



void vtkRenderWindow::SetParentId(System::IntPtr arg0)
{
  vtk::ConvertManagedToNative<::vtkRenderWindow>(m_instance)->SetParentId(arg0.ToPointer());
}



System::IntPtr vtkRenderWindow::GetGenericDisplayId()
{
  void* retVal = vtk::ConvertManagedToNative<::vtkRenderWindow>(m_instance)->GetGenericDisplayId();
  IntPtr retValWrap(retVal);
  return retValWrap;
}



System::IntPtr vtkRenderWindow::GetGenericWindowId()
{
  void* retVal = vtk::ConvertManagedToNative<::vtkRenderWindow>(m_instance)->GetGenericWindowId();
  IntPtr retValWrap(retVal);
  return retValWrap;
}



System::IntPtr vtkRenderWindow::GetGenericParentId()
{
  void* retVal = vtk::ConvertManagedToNative<::vtkRenderWindow>(m_instance)->GetGenericParentId();
  IntPtr retValWrap(retVal);
  return retValWrap;
}



System::IntPtr vtkRenderWindow::GetGenericContext()
{
  void* retVal = vtk::ConvertManagedToNative<::vtkRenderWindow>(m_instance)->GetGenericContext();
  IntPtr retValWrap(retVal);
  return retValWrap;
}



System::IntPtr vtkRenderWindow::GetGenericDrawable()
{
  void* retVal = vtk::ConvertManagedToNative<::vtkRenderWindow>(m_instance)->GetGenericDrawable();
  IntPtr retValWrap(retVal);
  return retValWrap;
}



void vtkRenderWindow::SetWindowInfo(System::String^ arg0)
{
  char* arg0Wrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(arg0).ToPointer());
  vtk::ConvertManagedToNative<::vtkRenderWindow>(m_instance)->SetWindowInfo(arg0Wrap);
  arg0->Remove(0,arg0->Length);
  arg0->Insert(0,System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(arg0Wrap)));
System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(arg0Wrap));
}



void vtkRenderWindow::SetNextWindowInfo(System::String^ arg0)
{
  char* arg0Wrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(arg0).ToPointer());
  vtk::ConvertManagedToNative<::vtkRenderWindow>(m_instance)->SetNextWindowInfo(arg0Wrap);
  arg0->Remove(0,arg0->Length);
  arg0->Insert(0,System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(arg0Wrap)));
System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(arg0Wrap));
}



void vtkRenderWindow::SetParentInfo(System::String^ arg0)
{
  char* arg0Wrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(arg0).ToPointer());
  vtk::ConvertManagedToNative<::vtkRenderWindow>(m_instance)->SetParentInfo(arg0Wrap);
  arg0->Remove(0,arg0->Length);
  arg0->Insert(0,System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(arg0Wrap)));
System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(arg0Wrap));
}



void vtkRenderWindow::MakeCurrent()
{
  vtk::ConvertManagedToNative<::vtkRenderWindow>(m_instance)->MakeCurrent();
}



void vtkRenderWindow::SetForceMakeCurrent()
{
  vtk::ConvertManagedToNative<::vtkRenderWindow>(m_instance)->SetForceMakeCurrent();
}



System::String^ vtkRenderWindow::ReportCapabilities()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkRenderWindow>(m_instance)->ReportCapabilities();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkRenderWindow::SupportsOpenGL()
{
  int retVal = vtk::ConvertManagedToNative<::vtkRenderWindow>(m_instance)->SupportsOpenGL();
  return retVal;
}



int vtkRenderWindow::IsDirect()
{
  int retVal = vtk::ConvertManagedToNative<::vtkRenderWindow>(m_instance)->IsDirect();
  return retVal;
}



int vtkRenderWindow::GetDepthBufferSize()
{
  int retVal = vtk::ConvertManagedToNative<::vtkRenderWindow>(m_instance)->GetDepthBufferSize();
  return retVal;
}



  vtkRenderWindow::vtkRenderWindow(System::IntPtr native, bool bConst) : vtkWindow(native, bConst) {}



  vtkRenderWindow::vtkRenderWindow(bool donothing) : vtkWindow(donothing) {}



  vtkRenderWindow::vtkRenderWindow() : vtkWindow(false) {
  this->SetNativePointer(IntPtr(::vtkRenderWindow::New()));
}



  vtkRenderWindow::~vtkRenderWindow() { }





} // end namespace vtkRendering
