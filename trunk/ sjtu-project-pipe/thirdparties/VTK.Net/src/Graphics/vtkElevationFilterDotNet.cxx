

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkElevationFilterDotNet.h"

// native includes
#include "strstream"
#include "vtkElevationFilter.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkElevationFilter::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkElevationFilter>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkElevationFilter::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkElevationFilter>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkElevationFilter^ vtkElevationFilter::NewInstance()
{
  ::vtkElevationFilter* retVal = static_cast<::vtkElevationFilter*>(vtk::ConvertManagedToNative<::vtkElevationFilter>(m_instance)->NewInstance());
  return gcnew vtkElevationFilter(IntPtr(retVal), false);
}



vtkElevationFilter^ vtkElevationFilter::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkElevationFilter* retVal = static_cast<::vtkElevationFilter*>(::vtkElevationFilter::SafeDownCast(oWrap));
  return gcnew vtkElevationFilter(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkElevationFilter::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkElevationFilter>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkElevationFilter::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkElevationFilter>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkElevationFilter::SetLowPoint(double arg0, double arg1, double arg2)
{
  vtk::ConvertManagedToNative<::vtkElevationFilter>(m_instance)->SetLowPoint(arg0, arg1, arg2);
}



void vtkElevationFilter::SetLowPoint(array<double>^ a)
{
  pin_ptr<double> aPin = &a[0];
  double* nativeaPin = aPin;
  vtk::ConvertManagedToNative<::vtkElevationFilter>(m_instance)->SetLowPoint(nativeaPin);
}



array<double>^ vtkElevationFilter::GetLowPoint()
{
  const double* retVal = vtk::ConvertManagedToNative<::vtkElevationFilter>(m_instance)->GetLowPoint();
  array<double>^ mRetVal = gcnew array<double>(3);
  for (size_t cprIdx=0; cprIdx<3; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



void vtkElevationFilter::SetHighPoint(double arg0, double arg1, double arg2)
{
  vtk::ConvertManagedToNative<::vtkElevationFilter>(m_instance)->SetHighPoint(arg0, arg1, arg2);
}



void vtkElevationFilter::SetHighPoint(array<double>^ a)
{
  pin_ptr<double> aPin = &a[0];
  double* nativeaPin = aPin;
  vtk::ConvertManagedToNative<::vtkElevationFilter>(m_instance)->SetHighPoint(nativeaPin);
}



array<double>^ vtkElevationFilter::GetHighPoint()
{
  const double* retVal = vtk::ConvertManagedToNative<::vtkElevationFilter>(m_instance)->GetHighPoint();
  array<double>^ mRetVal = gcnew array<double>(3);
  for (size_t cprIdx=0; cprIdx<3; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



void vtkElevationFilter::SetScalarRange(double arg0, double arg1)
{
  vtk::ConvertManagedToNative<::vtkElevationFilter>(m_instance)->SetScalarRange(arg0, arg1);
}



void vtkElevationFilter::SetScalarRange(array<double>^ a)
{
  pin_ptr<double> aPin = &a[0];
  double* nativeaPin = aPin;
  vtk::ConvertManagedToNative<::vtkElevationFilter>(m_instance)->SetScalarRange(nativeaPin);
}



array<double>^ vtkElevationFilter::GetScalarRange()
{
  const double* retVal = vtk::ConvertManagedToNative<::vtkElevationFilter>(m_instance)->GetScalarRange();
  array<double>^ mRetVal = gcnew array<double>(2);
  for (size_t cprIdx=0; cprIdx<2; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



  vtkElevationFilter::vtkElevationFilter(System::IntPtr native, bool bConst) : vtkDataSetAlgorithm(native, bConst) {}



  vtkElevationFilter::vtkElevationFilter(bool donothing) : vtkDataSetAlgorithm(donothing) {}



  vtkElevationFilter::vtkElevationFilter() : vtkDataSetAlgorithm(false) {
  this->SetNativePointer(IntPtr(::vtkElevationFilter::New()));
}



  vtkElevationFilter::~vtkElevationFilter() { }





} // end namespace vtkGraphics
