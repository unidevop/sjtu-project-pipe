

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkImageMandelbrotSourceDotNet.h"

// native includes
#include "strstream"
#include "vtkImageMandelbrotSource.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkImageMandelbrotSource::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkImageMandelbrotSource>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkImageMandelbrotSource::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkImageMandelbrotSource>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkImageMandelbrotSource^ vtkImageMandelbrotSource::NewInstance()
{
  ::vtkImageMandelbrotSource* retVal = static_cast<::vtkImageMandelbrotSource*>(vtk::ConvertManagedToNative<::vtkImageMandelbrotSource>(m_instance)->NewInstance());
  return gcnew vtkImageMandelbrotSource(IntPtr(retVal), false);
}



vtkImageMandelbrotSource^ vtkImageMandelbrotSource::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkImageMandelbrotSource* retVal = static_cast<::vtkImageMandelbrotSource*>(::vtkImageMandelbrotSource::SafeDownCast(oWrap));
  return gcnew vtkImageMandelbrotSource(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkImageMandelbrotSource::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkImageMandelbrotSource>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkImageMandelbrotSource::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkImageMandelbrotSource>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkImageMandelbrotSource::SetWholeExtent(array<int>^ extent)
{
  pin_ptr<int> extentPin = &extent[0];
  int* nativeextentPin = extentPin;
  vtk::ConvertManagedToNative<::vtkImageMandelbrotSource>(m_instance)->SetWholeExtent(nativeextentPin);
}



void vtkImageMandelbrotSource::SetWholeExtent(int minX, int maxX, int minY, int maxY, int minZ, int maxZ)
{
  vtk::ConvertManagedToNative<::vtkImageMandelbrotSource>(m_instance)->SetWholeExtent(minX, maxX, minY, maxY, minZ, maxZ);
}



array<int>^ vtkImageMandelbrotSource::GetWholeExtent()
{
  const int* retVal = vtk::ConvertManagedToNative<::vtkImageMandelbrotSource>(m_instance)->GetWholeExtent();
  array<int>^ mRetVal = gcnew array<int>(6);
  for (size_t cprIdx=0; cprIdx<6; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



void vtkImageMandelbrotSource::SetConstantSize(int arg0)
{
  vtk::ConvertManagedToNative<::vtkImageMandelbrotSource>(m_instance)->SetConstantSize(arg0);
}



int vtkImageMandelbrotSource::GetConstantSize()
{
  int retVal = vtk::ConvertManagedToNative<::vtkImageMandelbrotSource>(m_instance)->GetConstantSize();
  return retVal;
}



void vtkImageMandelbrotSource::ConstantSizeOn()
{
  vtk::ConvertManagedToNative<::vtkImageMandelbrotSource>(m_instance)->ConstantSizeOn();
}



void vtkImageMandelbrotSource::ConstantSizeOff()
{
  vtk::ConvertManagedToNative<::vtkImageMandelbrotSource>(m_instance)->ConstantSizeOff();
}



void vtkImageMandelbrotSource::SetProjectionAxes(int x, int y, int z)
{
  vtk::ConvertManagedToNative<::vtkImageMandelbrotSource>(m_instance)->SetProjectionAxes(x, y, z);
}



void vtkImageMandelbrotSource::SetProjectionAxes(array<int>^ a)
{
  pin_ptr<int> aPin = &a[0];
  int* nativeaPin = aPin;
  vtk::ConvertManagedToNative<::vtkImageMandelbrotSource>(m_instance)->SetProjectionAxes(nativeaPin);
}



array<int>^ vtkImageMandelbrotSource::GetProjectionAxes()
{
  const int* retVal = vtk::ConvertManagedToNative<::vtkImageMandelbrotSource>(m_instance)->GetProjectionAxes();
  array<int>^ mRetVal = gcnew array<int>(3);
  for (size_t cprIdx=0; cprIdx<3; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



void vtkImageMandelbrotSource::SetOriginCX(double arg0, double arg1, double arg2, double arg3)
{
  vtk::ConvertManagedToNative<::vtkImageMandelbrotSource>(m_instance)->SetOriginCX(arg0, arg1, arg2, arg3);
}



void vtkImageMandelbrotSource::SetOriginCX(array<double>^ a)
{
  pin_ptr<double> aPin = &a[0];
  double* nativeaPin = aPin;
  vtk::ConvertManagedToNative<::vtkImageMandelbrotSource>(m_instance)->SetOriginCX(nativeaPin);
}



array<double>^ vtkImageMandelbrotSource::GetOriginCX()
{
  const double* retVal = vtk::ConvertManagedToNative<::vtkImageMandelbrotSource>(m_instance)->GetOriginCX();
  array<double>^ mRetVal = gcnew array<double>(4);
  for (size_t cprIdx=0; cprIdx<4; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



void vtkImageMandelbrotSource::SetSampleCX(double arg0, double arg1, double arg2, double arg3)
{
  vtk::ConvertManagedToNative<::vtkImageMandelbrotSource>(m_instance)->SetSampleCX(arg0, arg1, arg2, arg3);
}



void vtkImageMandelbrotSource::SetSampleCX(array<double>^ a)
{
  pin_ptr<double> aPin = &a[0];
  double* nativeaPin = aPin;
  vtk::ConvertManagedToNative<::vtkImageMandelbrotSource>(m_instance)->SetSampleCX(nativeaPin);
}



array<double>^ vtkImageMandelbrotSource::GetSampleCX()
{
  const double* retVal = vtk::ConvertManagedToNative<::vtkImageMandelbrotSource>(m_instance)->GetSampleCX();
  array<double>^ mRetVal = gcnew array<double>(4);
  for (size_t cprIdx=0; cprIdx<4; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



void vtkImageMandelbrotSource::SetSizeCX(double cReal, double cImag, double xReal, double xImag)
{
  vtk::ConvertManagedToNative<::vtkImageMandelbrotSource>(m_instance)->SetSizeCX(cReal, cImag, xReal, xImag);
}



array<double>^ vtkImageMandelbrotSource::GetSizeCX()
{
  const double* retVal = vtk::ConvertManagedToNative<::vtkImageMandelbrotSource>(m_instance)->GetSizeCX();
  array<double>^ mRetVal = gcnew array<double>(4);
  for (size_t cprIdx=0; cprIdx<4; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



void vtkImageMandelbrotSource::GetSizeCX(array<double>^ s)
{
  pin_ptr<double> sPin = &s[0];
  double* nativesPin = sPin;
  vtk::ConvertManagedToNative<::vtkImageMandelbrotSource>(m_instance)->GetSizeCX(nativesPin);
}



void vtkImageMandelbrotSource::SetMaximumNumberOfIterations(unsigned short arg0)
{
  vtk::ConvertManagedToNative<::vtkImageMandelbrotSource>(m_instance)->SetMaximumNumberOfIterations(arg0);
}



unsigned short vtkImageMandelbrotSource::GetMaximumNumberOfIterationsMinValue()
{
  unsigned short retVal = vtk::ConvertManagedToNative<::vtkImageMandelbrotSource>(m_instance)->GetMaximumNumberOfIterationsMinValue();
  return retVal;
}



unsigned short vtkImageMandelbrotSource::GetMaximumNumberOfIterationsMaxValue()
{
  unsigned short retVal = vtk::ConvertManagedToNative<::vtkImageMandelbrotSource>(m_instance)->GetMaximumNumberOfIterationsMaxValue();
  return retVal;
}



unsigned short vtkImageMandelbrotSource::GetMaximumNumberOfIterations()
{
  unsigned short retVal = vtk::ConvertManagedToNative<::vtkImageMandelbrotSource>(m_instance)->GetMaximumNumberOfIterations();
  return retVal;
}



void vtkImageMandelbrotSource::Zoom(double factor)
{
  vtk::ConvertManagedToNative<::vtkImageMandelbrotSource>(m_instance)->Zoom(factor);
}



void vtkImageMandelbrotSource::Pan(double x, double y, double z)
{
  vtk::ConvertManagedToNative<::vtkImageMandelbrotSource>(m_instance)->Pan(x, y, z);
}



void vtkImageMandelbrotSource::CopyOriginAndSample(vtkImageMandelbrotSource^ source)
{
  ::vtkImageMandelbrotSource* sourceWrap = vtk::ConvertManagedToNative<::vtkImageMandelbrotSource>(source->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkImageMandelbrotSource>(m_instance)->CopyOriginAndSample(sourceWrap);
}



  vtkImageMandelbrotSource::vtkImageMandelbrotSource(System::IntPtr native, bool bConst) : vtkImageAlgorithm(native, bConst) {}



  vtkImageMandelbrotSource::vtkImageMandelbrotSource(bool donothing) : vtkImageAlgorithm(donothing) {}



  vtkImageMandelbrotSource::vtkImageMandelbrotSource() : vtkImageAlgorithm(false) {
  this->SetNativePointer(IntPtr(::vtkImageMandelbrotSource::New()));
}



  vtkImageMandelbrotSource::~vtkImageMandelbrotSource() { }





} // end namespace vtkImaging
