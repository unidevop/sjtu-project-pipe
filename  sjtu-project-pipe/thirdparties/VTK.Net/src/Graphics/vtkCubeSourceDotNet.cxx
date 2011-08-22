

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkCubeSourceDotNet.h"

// native includes
#include "strstream"
#include "vtkCubeSource.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkCubeSource::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkCubeSource>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkCubeSource::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkCubeSource>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkCubeSource^ vtkCubeSource::NewInstance()
{
  ::vtkCubeSource* retVal = static_cast<::vtkCubeSource*>(vtk::ConvertManagedToNative<::vtkCubeSource>(m_instance)->NewInstance());
  return gcnew vtkCubeSource(IntPtr(retVal), false);
}



vtkCubeSource^ vtkCubeSource::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkCubeSource* retVal = static_cast<::vtkCubeSource*>(::vtkCubeSource::SafeDownCast(oWrap));
  return gcnew vtkCubeSource(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkCubeSource::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkCubeSource>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkCubeSource::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkCubeSource>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkCubeSource::SetXLength(double arg0)
{
  vtk::ConvertManagedToNative<::vtkCubeSource>(m_instance)->SetXLength(arg0);
}



double vtkCubeSource::GetXLengthMinValue()
{
  double retVal = vtk::ConvertManagedToNative<::vtkCubeSource>(m_instance)->GetXLengthMinValue();
  return retVal;
}



double vtkCubeSource::GetXLengthMaxValue()
{
  double retVal = vtk::ConvertManagedToNative<::vtkCubeSource>(m_instance)->GetXLengthMaxValue();
  return retVal;
}



double vtkCubeSource::GetXLength()
{
  double retVal = vtk::ConvertManagedToNative<::vtkCubeSource>(m_instance)->GetXLength();
  return retVal;
}



void vtkCubeSource::SetYLength(double arg0)
{
  vtk::ConvertManagedToNative<::vtkCubeSource>(m_instance)->SetYLength(arg0);
}



double vtkCubeSource::GetYLengthMinValue()
{
  double retVal = vtk::ConvertManagedToNative<::vtkCubeSource>(m_instance)->GetYLengthMinValue();
  return retVal;
}



double vtkCubeSource::GetYLengthMaxValue()
{
  double retVal = vtk::ConvertManagedToNative<::vtkCubeSource>(m_instance)->GetYLengthMaxValue();
  return retVal;
}



double vtkCubeSource::GetYLength()
{
  double retVal = vtk::ConvertManagedToNative<::vtkCubeSource>(m_instance)->GetYLength();
  return retVal;
}



void vtkCubeSource::SetZLength(double arg0)
{
  vtk::ConvertManagedToNative<::vtkCubeSource>(m_instance)->SetZLength(arg0);
}



double vtkCubeSource::GetZLengthMinValue()
{
  double retVal = vtk::ConvertManagedToNative<::vtkCubeSource>(m_instance)->GetZLengthMinValue();
  return retVal;
}



double vtkCubeSource::GetZLengthMaxValue()
{
  double retVal = vtk::ConvertManagedToNative<::vtkCubeSource>(m_instance)->GetZLengthMaxValue();
  return retVal;
}



double vtkCubeSource::GetZLength()
{
  double retVal = vtk::ConvertManagedToNative<::vtkCubeSource>(m_instance)->GetZLength();
  return retVal;
}



void vtkCubeSource::SetCenter(double arg0, double arg1, double arg2)
{
  vtk::ConvertManagedToNative<::vtkCubeSource>(m_instance)->SetCenter(arg0, arg1, arg2);
}



void vtkCubeSource::SetCenter(array<double>^ a)
{
  pin_ptr<double> aPin = &a[0];
  double* nativeaPin = aPin;
  vtk::ConvertManagedToNative<::vtkCubeSource>(m_instance)->SetCenter(nativeaPin);
}



array<double>^ vtkCubeSource::GetCenter()
{
  const double* retVal = vtk::ConvertManagedToNative<::vtkCubeSource>(m_instance)->GetCenter();
  array<double>^ mRetVal = gcnew array<double>(3);
  for (size_t cprIdx=0; cprIdx<3; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



void vtkCubeSource::SetBounds(double xMin, double xMax, double yMin, double yMax, double zMin, double zMax)
{
  vtk::ConvertManagedToNative<::vtkCubeSource>(m_instance)->SetBounds(xMin, xMax, yMin, yMax, zMin, zMax);
}



void vtkCubeSource::SetBounds(array<double>^ bounds)
{
  pin_ptr<double> boundsPin = &bounds[0];
  double* nativeboundsPin = boundsPin;
  vtk::ConvertManagedToNative<::vtkCubeSource>(m_instance)->SetBounds(nativeboundsPin);
}



  vtkCubeSource::vtkCubeSource(System::IntPtr native, bool bConst) : vtkPolyDataAlgorithm(native, bConst) {}



  vtkCubeSource::vtkCubeSource(bool donothing) : vtkPolyDataAlgorithm(donothing) {}



  vtkCubeSource::vtkCubeSource() : vtkPolyDataAlgorithm(false) {
  this->SetNativePointer(IntPtr(::vtkCubeSource::New()));
}



  vtkCubeSource::~vtkCubeSource() { }





} // end namespace vtkGraphics
