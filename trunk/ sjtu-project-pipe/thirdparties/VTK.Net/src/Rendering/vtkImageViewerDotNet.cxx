

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkImageViewerDotNet.h"
#include "vtkImageMapperDotNet.h"
#include "vtkRenderWindowDotNet.h"
#include "vtkRenderWindowInteractorDotNet.h"
#include "vtkRendererDotNet.h"

// native includes
#include "strstream"
#include "vtkImageViewer.h"
#include "vtkActor2D.h"
#include "vtkAlgorithmOutput.h"
#include "vtkImageData.h"
#include "vtkImageMapper.h"
#include "vtkRenderWindow.h"
#include "vtkRenderWindowInteractor.h"
#include "vtkRenderer.h"

using namespace System;

namespace vtk {

System::String^ vtkImageViewer::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkImageViewer>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkImageViewer::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkImageViewer>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkImageViewer^ vtkImageViewer::NewInstance()
{
  ::vtkImageViewer* retVal = static_cast<::vtkImageViewer*>(vtk::ConvertManagedToNative<::vtkImageViewer>(m_instance)->NewInstance());
  return gcnew vtkImageViewer(IntPtr(retVal), false);
}



vtkImageViewer^ vtkImageViewer::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkImageViewer* retVal = static_cast<::vtkImageViewer*>(::vtkImageViewer::SafeDownCast(oWrap));
  return gcnew vtkImageViewer(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkImageViewer::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkImageViewer>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkImageViewer::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkImageViewer>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




System::String^ vtkImageViewer::GetWindowName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkImageViewer>(m_instance)->GetWindowName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



void vtkImageViewer::Render()
{
  vtk::ConvertManagedToNative<::vtkImageViewer>(m_instance)->Render();
}



void vtkImageViewer::SetInput(vtkImageData^ in)
{
  ::vtkImageData* inWrap = vtk::ConvertManagedToNative<::vtkImageData>(in->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkImageViewer>(m_instance)->SetInput(inWrap);
}



vtkImageData^ vtkImageViewer::GetInput()
{
  ::vtkImageData* retVal = static_cast<::vtkImageData*>(vtk::ConvertManagedToNative<::vtkImageViewer>(m_instance)->GetInput());
  return gcnew vtkImageData(IntPtr(retVal), false);
}



void vtkImageViewer::SetInputConnection(vtkAlgorithmOutput^ input)
{
  ::vtkAlgorithmOutput* inputWrap = vtk::ConvertManagedToNative<::vtkAlgorithmOutput>(input->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkImageViewer>(m_instance)->SetInputConnection(inputWrap);
}



int vtkImageViewer::GetWholeZMin()
{
  int retVal = vtk::ConvertManagedToNative<::vtkImageViewer>(m_instance)->GetWholeZMin();
  return retVal;
}



int vtkImageViewer::GetWholeZMax()
{
  int retVal = vtk::ConvertManagedToNative<::vtkImageViewer>(m_instance)->GetWholeZMax();
  return retVal;
}



int vtkImageViewer::GetZSlice()
{
  int retVal = vtk::ConvertManagedToNative<::vtkImageViewer>(m_instance)->GetZSlice();
  return retVal;
}



void vtkImageViewer::SetZSlice(int s)
{
  vtk::ConvertManagedToNative<::vtkImageViewer>(m_instance)->SetZSlice(s);
}



double vtkImageViewer::GetColorWindow()
{
  double retVal = vtk::ConvertManagedToNative<::vtkImageViewer>(m_instance)->GetColorWindow();
  return retVal;
}



double vtkImageViewer::GetColorLevel()
{
  double retVal = vtk::ConvertManagedToNative<::vtkImageViewer>(m_instance)->GetColorLevel();
  return retVal;
}



void vtkImageViewer::SetColorWindow(double s)
{
  vtk::ConvertManagedToNative<::vtkImageViewer>(m_instance)->SetColorWindow(s);
}



void vtkImageViewer::SetColorLevel(double s)
{
  vtk::ConvertManagedToNative<::vtkImageViewer>(m_instance)->SetColorLevel(s);
}



void vtkImageViewer::SetDisplayId(System::IntPtr a)
{
  vtk::ConvertManagedToNative<::vtkImageViewer>(m_instance)->SetDisplayId(a.ToPointer());
}



void vtkImageViewer::SetWindowId(System::IntPtr a)
{
  vtk::ConvertManagedToNative<::vtkImageViewer>(m_instance)->SetWindowId(a.ToPointer());
}



void vtkImageViewer::SetParentId(System::IntPtr a)
{
  vtk::ConvertManagedToNative<::vtkImageViewer>(m_instance)->SetParentId(a.ToPointer());
}



int vtkImageViewer::GetGrayScaleHint()
{
  int retVal = vtk::ConvertManagedToNative<::vtkImageViewer>(m_instance)->GetGrayScaleHint();
  return retVal;
}



void vtkImageViewer::SetGrayScaleHint(int arg0)
{
  vtk::ConvertManagedToNative<::vtkImageViewer>(m_instance)->SetGrayScaleHint(arg0);
}



void vtkImageViewer::GrayScaleHintOn()
{
  vtk::ConvertManagedToNative<::vtkImageViewer>(m_instance)->GrayScaleHintOn();
}



void vtkImageViewer::GrayScaleHintOff()
{
  vtk::ConvertManagedToNative<::vtkImageViewer>(m_instance)->GrayScaleHintOff();
}



array<int>^ vtkImageViewer::GetPosition()
{
  const int* retVal = vtk::ConvertManagedToNative<::vtkImageViewer>(m_instance)->GetPosition();
  array<int>^ mRetVal = gcnew array<int>(2);
  for (size_t cprIdx=0; cprIdx<2; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



void vtkImageViewer::SetPosition(int a, int b)
{
  vtk::ConvertManagedToNative<::vtkImageViewer>(m_instance)->SetPosition(a, b);
}



void vtkImageViewer::SetPosition(array<int>^ a)
{
  pin_ptr<int> aPin = &a[0];
  int* nativeaPin = aPin;
  vtk::ConvertManagedToNative<::vtkImageViewer>(m_instance)->SetPosition(nativeaPin);
}



array<int>^ vtkImageViewer::GetSize()
{
  const int* retVal = vtk::ConvertManagedToNative<::vtkImageViewer>(m_instance)->GetSize();
  array<int>^ mRetVal = gcnew array<int>(2);
  for (size_t cprIdx=0; cprIdx<2; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



void vtkImageViewer::SetSize(int a, int b)
{
  vtk::ConvertManagedToNative<::vtkImageViewer>(m_instance)->SetSize(a, b);
}



void vtkImageViewer::SetSize(array<int>^ a)
{
  pin_ptr<int> aPin = &a[0];
  int* nativeaPin = aPin;
  vtk::ConvertManagedToNative<::vtkImageViewer>(m_instance)->SetSize(nativeaPin);
}



vtkRenderWindow^ vtkImageViewer::GetRenderWindow()
{
  ::vtkRenderWindow* retVal = static_cast<::vtkRenderWindow*>(vtk::ConvertManagedToNative<::vtkImageViewer>(m_instance)->GetRenderWindow());
  return gcnew vtkRenderWindow(IntPtr(retVal), false);
}



vtkRenderer^ vtkImageViewer::GetRenderer()
{
  ::vtkRenderer* retVal = static_cast<::vtkRenderer*>(vtk::ConvertManagedToNative<::vtkImageViewer>(m_instance)->GetRenderer());
  return gcnew vtkRenderer(IntPtr(retVal), false);
}



vtkImageMapper^ vtkImageViewer::GetImageMapper()
{
  ::vtkImageMapper* retVal = static_cast<::vtkImageMapper*>(vtk::ConvertManagedToNative<::vtkImageViewer>(m_instance)->GetImageMapper());
  return gcnew vtkImageMapper(IntPtr(retVal), false);
}



vtkActor2D^ vtkImageViewer::GetActor2D()
{
  ::vtkActor2D* retVal = static_cast<::vtkActor2D*>(vtk::ConvertManagedToNative<::vtkImageViewer>(m_instance)->GetActor2D());
  return gcnew vtkActor2D(IntPtr(retVal), false);
}



void vtkImageViewer::SetupInteractor(vtkRenderWindowInteractor^ arg0)
{
  ::vtkRenderWindowInteractor* arg0Wrap = vtk::ConvertManagedToNative<::vtkRenderWindowInteractor>(arg0->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkImageViewer>(m_instance)->SetupInteractor(arg0Wrap);
}



void vtkImageViewer::SetOffScreenRendering(int arg0)
{
  vtk::ConvertManagedToNative<::vtkImageViewer>(m_instance)->SetOffScreenRendering(arg0);
}



int vtkImageViewer::GetOffScreenRendering()
{
  int retVal = vtk::ConvertManagedToNative<::vtkImageViewer>(m_instance)->GetOffScreenRendering();
  return retVal;
}



void vtkImageViewer::OffScreenRenderingOn()
{
  vtk::ConvertManagedToNative<::vtkImageViewer>(m_instance)->OffScreenRenderingOn();
}



void vtkImageViewer::OffScreenRenderingOff()
{
  vtk::ConvertManagedToNative<::vtkImageViewer>(m_instance)->OffScreenRenderingOff();
}



  vtkImageViewer::vtkImageViewer(System::IntPtr native, bool bConst) : vtkObject(native, bConst) {}



  vtkImageViewer::vtkImageViewer(bool donothing) : vtkObject(donothing) {}



  vtkImageViewer::vtkImageViewer() : vtkObject(false) {
  this->SetNativePointer(IntPtr(::vtkImageViewer::New()));
}



  vtkImageViewer::~vtkImageViewer() { }





} // end namespace vtkRendering
