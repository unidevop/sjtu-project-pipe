

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkImageViewer2DotNet.h"
#include "vtkImageActorDotNet.h"
#include "vtkInteractorStyleImageDotNet.h"
#include "vtkRenderWindowDotNet.h"
#include "vtkRenderWindowInteractorDotNet.h"
#include "vtkRendererDotNet.h"

// native includes
#include "strstream"
#include "vtkImageViewer2.h"
#include "vtkAlgorithmOutput.h"
#include "vtkImageActor.h"
#include "vtkImageData.h"
#include "vtkImageMapToWindowLevelColors.h"
#include "vtkInteractorStyleImage.h"
#include "vtkRenderWindow.h"
#include "vtkRenderWindowInteractor.h"
#include "vtkRenderer.h"

using namespace System;

namespace vtk {

System::String^ vtkImageViewer2::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkImageViewer2>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkImageViewer2::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkImageViewer2>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkImageViewer2^ vtkImageViewer2::NewInstance()
{
  ::vtkImageViewer2* retVal = static_cast<::vtkImageViewer2*>(vtk::ConvertManagedToNative<::vtkImageViewer2>(m_instance)->NewInstance());
  return gcnew vtkImageViewer2(IntPtr(retVal), false);
}



vtkImageViewer2^ vtkImageViewer2::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkImageViewer2* retVal = static_cast<::vtkImageViewer2*>(::vtkImageViewer2::SafeDownCast(oWrap));
  return gcnew vtkImageViewer2(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkImageViewer2::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkImageViewer2>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkImageViewer2::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkImageViewer2>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




System::String^ vtkImageViewer2::GetWindowName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkImageViewer2>(m_instance)->GetWindowName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



void vtkImageViewer2::Render()
{
  vtk::ConvertManagedToNative<::vtkImageViewer2>(m_instance)->Render();
}



void vtkImageViewer2::SetInput(vtkImageData^ in)
{
  ::vtkImageData* inWrap = vtk::ConvertManagedToNative<::vtkImageData>(in->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkImageViewer2>(m_instance)->SetInput(inWrap);
}



vtkImageData^ vtkImageViewer2::GetInput()
{
  ::vtkImageData* retVal = static_cast<::vtkImageData*>(vtk::ConvertManagedToNative<::vtkImageViewer2>(m_instance)->GetInput());
  return gcnew vtkImageData(IntPtr(retVal), false);
}



void vtkImageViewer2::SetInputConnection(vtkAlgorithmOutput^ input)
{
  ::vtkAlgorithmOutput* inputWrap = vtk::ConvertManagedToNative<::vtkAlgorithmOutput>(input->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkImageViewer2>(m_instance)->SetInputConnection(inputWrap);
}



int vtkImageViewer2::GetSliceOrientation()
{
  int retVal = vtk::ConvertManagedToNative<::vtkImageViewer2>(m_instance)->GetSliceOrientation();
  return retVal;
}



void vtkImageViewer2::SetSliceOrientation(int orientation)
{
  vtk::ConvertManagedToNative<::vtkImageViewer2>(m_instance)->SetSliceOrientation(orientation);
}



void vtkImageViewer2::SetSliceOrientationToXY()
{
  vtk::ConvertManagedToNative<::vtkImageViewer2>(m_instance)->SetSliceOrientationToXY();
}



void vtkImageViewer2::SetSliceOrientationToYZ()
{
  vtk::ConvertManagedToNative<::vtkImageViewer2>(m_instance)->SetSliceOrientationToYZ();
}



void vtkImageViewer2::SetSliceOrientationToXZ()
{
  vtk::ConvertManagedToNative<::vtkImageViewer2>(m_instance)->SetSliceOrientationToXZ();
}



int vtkImageViewer2::GetSlice()
{
  int retVal = vtk::ConvertManagedToNative<::vtkImageViewer2>(m_instance)->GetSlice();
  return retVal;
}



void vtkImageViewer2::SetSlice(int s)
{
  vtk::ConvertManagedToNative<::vtkImageViewer2>(m_instance)->SetSlice(s);
}



int vtkImageViewer2::GetSliceMin()
{
  int retVal = vtk::ConvertManagedToNative<::vtkImageViewer2>(m_instance)->GetSliceMin();
  return retVal;
}



int vtkImageViewer2::GetSliceMax()
{
  int retVal = vtk::ConvertManagedToNative<::vtkImageViewer2>(m_instance)->GetSliceMax();
  return retVal;
}



void vtkImageViewer2::GetSliceRange(array<int>^ range)
{
  pin_ptr<int> rangePin = &range[0];
  int* nativerangePin = rangePin;
  vtk::ConvertManagedToNative<::vtkImageViewer2>(m_instance)->GetSliceRange(nativerangePin);
}



void vtkImageViewer2::GetSliceRange(int% min, int% max)
{
  pin_ptr<int> minPin = &min;
  pin_ptr<int> maxPin = &max;
  vtk::ConvertManagedToNative<::vtkImageViewer2>(m_instance)->GetSliceRange(*minPin, *maxPin);
}



double vtkImageViewer2::GetColorWindow()
{
  double retVal = vtk::ConvertManagedToNative<::vtkImageViewer2>(m_instance)->GetColorWindow();
  return retVal;
}



double vtkImageViewer2::GetColorLevel()
{
  double retVal = vtk::ConvertManagedToNative<::vtkImageViewer2>(m_instance)->GetColorLevel();
  return retVal;
}



void vtkImageViewer2::SetColorWindow(double s)
{
  vtk::ConvertManagedToNative<::vtkImageViewer2>(m_instance)->SetColorWindow(s);
}



void vtkImageViewer2::SetColorLevel(double s)
{
  vtk::ConvertManagedToNative<::vtkImageViewer2>(m_instance)->SetColorLevel(s);
}



void vtkImageViewer2::SetDisplayId(System::IntPtr a)
{
  vtk::ConvertManagedToNative<::vtkImageViewer2>(m_instance)->SetDisplayId(a.ToPointer());
}



void vtkImageViewer2::SetWindowId(System::IntPtr a)
{
  vtk::ConvertManagedToNative<::vtkImageViewer2>(m_instance)->SetWindowId(a.ToPointer());
}



void vtkImageViewer2::SetParentId(System::IntPtr a)
{
  vtk::ConvertManagedToNative<::vtkImageViewer2>(m_instance)->SetParentId(a.ToPointer());
}



void vtkImageViewer2::SetPosition(int a, int b)
{
  vtk::ConvertManagedToNative<::vtkImageViewer2>(m_instance)->SetPosition(a, b);
}



void vtkImageViewer2::SetPosition(array<int>^ a)
{
  pin_ptr<int> aPin = &a[0];
  int* nativeaPin = aPin;
  vtk::ConvertManagedToNative<::vtkImageViewer2>(m_instance)->SetPosition(nativeaPin);
}



void vtkImageViewer2::SetSize(int a, int b)
{
  vtk::ConvertManagedToNative<::vtkImageViewer2>(m_instance)->SetSize(a, b);
}



void vtkImageViewer2::SetSize(array<int>^ a)
{
  pin_ptr<int> aPin = &a[0];
  int* nativeaPin = aPin;
  vtk::ConvertManagedToNative<::vtkImageViewer2>(m_instance)->SetSize(nativeaPin);
}



vtkRenderWindow^ vtkImageViewer2::GetRenderWindow()
{
  ::vtkRenderWindow* retVal = static_cast<::vtkRenderWindow*>(vtk::ConvertManagedToNative<::vtkImageViewer2>(m_instance)->GetRenderWindow());
  return gcnew vtkRenderWindow(IntPtr(retVal), false);
}



vtkRenderer^ vtkImageViewer2::GetRenderer()
{
  ::vtkRenderer* retVal = static_cast<::vtkRenderer*>(vtk::ConvertManagedToNative<::vtkImageViewer2>(m_instance)->GetRenderer());
  return gcnew vtkRenderer(IntPtr(retVal), false);
}



vtkImageActor^ vtkImageViewer2::GetImageActor()
{
  ::vtkImageActor* retVal = static_cast<::vtkImageActor*>(vtk::ConvertManagedToNative<::vtkImageViewer2>(m_instance)->GetImageActor());
  return gcnew vtkImageActor(IntPtr(retVal), false);
}



vtkImageMapToWindowLevelColors^ vtkImageViewer2::GetWindowLevel()
{
  ::vtkImageMapToWindowLevelColors* retVal = static_cast<::vtkImageMapToWindowLevelColors*>(vtk::ConvertManagedToNative<::vtkImageViewer2>(m_instance)->GetWindowLevel());
  return gcnew vtkImageMapToWindowLevelColors(IntPtr(retVal), false);
}



vtkInteractorStyleImage^ vtkImageViewer2::GetInteractorStyle()
{
  ::vtkInteractorStyleImage* retVal = static_cast<::vtkInteractorStyleImage*>(vtk::ConvertManagedToNative<::vtkImageViewer2>(m_instance)->GetInteractorStyle());
  return gcnew vtkInteractorStyleImage(IntPtr(retVal), false);
}



void vtkImageViewer2::SetRenderWindow(vtkRenderWindow^ arg)
{
  ::vtkRenderWindow* argWrap = vtk::ConvertManagedToNative<::vtkRenderWindow>(arg->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkImageViewer2>(m_instance)->SetRenderWindow(argWrap);
}



void vtkImageViewer2::SetRenderer(vtkRenderer^ arg)
{
  ::vtkRenderer* argWrap = vtk::ConvertManagedToNative<::vtkRenderer>(arg->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkImageViewer2>(m_instance)->SetRenderer(argWrap);
}



void vtkImageViewer2::SetupInteractor(vtkRenderWindowInteractor^ arg0)
{
  ::vtkRenderWindowInteractor* arg0Wrap = vtk::ConvertManagedToNative<::vtkRenderWindowInteractor>(arg0->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkImageViewer2>(m_instance)->SetupInteractor(arg0Wrap);
}



void vtkImageViewer2::SetOffScreenRendering(int arg0)
{
  vtk::ConvertManagedToNative<::vtkImageViewer2>(m_instance)->SetOffScreenRendering(arg0);
}



int vtkImageViewer2::GetOffScreenRendering()
{
  int retVal = vtk::ConvertManagedToNative<::vtkImageViewer2>(m_instance)->GetOffScreenRendering();
  return retVal;
}



void vtkImageViewer2::OffScreenRenderingOn()
{
  vtk::ConvertManagedToNative<::vtkImageViewer2>(m_instance)->OffScreenRenderingOn();
}



void vtkImageViewer2::OffScreenRenderingOff()
{
  vtk::ConvertManagedToNative<::vtkImageViewer2>(m_instance)->OffScreenRenderingOff();
}



int vtkImageViewer2::GetWholeZMin()
{
  int retVal = vtk::ConvertManagedToNative<::vtkImageViewer2>(m_instance)->GetWholeZMin();
  return retVal;
}



int vtkImageViewer2::GetWholeZMax()
{
  int retVal = vtk::ConvertManagedToNative<::vtkImageViewer2>(m_instance)->GetWholeZMax();
  return retVal;
}



int vtkImageViewer2::GetZSlice()
{
  int retVal = vtk::ConvertManagedToNative<::vtkImageViewer2>(m_instance)->GetZSlice();
  return retVal;
}



void vtkImageViewer2::SetZSlice(int arg0)
{
  vtk::ConvertManagedToNative<::vtkImageViewer2>(m_instance)->SetZSlice(arg0);
}



  vtkImageViewer2::vtkImageViewer2(System::IntPtr native, bool bConst) : vtkObject(native, bConst) {}



  vtkImageViewer2::vtkImageViewer2(bool donothing) : vtkObject(donothing) {}



  vtkImageViewer2::vtkImageViewer2() : vtkObject(false) {
  this->SetNativePointer(IntPtr(::vtkImageViewer2::New()));
}



  vtkImageViewer2::~vtkImageViewer2() { }





} // end namespace vtkRendering
