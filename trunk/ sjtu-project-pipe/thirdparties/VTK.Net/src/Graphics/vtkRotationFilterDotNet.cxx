

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkRotationFilterDotNet.h"

// native includes
#include "strstream"
#include "vtkRotationFilter.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkRotationFilter::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkRotationFilter>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkRotationFilter::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkRotationFilter>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkRotationFilter^ vtkRotationFilter::NewInstance()
{
  ::vtkRotationFilter* retVal = static_cast<::vtkRotationFilter*>(vtk::ConvertManagedToNative<::vtkRotationFilter>(m_instance)->NewInstance());
  return gcnew vtkRotationFilter(IntPtr(retVal), false);
}



vtkRotationFilter^ vtkRotationFilter::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkRotationFilter* retVal = static_cast<::vtkRotationFilter*>(::vtkRotationFilter::SafeDownCast(oWrap));
  return gcnew vtkRotationFilter(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkRotationFilter::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkRotationFilter>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkRotationFilter::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkRotationFilter>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkRotationFilter::SetAxis(int arg0)
{
  vtk::ConvertManagedToNative<::vtkRotationFilter>(m_instance)->SetAxis(arg0);
}



int vtkRotationFilter::GetAxisMinValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkRotationFilter>(m_instance)->GetAxisMinValue();
  return retVal;
}



int vtkRotationFilter::GetAxisMaxValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkRotationFilter>(m_instance)->GetAxisMaxValue();
  return retVal;
}



int vtkRotationFilter::GetAxis()
{
  int retVal = vtk::ConvertManagedToNative<::vtkRotationFilter>(m_instance)->GetAxis();
  return retVal;
}



void vtkRotationFilter::SetAxisToX()
{
  vtk::ConvertManagedToNative<::vtkRotationFilter>(m_instance)->SetAxisToX();
}



void vtkRotationFilter::SetAxisToY()
{
  vtk::ConvertManagedToNative<::vtkRotationFilter>(m_instance)->SetAxisToY();
}



void vtkRotationFilter::SetAxisToZ()
{
  vtk::ConvertManagedToNative<::vtkRotationFilter>(m_instance)->SetAxisToZ();
}



void vtkRotationFilter::SetAngle(double arg0)
{
  vtk::ConvertManagedToNative<::vtkRotationFilter>(m_instance)->SetAngle(arg0);
}



double vtkRotationFilter::GetAngle()
{
  double retVal = vtk::ConvertManagedToNative<::vtkRotationFilter>(m_instance)->GetAngle();
  return retVal;
}



void vtkRotationFilter::SetCenter(double arg0, double arg1, double arg2)
{
  vtk::ConvertManagedToNative<::vtkRotationFilter>(m_instance)->SetCenter(arg0, arg1, arg2);
}



void vtkRotationFilter::SetCenter(array<double>^ a)
{
  pin_ptr<double> aPin = &a[0];
  double* nativeaPin = aPin;
  vtk::ConvertManagedToNative<::vtkRotationFilter>(m_instance)->SetCenter(nativeaPin);
}



array<double>^ vtkRotationFilter::GetCenter()
{
  const double* retVal = vtk::ConvertManagedToNative<::vtkRotationFilter>(m_instance)->GetCenter();
  array<double>^ mRetVal = gcnew array<double>(3);
  for (size_t cprIdx=0; cprIdx<3; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



void vtkRotationFilter::SetNumberOfCopies(int arg0)
{
  vtk::ConvertManagedToNative<::vtkRotationFilter>(m_instance)->SetNumberOfCopies(arg0);
}



int vtkRotationFilter::GetNumberOfCopies()
{
  int retVal = vtk::ConvertManagedToNative<::vtkRotationFilter>(m_instance)->GetNumberOfCopies();
  return retVal;
}



void vtkRotationFilter::SetCopyInput(int arg0)
{
  vtk::ConvertManagedToNative<::vtkRotationFilter>(m_instance)->SetCopyInput(arg0);
}



int vtkRotationFilter::GetCopyInput()
{
  int retVal = vtk::ConvertManagedToNative<::vtkRotationFilter>(m_instance)->GetCopyInput();
  return retVal;
}



void vtkRotationFilter::CopyInputOn()
{
  vtk::ConvertManagedToNative<::vtkRotationFilter>(m_instance)->CopyInputOn();
}



void vtkRotationFilter::CopyInputOff()
{
  vtk::ConvertManagedToNative<::vtkRotationFilter>(m_instance)->CopyInputOff();
}



  vtkRotationFilter::vtkRotationFilter(System::IntPtr native, bool bConst) : vtkUnstructuredGridAlgorithm(native, bConst) {}



  vtkRotationFilter::vtkRotationFilter(bool donothing) : vtkUnstructuredGridAlgorithm(donothing) {}



  vtkRotationFilter::vtkRotationFilter() : vtkUnstructuredGridAlgorithm(false) {
  this->SetNativePointer(IntPtr(::vtkRotationFilter::New()));
}



  vtkRotationFilter::~vtkRotationFilter() { }





} // end namespace vtkGraphics
