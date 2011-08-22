

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkImageMapperDotNet.h"

// native includes
#include "strstream"
#include "vtkImageMapper.h"
#include "vtkActor2D.h"
#include "vtkImageData.h"
#include "vtkObject.h"
#include "vtkViewport.h"

using namespace System;

namespace vtk {

System::String^ vtkImageMapper::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkImageMapper>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkImageMapper::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkImageMapper>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkImageMapper^ vtkImageMapper::NewInstance()
{
  ::vtkImageMapper* retVal = static_cast<::vtkImageMapper*>(vtk::ConvertManagedToNative<::vtkImageMapper>(m_instance)->NewInstance());
  return gcnew vtkImageMapper(IntPtr(retVal), false);
}



vtkImageMapper^ vtkImageMapper::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkImageMapper* retVal = static_cast<::vtkImageMapper*>(::vtkImageMapper::SafeDownCast(oWrap));
  return gcnew vtkImageMapper(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkImageMapper::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkImageMapper>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkImageMapper::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkImageMapper>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




unsigned long vtkImageMapper::GetMTime()
{
  unsigned long retVal = vtk::ConvertManagedToNative<::vtkImageMapper>(m_instance)->GetMTime();
  return retVal;
}



void vtkImageMapper::SetColorWindow(double arg0)
{
  vtk::ConvertManagedToNative<::vtkImageMapper>(m_instance)->SetColorWindow(arg0);
}



double vtkImageMapper::GetColorWindow()
{
  double retVal = vtk::ConvertManagedToNative<::vtkImageMapper>(m_instance)->GetColorWindow();
  return retVal;
}



void vtkImageMapper::SetColorLevel(double arg0)
{
  vtk::ConvertManagedToNative<::vtkImageMapper>(m_instance)->SetColorLevel(arg0);
}



double vtkImageMapper::GetColorLevel()
{
  double retVal = vtk::ConvertManagedToNative<::vtkImageMapper>(m_instance)->GetColorLevel();
  return retVal;
}



void vtkImageMapper::SetZSlice(int arg0)
{
  vtk::ConvertManagedToNative<::vtkImageMapper>(m_instance)->SetZSlice(arg0);
}



int vtkImageMapper::GetZSlice()
{
  int retVal = vtk::ConvertManagedToNative<::vtkImageMapper>(m_instance)->GetZSlice();
  return retVal;
}



int vtkImageMapper::GetWholeZMin()
{
  int retVal = vtk::ConvertManagedToNative<::vtkImageMapper>(m_instance)->GetWholeZMin();
  return retVal;
}



int vtkImageMapper::GetWholeZMax()
{
  int retVal = vtk::ConvertManagedToNative<::vtkImageMapper>(m_instance)->GetWholeZMax();
  return retVal;
}



void vtkImageMapper::RenderStart(vtkViewport^ viewport, vtkActor2D^ actor)
{
  ::vtkViewport* viewportWrap = vtk::ConvertManagedToNative<::vtkViewport>(viewport->GetNativePointer());
  ::vtkActor2D* actorWrap = vtk::ConvertManagedToNative<::vtkActor2D>(actor->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkImageMapper>(m_instance)->RenderStart(viewportWrap, actorWrap);
}



void vtkImageMapper::RenderData(vtkViewport^ arg0, vtkImageData^ arg1, vtkActor2D^ arg2)
{
  ::vtkViewport* arg0Wrap = vtk::ConvertManagedToNative<::vtkViewport>(arg0->GetNativePointer());
  ::vtkImageData* arg1Wrap = vtk::ConvertManagedToNative<::vtkImageData>(arg1->GetNativePointer());
  ::vtkActor2D* arg2Wrap = vtk::ConvertManagedToNative<::vtkActor2D>(arg2->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkImageMapper>(m_instance)->RenderData(arg0Wrap, arg1Wrap, arg2Wrap);
}



double vtkImageMapper::GetColorShift()
{
  double retVal = vtk::ConvertManagedToNative<::vtkImageMapper>(m_instance)->GetColorShift();
  return retVal;
}



double vtkImageMapper::GetColorScale()
{
  double retVal = vtk::ConvertManagedToNative<::vtkImageMapper>(m_instance)->GetColorScale();
  return retVal;
}



void vtkImageMapper::SetInput(vtkImageData^ input)
{
  ::vtkImageData* inputWrap = vtk::ConvertManagedToNative<::vtkImageData>(input->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkImageMapper>(m_instance)->SetInput(inputWrap);
}



vtkImageData^ vtkImageMapper::GetInput()
{
  ::vtkImageData* retVal = static_cast<::vtkImageData*>(vtk::ConvertManagedToNative<::vtkImageMapper>(m_instance)->GetInput());
  return gcnew vtkImageData(IntPtr(retVal), false);
}



void vtkImageMapper::SetRenderToRectangle(int arg0)
{
  vtk::ConvertManagedToNative<::vtkImageMapper>(m_instance)->SetRenderToRectangle(arg0);
}



int vtkImageMapper::GetRenderToRectangle()
{
  int retVal = vtk::ConvertManagedToNative<::vtkImageMapper>(m_instance)->GetRenderToRectangle();
  return retVal;
}



void vtkImageMapper::RenderToRectangleOn()
{
  vtk::ConvertManagedToNative<::vtkImageMapper>(m_instance)->RenderToRectangleOn();
}



void vtkImageMapper::RenderToRectangleOff()
{
  vtk::ConvertManagedToNative<::vtkImageMapper>(m_instance)->RenderToRectangleOff();
}



void vtkImageMapper::SetUseCustomExtents(int arg0)
{
  vtk::ConvertManagedToNative<::vtkImageMapper>(m_instance)->SetUseCustomExtents(arg0);
}



int vtkImageMapper::GetUseCustomExtents()
{
  int retVal = vtk::ConvertManagedToNative<::vtkImageMapper>(m_instance)->GetUseCustomExtents();
  return retVal;
}



void vtkImageMapper::UseCustomExtentsOn()
{
  vtk::ConvertManagedToNative<::vtkImageMapper>(m_instance)->UseCustomExtentsOn();
}



void vtkImageMapper::UseCustomExtentsOff()
{
  vtk::ConvertManagedToNative<::vtkImageMapper>(m_instance)->UseCustomExtentsOff();
}



void vtkImageMapper::SetCustomDisplayExtents(array<int>^ arg0)
{
  pin_ptr<int> arg0Pin = &arg0[0];
  int* nativearg0Pin = arg0Pin;
  vtk::ConvertManagedToNative<::vtkImageMapper>(m_instance)->SetCustomDisplayExtents(nativearg0Pin);
}



array<int>^ vtkImageMapper::GetCustomDisplayExtents()
{
  const int* retVal = vtk::ConvertManagedToNative<::vtkImageMapper>(m_instance)->GetCustomDisplayExtents();
  array<int>^ mRetVal = gcnew array<int>(4);
  for (size_t cprIdx=0; cprIdx<4; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



  vtkImageMapper::vtkImageMapper(System::IntPtr native, bool bConst) : vtkMapper2D(native, bConst) {}



  vtkImageMapper::vtkImageMapper(bool donothing) : vtkMapper2D(donothing) {}



  vtkImageMapper::vtkImageMapper() : vtkMapper2D(false) {
  this->SetNativePointer(IntPtr(::vtkImageMapper::New()));
}



  vtkImageMapper::~vtkImageMapper() { }





} // end namespace vtkRendering
