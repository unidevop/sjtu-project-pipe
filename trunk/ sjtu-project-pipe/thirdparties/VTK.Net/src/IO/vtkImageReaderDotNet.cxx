

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkImageReaderDotNet.h"

// native includes
#include "strstream"
#include "vtkImageReader.h"
#include "vtkObject.h"
#include "vtkTransform.h"

using namespace System;

namespace vtk {

System::String^ vtkImageReader::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkImageReader>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkImageReader::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkImageReader>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkImageReader^ vtkImageReader::NewInstance()
{
  ::vtkImageReader* retVal = static_cast<::vtkImageReader*>(vtk::ConvertManagedToNative<::vtkImageReader>(m_instance)->NewInstance());
  return gcnew vtkImageReader(IntPtr(retVal), false);
}



vtkImageReader^ vtkImageReader::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkImageReader* retVal = static_cast<::vtkImageReader*>(::vtkImageReader::SafeDownCast(oWrap));
  return gcnew vtkImageReader(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkImageReader::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkImageReader>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkImageReader::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkImageReader>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkImageReader::SetDataVOI(int arg0, int arg1, int arg2, int arg3, int arg4, int arg5)
{
  vtk::ConvertManagedToNative<::vtkImageReader>(m_instance)->SetDataVOI(arg0, arg1, arg2, arg3, arg4, arg5);
}



void vtkImageReader::SetDataVOI(array<int>^ a)
{
  pin_ptr<int> aPin = &a[0];
  int* nativeaPin = aPin;
  vtk::ConvertManagedToNative<::vtkImageReader>(m_instance)->SetDataVOI(nativeaPin);
}



array<int>^ vtkImageReader::GetDataVOI()
{
  const int* retVal = vtk::ConvertManagedToNative<::vtkImageReader>(m_instance)->GetDataVOI();
  array<int>^ mRetVal = gcnew array<int>(6);
  for (size_t cprIdx=0; cprIdx<6; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



unsigned short vtkImageReader::GetDataMask()
{
  unsigned short retVal = vtk::ConvertManagedToNative<::vtkImageReader>(m_instance)->GetDataMask();
  return retVal;
}



void vtkImageReader::SetDataMask(int val)
{
  vtk::ConvertManagedToNative<::vtkImageReader>(m_instance)->SetDataMask(val);
}



void vtkImageReader::SetTransform(vtkTransform^ arg0)
{
  ::vtkTransform* arg0Wrap = vtk::ConvertManagedToNative<::vtkTransform>(arg0->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkImageReader>(m_instance)->SetTransform(arg0Wrap);
}



vtkTransform^ vtkImageReader::GetTransform()
{
  ::vtkTransform* retVal = static_cast<::vtkTransform*>(vtk::ConvertManagedToNative<::vtkImageReader>(m_instance)->GetTransform());
  return gcnew vtkTransform(IntPtr(retVal), false);
}



void vtkImageReader::ComputeInverseTransformedExtent(array<int>^ inExtent, array<int>^ outExtent)
{
  pin_ptr<int> inExtentPin = &inExtent[0];
  int* nativeinExtentPin = inExtentPin;
  pin_ptr<int> outExtentPin = &outExtent[0];
  int* nativeoutExtentPin = outExtentPin;
  vtk::ConvertManagedToNative<::vtkImageReader>(m_instance)->ComputeInverseTransformedExtent(nativeinExtentPin, nativeoutExtentPin);
}



void vtkImageReader::ComputeInverseTransformedIncrements(array<int>^ arg0, array<int>^ arg1)
{
  pin_ptr<int> arg0Pin = &arg0[0];
  int* nativearg0Pin = arg0Pin;
  pin_ptr<int> arg1Pin = &arg1[0];
  int* nativearg1Pin = arg1Pin;
  vtk::ConvertManagedToNative<::vtkImageReader>(m_instance)->ComputeInverseTransformedIncrements(nativearg0Pin, nativearg1Pin);
}



int vtkImageReader::OpenAndSeekFile(array<int>^ extent, int slice)
{
  pin_ptr<int> extentPin = &extent[0];
  int* nativeextentPin = extentPin;
  int retVal = vtk::ConvertManagedToNative<::vtkImageReader>(m_instance)->OpenAndSeekFile(nativeextentPin, slice);
  return retVal;
}



void vtkImageReader::SetScalarArrayName(System::String^ arg0)
{
  char* arg0Wrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(arg0).ToPointer());
  vtk::ConvertManagedToNative<::vtkImageReader>(m_instance)->SetScalarArrayName(arg0Wrap);
  arg0->Remove(0,arg0->Length);
  arg0->Insert(0,System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(arg0Wrap)));
System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(arg0Wrap));
}



System::String^ vtkImageReader::GetScalarArrayName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkImageReader>(m_instance)->GetScalarArrayName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



  vtkImageReader::vtkImageReader(System::IntPtr native, bool bConst) : vtkImageReader2(native, bConst) {}



  vtkImageReader::vtkImageReader(bool donothing) : vtkImageReader2(donothing) {}



  vtkImageReader::vtkImageReader() : vtkImageReader2(false) {
  this->SetNativePointer(IntPtr(::vtkImageReader::New()));
}



  vtkImageReader::~vtkImageReader() { }





} // end namespace vtkIO
