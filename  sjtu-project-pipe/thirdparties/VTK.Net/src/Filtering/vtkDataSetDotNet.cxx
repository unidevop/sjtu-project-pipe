

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkDataSetDotNet.h"
#include "vtkCellDotNet.h"
#include "vtkCellDataDotNet.h"
#include "vtkCellTypesDotNet.h"
#include "vtkGenericCellDotNet.h"
#include "vtkPointDataDotNet.h"

// native includes
#include "strstream"
#include "vtkDataSet.h"
#include "vtkCell.h"
#include "vtkCellData.h"
#include "vtkCellTypes.h"
#include "vtkGenericCell.h"
#include "vtkIdList.h"
#include "vtkPointData.h"

using namespace System;

namespace vtk {

System::String^ vtkDataSet::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkDataSet>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkDataSet::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkDataSet>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkDataSet^ vtkDataSet::NewInstance()
{
  ::vtkDataSet* retVal = static_cast<::vtkDataSet*>(vtk::ConvertManagedToNative<::vtkDataSet>(m_instance)->NewInstance());
  return gcnew vtkDataSet(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkDataSet::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkDataSet>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkDataSet::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkDataSet>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkDataSet::CopyStructure(vtkDataSet^ ds)
{
  ::vtkDataSet* dsWrap = vtk::ConvertManagedToNative<::vtkDataSet>(ds->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkDataSet>(m_instance)->CopyStructure(dsWrap);
}



int vtkDataSet::GetNumberOfPoints()
{
  int retVal = vtk::ConvertManagedToNative<::vtkDataSet>(m_instance)->GetNumberOfPoints();
  return retVal;
}



int vtkDataSet::GetNumberOfCells()
{
  int retVal = vtk::ConvertManagedToNative<::vtkDataSet>(m_instance)->GetNumberOfCells();
  return retVal;
}



array<double>^ vtkDataSet::GetPoint(int ptId)
{
  const double* retVal = vtk::ConvertManagedToNative<::vtkDataSet>(m_instance)->GetPoint(ptId);
  array<double>^ mRetVal = gcnew array<double>(3);
  for (size_t cprIdx=0; cprIdx<3; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



void vtkDataSet::GetPoint(int id, array<double>^ x)
{
  pin_ptr<double> xPin = &x[0];
  double* nativexPin = xPin;
  vtk::ConvertManagedToNative<::vtkDataSet>(m_instance)->GetPoint(id, nativexPin);
}



vtkCell^ vtkDataSet::GetCell(int cellId)
{
  ::vtkCell* retVal = static_cast<::vtkCell*>(vtk::ConvertManagedToNative<::vtkDataSet>(m_instance)->GetCell(cellId));
  return gcnew vtkCell(IntPtr(retVal), false);
}



void vtkDataSet::GetCell(int cellId, vtkGenericCell^ cell)
{
  ::vtkGenericCell* cellWrap = vtk::ConvertManagedToNative<::vtkGenericCell>(cell->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkDataSet>(m_instance)->GetCell(cellId, cellWrap);
}



void vtkDataSet::GetCellBounds(int cellId, array<double>^ bounds)
{
  pin_ptr<double> boundsPin = &bounds[0];
  double* nativeboundsPin = boundsPin;
  vtk::ConvertManagedToNative<::vtkDataSet>(m_instance)->GetCellBounds(cellId, nativeboundsPin);
}



int vtkDataSet::GetCellType(int cellId)
{
  int retVal = vtk::ConvertManagedToNative<::vtkDataSet>(m_instance)->GetCellType(cellId);
  return retVal;
}



void vtkDataSet::GetCellTypes(vtkCellTypes^ types)
{
  ::vtkCellTypes* typesWrap = vtk::ConvertManagedToNative<::vtkCellTypes>(types->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkDataSet>(m_instance)->GetCellTypes(typesWrap);
}



void vtkDataSet::GetCellPoints(int cellId, vtkIdList^ ptIds)
{
  ::vtkIdList* ptIdsWrap = vtk::ConvertManagedToNative<::vtkIdList>(ptIds->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkDataSet>(m_instance)->GetCellPoints(cellId, ptIdsWrap);
}



void vtkDataSet::GetPointCells(int ptId, vtkIdList^ cellIds)
{
  ::vtkIdList* cellIdsWrap = vtk::ConvertManagedToNative<::vtkIdList>(cellIds->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkDataSet>(m_instance)->GetPointCells(ptId, cellIdsWrap);
}



void vtkDataSet::GetCellNeighbors(int cellId, vtkIdList^ ptIds, vtkIdList^ cellIds)
{
  ::vtkIdList* ptIdsWrap = vtk::ConvertManagedToNative<::vtkIdList>(ptIds->GetNativePointer());
  ::vtkIdList* cellIdsWrap = vtk::ConvertManagedToNative<::vtkIdList>(cellIds->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkDataSet>(m_instance)->GetCellNeighbors(cellId, ptIdsWrap, cellIdsWrap);
}



int vtkDataSet::FindPoint(double x, double y, double z)
{
  int retVal = vtk::ConvertManagedToNative<::vtkDataSet>(m_instance)->FindPoint(x, y, z);
  return retVal;
}



int vtkDataSet::FindPoint(array<double>^ x)
{
  pin_ptr<double> xPin = &x[0];
  double* nativexPin = xPin;
  int retVal = vtk::ConvertManagedToNative<::vtkDataSet>(m_instance)->FindPoint(nativexPin);
  return retVal;
}



int vtkDataSet::FindCell(array<double>^ x, vtkCell^ cell, int cellId, double tol2, int% subId, array<double>^ pcoords, array<double>^ weights)
{
  pin_ptr<double> xPin = &x[0];
  double* nativexPin = xPin;
  ::vtkCell* cellWrap = vtk::ConvertManagedToNative<::vtkCell>(cell->GetNativePointer());
  pin_ptr<int> subIdPin = &subId;
  pin_ptr<double> pcoordsPin = &pcoords[0];
  double* nativepcoordsPin = pcoordsPin;
  pin_ptr<double> weightsPin = &weights[0];
  double* nativeweightsPin = weightsPin;
  int retVal = vtk::ConvertManagedToNative<::vtkDataSet>(m_instance)->FindCell(nativexPin, cellWrap, cellId, tol2, *subIdPin, nativepcoordsPin, nativeweightsPin);
  return retVal;
}



int vtkDataSet::FindCell(array<double>^ x, vtkCell^ cell, vtkGenericCell^ gencell, int cellId, double tol2, int% subId, array<double>^ pcoords, array<double>^ weights)
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
  int retVal = vtk::ConvertManagedToNative<::vtkDataSet>(m_instance)->FindCell(nativexPin, cellWrap, gencellWrap, cellId, tol2, *subIdPin, nativepcoordsPin, nativeweightsPin);
  return retVal;
}



vtkCell^ vtkDataSet::FindAndGetCell(array<double>^ x, vtkCell^ cell, int cellId, double tol2, int% subId, array<double>^ pcoords, array<double>^ weights)
{
  pin_ptr<double> xPin = &x[0];
  double* nativexPin = xPin;
  ::vtkCell* cellWrap = vtk::ConvertManagedToNative<::vtkCell>(cell->GetNativePointer());
  pin_ptr<int> subIdPin = &subId;
  pin_ptr<double> pcoordsPin = &pcoords[0];
  double* nativepcoordsPin = pcoordsPin;
  pin_ptr<double> weightsPin = &weights[0];
  double* nativeweightsPin = weightsPin;
  ::vtkCell* retVal = static_cast<::vtkCell*>(vtk::ConvertManagedToNative<::vtkDataSet>(m_instance)->FindAndGetCell(nativexPin, cellWrap, cellId, tol2, *subIdPin, nativepcoordsPin, nativeweightsPin));
  return gcnew vtkCell(IntPtr(retVal), false);
}



unsigned long vtkDataSet::GetMTime()
{
  unsigned long retVal = vtk::ConvertManagedToNative<::vtkDataSet>(m_instance)->GetMTime();
  return retVal;
}



vtkCellData^ vtkDataSet::GetCellData()
{
  ::vtkCellData* retVal = static_cast<::vtkCellData*>(vtk::ConvertManagedToNative<::vtkDataSet>(m_instance)->GetCellData());
  return gcnew vtkCellData(IntPtr(retVal), false);
}



vtkPointData^ vtkDataSet::GetPointData()
{
  ::vtkPointData* retVal = static_cast<::vtkPointData*>(vtk::ConvertManagedToNative<::vtkDataSet>(m_instance)->GetPointData());
  return gcnew vtkPointData(IntPtr(retVal), false);
}



void vtkDataSet::Squeeze()
{
  vtk::ConvertManagedToNative<::vtkDataSet>(m_instance)->Squeeze();
}



void vtkDataSet::ComputeBounds()
{
  vtk::ConvertManagedToNative<::vtkDataSet>(m_instance)->ComputeBounds();
}



array<double>^ vtkDataSet::GetBounds()
{
  const double* retVal = vtk::ConvertManagedToNative<::vtkDataSet>(m_instance)->GetBounds();
  array<double>^ mRetVal = gcnew array<double>(6);
  for (size_t cprIdx=0; cprIdx<6; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



void vtkDataSet::GetBounds(array<double>^ bounds)
{
  pin_ptr<double> boundsPin = &bounds[0];
  double* nativeboundsPin = boundsPin;
  vtk::ConvertManagedToNative<::vtkDataSet>(m_instance)->GetBounds(nativeboundsPin);
}



array<double>^ vtkDataSet::GetCenter()
{
  const double* retVal = vtk::ConvertManagedToNative<::vtkDataSet>(m_instance)->GetCenter();
  array<double>^ mRetVal = gcnew array<double>(3);
  for (size_t cprIdx=0; cprIdx<3; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



void vtkDataSet::GetCenter(array<double>^ center)
{
  pin_ptr<double> centerPin = &center[0];
  double* nativecenterPin = centerPin;
  vtk::ConvertManagedToNative<::vtkDataSet>(m_instance)->GetCenter(nativecenterPin);
}



double vtkDataSet::GetLength()
{
  double retVal = vtk::ConvertManagedToNative<::vtkDataSet>(m_instance)->GetLength();
  return retVal;
}



void vtkDataSet::Initialize()
{
  vtk::ConvertManagedToNative<::vtkDataSet>(m_instance)->Initialize();
}



void vtkDataSet::GetScalarRange(array<double>^ range)
{
  pin_ptr<double> rangePin = &range[0];
  double* nativerangePin = rangePin;
  vtk::ConvertManagedToNative<::vtkDataSet>(m_instance)->GetScalarRange(nativerangePin);
}



array<double>^ vtkDataSet::GetScalarRange()
{
  const double* retVal = vtk::ConvertManagedToNative<::vtkDataSet>(m_instance)->GetScalarRange();
  array<double>^ mRetVal = gcnew array<double>(2);
  for (size_t cprIdx=0; cprIdx<2; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



int vtkDataSet::GetMaxCellSize()
{
  int retVal = vtk::ConvertManagedToNative<::vtkDataSet>(m_instance)->GetMaxCellSize();
  return retVal;
}



unsigned long vtkDataSet::GetActualMemorySize()
{
  unsigned long retVal = vtk::ConvertManagedToNative<::vtkDataSet>(m_instance)->GetActualMemorySize();
  return retVal;
}



int vtkDataSet::GetDataObjectType()
{
  int retVal = vtk::ConvertManagedToNative<::vtkDataSet>(m_instance)->GetDataObjectType();
  return retVal;
}



void vtkDataSet::ShallowCopy(vtkDataObject^ src)
{
  ::vtkDataObject* srcWrap = vtk::ConvertManagedToNative<::vtkDataObject>(src->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkDataSet>(m_instance)->ShallowCopy(srcWrap);
}



void vtkDataSet::DeepCopy(vtkDataObject^ src)
{
  ::vtkDataObject* srcWrap = vtk::ConvertManagedToNative<::vtkDataObject>(src->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkDataSet>(m_instance)->DeepCopy(srcWrap);
}



int vtkDataSet::CheckAttributes()
{
  int retVal = vtk::ConvertManagedToNative<::vtkDataSet>(m_instance)->CheckAttributes();
  return retVal;
}



void vtkDataSet::GenerateGhostLevelArray()
{
  vtk::ConvertManagedToNative<::vtkDataSet>(m_instance)->GenerateGhostLevelArray();
}



  vtkDataSet::vtkDataSet(System::IntPtr native, bool bConst) : vtkDataObject(native, bConst) {}



  vtkDataSet::vtkDataSet(bool donothing) : vtkDataObject(donothing) {}



  vtkDataSet::vtkDataSet() : vtkDataObject(false) {
  this->SetNativePointer(IntPtr(::vtkDataSet::New()));
}



  vtkDataSet::~vtkDataSet() { }





} // end namespace vtkFiltering
