

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkVideoSourceDotNet.h"

// native includes
#include "strstream"
#include "vtkVideoSource.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkVideoSource::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkVideoSource>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkVideoSource::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkVideoSource>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkVideoSource^ vtkVideoSource::NewInstance()
{
  ::vtkVideoSource* retVal = static_cast<::vtkVideoSource*>(vtk::ConvertManagedToNative<::vtkVideoSource>(m_instance)->NewInstance());
  return gcnew vtkVideoSource(IntPtr(retVal), false);
}



vtkVideoSource^ vtkVideoSource::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkVideoSource* retVal = static_cast<::vtkVideoSource*>(::vtkVideoSource::SafeDownCast(oWrap));
  return gcnew vtkVideoSource(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkVideoSource::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkVideoSource>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkVideoSource::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkVideoSource>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkVideoSource::Record()
{
  vtk::ConvertManagedToNative<::vtkVideoSource>(m_instance)->Record();
}



void vtkVideoSource::Play()
{
  vtk::ConvertManagedToNative<::vtkVideoSource>(m_instance)->Play();
}



void vtkVideoSource::Stop()
{
  vtk::ConvertManagedToNative<::vtkVideoSource>(m_instance)->Stop();
}



void vtkVideoSource::Rewind()
{
  vtk::ConvertManagedToNative<::vtkVideoSource>(m_instance)->Rewind();
}



void vtkVideoSource::FastForward()
{
  vtk::ConvertManagedToNative<::vtkVideoSource>(m_instance)->FastForward();
}



void vtkVideoSource::Seek(int n)
{
  vtk::ConvertManagedToNative<::vtkVideoSource>(m_instance)->Seek(n);
}



void vtkVideoSource::Grab()
{
  vtk::ConvertManagedToNative<::vtkVideoSource>(m_instance)->Grab();
}



int vtkVideoSource::GetRecording()
{
  int retVal = vtk::ConvertManagedToNative<::vtkVideoSource>(m_instance)->GetRecording();
  return retVal;
}



int vtkVideoSource::GetPlaying()
{
  int retVal = vtk::ConvertManagedToNative<::vtkVideoSource>(m_instance)->GetPlaying();
  return retVal;
}



void vtkVideoSource::SetFrameSize(int x, int y, int z)
{
  vtk::ConvertManagedToNative<::vtkVideoSource>(m_instance)->SetFrameSize(x, y, z);
}



void vtkVideoSource::SetFrameSize(array<int>^ dim)
{
  pin_ptr<int> dimPin = &dim[0];
  int* nativedimPin = dimPin;
  vtk::ConvertManagedToNative<::vtkVideoSource>(m_instance)->SetFrameSize(nativedimPin);
}



array<int>^ vtkVideoSource::GetFrameSize()
{
  const int* retVal = vtk::ConvertManagedToNative<::vtkVideoSource>(m_instance)->GetFrameSize();
  array<int>^ mRetVal = gcnew array<int>(3);
  for (size_t cprIdx=0; cprIdx<3; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



void vtkVideoSource::SetFrameRate(float rate)
{
  vtk::ConvertManagedToNative<::vtkVideoSource>(m_instance)->SetFrameRate(rate);
}



float vtkVideoSource::GetFrameRate()
{
  float retVal = vtk::ConvertManagedToNative<::vtkVideoSource>(m_instance)->GetFrameRate();
  return retVal;
}



void vtkVideoSource::SetOutputFormat(int format)
{
  vtk::ConvertManagedToNative<::vtkVideoSource>(m_instance)->SetOutputFormat(format);
}



void vtkVideoSource::SetOutputFormatToLuminance()
{
  vtk::ConvertManagedToNative<::vtkVideoSource>(m_instance)->SetOutputFormatToLuminance();
}



void vtkVideoSource::SetOutputFormatToRGB()
{
  vtk::ConvertManagedToNative<::vtkVideoSource>(m_instance)->SetOutputFormatToRGB();
}



void vtkVideoSource::SetOutputFormatToRGBA()
{
  vtk::ConvertManagedToNative<::vtkVideoSource>(m_instance)->SetOutputFormatToRGBA();
}



int vtkVideoSource::GetOutputFormat()
{
  int retVal = vtk::ConvertManagedToNative<::vtkVideoSource>(m_instance)->GetOutputFormat();
  return retVal;
}



void vtkVideoSource::SetFrameBufferSize(int FrameBufferSize)
{
  vtk::ConvertManagedToNative<::vtkVideoSource>(m_instance)->SetFrameBufferSize(FrameBufferSize);
}



int vtkVideoSource::GetFrameBufferSize()
{
  int retVal = vtk::ConvertManagedToNative<::vtkVideoSource>(m_instance)->GetFrameBufferSize();
  return retVal;
}



void vtkVideoSource::SetNumberOfOutputFrames(int arg0)
{
  vtk::ConvertManagedToNative<::vtkVideoSource>(m_instance)->SetNumberOfOutputFrames(arg0);
}



int vtkVideoSource::GetNumberOfOutputFrames()
{
  int retVal = vtk::ConvertManagedToNative<::vtkVideoSource>(m_instance)->GetNumberOfOutputFrames();
  return retVal;
}



void vtkVideoSource::AutoAdvanceOn()
{
  vtk::ConvertManagedToNative<::vtkVideoSource>(m_instance)->AutoAdvanceOn();
}



void vtkVideoSource::AutoAdvanceOff()
{
  vtk::ConvertManagedToNative<::vtkVideoSource>(m_instance)->AutoAdvanceOff();
}



void vtkVideoSource::SetAutoAdvance(int arg0)
{
  vtk::ConvertManagedToNative<::vtkVideoSource>(m_instance)->SetAutoAdvance(arg0);
}



int vtkVideoSource::GetAutoAdvance()
{
  int retVal = vtk::ConvertManagedToNative<::vtkVideoSource>(m_instance)->GetAutoAdvance();
  return retVal;
}



void vtkVideoSource::SetClipRegion(array<int>^ r)
{
  pin_ptr<int> rPin = &r[0];
  int* nativerPin = rPin;
  vtk::ConvertManagedToNative<::vtkVideoSource>(m_instance)->SetClipRegion(nativerPin);
}



void vtkVideoSource::SetClipRegion(int x0, int x1, int y0, int y1, int z0, int z1)
{
  vtk::ConvertManagedToNative<::vtkVideoSource>(m_instance)->SetClipRegion(x0, x1, y0, y1, z0, z1);
}



array<int>^ vtkVideoSource::GetClipRegion()
{
  const int* retVal = vtk::ConvertManagedToNative<::vtkVideoSource>(m_instance)->GetClipRegion();
  array<int>^ mRetVal = gcnew array<int>(6);
  for (size_t cprIdx=0; cprIdx<6; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



void vtkVideoSource::SetOutputWholeExtent(int arg0, int arg1, int arg2, int arg3, int arg4, int arg5)
{
  vtk::ConvertManagedToNative<::vtkVideoSource>(m_instance)->SetOutputWholeExtent(arg0, arg1, arg2, arg3, arg4, arg5);
}



void vtkVideoSource::SetOutputWholeExtent(array<int>^ a)
{
  pin_ptr<int> aPin = &a[0];
  int* nativeaPin = aPin;
  vtk::ConvertManagedToNative<::vtkVideoSource>(m_instance)->SetOutputWholeExtent(nativeaPin);
}



array<int>^ vtkVideoSource::GetOutputWholeExtent()
{
  const int* retVal = vtk::ConvertManagedToNative<::vtkVideoSource>(m_instance)->GetOutputWholeExtent();
  array<int>^ mRetVal = gcnew array<int>(6);
  for (size_t cprIdx=0; cprIdx<6; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



void vtkVideoSource::SetDataSpacing(double arg0, double arg1, double arg2)
{
  vtk::ConvertManagedToNative<::vtkVideoSource>(m_instance)->SetDataSpacing(arg0, arg1, arg2);
}



void vtkVideoSource::SetDataSpacing(array<double>^ a)
{
  pin_ptr<double> aPin = &a[0];
  double* nativeaPin = aPin;
  vtk::ConvertManagedToNative<::vtkVideoSource>(m_instance)->SetDataSpacing(nativeaPin);
}



array<double>^ vtkVideoSource::GetDataSpacing()
{
  const double* retVal = vtk::ConvertManagedToNative<::vtkVideoSource>(m_instance)->GetDataSpacing();
  array<double>^ mRetVal = gcnew array<double>(3);
  for (size_t cprIdx=0; cprIdx<3; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



void vtkVideoSource::SetDataOrigin(double arg0, double arg1, double arg2)
{
  vtk::ConvertManagedToNative<::vtkVideoSource>(m_instance)->SetDataOrigin(arg0, arg1, arg2);
}



void vtkVideoSource::SetDataOrigin(array<double>^ a)
{
  pin_ptr<double> aPin = &a[0];
  double* nativeaPin = aPin;
  vtk::ConvertManagedToNative<::vtkVideoSource>(m_instance)->SetDataOrigin(nativeaPin);
}



array<double>^ vtkVideoSource::GetDataOrigin()
{
  const double* retVal = vtk::ConvertManagedToNative<::vtkVideoSource>(m_instance)->GetDataOrigin();
  array<double>^ mRetVal = gcnew array<double>(3);
  for (size_t cprIdx=0; cprIdx<3; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



void vtkVideoSource::SetOpacity(float arg0)
{
  vtk::ConvertManagedToNative<::vtkVideoSource>(m_instance)->SetOpacity(arg0);
}



float vtkVideoSource::GetOpacity()
{
  float retVal = vtk::ConvertManagedToNative<::vtkVideoSource>(m_instance)->GetOpacity();
  return retVal;
}



int vtkVideoSource::GetFrameCount()
{
  int retVal = vtk::ConvertManagedToNative<::vtkVideoSource>(m_instance)->GetFrameCount();
  return retVal;
}



void vtkVideoSource::SetFrameCount(int arg0)
{
  vtk::ConvertManagedToNative<::vtkVideoSource>(m_instance)->SetFrameCount(arg0);
}



int vtkVideoSource::GetFrameIndex()
{
  int retVal = vtk::ConvertManagedToNative<::vtkVideoSource>(m_instance)->GetFrameIndex();
  return retVal;
}



double vtkVideoSource::GetFrameTimeStamp(int frame)
{
  double retVal = vtk::ConvertManagedToNative<::vtkVideoSource>(m_instance)->GetFrameTimeStamp(frame);
  return retVal;
}



double vtkVideoSource::GetFrameTimeStamp()
{
  double retVal = vtk::ConvertManagedToNative<::vtkVideoSource>(m_instance)->GetFrameTimeStamp();
  return retVal;
}



void vtkVideoSource::Initialize()
{
  vtk::ConvertManagedToNative<::vtkVideoSource>(m_instance)->Initialize();
}



int vtkVideoSource::GetInitialized()
{
  int retVal = vtk::ConvertManagedToNative<::vtkVideoSource>(m_instance)->GetInitialized();
  return retVal;
}



void vtkVideoSource::ReleaseSystemResources()
{
  vtk::ConvertManagedToNative<::vtkVideoSource>(m_instance)->ReleaseSystemResources();
}



void vtkVideoSource::InternalGrab()
{
  vtk::ConvertManagedToNative<::vtkVideoSource>(m_instance)->InternalGrab();
}



void vtkVideoSource::SetStartTimeStamp(double t)
{
  vtk::ConvertManagedToNative<::vtkVideoSource>(m_instance)->SetStartTimeStamp(t);
}



double vtkVideoSource::GetStartTimeStamp()
{
  double retVal = vtk::ConvertManagedToNative<::vtkVideoSource>(m_instance)->GetStartTimeStamp();
  return retVal;
}



  vtkVideoSource::vtkVideoSource(System::IntPtr native, bool bConst) : vtkImageAlgorithm(native, bConst) {}



  vtkVideoSource::vtkVideoSource(bool donothing) : vtkImageAlgorithm(donothing) {}



  vtkVideoSource::vtkVideoSource() : vtkImageAlgorithm(false) {
  this->SetNativePointer(IntPtr(::vtkVideoSource::New()));
}



  vtkVideoSource::~vtkVideoSource() { }





} // end namespace vtkHybrid
