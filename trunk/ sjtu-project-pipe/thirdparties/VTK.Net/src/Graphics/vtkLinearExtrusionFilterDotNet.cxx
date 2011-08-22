

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkLinearExtrusionFilterDotNet.h"

// native includes
#include "strstream"
#include "vtkLinearExtrusionFilter.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkLinearExtrusionFilter::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkLinearExtrusionFilter>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkLinearExtrusionFilter::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkLinearExtrusionFilter>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkLinearExtrusionFilter^ vtkLinearExtrusionFilter::NewInstance()
{
  ::vtkLinearExtrusionFilter* retVal = static_cast<::vtkLinearExtrusionFilter*>(vtk::ConvertManagedToNative<::vtkLinearExtrusionFilter>(m_instance)->NewInstance());
  return gcnew vtkLinearExtrusionFilter(IntPtr(retVal), false);
}



vtkLinearExtrusionFilter^ vtkLinearExtrusionFilter::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkLinearExtrusionFilter* retVal = static_cast<::vtkLinearExtrusionFilter*>(::vtkLinearExtrusionFilter::SafeDownCast(oWrap));
  return gcnew vtkLinearExtrusionFilter(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkLinearExtrusionFilter::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkLinearExtrusionFilter>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkLinearExtrusionFilter::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkLinearExtrusionFilter>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkLinearExtrusionFilter::SetExtrusionType(int arg0)
{
  vtk::ConvertManagedToNative<::vtkLinearExtrusionFilter>(m_instance)->SetExtrusionType(arg0);
}



int vtkLinearExtrusionFilter::GetExtrusionTypeMinValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkLinearExtrusionFilter>(m_instance)->GetExtrusionTypeMinValue();
  return retVal;
}



int vtkLinearExtrusionFilter::GetExtrusionTypeMaxValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkLinearExtrusionFilter>(m_instance)->GetExtrusionTypeMaxValue();
  return retVal;
}



int vtkLinearExtrusionFilter::GetExtrusionType()
{
  int retVal = vtk::ConvertManagedToNative<::vtkLinearExtrusionFilter>(m_instance)->GetExtrusionType();
  return retVal;
}



void vtkLinearExtrusionFilter::SetExtrusionTypeToVectorExtrusion()
{
  vtk::ConvertManagedToNative<::vtkLinearExtrusionFilter>(m_instance)->SetExtrusionTypeToVectorExtrusion();
}



void vtkLinearExtrusionFilter::SetExtrusionTypeToNormalExtrusion()
{
  vtk::ConvertManagedToNative<::vtkLinearExtrusionFilter>(m_instance)->SetExtrusionTypeToNormalExtrusion();
}



void vtkLinearExtrusionFilter::SetExtrusionTypeToPointExtrusion()
{
  vtk::ConvertManagedToNative<::vtkLinearExtrusionFilter>(m_instance)->SetExtrusionTypeToPointExtrusion();
}



void vtkLinearExtrusionFilter::SetCapping(int arg0)
{
  vtk::ConvertManagedToNative<::vtkLinearExtrusionFilter>(m_instance)->SetCapping(arg0);
}



int vtkLinearExtrusionFilter::GetCapping()
{
  int retVal = vtk::ConvertManagedToNative<::vtkLinearExtrusionFilter>(m_instance)->GetCapping();
  return retVal;
}



void vtkLinearExtrusionFilter::CappingOn()
{
  vtk::ConvertManagedToNative<::vtkLinearExtrusionFilter>(m_instance)->CappingOn();
}



void vtkLinearExtrusionFilter::CappingOff()
{
  vtk::ConvertManagedToNative<::vtkLinearExtrusionFilter>(m_instance)->CappingOff();
}



void vtkLinearExtrusionFilter::SetScaleFactor(double arg0)
{
  vtk::ConvertManagedToNative<::vtkLinearExtrusionFilter>(m_instance)->SetScaleFactor(arg0);
}



double vtkLinearExtrusionFilter::GetScaleFactor()
{
  double retVal = vtk::ConvertManagedToNative<::vtkLinearExtrusionFilter>(m_instance)->GetScaleFactor();
  return retVal;
}



void vtkLinearExtrusionFilter::SetVector(double arg0, double arg1, double arg2)
{
  vtk::ConvertManagedToNative<::vtkLinearExtrusionFilter>(m_instance)->SetVector(arg0, arg1, arg2);
}



void vtkLinearExtrusionFilter::SetVector(array<double>^ a)
{
  pin_ptr<double> aPin = &a[0];
  double* nativeaPin = aPin;
  vtk::ConvertManagedToNative<::vtkLinearExtrusionFilter>(m_instance)->SetVector(nativeaPin);
}



array<double>^ vtkLinearExtrusionFilter::GetVector()
{
  const double* retVal = vtk::ConvertManagedToNative<::vtkLinearExtrusionFilter>(m_instance)->GetVector();
  array<double>^ mRetVal = gcnew array<double>(3);
  for (size_t cprIdx=0; cprIdx<3; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



void vtkLinearExtrusionFilter::SetExtrusionPoint(double arg0, double arg1, double arg2)
{
  vtk::ConvertManagedToNative<::vtkLinearExtrusionFilter>(m_instance)->SetExtrusionPoint(arg0, arg1, arg2);
}



void vtkLinearExtrusionFilter::SetExtrusionPoint(array<double>^ a)
{
  pin_ptr<double> aPin = &a[0];
  double* nativeaPin = aPin;
  vtk::ConvertManagedToNative<::vtkLinearExtrusionFilter>(m_instance)->SetExtrusionPoint(nativeaPin);
}



array<double>^ vtkLinearExtrusionFilter::GetExtrusionPoint()
{
  const double* retVal = vtk::ConvertManagedToNative<::vtkLinearExtrusionFilter>(m_instance)->GetExtrusionPoint();
  array<double>^ mRetVal = gcnew array<double>(3);
  for (size_t cprIdx=0; cprIdx<3; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



  vtkLinearExtrusionFilter::vtkLinearExtrusionFilter(System::IntPtr native, bool bConst) : vtkPolyDataAlgorithm(native, bConst) {}



  vtkLinearExtrusionFilter::vtkLinearExtrusionFilter(bool donothing) : vtkPolyDataAlgorithm(donothing) {}



  vtkLinearExtrusionFilter::vtkLinearExtrusionFilter() : vtkPolyDataAlgorithm(false) {
  this->SetNativePointer(IntPtr(::vtkLinearExtrusionFilter::New()));
}



  vtkLinearExtrusionFilter::~vtkLinearExtrusionFilter() { }





} // end namespace vtkGraphics
