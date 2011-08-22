

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkStructuredDataDotNet.h"
#include "vtkIdListDotNet.h"

// native includes
#include "strstream"
#include "vtkStructuredData.h"
#include "vtkIdList.h"

using namespace System;

namespace vtk {

System::String^ vtkStructuredData::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkStructuredData>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkStructuredData::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkStructuredData>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkStructuredData^ vtkStructuredData::NewInstance()
{
  ::vtkStructuredData* retVal = static_cast<::vtkStructuredData*>(vtk::ConvertManagedToNative<::vtkStructuredData>(m_instance)->NewInstance());
  return gcnew vtkStructuredData(IntPtr(retVal), false);
}



int vtkStructuredData::SetDimensions(array<int>^ inDim, array<int>^ dim)
{
  pin_ptr<int> inDimPin = &inDim[0];
  int* nativeinDimPin = inDimPin;
  pin_ptr<int> dimPin = &dim[0];
  int* nativedimPin = dimPin;
  int retVal = ::vtkStructuredData::SetDimensions(nativeinDimPin, nativedimPin);
  return retVal;
}



int vtkStructuredData::SetExtent(array<int>^ inExt, array<int>^ ext)
{
  pin_ptr<int> inExtPin = &inExt[0];
  int* nativeinExtPin = inExtPin;
  pin_ptr<int> extPin = &ext[0];
  int* nativeextPin = extPin;
  int retVal = ::vtkStructuredData::SetExtent(nativeinExtPin, nativeextPin);
  return retVal;
}



int vtkStructuredData::GetDataDimension(int dataDescription)
{
  int retVal = ::vtkStructuredData::GetDataDimension(dataDescription);
  return retVal;
}



void vtkStructuredData::GetCellPoints(int cellId, vtkIdList^ ptIds, int dataDescription, array<int>^ dim)
{
  ::vtkIdList* ptIdsWrap = vtk::ConvertManagedToNative<::vtkIdList>(ptIds->GetNativePointer());
  pin_ptr<int> dimPin = &dim[0];
  int* nativedimPin = dimPin;
  ::vtkStructuredData::GetCellPoints(cellId, ptIdsWrap, dataDescription, nativedimPin);
}



void vtkStructuredData::GetPointCells(int ptId, vtkIdList^ cellIds, array<int>^ dim)
{
  ::vtkIdList* cellIdsWrap = vtk::ConvertManagedToNative<::vtkIdList>(cellIds->GetNativePointer());
  pin_ptr<int> dimPin = &dim[0];
  int* nativedimPin = dimPin;
  ::vtkStructuredData::GetPointCells(ptId, cellIdsWrap, nativedimPin);
}



void vtkStructuredData::GetCellNeighbors(int cellId, vtkIdList^ ptIds, vtkIdList^ cellIds, array<int>^ dim)
{
  ::vtkIdList* ptIdsWrap = vtk::ConvertManagedToNative<::vtkIdList>(ptIds->GetNativePointer());
  ::vtkIdList* cellIdsWrap = vtk::ConvertManagedToNative<::vtkIdList>(cellIds->GetNativePointer());
  pin_ptr<int> dimPin = &dim[0];
  int* nativedimPin = dimPin;
  ::vtkStructuredData::GetCellNeighbors(cellId, ptIdsWrap, cellIdsWrap, nativedimPin);
}



int vtkStructuredData::ComputePointId(array<int>^ dim, array<int>^ ijk)
{
  pin_ptr<int> dimPin = &dim[0];
  int* nativedimPin = dimPin;
  pin_ptr<int> ijkPin = &ijk[0];
  int* nativeijkPin = ijkPin;
  int retVal = ::vtkStructuredData::ComputePointId(nativedimPin, nativeijkPin);
  return retVal;
}



int vtkStructuredData::ComputeCellId(array<int>^ dim, array<int>^ ijk)
{
  pin_ptr<int> dimPin = &dim[0];
  int* nativedimPin = dimPin;
  pin_ptr<int> ijkPin = &ijk[0];
  int* nativeijkPin = ijkPin;
  int retVal = ::vtkStructuredData::ComputeCellId(nativedimPin, nativeijkPin);
  return retVal;
}



  vtkStructuredData::vtkStructuredData(System::IntPtr native, bool bConst) : vtkObject(native, bConst) {}



  vtkStructuredData::vtkStructuredData(bool donothing) : vtkObject(donothing) {}



  vtkStructuredData::vtkStructuredData() : vtkObject(false) {
  this->SetNativePointer(IntPtr(::vtkStructuredData::New()));
}



  vtkStructuredData::~vtkStructuredData() { }





} // end namespace vtkCommon
