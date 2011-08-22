

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkBoxDotNet.h"
#include "vtkObjectDotNet.h"

// native includes
#include "strstream"
#include "vtkBox.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkBox::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkBox>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkBox::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkBox>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkBox^ vtkBox::NewInstance()
{
  ::vtkBox* retVal = static_cast<::vtkBox*>(vtk::ConvertManagedToNative<::vtkBox>(m_instance)->NewInstance());
  return gcnew vtkBox(IntPtr(retVal), false);
}



vtkBox^ vtkBox::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkBox* retVal = static_cast<::vtkBox*>(::vtkBox::SafeDownCast(oWrap));
  return gcnew vtkBox(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkBox::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkBox>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkBox::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkBox>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




double vtkBox::EvaluateFunction(array<double>^ x)
{
  pin_ptr<double> xPin = &x[0];
  double* nativexPin = xPin;
  double retVal = vtk::ConvertManagedToNative<::vtkBox>(m_instance)->EvaluateFunction(nativexPin);
  return retVal;
}



double vtkBox::EvaluateFunction(double x, double y, double z)
{
  double retVal = vtk::ConvertManagedToNative<::vtkBox>(m_instance)->EvaluateFunction(x, y, z);
  return retVal;
}



void vtkBox::EvaluateGradient(array<double>^ x, array<double>^ n)
{
  pin_ptr<double> xPin = &x[0];
  double* nativexPin = xPin;
  pin_ptr<double> nPin = &n[0];
  double* nativenPin = nPin;
  vtk::ConvertManagedToNative<::vtkBox>(m_instance)->EvaluateGradient(nativexPin, nativenPin);
}



void vtkBox::SetXMin(double arg0, double arg1, double arg2)
{
  vtk::ConvertManagedToNative<::vtkBox>(m_instance)->SetXMin(arg0, arg1, arg2);
}



void vtkBox::SetXMin(array<double>^ a)
{
  pin_ptr<double> aPin = &a[0];
  double* nativeaPin = aPin;
  vtk::ConvertManagedToNative<::vtkBox>(m_instance)->SetXMin(nativeaPin);
}



array<double>^ vtkBox::GetXMin()
{
  const double* retVal = vtk::ConvertManagedToNative<::vtkBox>(m_instance)->GetXMin();
  array<double>^ mRetVal = gcnew array<double>(3);
  for (size_t cprIdx=0; cprIdx<3; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



void vtkBox::SetXMax(double arg0, double arg1, double arg2)
{
  vtk::ConvertManagedToNative<::vtkBox>(m_instance)->SetXMax(arg0, arg1, arg2);
}



void vtkBox::SetXMax(array<double>^ a)
{
  pin_ptr<double> aPin = &a[0];
  double* nativeaPin = aPin;
  vtk::ConvertManagedToNative<::vtkBox>(m_instance)->SetXMax(nativeaPin);
}



array<double>^ vtkBox::GetXMax()
{
  const double* retVal = vtk::ConvertManagedToNative<::vtkBox>(m_instance)->GetXMax();
  array<double>^ mRetVal = gcnew array<double>(3);
  for (size_t cprIdx=0; cprIdx<3; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



void vtkBox::SetBounds(double xMin, double xMax, double yMin, double yMax, double zMin, double zMax)
{
  vtk::ConvertManagedToNative<::vtkBox>(m_instance)->SetBounds(xMin, xMax, yMin, yMax, zMin, zMax);
}



void vtkBox::SetBounds(array<double>^ bounds)
{
  pin_ptr<double> boundsPin = &bounds[0];
  double* nativeboundsPin = boundsPin;
  vtk::ConvertManagedToNative<::vtkBox>(m_instance)->SetBounds(nativeboundsPin);
}



void vtkBox::GetBounds(double% xMin, double% xMax, double% yMin, double% yMax, double% zMin, double% zMax)
{
  pin_ptr<double> xMinPin = &xMin;
  pin_ptr<double> xMaxPin = &xMax;
  pin_ptr<double> yMinPin = &yMin;
  pin_ptr<double> yMaxPin = &yMax;
  pin_ptr<double> zMinPin = &zMin;
  pin_ptr<double> zMaxPin = &zMax;
  vtk::ConvertManagedToNative<::vtkBox>(m_instance)->GetBounds(*xMinPin, *xMaxPin, *yMinPin, *yMaxPin, *zMinPin, *zMaxPin);
}



void vtkBox::GetBounds(array<double>^ bounds)
{
  pin_ptr<double> boundsPin = &bounds[0];
  double* nativeboundsPin = boundsPin;
  vtk::ConvertManagedToNative<::vtkBox>(m_instance)->GetBounds(nativeboundsPin);
}



char vtkBox::IntersectBox(array<double>^ bounds, array<double>^ origin, array<double>^ dir, array<double>^ coord, double% t)
{
  pin_ptr<double> boundsPin = &bounds[0];
  double* nativeboundsPin = boundsPin;
  pin_ptr<double> originPin = &origin[0];
  double* nativeoriginPin = originPin;
  pin_ptr<double> dirPin = &dir[0];
  double* nativedirPin = dirPin;
  pin_ptr<double> coordPin = &coord[0];
  double* nativecoordPin = coordPin;
  pin_ptr<double> tPin = &t;
  char retVal = ::vtkBox::IntersectBox(nativeboundsPin, nativeoriginPin, nativedirPin, nativecoordPin, *tPin);
  return retVal;
}



  vtkBox::vtkBox(System::IntPtr native, bool bConst) : vtkImplicitFunction(native, bConst) {}



  vtkBox::vtkBox(bool donothing) : vtkImplicitFunction(donothing) {}



  vtkBox::vtkBox() : vtkImplicitFunction(false) {
  this->SetNativePointer(IntPtr(::vtkBox::New()));
}



  vtkBox::~vtkBox() { }





} // end namespace vtkCommon
