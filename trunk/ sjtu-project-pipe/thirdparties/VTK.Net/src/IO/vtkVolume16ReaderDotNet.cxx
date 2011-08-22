

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkVolume16ReaderDotNet.h"

// native includes
#include "strstream"
#include "vtkVolume16Reader.h"
#include "vtkImageData.h"
#include "vtkObject.h"
#include "vtkTransform.h"

using namespace System;

namespace vtk {

System::String^ vtkVolume16Reader::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkVolume16Reader>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkVolume16Reader::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkVolume16Reader>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkVolume16Reader^ vtkVolume16Reader::NewInstance()
{
  ::vtkVolume16Reader* retVal = static_cast<::vtkVolume16Reader*>(vtk::ConvertManagedToNative<::vtkVolume16Reader>(m_instance)->NewInstance());
  return gcnew vtkVolume16Reader(IntPtr(retVal), false);
}



vtkVolume16Reader^ vtkVolume16Reader::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkVolume16Reader* retVal = static_cast<::vtkVolume16Reader*>(::vtkVolume16Reader::SafeDownCast(oWrap));
  return gcnew vtkVolume16Reader(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkVolume16Reader::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkVolume16Reader>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkVolume16Reader::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkVolume16Reader>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkVolume16Reader::SetDataDimensions(int arg0, int arg1)
{
  vtk::ConvertManagedToNative<::vtkVolume16Reader>(m_instance)->SetDataDimensions(arg0, arg1);
}



void vtkVolume16Reader::SetDataDimensions(array<int>^ a)
{
  pin_ptr<int> aPin = &a[0];
  int* nativeaPin = aPin;
  vtk::ConvertManagedToNative<::vtkVolume16Reader>(m_instance)->SetDataDimensions(nativeaPin);
}



array<int>^ vtkVolume16Reader::GetDataDimensions()
{
  const int* retVal = vtk::ConvertManagedToNative<::vtkVolume16Reader>(m_instance)->GetDataDimensions();
  array<int>^ mRetVal = gcnew array<int>(2);
  for (size_t cprIdx=0; cprIdx<2; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



void vtkVolume16Reader::SetDataMask(unsigned short arg0)
{
  vtk::ConvertManagedToNative<::vtkVolume16Reader>(m_instance)->SetDataMask(arg0);
}



unsigned short vtkVolume16Reader::GetDataMask()
{
  unsigned short retVal = vtk::ConvertManagedToNative<::vtkVolume16Reader>(m_instance)->GetDataMask();
  return retVal;
}



void vtkVolume16Reader::SetHeaderSize(int arg0)
{
  vtk::ConvertManagedToNative<::vtkVolume16Reader>(m_instance)->SetHeaderSize(arg0);
}



int vtkVolume16Reader::GetHeaderSize()
{
  int retVal = vtk::ConvertManagedToNative<::vtkVolume16Reader>(m_instance)->GetHeaderSize();
  return retVal;
}



void vtkVolume16Reader::SetDataByteOrderToBigEndian()
{
  vtk::ConvertManagedToNative<::vtkVolume16Reader>(m_instance)->SetDataByteOrderToBigEndian();
}



void vtkVolume16Reader::SetDataByteOrderToLittleEndian()
{
  vtk::ConvertManagedToNative<::vtkVolume16Reader>(m_instance)->SetDataByteOrderToLittleEndian();
}



int vtkVolume16Reader::GetDataByteOrder()
{
  int retVal = vtk::ConvertManagedToNative<::vtkVolume16Reader>(m_instance)->GetDataByteOrder();
  return retVal;
}



void vtkVolume16Reader::SetDataByteOrder(int arg0)
{
  vtk::ConvertManagedToNative<::vtkVolume16Reader>(m_instance)->SetDataByteOrder(arg0);
}



System::String^ vtkVolume16Reader::GetDataByteOrderAsString()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkVolume16Reader>(m_instance)->GetDataByteOrderAsString();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



void vtkVolume16Reader::SetSwapBytes(int arg0)
{
  vtk::ConvertManagedToNative<::vtkVolume16Reader>(m_instance)->SetSwapBytes(arg0);
}



int vtkVolume16Reader::GetSwapBytes()
{
  int retVal = vtk::ConvertManagedToNative<::vtkVolume16Reader>(m_instance)->GetSwapBytes();
  return retVal;
}



void vtkVolume16Reader::SwapBytesOn()
{
  vtk::ConvertManagedToNative<::vtkVolume16Reader>(m_instance)->SwapBytesOn();
}



void vtkVolume16Reader::SwapBytesOff()
{
  vtk::ConvertManagedToNative<::vtkVolume16Reader>(m_instance)->SwapBytesOff();
}



void vtkVolume16Reader::SetTransform(vtkTransform^ arg0)
{
  ::vtkTransform* arg0Wrap = vtk::ConvertManagedToNative<::vtkTransform>(arg0->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkVolume16Reader>(m_instance)->SetTransform(arg0Wrap);
}



vtkTransform^ vtkVolume16Reader::GetTransform()
{
  ::vtkTransform* retVal = static_cast<::vtkTransform*>(vtk::ConvertManagedToNative<::vtkVolume16Reader>(m_instance)->GetTransform());
  return gcnew vtkTransform(IntPtr(retVal), false);
}



vtkImageData^ vtkVolume16Reader::GetImage(int ImageNumber)
{
  ::vtkImageData* retVal = static_cast<::vtkImageData*>(vtk::ConvertManagedToNative<::vtkVolume16Reader>(m_instance)->GetImage(ImageNumber));
  return gcnew vtkImageData(IntPtr(retVal), false);
}



  vtkVolume16Reader::vtkVolume16Reader(System::IntPtr native, bool bConst) : vtkVolumeReader(native, bConst) {}



  vtkVolume16Reader::vtkVolume16Reader(bool donothing) : vtkVolumeReader(donothing) {}



  vtkVolume16Reader::vtkVolume16Reader() : vtkVolumeReader(false) {
  this->SetNativePointer(IntPtr(::vtkVolume16Reader::New()));
}



  vtkVolume16Reader::~vtkVolume16Reader() { }





} // end namespace vtkIO
