

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkAnimationCueDotNet.h"

// native includes
#include "strstream"
#include "vtkAnimationCue.h"

using namespace System;

namespace vtk {

System::String^ vtkAnimationCue::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkAnimationCue>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkAnimationCue::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkAnimationCue>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkAnimationCue^ vtkAnimationCue::NewInstance()
{
  ::vtkAnimationCue* retVal = static_cast<::vtkAnimationCue*>(vtk::ConvertManagedToNative<::vtkAnimationCue>(m_instance)->NewInstance());
  return gcnew vtkAnimationCue(IntPtr(retVal), false);
}



vtkAnimationCue^ vtkAnimationCue::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkAnimationCue* retVal = static_cast<::vtkAnimationCue*>(::vtkAnimationCue::SafeDownCast(oWrap));
  return gcnew vtkAnimationCue(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkAnimationCue::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkAnimationCue>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkAnimationCue::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkAnimationCue>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkAnimationCue::SetTimeMode(int mode)
{
  vtk::ConvertManagedToNative<::vtkAnimationCue>(m_instance)->SetTimeMode(mode);
}



int vtkAnimationCue::GetTimeMode()
{
  int retVal = vtk::ConvertManagedToNative<::vtkAnimationCue>(m_instance)->GetTimeMode();
  return retVal;
}



void vtkAnimationCue::SetTimeModeToRelative()
{
  vtk::ConvertManagedToNative<::vtkAnimationCue>(m_instance)->SetTimeModeToRelative();
}



void vtkAnimationCue::SetTimeModeToNormalized()
{
  vtk::ConvertManagedToNative<::vtkAnimationCue>(m_instance)->SetTimeModeToNormalized();
}



void vtkAnimationCue::SetStartTime(double arg0)
{
  vtk::ConvertManagedToNative<::vtkAnimationCue>(m_instance)->SetStartTime(arg0);
}



double vtkAnimationCue::GetStartTime()
{
  double retVal = vtk::ConvertManagedToNative<::vtkAnimationCue>(m_instance)->GetStartTime();
  return retVal;
}



void vtkAnimationCue::SetEndTime(double arg0)
{
  vtk::ConvertManagedToNative<::vtkAnimationCue>(m_instance)->SetEndTime(arg0);
}



double vtkAnimationCue::GetEndTime()
{
  double retVal = vtk::ConvertManagedToNative<::vtkAnimationCue>(m_instance)->GetEndTime();
  return retVal;
}



void vtkAnimationCue::Tick(double currenttime, double deltatime)
{
  vtk::ConvertManagedToNative<::vtkAnimationCue>(m_instance)->Tick(currenttime, deltatime);
}



void vtkAnimationCue::Initialize()
{
  vtk::ConvertManagedToNative<::vtkAnimationCue>(m_instance)->Initialize();
}



void vtkAnimationCue::FinalizeWrap()
{
  vtk::ConvertManagedToNative<::vtkAnimationCue>(m_instance)->Finalize();
}



  vtkAnimationCue::vtkAnimationCue(System::IntPtr native, bool bConst) : vtkObject(native, bConst) {}



  vtkAnimationCue::vtkAnimationCue(bool donothing) : vtkObject(donothing) {}



  vtkAnimationCue::vtkAnimationCue() : vtkObject(false) {
  this->SetNativePointer(IntPtr(::vtkAnimationCue::New()));
}



  vtkAnimationCue::~vtkAnimationCue() { }





} // end namespace vtkCommon
