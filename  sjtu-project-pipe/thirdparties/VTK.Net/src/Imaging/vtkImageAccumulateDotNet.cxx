

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkImageAccumulateDotNet.h"
#include "vtkImageStencilDataDotNet.h"

// native includes
#include "strstream"
#include "vtkImageAccumulate.h"
#include "vtkImageStencilData.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkImageAccumulate::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkImageAccumulate>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkImageAccumulate::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkImageAccumulate>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkImageAccumulate^ vtkImageAccumulate::NewInstance()
{
  ::vtkImageAccumulate* retVal = static_cast<::vtkImageAccumulate*>(vtk::ConvertManagedToNative<::vtkImageAccumulate>(m_instance)->NewInstance());
  return gcnew vtkImageAccumulate(IntPtr(retVal), false);
}



vtkImageAccumulate^ vtkImageAccumulate::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkImageAccumulate* retVal = static_cast<::vtkImageAccumulate*>(::vtkImageAccumulate::SafeDownCast(oWrap));
  return gcnew vtkImageAccumulate(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkImageAccumulate::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkImageAccumulate>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkImageAccumulate::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkImageAccumulate>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkImageAccumulate::SetComponentSpacing(double arg0, double arg1, double arg2)
{
  vtk::ConvertManagedToNative<::vtkImageAccumulate>(m_instance)->SetComponentSpacing(arg0, arg1, arg2);
}



void vtkImageAccumulate::SetComponentSpacing(array<double>^ a)
{
  pin_ptr<double> aPin = &a[0];
  double* nativeaPin = aPin;
  vtk::ConvertManagedToNative<::vtkImageAccumulate>(m_instance)->SetComponentSpacing(nativeaPin);
}



array<double>^ vtkImageAccumulate::GetComponentSpacing()
{
  const double* retVal = vtk::ConvertManagedToNative<::vtkImageAccumulate>(m_instance)->GetComponentSpacing();
  array<double>^ mRetVal = gcnew array<double>(3);
  for (size_t cprIdx=0; cprIdx<3; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



void vtkImageAccumulate::SetComponentOrigin(double arg0, double arg1, double arg2)
{
  vtk::ConvertManagedToNative<::vtkImageAccumulate>(m_instance)->SetComponentOrigin(arg0, arg1, arg2);
}



void vtkImageAccumulate::SetComponentOrigin(array<double>^ a)
{
  pin_ptr<double> aPin = &a[0];
  double* nativeaPin = aPin;
  vtk::ConvertManagedToNative<::vtkImageAccumulate>(m_instance)->SetComponentOrigin(nativeaPin);
}



array<double>^ vtkImageAccumulate::GetComponentOrigin()
{
  const double* retVal = vtk::ConvertManagedToNative<::vtkImageAccumulate>(m_instance)->GetComponentOrigin();
  array<double>^ mRetVal = gcnew array<double>(3);
  for (size_t cprIdx=0; cprIdx<3; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



void vtkImageAccumulate::SetComponentExtent(array<int>^ extent)
{
  pin_ptr<int> extentPin = &extent[0];
  int* nativeextentPin = extentPin;
  vtk::ConvertManagedToNative<::vtkImageAccumulate>(m_instance)->SetComponentExtent(nativeextentPin);
}



void vtkImageAccumulate::SetComponentExtent(int minX, int maxX, int minY, int maxY, int minZ, int maxZ)
{
  vtk::ConvertManagedToNative<::vtkImageAccumulate>(m_instance)->SetComponentExtent(minX, maxX, minY, maxY, minZ, maxZ);
}



void vtkImageAccumulate::GetComponentExtent(array<int>^ extent)
{
  pin_ptr<int> extentPin = &extent[0];
  int* nativeextentPin = extentPin;
  vtk::ConvertManagedToNative<::vtkImageAccumulate>(m_instance)->GetComponentExtent(nativeextentPin);
}



array<int>^ vtkImageAccumulate::GetComponentExtent()
{
  const int* retVal = vtk::ConvertManagedToNative<::vtkImageAccumulate>(m_instance)->GetComponentExtent();
  array<int>^ mRetVal = gcnew array<int>(6);
  for (size_t cprIdx=0; cprIdx<6; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



void vtkImageAccumulate::SetStencil(vtkImageStencilData^ stencil)
{
  ::vtkImageStencilData* stencilWrap = vtk::ConvertManagedToNative<::vtkImageStencilData>(stencil->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkImageAccumulate>(m_instance)->SetStencil(stencilWrap);
}



vtkImageStencilData^ vtkImageAccumulate::GetStencil()
{
  ::vtkImageStencilData* retVal = static_cast<::vtkImageStencilData*>(vtk::ConvertManagedToNative<::vtkImageAccumulate>(m_instance)->GetStencil());
  return gcnew vtkImageStencilData(IntPtr(retVal), false);
}



void vtkImageAccumulate::SetReverseStencil(int arg0)
{
  vtk::ConvertManagedToNative<::vtkImageAccumulate>(m_instance)->SetReverseStencil(arg0);
}



void vtkImageAccumulate::ReverseStencilOn()
{
  vtk::ConvertManagedToNative<::vtkImageAccumulate>(m_instance)->ReverseStencilOn();
}



void vtkImageAccumulate::ReverseStencilOff()
{
  vtk::ConvertManagedToNative<::vtkImageAccumulate>(m_instance)->ReverseStencilOff();
}



int vtkImageAccumulate::GetReverseStencil()
{
  int retVal = vtk::ConvertManagedToNative<::vtkImageAccumulate>(m_instance)->GetReverseStencil();
  return retVal;
}



array<double>^ vtkImageAccumulate::GetMin()
{
  const double* retVal = vtk::ConvertManagedToNative<::vtkImageAccumulate>(m_instance)->GetMin();
  array<double>^ mRetVal = gcnew array<double>(3);
  for (size_t cprIdx=0; cprIdx<3; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



array<double>^ vtkImageAccumulate::GetMax()
{
  const double* retVal = vtk::ConvertManagedToNative<::vtkImageAccumulate>(m_instance)->GetMax();
  array<double>^ mRetVal = gcnew array<double>(3);
  for (size_t cprIdx=0; cprIdx<3; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



array<double>^ vtkImageAccumulate::GetMean()
{
  const double* retVal = vtk::ConvertManagedToNative<::vtkImageAccumulate>(m_instance)->GetMean();
  array<double>^ mRetVal = gcnew array<double>(3);
  for (size_t cprIdx=0; cprIdx<3; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



array<double>^ vtkImageAccumulate::GetStandardDeviation()
{
  const double* retVal = vtk::ConvertManagedToNative<::vtkImageAccumulate>(m_instance)->GetStandardDeviation();
  array<double>^ mRetVal = gcnew array<double>(3);
  for (size_t cprIdx=0; cprIdx<3; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



long vtkImageAccumulate::GetVoxelCount()
{
  long retVal = vtk::ConvertManagedToNative<::vtkImageAccumulate>(m_instance)->GetVoxelCount();
  return retVal;
}



  vtkImageAccumulate::vtkImageAccumulate(System::IntPtr native, bool bConst) : vtkImageAlgorithm(native, bConst) {}



  vtkImageAccumulate::vtkImageAccumulate(bool donothing) : vtkImageAlgorithm(donothing) {}



  vtkImageAccumulate::vtkImageAccumulate() : vtkImageAlgorithm(false) {
  this->SetNativePointer(IntPtr(::vtkImageAccumulate::New()));
}



  vtkImageAccumulate::~vtkImageAccumulate() { }





} // end namespace vtkImaging
