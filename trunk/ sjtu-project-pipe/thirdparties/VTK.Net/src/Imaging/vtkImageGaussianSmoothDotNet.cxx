

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkImageGaussianSmoothDotNet.h"

// native includes
#include "strstream"
#include "vtkImageGaussianSmooth.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkImageGaussianSmooth::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkImageGaussianSmooth>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkImageGaussianSmooth::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkImageGaussianSmooth>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkImageGaussianSmooth^ vtkImageGaussianSmooth::NewInstance()
{
  ::vtkImageGaussianSmooth* retVal = static_cast<::vtkImageGaussianSmooth*>(vtk::ConvertManagedToNative<::vtkImageGaussianSmooth>(m_instance)->NewInstance());
  return gcnew vtkImageGaussianSmooth(IntPtr(retVal), false);
}



vtkImageGaussianSmooth^ vtkImageGaussianSmooth::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkImageGaussianSmooth* retVal = static_cast<::vtkImageGaussianSmooth*>(::vtkImageGaussianSmooth::SafeDownCast(oWrap));
  return gcnew vtkImageGaussianSmooth(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkImageGaussianSmooth::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkImageGaussianSmooth>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkImageGaussianSmooth::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkImageGaussianSmooth>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkImageGaussianSmooth::SetStandardDeviations(double arg0, double arg1, double arg2)
{
  vtk::ConvertManagedToNative<::vtkImageGaussianSmooth>(m_instance)->SetStandardDeviations(arg0, arg1, arg2);
}



void vtkImageGaussianSmooth::SetStandardDeviations(array<double>^ a)
{
  pin_ptr<double> aPin = &a[0];
  double* nativeaPin = aPin;
  vtk::ConvertManagedToNative<::vtkImageGaussianSmooth>(m_instance)->SetStandardDeviations(nativeaPin);
}



void vtkImageGaussianSmooth::SetStandardDeviation(double std)
{
  vtk::ConvertManagedToNative<::vtkImageGaussianSmooth>(m_instance)->SetStandardDeviation(std);
}



void vtkImageGaussianSmooth::SetStandardDeviations(double a, double b)
{
  vtk::ConvertManagedToNative<::vtkImageGaussianSmooth>(m_instance)->SetStandardDeviations(a, b);
}



array<double>^ vtkImageGaussianSmooth::GetStandardDeviations()
{
  const double* retVal = vtk::ConvertManagedToNative<::vtkImageGaussianSmooth>(m_instance)->GetStandardDeviations();
  array<double>^ mRetVal = gcnew array<double>(3);
  for (size_t cprIdx=0; cprIdx<3; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



void vtkImageGaussianSmooth::SetStandardDeviation(double a, double b)
{
  vtk::ConvertManagedToNative<::vtkImageGaussianSmooth>(m_instance)->SetStandardDeviation(a, b);
}



void vtkImageGaussianSmooth::SetStandardDeviation(double a, double b, double c)
{
  vtk::ConvertManagedToNative<::vtkImageGaussianSmooth>(m_instance)->SetStandardDeviation(a, b, c);
}



void vtkImageGaussianSmooth::SetRadiusFactors(double arg0, double arg1, double arg2)
{
  vtk::ConvertManagedToNative<::vtkImageGaussianSmooth>(m_instance)->SetRadiusFactors(arg0, arg1, arg2);
}



void vtkImageGaussianSmooth::SetRadiusFactors(array<double>^ a)
{
  pin_ptr<double> aPin = &a[0];
  double* nativeaPin = aPin;
  vtk::ConvertManagedToNative<::vtkImageGaussianSmooth>(m_instance)->SetRadiusFactors(nativeaPin);
}



void vtkImageGaussianSmooth::SetRadiusFactors(double f, double f2)
{
  vtk::ConvertManagedToNative<::vtkImageGaussianSmooth>(m_instance)->SetRadiusFactors(f, f2);
}



void vtkImageGaussianSmooth::SetRadiusFactor(double f)
{
  vtk::ConvertManagedToNative<::vtkImageGaussianSmooth>(m_instance)->SetRadiusFactor(f);
}



array<double>^ vtkImageGaussianSmooth::GetRadiusFactors()
{
  const double* retVal = vtk::ConvertManagedToNative<::vtkImageGaussianSmooth>(m_instance)->GetRadiusFactors();
  array<double>^ mRetVal = gcnew array<double>(3);
  for (size_t cprIdx=0; cprIdx<3; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



void vtkImageGaussianSmooth::SetDimensionality(int arg0)
{
  vtk::ConvertManagedToNative<::vtkImageGaussianSmooth>(m_instance)->SetDimensionality(arg0);
}



int vtkImageGaussianSmooth::GetDimensionality()
{
  int retVal = vtk::ConvertManagedToNative<::vtkImageGaussianSmooth>(m_instance)->GetDimensionality();
  return retVal;
}



  vtkImageGaussianSmooth::vtkImageGaussianSmooth(System::IntPtr native, bool bConst) : vtkThreadedImageAlgorithm(native, bConst) {}



  vtkImageGaussianSmooth::vtkImageGaussianSmooth(bool donothing) : vtkThreadedImageAlgorithm(donothing) {}



  vtkImageGaussianSmooth::vtkImageGaussianSmooth() : vtkThreadedImageAlgorithm(false) {
  this->SetNativePointer(IntPtr(::vtkImageGaussianSmooth::New()));
}



  vtkImageGaussianSmooth::~vtkImageGaussianSmooth() { }





} // end namespace vtkImaging
