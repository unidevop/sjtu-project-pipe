

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkImageStencilDataDotNet.h"

// native includes
#include "strstream"
#include "vtkImageStencilData.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkImageStencilData::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkImageStencilData>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkImageStencilData::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkImageStencilData>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkImageStencilData^ vtkImageStencilData::NewInstance()
{
  ::vtkImageStencilData* retVal = static_cast<::vtkImageStencilData*>(vtk::ConvertManagedToNative<::vtkImageStencilData>(m_instance)->NewInstance());
  return gcnew vtkImageStencilData(IntPtr(retVal), false);
}



vtkImageStencilData^ vtkImageStencilData::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkImageStencilData* retVal = static_cast<::vtkImageStencilData*>(::vtkImageStencilData::SafeDownCast(oWrap));
  return gcnew vtkImageStencilData(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkImageStencilData::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkImageStencilData>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkImageStencilData::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkImageStencilData>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkImageStencilData::Initialize()
{
  vtk::ConvertManagedToNative<::vtkImageStencilData>(m_instance)->Initialize();
}



void vtkImageStencilData::DeepCopy(vtkDataObject^ o)
{
  ::vtkDataObject* oWrap = vtk::ConvertManagedToNative<::vtkDataObject>(o->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkImageStencilData>(m_instance)->DeepCopy(oWrap);
}



void vtkImageStencilData::ShallowCopy(vtkDataObject^ f)
{
  ::vtkDataObject* fWrap = vtk::ConvertManagedToNative<::vtkDataObject>(f->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkImageStencilData>(m_instance)->ShallowCopy(fWrap);
}



void vtkImageStencilData::InternalImageStencilDataCopy(vtkImageStencilData^ s)
{
  ::vtkImageStencilData* sWrap = vtk::ConvertManagedToNative<::vtkImageStencilData>(s->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkImageStencilData>(m_instance)->InternalImageStencilDataCopy(sWrap);
}



int vtkImageStencilData::GetDataObjectType()
{
  int retVal = vtk::ConvertManagedToNative<::vtkImageStencilData>(m_instance)->GetDataObjectType();
  return retVal;
}



int vtkImageStencilData::GetExtentType()
{
  int retVal = vtk::ConvertManagedToNative<::vtkImageStencilData>(m_instance)->GetExtentType();
  return retVal;
}



int vtkImageStencilData::GetNextExtent(int% r1, int% r2, int xMin, int xMax, int yIdx, int zIdx, int% iter)
{
  pin_ptr<int> r1Pin = &r1;
  pin_ptr<int> r2Pin = &r2;
  pin_ptr<int> iterPin = &iter;
  int retVal = vtk::ConvertManagedToNative<::vtkImageStencilData>(m_instance)->GetNextExtent(*r1Pin, *r2Pin, xMin, xMax, yIdx, zIdx, *iterPin);
  return retVal;
}



void vtkImageStencilData::InsertNextExtent(int r1, int r2, int yIdx, int zIdx)
{
  vtk::ConvertManagedToNative<::vtkImageStencilData>(m_instance)->InsertNextExtent(r1, r2, yIdx, zIdx);
}



void vtkImageStencilData::SetSpacing(double arg0, double arg1, double arg2)
{
  vtk::ConvertManagedToNative<::vtkImageStencilData>(m_instance)->SetSpacing(arg0, arg1, arg2);
}



void vtkImageStencilData::SetSpacing(array<double>^ a)
{
  pin_ptr<double> aPin = &a[0];
  double* nativeaPin = aPin;
  vtk::ConvertManagedToNative<::vtkImageStencilData>(m_instance)->SetSpacing(nativeaPin);
}



array<double>^ vtkImageStencilData::GetSpacing()
{
  const double* retVal = vtk::ConvertManagedToNative<::vtkImageStencilData>(m_instance)->GetSpacing();
  array<double>^ mRetVal = gcnew array<double>(3);
  for (size_t cprIdx=0; cprIdx<3; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



void vtkImageStencilData::SetOrigin(double arg0, double arg1, double arg2)
{
  vtk::ConvertManagedToNative<::vtkImageStencilData>(m_instance)->SetOrigin(arg0, arg1, arg2);
}



void vtkImageStencilData::SetOrigin(array<double>^ a)
{
  pin_ptr<double> aPin = &a[0];
  double* nativeaPin = aPin;
  vtk::ConvertManagedToNative<::vtkImageStencilData>(m_instance)->SetOrigin(nativeaPin);
}



array<double>^ vtkImageStencilData::GetOrigin()
{
  const double* retVal = vtk::ConvertManagedToNative<::vtkImageStencilData>(m_instance)->GetOrigin();
  array<double>^ mRetVal = gcnew array<double>(3);
  for (size_t cprIdx=0; cprIdx<3; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



void vtkImageStencilData::SetExtent(array<int>^ extent)
{
  pin_ptr<int> extentPin = &extent[0];
  int* nativeextentPin = extentPin;
  vtk::ConvertManagedToNative<::vtkImageStencilData>(m_instance)->SetExtent(nativeextentPin);
}



void vtkImageStencilData::SetExtent(int x1, int x2, int y1, int y2, int z1, int z2)
{
  vtk::ConvertManagedToNative<::vtkImageStencilData>(m_instance)->SetExtent(x1, x2, y1, y2, z1, z2);
}



array<int>^ vtkImageStencilData::GetExtent()
{
  const int* retVal = vtk::ConvertManagedToNative<::vtkImageStencilData>(m_instance)->GetExtent();
  array<int>^ mRetVal = gcnew array<int>(6);
  for (size_t cprIdx=0; cprIdx<6; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



void vtkImageStencilData::SetOldSpacing(double arg0, double arg1, double arg2)
{
  vtk::ConvertManagedToNative<::vtkImageStencilData>(m_instance)->SetOldSpacing(arg0, arg1, arg2);
}



void vtkImageStencilData::SetOldSpacing(array<double>^ a)
{
  pin_ptr<double> aPin = &a[0];
  double* nativeaPin = aPin;
  vtk::ConvertManagedToNative<::vtkImageStencilData>(m_instance)->SetOldSpacing(nativeaPin);
}



array<double>^ vtkImageStencilData::GetOldSpacing()
{
  const double* retVal = vtk::ConvertManagedToNative<::vtkImageStencilData>(m_instance)->GetOldSpacing();
  array<double>^ mRetVal = gcnew array<double>(3);
  for (size_t cprIdx=0; cprIdx<3; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



void vtkImageStencilData::SetOldOrigin(double arg0, double arg1, double arg2)
{
  vtk::ConvertManagedToNative<::vtkImageStencilData>(m_instance)->SetOldOrigin(arg0, arg1, arg2);
}



void vtkImageStencilData::SetOldOrigin(array<double>^ a)
{
  pin_ptr<double> aPin = &a[0];
  double* nativeaPin = aPin;
  vtk::ConvertManagedToNative<::vtkImageStencilData>(m_instance)->SetOldOrigin(nativeaPin);
}



array<double>^ vtkImageStencilData::GetOldOrigin()
{
  const double* retVal = vtk::ConvertManagedToNative<::vtkImageStencilData>(m_instance)->GetOldOrigin();
  array<double>^ mRetVal = gcnew array<double>(3);
  for (size_t cprIdx=0; cprIdx<3; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



void vtkImageStencilData::AllocateExtents()
{
  vtk::ConvertManagedToNative<::vtkImageStencilData>(m_instance)->AllocateExtents();
}



void vtkImageStencilData::UpdateData()
{
  vtk::ConvertManagedToNative<::vtkImageStencilData>(m_instance)->UpdateData();
}



void vtkImageStencilData::PropagateUpdateExtent()
{
  vtk::ConvertManagedToNative<::vtkImageStencilData>(m_instance)->PropagateUpdateExtent();
}



void vtkImageStencilData::TriggerAsynchronousUpdate()
{
  vtk::ConvertManagedToNative<::vtkImageStencilData>(m_instance)->TriggerAsynchronousUpdate();
}



  vtkImageStencilData::vtkImageStencilData(System::IntPtr native, bool bConst) : vtkDataObject(native, bConst) {}



  vtkImageStencilData::vtkImageStencilData(bool donothing) : vtkDataObject(donothing) {}



  vtkImageStencilData::vtkImageStencilData() : vtkDataObject(false) {
  this->SetNativePointer(IntPtr(::vtkImageStencilData::New()));
}



  vtkImageStencilData::~vtkImageStencilData() { }





} // end namespace vtkImaging
