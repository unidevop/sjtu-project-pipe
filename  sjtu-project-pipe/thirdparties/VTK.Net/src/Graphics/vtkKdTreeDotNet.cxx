

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkKdTreeDotNet.h"
#include "vtkBSPCutsDotNet.h"
#include "vtkKdNodeDotNet.h"

// native includes
#include "strstream"
#include "vtkKdTree.h"
#include "vtkBSPCuts.h"
#include "vtkDataSet.h"
#include "vtkIdList.h"
#include "vtkIdTypeArray.h"
#include "vtkIntArray.h"
#include "vtkKdNode.h"
#include "vtkObject.h"
#include "vtkPoints.h"
#include "vtkPolyData.h"

using namespace System;

namespace vtk {

System::String^ vtkKdTree::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkKdTree>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkKdTree::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkKdTree>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkKdTree^ vtkKdTree::NewInstance()
{
  ::vtkKdTree* retVal = static_cast<::vtkKdTree*>(vtk::ConvertManagedToNative<::vtkKdTree>(m_instance)->NewInstance());
  return gcnew vtkKdTree(IntPtr(retVal), false);
}



vtkKdTree^ vtkKdTree::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkKdTree* retVal = static_cast<::vtkKdTree*>(::vtkKdTree::SafeDownCast(oWrap));
  return gcnew vtkKdTree(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkKdTree::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkKdTree>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkKdTree::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkKdTree>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkKdTree::TimingOn()
{
  vtk::ConvertManagedToNative<::vtkKdTree>(m_instance)->TimingOn();
}



void vtkKdTree::TimingOff()
{
  vtk::ConvertManagedToNative<::vtkKdTree>(m_instance)->TimingOff();
}



void vtkKdTree::SetTiming(int arg0)
{
  vtk::ConvertManagedToNative<::vtkKdTree>(m_instance)->SetTiming(arg0);
}



int vtkKdTree::GetTiming()
{
  int retVal = vtk::ConvertManagedToNative<::vtkKdTree>(m_instance)->GetTiming();
  return retVal;
}



void vtkKdTree::SetMinCells(int arg0)
{
  vtk::ConvertManagedToNative<::vtkKdTree>(m_instance)->SetMinCells(arg0);
}



int vtkKdTree::GetMinCells()
{
  int retVal = vtk::ConvertManagedToNative<::vtkKdTree>(m_instance)->GetMinCells();
  return retVal;
}



int vtkKdTree::GetNumberOfRegionsOrLess()
{
  int retVal = vtk::ConvertManagedToNative<::vtkKdTree>(m_instance)->GetNumberOfRegionsOrLess();
  return retVal;
}



void vtkKdTree::SetNumberOfRegionsOrLess(int arg0)
{
  vtk::ConvertManagedToNative<::vtkKdTree>(m_instance)->SetNumberOfRegionsOrLess(arg0);
}



int vtkKdTree::GetNumberOfRegionsOrMore()
{
  int retVal = vtk::ConvertManagedToNative<::vtkKdTree>(m_instance)->GetNumberOfRegionsOrMore();
  return retVal;
}



void vtkKdTree::SetNumberOfRegionsOrMore(int arg0)
{
  vtk::ConvertManagedToNative<::vtkKdTree>(m_instance)->SetNumberOfRegionsOrMore(arg0);
}



double vtkKdTree::GetFudgeFactor()
{
  double retVal = vtk::ConvertManagedToNative<::vtkKdTree>(m_instance)->GetFudgeFactor();
  return retVal;
}



void vtkKdTree::SetFudgeFactor(double arg0)
{
  vtk::ConvertManagedToNative<::vtkKdTree>(m_instance)->SetFudgeFactor(arg0);
}



vtkBSPCuts^ vtkKdTree::GetCuts()
{
  ::vtkBSPCuts* retVal = static_cast<::vtkBSPCuts*>(vtk::ConvertManagedToNative<::vtkKdTree>(m_instance)->GetCuts());
  return gcnew vtkBSPCuts(IntPtr(retVal), false);
}



void vtkKdTree::SetCuts(vtkBSPCuts^ cuts)
{
  ::vtkBSPCuts* cutsWrap = vtk::ConvertManagedToNative<::vtkBSPCuts>(cuts->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkKdTree>(m_instance)->SetCuts(cutsWrap);
}



void vtkKdTree::OmitXPartitioning()
{
  vtk::ConvertManagedToNative<::vtkKdTree>(m_instance)->OmitXPartitioning();
}



void vtkKdTree::OmitYPartitioning()
{
  vtk::ConvertManagedToNative<::vtkKdTree>(m_instance)->OmitYPartitioning();
}



void vtkKdTree::OmitZPartitioning()
{
  vtk::ConvertManagedToNative<::vtkKdTree>(m_instance)->OmitZPartitioning();
}



void vtkKdTree::OmitXYPartitioning()
{
  vtk::ConvertManagedToNative<::vtkKdTree>(m_instance)->OmitXYPartitioning();
}



void vtkKdTree::OmitYZPartitioning()
{
  vtk::ConvertManagedToNative<::vtkKdTree>(m_instance)->OmitYZPartitioning();
}



void vtkKdTree::OmitZXPartitioning()
{
  vtk::ConvertManagedToNative<::vtkKdTree>(m_instance)->OmitZXPartitioning();
}



void vtkKdTree::OmitNoPartitioning()
{
  vtk::ConvertManagedToNative<::vtkKdTree>(m_instance)->OmitNoPartitioning();
}



void vtkKdTree::SetDataSet(vtkDataSet^ set)
{
  ::vtkDataSet* setWrap = vtk::ConvertManagedToNative<::vtkDataSet>(set->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkKdTree>(m_instance)->SetDataSet(setWrap);
}



void vtkKdTree::SetNthDataSet(int index, vtkDataSet^ set)
{
  ::vtkDataSet* setWrap = vtk::ConvertManagedToNative<::vtkDataSet>(set->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkKdTree>(m_instance)->SetNthDataSet(index, setWrap);
}



void vtkKdTree::RemoveDataSet(int index)
{
  vtk::ConvertManagedToNative<::vtkKdTree>(m_instance)->RemoveDataSet(index);
}



void vtkKdTree::RemoveDataSet(vtkDataSet^ set)
{
  ::vtkDataSet* setWrap = vtk::ConvertManagedToNative<::vtkDataSet>(set->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkKdTree>(m_instance)->RemoveDataSet(setWrap);
}



void vtkKdTree::AddDataSet(vtkDataSet^ set)
{
  ::vtkDataSet* setWrap = vtk::ConvertManagedToNative<::vtkDataSet>(set->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkKdTree>(m_instance)->AddDataSet(setWrap);
}



int vtkKdTree::GetNumberOfDataSets()
{
  int retVal = vtk::ConvertManagedToNative<::vtkKdTree>(m_instance)->GetNumberOfDataSets();
  return retVal;
}



vtkDataSet^ vtkKdTree::GetDataSet(int n)
{
  ::vtkDataSet* retVal = static_cast<::vtkDataSet*>(vtk::ConvertManagedToNative<::vtkKdTree>(m_instance)->GetDataSet(n));
  return gcnew vtkDataSet(IntPtr(retVal), false);
}



vtkDataSet^ vtkKdTree::GetDataSet()
{
  ::vtkDataSet* retVal = static_cast<::vtkDataSet*>(vtk::ConvertManagedToNative<::vtkKdTree>(m_instance)->GetDataSet());
  return gcnew vtkDataSet(IntPtr(retVal), false);
}



int vtkKdTree::GetDataSet(vtkDataSet^ set)
{
  ::vtkDataSet* setWrap = vtk::ConvertManagedToNative<::vtkDataSet>(set->GetNativePointer());
  int retVal = vtk::ConvertManagedToNative<::vtkKdTree>(m_instance)->GetDataSet(setWrap);
  return retVal;
}



void vtkKdTree::GetBounds(array<double>^ bounds)
{
  pin_ptr<double> boundsPin = &bounds[0];
  double* nativeboundsPin = boundsPin;
  vtk::ConvertManagedToNative<::vtkKdTree>(m_instance)->GetBounds(nativeboundsPin);
}



void vtkKdTree::SetNewBounds(array<double>^ bounds)
{
  pin_ptr<double> boundsPin = &bounds[0];
  double* nativeboundsPin = boundsPin;
  vtk::ConvertManagedToNative<::vtkKdTree>(m_instance)->SetNewBounds(nativeboundsPin);
}



int vtkKdTree::GetNumberOfRegions()
{
  int retVal = vtk::ConvertManagedToNative<::vtkKdTree>(m_instance)->GetNumberOfRegions();
  return retVal;
}



void vtkKdTree::GetRegionBounds(int regionID, array<double>^ bounds)
{
  pin_ptr<double> boundsPin = &bounds[0];
  double* nativeboundsPin = boundsPin;
  vtk::ConvertManagedToNative<::vtkKdTree>(m_instance)->GetRegionBounds(regionID, nativeboundsPin);
}



void vtkKdTree::GetRegionDataBounds(int regionID, array<double>^ bounds)
{
  pin_ptr<double> boundsPin = &bounds[0];
  double* nativeboundsPin = boundsPin;
  vtk::ConvertManagedToNative<::vtkKdTree>(m_instance)->GetRegionDataBounds(regionID, nativeboundsPin);
}



void vtkKdTree::PrintTree()
{
  vtk::ConvertManagedToNative<::vtkKdTree>(m_instance)->PrintTree();
}



void vtkKdTree::PrintVerboseTree()
{
  vtk::ConvertManagedToNative<::vtkKdTree>(m_instance)->PrintVerboseTree();
}



void vtkKdTree::PrintRegion(int id)
{
  vtk::ConvertManagedToNative<::vtkKdTree>(m_instance)->PrintRegion(id);
}



void vtkKdTree::CreateCellLists(int DataSet, array<int>^ regionReqList, int reqListSize)
{
  pin_ptr<int> regionReqListPin = &regionReqList[0];
  int* nativeregionReqListPin = regionReqListPin;
  vtk::ConvertManagedToNative<::vtkKdTree>(m_instance)->CreateCellLists(DataSet, nativeregionReqListPin, reqListSize);
}



void vtkKdTree::CreateCellLists(vtkDataSet^ set, array<int>^ regionReqList, int reqListSize)
{
  ::vtkDataSet* setWrap = vtk::ConvertManagedToNative<::vtkDataSet>(set->GetNativePointer());
  pin_ptr<int> regionReqListPin = &regionReqList[0];
  int* nativeregionReqListPin = regionReqListPin;
  vtk::ConvertManagedToNative<::vtkKdTree>(m_instance)->CreateCellLists(setWrap, nativeregionReqListPin, reqListSize);
}



void vtkKdTree::CreateCellLists(array<int>^ regionReqList, int listSize)
{
  pin_ptr<int> regionReqListPin = &regionReqList[0];
  int* nativeregionReqListPin = regionReqListPin;
  vtk::ConvertManagedToNative<::vtkKdTree>(m_instance)->CreateCellLists(nativeregionReqListPin, listSize);
}



void vtkKdTree::CreateCellLists()
{
  vtk::ConvertManagedToNative<::vtkKdTree>(m_instance)->CreateCellLists();
}



void vtkKdTree::SetIncludeRegionBoundaryCells(int arg0)
{
  vtk::ConvertManagedToNative<::vtkKdTree>(m_instance)->SetIncludeRegionBoundaryCells(arg0);
}



int vtkKdTree::GetIncludeRegionBoundaryCells()
{
  int retVal = vtk::ConvertManagedToNative<::vtkKdTree>(m_instance)->GetIncludeRegionBoundaryCells();
  return retVal;
}



void vtkKdTree::IncludeRegionBoundaryCellsOn()
{
  vtk::ConvertManagedToNative<::vtkKdTree>(m_instance)->IncludeRegionBoundaryCellsOn();
}



void vtkKdTree::IncludeRegionBoundaryCellsOff()
{
  vtk::ConvertManagedToNative<::vtkKdTree>(m_instance)->IncludeRegionBoundaryCellsOff();
}



void vtkKdTree::DeleteCellLists()
{
  vtk::ConvertManagedToNative<::vtkKdTree>(m_instance)->DeleteCellLists();
}



vtkIdList^ vtkKdTree::GetCellList(int regionID)
{
  ::vtkIdList* retVal = static_cast<::vtkIdList*>(vtk::ConvertManagedToNative<::vtkKdTree>(m_instance)->GetCellList(regionID));
  return gcnew vtkIdList(IntPtr(retVal), false);
}



vtkIdList^ vtkKdTree::GetBoundaryCellList(int regionID)
{
  ::vtkIdList* retVal = static_cast<::vtkIdList*>(vtk::ConvertManagedToNative<::vtkKdTree>(m_instance)->GetBoundaryCellList(regionID));
  return gcnew vtkIdList(IntPtr(retVal), false);
}



int vtkKdTree::GetCellLists(vtkIntArray^ regions, int set, vtkIdList^ inRegionCells, vtkIdList^ onBoundaryCells)
{
  ::vtkIntArray* regionsWrap = vtk::ConvertManagedToNative<::vtkIntArray>(regions->GetNativePointer());
  ::vtkIdList* inRegionCellsWrap = vtk::ConvertManagedToNative<::vtkIdList>(inRegionCells->GetNativePointer());
  ::vtkIdList* onBoundaryCellsWrap = vtk::ConvertManagedToNative<::vtkIdList>(onBoundaryCells->GetNativePointer());
  int retVal = vtk::ConvertManagedToNative<::vtkKdTree>(m_instance)->GetCellLists(regionsWrap, set, inRegionCellsWrap, onBoundaryCellsWrap);
  return retVal;
}



int vtkKdTree::GetCellLists(vtkIntArray^ regions, vtkDataSet^ set, vtkIdList^ inRegionCells, vtkIdList^ onBoundaryCells)
{
  ::vtkIntArray* regionsWrap = vtk::ConvertManagedToNative<::vtkIntArray>(regions->GetNativePointer());
  ::vtkDataSet* setWrap = vtk::ConvertManagedToNative<::vtkDataSet>(set->GetNativePointer());
  ::vtkIdList* inRegionCellsWrap = vtk::ConvertManagedToNative<::vtkIdList>(inRegionCells->GetNativePointer());
  ::vtkIdList* onBoundaryCellsWrap = vtk::ConvertManagedToNative<::vtkIdList>(onBoundaryCells->GetNativePointer());
  int retVal = vtk::ConvertManagedToNative<::vtkKdTree>(m_instance)->GetCellLists(regionsWrap, setWrap, inRegionCellsWrap, onBoundaryCellsWrap);
  return retVal;
}



int vtkKdTree::GetCellLists(vtkIntArray^ regions, vtkIdList^ inRegionCells, vtkIdList^ onBoundaryCells)
{
  ::vtkIntArray* regionsWrap = vtk::ConvertManagedToNative<::vtkIntArray>(regions->GetNativePointer());
  ::vtkIdList* inRegionCellsWrap = vtk::ConvertManagedToNative<::vtkIdList>(inRegionCells->GetNativePointer());
  ::vtkIdList* onBoundaryCellsWrap = vtk::ConvertManagedToNative<::vtkIdList>(onBoundaryCells->GetNativePointer());
  int retVal = vtk::ConvertManagedToNative<::vtkKdTree>(m_instance)->GetCellLists(regionsWrap, inRegionCellsWrap, onBoundaryCellsWrap);
  return retVal;
}



int vtkKdTree::GetRegionContainingCell(vtkDataSet^ set, int cellID)
{
  ::vtkDataSet* setWrap = vtk::ConvertManagedToNative<::vtkDataSet>(set->GetNativePointer());
  int retVal = vtk::ConvertManagedToNative<::vtkKdTree>(m_instance)->GetRegionContainingCell(setWrap, cellID);
  return retVal;
}



int vtkKdTree::GetRegionContainingCell(int set, int cellID)
{
  int retVal = vtk::ConvertManagedToNative<::vtkKdTree>(m_instance)->GetRegionContainingCell(set, cellID);
  return retVal;
}



int vtkKdTree::GetRegionContainingCell(int cellID)
{
  int retVal = vtk::ConvertManagedToNative<::vtkKdTree>(m_instance)->GetRegionContainingCell(cellID);
  return retVal;
}



int vtkKdTree::GetRegionContainingPoint(double x, double y, double z)
{
  int retVal = vtk::ConvertManagedToNative<::vtkKdTree>(m_instance)->GetRegionContainingPoint(x, y, z);
  return retVal;
}



void vtkKdTree::BuildLocator()
{
  vtk::ConvertManagedToNative<::vtkKdTree>(m_instance)->BuildLocator();
}



int vtkKdTree::DepthOrderAllRegions(array<double>^ dop, vtkIntArray^ orderedList)
{
  pin_ptr<double> dopPin = &dop[0];
  double* nativedopPin = dopPin;
  ::vtkIntArray* orderedListWrap = vtk::ConvertManagedToNative<::vtkIntArray>(orderedList->GetNativePointer());
  int retVal = vtk::ConvertManagedToNative<::vtkKdTree>(m_instance)->DepthOrderAllRegions(nativedopPin, orderedListWrap);
  return retVal;
}



int vtkKdTree::DepthOrderRegions(vtkIntArray^ regionIds, array<double>^ dop, vtkIntArray^ orderedList)
{
  ::vtkIntArray* regionIdsWrap = vtk::ConvertManagedToNative<::vtkIntArray>(regionIds->GetNativePointer());
  pin_ptr<double> dopPin = &dop[0];
  double* nativedopPin = dopPin;
  ::vtkIntArray* orderedListWrap = vtk::ConvertManagedToNative<::vtkIntArray>(orderedList->GetNativePointer());
  int retVal = vtk::ConvertManagedToNative<::vtkKdTree>(m_instance)->DepthOrderRegions(regionIdsWrap, nativedopPin, orderedListWrap);
  return retVal;
}



void vtkKdTree::BuildLocatorFromPoints(vtkPoints^ ptArray)
{
  ::vtkPoints* ptArrayWrap = vtk::ConvertManagedToNative<::vtkPoints>(ptArray->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkKdTree>(m_instance)->BuildLocatorFromPoints(ptArrayWrap);
}



vtkIdTypeArray^ vtkKdTree::BuildMapForDuplicatePoints(float tolerance)
{
  ::vtkIdTypeArray* retVal = static_cast<::vtkIdTypeArray*>(vtk::ConvertManagedToNative<::vtkKdTree>(m_instance)->BuildMapForDuplicatePoints(tolerance));
  return gcnew vtkIdTypeArray(IntPtr(retVal), false);
}



int vtkKdTree::FindPoint(array<double>^ x)
{
  pin_ptr<double> xPin = &x[0];
  double* nativexPin = xPin;
  int retVal = vtk::ConvertManagedToNative<::vtkKdTree>(m_instance)->FindPoint(nativexPin);
  return retVal;
}



int vtkKdTree::FindPoint(double x, double y, double z)
{
  int retVal = vtk::ConvertManagedToNative<::vtkKdTree>(m_instance)->FindPoint(x, y, z);
  return retVal;
}



int vtkKdTree::FindClosestPoint(array<double>^ x, double% dist2)
{
  pin_ptr<double> xPin = &x[0];
  double* nativexPin = xPin;
  pin_ptr<double> dist2Pin = &dist2;
  int retVal = vtk::ConvertManagedToNative<::vtkKdTree>(m_instance)->FindClosestPoint(nativexPin, *dist2Pin);
  return retVal;
}



int vtkKdTree::FindClosestPoint(double x, double y, double z, double% dist2)
{
  pin_ptr<double> dist2Pin = &dist2;
  int retVal = vtk::ConvertManagedToNative<::vtkKdTree>(m_instance)->FindClosestPoint(x, y, z, *dist2Pin);
  return retVal;
}



int vtkKdTree::FindClosestPointInRegion(int regionId, array<double>^ x, double% dist2)
{
  pin_ptr<double> xPin = &x[0];
  double* nativexPin = xPin;
  pin_ptr<double> dist2Pin = &dist2;
  int retVal = vtk::ConvertManagedToNative<::vtkKdTree>(m_instance)->FindClosestPointInRegion(regionId, nativexPin, *dist2Pin);
  return retVal;
}



int vtkKdTree::FindClosestPointInRegion(int regionId, double x, double y, double z, double% dist2)
{
  pin_ptr<double> dist2Pin = &dist2;
  int retVal = vtk::ConvertManagedToNative<::vtkKdTree>(m_instance)->FindClosestPointInRegion(regionId, x, y, z, *dist2Pin);
  return retVal;
}



vtkIdTypeArray^ vtkKdTree::GetPointsInRegion(int regionId)
{
  ::vtkIdTypeArray* retVal = static_cast<::vtkIdTypeArray*>(vtk::ConvertManagedToNative<::vtkKdTree>(m_instance)->GetPointsInRegion(regionId));
  return gcnew vtkIdTypeArray(IntPtr(retVal), false);
}



void vtkKdTree::FreeSearchStructure()
{
  vtk::ConvertManagedToNative<::vtkKdTree>(m_instance)->FreeSearchStructure();
}



void vtkKdTree::GenerateRepresentation(int level, vtkPolyData^ pd)
{
  ::vtkPolyData* pdWrap = vtk::ConvertManagedToNative<::vtkPolyData>(pd->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkKdTree>(m_instance)->GenerateRepresentation(level, pdWrap);
}



void vtkKdTree::GenerateRepresentation(array<int>^ regionList, int len, vtkPolyData^ pd)
{
  pin_ptr<int> regionListPin = &regionList[0];
  int* nativeregionListPin = regionListPin;
  ::vtkPolyData* pdWrap = vtk::ConvertManagedToNative<::vtkPolyData>(pd->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkKdTree>(m_instance)->GenerateRepresentation(nativeregionListPin, len, pdWrap);
}



void vtkKdTree::GenerateRepresentationUsingDataBoundsOn()
{
  vtk::ConvertManagedToNative<::vtkKdTree>(m_instance)->GenerateRepresentationUsingDataBoundsOn();
}



void vtkKdTree::GenerateRepresentationUsingDataBoundsOff()
{
  vtk::ConvertManagedToNative<::vtkKdTree>(m_instance)->GenerateRepresentationUsingDataBoundsOff();
}



void vtkKdTree::SetGenerateRepresentationUsingDataBounds(int arg0)
{
  vtk::ConvertManagedToNative<::vtkKdTree>(m_instance)->SetGenerateRepresentationUsingDataBounds(arg0);
}



int vtkKdTree::GetGenerateRepresentationUsingDataBounds()
{
  int retVal = vtk::ConvertManagedToNative<::vtkKdTree>(m_instance)->GetGenerateRepresentationUsingDataBounds();
  return retVal;
}



int vtkKdTree::NewGeometry()
{
  int retVal = vtk::ConvertManagedToNative<::vtkKdTree>(m_instance)->NewGeometry();
  return retVal;
}



vtkKdNode^ vtkKdTree::CopyTree(vtkKdNode^ kd)
{
  ::vtkKdNode* kdWrap = vtk::ConvertManagedToNative<::vtkKdNode>(kd->GetNativePointer());
  ::vtkKdNode* retVal = static_cast<::vtkKdNode*>(::vtkKdTree::CopyTree(kdWrap));
  return gcnew vtkKdNode(IntPtr(retVal), false);
}



  vtkKdTree::vtkKdTree(System::IntPtr native, bool bConst) : vtkLocator(native, bConst) {}



  vtkKdTree::vtkKdTree(bool donothing) : vtkLocator(donothing) {}



  vtkKdTree::vtkKdTree() : vtkLocator(false) {
  this->SetNativePointer(IntPtr(::vtkKdTree::New()));
}



  vtkKdTree::~vtkKdTree() { }





} // end namespace vtkGraphics
