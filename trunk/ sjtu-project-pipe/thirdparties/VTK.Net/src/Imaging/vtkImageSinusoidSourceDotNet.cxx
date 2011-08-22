

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkImageSinusoidSourceDotNet.h"

// native includes
#include "strstream"
#include "vtkImageSinusoidSource.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkImageSinusoidSource::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkImageSinusoidSource>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkImageSinusoidSource::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkImageSinusoidSource>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkImageSinusoidSource^ vtkImageSinusoidSource::NewInstance()
{
  ::vtkImageSinusoidSource* retVal = static_cast<::vtkImageSinusoidSource*>(vtk::ConvertManagedToNative<::vtkImageSinusoidSource>(m_instance)->NewInstance());
  return gcnew vtkImageSinusoidSource(IntPtr(retVal), false);
}



vtkImageSinusoidSource^ vtkImageSinusoidSource::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkImageSinusoidSource* retVal = static_cast<::vtkImageSinusoidSource*>(::vtkImageSinusoidSource::SafeDownCast(oWrap));
  return gcnew vtkImageSinusoidSource(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkImageSinusoidSource::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkImageSinusoidSource>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkImageSinusoidSource::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkImageSinusoidSource>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkImageSinusoidSource::SetWholeExtent(int xMinx, int xMax, int yMin, int yMax, int zMin, int zMax)
{
  vtk::ConvertManagedToNative<::vtkImageSinusoidSource>(m_instance)->SetWholeExtent(xMinx, xMax, yMin, yMax, zMin, zMax);
}



void vtkImageSinusoidSource::SetDirection(double arg0, double arg1, double arg2)
{
  vtk::ConvertManagedToNative<::vtkImageSinusoidSource>(m_instance)->SetDirection(arg0, arg1, arg2);
}



void vtkImageSinusoidSource::SetDirection(array<double>^ dir)
{
  pin_ptr<double> dirPin = &dir[0];
  double* nativedirPin = dirPin;
  vtk::ConvertManagedToNative<::vtkImageSinusoidSource>(m_instance)->SetDirection(nativedirPin);
}



array<double>^ vtkImageSinusoidSource::GetDirection()
{
  const double* retVal = vtk::ConvertManagedToNative<::vtkImageSinusoidSource>(m_instance)->GetDirection();
  array<double>^ mRetVal = gcnew array<double>(3);
  for (size_t cprIdx=0; cprIdx<3; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



void vtkImageSinusoidSource::SetPeriod(double arg0)
{
  vtk::ConvertManagedToNative<::vtkImageSinusoidSource>(m_instance)->SetPeriod(arg0);
}



double vtkImageSinusoidSource::GetPeriod()
{
  double retVal = vtk::ConvertManagedToNative<::vtkImageSinusoidSource>(m_instance)->GetPeriod();
  return retVal;
}



void vtkImageSinusoidSource::SetPhase(double arg0)
{
  vtk::ConvertManagedToNative<::vtkImageSinusoidSource>(m_instance)->SetPhase(arg0);
}



double vtkImageSinusoidSource::GetPhase()
{
  double retVal = vtk::ConvertManagedToNative<::vtkImageSinusoidSource>(m_instance)->GetPhase();
  return retVal;
}



void vtkImageSinusoidSource::SetAmplitude(double arg0)
{
  vtk::ConvertManagedToNative<::vtkImageSinusoidSource>(m_instance)->SetAmplitude(arg0);
}



double vtkImageSinusoidSource::GetAmplitude()
{
  double retVal = vtk::ConvertManagedToNative<::vtkImageSinusoidSource>(m_instance)->GetAmplitude();
  return retVal;
}



  vtkImageSinusoidSource::vtkImageSinusoidSource(System::IntPtr native, bool bConst) : vtkImageAlgorithm(native, bConst) {}



  vtkImageSinusoidSource::vtkImageSinusoidSource(bool donothing) : vtkImageAlgorithm(donothing) {}



  vtkImageSinusoidSource::vtkImageSinusoidSource() : vtkImageAlgorithm(false) {
  this->SetNativePointer(IntPtr(::vtkImageSinusoidSource::New()));
}



  vtkImageSinusoidSource::~vtkImageSinusoidSource() { }





} // end namespace vtkImaging
