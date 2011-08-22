

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkWindowLevelLookupTableDotNet.h"
#include "vtkObjectDotNet.h"

// native includes
#include "strstream"
#include "vtkWindowLevelLookupTable.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkWindowLevelLookupTable::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkWindowLevelLookupTable>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkWindowLevelLookupTable::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkWindowLevelLookupTable>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkWindowLevelLookupTable^ vtkWindowLevelLookupTable::NewInstance()
{
  ::vtkWindowLevelLookupTable* retVal = static_cast<::vtkWindowLevelLookupTable*>(vtk::ConvertManagedToNative<::vtkWindowLevelLookupTable>(m_instance)->NewInstance());
  return gcnew vtkWindowLevelLookupTable(IntPtr(retVal), false);
}



vtkWindowLevelLookupTable^ vtkWindowLevelLookupTable::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkWindowLevelLookupTable* retVal = static_cast<::vtkWindowLevelLookupTable*>(::vtkWindowLevelLookupTable::SafeDownCast(oWrap));
  return gcnew vtkWindowLevelLookupTable(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkWindowLevelLookupTable::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkWindowLevelLookupTable>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkWindowLevelLookupTable::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkWindowLevelLookupTable>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkWindowLevelLookupTable::Build()
{
  vtk::ConvertManagedToNative<::vtkWindowLevelLookupTable>(m_instance)->Build();
}



void vtkWindowLevelLookupTable::SetWindow(double window)
{
  vtk::ConvertManagedToNative<::vtkWindowLevelLookupTable>(m_instance)->SetWindow(window);
}



double vtkWindowLevelLookupTable::GetWindow()
{
  double retVal = vtk::ConvertManagedToNative<::vtkWindowLevelLookupTable>(m_instance)->GetWindow();
  return retVal;
}



void vtkWindowLevelLookupTable::SetLevel(double level)
{
  vtk::ConvertManagedToNative<::vtkWindowLevelLookupTable>(m_instance)->SetLevel(level);
}



double vtkWindowLevelLookupTable::GetLevel()
{
  double retVal = vtk::ConvertManagedToNative<::vtkWindowLevelLookupTable>(m_instance)->GetLevel();
  return retVal;
}



void vtkWindowLevelLookupTable::SetInverseVideo(int iv)
{
  vtk::ConvertManagedToNative<::vtkWindowLevelLookupTable>(m_instance)->SetInverseVideo(iv);
}



int vtkWindowLevelLookupTable::GetInverseVideo()
{
  int retVal = vtk::ConvertManagedToNative<::vtkWindowLevelLookupTable>(m_instance)->GetInverseVideo();
  return retVal;
}



void vtkWindowLevelLookupTable::InverseVideoOn()
{
  vtk::ConvertManagedToNative<::vtkWindowLevelLookupTable>(m_instance)->InverseVideoOn();
}



void vtkWindowLevelLookupTable::InverseVideoOff()
{
  vtk::ConvertManagedToNative<::vtkWindowLevelLookupTable>(m_instance)->InverseVideoOff();
}



void vtkWindowLevelLookupTable::SetMinimumTableValue(double arg0, double arg1, double arg2, double arg3)
{
  vtk::ConvertManagedToNative<::vtkWindowLevelLookupTable>(m_instance)->SetMinimumTableValue(arg0, arg1, arg2, arg3);
}



void vtkWindowLevelLookupTable::SetMinimumTableValue(array<double>^ a)
{
  pin_ptr<double> aPin = &a[0];
  double* nativeaPin = aPin;
  vtk::ConvertManagedToNative<::vtkWindowLevelLookupTable>(m_instance)->SetMinimumTableValue(nativeaPin);
}



array<double>^ vtkWindowLevelLookupTable::GetMinimumTableValue()
{
  const double* retVal = vtk::ConvertManagedToNative<::vtkWindowLevelLookupTable>(m_instance)->GetMinimumTableValue();
  array<double>^ mRetVal = gcnew array<double>(4);
  for (size_t cprIdx=0; cprIdx<4; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



void vtkWindowLevelLookupTable::SetMaximumTableValue(double arg0, double arg1, double arg2, double arg3)
{
  vtk::ConvertManagedToNative<::vtkWindowLevelLookupTable>(m_instance)->SetMaximumTableValue(arg0, arg1, arg2, arg3);
}



void vtkWindowLevelLookupTable::SetMaximumTableValue(array<double>^ a)
{
  pin_ptr<double> aPin = &a[0];
  double* nativeaPin = aPin;
  vtk::ConvertManagedToNative<::vtkWindowLevelLookupTable>(m_instance)->SetMaximumTableValue(nativeaPin);
}



array<double>^ vtkWindowLevelLookupTable::GetMaximumTableValue()
{
  const double* retVal = vtk::ConvertManagedToNative<::vtkWindowLevelLookupTable>(m_instance)->GetMaximumTableValue();
  array<double>^ mRetVal = gcnew array<double>(4);
  for (size_t cprIdx=0; cprIdx<4; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



void vtkWindowLevelLookupTable::SetMinimumColor(int r, int g, int b, int a)
{
  vtk::ConvertManagedToNative<::vtkWindowLevelLookupTable>(m_instance)->SetMinimumColor(r, g, b, a);
}



void vtkWindowLevelLookupTable::SetMinimumColor(array<unsigned char>^ rgba)
{
  pin_ptr<unsigned char> rgbaPin = &rgba[0];
  unsigned char* nativergbaPin = rgbaPin;
  vtk::ConvertManagedToNative<::vtkWindowLevelLookupTable>(m_instance)->SetMinimumColor(nativergbaPin);
}



void vtkWindowLevelLookupTable::GetMinimumColor(array<unsigned char>^ rgba)
{
  pin_ptr<unsigned char> rgbaPin = &rgba[0];
  unsigned char* nativergbaPin = rgbaPin;
  vtk::ConvertManagedToNative<::vtkWindowLevelLookupTable>(m_instance)->GetMinimumColor(nativergbaPin);
}



void vtkWindowLevelLookupTable::SetMaximumColor(int r, int g, int b, int a)
{
  vtk::ConvertManagedToNative<::vtkWindowLevelLookupTable>(m_instance)->SetMaximumColor(r, g, b, a);
}



void vtkWindowLevelLookupTable::SetMaximumColor(array<unsigned char>^ rgba)
{
  pin_ptr<unsigned char> rgbaPin = &rgba[0];
  unsigned char* nativergbaPin = rgbaPin;
  vtk::ConvertManagedToNative<::vtkWindowLevelLookupTable>(m_instance)->SetMaximumColor(nativergbaPin);
}



void vtkWindowLevelLookupTable::GetMaximumColor(array<unsigned char>^ rgba)
{
  pin_ptr<unsigned char> rgbaPin = &rgba[0];
  unsigned char* nativergbaPin = rgbaPin;
  vtk::ConvertManagedToNative<::vtkWindowLevelLookupTable>(m_instance)->GetMaximumColor(nativergbaPin);
}



  vtkWindowLevelLookupTable::vtkWindowLevelLookupTable(System::IntPtr native, bool bConst) : vtkLookupTable(native, bConst) {}



  vtkWindowLevelLookupTable::vtkWindowLevelLookupTable(bool donothing) : vtkLookupTable(donothing) {}



  vtkWindowLevelLookupTable::vtkWindowLevelLookupTable() : vtkLookupTable(false) {
  this->SetNativePointer(IntPtr(::vtkWindowLevelLookupTable::New()));
}



  vtkWindowLevelLookupTable::~vtkWindowLevelLookupTable() { }





} // end namespace vtkCommon
