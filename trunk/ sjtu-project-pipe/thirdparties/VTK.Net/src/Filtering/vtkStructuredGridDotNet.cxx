

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkStructuredGridDotNet.h"
#include "vtkCellDotNet.h"
#include "vtkDataObjectDotNet.h"
#include "vtkDataSetDotNet.h"
#include "vtkGenericCellDotNet.h"

// native includes
#include "strstream"
#include "vtkStructuredGrid.h"
#include "vtkCell.h"
#include "vtkDataObject.h"
#include "vtkDataSet.h"
#include "vtkGenericCell.h"
#include "vtkIdList.h"
#include "vtkObject.h"
#include "vtkUnsignedCharArray.h"

using namespace System;

namespace vtk {

System::String^ vtkStructuredGrid::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkStructuredGrid>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkStructuredGrid::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkStructuredGrid>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkStructuredGrid^ vtkStructuredGrid::NewInstance()
{
  ::vtkStructuredGrid* retVal = static_cast<::vtkStructuredGrid*>(vtk::ConvertManagedToNative<::vtkStructuredGrid>(m_instance)->NewInstance());
  return gcnew vtkStructuredGrid(IntPtr(retVal), false);
}



vtkStructuredGrid^ vtkStructuredGrid::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkStructuredGrid* retVal = static_cast<::vtkStructuredGrid*>(::vtkStructuredGrid::SafeDownCast(oWrap));
  return gcnew vtkStructuredGrid(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkStructuredGrid::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkStructuredGrid>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkStructuredGrid::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkStructuredGrid>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




int vtkStructuredGrid::GetDataObjectType()
{
  int retVal = vtk::ConvertManagedToNative<::vtkStructuredGrid>(m_instance)->GetDataObjectType();
  return retVal;
}



void vtkStructuredGrid::CopyStructure(vtkDataSet^ ds)
{
  ::vtkDataSet* dsWrap = vtk::ConvertManagedToNative<::vtkDataSet>(ds->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkStructuredGrid>(m_instance)->CopyStructure(dsWrap);
}



int vtkStructuredGrid::GetNumberOfPoints()
{
  int retVal = vtk::ConvertManagedToNative<::vtkStructuredGrid>(m_instance)->GetNumberOfPoints();
  return retVal;
}



array<double>^ vtkStructuredGrid::GetPoint(int ptId)
{
  const double* retVal = vtk::ConvertManagedToNative<::vtkStructuredGrid>(m_instance)->GetPoint(ptId);
  array<double>^ mRetVal = gcnew array<double>(3);
  for (size_t cprIdx=0; cprIdx<3; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



void vtkStructuredGrid::GetPoint(int ptId, array<double>^ p)
{
  pin_ptr<double> pPin = &p[0];
  double* nativepPin = pPin;
  vtk::ConvertManagedToNative<::vtkStructuredGrid>(m_instance)->GetPoint(ptId, nativepPin);
}



vtkCell^ vtkStructuredGrid::GetCell(int cellId)
{
  ::vtkCell* retVal = static_cast<::vtkCell*>(vtk::ConvertManagedToNative<::vtkStructuredGrid>(m_instance)->GetCell(cellId));
  return gcnew vtkCell(IntPtr(retVal), false);
}



void vtkStructuredGrid::GetCell(int cellId, vtkGenericCell^ cell)
{
  ::vtkGenericCell* cellWrap = vtk::ConvertManagedToNative<::vtkGenericCell>(cell->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkStructuredGrid>(m_instance)->GetCell(cellId, cellWrap);
}



void vtkStructuredGrid::GetCellBounds(int cellId, array<double>^ bounds)
{
  pin_ptr<double> boundsPin = &bounds[0];
  double* nativeboundsPin = boundsPin;
  vtk::ConvertManagedToNative<::vtkStructuredGrid>(m_instance)->GetCellBounds(cellId, nativeboundsPin);
}



int vtkStructuredGrid::GetCellType(int cellId)
{
  int retVal = vtk::ConvertManagedToNative<::vtkStructuredGrid>(m_instance)->GetCellType(cellId);
  return retVal;
}



int vtkStructuredGrid::GetNumberOfCells()
{
  int retVal = vtk::ConvertManagedToNative<::vtkStructuredGrid>(m_instance)->GetNumberOfCells();
  return retVal;
}



void vtkStructuredGrid::GetCellPoints(int cellId, vtkIdList^ ptIds)
{
  ::vtkIdList* ptIdsWrap = vtk::ConvertManagedToNative<::vtkIdList>(ptIds->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkStructuredGrid>(m_instance)->GetCellPoints(cellId, ptIdsWrap);
}



void vtkStructuredGrid::GetPointCells(int ptId, vtkIdList^ cellIds)
{
  ::vtkIdList* cellIdsWrap = vtk::ConvertManagedToNative<::vtkIdList>(cellIds->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkStructuredGrid>(m_instance)->GetPointCells(ptId, cellIdsWrap);
}



void vtkStructuredGrid::Initialize()
{
  vtk::ConvertManagedToNative<::vtkStructuredGrid>(m_instance)->Initialize();
}



int vtkStructuredGrid::GetMaxCellSize()
{
  int retVal = vtk::ConvertManagedToNative<::vtkStructuredGrid>(m_instance)->GetMaxCellSize();
  return retVal;
}



void vtkStructuredGrid::GetCellNeighbors(int cellId, vtkIdList^ ptIds, vtkIdList^ cellIds)
{
  ::vtkIdList* ptIdsWrap = vtk::ConvertManagedToNative<::vtkIdList>(ptIds->GetNativePointer());
  ::vtkIdList* cellIdsWrap = vtk::ConvertManagedToNative<::vtkIdList>(cellIds->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkStructuredGrid>(m_instance)->GetCellNeighbors(cellId, ptIdsWrap, cellIdsWrap);
}



void vtkStructuredGrid::GetScalarRange(array<double>^ range)
{
  pin_ptr<double> rangePin = &range[0];
  double* nativerangePin = rangePin;
  vtk::ConvertManagedToNative<::vtkStructuredGrid>(m_instance)->GetScalarRange(nativerangePin);
}



array<double>^ vtkStructuredGrid::GetScalarRange()
{
  const double* retVal = vtk::ConvertManagedToNative<::vtkStructuredGrid>(m_instance)->GetScalarRange();
  array<double>^ mRetVal = gcnew array<double>(2);
  for (size_t cprIdx=0; cprIdx<2; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



void vtkStructuredGrid::SetDimensions(int i, int j, int k)
{
  vtk::ConvertManagedToNative<::vtkStructuredGrid>(m_instance)->SetDimensions(i, j, k);
}



void vtkStructuredGrid::SetDimensions(array<int>^ dim)
{
  pin_ptr<int> dimPin = &dim[0];
  int* nativedimPin = dimPin;
  vtk::ConvertManagedToNative<::vtkStructuredGrid>(m_instance)->SetDimensions(nativedimPin);
}



array<int>^ vtkStructuredGrid::GetDimensions()
{
  const int* retVal = vtk::ConvertManagedToNative<::vtkStructuredGrid>(m_instance)->GetDimensions();
  array<int>^ mRetVal = gcnew array<int>(3);
  for (size_t cprIdx=0; cprIdx<3; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



void vtkStructuredGrid::GetDimensions(array<int>^ dim)
{
  pin_ptr<int> dimPin = &dim[0];
  int* nativedimPin = dimPin;
  vtk::ConvertManagedToNative<::vtkStructuredGrid>(m_instance)->GetDimensions(nativedimPin);
}



int vtkStructuredGrid::GetDataDimension()
{
  int retVal = vtk::ConvertManagedToNative<::vtkStructuredGrid>(m_instance)->GetDataDimension();
  return retVal;
}



void vtkStructuredGrid::SetExtent(array<int>^ extent)
{
  pin_ptr<int> extentPin = &extent[0];
  int* nativeextentPin = extentPin;
  vtk::ConvertManagedToNative<::vtkStructuredGrid>(m_instance)->SetExtent(nativeextentPin);
}



void vtkStructuredGrid::SetExtent(int x1, int x2, int y1, int y2, int z1, int z2)
{
  vtk::ConvertManagedToNative<::vtkStructuredGrid>(m_instance)->SetExtent(x1, x2, y1, y2, z1, z2);
}



array<int>^ vtkStructuredGrid::GetExtent()
{
  const int* retVal = vtk::ConvertManagedToNative<::vtkStructuredGrid>(m_instance)->GetExtent();
  array<int>^ mRetVal = gcnew array<int>(6);
  for (size_t cprIdx=0; cprIdx<6; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



unsigned long vtkStructuredGrid::GetActualMemorySize()
{
  unsigned long retVal = vtk::ConvertManagedToNative<::vtkStructuredGrid>(m_instance)->GetActualMemorySize();
  return retVal;
}



void vtkStructuredGrid::ShallowCopy(vtkDataObject^ src)
{
  ::vtkDataObject* srcWrap = vtk::ConvertManagedToNative<::vtkDataObject>(src->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkStructuredGrid>(m_instance)->ShallowCopy(srcWrap);
}



void vtkStructuredGrid::DeepCopy(vtkDataObject^ src)
{
  ::vtkDataObject* srcWrap = vtk::ConvertManagedToNative<::vtkDataObject>(src->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkStructuredGrid>(m_instance)->DeepCopy(srcWrap);
}



int vtkStructuredGrid::GetExtentType()
{
  int retVal = vtk::ConvertManagedToNative<::vtkStructuredGrid>(m_instance)->GetExtentType();
  return retVal;
}



void vtkStructuredGrid::BlankPoint(int ptId)
{
  vtk::ConvertManagedToNative<::vtkStructuredGrid>(m_instance)->BlankPoint(ptId);
}



void vtkStructuredGrid::UnBlankPoint(int ptId)
{
  vtk::ConvertManagedToNative<::vtkStructuredGrid>(m_instance)->UnBlankPoint(ptId);
}



void vtkStructuredGrid::BlankCell(int ptId)
{
  vtk::ConvertManagedToNative<::vtkStructuredGrid>(m_instance)->BlankCell(ptId);
}



void vtkStructuredGrid::UnBlankCell(int ptId)
{
  vtk::ConvertManagedToNative<::vtkStructuredGrid>(m_instance)->UnBlankCell(ptId);
}



vtkUnsignedCharArray^ vtkStructuredGrid::GetPointVisibilityArray()
{
  ::vtkUnsignedCharArray* retVal = static_cast<::vtkUnsignedCharArray*>(vtk::ConvertManagedToNative<::vtkStructuredGrid>(m_instance)->GetPointVisibilityArray());
  return gcnew vtkUnsignedCharArray(IntPtr(retVal), false);
}



void vtkStructuredGrid::SetPointVisibilityArray(vtkUnsignedCharArray^ pointVisibility)
{
  ::vtkUnsignedCharArray* pointVisibilityWrap = vtk::ConvertManagedToNative<::vtkUnsignedCharArray>(pointVisibility->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkStructuredGrid>(m_instance)->SetPointVisibilityArray(pointVisibilityWrap);
}



vtkUnsignedCharArray^ vtkStructuredGrid::GetCellVisibilityArray()
{
  ::vtkUnsignedCharArray* retVal = static_cast<::vtkUnsignedCharArray*>(vtk::ConvertManagedToNative<::vtkStructuredGrid>(m_instance)->GetCellVisibilityArray());
  return gcnew vtkUnsignedCharArray(IntPtr(retVal), false);
}



void vtkStructuredGrid::SetCellVisibilityArray(vtkUnsignedCharArray^ pointVisibility)
{
  ::vtkUnsignedCharArray* pointVisibilityWrap = vtk::ConvertManagedToNative<::vtkUnsignedCharArray>(pointVisibility->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkStructuredGrid>(m_instance)->SetCellVisibilityArray(pointVisibilityWrap);
}



unsigned char vtkStructuredGrid::IsPointVisible(int ptId)
{
  unsigned char retVal = vtk::ConvertManagedToNative<::vtkStructuredGrid>(m_instance)->IsPointVisible(ptId);
  return retVal;
}



unsigned char vtkStructuredGrid::IsCellVisible(int cellId)
{
  unsigned char retVal = vtk::ConvertManagedToNative<::vtkStructuredGrid>(m_instance)->IsCellVisible(cellId);
  return retVal;
}



unsigned char vtkStructuredGrid::GetPointBlanking()
{
  unsigned char retVal = vtk::ConvertManagedToNative<::vtkStructuredGrid>(m_instance)->GetPointBlanking();
  return retVal;
}



unsigned char vtkStructuredGrid::GetCellBlanking()
{
  unsigned char retVal = vtk::ConvertManagedToNative<::vtkStructuredGrid>(m_instance)->GetCellBlanking();
  return retVal;
}



void vtkStructuredGrid::Crop()
{
  vtk::ConvertManagedToNative<::vtkStructuredGrid>(m_instance)->Crop();
}



  vtkStructuredGrid::vtkStructuredGrid(System::IntPtr native, bool bConst) : vtkPointSet(native, bConst) {}



  vtkStructuredGrid::vtkStructuredGrid(bool donothing) : vtkPointSet(donothing) {}



  vtkStructuredGrid::vtkStructuredGrid() : vtkPointSet(false) {
  this->SetNativePointer(IntPtr(::vtkStructuredGrid::New()));
}



  vtkStructuredGrid::~vtkStructuredGrid() { }





} // end namespace vtkFiltering
