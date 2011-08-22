

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkBase64UtilitiesDotNet.h"

// native includes
#include "strstream"
#include "vtkBase64Utilities.h"

using namespace System;

namespace vtk {

System::String^ vtkBase64Utilities::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkBase64Utilities>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkBase64Utilities::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkBase64Utilities>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkBase64Utilities^ vtkBase64Utilities::NewInstance()
{
  ::vtkBase64Utilities* retVal = static_cast<::vtkBase64Utilities*>(vtk::ConvertManagedToNative<::vtkBase64Utilities>(m_instance)->NewInstance());
  return gcnew vtkBase64Utilities(IntPtr(retVal), false);
}



vtkBase64Utilities^ vtkBase64Utilities::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkBase64Utilities* retVal = static_cast<::vtkBase64Utilities*>(::vtkBase64Utilities::SafeDownCast(oWrap));
  return gcnew vtkBase64Utilities(IntPtr(retVal), false);
}



void vtkBase64Utilities::EncodeTriplet(unsigned char i0, unsigned char i1, unsigned char i2, array<unsigned char>^ o0, array<unsigned char>^ o1, array<unsigned char>^ o2, array<unsigned char>^ o3)
{
  pin_ptr<unsigned char> o0Pin = &o0[0];
  unsigned char* nativeo0Pin = o0Pin;
  pin_ptr<unsigned char> o1Pin = &o1[0];
  unsigned char* nativeo1Pin = o1Pin;
  pin_ptr<unsigned char> o2Pin = &o2[0];
  unsigned char* nativeo2Pin = o2Pin;
  pin_ptr<unsigned char> o3Pin = &o3[0];
  unsigned char* nativeo3Pin = o3Pin;
  ::vtkBase64Utilities::EncodeTriplet(i0, i1, i2, nativeo0Pin, nativeo1Pin, nativeo2Pin, nativeo3Pin);
}



void vtkBase64Utilities::EncodePair(unsigned char i0, unsigned char i1, array<unsigned char>^ o0, array<unsigned char>^ o1, array<unsigned char>^ o2, array<unsigned char>^ o3)
{
  pin_ptr<unsigned char> o0Pin = &o0[0];
  unsigned char* nativeo0Pin = o0Pin;
  pin_ptr<unsigned char> o1Pin = &o1[0];
  unsigned char* nativeo1Pin = o1Pin;
  pin_ptr<unsigned char> o2Pin = &o2[0];
  unsigned char* nativeo2Pin = o2Pin;
  pin_ptr<unsigned char> o3Pin = &o3[0];
  unsigned char* nativeo3Pin = o3Pin;
  ::vtkBase64Utilities::EncodePair(i0, i1, nativeo0Pin, nativeo1Pin, nativeo2Pin, nativeo3Pin);
}



void vtkBase64Utilities::EncodeSingle(unsigned char i0, array<unsigned char>^ o0, array<unsigned char>^ o1, array<unsigned char>^ o2, array<unsigned char>^ o3)
{
  pin_ptr<unsigned char> o0Pin = &o0[0];
  unsigned char* nativeo0Pin = o0Pin;
  pin_ptr<unsigned char> o1Pin = &o1[0];
  unsigned char* nativeo1Pin = o1Pin;
  pin_ptr<unsigned char> o2Pin = &o2[0];
  unsigned char* nativeo2Pin = o2Pin;
  pin_ptr<unsigned char> o3Pin = &o3[0];
  unsigned char* nativeo3Pin = o3Pin;
  ::vtkBase64Utilities::EncodeSingle(i0, nativeo0Pin, nativeo1Pin, nativeo2Pin, nativeo3Pin);
}



unsigned long vtkBase64Utilities::Encode(array<unsigned char>^ input, unsigned long length, array<unsigned char>^ output, int mark_end)
{
  pin_ptr<unsigned char> inputPin = &input[0];
  unsigned char* nativeinputPin = inputPin;
  pin_ptr<unsigned char> outputPin = &output[0];
  unsigned char* nativeoutputPin = outputPin;
  unsigned long retVal = ::vtkBase64Utilities::Encode(nativeinputPin, length, nativeoutputPin, mark_end);
  return retVal;
}



int vtkBase64Utilities::DecodeTriplet(unsigned char i0, unsigned char i1, unsigned char i2, unsigned char i3, array<unsigned char>^ o0, array<unsigned char>^ o1, array<unsigned char>^ o2)
{
  pin_ptr<unsigned char> o0Pin = &o0[0];
  unsigned char* nativeo0Pin = o0Pin;
  pin_ptr<unsigned char> o1Pin = &o1[0];
  unsigned char* nativeo1Pin = o1Pin;
  pin_ptr<unsigned char> o2Pin = &o2[0];
  unsigned char* nativeo2Pin = o2Pin;
  int retVal = ::vtkBase64Utilities::DecodeTriplet(i0, i1, i2, i3, nativeo0Pin, nativeo1Pin, nativeo2Pin);
  return retVal;
}



unsigned long vtkBase64Utilities::Decode(array<unsigned char>^ input, unsigned long length, array<unsigned char>^ output, unsigned long max_input_length)
{
  pin_ptr<unsigned char> inputPin = &input[0];
  unsigned char* nativeinputPin = inputPin;
  pin_ptr<unsigned char> outputPin = &output[0];
  unsigned char* nativeoutputPin = outputPin;
  unsigned long retVal = ::vtkBase64Utilities::Decode(nativeinputPin, length, nativeoutputPin, max_input_length);
  return retVal;
}



  vtkBase64Utilities::vtkBase64Utilities(System::IntPtr native, bool bConst) : vtkObject(native, bConst) {}



  vtkBase64Utilities::vtkBase64Utilities(bool donothing) : vtkObject(donothing) {}



  vtkBase64Utilities::vtkBase64Utilities() : vtkObject(false) {
  this->SetNativePointer(IntPtr(::vtkBase64Utilities::New()));
}



  vtkBase64Utilities::~vtkBase64Utilities() { }





} // end namespace vtkIO
