

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkRIBExporterDotNet.h"

// native includes
#include "strstream"
#include "vtkRIBExporter.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkRIBExporter::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkRIBExporter>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkRIBExporter::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkRIBExporter>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkRIBExporter^ vtkRIBExporter::NewInstance()
{
  ::vtkRIBExporter* retVal = static_cast<::vtkRIBExporter*>(vtk::ConvertManagedToNative<::vtkRIBExporter>(m_instance)->NewInstance());
  return gcnew vtkRIBExporter(IntPtr(retVal), false);
}



vtkRIBExporter^ vtkRIBExporter::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkRIBExporter* retVal = static_cast<::vtkRIBExporter*>(::vtkRIBExporter::SafeDownCast(oWrap));
  return gcnew vtkRIBExporter(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkRIBExporter::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkRIBExporter>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkRIBExporter::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkRIBExporter>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkRIBExporter::SetSize(int arg0, int arg1)
{
  vtk::ConvertManagedToNative<::vtkRIBExporter>(m_instance)->SetSize(arg0, arg1);
}



void vtkRIBExporter::SetSize(array<int>^ a)
{
  pin_ptr<int> aPin = &a[0];
  int* nativeaPin = aPin;
  vtk::ConvertManagedToNative<::vtkRIBExporter>(m_instance)->SetSize(nativeaPin);
}



array<int>^ vtkRIBExporter::GetSize()
{
  const int* retVal = vtk::ConvertManagedToNative<::vtkRIBExporter>(m_instance)->GetSize();
  array<int>^ mRetVal = gcnew array<int>(2);
  for (size_t cprIdx=0; cprIdx<2; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



void vtkRIBExporter::SetPixelSamples(int arg0, int arg1)
{
  vtk::ConvertManagedToNative<::vtkRIBExporter>(m_instance)->SetPixelSamples(arg0, arg1);
}



void vtkRIBExporter::SetPixelSamples(array<int>^ a)
{
  pin_ptr<int> aPin = &a[0];
  int* nativeaPin = aPin;
  vtk::ConvertManagedToNative<::vtkRIBExporter>(m_instance)->SetPixelSamples(nativeaPin);
}



array<int>^ vtkRIBExporter::GetPixelSamples()
{
  const int* retVal = vtk::ConvertManagedToNative<::vtkRIBExporter>(m_instance)->GetPixelSamples();
  array<int>^ mRetVal = gcnew array<int>(2);
  for (size_t cprIdx=0; cprIdx<2; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



void vtkRIBExporter::SetFilePrefix(System::String^ arg0)
{
  char* arg0Wrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(arg0).ToPointer());
  vtk::ConvertManagedToNative<::vtkRIBExporter>(m_instance)->SetFilePrefix(arg0Wrap);
  arg0->Remove(0,arg0->Length);
  arg0->Insert(0,System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(arg0Wrap)));
System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(arg0Wrap));
}



System::String^ vtkRIBExporter::GetFilePrefix()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkRIBExporter>(m_instance)->GetFilePrefix();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



void vtkRIBExporter::SetTexturePrefix(System::String^ arg0)
{
  char* arg0Wrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(arg0).ToPointer());
  vtk::ConvertManagedToNative<::vtkRIBExporter>(m_instance)->SetTexturePrefix(arg0Wrap);
  arg0->Remove(0,arg0->Length);
  arg0->Insert(0,System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(arg0Wrap)));
System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(arg0Wrap));
}



System::String^ vtkRIBExporter::GetTexturePrefix()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkRIBExporter>(m_instance)->GetTexturePrefix();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



void vtkRIBExporter::SetBackground(int arg0)
{
  vtk::ConvertManagedToNative<::vtkRIBExporter>(m_instance)->SetBackground(arg0);
}



int vtkRIBExporter::GetBackground()
{
  int retVal = vtk::ConvertManagedToNative<::vtkRIBExporter>(m_instance)->GetBackground();
  return retVal;
}



void vtkRIBExporter::BackgroundOn()
{
  vtk::ConvertManagedToNative<::vtkRIBExporter>(m_instance)->BackgroundOn();
}



void vtkRIBExporter::BackgroundOff()
{
  vtk::ConvertManagedToNative<::vtkRIBExporter>(m_instance)->BackgroundOff();
}



void vtkRIBExporter::SetExportArrays(int arg0)
{
  vtk::ConvertManagedToNative<::vtkRIBExporter>(m_instance)->SetExportArrays(arg0);
}



int vtkRIBExporter::GetExportArraysMinValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkRIBExporter>(m_instance)->GetExportArraysMinValue();
  return retVal;
}



int vtkRIBExporter::GetExportArraysMaxValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkRIBExporter>(m_instance)->GetExportArraysMaxValue();
  return retVal;
}



void vtkRIBExporter::ExportArraysOn()
{
  vtk::ConvertManagedToNative<::vtkRIBExporter>(m_instance)->ExportArraysOn();
}



void vtkRIBExporter::ExportArraysOff()
{
  vtk::ConvertManagedToNative<::vtkRIBExporter>(m_instance)->ExportArraysOff();
}



int vtkRIBExporter::GetExportArrays()
{
  int retVal = vtk::ConvertManagedToNative<::vtkRIBExporter>(m_instance)->GetExportArrays();
  return retVal;
}



  vtkRIBExporter::vtkRIBExporter(System::IntPtr native, bool bConst) : vtkExporter(native, bConst) {}



  vtkRIBExporter::vtkRIBExporter(bool donothing) : vtkExporter(donothing) {}



  vtkRIBExporter::vtkRIBExporter() : vtkExporter(false) {
  this->SetNativePointer(IntPtr(::vtkRIBExporter::New()));
}



  vtkRIBExporter::~vtkRIBExporter() { }





} // end namespace vtkHybrid
