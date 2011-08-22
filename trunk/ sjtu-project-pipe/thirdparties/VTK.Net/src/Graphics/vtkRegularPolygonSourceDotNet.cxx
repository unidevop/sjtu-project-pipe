

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkRegularPolygonSourceDotNet.h"

// native includes
#include "strstream"
#include "vtkRegularPolygonSource.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkRegularPolygonSource::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkRegularPolygonSource>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkRegularPolygonSource::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkRegularPolygonSource>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkRegularPolygonSource^ vtkRegularPolygonSource::NewInstance()
{
  ::vtkRegularPolygonSource* retVal = static_cast<::vtkRegularPolygonSource*>(vtk::ConvertManagedToNative<::vtkRegularPolygonSource>(m_instance)->NewInstance());
  return gcnew vtkRegularPolygonSource(IntPtr(retVal), false);
}



vtkRegularPolygonSource^ vtkRegularPolygonSource::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkRegularPolygonSource* retVal = static_cast<::vtkRegularPolygonSource*>(::vtkRegularPolygonSource::SafeDownCast(oWrap));
  return gcnew vtkRegularPolygonSource(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkRegularPolygonSource::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkRegularPolygonSource>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkRegularPolygonSource::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkRegularPolygonSource>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkRegularPolygonSource::SetNumberOfSides(int arg0)
{
  vtk::ConvertManagedToNative<::vtkRegularPolygonSource>(m_instance)->SetNumberOfSides(arg0);
}



int vtkRegularPolygonSource::GetNumberOfSidesMinValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkRegularPolygonSource>(m_instance)->GetNumberOfSidesMinValue();
  return retVal;
}



int vtkRegularPolygonSource::GetNumberOfSidesMaxValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkRegularPolygonSource>(m_instance)->GetNumberOfSidesMaxValue();
  return retVal;
}



int vtkRegularPolygonSource::GetNumberOfSides()
{
  int retVal = vtk::ConvertManagedToNative<::vtkRegularPolygonSource>(m_instance)->GetNumberOfSides();
  return retVal;
}



void vtkRegularPolygonSource::SetCenter(double arg0, double arg1, double arg2)
{
  vtk::ConvertManagedToNative<::vtkRegularPolygonSource>(m_instance)->SetCenter(arg0, arg1, arg2);
}



void vtkRegularPolygonSource::SetCenter(array<double>^ a)
{
  pin_ptr<double> aPin = &a[0];
  double* nativeaPin = aPin;
  vtk::ConvertManagedToNative<::vtkRegularPolygonSource>(m_instance)->SetCenter(nativeaPin);
}



array<double>^ vtkRegularPolygonSource::GetCenter()
{
  const double* retVal = vtk::ConvertManagedToNative<::vtkRegularPolygonSource>(m_instance)->GetCenter();
  array<double>^ mRetVal = gcnew array<double>(3);
  for (size_t cprIdx=0; cprIdx<3; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



void vtkRegularPolygonSource::SetNormal(double arg0, double arg1, double arg2)
{
  vtk::ConvertManagedToNative<::vtkRegularPolygonSource>(m_instance)->SetNormal(arg0, arg1, arg2);
}



void vtkRegularPolygonSource::SetNormal(array<double>^ a)
{
  pin_ptr<double> aPin = &a[0];
  double* nativeaPin = aPin;
  vtk::ConvertManagedToNative<::vtkRegularPolygonSource>(m_instance)->SetNormal(nativeaPin);
}



array<double>^ vtkRegularPolygonSource::GetNormal()
{
  const double* retVal = vtk::ConvertManagedToNative<::vtkRegularPolygonSource>(m_instance)->GetNormal();
  array<double>^ mRetVal = gcnew array<double>(3);
  for (size_t cprIdx=0; cprIdx<3; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



void vtkRegularPolygonSource::SetRadius(double arg0)
{
  vtk::ConvertManagedToNative<::vtkRegularPolygonSource>(m_instance)->SetRadius(arg0);
}



double vtkRegularPolygonSource::GetRadius()
{
  double retVal = vtk::ConvertManagedToNative<::vtkRegularPolygonSource>(m_instance)->GetRadius();
  return retVal;
}



void vtkRegularPolygonSource::SetGeneratePolygon(int arg0)
{
  vtk::ConvertManagedToNative<::vtkRegularPolygonSource>(m_instance)->SetGeneratePolygon(arg0);
}



int vtkRegularPolygonSource::GetGeneratePolygon()
{
  int retVal = vtk::ConvertManagedToNative<::vtkRegularPolygonSource>(m_instance)->GetGeneratePolygon();
  return retVal;
}



void vtkRegularPolygonSource::GeneratePolygonOn()
{
  vtk::ConvertManagedToNative<::vtkRegularPolygonSource>(m_instance)->GeneratePolygonOn();
}



void vtkRegularPolygonSource::GeneratePolygonOff()
{
  vtk::ConvertManagedToNative<::vtkRegularPolygonSource>(m_instance)->GeneratePolygonOff();
}



void vtkRegularPolygonSource::SetGeneratePolyline(int arg0)
{
  vtk::ConvertManagedToNative<::vtkRegularPolygonSource>(m_instance)->SetGeneratePolyline(arg0);
}



int vtkRegularPolygonSource::GetGeneratePolyline()
{
  int retVal = vtk::ConvertManagedToNative<::vtkRegularPolygonSource>(m_instance)->GetGeneratePolyline();
  return retVal;
}



void vtkRegularPolygonSource::GeneratePolylineOn()
{
  vtk::ConvertManagedToNative<::vtkRegularPolygonSource>(m_instance)->GeneratePolylineOn();
}



void vtkRegularPolygonSource::GeneratePolylineOff()
{
  vtk::ConvertManagedToNative<::vtkRegularPolygonSource>(m_instance)->GeneratePolylineOff();
}



  vtkRegularPolygonSource::vtkRegularPolygonSource(System::IntPtr native, bool bConst) : vtkPolyDataAlgorithm(native, bConst) {}



  vtkRegularPolygonSource::vtkRegularPolygonSource(bool donothing) : vtkPolyDataAlgorithm(donothing) {}



  vtkRegularPolygonSource::vtkRegularPolygonSource() : vtkPolyDataAlgorithm(false) {
  this->SetNativePointer(IntPtr(::vtkRegularPolygonSource::New()));
}



  vtkRegularPolygonSource::~vtkRegularPolygonSource() { }





} // end namespace vtkGraphics
