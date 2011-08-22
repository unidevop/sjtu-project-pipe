

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkGenericCellDotNet.h"
#include "vtkCellArrayDotNet.h"
#include "vtkCellDataDotNet.h"
#include "vtkPointDataDotNet.h"
#include "vtkPointLocatorDotNet.h"

// native includes
#include "strstream"
#include "vtkGenericCell.h"
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

System::String^ vtkGenericCell::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkGenericCell>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkGenericCell::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkGenericCell>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkGenericCell^ vtkGenericCell::NewInstance()
{
  ::vtkGenericCell* retVal = static_cast<::vtkGenericCell*>(vtk::ConvertManagedToNative<::vtkGenericCell>(m_instance)->NewInstance());
  return gcnew vtkGenericCell(IntPtr(retVal), false);
}



vtkGenericCell^ vtkGenericCell::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkGenericCell* retVal = static_cast<::vtkGenericCell*>(::vtkGenericCell::SafeDownCast(oWrap));
  return gcnew vtkGenericCell(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkGenericCell::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkGenericCell>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkGenericCell::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkGenericCell>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkGenericCell::ShallowCopy(vtkCell^ c)
{
  ::vtkCell* cWrap = vtk::ConvertManagedToNative<::vtkCell>(c->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkGenericCell>(m_instance)->ShallowCopy(cWrap);
}



void vtkGenericCell::DeepCopy(vtkCell^ c)
{
  ::vtkCell* cWrap = vtk::ConvertManagedToNative<::vtkCell>(c->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkGenericCell>(m_instance)->DeepCopy(cWrap);
}



int vtkGenericCell::GetCellType()
{
  int retVal = vtk::ConvertManagedToNative<::vtkGenericCell>(m_instance)->GetCellType();
  return retVal;
}



int vtkGenericCell::GetCellDimension()
{
  int retVal = vtk::ConvertManagedToNative<::vtkGenericCell>(m_instance)->GetCellDimension();
  return retVal;
}



int vtkGenericCell::IsLinear()
{
  int retVal = vtk::ConvertManagedToNative<::vtkGenericCell>(m_instance)->IsLinear();
  return retVal;
}



int vtkGenericCell::RequiresInitialization()
{
  int retVal = vtk::ConvertManagedToNative<::vtkGenericCell>(m_instance)->RequiresInitialization();
  return retVal;
}



void vtkGenericCell::Initialize()
{
  vtk::ConvertManagedToNative<::vtkGenericCell>(m_instance)->Initialize();
}



int vtkGenericCell::GetNumberOfEdges()
{
  int retVal = vtk::ConvertManagedToNative<::vtkGenericCell>(m_instance)->GetNumberOfEdges();
  return retVal;
}



int vtkGenericCell::GetNumberOfFaces()
{
  int retVal = vtk::ConvertManagedToNative<::vtkGenericCell>(m_instance)->GetNumberOfFaces();
  return retVal;
}



vtkCell^ vtkGenericCell::GetEdge(int edgeId)
{
  ::vtkCell* retVal = static_cast<::vtkCell*>(vtk::ConvertManagedToNative<::vtkGenericCell>(m_instance)->GetEdge(edgeId));
  return gcnew vtkCell(IntPtr(retVal), false);
}



vtkCell^ vtkGenericCell::GetFace(int faceId)
{
  ::vtkCell* retVal = static_cast<::vtkCell*>(vtk::ConvertManagedToNative<::vtkGenericCell>(m_instance)->GetFace(faceId));
  return gcnew vtkCell(IntPtr(retVal), false);
}



int vtkGenericCell::CellBoundary(int subId, array<double>^ pcoords, vtkIdList^ pts)
{
  pin_ptr<double> pcoordsPin = &pcoords[0];
  double* nativepcoordsPin = pcoordsPin;
  ::vtkIdList* ptsWrap = vtk::ConvertManagedToNative<::vtkIdList>(pts->GetNativePointer());
  int retVal = vtk::ConvertManagedToNative<::vtkGenericCell>(m_instance)->CellBoundary(subId, nativepcoordsPin, ptsWrap);
  return retVal;
}



int vtkGenericCell::EvaluatePosition(array<double>^ x, array<double>^ closestPoint, int% subId, array<double>^ pcoords, double% dist2, array<double>^ weights)
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
  int retVal = vtk::ConvertManagedToNative<::vtkGenericCell>(m_instance)->EvaluatePosition(nativexPin, nativeclosestPointPin, *subIdPin, nativepcoordsPin, *dist2Pin, nativeweightsPin);
  return retVal;
}



void vtkGenericCell::EvaluateLocation(int% subId, array<double>^ pcoords, array<double>^ x, array<double>^ weights)
{
  pin_ptr<int> subIdPin = &subId;
  pin_ptr<double> pcoordsPin = &pcoords[0];
  double* nativepcoordsPin = pcoordsPin;
  pin_ptr<double> xPin = &x[0];
  double* nativexPin = xPin;
  pin_ptr<double> weightsPin = &weights[0];
  double* nativeweightsPin = weightsPin;
  vtk::ConvertManagedToNative<::vtkGenericCell>(m_instance)->EvaluateLocation(*subIdPin, nativepcoordsPin, nativexPin, nativeweightsPin);
}



void vtkGenericCell::Contour(double value, vtkDataArray^ cellScalars, vtkPointLocator^ locator, vtkCellArray^ verts, vtkCellArray^ lines, vtkCellArray^ polys, vtkPointData^ inPd, vtkPointData^ outPd, vtkCellData^ inCd, int cellId, vtkCellData^ outCd)
{
  ::vtkDataArray* cellScalarsWrap = vtk::ConvertManagedToNative<::vtkDataArray>(cellScalars->GetNativePointer());
  ::vtkPointLocator* locatorWrap = vtk::ConvertManagedToNative<::vtkPointLocator>(locator->GetNativePointer());
  ::vtkCellArray* vertsWrap = vtk::ConvertManagedToNative<::vtkCellArray>(verts->GetNativePointer());
  ::vtkCellArray* linesWrap = vtk::ConvertManagedToNative<::vtkCellArray>(lines->GetNativePointer());
  ::vtkCellArray* polysWrap = vtk::ConvertManagedToNative<::vtkCellArray>(polys->GetNativePointer());
  ::vtkPointData* inPdWrap = vtk::ConvertManagedToNative<::vtkPointData>(inPd->GetNativePointer());
  ::vtkPointData* outPdWrap = vtk::ConvertManagedToNative<::vtkPointData>(outPd->GetNativePointer());
  ::vtkCellData* inCdWrap = vtk::ConvertManagedToNative<::vtkCellData>(inCd->GetNativePointer());
  ::vtkCellData* outCdWrap = vtk::ConvertManagedToNative<::vtkCellData>(outCd->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkGenericCell>(m_instance)->Contour(value, cellScalarsWrap, locatorWrap, vertsWrap, linesWrap, polysWrap, inPdWrap, outPdWrap, inCdWrap, cellId, outCdWrap);
}



void vtkGenericCell::Clip(double value, vtkDataArray^ cellScalars, vtkPointLocator^ locator, vtkCellArray^ connectivity, vtkPointData^ inPd, vtkPointData^ outPd, vtkCellData^ inCd, int cellId, vtkCellData^ outCd, int insideOut)
{
  ::vtkDataArray* cellScalarsWrap = vtk::ConvertManagedToNative<::vtkDataArray>(cellScalars->GetNativePointer());
  ::vtkPointLocator* locatorWrap = vtk::ConvertManagedToNative<::vtkPointLocator>(locator->GetNativePointer());
  ::vtkCellArray* connectivityWrap = vtk::ConvertManagedToNative<::vtkCellArray>(connectivity->GetNativePointer());
  ::vtkPointData* inPdWrap = vtk::ConvertManagedToNative<::vtkPointData>(inPd->GetNativePointer());
  ::vtkPointData* outPdWrap = vtk::ConvertManagedToNative<::vtkPointData>(outPd->GetNativePointer());
  ::vtkCellData* inCdWrap = vtk::ConvertManagedToNative<::vtkCellData>(inCd->GetNativePointer());
  ::vtkCellData* outCdWrap = vtk::ConvertManagedToNative<::vtkCellData>(outCd->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkGenericCell>(m_instance)->Clip(value, cellScalarsWrap, locatorWrap, connectivityWrap, inPdWrap, outPdWrap, inCdWrap, cellId, outCdWrap, insideOut);
}



int vtkGenericCell::IntersectWithLine(array<double>^ p1, array<double>^ p2, double tol, double% t, array<double>^ x, array<double>^ pcoords, int% subId)
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
  int retVal = vtk::ConvertManagedToNative<::vtkGenericCell>(m_instance)->IntersectWithLine(nativep1Pin, nativep2Pin, tol, *tPin, nativexPin, nativepcoordsPin, *subIdPin);
  return retVal;
}



int vtkGenericCell::Triangulate(int index, vtkIdList^ ptIds, vtkPoints^ pts)
{
  ::vtkIdList* ptIdsWrap = vtk::ConvertManagedToNative<::vtkIdList>(ptIds->GetNativePointer());
  ::vtkPoints* ptsWrap = vtk::ConvertManagedToNative<::vtkPoints>(pts->GetNativePointer());
  int retVal = vtk::ConvertManagedToNative<::vtkGenericCell>(m_instance)->Triangulate(index, ptIdsWrap, ptsWrap);
  return retVal;
}



void vtkGenericCell::Derivatives(int subId, array<double>^ pcoords, array<double>^ values, int dim, array<double>^ derivs)
{
  pin_ptr<double> pcoordsPin = &pcoords[0];
  double* nativepcoordsPin = pcoordsPin;
  pin_ptr<double> valuesPin = &values[0];
  double* nativevaluesPin = valuesPin;
  pin_ptr<double> derivsPin = &derivs[0];
  double* nativederivsPin = derivsPin;
  vtk::ConvertManagedToNative<::vtkGenericCell>(m_instance)->Derivatives(subId, nativepcoordsPin, nativevaluesPin, dim, nativederivsPin);
}



int vtkGenericCell::GetParametricCenter(array<double>^ pcoords)
{
  pin_ptr<double> pcoordsPin = &pcoords[0];
  double* nativepcoordsPin = pcoordsPin;
  int retVal = vtk::ConvertManagedToNative<::vtkGenericCell>(m_instance)->GetParametricCenter(nativepcoordsPin);
  return retVal;
}



int vtkGenericCell::IsPrimaryCell()
{
  int retVal = vtk::ConvertManagedToNative<::vtkGenericCell>(m_instance)->IsPrimaryCell();
  return retVal;
}



void vtkGenericCell::SetCellType(int cellType)
{
  vtk::ConvertManagedToNative<::vtkGenericCell>(m_instance)->SetCellType(cellType);
}



void vtkGenericCell::SetCellTypeToEmptyCell()
{
  vtk::ConvertManagedToNative<::vtkGenericCell>(m_instance)->SetCellTypeToEmptyCell();
}



void vtkGenericCell::SetCellTypeToVertex()
{
  vtk::ConvertManagedToNative<::vtkGenericCell>(m_instance)->SetCellTypeToVertex();
}



void vtkGenericCell::SetCellTypeToPolyVertex()
{
  vtk::ConvertManagedToNative<::vtkGenericCell>(m_instance)->SetCellTypeToPolyVertex();
}



void vtkGenericCell::SetCellTypeToLine()
{
  vtk::ConvertManagedToNative<::vtkGenericCell>(m_instance)->SetCellTypeToLine();
}



void vtkGenericCell::SetCellTypeToPolyLine()
{
  vtk::ConvertManagedToNative<::vtkGenericCell>(m_instance)->SetCellTypeToPolyLine();
}



void vtkGenericCell::SetCellTypeToTriangle()
{
  vtk::ConvertManagedToNative<::vtkGenericCell>(m_instance)->SetCellTypeToTriangle();
}



void vtkGenericCell::SetCellTypeToTriangleStrip()
{
  vtk::ConvertManagedToNative<::vtkGenericCell>(m_instance)->SetCellTypeToTriangleStrip();
}



void vtkGenericCell::SetCellTypeToPolygon()
{
  vtk::ConvertManagedToNative<::vtkGenericCell>(m_instance)->SetCellTypeToPolygon();
}



void vtkGenericCell::SetCellTypeToPixel()
{
  vtk::ConvertManagedToNative<::vtkGenericCell>(m_instance)->SetCellTypeToPixel();
}



void vtkGenericCell::SetCellTypeToQuad()
{
  vtk::ConvertManagedToNative<::vtkGenericCell>(m_instance)->SetCellTypeToQuad();
}



void vtkGenericCell::SetCellTypeToTetra()
{
  vtk::ConvertManagedToNative<::vtkGenericCell>(m_instance)->SetCellTypeToTetra();
}



void vtkGenericCell::SetCellTypeToVoxel()
{
  vtk::ConvertManagedToNative<::vtkGenericCell>(m_instance)->SetCellTypeToVoxel();
}



void vtkGenericCell::SetCellTypeToHexahedron()
{
  vtk::ConvertManagedToNative<::vtkGenericCell>(m_instance)->SetCellTypeToHexahedron();
}



void vtkGenericCell::SetCellTypeToWedge()
{
  vtk::ConvertManagedToNative<::vtkGenericCell>(m_instance)->SetCellTypeToWedge();
}



void vtkGenericCell::SetCellTypeToPyramid()
{
  vtk::ConvertManagedToNative<::vtkGenericCell>(m_instance)->SetCellTypeToPyramid();
}



void vtkGenericCell::SetCellTypeToPentagonalPrism()
{
  vtk::ConvertManagedToNative<::vtkGenericCell>(m_instance)->SetCellTypeToPentagonalPrism();
}



void vtkGenericCell::SetCellTypeToHexagonalPrism()
{
  vtk::ConvertManagedToNative<::vtkGenericCell>(m_instance)->SetCellTypeToHexagonalPrism();
}



void vtkGenericCell::SetCellTypeToConvexPointSet()
{
  vtk::ConvertManagedToNative<::vtkGenericCell>(m_instance)->SetCellTypeToConvexPointSet();
}



void vtkGenericCell::SetCellTypeToQuadraticEdge()
{
  vtk::ConvertManagedToNative<::vtkGenericCell>(m_instance)->SetCellTypeToQuadraticEdge();
}



void vtkGenericCell::SetCellTypeToQuadraticTriangle()
{
  vtk::ConvertManagedToNative<::vtkGenericCell>(m_instance)->SetCellTypeToQuadraticTriangle();
}



void vtkGenericCell::SetCellTypeToQuadraticQuad()
{
  vtk::ConvertManagedToNative<::vtkGenericCell>(m_instance)->SetCellTypeToQuadraticQuad();
}



void vtkGenericCell::SetCellTypeToQuadraticTetra()
{
  vtk::ConvertManagedToNative<::vtkGenericCell>(m_instance)->SetCellTypeToQuadraticTetra();
}



void vtkGenericCell::SetCellTypeToQuadraticHexahedron()
{
  vtk::ConvertManagedToNative<::vtkGenericCell>(m_instance)->SetCellTypeToQuadraticHexahedron();
}



void vtkGenericCell::SetCellTypeToQuadraticWedge()
{
  vtk::ConvertManagedToNative<::vtkGenericCell>(m_instance)->SetCellTypeToQuadraticWedge();
}



void vtkGenericCell::SetCellTypeToQuadraticPyramid()
{
  vtk::ConvertManagedToNative<::vtkGenericCell>(m_instance)->SetCellTypeToQuadraticPyramid();
}



  vtkGenericCell::vtkGenericCell(System::IntPtr native, bool bConst) : vtkCell(native, bConst) {}



  vtkGenericCell::vtkGenericCell(bool donothing) : vtkCell(donothing) {}



  vtkGenericCell::vtkGenericCell() : vtkCell(false) {
  this->SetNativePointer(IntPtr(::vtkGenericCell::New()));
}



  vtkGenericCell::~vtkGenericCell() { }





} // end namespace vtkFiltering
