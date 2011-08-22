

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkTextSourceDotNet.h"

// native includes
#include "strstream"
#include "vtkTextSource.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkTextSource::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkTextSource>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkTextSource::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkTextSource>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkTextSource^ vtkTextSource::NewInstance()
{
  ::vtkTextSource* retVal = static_cast<::vtkTextSource*>(vtk::ConvertManagedToNative<::vtkTextSource>(m_instance)->NewInstance());
  return gcnew vtkTextSource(IntPtr(retVal), false);
}



vtkTextSource^ vtkTextSource::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkTextSource* retVal = static_cast<::vtkTextSource*>(::vtkTextSource::SafeDownCast(oWrap));
  return gcnew vtkTextSource(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkTextSource::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkTextSource>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkTextSource::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkTextSource>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkTextSource::SetText(System::String^ arg0)
{
  char* arg0Wrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(arg0).ToPointer());
  vtk::ConvertManagedToNative<::vtkTextSource>(m_instance)->SetText(arg0Wrap);
  arg0->Remove(0,arg0->Length);
  arg0->Insert(0,System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(arg0Wrap)));
System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(arg0Wrap));
}



System::String^ vtkTextSource::GetText()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkTextSource>(m_instance)->GetText();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



void vtkTextSource::SetBacking(int arg0)
{
  vtk::ConvertManagedToNative<::vtkTextSource>(m_instance)->SetBacking(arg0);
}



int vtkTextSource::GetBacking()
{
  int retVal = vtk::ConvertManagedToNative<::vtkTextSource>(m_instance)->GetBacking();
  return retVal;
}



void vtkTextSource::BackingOn()
{
  vtk::ConvertManagedToNative<::vtkTextSource>(m_instance)->BackingOn();
}



void vtkTextSource::BackingOff()
{
  vtk::ConvertManagedToNative<::vtkTextSource>(m_instance)->BackingOff();
}



void vtkTextSource::SetForegroundColor(double arg0, double arg1, double arg2)
{
  vtk::ConvertManagedToNative<::vtkTextSource>(m_instance)->SetForegroundColor(arg0, arg1, arg2);
}



void vtkTextSource::SetForegroundColor(array<double>^ a)
{
  pin_ptr<double> aPin = &a[0];
  double* nativeaPin = aPin;
  vtk::ConvertManagedToNative<::vtkTextSource>(m_instance)->SetForegroundColor(nativeaPin);
}



array<double>^ vtkTextSource::GetForegroundColor()
{
  const double* retVal = vtk::ConvertManagedToNative<::vtkTextSource>(m_instance)->GetForegroundColor();
  array<double>^ mRetVal = gcnew array<double>(3);
  for (size_t cprIdx=0; cprIdx<3; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



void vtkTextSource::SetBackgroundColor(double arg0, double arg1, double arg2)
{
  vtk::ConvertManagedToNative<::vtkTextSource>(m_instance)->SetBackgroundColor(arg0, arg1, arg2);
}



void vtkTextSource::SetBackgroundColor(array<double>^ a)
{
  pin_ptr<double> aPin = &a[0];
  double* nativeaPin = aPin;
  vtk::ConvertManagedToNative<::vtkTextSource>(m_instance)->SetBackgroundColor(nativeaPin);
}



array<double>^ vtkTextSource::GetBackgroundColor()
{
  const double* retVal = vtk::ConvertManagedToNative<::vtkTextSource>(m_instance)->GetBackgroundColor();
  array<double>^ mRetVal = gcnew array<double>(3);
  for (size_t cprIdx=0; cprIdx<3; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



  vtkTextSource::vtkTextSource(System::IntPtr native, bool bConst) : vtkPolyDataAlgorithm(native, bConst) {}



  vtkTextSource::vtkTextSource(bool donothing) : vtkPolyDataAlgorithm(donothing) {}



  vtkTextSource::vtkTextSource() : vtkPolyDataAlgorithm(false) {
  this->SetNativePointer(IntPtr(::vtkTextSource::New()));
}



  vtkTextSource::~vtkTextSource() { }





} // end namespace vtkGraphics
