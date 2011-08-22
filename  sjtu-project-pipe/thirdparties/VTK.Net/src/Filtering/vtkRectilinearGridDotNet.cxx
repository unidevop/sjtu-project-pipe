

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkRectilinearGridDotNet.h"
#include "vtkCellDotNet.h"
#include "vtkDataObjectDotNet.h"
#include "vtkGenericCellDotNet.h"

// native includes
#include "strstream"
#include "vtkRectilinearGrid.h"
#include "vtkCell.h"
#include "vtkDataArray.h"
#include "vtkDataObject.h"
#include "vtkGenericCell.h"
#include "vtkIdList.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkRectilinearGrid::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkRectilinearGrid>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkRectilinearGrid::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkRectilinearGrid>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkRectilinearGrid^ vtkRectilinearGrid::NewInstance()
{
  ::vtkRectilinearGrid* retVal = static_cast<::vtkRectilinearGrid*>(vtk::ConvertManagedToNative<::vtkRectilinearGrid>(m_instance)->NewInstance());
  return gcnew vtkRectilinearGrid(IntPtr(retVal), false);
}



vtkRectilinearGrid^ vtkRectilinearGrid::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkRectilinearGrid* retVal = static_cast<::vtkRectilinearGrid*>(::vtkRectilinearGrid::SafeDownCast(oWrap));
  return gcnew vtkRectilinearGrid(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkRectilinearGrid::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkRectilinearGrid>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkRectilinearGrid::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkRectilinearGrid>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




int vtkRectilinearGrid::GetDataObjectType()
{
  int retVal = vtk::ConvertManagedToNative<::vtkRectilinearGrid>(m_instance)->GetDataObjectType();
  return retVal;
}



void vtkRectilinearGrid::CopyStructure(vtkDataSet^ ds)
{
  ::vtkDataSet* dsWrap = vtk::ConvertManagedToNative<::vtkDataSet>(ds->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkRectilinearGrid>(m_instance)->CopyStructure(dsWrap);
}



void vtkRectilinearGrid::Initialize()
{
  vtk::ConvertManagedToNative<::vtkRectilinearGrid>(m_instance)->Initialize();
}



int vtkRectilinearGrid::GetNumberOfCells()
{
  int retVal = vtk::ConvertManagedToNative<::vtkRectilinearGrid>(m_instance)->GetNumberOfCells();
  return retVal;
}



int vtkRectilinearGrid::GetNumberOfPoints()
{
  int retVal = vtk::ConvertManagedToNative<::vtkRectilinearGrid>(m_instance)->GetNumberOfPoints();
  return retVal;
}



array<double>^ vtkRectilinearGrid::GetPoint(int ptId)
{
  const double* retVal = vtk::ConvertManagedToNative<::vtkRectilinearGrid>(m_instance)->GetPoint(ptId);
  array<double>^ mRetVal = gcnew array<double>(3);
  for (size_t cprIdx=0; cprIdx<3; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



void vtkRectilinearGrid::GetPoint(int id, array<double>^ x)
{
  pin_ptr<double> xPin = &x[0];
  double* nativexPin = xPin;
  vtk::ConvertManagedToNative<::vtkRectilinearGrid>(m_instance)->GetPoint(id, nativexPin);
}



vtkCell^ vtkRectilinearGrid::GetCell(int cellId)
{
  ::vtkCell* retVal = static_cast<::vtkCell*>(vtk::ConvertManagedToNative<::vtkRectilinearGrid>(m_instance)->GetCell(cellId));
  return gcnew vtkCell(IntPtr(retVal), false);
}



void vtkRectilinearGrid::GetCell(int cellId, vtkGenericCell^ cell)
{
  ::vtkGenericCell* cellWrap = vtk::ConvertManagedToNative<::vtkGenericCell>(cell->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkRectilinearGrid>(m_instance)->GetCell(cellId, cellWrap);
}



void vtkRectilinearGrid::GetCellBounds(int cellId, array<double>^ bounds)
{
  pin_ptr<double> boundsPin = &bounds[0];
  double* nativeboundsPin = boundsPin;
  vtk::ConvertManagedToNative<::vtkRectilinearGrid>(m_instance)->GetCellBounds(cellId, nativeboundsPin);
}



int vtkRectilinearGrid::FindPoint(double x, double y, double z)
{
  int retVal = vtk::ConvertManagedToNative<::vtkRectilinearGrid>(m_instance)->FindPoint(x, y, z);
  return retVal;
}



int vtkRectilinearGrid::FindPoint(array<double>^ x)
{
  pin_ptr<double> xPin = &x[0];
  double* nativexPin = xPin;
  int retVal = vtk::ConvertManagedToNative<::vtkRectilinearGrid>(m_instance)->FindPoint(nativexPin);
  return retVal;
}



int vtkRectilinearGrid::FindCell(array<double>^ x, vtkCell^ cell, int cellId, double tol2, int% subId, array<double>^ pcoords, array<double>^ weights)
{
  pin_ptr<double> xPin = &x[0];
  double* nativexPin = xPin;
  ::vtkCell* cellWrap = vtk::ConvertManagedToNative<::vtkCell>(cell->GetNativePointer());
  pin_ptr<int> subIdPin = &subId;
  pin_ptr<double> pcoordsPin = &pcoords[0];
  double* nativepcoordsPin = pcoordsPin;
  pin_ptr<double> weightsPin = &weights[0];
  double* nativeweightsPin = weightsPin;
  int retVal = vtk::ConvertManagedToNative<::vtkRectilinearGrid>(m_instance)->FindCell(nativexPin, cellWrap, cellId, tol2, *subIdPin, nativepcoordsPin, nativeweightsPin);
  return retVal;
}



int vtkRectilinearGrid::FindCell(array<double>^ x, vtkCell^ cell, vtkGenericCell^ gencell, int cellId, double tol2, int% subId, array<double>^ pcoords, array<double>^ weights)
{
  pin_ptr<double> xPin = &x[0];
  double* nativexPin = xPin;
  ::vtkCell* cellWrap = vtk::ConvertManagedToNative<::vtkCell>(cell->GetNativePointer());
  ::vtkGenericCell* gencellWrap = vtk::ConvertManagedToNative<::vtkGenericCell>(gencell->GetNativePointer());
  pin_ptr<int> subIdPin = &subId;
  pin_ptr<double> pcoordsPin = &pcoords[0];
  double* nativepcoordsPin = pcoordsPin;
  pin_ptr<double> weightsPin = &weights[0];
  double* nativeweightsPin = weightsPin;
  int retVal = vtk::ConvertManagedToNative<::vtkRectilinearGrid>(m_instance)->FindCell(nativexPin, cellWrap, gencellWrap, cellId, tol2, *subIdPin, nativepcoordsPin, nativeweightsPin);
  return retVal;
}



vtkCell^ vtkRectilinearGrid::FindAndGetCell(array<double>^ x, vtkCell^ cell, int cellId, double tol2, int% subId, array<double>^ pcoords, array<double>^ weights)
{
  pin_ptr<double> xPin = &x[0];
  double* nativexPin = xPin;
  ::vtkCell* cellWrap = vtk::ConvertManagedToNative<::vtkCell>(cell->GetNativePointer());
  pin_ptr<int> subIdPin = &subId;
  pin_ptr<double> pcoordsPin = &pcoords[0];
  double* nativepcoordsPin = pcoordsPin;
  pin_ptr<double> weightsPin = &weights[0];
  double* nativeweightsPin = weightsPin;
  ::vtkCell* retVal = static_cast<::vtkCell*>(vtk::ConvertManagedToNative<::vtkRectilinearGrid>(m_instance)->FindAndGetCell(nativexPin, cellWrap, cellId, tol2, *subIdPin, nativepcoordsPin, nativeweightsPin));
  return gcnew vtkCell(IntPtr(retVal), false);
}



int vtkRectilinearGrid::GetCellType(int cellId)
{
  int retVal = vtk::ConvertManagedToNative<::vtkRectilinearGrid>(m_instance)->GetCellType(cellId);
  return retVal;
}



void vtkRectilinearGrid::GetCellPoints(int cellId, vtkIdList^ ptIds)
{
  ::vtkIdList* ptIdsWrap = vtk::ConvertManagedToNative<::vtkIdList>(ptIds->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkRectilinearGrid>(m_instance)->GetCellPoints(cellId, ptIdsWrap);
}



void vtkRectilinearGrid::GetPointCells(int ptId, vtkIdList^ cellIds)
{
  ::vtkIdList* cellIdsWrap = vtk::ConvertManagedToNative<::vtkIdList>(cellIds->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkRectilinearGrid>(m_instance)->GetPointCells(ptId, cellIdsWrap);
}



void vtkRectilinearGrid::ComputeBounds()
{
  vtk::ConvertManagedToNative<::vtkRectilinearGrid>(m_instance)->ComputeBounds();
}



int vtkRectilinearGrid::GetMaxCellSize()
{
  int retVal = vtk::ConvertManagedToNative<::vtkRectilinearGrid>(m_instance)->GetMaxCellSize();
  return retVal;
}



void vtkRectilinearGrid::GetCellNeighbors(int cellId, vtkIdList^ ptIds, vtkIdList^ cellIds)
{
  ::vtkIdList* ptIdsWrap = vtk::ConvertManagedToNative<::vtkIdList>(ptIds->GetNativePointer());
  ::vtkIdList* cellIdsWrap = vtk::ConvertManagedToNative<::vtkIdList>(cellIds->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkRectilinearGrid>(m_instance)->GetCellNeighbors(cellId, ptIdsWrap, cellIdsWrap);
}



void vtkRectilinearGrid::SetDimensions(int i, int j, int k)
{
  vtk::ConvertManagedToNative<::vtkRectilinearGrid>(m_instance)->SetDimensions(i, j, k);
}



void vtkRectilinearGrid::SetDimensions(array<int>^ dim)
{
  pin_ptr<int> dimPin = &dim[0];
  int* nativedimPin = dimPin;
  vtk::ConvertManagedToNative<::vtkRectilinearGrid>(m_instance)->SetDimensions(nativedimPin);
}



array<int>^ vtkRectilinearGrid::GetDimensions()
{
  const int* retVal = vtk::ConvertManagedToNative<::vtkRectilinearGrid>(m_instance)->GetDimensions();
  array<int>^ mRetVal = gcnew array<int>(3);
  for (size_t cprIdx=0; cprIdx<3; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



int vtkRectilinearGrid::GetDataDimension()
{
  int retVal = vtk::ConvertManagedToNative<::vtkRectilinearGrid>(m_instance)->GetDataDimension();
  return retVal;
}



int vtkRectilinearGrid::ComputeStructuredCoordinates(array<double>^ x, array<int>^ ijk, array<double>^ pcoords)
{
  pin_ptr<double> xPin = &x[0];
  double* nativexPin = xPin;
  pin_ptr<int> ijkPin = &ijk[0];
  int* nativeijkPin = ijkPin;
  pin_ptr<double> pcoordsPin = &pcoords[0];
  double* nativepcoordsPin = pcoordsPin;
  int retVal = vtk::ConvertManagedToNative<::vtkRectilinearGrid>(m_instance)->ComputeStructuredCoordinates(nativexPin, nativeijkPin, nativepcoordsPin);
  return retVal;
}



int vtkRectilinearGrid::ComputePointId(array<int>^ ijk)
{
  pin_ptr<int> ijkPin = &ijk[0];
  int* nativeijkPin = ijkPin;
  int retVal = vtk::ConvertManagedToNative<::vtkRectilinearGrid>(m_instance)->ComputePointId(nativeijkPin);
  return retVal;
}



int vtkRectilinearGrid::ComputeCellId(array<int>^ ijk)
{
  pin_ptr<int> ijkPin = &ijk[0];
  int* nativeijkPin = ijkPin;
  int retVal = vtk::ConvertManagedToNative<::vtkRectilinearGrid>(m_instance)->ComputeCellId(nativeijkPin);
  return retVal;
}



void vtkRectilinearGrid::SetXCoordinates(vtkDataArray^ arg0)
{
  ::vtkDataArray* arg0Wrap = vtk::ConvertManagedToNative<::vtkDataArray>(arg0->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkRectilinearGrid>(m_instance)->SetXCoordinates(arg0Wrap);
}



vtkDataArray^ vtkRectilinearGrid::GetXCoordinates()
{
  ::vtkDataArray* retVal = static_cast<::vtkDataArray*>(vtk::ConvertManagedToNative<::vtkRectilinearGrid>(m_instance)->GetXCoordinates());
  return gcnew vtkDataArray(IntPtr(retVal), false);
}



void vtkRectilinearGrid::SetYCoordinates(vtkDataArray^ arg0)
{
  ::vtkDataArray* arg0Wrap = vtk::ConvertManagedToNative<::vtkDataArray>(arg0->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkRectilinearGrid>(m_instance)->SetYCoordinates(arg0Wrap);
}



vtkDataArray^ vtkRectilinearGrid::GetYCoordinates()
{
  ::vtkDataArray* retVal = static_cast<::vtkDataArray*>(vtk::ConvertManagedToNative<::vtkRectilinearGrid>(m_instance)->GetYCoordinates());
  return gcnew vtkDataArray(IntPtr(retVal), false);
}



void vtkRectilinearGrid::SetZCoordinates(vtkDataArray^ arg0)
{
  ::vtkDataArray* arg0Wrap = vtk::ConvertManagedToNative<::vtkDataArray>(arg0->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkRectilinearGrid>(m_instance)->SetZCoordinates(arg0Wrap);
}



vtkDataArray^ vtkRectilinearGrid::GetZCoordinates()
{
  ::vtkDataArray* retVal = static_cast<::vtkDataArray*>(vtk::ConvertManagedToNative<::vtkRectilinearGrid>(m_instance)->GetZCoordinates());
  return gcnew vtkDataArray(IntPtr(retVal), false);
}



void vtkRectilinearGrid::SetExtent(array<int>^ extent)
{
  pin_ptr<int> extentPin = &extent[0];
  int* nativeextentPin = extentPin;
  vtk::ConvertManagedToNative<::vtkRectilinearGrid>(m_instance)->SetExtent(nativeextentPin);
}



void vtkRectilinearGrid::SetExtent(int x1, int x2, int y1, int y2, int z1, int z2)
{
  vtk::ConvertManagedToNative<::vtkRectilinearGrid>(m_instance)->SetExtent(x1, x2, y1, y2, z1, z2);
}



array<int>^ vtkRectilinearGrid::GetExtent()
{
  const int* retVal = vtk::ConvertManagedToNative<::vtkRectilinearGrid>(m_instance)->GetExtent();
  array<int>^ mRetVal = gcnew array<int>(6);
  for (size_t cprIdx=0; cprIdx<6; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



unsigned long vtkRectilinearGrid::GetActualMemorySize()
{
  unsigned long retVal = vtk::ConvertManagedToNative<::vtkRectilinearGrid>(m_instance)->GetActualMemorySize();
  return retVal;
}



void vtkRectilinearGrid::ShallowCopy(vtkDataObject^ src)
{
  ::vtkDataObject* srcWrap = vtk::ConvertManagedToNative<::vtkDataObject>(src->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkRectilinearGrid>(m_instance)->ShallowCopy(srcWrap);
}



void vtkRectilinearGrid::DeepCopy(vtkDataObject^ src)
{
  ::vtkDataObject* srcWrap = vtk::ConvertManagedToNative<::vtkDataObject>(src->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkRectilinearGrid>(m_instance)->DeepCopy(srcWrap);
}



int vtkRectilinearGrid::GetExtentType()
{
  int retVal = vtk::ConvertManagedToNative<::vtkRectilinearGrid>(m_instance)->GetExtentType();
  return retVal;
}



void vtkRectilinearGrid::Crop()
{
  vtk::ConvertManagedToNative<::vtkRectilinearGrid>(m_instance)->Crop();
}



  vtkRectilinearGrid::vtkRectilinearGrid(System::IntPtr native, bool bConst) : vtkDataSet(native, bConst) {}



  vtkRectilinearGrid::vtkRectilinearGrid(bool donothing) : vtkDataSet(donothing) {}



  vtkRectilinearGrid::vtkRectilinearGrid() : vtkDataSet(false) {
  this->SetNativePointer(IntPtr(::vtkRectilinearGrid::New()));
}



  vtkRectilinearGrid::~vtkRectilinearGrid() { }





} // end namespace vtkFiltering
