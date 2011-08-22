

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkImageShrink3DDotNet.h"

// native includes
#include "strstream"
#include "vtkImageShrink3D.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkImageShrink3D::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkImageShrink3D>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkImageShrink3D::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkImageShrink3D>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkImageShrink3D^ vtkImageShrink3D::NewInstance()
{
  ::vtkImageShrink3D* retVal = static_cast<::vtkImageShrink3D*>(vtk::ConvertManagedToNative<::vtkImageShrink3D>(m_instance)->NewInstance());
  return gcnew vtkImageShrink3D(IntPtr(retVal), false);
}



vtkImageShrink3D^ vtkImageShrink3D::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkImageShrink3D* retVal = static_cast<::vtkImageShrink3D*>(::vtkImageShrink3D::SafeDownCast(oWrap));
  return gcnew vtkImageShrink3D(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkImageShrink3D::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkImageShrink3D>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkImageShrink3D::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkImageShrink3D>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkImageShrink3D::SetShrinkFactors(int arg0, int arg1, int arg2)
{
  vtk::ConvertManagedToNative<::vtkImageShrink3D>(m_instance)->SetShrinkFactors(arg0, arg1, arg2);
}



void vtkImageShrink3D::SetShrinkFactors(array<int>^ a)
{
  pin_ptr<int> aPin = &a[0];
  int* nativeaPin = aPin;
  vtk::ConvertManagedToNative<::vtkImageShrink3D>(m_instance)->SetShrinkFactors(nativeaPin);
}



array<int>^ vtkImageShrink3D::GetShrinkFactors()
{
  const int* retVal = vtk::ConvertManagedToNative<::vtkImageShrink3D>(m_instance)->GetShrinkFactors();
  array<int>^ mRetVal = gcnew array<int>(3);
  for (size_t cprIdx=0; cprIdx<3; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



void vtkImageShrink3D::SetShift(int arg0, int arg1, int arg2)
{
  vtk::ConvertManagedToNative<::vtkImageShrink3D>(m_instance)->SetShift(arg0, arg1, arg2);
}



void vtkImageShrink3D::SetShift(array<int>^ a)
{
  pin_ptr<int> aPin = &a[0];
  int* nativeaPin = aPin;
  vtk::ConvertManagedToNative<::vtkImageShrink3D>(m_instance)->SetShift(nativeaPin);
}



array<int>^ vtkImageShrink3D::GetShift()
{
  const int* retVal = vtk::ConvertManagedToNative<::vtkImageShrink3D>(m_instance)->GetShift();
  array<int>^ mRetVal = gcnew array<int>(3);
  for (size_t cprIdx=0; cprIdx<3; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



void vtkImageShrink3D::SetAveraging(int arg0)
{
  vtk::ConvertManagedToNative<::vtkImageShrink3D>(m_instance)->SetAveraging(arg0);
}



int vtkImageShrink3D::GetAveraging()
{
  int retVal = vtk::ConvertManagedToNative<::vtkImageShrink3D>(m_instance)->GetAveraging();
  return retVal;
}



void vtkImageShrink3D::AveragingOn()
{
  vtk::ConvertManagedToNative<::vtkImageShrink3D>(m_instance)->AveragingOn();
}



void vtkImageShrink3D::AveragingOff()
{
  vtk::ConvertManagedToNative<::vtkImageShrink3D>(m_instance)->AveragingOff();
}



void vtkImageShrink3D::SetMean(int arg0)
{
  vtk::ConvertManagedToNative<::vtkImageShrink3D>(m_instance)->SetMean(arg0);
}



int vtkImageShrink3D::GetMean()
{
  int retVal = vtk::ConvertManagedToNative<::vtkImageShrink3D>(m_instance)->GetMean();
  return retVal;
}



void vtkImageShrink3D::MeanOn()
{
  vtk::ConvertManagedToNative<::vtkImageShrink3D>(m_instance)->MeanOn();
}



void vtkImageShrink3D::MeanOff()
{
  vtk::ConvertManagedToNative<::vtkImageShrink3D>(m_instance)->MeanOff();
}



void vtkImageShrink3D::SetMinimum(int arg0)
{
  vtk::ConvertManagedToNative<::vtkImageShrink3D>(m_instance)->SetMinimum(arg0);
}



int vtkImageShrink3D::GetMinimum()
{
  int retVal = vtk::ConvertManagedToNative<::vtkImageShrink3D>(m_instance)->GetMinimum();
  return retVal;
}



void vtkImageShrink3D::MinimumOn()
{
  vtk::ConvertManagedToNative<::vtkImageShrink3D>(m_instance)->MinimumOn();
}



void vtkImageShrink3D::MinimumOff()
{
  vtk::ConvertManagedToNative<::vtkImageShrink3D>(m_instance)->MinimumOff();
}



void vtkImageShrink3D::SetMaximum(int arg0)
{
  vtk::ConvertManagedToNative<::vtkImageShrink3D>(m_instance)->SetMaximum(arg0);
}



int vtkImageShrink3D::GetMaximum()
{
  int retVal = vtk::ConvertManagedToNative<::vtkImageShrink3D>(m_instance)->GetMaximum();
  return retVal;
}



void vtkImageShrink3D::MaximumOn()
{
  vtk::ConvertManagedToNative<::vtkImageShrink3D>(m_instance)->MaximumOn();
}



void vtkImageShrink3D::MaximumOff()
{
  vtk::ConvertManagedToNative<::vtkImageShrink3D>(m_instance)->MaximumOff();
}



void vtkImageShrink3D::SetMedian(int arg0)
{
  vtk::ConvertManagedToNative<::vtkImageShrink3D>(m_instance)->SetMedian(arg0);
}



int vtkImageShrink3D::GetMedian()
{
  int retVal = vtk::ConvertManagedToNative<::vtkImageShrink3D>(m_instance)->GetMedian();
  return retVal;
}



void vtkImageShrink3D::MedianOn()
{
  vtk::ConvertManagedToNative<::vtkImageShrink3D>(m_instance)->MedianOn();
}



void vtkImageShrink3D::MedianOff()
{
  vtk::ConvertManagedToNative<::vtkImageShrink3D>(m_instance)->MedianOff();
}



  vtkImageShrink3D::vtkImageShrink3D(System::IntPtr native, bool bConst) : vtkThreadedImageAlgorithm(native, bConst) {}



  vtkImageShrink3D::vtkImageShrink3D(bool donothing) : vtkThreadedImageAlgorithm(donothing) {}



  vtkImageShrink3D::vtkImageShrink3D() : vtkThreadedImageAlgorithm(false) {
  this->SetNativePointer(IntPtr(::vtkImageShrink3D::New()));
}



  vtkImageShrink3D::~vtkImageShrink3D() { }





} // end namespace vtkImaging
