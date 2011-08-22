

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkBooleanTextureDotNet.h"

// native includes
#include "strstream"
#include "vtkBooleanTexture.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkBooleanTexture::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkBooleanTexture>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkBooleanTexture::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkBooleanTexture>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkBooleanTexture^ vtkBooleanTexture::NewInstance()
{
  ::vtkBooleanTexture* retVal = static_cast<::vtkBooleanTexture*>(vtk::ConvertManagedToNative<::vtkBooleanTexture>(m_instance)->NewInstance());
  return gcnew vtkBooleanTexture(IntPtr(retVal), false);
}



vtkBooleanTexture^ vtkBooleanTexture::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkBooleanTexture* retVal = static_cast<::vtkBooleanTexture*>(::vtkBooleanTexture::SafeDownCast(oWrap));
  return gcnew vtkBooleanTexture(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkBooleanTexture::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkBooleanTexture>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkBooleanTexture::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkBooleanTexture>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkBooleanTexture::SetXSize(int arg0)
{
  vtk::ConvertManagedToNative<::vtkBooleanTexture>(m_instance)->SetXSize(arg0);
}



int vtkBooleanTexture::GetXSize()
{
  int retVal = vtk::ConvertManagedToNative<::vtkBooleanTexture>(m_instance)->GetXSize();
  return retVal;
}



void vtkBooleanTexture::SetYSize(int arg0)
{
  vtk::ConvertManagedToNative<::vtkBooleanTexture>(m_instance)->SetYSize(arg0);
}



int vtkBooleanTexture::GetYSize()
{
  int retVal = vtk::ConvertManagedToNative<::vtkBooleanTexture>(m_instance)->GetYSize();
  return retVal;
}



void vtkBooleanTexture::SetThickness(int arg0)
{
  vtk::ConvertManagedToNative<::vtkBooleanTexture>(m_instance)->SetThickness(arg0);
}



int vtkBooleanTexture::GetThickness()
{
  int retVal = vtk::ConvertManagedToNative<::vtkBooleanTexture>(m_instance)->GetThickness();
  return retVal;
}



void vtkBooleanTexture::SetInIn(unsigned char arg0, unsigned char arg1)
{
  vtk::ConvertManagedToNative<::vtkBooleanTexture>(m_instance)->SetInIn(arg0, arg1);
}



void vtkBooleanTexture::SetInIn(array<unsigned char>^ a)
{
  pin_ptr<unsigned char> aPin = &a[0];
  unsigned char* nativeaPin = aPin;
  vtk::ConvertManagedToNative<::vtkBooleanTexture>(m_instance)->SetInIn(nativeaPin);
}



array<unsigned char>^ vtkBooleanTexture::GetInIn()
{
  const unsigned char* retVal = vtk::ConvertManagedToNative<::vtkBooleanTexture>(m_instance)->GetInIn();
  array<unsigned char>^ mRetVal = gcnew array<unsigned char>(2);
  for (size_t cprIdx=0; cprIdx<2; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



void vtkBooleanTexture::SetInOut(unsigned char arg0, unsigned char arg1)
{
  vtk::ConvertManagedToNative<::vtkBooleanTexture>(m_instance)->SetInOut(arg0, arg1);
}



void vtkBooleanTexture::SetInOut(array<unsigned char>^ a)
{
  pin_ptr<unsigned char> aPin = &a[0];
  unsigned char* nativeaPin = aPin;
  vtk::ConvertManagedToNative<::vtkBooleanTexture>(m_instance)->SetInOut(nativeaPin);
}



array<unsigned char>^ vtkBooleanTexture::GetInOut()
{
  const unsigned char* retVal = vtk::ConvertManagedToNative<::vtkBooleanTexture>(m_instance)->GetInOut();
  array<unsigned char>^ mRetVal = gcnew array<unsigned char>(2);
  for (size_t cprIdx=0; cprIdx<2; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



void vtkBooleanTexture::SetOutIn(unsigned char arg0, unsigned char arg1)
{
  vtk::ConvertManagedToNative<::vtkBooleanTexture>(m_instance)->SetOutIn(arg0, arg1);
}



void vtkBooleanTexture::SetOutIn(array<unsigned char>^ a)
{
  pin_ptr<unsigned char> aPin = &a[0];
  unsigned char* nativeaPin = aPin;
  vtk::ConvertManagedToNative<::vtkBooleanTexture>(m_instance)->SetOutIn(nativeaPin);
}



array<unsigned char>^ vtkBooleanTexture::GetOutIn()
{
  const unsigned char* retVal = vtk::ConvertManagedToNative<::vtkBooleanTexture>(m_instance)->GetOutIn();
  array<unsigned char>^ mRetVal = gcnew array<unsigned char>(2);
  for (size_t cprIdx=0; cprIdx<2; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



void vtkBooleanTexture::SetOutOut(unsigned char arg0, unsigned char arg1)
{
  vtk::ConvertManagedToNative<::vtkBooleanTexture>(m_instance)->SetOutOut(arg0, arg1);
}



void vtkBooleanTexture::SetOutOut(array<unsigned char>^ a)
{
  pin_ptr<unsigned char> aPin = &a[0];
  unsigned char* nativeaPin = aPin;
  vtk::ConvertManagedToNative<::vtkBooleanTexture>(m_instance)->SetOutOut(nativeaPin);
}



array<unsigned char>^ vtkBooleanTexture::GetOutOut()
{
  const unsigned char* retVal = vtk::ConvertManagedToNative<::vtkBooleanTexture>(m_instance)->GetOutOut();
  array<unsigned char>^ mRetVal = gcnew array<unsigned char>(2);
  for (size_t cprIdx=0; cprIdx<2; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



void vtkBooleanTexture::SetOnOn(unsigned char arg0, unsigned char arg1)
{
  vtk::ConvertManagedToNative<::vtkBooleanTexture>(m_instance)->SetOnOn(arg0, arg1);
}



void vtkBooleanTexture::SetOnOn(array<unsigned char>^ a)
{
  pin_ptr<unsigned char> aPin = &a[0];
  unsigned char* nativeaPin = aPin;
  vtk::ConvertManagedToNative<::vtkBooleanTexture>(m_instance)->SetOnOn(nativeaPin);
}



array<unsigned char>^ vtkBooleanTexture::GetOnOn()
{
  const unsigned char* retVal = vtk::ConvertManagedToNative<::vtkBooleanTexture>(m_instance)->GetOnOn();
  array<unsigned char>^ mRetVal = gcnew array<unsigned char>(2);
  for (size_t cprIdx=0; cprIdx<2; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



void vtkBooleanTexture::SetOnIn(unsigned char arg0, unsigned char arg1)
{
  vtk::ConvertManagedToNative<::vtkBooleanTexture>(m_instance)->SetOnIn(arg0, arg1);
}



void vtkBooleanTexture::SetOnIn(array<unsigned char>^ a)
{
  pin_ptr<unsigned char> aPin = &a[0];
  unsigned char* nativeaPin = aPin;
  vtk::ConvertManagedToNative<::vtkBooleanTexture>(m_instance)->SetOnIn(nativeaPin);
}



array<unsigned char>^ vtkBooleanTexture::GetOnIn()
{
  const unsigned char* retVal = vtk::ConvertManagedToNative<::vtkBooleanTexture>(m_instance)->GetOnIn();
  array<unsigned char>^ mRetVal = gcnew array<unsigned char>(2);
  for (size_t cprIdx=0; cprIdx<2; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



void vtkBooleanTexture::SetOnOut(unsigned char arg0, unsigned char arg1)
{
  vtk::ConvertManagedToNative<::vtkBooleanTexture>(m_instance)->SetOnOut(arg0, arg1);
}



void vtkBooleanTexture::SetOnOut(array<unsigned char>^ a)
{
  pin_ptr<unsigned char> aPin = &a[0];
  unsigned char* nativeaPin = aPin;
  vtk::ConvertManagedToNative<::vtkBooleanTexture>(m_instance)->SetOnOut(nativeaPin);
}



array<unsigned char>^ vtkBooleanTexture::GetOnOut()
{
  const unsigned char* retVal = vtk::ConvertManagedToNative<::vtkBooleanTexture>(m_instance)->GetOnOut();
  array<unsigned char>^ mRetVal = gcnew array<unsigned char>(2);
  for (size_t cprIdx=0; cprIdx<2; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



void vtkBooleanTexture::SetInOn(unsigned char arg0, unsigned char arg1)
{
  vtk::ConvertManagedToNative<::vtkBooleanTexture>(m_instance)->SetInOn(arg0, arg1);
}



void vtkBooleanTexture::SetInOn(array<unsigned char>^ a)
{
  pin_ptr<unsigned char> aPin = &a[0];
  unsigned char* nativeaPin = aPin;
  vtk::ConvertManagedToNative<::vtkBooleanTexture>(m_instance)->SetInOn(nativeaPin);
}



array<unsigned char>^ vtkBooleanTexture::GetInOn()
{
  const unsigned char* retVal = vtk::ConvertManagedToNative<::vtkBooleanTexture>(m_instance)->GetInOn();
  array<unsigned char>^ mRetVal = gcnew array<unsigned char>(2);
  for (size_t cprIdx=0; cprIdx<2; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



void vtkBooleanTexture::SetOutOn(unsigned char arg0, unsigned char arg1)
{
  vtk::ConvertManagedToNative<::vtkBooleanTexture>(m_instance)->SetOutOn(arg0, arg1);
}



void vtkBooleanTexture::SetOutOn(array<unsigned char>^ a)
{
  pin_ptr<unsigned char> aPin = &a[0];
  unsigned char* nativeaPin = aPin;
  vtk::ConvertManagedToNative<::vtkBooleanTexture>(m_instance)->SetOutOn(nativeaPin);
}



array<unsigned char>^ vtkBooleanTexture::GetOutOn()
{
  const unsigned char* retVal = vtk::ConvertManagedToNative<::vtkBooleanTexture>(m_instance)->GetOutOn();
  array<unsigned char>^ mRetVal = gcnew array<unsigned char>(2);
  for (size_t cprIdx=0; cprIdx<2; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



  vtkBooleanTexture::vtkBooleanTexture(System::IntPtr native, bool bConst) : vtkImageAlgorithm(native, bConst) {}



  vtkBooleanTexture::vtkBooleanTexture(bool donothing) : vtkImageAlgorithm(donothing) {}



  vtkBooleanTexture::vtkBooleanTexture() : vtkImageAlgorithm(false) {
  this->SetNativePointer(IntPtr(::vtkBooleanTexture::New()));
}



  vtkBooleanTexture::~vtkBooleanTexture() { }





} // end namespace vtkImaging
