

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkAnimationSceneDotNet.h"
#include "vtkObjectDotNet.h"

// native includes
#include "strstream"
#include "vtkAnimationScene.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkAnimationScene::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkAnimationScene>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkAnimationScene::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkAnimationScene>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkAnimationScene^ vtkAnimationScene::NewInstance()
{
  ::vtkAnimationScene* retVal = static_cast<::vtkAnimationScene*>(vtk::ConvertManagedToNative<::vtkAnimationScene>(m_instance)->NewInstance());
  return gcnew vtkAnimationScene(IntPtr(retVal), false);
}



vtkAnimationScene^ vtkAnimationScene::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkAnimationScene* retVal = static_cast<::vtkAnimationScene*>(::vtkAnimationScene::SafeDownCast(oWrap));
  return gcnew vtkAnimationScene(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkAnimationScene::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkAnimationScene>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkAnimationScene::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkAnimationScene>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkAnimationScene::SetPlayMode(int arg0)
{
  vtk::ConvertManagedToNative<::vtkAnimationScene>(m_instance)->SetPlayMode(arg0);
}



void vtkAnimationScene::SetModeToSequence()
{
  vtk::ConvertManagedToNative<::vtkAnimationScene>(m_instance)->SetModeToSequence();
}



void vtkAnimationScene::SetModeToRealTime()
{
  vtk::ConvertManagedToNative<::vtkAnimationScene>(m_instance)->SetModeToRealTime();
}



int vtkAnimationScene::GetPlayMode()
{
  int retVal = vtk::ConvertManagedToNative<::vtkAnimationScene>(m_instance)->GetPlayMode();
  return retVal;
}



void vtkAnimationScene::SetFrameRate(double arg0)
{
  vtk::ConvertManagedToNative<::vtkAnimationScene>(m_instance)->SetFrameRate(arg0);
}



double vtkAnimationScene::GetFrameRate()
{
  double retVal = vtk::ConvertManagedToNative<::vtkAnimationScene>(m_instance)->GetFrameRate();
  return retVal;
}



void vtkAnimationScene::AddCue(vtkAnimationCue^ cue)
{
  ::vtkAnimationCue* cueWrap = vtk::ConvertManagedToNative<::vtkAnimationCue>(cue->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkAnimationScene>(m_instance)->AddCue(cueWrap);
}



void vtkAnimationScene::RemoveCue(vtkAnimationCue^ cue)
{
  ::vtkAnimationCue* cueWrap = vtk::ConvertManagedToNative<::vtkAnimationCue>(cue->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkAnimationScene>(m_instance)->RemoveCue(cueWrap);
}



void vtkAnimationScene::Play()
{
  vtk::ConvertManagedToNative<::vtkAnimationScene>(m_instance)->Play();
}



void vtkAnimationScene::Stop()
{
  vtk::ConvertManagedToNative<::vtkAnimationScene>(m_instance)->Stop();
}



void vtkAnimationScene::SetLoop(int arg0)
{
  vtk::ConvertManagedToNative<::vtkAnimationScene>(m_instance)->SetLoop(arg0);
}



int vtkAnimationScene::GetLoop()
{
  int retVal = vtk::ConvertManagedToNative<::vtkAnimationScene>(m_instance)->GetLoop();
  return retVal;
}



void vtkAnimationScene::SetAnimationTime(double time)
{
  vtk::ConvertManagedToNative<::vtkAnimationScene>(m_instance)->SetAnimationTime(time);
}



void vtkAnimationScene::SetTimeMode(int mode)
{
  vtk::ConvertManagedToNative<::vtkAnimationScene>(m_instance)->SetTimeMode(mode);
}



int vtkAnimationScene::IsInPlay()
{
  int retVal = vtk::ConvertManagedToNative<::vtkAnimationScene>(m_instance)->IsInPlay();
  return retVal;
}



  vtkAnimationScene::vtkAnimationScene(System::IntPtr native, bool bConst) : vtkAnimationCue(native, bConst) {}



  vtkAnimationScene::vtkAnimationScene(bool donothing) : vtkAnimationCue(donothing) {}



  vtkAnimationScene::vtkAnimationScene() : vtkAnimationCue(false) {
  this->SetNativePointer(IntPtr(::vtkAnimationScene::New()));
}



  vtkAnimationScene::~vtkAnimationScene() { }





} // end namespace vtkCommon
