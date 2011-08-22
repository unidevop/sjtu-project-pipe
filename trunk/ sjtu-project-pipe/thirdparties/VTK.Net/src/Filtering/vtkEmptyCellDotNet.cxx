

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkEmptyCellDotNet.h"
#include "vtkCellArrayDotNet.h"
#include "vtkCellDataDotNet.h"
#include "vtkPointDataDotNet.h"
#include "vtkPointLocatorDotNet.h"

// native includes
#include "strstream"
#include "vtkEmptyCell.h"
#include "vtkCellArray.h"
#include "vtkCellData.h"
#include "vtkDataArray.h"
#include "vtkIdList.h"
#include "vtkObject.h"
#include "vtkPointData.h"
#include "vtkPointLocator.h"
#include "vtkPoints.h"

using namespace System;

namespace vtk {

System::String^ vtkEmptyCell::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkEmptyCell>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkEmptyCell::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkEmptyCell>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkEmptyCell^ vtkEmptyCell::NewInstance()
{
  ::vtkEmptyCell* retVal = static_cast<::vtkEmptyCell*>(vtk::ConvertManagedToNative<::vtkEmptyCell>(m_instance)->NewInstance());
  return gcnew vtkEmptyCell(IntPtr(retVal), false);
}



vtkEmptyCell^ vtkEmptyCell::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkEmptyCell* retVal = static_cast<::vtkEmptyCell*>(::vtkEmptyCell::SafeDownCast(oWrap));
  return gcnew vtkEmptyCell(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkEmptyCell::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkEmptyCell>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkEmptyCell::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkEmptyCell>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




int vtkEmptyCell::GetCellType()
{
  int retVal = vtk::ConvertManagedToNative<::vtkEmptyCell>(m_instance)->GetCellType();
  return retVal;
}



int vtkEmptyCell::GetCellDimension()
{
  int retVal = vtk::ConvertManagedToNative<::vtkEmptyCell>(m_instance)->GetCellDimension();
  return retVal;
}



int vtkEmptyCell::GetNumberOfEdges()
{
  int retVal = vtk::ConvertManagedToNative<::vtkEmptyCell>(m_instance)->GetNumberOfEdges();
  return retVal;
}



int vtkEmptyCell::GetNumberOfFaces()
{
  int retVal = vtk::ConvertManagedToNative<::vtkEmptyCell>(m_instance)->GetNumberOfFaces();
  return retVal;
}



vtkCell^ vtkEmptyCell::GetEdge(int arg0)
{
  ::vtkCell* retVal = static_cast<::vtkCell*>(vtk::ConvertManagedToNative<::vtkEmptyCell>(m_instance)->GetEdge(arg0));
  return gcnew vtkCell(IntPtr(retVal), false);
}



vtkCell^ vtkEmptyCell::GetFace(int arg0)
{
  ::vtkCell* retVal = static_cast<::vtkCell*>(vtk::ConvertManagedToNative<::vtkEmptyCell>(m_instance)->GetFace(arg0));
  return gcnew vtkCell(IntPtr(retVal), false);
}



int vtkEmptyCell::CellBoundary(int subId, array<double>^ pcoords, vtkIdList^ pts)
{
  pin_ptr<double> pcoordsPin = &pcoords[0];
  double* nativepcoordsPin = pcoordsPin;
  ::vtkIdList* ptsWrap = vtk::ConvertManagedToNative<::vtkIdList>(pts->GetNativePointer());
  int retVal = vtk::ConvertManagedToNative<::vtkEmptyCell>(m_instance)->CellBoundary(subId, nativepcoordsPin, ptsWrap);
  return retVal;
}



void vtkEmptyCell::Contour(double value, vtkDataArray^ cellScalars, vtkPointLocator^ locator, vtkCellArray^ verts1, vtkCellArray^ lines, vtkCellArray^ verts2, vtkPointData^ inPd, vtkPointData^ outPd, vtkCellData^ inCd, int cellId, vtkCellData^ outCd)
{
  ::vtkDataArray* cellScalarsWrap = vtk::ConvertManagedToNative<::vtkDataArray>(cellScalars->GetNativePointer());
  ::vtkPointLocator* locatorWrap = vtk::ConvertManagedToNative<::vtkPointLocator>(locator->GetNativePointer());
  ::vtkCellArray* verts1Wrap = vtk::ConvertManagedToNative<::vtkCellArray>(verts1->GetNativePointer());
  ::vtkCellArray* linesWrap = vtk::ConvertManagedToNative<::vtkCellArray>(lines->GetNativePointer());
  ::vtkCellArray* verts2Wrap = vtk::ConvertManagedToNative<::vtkCellArray>(verts2->GetNativePointer());
  ::vtkPointData* inPdWrap = vtk::ConvertManagedToNative<::vtkPointData>(inPd->GetNativePointer());
  ::vtkPointData* outPdWrap = vtk::ConvertManagedToNative<::vtkPointData>(outPd->GetNativePointer());
  ::vtkCellData* inCdWrap = vtk::ConvertManagedToNative<::vtkCellData>(inCd->GetNativePointer());
  ::vtkCellData* outCdWrap = vtk::ConvertManagedToNative<::vtkCellData>(outCd->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkEmptyCell>(m_instance)->Contour(value, cellScalarsWrap, locatorWrap, verts1Wrap, linesWrap, verts2Wrap, inPdWrap, outPdWrap, inCdWrap, cellId, outCdWrap);
}



void vtkEmptyCell::Clip(double value, vtkDataArray^ cellScalars, vtkPointLocator^ locator, vtkCellArray^ pts, vtkPointData^ inPd, vtkPointData^ outPd, vtkCellData^ inCd, int cellId, vtkCellData^ outCd, int insideOut)
{
  ::vtkDataArray* cellScalarsWrap = vtk::ConvertManagedToNative<::vtkDataArray>(cellScalars->GetNativePointer());
  ::vtkPointLocator* locatorWrap = vtk::ConvertManagedToNative<::vtkPointLocator>(locator->GetNativePointer());
  ::vtkCellArray* ptsWrap = vtk::ConvertManagedToNative<::vtkCellArray>(pts->GetNativePointer());
  ::vtkPointData* inPdWrap = vtk::ConvertManagedToNative<::vtkPointData>(inPd->GetNativePointer());
  ::vtkPointData* outPdWrap = vtk::ConvertManagedToNative<::vtkPointData>(outPd->GetNativePointer());
  ::vtkCellData* inCdWrap = vtk::ConvertManagedToNative<::vtkCellData>(inCd->GetNativePointer());
  ::vtkCellData* outCdWrap = vtk::ConvertManagedToNative<::vtkCellData>(outCd->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkEmptyCell>(m_instance)->Clip(value, cellScalarsWrap, locatorWrap, ptsWrap, inPdWrap, outPdWrap, inCdWrap, cellId, outCdWrap, insideOut);
}



int vtkEmptyCell::EvaluatePosition(array<double>^ x, array<double>^ closestPoint, int% subId, array<double>^ pcoords, double% dist2, array<double>^ weights)
{
  pin_ptr<double> xPin = &x[0];
  double* nativexPin = xPin;
  pin_ptr<double> closestPointPin = &closestPoint[0];
  double* nativeclosestPointPin = closestPointPin;
  pin_ptr<int> subIdPin = &subId;
  pin_ptr<double> pcoordsPin = &pcoords[0];
  double* nativepcoordsPin = pcoordsPin;
  pin_ptr<double> dist2Pin = &dist2;
  pin_ptr<double> weightsPin = &weights[0];
  double* nativeweightsPin = weightsPin;
  int retVal = vtk::ConvertManagedToNative<::vtkEmptyCell>(m_instance)->EvaluatePosition(nativexPin, nativeclosestPointPin, *subIdPin, nativepcoordsPin, *dist2Pin, nativeweightsPin);
  return retVal;
}



void vtkEmptyCell::EvaluateLocation(int% subId, array<double>^ pcoords, array<double>^ x, array<double>^ weights)
{
  pin_ptr<int> subIdPin = &subId;
  pin_ptr<double> pcoordsPin = &pcoords[0];
  double* nativepcoordsPin = pcoordsPin;
  pin_ptr<double> xPin = &x[0];
  double* nativexPin = xPin;
  pin_ptr<double> weightsPin = &weights[0];
  double* nativeweightsPin = weightsPin;
  vtk::ConvertManagedToNative<::vtkEmptyCell>(m_instance)->EvaluateLocation(*subIdPin, nativepcoordsPin, nativexPin, nativeweightsPin);
}



int vtkEmptyCell::IntersectWithLine(array<double>^ p1, array<double>^ p2, double tol, double% t, array<double>^ x, array<double>^ pcoords, int% subId)
{
  pin_ptr<double> p1Pin = &p1[0];
  double* nativep1Pin = p1Pin;
  pin_ptr<double> p2Pin = &p2[0];
  double* nativep2Pin = p2Pin;
  pin_ptr<double> tPin = &t;
  pin_ptr<double> xPin = &x[0];
  double* nativexPin = xPin;
  pin_ptr<double> pcoordsPin = &pcoords[0];
  double* nativepcoordsPin = pcoordsPin;
  pin_ptr<int> subIdPin = &subId;
  int retVal = vtk::ConvertManagedToNative<::vtkEmptyCell>(m_instance)->IntersectWithLine(nativep1Pin, nativep2Pin, tol, *tPin, nativexPin, nativepcoordsPin, *subIdPin);
  return retVal;
}



int vtkEmptyCell::Triangulate(int index, vtkIdList^ ptIds, vtkPoints^ pts)
{
  ::vtkIdList* ptIdsWrap = vtk::ConvertManagedToNative<::vtkIdList>(ptIds->GetNativePointer());
  ::vtkPoints* ptsWrap = vtk::ConvertManagedToNative<::vtkPoints>(pts->GetNativePointer());
  int retVal = vtk::ConvertManagedToNative<::vtkEmptyCell>(m_instance)->Triangulate(index, ptIdsWrap, ptsWrap);
  return retVal;
}



void vtkEmptyCell::Derivatives(int subId, array<double>^ pcoords, array<double>^ values, int dim, array<double>^ derivs)
{
  pin_ptr<double> pcoordsPin = &pcoords[0];
  double* nativepcoordsPin = pcoordsPin;
  pin_ptr<double> valuesPin = &values[0];
  double* nativevaluesPin = valuesPin;
  pin_ptr<double> derivsPin = &derivs[0];
  double* nativederivsPin = derivsPin;
  vtk::ConvertManagedToNative<::vtkEmptyCell>(m_instance)->Derivatives(subId, nativepcoordsPin, nativevaluesPin, dim, nativederivsPin);
}



  vtkEmptyCell::vtkEmptyCell(System::IntPtr native, bool bConst) : vtkCell(native, bConst) {}



  vtkEmptyCell::vtkEmptyCell(bool donothing) : vtkCell(donothing) {}



  vtkEmptyCell::vtkEmptyCell() : vtkCell(false) {
  this->SetNativePointer(IntPtr(::vtkEmptyCell::New()));
}



  vtkEmptyCell::~vtkEmptyCell() { }





} // end namespace vtkFiltering
