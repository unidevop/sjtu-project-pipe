

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkImageEllipsoidSourceDotNet.h"

// native includes
#include "strstream"
#include "vtkImageEllipsoidSource.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkImageEllipsoidSource::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkImageEllipsoidSource>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkImageEllipsoidSource::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkImageEllipsoidSource>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkImageEllipsoidSource^ vtkImageEllipsoidSource::NewInstance()
{
  ::vtkImageEllipsoidSource* retVal = static_cast<::vtkImageEllipsoidSource*>(vtk::ConvertManagedToNative<::vtkImageEllipsoidSource>(m_instance)->NewInstance());
  return gcnew vtkImageEllipsoidSource(IntPtr(retVal), false);
}



vtkImageEllipsoidSource^ vtkImageEllipsoidSource::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkImageEllipsoidSource* retVal = static_cast<::vtkImageEllipsoidSource*>(::vtkImageEllipsoidSource::SafeDownCast(oWrap));
  return gcnew vtkImageEllipsoidSource(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkImageEllipsoidSource::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkImageEllipsoidSource>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkImageEllipsoidSource::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkImageEllipsoidSource>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkImageEllipsoidSource::SetWholeExtent(array<int>^ extent)
{
  pin_ptr<int> extentPin = &extent[0];
  int* nativeextentPin = extentPin;
  vtk::ConvertManagedToNative<::vtkImageEllipsoidSource>(m_instance)->SetWholeExtent(nativeextentPin);
}



void vtkImageEllipsoidSource::SetWholeExtent(int minX, int maxX, int minY, int maxY, int minZ, int maxZ)
{
  vtk::ConvertManagedToNative<::vtkImageEllipsoidSource>(m_instance)->SetWholeExtent(minX, maxX, minY, maxY, minZ, maxZ);
}



void vtkImageEllipsoidSource::GetWholeExtent(array<int>^ extent)
{
  pin_ptr<int> extentPin = &extent[0];
  int* nativeextentPin = extentPin;
  vtk::ConvertManagedToNative<::vtkImageEllipsoidSource>(m_instance)->GetWholeExtent(nativeextentPin);
}



array<int>^ vtkImageEllipsoidSource::GetWholeExtent()
{
  const int* retVal = vtk::ConvertManagedToNative<::vtkImageEllipsoidSource>(m_instance)->GetWholeExtent();
  array<int>^ mRetVal = gcnew array<int>(6);
  for (size_t cprIdx=0; cprIdx<6; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



void vtkImageEllipsoidSource::SetCenter(double arg0, double arg1, double arg2)
{
  vtk::ConvertManagedToNative<::vtkImageEllipsoidSource>(m_instance)->SetCenter(arg0, arg1, arg2);
}



void vtkImageEllipsoidSource::SetCenter(array<double>^ a)
{
  pin_ptr<double> aPin = &a[0];
  double* nativeaPin = aPin;
  vtk::ConvertManagedToNative<::vtkImageEllipsoidSource>(m_instance)->SetCenter(nativeaPin);
}



array<double>^ vtkImageEllipsoidSource::GetCenter()
{
  const double* retVal = vtk::ConvertManagedToNative<::vtkImageEllipsoidSource>(m_instance)->GetCenter();
  array<double>^ mRetVal = gcnew array<double>(3);
  for (size_t cprIdx=0; cprIdx<3; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



void vtkImageEllipsoidSource::SetRadius(double arg0, double arg1, double arg2)
{
  vtk::ConvertManagedToNative<::vtkImageEllipsoidSource>(m_instance)->SetRadius(arg0, arg1, arg2);
}



void vtkImageEllipsoidSource::SetRadius(array<double>^ a)
{
  pin_ptr<double> aPin = &a[0];
  double* nativeaPin = aPin;
  vtk::ConvertManagedToNative<::vtkImageEllipsoidSource>(m_instance)->SetRadius(nativeaPin);
}



array<double>^ vtkImageEllipsoidSource::GetRadius()
{
  const double* retVal = vtk::ConvertManagedToNative<::vtkImageEllipsoidSource>(m_instance)->GetRadius();
  array<double>^ mRetVal = gcnew array<double>(3);
  for (size_t cprIdx=0; cprIdx<3; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



void vtkImageEllipsoidSource::SetInValue(double arg0)
{
  vtk::ConvertManagedToNative<::vtkImageEllipsoidSource>(m_instance)->SetInValue(arg0);
}



double vtkImageEllipsoidSource::GetInValue()
{
  double retVal = vtk::ConvertManagedToNative<::vtkImageEllipsoidSource>(m_instance)->GetInValue();
  return retVal;
}



void vtkImageEllipsoidSource::SetOutValue(double arg0)
{
  vtk::ConvertManagedToNative<::vtkImageEllipsoidSource>(m_instance)->SetOutValue(arg0);
}



double vtkImageEllipsoidSource::GetOutValue()
{
  double retVal = vtk::ConvertManagedToNative<::vtkImageEllipsoidSource>(m_instance)->GetOutValue();
  return retVal;
}



void vtkImageEllipsoidSource::SetOutputScalarType(int arg0)
{
  vtk::ConvertManagedToNative<::vtkImageEllipsoidSource>(m_instance)->SetOutputScalarType(arg0);
}



int vtkImageEllipsoidSource::GetOutputScalarType()
{
  int retVal = vtk::ConvertManagedToNative<::vtkImageEllipsoidSource>(m_instance)->GetOutputScalarType();
  return retVal;
}



void vtkImageEllipsoidSource::SetOutputScalarTypeToFloat()
{
  vtk::ConvertManagedToNative<::vtkImageEllipsoidSource>(m_instance)->SetOutputScalarTypeToFloat();
}



void vtkImageEllipsoidSource::SetOutputScalarTypeToDouble()
{
  vtk::ConvertManagedToNative<::vtkImageEllipsoidSource>(m_instance)->SetOutputScalarTypeToDouble();
}



void vtkImageEllipsoidSource::SetOutputScalarTypeToLong()
{
  vtk::ConvertManagedToNative<::vtkImageEllipsoidSource>(m_instance)->SetOutputScalarTypeToLong();
}



void vtkImageEllipsoidSource::SetOutputScalarTypeToUnsignedLong()
{
  vtk::ConvertManagedToNative<::vtkImageEllipsoidSource>(m_instance)->SetOutputScalarTypeToUnsignedLong();
}



void vtkImageEllipsoidSource::SetOutputScalarTypeToInt()
{
  vtk::ConvertManagedToNative<::vtkImageEllipsoidSource>(m_instance)->SetOutputScalarTypeToInt();
}



void vtkImageEllipsoidSource::SetOutputScalarTypeToUnsignedInt()
{
  vtk::ConvertManagedToNative<::vtkImageEllipsoidSource>(m_instance)->SetOutputScalarTypeToUnsignedInt();
}



void vtkImageEllipsoidSource::SetOutputScalarTypeToShort()
{
  vtk::ConvertManagedToNative<::vtkImageEllipsoidSource>(m_instance)->SetOutputScalarTypeToShort();
}



void vtkImageEllipsoidSource::SetOutputScalarTypeToUnsignedShort()
{
  vtk::ConvertManagedToNative<::vtkImageEllipsoidSource>(m_instance)->SetOutputScalarTypeToUnsignedShort();
}



void vtkImageEllipsoidSource::SetOutputScalarTypeToChar()
{
  vtk::ConvertManagedToNative<::vtkImageEllipsoidSource>(m_instance)->SetOutputScalarTypeToChar();
}



void vtkImageEllipsoidSource::SetOutputScalarTypeToUnsignedChar()
{
  vtk::ConvertManagedToNative<::vtkImageEllipsoidSource>(m_instance)->SetOutputScalarTypeToUnsignedChar();
}



  vtkImageEllipsoidSource::vtkImageEllipsoidSource(System::IntPtr native, bool bConst) : vtkImageAlgorithm(native, bConst) {}



  vtkImageEllipsoidSource::vtkImageEllipsoidSource(bool donothing) : vtkImageAlgorithm(donothing) {}



  vtkImageEllipsoidSource::vtkImageEllipsoidSource() : vtkImageAlgorithm(false) {
  this->SetNativePointer(IntPtr(::vtkImageEllipsoidSource::New()));
}



  vtkImageEllipsoidSource::~vtkImageEllipsoidSource() { }





} // end namespace vtkImaging
