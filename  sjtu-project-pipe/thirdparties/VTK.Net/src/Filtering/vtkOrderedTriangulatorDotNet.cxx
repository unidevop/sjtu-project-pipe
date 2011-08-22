

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkOrderedTriangulatorDotNet.h"
#include "vtkCellArrayDotNet.h"
#include "vtkCellDataDotNet.h"
#include "vtkPointDataDotNet.h"
#include "vtkPointLocatorDotNet.h"
#include "vtkTetraDotNet.h"
#include "vtkUnstructuredGridDotNet.h"

// native includes
#include "strstream"
#include "vtkOrderedTriangulator.h"
#include "vtkCellArray.h"
#include "vtkCellData.h"
#include "vtkDataArray.h"
#include "vtkDoubleArray.h"
#include "vtkIdList.h"
#include "vtkPointData.h"
#include "vtkPointLocator.h"
#include "vtkPoints.h"
#include "vtkTetra.h"
#include "vtkUnstructuredGrid.h"

using namespace System;

namespace vtk {

System::String^ vtkOrderedTriangulator::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkOrderedTriangulator>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkOrderedTriangulator::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkOrderedTriangulator>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkOrderedTriangulator^ vtkOrderedTriangulator::NewInstance()
{
  ::vtkOrderedTriangulator* retVal = static_cast<::vtkOrderedTriangulator*>(vtk::ConvertManagedToNative<::vtkOrderedTriangulator>(m_instance)->NewInstance());
  return gcnew vtkOrderedTriangulator(IntPtr(retVal), false);
}



vtkOrderedTriangulator^ vtkOrderedTriangulator::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkOrderedTriangulator* retVal = static_cast<::vtkOrderedTriangulator*>(::vtkOrderedTriangulator::SafeDownCast(oWrap));
  return gcnew vtkOrderedTriangulator(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkOrderedTriangulator::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkOrderedTriangulator>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkOrderedTriangulator::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkOrderedTriangulator>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkOrderedTriangulator::InitTriangulation(double xmin, double xmax, double ymin, double ymax, double zmin, double zmax, int numPts)
{
  vtk::ConvertManagedToNative<::vtkOrderedTriangulator>(m_instance)->InitTriangulation(xmin, xmax, ymin, ymax, zmin, zmax, numPts);
}



void vtkOrderedTriangulator::InitTriangulation(array<double>^ bounds, int numPts)
{
  pin_ptr<double> boundsPin = &bounds[0];
  double* nativeboundsPin = boundsPin;
  vtk::ConvertManagedToNative<::vtkOrderedTriangulator>(m_instance)->InitTriangulation(nativeboundsPin, numPts);
}



int vtkOrderedTriangulator::InsertPoint(int id, array<double>^ x, array<double>^ p, int type)
{
  pin_ptr<double> xPin = &x[0];
  double* nativexPin = xPin;
  pin_ptr<double> pPin = &p[0];
  double* nativepPin = pPin;
  int retVal = vtk::ConvertManagedToNative<::vtkOrderedTriangulator>(m_instance)->InsertPoint(id, nativexPin, nativepPin, type);
  return retVal;
}



int vtkOrderedTriangulator::InsertPoint(int id, int sortid, array<double>^ x, array<double>^ p, int type)
{
  pin_ptr<double> xPin = &x[0];
  double* nativexPin = xPin;
  pin_ptr<double> pPin = &p[0];
  double* nativepPin = pPin;
  int retVal = vtk::ConvertManagedToNative<::vtkOrderedTriangulator>(m_instance)->InsertPoint(id, sortid, nativexPin, nativepPin, type);
  return retVal;
}



int vtkOrderedTriangulator::InsertPoint(int id, int sortid, int sortid2, array<double>^ x, array<double>^ p, int type)
{
  pin_ptr<double> xPin = &x[0];
  double* nativexPin = xPin;
  pin_ptr<double> pPin = &p[0];
  double* nativepPin = pPin;
  int retVal = vtk::ConvertManagedToNative<::vtkOrderedTriangulator>(m_instance)->InsertPoint(id, sortid, sortid2, nativexPin, nativepPin, type);
  return retVal;
}



void vtkOrderedTriangulator::Triangulate()
{
  vtk::ConvertManagedToNative<::vtkOrderedTriangulator>(m_instance)->Triangulate();
}



void vtkOrderedTriangulator::TemplateTriangulate(int cellType, int numPts, int numEdges)
{
  vtk::ConvertManagedToNative<::vtkOrderedTriangulator>(m_instance)->TemplateTriangulate(cellType, numPts, numEdges);
}



void vtkOrderedTriangulator::UpdatePointType(int internalId, int type)
{
  vtk::ConvertManagedToNative<::vtkOrderedTriangulator>(m_instance)->UpdatePointType(internalId, type);
}



int vtkOrderedTriangulator::GetPointId(int internalId)
{
  int retVal = vtk::ConvertManagedToNative<::vtkOrderedTriangulator>(m_instance)->GetPointId(internalId);
  return retVal;
}



int vtkOrderedTriangulator::GetNumberOfPoints()
{
  int retVal = vtk::ConvertManagedToNative<::vtkOrderedTriangulator>(m_instance)->GetNumberOfPoints();
  return retVal;
}



void vtkOrderedTriangulator::SetUseTemplates(int arg0)
{
  vtk::ConvertManagedToNative<::vtkOrderedTriangulator>(m_instance)->SetUseTemplates(arg0);
}



int vtkOrderedTriangulator::GetUseTemplates()
{
  int retVal = vtk::ConvertManagedToNative<::vtkOrderedTriangulator>(m_instance)->GetUseTemplates();
  return retVal;
}



void vtkOrderedTriangulator::UseTemplatesOn()
{
  vtk::ConvertManagedToNative<::vtkOrderedTriangulator>(m_instance)->UseTemplatesOn();
}



void vtkOrderedTriangulator::UseTemplatesOff()
{
  vtk::ConvertManagedToNative<::vtkOrderedTriangulator>(m_instance)->UseTemplatesOff();
}



void vtkOrderedTriangulator::SetPreSorted(int arg0)
{
  vtk::ConvertManagedToNative<::vtkOrderedTriangulator>(m_instance)->SetPreSorted(arg0);
}



int vtkOrderedTriangulator::GetPreSorted()
{
  int retVal = vtk::ConvertManagedToNative<::vtkOrderedTriangulator>(m_instance)->GetPreSorted();
  return retVal;
}



void vtkOrderedTriangulator::PreSortedOn()
{
  vtk::ConvertManagedToNative<::vtkOrderedTriangulator>(m_instance)->PreSortedOn();
}



void vtkOrderedTriangulator::PreSortedOff()
{
  vtk::ConvertManagedToNative<::vtkOrderedTriangulator>(m_instance)->PreSortedOff();
}



void vtkOrderedTriangulator::SetUseTwoSortIds(int arg0)
{
  vtk::ConvertManagedToNative<::vtkOrderedTriangulator>(m_instance)->SetUseTwoSortIds(arg0);
}



int vtkOrderedTriangulator::GetUseTwoSortIds()
{
  int retVal = vtk::ConvertManagedToNative<::vtkOrderedTriangulator>(m_instance)->GetUseTwoSortIds();
  return retVal;
}



void vtkOrderedTriangulator::UseTwoSortIdsOn()
{
  vtk::ConvertManagedToNative<::vtkOrderedTriangulator>(m_instance)->UseTwoSortIdsOn();
}



void vtkOrderedTriangulator::UseTwoSortIdsOff()
{
  vtk::ConvertManagedToNative<::vtkOrderedTriangulator>(m_instance)->UseTwoSortIdsOff();
}



int vtkOrderedTriangulator::GetTetras(int classification, vtkUnstructuredGrid^ ugrid)
{
  ::vtkUnstructuredGrid* ugridWrap = vtk::ConvertManagedToNative<::vtkUnstructuredGrid>(ugrid->GetNativePointer());
  int retVal = vtk::ConvertManagedToNative<::vtkOrderedTriangulator>(m_instance)->GetTetras(classification, ugridWrap);
  return retVal;
}



int vtkOrderedTriangulator::AddTetras(int classification, vtkUnstructuredGrid^ ugrid)
{
  ::vtkUnstructuredGrid* ugridWrap = vtk::ConvertManagedToNative<::vtkUnstructuredGrid>(ugrid->GetNativePointer());
  int retVal = vtk::ConvertManagedToNative<::vtkOrderedTriangulator>(m_instance)->AddTetras(classification, ugridWrap);
  return retVal;
}



int vtkOrderedTriangulator::AddTetras(int classification, vtkCellArray^ connectivity)
{
  ::vtkCellArray* connectivityWrap = vtk::ConvertManagedToNative<::vtkCellArray>(connectivity->GetNativePointer());
  int retVal = vtk::ConvertManagedToNative<::vtkOrderedTriangulator>(m_instance)->AddTetras(classification, connectivityWrap);
  return retVal;
}



int vtkOrderedTriangulator::AddTetras(int classification, vtkPointLocator^ locator, vtkCellArray^ outConnectivity, vtkPointData^ inPD, vtkPointData^ outPD, vtkCellData^ inCD, int cellId, vtkCellData^ outCD)
{
  ::vtkPointLocator* locatorWrap = vtk::ConvertManagedToNative<::vtkPointLocator>(locator->GetNativePointer());
  ::vtkCellArray* outConnectivityWrap = vtk::ConvertManagedToNative<::vtkCellArray>(outConnectivity->GetNativePointer());
  ::vtkPointData* inPDWrap = vtk::ConvertManagedToNative<::vtkPointData>(inPD->GetNativePointer());
  ::vtkPointData* outPDWrap = vtk::ConvertManagedToNative<::vtkPointData>(outPD->GetNativePointer());
  ::vtkCellData* inCDWrap = vtk::ConvertManagedToNative<::vtkCellData>(inCD->GetNativePointer());
  ::vtkCellData* outCDWrap = vtk::ConvertManagedToNative<::vtkCellData>(outCD->GetNativePointer());
  int retVal = vtk::ConvertManagedToNative<::vtkOrderedTriangulator>(m_instance)->AddTetras(classification, locatorWrap, outConnectivityWrap, inPDWrap, outPDWrap, inCDWrap, cellId, outCDWrap);
  return retVal;
}



int vtkOrderedTriangulator::AddTetras(int classification, vtkIdList^ ptIds, vtkPoints^ pts)
{
  ::vtkIdList* ptIdsWrap = vtk::ConvertManagedToNative<::vtkIdList>(ptIds->GetNativePointer());
  ::vtkPoints* ptsWrap = vtk::ConvertManagedToNative<::vtkPoints>(pts->GetNativePointer());
  int retVal = vtk::ConvertManagedToNative<::vtkOrderedTriangulator>(m_instance)->AddTetras(classification, ptIdsWrap, ptsWrap);
  return retVal;
}



int vtkOrderedTriangulator::AddTriangles(vtkCellArray^ connectivity)
{
  ::vtkCellArray* connectivityWrap = vtk::ConvertManagedToNative<::vtkCellArray>(connectivity->GetNativePointer());
  int retVal = vtk::ConvertManagedToNative<::vtkOrderedTriangulator>(m_instance)->AddTriangles(connectivityWrap);
  return retVal;
}



int vtkOrderedTriangulator::AddTriangles(int id, vtkCellArray^ connectivity)
{
  ::vtkCellArray* connectivityWrap = vtk::ConvertManagedToNative<::vtkCellArray>(connectivity->GetNativePointer());
  int retVal = vtk::ConvertManagedToNative<::vtkOrderedTriangulator>(m_instance)->AddTriangles(id, connectivityWrap);
  return retVal;
}



void vtkOrderedTriangulator::InitTetraTraversal()
{
  vtk::ConvertManagedToNative<::vtkOrderedTriangulator>(m_instance)->InitTetraTraversal();
}



int vtkOrderedTriangulator::GetNextTetra(int classification, vtkTetra^ tet, vtkDataArray^ cellScalars, vtkDoubleArray^ tetScalars)
{
  ::vtkTetra* tetWrap = vtk::ConvertManagedToNative<::vtkTetra>(tet->GetNativePointer());
  ::vtkDataArray* cellScalarsWrap = vtk::ConvertManagedToNative<::vtkDataArray>(cellScalars->GetNativePointer());
  ::vtkDoubleArray* tetScalarsWrap = vtk::ConvertManagedToNative<::vtkDoubleArray>(tetScalars->GetNativePointer());
  int retVal = vtk::ConvertManagedToNative<::vtkOrderedTriangulator>(m_instance)->GetNextTetra(classification, tetWrap, cellScalarsWrap, tetScalarsWrap);
  return retVal;
}



  vtkOrderedTriangulator::vtkOrderedTriangulator(System::IntPtr native, bool bConst) : vtkObject(native, bConst) {}



  vtkOrderedTriangulator::vtkOrderedTriangulator(bool donothing) : vtkObject(donothing) {}



  vtkOrderedTriangulator::vtkOrderedTriangulator() : vtkObject(false) {
  this->SetNativePointer(IntPtr(::vtkOrderedTriangulator::New()));
}



  vtkOrderedTriangulator::~vtkOrderedTriangulator() { }





} // end namespace vtkFiltering
