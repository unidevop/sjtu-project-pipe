

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkImageMapToWindowLevelColorsDotNet.h"

// native includes
#include "strstream"
#include "vtkImageMapToWindowLevelColors.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkImageMapToWindowLevelColors::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkImageMapToWindowLevelColors>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkImageMapToWindowLevelColors::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkImageMapToWindowLevelColors>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkImageMapToWindowLevelColors^ vtkImageMapToWindowLevelColors::NewInstance()
{
  ::vtkImageMapToWindowLevelColors* retVal = static_cast<::vtkImageMapToWindowLevelColors*>(vtk::ConvertManagedToNative<::vtkImageMapToWindowLevelColors>(m_instance)->NewInstance());
  return gcnew vtkImageMapToWindowLevelColors(IntPtr(retVal), false);
}



vtkImageMapToWindowLevelColors^ vtkImageMapToWindowLevelColors::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkImageMapToWindowLevelColors* retVal = static_cast<::vtkImageMapToWindowLevelColors*>(::vtkImageMapToWindowLevelColors::SafeDownCast(oWrap));
  return gcnew vtkImageMapToWindowLevelColors(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkImageMapToWindowLevelColors::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkImageMapToWindowLevelColors>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkImageMapToWindowLevelColors::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkImageMapToWindowLevelColors>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkImageMapToWindowLevelColors::SetWindow(double arg0)
{
  vtk::ConvertManagedToNative<::vtkImageMapToWindowLevelColors>(m_instance)->SetWindow(arg0);
}



double vtkImageMapToWindowLevelColors::GetWindow()
{
  double retVal = vtk::ConvertManagedToNative<::vtkImageMapToWindowLevelColors>(m_instance)->GetWindow();
  return retVal;
}



void vtkImageMapToWindowLevelColors::SetLevel(double arg0)
{
  vtk::ConvertManagedToNative<::vtkImageMapToWindowLevelColors>(m_instance)->SetLevel(arg0);
}



double vtkImageMapToWindowLevelColors::GetLevel()
{
  double retVal = vtk::ConvertManagedToNative<::vtkImageMapToWindowLevelColors>(m_instance)->GetLevel();
  return retVal;
}



  vtkImageMapToWindowLevelColors::vtkImageMapToWindowLevelColors(System::IntPtr native, bool bConst) : vtkImageMapToColors(native, bConst) {}



  vtkImageMapToWindowLevelColors::vtkImageMapToWindowLevelColors(bool donothing) : vtkImageMapToColors(donothing) {}



  vtkImageMapToWindowLevelColors::vtkImageMapToWindowLevelColors() : vtkImageMapToColors(false) {
  this->SetNativePointer(IntPtr(::vtkImageMapToWindowLevelColors::New()));
}



  vtkImageMapToWindowLevelColors::~vtkImageMapToWindowLevelColors() { }





} // end namespace vtkImaging
