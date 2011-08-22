

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkPolyDataDotNet.h"
#include "vtkCellDotNet.h"
#include "vtkCellArrayDotNet.h"
#include "vtkDataObjectDotNet.h"
#include "vtkDataSetDotNet.h"
#include "vtkGenericCellDotNet.h"
#include "vtkPointLocatorDotNet.h"

// native includes
#include "strstream"
#include "vtkPolyData.h"
#include "vtkCell.h"
#include "vtkCellArray.h"
#include "vtkDataObject.h"
#include "vtkDataSet.h"
#include "vtkGenericCell.h"
#include "vtkIdList.h"
#include "vtkObject.h"
#include "vtkPointLocator.h"

using namespace System;

namespace vtk {

System::String^ vtkPolyData::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkPolyData>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkPolyData::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkPolyData>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkPolyData^ vtkPolyData::NewInstance()
{
  ::vtkPolyData* retVal = static_cast<::vtkPolyData*>(vtk::ConvertManagedToNative<::vtkPolyData>(m_instance)->NewInstance());
  return gcnew vtkPolyData(IntPtr(retVal), false);
}



vtkPolyData^ vtkPolyData::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkPolyData* retVal = static_cast<::vtkPolyData*>(::vtkPolyData::SafeDownCast(oWrap));
  return gcnew vtkPolyData(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkPolyData::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkPolyData>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkPolyData::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkPolyData>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




int vtkPolyData::GetDataObjectType()
{
  int retVal = vtk::ConvertManagedToNative<::vtkPolyData>(m_instance)->GetDataObjectType();
  return retVal;
}



void vtkPolyData::CopyStructure(vtkDataSet^ ds)
{
  ::vtkDataSet* dsWrap = vtk::ConvertManagedToNative<::vtkDataSet>(ds->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkPolyData>(m_instance)->CopyStructure(dsWrap);
}



int vtkPolyData::GetNumberOfCells()
{
  int retVal = vtk::ConvertManagedToNative<::vtkPolyData>(m_instance)->GetNumberOfCells();
  return retVal;
}



vtkCell^ vtkPolyData::GetCell(int cellId)
{
  ::vtkCell* retVal = static_cast<::vtkCell*>(vtk::ConvertManagedToNative<::vtkPolyData>(m_instance)->GetCell(cellId));
  return gcnew vtkCell(IntPtr(retVal), false);
}



void vtkPolyData::GetCell(int cellId, vtkGenericCell^ cell)
{
  ::vtkGenericCell* cellWrap = vtk::ConvertManagedToNative<::vtkGenericCell>(cell->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkPolyData>(m_instance)->GetCell(cellId, cellWrap);
}



int vtkPolyData::GetCellType(int cellId)
{
  int retVal = vtk::ConvertManagedToNative<::vtkPolyData>(m_instance)->GetCellType(cellId);
  return retVal;
}



void vtkPolyData::GetCellBounds(int cellId, array<double>^ bounds)
{
  pin_ptr<double> boundsPin = &bounds[0];
  double* nativeboundsPin = boundsPin;
  vtk::ConvertManagedToNative<::vtkPolyData>(m_instance)->GetCellBounds(cellId, nativeboundsPin);
}



void vtkPolyData::GetCellNeighbors(int cellId, vtkIdList^ ptIds, vtkIdList^ cellIds)
{
  ::vtkIdList* ptIdsWrap = vtk::ConvertManagedToNative<::vtkIdList>(ptIds->GetNativePointer());
  ::vtkIdList* cellIdsWrap = vtk::ConvertManagedToNative<::vtkIdList>(cellIds->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkPolyData>(m_instance)->GetCellNeighbors(cellId, ptIdsWrap, cellIdsWrap);
}



void vtkPolyData::CopyCells(vtkPolyData^ pd, vtkIdList^ idList, vtkPointLocator^ locatorNULL)
{
  ::vtkPolyData* pdWrap = vtk::ConvertManagedToNative<::vtkPolyData>(pd->GetNativePointer());
  ::vtkIdList* idListWrap = vtk::ConvertManagedToNative<::vtkIdList>(idList->GetNativePointer());
  ::vtkPointLocator* locatorNULLWrap = vtk::ConvertManagedToNative<::vtkPointLocator>(locatorNULL->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkPolyData>(m_instance)->CopyCells(pdWrap, idListWrap, locatorNULLWrap);
}



void vtkPolyData::GetCellPoints(int cellId, vtkIdList^ ptIds)
{
  ::vtkIdList* ptIdsWrap = vtk::ConvertManagedToNative<::vtkIdList>(ptIds->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkPolyData>(m_instance)->GetCellPoints(cellId, ptIdsWrap);
}



void vtkPolyData::GetPointCells(int ptId, vtkIdList^ cellIds)
{
  ::vtkIdList* cellIdsWrap = vtk::ConvertManagedToNative<::vtkIdList>(cellIds->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkPolyData>(m_instance)->GetPointCells(ptId, cellIdsWrap);
}



void vtkPolyData::ComputeBounds()
{
  vtk::ConvertManagedToNative<::vtkPolyData>(m_instance)->ComputeBounds();
}



void vtkPolyData::Squeeze()
{
  vtk::ConvertManagedToNative<::vtkPolyData>(m_instance)->Squeeze();
}



int vtkPolyData::GetMaxCellSize()
{
  int retVal = vtk::ConvertManagedToNative<::vtkPolyData>(m_instance)->GetMaxCellSize();
  return retVal;
}



void vtkPolyData::SetVerts(vtkCellArray^ v)
{
  ::vtkCellArray* vWrap = vtk::ConvertManagedToNative<::vtkCellArray>(v->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkPolyData>(m_instance)->SetVerts(vWrap);
}



vtkCellArray^ vtkPolyData::GetVerts()
{
  ::vtkCellArray* retVal = static_cast<::vtkCellArray*>(vtk::ConvertManagedToNative<::vtkPolyData>(m_instance)->GetVerts());
  return gcnew vtkCellArray(IntPtr(retVal), false);
}



void vtkPolyData::SetLines(vtkCellArray^ l)
{
  ::vtkCellArray* lWrap = vtk::ConvertManagedToNative<::vtkCellArray>(l->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkPolyData>(m_instance)->SetLines(lWrap);
}



vtkCellArray^ vtkPolyData::GetLines()
{
  ::vtkCellArray* retVal = static_cast<::vtkCellArray*>(vtk::ConvertManagedToNative<::vtkPolyData>(m_instance)->GetLines());
  return gcnew vtkCellArray(IntPtr(retVal), false);
}



void vtkPolyData::SetPolys(vtkCellArray^ p)
{
  ::vtkCellArray* pWrap = vtk::ConvertManagedToNative<::vtkCellArray>(p->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkPolyData>(m_instance)->SetPolys(pWrap);
}



vtkCellArray^ vtkPolyData::GetPolys()
{
  ::vtkCellArray* retVal = static_cast<::vtkCellArray*>(vtk::ConvertManagedToNative<::vtkPolyData>(m_instance)->GetPolys());
  return gcnew vtkCellArray(IntPtr(retVal), false);
}



void vtkPolyData::SetStrips(vtkCellArray^ s)
{
  ::vtkCellArray* sWrap = vtk::ConvertManagedToNative<::vtkCellArray>(s->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkPolyData>(m_instance)->SetStrips(sWrap);
}



vtkCellArray^ vtkPolyData::GetStrips()
{
  ::vtkCellArray* retVal = static_cast<::vtkCellArray*>(vtk::ConvertManagedToNative<::vtkPolyData>(m_instance)->GetStrips());
  return gcnew vtkCellArray(IntPtr(retVal), false);
}



int vtkPolyData::GetNumberOfVerts()
{
  int retVal = vtk::ConvertManagedToNative<::vtkPolyData>(m_instance)->GetNumberOfVerts();
  return retVal;
}



int vtkPolyData::GetNumberOfLines()
{
  int retVal = vtk::ConvertManagedToNative<::vtkPolyData>(m_instance)->GetNumberOfLines();
  return retVal;
}



int vtkPolyData::GetNumberOfPolys()
{
  int retVal = vtk::ConvertManagedToNative<::vtkPolyData>(m_instance)->GetNumberOfPolys();
  return retVal;
}



int vtkPolyData::GetNumberOfStrips()
{
  int retVal = vtk::ConvertManagedToNative<::vtkPolyData>(m_instance)->GetNumberOfStrips();
  return retVal;
}



void vtkPolyData::Allocate(int numCells, int extSize)
{
  vtk::ConvertManagedToNative<::vtkPolyData>(m_instance)->Allocate(numCells, extSize);
}



void vtkPolyData::Allocate(vtkPolyData^ inPolyData, int numCells, int extSize)
{
  ::vtkPolyData* inPolyDataWrap = vtk::ConvertManagedToNative<::vtkPolyData>(inPolyData->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkPolyData>(m_instance)->Allocate(inPolyDataWrap, numCells, extSize);
}



int vtkPolyData::InsertNextCell(int type, int npts, array<int>^ arg2)
{
  pin_ptr<int> arg2Pin = &arg2[0];
  int* nativearg2Pin = arg2Pin;
  int retVal = vtk::ConvertManagedToNative<::vtkPolyData>(m_instance)->InsertNextCell(type, npts, nativearg2Pin);
  return retVal;
}



int vtkPolyData::InsertNextCell(int type, vtkIdList^ pts)
{
  ::vtkIdList* ptsWrap = vtk::ConvertManagedToNative<::vtkIdList>(pts->GetNativePointer());
  int retVal = vtk::ConvertManagedToNative<::vtkPolyData>(m_instance)->InsertNextCell(type, ptsWrap);
  return retVal;
}



void vtkPolyData::Reset()
{
  vtk::ConvertManagedToNative<::vtkPolyData>(m_instance)->Reset();
}



void vtkPolyData::BuildCells()
{
  vtk::ConvertManagedToNative<::vtkPolyData>(m_instance)->BuildCells();
}



void vtkPolyData::BuildLinks(int initialSize)
{
  vtk::ConvertManagedToNative<::vtkPolyData>(m_instance)->BuildLinks(initialSize);
}



void vtkPolyData::DeleteCells()
{
  vtk::ConvertManagedToNative<::vtkPolyData>(m_instance)->DeleteCells();
}



void vtkPolyData::DeleteLinks()
{
  vtk::ConvertManagedToNative<::vtkPolyData>(m_instance)->DeleteLinks();
}



void vtkPolyData::GetCellEdgeNeighbors(int cellId, int p1, int p2, vtkIdList^ cellIds)
{
  ::vtkIdList* cellIdsWrap = vtk::ConvertManagedToNative<::vtkIdList>(cellIds->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkPolyData>(m_instance)->GetCellEdgeNeighbors(cellId, p1, p2, cellIdsWrap);
}



int vtkPolyData::IsTriangle(int v1, int v2, int v3)
{
  int retVal = vtk::ConvertManagedToNative<::vtkPolyData>(m_instance)->IsTriangle(v1, v2, v3);
  return retVal;
}



int vtkPolyData::IsEdge(int p1, int p2)
{
  int retVal = vtk::ConvertManagedToNative<::vtkPolyData>(m_instance)->IsEdge(p1, p2);
  return retVal;
}



int vtkPolyData::IsPointUsedByCell(int ptId, int cellId)
{
  int retVal = vtk::ConvertManagedToNative<::vtkPolyData>(m_instance)->IsPointUsedByCell(ptId, cellId);
  return retVal;
}



void vtkPolyData::ReplaceCell(int cellId, int npts, array<int>^ arg2)
{
  pin_ptr<int> arg2Pin = &arg2[0];
  int* nativearg2Pin = arg2Pin;
  vtk::ConvertManagedToNative<::vtkPolyData>(m_instance)->ReplaceCell(cellId, npts, nativearg2Pin);
}



void vtkPolyData::ReplaceCellPoint(int cellId, int oldPtId, int newPtId)
{
  vtk::ConvertManagedToNative<::vtkPolyData>(m_instance)->ReplaceCellPoint(cellId, oldPtId, newPtId);
}



void vtkPolyData::ReverseCell(int cellId)
{
  vtk::ConvertManagedToNative<::vtkPolyData>(m_instance)->ReverseCell(cellId);
}



void vtkPolyData::DeletePoint(int ptId)
{
  vtk::ConvertManagedToNative<::vtkPolyData>(m_instance)->DeletePoint(ptId);
}



void vtkPolyData::DeleteCell(int cellId)
{
  vtk::ConvertManagedToNative<::vtkPolyData>(m_instance)->DeleteCell(cellId);
}



int vtkPolyData::InsertNextLinkedPoint(int numLinks)
{
  int retVal = vtk::ConvertManagedToNative<::vtkPolyData>(m_instance)->InsertNextLinkedPoint(numLinks);
  return retVal;
}



int vtkPolyData::InsertNextLinkedPoint(array<double>^ x, int numLinks)
{
  pin_ptr<double> xPin = &x[0];
  double* nativexPin = xPin;
  int retVal = vtk::ConvertManagedToNative<::vtkPolyData>(m_instance)->InsertNextLinkedPoint(nativexPin, numLinks);
  return retVal;
}



int vtkPolyData::InsertNextLinkedCell(int type, int npts, array<int>^ arg2)
{
  pin_ptr<int> arg2Pin = &arg2[0];
  int* nativearg2Pin = arg2Pin;
  int retVal = vtk::ConvertManagedToNative<::vtkPolyData>(m_instance)->InsertNextLinkedCell(type, npts, nativearg2Pin);
  return retVal;
}



void vtkPolyData::ReplaceLinkedCell(int cellId, int npts, array<int>^ arg2)
{
  pin_ptr<int> arg2Pin = &arg2[0];
  int* nativearg2Pin = arg2Pin;
  vtk::ConvertManagedToNative<::vtkPolyData>(m_instance)->ReplaceLinkedCell(cellId, npts, nativearg2Pin);
}



void vtkPolyData::RemoveCellReference(int cellId)
{
  vtk::ConvertManagedToNative<::vtkPolyData>(m_instance)->RemoveCellReference(cellId);
}



void vtkPolyData::AddCellReference(int cellId)
{
  vtk::ConvertManagedToNative<::vtkPolyData>(m_instance)->AddCellReference(cellId);
}



void vtkPolyData::RemoveReferenceToCell(int ptId, int cellId)
{
  vtk::ConvertManagedToNative<::vtkPolyData>(m_instance)->RemoveReferenceToCell(ptId, cellId);
}



void vtkPolyData::AddReferenceToCell(int ptId, int cellId)
{
  vtk::ConvertManagedToNative<::vtkPolyData>(m_instance)->AddReferenceToCell(ptId, cellId);
}



void vtkPolyData::ResizeCellList(int ptId, int size)
{
  vtk::ConvertManagedToNative<::vtkPolyData>(m_instance)->ResizeCellList(ptId, size);
}



void vtkPolyData::Initialize()
{
  vtk::ConvertManagedToNative<::vtkPolyData>(m_instance)->Initialize();
}



void vtkPolyData::GetUpdateExtent(int% piece, int% numPieces, int% ghostLevel)
{
  pin_ptr<int> piecePin = &piece;
  pin_ptr<int> numPiecesPin = &numPieces;
  pin_ptr<int> ghostLevelPin = &ghostLevel;
  vtk::ConvertManagedToNative<::vtkPolyData>(m_instance)->GetUpdateExtent(*piecePin, *numPiecesPin, *ghostLevelPin);
}



void vtkPolyData::GetUpdateExtent(int% x0, int% x1, int% y0, int% y1, int% z0, int% z1)
{
  pin_ptr<int> x0Pin = &x0;
  pin_ptr<int> x1Pin = &x1;
  pin_ptr<int> y0Pin = &y0;
  pin_ptr<int> y1Pin = &y1;
  pin_ptr<int> z0Pin = &z0;
  pin_ptr<int> z1Pin = &z1;
  vtk::ConvertManagedToNative<::vtkPolyData>(m_instance)->GetUpdateExtent(*x0Pin, *x1Pin, *y0Pin, *y1Pin, *z0Pin, *z1Pin);
}



void vtkPolyData::GetUpdateExtent(array<int>^ extent)
{
  pin_ptr<int> extentPin = &extent[0];
  int* nativeextentPin = extentPin;
  vtk::ConvertManagedToNative<::vtkPolyData>(m_instance)->GetUpdateExtent(nativeextentPin);
}



int vtkPolyData::GetPiece()
{
  int retVal = vtk::ConvertManagedToNative<::vtkPolyData>(m_instance)->GetPiece();
  return retVal;
}



int vtkPolyData::GetNumberOfPieces()
{
  int retVal = vtk::ConvertManagedToNative<::vtkPolyData>(m_instance)->GetNumberOfPieces();
  return retVal;
}



int vtkPolyData::GetGhostLevel()
{
  int retVal = vtk::ConvertManagedToNative<::vtkPolyData>(m_instance)->GetGhostLevel();
  return retVal;
}



unsigned long vtkPolyData::GetActualMemorySize()
{
  unsigned long retVal = vtk::ConvertManagedToNative<::vtkPolyData>(m_instance)->GetActualMemorySize();
  return retVal;
}



void vtkPolyData::ShallowCopy(vtkDataObject^ src)
{
  ::vtkDataObject* srcWrap = vtk::ConvertManagedToNative<::vtkDataObject>(src->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkPolyData>(m_instance)->ShallowCopy(srcWrap);
}



void vtkPolyData::DeepCopy(vtkDataObject^ src)
{
  ::vtkDataObject* srcWrap = vtk::ConvertManagedToNative<::vtkDataObject>(src->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkPolyData>(m_instance)->DeepCopy(srcWrap);
}



void vtkPolyData::RemoveGhostCells(int level)
{
  vtk::ConvertManagedToNative<::vtkPolyData>(m_instance)->RemoveGhostCells(level);
}



  vtkPolyData::vtkPolyData(System::IntPtr native, bool bConst) : vtkPointSet(native, bConst) {}



  vtkPolyData::vtkPolyData(bool donothing) : vtkPointSet(donothing) {}



  vtkPolyData::vtkPolyData() : vtkPointSet(false) {
  this->SetNativePointer(IntPtr(::vtkPolyData::New()));
}



  vtkPolyData::~vtkPolyData() { }





} // end namespace vtkFiltering
