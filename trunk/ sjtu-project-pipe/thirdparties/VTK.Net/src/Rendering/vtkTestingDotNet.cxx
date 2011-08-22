

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkTestingDotNet.h"
#include "vtkRenderWindowDotNet.h"

// native includes
#include "strstream"
#include "vtkTesting.h"
#include "vtkImageData.h"
#include "vtkRenderWindow.h"

using namespace System;

namespace vtk {

System::String^ vtkTesting::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkTesting>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkTesting::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkTesting>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkTesting^ vtkTesting::NewInstance()
{
  ::vtkTesting* retVal = static_cast<::vtkTesting*>(vtk::ConvertManagedToNative<::vtkTesting>(m_instance)->NewInstance());
  return gcnew vtkTesting(IntPtr(retVal), false);
}



vtkTesting^ vtkTesting::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkTesting* retVal = static_cast<::vtkTesting*>(::vtkTesting::SafeDownCast(oWrap));
  return gcnew vtkTesting(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkTesting::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkTesting>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkTesting::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkTesting>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkTesting::SetFrontBuffer(int arg0)
{
  vtk::ConvertManagedToNative<::vtkTesting>(m_instance)->SetFrontBuffer(arg0);
}



int vtkTesting::GetFrontBufferMinValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkTesting>(m_instance)->GetFrontBufferMinValue();
  return retVal;
}



int vtkTesting::GetFrontBufferMaxValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkTesting>(m_instance)->GetFrontBufferMaxValue();
  return retVal;
}



void vtkTesting::FrontBufferOn()
{
  vtk::ConvertManagedToNative<::vtkTesting>(m_instance)->FrontBufferOn();
}



void vtkTesting::FrontBufferOff()
{
  vtk::ConvertManagedToNative<::vtkTesting>(m_instance)->FrontBufferOff();
}



int vtkTesting::GetFrontBuffer()
{
  int retVal = vtk::ConvertManagedToNative<::vtkTesting>(m_instance)->GetFrontBuffer();
  return retVal;
}



int vtkTesting::RegressionTest(double thresh)
{
  int retVal = vtk::ConvertManagedToNative<::vtkTesting>(m_instance)->RegressionTest(thresh);
  return retVal;
}



int vtkTesting::RegressionTest(vtkImageData^ image, double thresh)
{
  ::vtkImageData* imageWrap = vtk::ConvertManagedToNative<::vtkImageData>(image->GetNativePointer());
  int retVal = vtk::ConvertManagedToNative<::vtkTesting>(m_instance)->RegressionTest(imageWrap, thresh);
  return retVal;
}



void vtkTesting::SetRenderWindow(vtkRenderWindow^ rw)
{
  ::vtkRenderWindow* rwWrap = vtk::ConvertManagedToNative<::vtkRenderWindow>(rw->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkTesting>(m_instance)->SetRenderWindow(rwWrap);
}



vtkRenderWindow^ vtkTesting::GetRenderWindow()
{
  ::vtkRenderWindow* retVal = static_cast<::vtkRenderWindow*>(vtk::ConvertManagedToNative<::vtkTesting>(m_instance)->GetRenderWindow());
  return gcnew vtkRenderWindow(IntPtr(retVal), false);
}



void vtkTesting::SetValidImageFileName(System::String^ arg0)
{
  char* arg0Wrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(arg0).ToPointer());
  vtk::ConvertManagedToNative<::vtkTesting>(m_instance)->SetValidImageFileName(arg0Wrap);
  arg0->Remove(0,arg0->Length);
  arg0->Insert(0,System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(arg0Wrap)));
System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(arg0Wrap));
}



System::String^ vtkTesting::GetValidImageFileName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkTesting>(m_instance)->GetValidImageFileName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



double vtkTesting::GetImageDifference()
{
  double retVal = vtk::ConvertManagedToNative<::vtkTesting>(m_instance)->GetImageDifference();
  return retVal;
}



void vtkTesting::AddArgument(System::String^ argv)
{
  char* argvWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(argv).ToPointer());
  vtk::ConvertManagedToNative<::vtkTesting>(m_instance)->AddArgument(argvWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(argvWrap));
}



void vtkTesting::CleanArguments()
{
  vtk::ConvertManagedToNative<::vtkTesting>(m_instance)->CleanArguments();
}



System::String^ vtkTesting::GetDataRoot()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkTesting>(m_instance)->GetDataRoot();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



void vtkTesting::SetDataRoot(System::String^ arg0)
{
  char* arg0Wrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(arg0).ToPointer());
  vtk::ConvertManagedToNative<::vtkTesting>(m_instance)->SetDataRoot(arg0Wrap);
  arg0->Remove(0,arg0->Length);
  arg0->Insert(0,System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(arg0Wrap)));
System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(arg0Wrap));
}



System::String^ vtkTesting::GetTempDirectory()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkTesting>(m_instance)->GetTempDirectory();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



void vtkTesting::SetTempDirectory(System::String^ arg0)
{
  char* arg0Wrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(arg0).ToPointer());
  vtk::ConvertManagedToNative<::vtkTesting>(m_instance)->SetTempDirectory(arg0Wrap);
  arg0->Remove(0,arg0->Length);
  arg0->Insert(0,System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(arg0Wrap)));
System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(arg0Wrap));
}



int vtkTesting::IsValidImageSpecified()
{
  int retVal = vtk::ConvertManagedToNative<::vtkTesting>(m_instance)->IsValidImageSpecified();
  return retVal;
}



int vtkTesting::IsInteractiveModeSpecified()
{
  int retVal = vtk::ConvertManagedToNative<::vtkTesting>(m_instance)->IsInteractiveModeSpecified();
  return retVal;
}



void vtkTesting::SetBorderOffset(int arg0)
{
  vtk::ConvertManagedToNative<::vtkTesting>(m_instance)->SetBorderOffset(arg0);
}



int vtkTesting::GetBorderOffset()
{
  int retVal = vtk::ConvertManagedToNative<::vtkTesting>(m_instance)->GetBorderOffset();
  return retVal;
}



  vtkTesting::vtkTesting(System::IntPtr native, bool bConst) : vtkObject(native, bConst) {}



  vtkTesting::vtkTesting(bool donothing) : vtkObject(donothing) {}



  vtkTesting::vtkTesting() : vtkObject(false) {
  this->SetNativePointer(IntPtr(::vtkTesting::New()));
}



  vtkTesting::~vtkTesting() { }





} // end namespace vtkRendering
