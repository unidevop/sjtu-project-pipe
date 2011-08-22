

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkPlaneSourceDotNet.h"

// native includes
#include "strstream"
#include "vtkPlaneSource.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkPlaneSource::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkPlaneSource>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkPlaneSource::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkPlaneSource>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




System::String^ vtkPlaneSource::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkPlaneSource>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkPlaneSource::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkPlaneSource>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkPlaneSource^ vtkPlaneSource::NewInstance()
{
  ::vtkPlaneSource* retVal = static_cast<::vtkPlaneSource*>(vtk::ConvertManagedToNative<::vtkPlaneSource>(m_instance)->NewInstance());
  return gcnew vtkPlaneSource(IntPtr(retVal), false);
}



vtkPlaneSource^ vtkPlaneSource::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkPlaneSource* retVal = static_cast<::vtkPlaneSource*>(::vtkPlaneSource::SafeDownCast(oWrap));
  return gcnew vtkPlaneSource(IntPtr(retVal), false);
}



void vtkPlaneSource::SetXResolution(int arg0)
{
  vtk::ConvertManagedToNative<::vtkPlaneSource>(m_instance)->SetXResolution(arg0);
}



int vtkPlaneSource::GetXResolution()
{
  int retVal = vtk::ConvertManagedToNative<::vtkPlaneSource>(m_instance)->GetXResolution();
  return retVal;
}



void vtkPlaneSource::SetYResolution(int arg0)
{
  vtk::ConvertManagedToNative<::vtkPlaneSource>(m_instance)->SetYResolution(arg0);
}



int vtkPlaneSource::GetYResolution()
{
  int retVal = vtk::ConvertManagedToNative<::vtkPlaneSource>(m_instance)->GetYResolution();
  return retVal;
}



void vtkPlaneSource::SetResolution(int xR, int yR)
{
  vtk::ConvertManagedToNative<::vtkPlaneSource>(m_instance)->SetResolution(xR, yR);
}



void vtkPlaneSource::GetResolution(int% xR, int% yR)
{
  pin_ptr<int> xRPin = &xR;
  pin_ptr<int> yRPin = &yR;
  vtk::ConvertManagedToNative<::vtkPlaneSource>(m_instance)->GetResolution(*xRPin, *yRPin);
}



void vtkPlaneSource::SetOrigin(double arg0, double arg1, double arg2)
{
  vtk::ConvertManagedToNative<::vtkPlaneSource>(m_instance)->SetOrigin(arg0, arg1, arg2);
}



void vtkPlaneSource::SetOrigin(array<double>^ a)
{
  pin_ptr<double> aPin = &a[0];
  double* nativeaPin = aPin;
  vtk::ConvertManagedToNative<::vtkPlaneSource>(m_instance)->SetOrigin(nativeaPin);
}



array<double>^ vtkPlaneSource::GetOrigin()
{
  const double* retVal = vtk::ConvertManagedToNative<::vtkPlaneSource>(m_instance)->GetOrigin();
  array<double>^ mRetVal = gcnew array<double>(3);
  for (size_t cprIdx=0; cprIdx<3; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



void vtkPlaneSource::SetPoint1(double x, double y, double z)
{
  vtk::ConvertManagedToNative<::vtkPlaneSource>(m_instance)->SetPoint1(x, y, z);
}



void vtkPlaneSource::SetPoint1(array<double>^ pnt)
{
  pin_ptr<double> pntPin = &pnt[0];
  double* nativepntPin = pntPin;
  vtk::ConvertManagedToNative<::vtkPlaneSource>(m_instance)->SetPoint1(nativepntPin);
}



array<double>^ vtkPlaneSource::GetPoint1()
{
  const double* retVal = vtk::ConvertManagedToNative<::vtkPlaneSource>(m_instance)->GetPoint1();
  array<double>^ mRetVal = gcnew array<double>(3);
  for (size_t cprIdx=0; cprIdx<3; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



void vtkPlaneSource::SetPoint2(double x, double y, double z)
{
  vtk::ConvertManagedToNative<::vtkPlaneSource>(m_instance)->SetPoint2(x, y, z);
}



void vtkPlaneSource::SetPoint2(array<double>^ pnt)
{
  pin_ptr<double> pntPin = &pnt[0];
  double* nativepntPin = pntPin;
  vtk::ConvertManagedToNative<::vtkPlaneSource>(m_instance)->SetPoint2(nativepntPin);
}



array<double>^ vtkPlaneSource::GetPoint2()
{
  const double* retVal = vtk::ConvertManagedToNative<::vtkPlaneSource>(m_instance)->GetPoint2();
  array<double>^ mRetVal = gcnew array<double>(3);
  for (size_t cprIdx=0; cprIdx<3; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



void vtkPlaneSource::SetCenter(double x, double y, double z)
{
  vtk::ConvertManagedToNative<::vtkPlaneSource>(m_instance)->SetCenter(x, y, z);
}



void vtkPlaneSource::SetCenter(array<double>^ center)
{
  pin_ptr<double> centerPin = &center[0];
  double* nativecenterPin = centerPin;
  vtk::ConvertManagedToNative<::vtkPlaneSource>(m_instance)->SetCenter(nativecenterPin);
}



array<double>^ vtkPlaneSource::GetCenter()
{
  const double* retVal = vtk::ConvertManagedToNative<::vtkPlaneSource>(m_instance)->GetCenter();
  array<double>^ mRetVal = gcnew array<double>(3);
  for (size_t cprIdx=0; cprIdx<3; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



void vtkPlaneSource::SetNormal(double nx, double ny, double nz)
{
  vtk::ConvertManagedToNative<::vtkPlaneSource>(m_instance)->SetNormal(nx, ny, nz);
}



void vtkPlaneSource::SetNormal(array<double>^ n)
{
  pin_ptr<double> nPin = &n[0];
  double* nativenPin = nPin;
  vtk::ConvertManagedToNative<::vtkPlaneSource>(m_instance)->SetNormal(nativenPin);
}



array<double>^ vtkPlaneSource::GetNormal()
{
  const double* retVal = vtk::ConvertManagedToNative<::vtkPlaneSource>(m_instance)->GetNormal();
  array<double>^ mRetVal = gcnew array<double>(3);
  for (size_t cprIdx=0; cprIdx<3; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



void vtkPlaneSource::Push(double distance)
{
  vtk::ConvertManagedToNative<::vtkPlaneSource>(m_instance)->Push(distance);
}



  vtkPlaneSource::vtkPlaneSource(System::IntPtr native, bool bConst) : vtkPolyDataAlgorithm(native, bConst) {}



  vtkPlaneSource::vtkPlaneSource(bool donothing) : vtkPolyDataAlgorithm(donothing) {}



  vtkPlaneSource::vtkPlaneSource() : vtkPolyDataAlgorithm(false) {
  this->SetNativePointer(IntPtr(::vtkPlaneSource::New()));
}



  vtkPlaneSource::~vtkPlaneSource() { }





} // end namespace vtkGraphics
