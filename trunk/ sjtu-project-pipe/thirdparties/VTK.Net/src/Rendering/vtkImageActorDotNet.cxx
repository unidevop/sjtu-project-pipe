

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkImageActorDotNet.h"

// native includes
#include "strstream"
#include "vtkImageActor.h"
#include "vtkImageData.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkImageActor::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkImageActor>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkImageActor::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkImageActor>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkImageActor^ vtkImageActor::NewInstance()
{
  ::vtkImageActor* retVal = static_cast<::vtkImageActor*>(vtk::ConvertManagedToNative<::vtkImageActor>(m_instance)->NewInstance());
  return gcnew vtkImageActor(IntPtr(retVal), false);
}



vtkImageActor^ vtkImageActor::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkImageActor* retVal = static_cast<::vtkImageActor*>(::vtkImageActor::SafeDownCast(oWrap));
  return gcnew vtkImageActor(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkImageActor::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkImageActor>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkImageActor::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkImageActor>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkImageActor::SetInput(vtkImageData^ arg0)
{
  ::vtkImageData* arg0Wrap = vtk::ConvertManagedToNative<::vtkImageData>(arg0->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkImageActor>(m_instance)->SetInput(arg0Wrap);
}



vtkImageData^ vtkImageActor::GetInput()
{
  ::vtkImageData* retVal = static_cast<::vtkImageData*>(vtk::ConvertManagedToNative<::vtkImageActor>(m_instance)->GetInput());
  return gcnew vtkImageData(IntPtr(retVal), false);
}



int vtkImageActor::GetInterpolate()
{
  int retVal = vtk::ConvertManagedToNative<::vtkImageActor>(m_instance)->GetInterpolate();
  return retVal;
}



void vtkImageActor::SetInterpolate(int arg0)
{
  vtk::ConvertManagedToNative<::vtkImageActor>(m_instance)->SetInterpolate(arg0);
}



void vtkImageActor::InterpolateOn()
{
  vtk::ConvertManagedToNative<::vtkImageActor>(m_instance)->InterpolateOn();
}



void vtkImageActor::InterpolateOff()
{
  vtk::ConvertManagedToNative<::vtkImageActor>(m_instance)->InterpolateOff();
}



void vtkImageActor::SetOpacity(double arg0)
{
  vtk::ConvertManagedToNative<::vtkImageActor>(m_instance)->SetOpacity(arg0);
}



double vtkImageActor::GetOpacityMinValue()
{
  double retVal = vtk::ConvertManagedToNative<::vtkImageActor>(m_instance)->GetOpacityMinValue();
  return retVal;
}



double vtkImageActor::GetOpacityMaxValue()
{
  double retVal = vtk::ConvertManagedToNative<::vtkImageActor>(m_instance)->GetOpacityMaxValue();
  return retVal;
}



double vtkImageActor::GetOpacity()
{
  double retVal = vtk::ConvertManagedToNative<::vtkImageActor>(m_instance)->GetOpacity();
  return retVal;
}



void vtkImageActor::SetDisplayExtent(array<int>^ extent)
{
  pin_ptr<int> extentPin = &extent[0];
  int* nativeextentPin = extentPin;
  vtk::ConvertManagedToNative<::vtkImageActor>(m_instance)->SetDisplayExtent(nativeextentPin);
}



void vtkImageActor::SetDisplayExtent(int minX, int maxX, int minY, int maxY, int minZ, int maxZ)
{
  vtk::ConvertManagedToNative<::vtkImageActor>(m_instance)->SetDisplayExtent(minX, maxX, minY, maxY, minZ, maxZ);
}



void vtkImageActor::GetDisplayExtent(array<int>^ extent)
{
  pin_ptr<int> extentPin = &extent[0];
  int* nativeextentPin = extentPin;
  vtk::ConvertManagedToNative<::vtkImageActor>(m_instance)->GetDisplayExtent(nativeextentPin);
}



array<int>^ vtkImageActor::GetDisplayExtent()
{
  const int* retVal = vtk::ConvertManagedToNative<::vtkImageActor>(m_instance)->GetDisplayExtent();
  array<int>^ mRetVal = gcnew array<int>(6);
  for (size_t cprIdx=0; cprIdx<6; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



array<double>^ vtkImageActor::GetBounds()
{
  const double* retVal = vtk::ConvertManagedToNative<::vtkImageActor>(m_instance)->GetBounds();
  array<double>^ mRetVal = gcnew array<double>(6);
  for (size_t cprIdx=0; cprIdx<6; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



void vtkImageActor::GetBounds(array<double>^ bounds)
{
  pin_ptr<double> boundsPin = &bounds[0];
  double* nativeboundsPin = boundsPin;
  vtk::ConvertManagedToNative<::vtkImageActor>(m_instance)->GetBounds(nativeboundsPin);
}



void vtkImageActor::GetDisplayBounds(array<double>^ bounds)
{
  pin_ptr<double> boundsPin = &bounds[0];
  double* nativeboundsPin = boundsPin;
  vtk::ConvertManagedToNative<::vtkImageActor>(m_instance)->GetDisplayBounds(nativeboundsPin);
}



int vtkImageActor::GetSliceNumber()
{
  int retVal = vtk::ConvertManagedToNative<::vtkImageActor>(m_instance)->GetSliceNumber();
  return retVal;
}



void vtkImageActor::SetZSlice(int z)
{
  vtk::ConvertManagedToNative<::vtkImageActor>(m_instance)->SetZSlice(z);
}



int vtkImageActor::GetZSlice()
{
  int retVal = vtk::ConvertManagedToNative<::vtkImageActor>(m_instance)->GetZSlice();
  return retVal;
}



int vtkImageActor::GetWholeZMin()
{
  int retVal = vtk::ConvertManagedToNative<::vtkImageActor>(m_instance)->GetWholeZMin();
  return retVal;
}



int vtkImageActor::GetWholeZMax()
{
  int retVal = vtk::ConvertManagedToNative<::vtkImageActor>(m_instance)->GetWholeZMax();
  return retVal;
}



  vtkImageActor::vtkImageActor(System::IntPtr native, bool bConst) : vtkProp3D(native, bConst) {}



  vtkImageActor::vtkImageActor(bool donothing) : vtkProp3D(donothing) {}



  vtkImageActor::vtkImageActor() : vtkProp3D(false) {
  this->SetNativePointer(IntPtr(::vtkImageActor::New()));
}



  vtkImageActor::~vtkImageActor() { }





} // end namespace vtkRendering
