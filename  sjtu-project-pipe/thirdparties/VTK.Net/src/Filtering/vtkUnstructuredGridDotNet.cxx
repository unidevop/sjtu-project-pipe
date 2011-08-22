

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkUnstructuredGridDotNet.h"
#include "vtkCellDotNet.h"
#include "vtkCellArrayDotNet.h"
#include "vtkCellLinksDotNet.h"
#include "vtkDataObjectDotNet.h"
#include "vtkDataSetDotNet.h"
#include "vtkGenericCellDotNet.h"

// native includes
#include "strstream"
#include "vtkUnstructuredGrid.h"
#include "vtkCell.h"
#include "vtkCellArray.h"
#include "vtkCellLinks.h"
#include "vtkDataObject.h"
#include "vtkDataSet.h"
#include "vtkGenericCell.h"
#include "vtkIdList.h"
#include "vtkIdTypeArray.h"
#include "vtkObject.h"
#include "vtkUnsignedCharArray.h"

using namespace System;

namespace vtk {

System::String^ vtkUnstructuredGrid::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkUnstructuredGrid>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkUnstructuredGrid::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkUnstructuredGrid>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkUnstructuredGrid^ vtkUnstructuredGrid::NewInstance()
{
  ::vtkUnstructuredGrid* retVal = static_cast<::vtkUnstructuredGrid*>(vtk::ConvertManagedToNative<::vtkUnstructuredGrid>(m_instance)->NewInstance());
  return gcnew vtkUnstructuredGrid(IntPtr(retVal), false);
}



vtkUnstructuredGrid^ vtkUnstructuredGrid::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkUnstructuredGrid* retVal = static_cast<::vtkUnstructuredGrid*>(::vtkUnstructuredGrid::SafeDownCast(oWrap));
  return gcnew vtkUnstructuredGrid(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkUnstructuredGrid::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkUnstructuredGrid>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkUnstructuredGrid::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkUnstructuredGrid>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




int vtkUnstructuredGrid::GetDataObjectType()
{
  int retVal = vtk::ConvertManagedToNative<::vtkUnstructuredGrid>(m_instance)->GetDataObjectType();
  return retVal;
}



void vtkUnstructuredGrid::Allocate(int numCells, int extSize)
{
  vtk::ConvertManagedToNative<::vtkUnstructuredGrid>(m_instance)->Allocate(numCells, extSize);
}



int vtkUnstructuredGrid::InsertNextCell(int type, int npts, array<int>^ arg2)
{
  pin_ptr<int> arg2Pin = &arg2[0];
  int* nativearg2Pin = arg2Pin;
  int retVal = vtk::ConvertManagedToNative<::vtkUnstructuredGrid>(m_instance)->InsertNextCell(type, npts, nativearg2Pin);
  return retVal;
}



int vtkUnstructuredGrid::InsertNextCell(int type, vtkIdList^ ptIds)
{
  ::vtkIdList* ptIdsWrap = vtk::ConvertManagedToNative<::vtkIdList>(ptIds->GetNativePointer());
  int retVal = vtk::ConvertManagedToNative<::vtkUnstructuredGrid>(m_instance)->InsertNextCell(type, ptIdsWrap);
  return retVal;
}



void vtkUnstructuredGrid::Reset()
{
  vtk::ConvertManagedToNative<::vtkUnstructuredGrid>(m_instance)->Reset();
}



void vtkUnstructuredGrid::CopyStructure(vtkDataSet^ ds)
{
  ::vtkDataSet* dsWrap = vtk::ConvertManagedToNative<::vtkDataSet>(ds->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkUnstructuredGrid>(m_instance)->CopyStructure(dsWrap);
}



int vtkUnstructuredGrid::GetNumberOfCells()
{
  int retVal = vtk::ConvertManagedToNative<::vtkUnstructuredGrid>(m_instance)->GetNumberOfCells();
  return retVal;
}



vtkCell^ vtkUnstructuredGrid::GetCell(int cellId)
{
  ::vtkCell* retVal = static_cast<::vtkCell*>(vtk::ConvertManagedToNative<::vtkUnstructuredGrid>(m_instance)->GetCell(cellId));
  return gcnew vtkCell(IntPtr(retVal), false);
}



void vtkUnstructuredGrid::GetCell(int cellId, vtkGenericCell^ cell)
{
  ::vtkGenericCell* cellWrap = vtk::ConvertManagedToNative<::vtkGenericCell>(cell->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkUnstructuredGrid>(m_instance)->GetCell(cellId, cellWrap);
}



void vtkUnstructuredGrid::GetCellBounds(int cellId, array<double>^ bounds)
{
  pin_ptr<double> boundsPin = &bounds[0];
  double* nativeboundsPin = boundsPin;
  vtk::ConvertManagedToNative<::vtkUnstructuredGrid>(m_instance)->GetCellBounds(cellId, nativeboundsPin);
}



void vtkUnstructuredGrid::GetCellPoints(int cellId, vtkIdList^ ptIds)
{
  ::vtkIdList* ptIdsWrap = vtk::ConvertManagedToNative<::vtkIdList>(ptIds->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkUnstructuredGrid>(m_instance)->GetCellPoints(cellId, ptIdsWrap);
}



void vtkUnstructuredGrid::GetPointCells(int ptId, vtkIdList^ cellIds)
{
  ::vtkIdList* cellIdsWrap = vtk::ConvertManagedToNative<::vtkIdList>(cellIds->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkUnstructuredGrid>(m_instance)->GetPointCells(ptId, cellIdsWrap);
}



int vtkUnstructuredGrid::GetCellType(int cellId)
{
  int retVal = vtk::ConvertManagedToNative<::vtkUnstructuredGrid>(m_instance)->GetCellType(cellId);
  return retVal;
}



vtkUnsignedCharArray^ vtkUnstructuredGrid::GetCellTypesArray()
{
  ::vtkUnsignedCharArray* retVal = static_cast<::vtkUnsignedCharArray*>(vtk::ConvertManagedToNative<::vtkUnstructuredGrid>(m_instance)->GetCellTypesArray());
  return gcnew vtkUnsignedCharArray(IntPtr(retVal), false);
}



vtkIdTypeArray^ vtkUnstructuredGrid::GetCellLocationsArray()
{
  ::vtkIdTypeArray* retVal = static_cast<::vtkIdTypeArray*>(vtk::ConvertManagedToNative<::vtkUnstructuredGrid>(m_instance)->GetCellLocationsArray());
  return gcnew vtkIdTypeArray(IntPtr(retVal), false);
}



void vtkUnstructuredGrid::Squeeze()
{
  vtk::ConvertManagedToNative<::vtkUnstructuredGrid>(m_instance)->Squeeze();
}



void vtkUnstructuredGrid::Initialize()
{
  vtk::ConvertManagedToNative<::vtkUnstructuredGrid>(m_instance)->Initialize();
}



int vtkUnstructuredGrid::GetMaxCellSize()
{
  int retVal = vtk::ConvertManagedToNative<::vtkUnstructuredGrid>(m_instance)->GetMaxCellSize();
  return retVal;
}



void vtkUnstructuredGrid::BuildLinks()
{
  vtk::ConvertManagedToNative<::vtkUnstructuredGrid>(m_instance)->BuildLinks();
}



vtkCellLinks^ vtkUnstructuredGrid::GetCellLinks()
{
  ::vtkCellLinks* retVal = static_cast<::vtkCellLinks*>(vtk::ConvertManagedToNative<::vtkUnstructuredGrid>(m_instance)->GetCellLinks());
  return gcnew vtkCellLinks(IntPtr(retVal), false);
}



void vtkUnstructuredGrid::SetCells(int type, vtkCellArray^ cells)
{
  ::vtkCellArray* cellsWrap = vtk::ConvertManagedToNative<::vtkCellArray>(cells->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkUnstructuredGrid>(m_instance)->SetCells(type, cellsWrap);
}



void vtkUnstructuredGrid::SetCells(array<int>^ types, vtkCellArray^ cells)
{
  pin_ptr<int> typesPin = &types[0];
  int* nativetypesPin = typesPin;
  ::vtkCellArray* cellsWrap = vtk::ConvertManagedToNative<::vtkCellArray>(cells->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkUnstructuredGrid>(m_instance)->SetCells(nativetypesPin, cellsWrap);
}



void vtkUnstructuredGrid::SetCells(vtkUnsignedCharArray^ cellTypes, vtkIdTypeArray^ cellLocations, vtkCellArray^ cells)
{
  ::vtkUnsignedCharArray* cellTypesWrap = vtk::ConvertManagedToNative<::vtkUnsignedCharArray>(cellTypes->GetNativePointer());
  ::vtkIdTypeArray* cellLocationsWrap = vtk::ConvertManagedToNative<::vtkIdTypeArray>(cellLocations->GetNativePointer());
  ::vtkCellArray* cellsWrap = vtk::ConvertManagedToNative<::vtkCellArray>(cells->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkUnstructuredGrid>(m_instance)->SetCells(cellTypesWrap, cellLocationsWrap, cellsWrap);
}



vtkCellArray^ vtkUnstructuredGrid::GetCells()
{
  ::vtkCellArray* retVal = static_cast<::vtkCellArray*>(vtk::ConvertManagedToNative<::vtkUnstructuredGrid>(m_instance)->GetCells());
  return gcnew vtkCellArray(IntPtr(retVal), false);
}



void vtkUnstructuredGrid::ReplaceCell(int cellId, int npts, array<int>^ arg2)
{
  pin_ptr<int> arg2Pin = &arg2[0];
  int* nativearg2Pin = arg2Pin;
  vtk::ConvertManagedToNative<::vtkUnstructuredGrid>(m_instance)->ReplaceCell(cellId, npts, nativearg2Pin);
}



int vtkUnstructuredGrid::InsertNextLinkedCell(int type, int npts, array<int>^ arg2)
{
  pin_ptr<int> arg2Pin = &arg2[0];
  int* nativearg2Pin = arg2Pin;
  int retVal = vtk::ConvertManagedToNative<::vtkUnstructuredGrid>(m_instance)->InsertNextLinkedCell(type, npts, nativearg2Pin);
  return retVal;
}



void vtkUnstructuredGrid::RemoveReferenceToCell(int ptId, int cellId)
{
  vtk::ConvertManagedToNative<::vtkUnstructuredGrid>(m_instance)->RemoveReferenceToCell(ptId, cellId);
}



void vtkUnstructuredGrid::AddReferenceToCell(int ptId, int cellId)
{
  vtk::ConvertManagedToNative<::vtkUnstructuredGrid>(m_instance)->AddReferenceToCell(ptId, cellId);
}



void vtkUnstructuredGrid::ResizeCellList(int ptId, int size)
{
  vtk::ConvertManagedToNative<::vtkUnstructuredGrid>(m_instance)->ResizeCellList(ptId, size);
}



void vtkUnstructuredGrid::GetCellNeighbors(int cellId, vtkIdList^ ptIds, vtkIdList^ cellIds)
{
  ::vtkIdList* ptIdsWrap = vtk::ConvertManagedToNative<::vtkIdList>(ptIds->GetNativePointer());
  ::vtkIdList* cellIdsWrap = vtk::ConvertManagedToNative<::vtkIdList>(cellIds->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkUnstructuredGrid>(m_instance)->GetCellNeighbors(cellId, ptIdsWrap, cellIdsWrap);
}



void vtkUnstructuredGrid::GetUpdateExtent(int% piece, int% numPieces, int% ghostLevel)
{
  pin_ptr<int> piecePin = &piece;
  pin_ptr<int> numPiecesPin = &numPieces;
  pin_ptr<int> ghostLevelPin = &ghostLevel;
  vtk::ConvertManagedToNative<::vtkUnstructuredGrid>(m_instance)->GetUpdateExtent(*piecePin, *numPiecesPin, *ghostLevelPin);
}



void vtkUnstructuredGrid::GetUpdateExtent(int% x0, int% x1, int% y0, int% y1, int% z0, int% z1)
{
  pin_ptr<int> x0Pin = &x0;
  pin_ptr<int> x1Pin = &x1;
  pin_ptr<int> y0Pin = &y0;
  pin_ptr<int> y1Pin = &y1;
  pin_ptr<int> z0Pin = &z0;
  pin_ptr<int> z1Pin = &z1;
  vtk::ConvertManagedToNative<::vtkUnstructuredGrid>(m_instance)->GetUpdateExtent(*x0Pin, *x1Pin, *y0Pin, *y1Pin, *z0Pin, *z1Pin);
}



void vtkUnstructuredGrid::GetUpdateExtent(array<int>^ extent)
{
  pin_ptr<int> extentPin = &extent[0];
  int* nativeextentPin = extentPin;
  vtk::ConvertManagedToNative<::vtkUnstructuredGrid>(m_instance)->GetUpdateExtent(nativeextentPin);
}



int vtkUnstructuredGrid::GetPiece()
{
  int retVal = vtk::ConvertManagedToNative<::vtkUnstructuredGrid>(m_instance)->GetPiece();
  return retVal;
}



int vtkUnstructuredGrid::GetNumberOfPieces()
{
  int retVal = vtk::ConvertManagedToNative<::vtkUnstructuredGrid>(m_instance)->GetNumberOfPieces();
  return retVal;
}



int vtkUnstructuredGrid::GetGhostLevel()
{
  int retVal = vtk::ConvertManagedToNative<::vtkUnstructuredGrid>(m_instance)->GetGhostLevel();
  return retVal;
}



unsigned long vtkUnstructuredGrid::GetActualMemorySize()
{
  unsigned long retVal = vtk::ConvertManagedToNative<::vtkUnstructuredGrid>(m_instance)->GetActualMemorySize();
  return retVal;
}



void vtkUnstructuredGrid::ShallowCopy(vtkDataObject^ src)
{
  ::vtkDataObject* srcWrap = vtk::ConvertManagedToNative<::vtkDataObject>(src->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkUnstructuredGrid>(m_instance)->ShallowCopy(srcWrap);
}



void vtkUnstructuredGrid::DeepCopy(vtkDataObject^ src)
{
  ::vtkDataObject* srcWrap = vtk::ConvertManagedToNative<::vtkDataObject>(src->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkUnstructuredGrid>(m_instance)->DeepCopy(srcWrap);
}



void vtkUnstructuredGrid::GetIdsOfCellsOfType(int type, vtkIdTypeArray^ arg1)
{
  ::vtkIdTypeArray* arg1Wrap = vtk::ConvertManagedToNative<::vtkIdTypeArray>(arg1->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkUnstructuredGrid>(m_instance)->GetIdsOfCellsOfType(type, arg1Wrap);
}



int vtkUnstructuredGrid::IsHomogeneous()
{
  int retVal = vtk::ConvertManagedToNative<::vtkUnstructuredGrid>(m_instance)->IsHomogeneous();
  return retVal;
}



void vtkUnstructuredGrid::RemoveGhostCells(int level)
{
  vtk::ConvertManagedToNative<::vtkUnstructuredGrid>(m_instance)->RemoveGhostCells(level);
}



  vtkUnstructuredGrid::vtkUnstructuredGrid(System::IntPtr native, bool bConst) : vtkPointSet(native, bConst) {}



  vtkUnstructuredGrid::vtkUnstructuredGrid(bool donothing) : vtkPointSet(donothing) {}



  vtkUnstructuredGrid::vtkUnstructuredGrid() : vtkPointSet(false) {
  this->SetNativePointer(IntPtr(::vtkUnstructuredGrid::New()));
}



  vtkUnstructuredGrid::~vtkUnstructuredGrid() { }





} // end namespace vtkFiltering
