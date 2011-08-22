

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkImageGaussianSourceDotNet.h"

// native includes
#include "strstream"
#include "vtkImageGaussianSource.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkImageGaussianSource::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkImageGaussianSource>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkImageGaussianSource::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkImageGaussianSource>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkImageGaussianSource^ vtkImageGaussianSource::NewInstance()
{
  ::vtkImageGaussianSource* retVal = static_cast<::vtkImageGaussianSource*>(vtk::ConvertManagedToNative<::vtkImageGaussianSource>(m_instance)->NewInstance());
  return gcnew vtkImageGaussianSource(IntPtr(retVal), false);
}



vtkImageGaussianSource^ vtkImageGaussianSource::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkImageGaussianSource* retVal = static_cast<::vtkImageGaussianSource*>(::vtkImageGaussianSource::SafeDownCast(oWrap));
  return gcnew vtkImageGaussianSource(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkImageGaussianSource::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkImageGaussianSource>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkImageGaussianSource::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkImageGaussianSource>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkImageGaussianSource::SetWholeExtent(int xMinx, int xMax, int yMin, int yMax, int zMin, int zMax)
{
  vtk::ConvertManagedToNative<::vtkImageGaussianSource>(m_instance)->SetWholeExtent(xMinx, xMax, yMin, yMax, zMin, zMax);
}



void vtkImageGaussianSource::SetCenter(double arg0, double arg1, double arg2)
{
  vtk::ConvertManagedToNative<::vtkImageGaussianSource>(m_instance)->SetCenter(arg0, arg1, arg2);
}



void vtkImageGaussianSource::SetCenter(array<double>^ a)
{
  pin_ptr<double> aPin = &a[0];
  double* nativeaPin = aPin;
  vtk::ConvertManagedToNative<::vtkImageGaussianSource>(m_instance)->SetCenter(nativeaPin);
}



array<double>^ vtkImageGaussianSource::GetCenter()
{
  const double* retVal = vtk::ConvertManagedToNative<::vtkImageGaussianSource>(m_instance)->GetCenter();
  array<double>^ mRetVal = gcnew array<double>(3);
  for (size_t cprIdx=0; cprIdx<3; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



void vtkImageGaussianSource::SetMaximum(double arg0)
{
  vtk::ConvertManagedToNative<::vtkImageGaussianSource>(m_instance)->SetMaximum(arg0);
}



double vtkImageGaussianSource::GetMaximum()
{
  double retVal = vtk::ConvertManagedToNative<::vtkImageGaussianSource>(m_instance)->GetMaximum();
  return retVal;
}



void vtkImageGaussianSource::SetStandardDeviation(double arg0)
{
  vtk::ConvertManagedToNative<::vtkImageGaussianSource>(m_instance)->SetStandardDeviation(arg0);
}



double vtkImageGaussianSource::GetStandardDeviation()
{
  double retVal = vtk::ConvertManagedToNative<::vtkImageGaussianSource>(m_instance)->GetStandardDeviation();
  return retVal;
}



  vtkImageGaussianSource::vtkImageGaussianSource(System::IntPtr native, bool bConst) : vtkImageAlgorithm(native, bConst) {}



  vtkImageGaussianSource::vtkImageGaussianSource(bool donothing) : vtkImageAlgorithm(donothing) {}



  vtkImageGaussianSource::vtkImageGaussianSource() : vtkImageAlgorithm(false) {
  this->SetNativePointer(IntPtr(::vtkImageGaussianSource::New()));
}



  vtkImageGaussianSource::~vtkImageGaussianSource() { }





} // end namespace vtkImaging
