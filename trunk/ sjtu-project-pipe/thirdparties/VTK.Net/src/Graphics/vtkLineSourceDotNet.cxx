

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkLineSourceDotNet.h"

// native includes
#include "strstream"
#include "vtkLineSource.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkLineSource::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkLineSource>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkLineSource::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkLineSource>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkLineSource^ vtkLineSource::NewInstance()
{
  ::vtkLineSource* retVal = static_cast<::vtkLineSource*>(vtk::ConvertManagedToNative<::vtkLineSource>(m_instance)->NewInstance());
  return gcnew vtkLineSource(IntPtr(retVal), false);
}



vtkLineSource^ vtkLineSource::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkLineSource* retVal = static_cast<::vtkLineSource*>(::vtkLineSource::SafeDownCast(oWrap));
  return gcnew vtkLineSource(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkLineSource::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkLineSource>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkLineSource::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkLineSource>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkLineSource::SetPoint1(double arg0, double arg1, double arg2)
{
  vtk::ConvertManagedToNative<::vtkLineSource>(m_instance)->SetPoint1(arg0, arg1, arg2);
}



void vtkLineSource::SetPoint1(array<double>^ a)
{
  pin_ptr<double> aPin = &a[0];
  double* nativeaPin = aPin;
  vtk::ConvertManagedToNative<::vtkLineSource>(m_instance)->SetPoint1(nativeaPin);
}



array<double>^ vtkLineSource::GetPoint1()
{
  const double* retVal = vtk::ConvertManagedToNative<::vtkLineSource>(m_instance)->GetPoint1();
  array<double>^ mRetVal = gcnew array<double>(3);
  for (size_t cprIdx=0; cprIdx<3; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



void vtkLineSource::SetPoint2(double arg0, double arg1, double arg2)
{
  vtk::ConvertManagedToNative<::vtkLineSource>(m_instance)->SetPoint2(arg0, arg1, arg2);
}



void vtkLineSource::SetPoint2(array<double>^ a)
{
  pin_ptr<double> aPin = &a[0];
  double* nativeaPin = aPin;
  vtk::ConvertManagedToNative<::vtkLineSource>(m_instance)->SetPoint2(nativeaPin);
}



array<double>^ vtkLineSource::GetPoint2()
{
  const double* retVal = vtk::ConvertManagedToNative<::vtkLineSource>(m_instance)->GetPoint2();
  array<double>^ mRetVal = gcnew array<double>(3);
  for (size_t cprIdx=0; cprIdx<3; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



void vtkLineSource::SetResolution(int arg0)
{
  vtk::ConvertManagedToNative<::vtkLineSource>(m_instance)->SetResolution(arg0);
}



int vtkLineSource::GetResolutionMinValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkLineSource>(m_instance)->GetResolutionMinValue();
  return retVal;
}



int vtkLineSource::GetResolutionMaxValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkLineSource>(m_instance)->GetResolutionMaxValue();
  return retVal;
}



int vtkLineSource::GetResolution()
{
  int retVal = vtk::ConvertManagedToNative<::vtkLineSource>(m_instance)->GetResolution();
  return retVal;
}



  vtkLineSource::vtkLineSource(System::IntPtr native, bool bConst) : vtkPolyDataAlgorithm(native, bConst) {}



  vtkLineSource::vtkLineSource(bool donothing) : vtkPolyDataAlgorithm(donothing) {}



  vtkLineSource::vtkLineSource() : vtkPolyDataAlgorithm(false) {
  this->SetNativePointer(IntPtr(::vtkLineSource::New()));
}



  vtkLineSource::~vtkLineSource() { }





} // end namespace vtkGraphics
