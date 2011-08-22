

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkTriangleDotNet.h"
#include "vtkCellArrayDotNet.h"
#include "vtkCellDataDotNet.h"
#include "vtkPointDataDotNet.h"
#include "vtkPointLocatorDotNet.h"

// native includes
#include "strstream"
#include "vtkTriangle.h"
#include "vtkCellArray.h"
#include "vtkCellData.h"
#include "vtkDataArray.h"
#include "vtkIdList.h"
#include "vtkObject.h"
#include "vtkPointData.h"
#include "vtkPointLocator.h"
#include "vtkPoints.h"
#include "vtkQuadric.h"

using namespace System;

namespace vtk {

System::String^ vtkTriangle::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkTriangle>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkTriangle::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkTriangle>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkTriangle^ vtkTriangle::NewInstance()
{
  ::vtkTriangle* retVal = static_cast<::vtkTriangle*>(vtk::ConvertManagedToNative<::vtkTriangle>(m_instance)->NewInstance());
  return gcnew vtkTriangle(IntPtr(retVal), false);
}



vtkTriangle^ vtkTriangle::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkTriangle* retVal = static_cast<::vtkTriangle*>(::vtkTriangle::SafeDownCast(oWrap));
  return gcnew vtkTriangle(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkTriangle::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkTriangle>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkTriangle::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkTriangle>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




vtkCell^ vtkTriangle::GetEdge(int edgeId)
{
  ::vtkCell* retVal = static_cast<::vtkCell*>(vtk::ConvertManagedToNative<::vtkTriangle>(m_instance)->GetEdge(edgeId));
  return gcnew vtkCell(IntPtr(retVal), false);
}



int vtkTriangle::GetCellType()
{
  int retVal = vtk::ConvertManagedToNative<::vtkTriangle>(m_instance)->GetCellType();
  return retVal;
}



int vtkTriangle::GetCellDimension()
{
  int retVal = vtk::ConvertManagedToNative<::vtkTriangle>(m_instance)->GetCellDimension();
  return retVal;
}



int vtkTriangle::GetNumberOfEdges()
{
  int retVal = vtk::ConvertManagedToNative<::vtkTriangle>(m_instance)->GetNumberOfEdges();
  return retVal;
}



int vtkTriangle::GetNumberOfFaces()
{
  int retVal = vtk::ConvertManagedToNative<::vtkTriangle>(m_instance)->GetNumberOfFaces();
  return retVal;
}



vtkCell^ vtkTriangle::GetFace(int arg0)
{
  ::vtkCell* retVal = static_cast<::vtkCell*>(vtk::ConvertManagedToNative<::vtkTriangle>(m_instance)->GetFace(arg0));
  return gcnew vtkCell(IntPtr(retVal), false);
}



int vtkTriangle::CellBoundary(int subId, array<double>^ pcoords, vtkIdList^ pts)
{
  pin_ptr<double> pcoordsPin = &pcoords[0];
  double* nativepcoordsPin = pcoordsPin;
  ::vtkIdList* ptsWrap = vtk::ConvertManagedToNative<::vtkIdList>(pts->GetNativePointer());
  int retVal = vtk::ConvertManagedToNative<::vtkTriangle>(m_instance)->CellBoundary(subId, nativepcoordsPin, ptsWrap);
  return retVal;
}



void vtkTriangle::Contour(double value, vtkDataArray^ cellScalars, vtkPointLocator^ locator, vtkCellArray^ verts, vtkCellArray^ lines, vtkCellArray^ polys, vtkPointData^ inPd, vtkPointData^ outPd, vtkCellData^ inCd, int cellId, vtkCellData^ outCd)
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
  vtk::ConvertManagedToNative<::vtkTriangle>(m_instance)->Contour(value, cellScalarsWrap, locatorWrap, vertsWrap, linesWrap, polysWrap, inPdWrap, outPdWrap, inCdWrap, cellId, outCdWrap);
}



int vtkTriangle::EvaluatePosition(array<double>^ x, array<double>^ closestPoint, int% subId, array<double>^ pcoords, double% dist2, array<double>^ weights)
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
  int retVal = vtk::ConvertManagedToNative<::vtkTriangle>(m_instance)->EvaluatePosition(nativexPin, nativeclosestPointPin, *subIdPin, nativepcoordsPin, *dist2Pin, nativeweightsPin);
  return retVal;
}



void vtkTriangle::EvaluateLocation(int% subId, array<double>^ pcoords, array<double>^ x, array<double>^ weights)
{
  pin_ptr<int> subIdPin = &subId;
  pin_ptr<double> pcoordsPin = &pcoords[0];
  double* nativepcoordsPin = pcoordsPin;
  pin_ptr<double> xPin = &x[0];
  double* nativexPin = xPin;
  pin_ptr<double> weightsPin = &weights[0];
  double* nativeweightsPin = weightsPin;
  vtk::ConvertManagedToNative<::vtkTriangle>(m_instance)->EvaluateLocation(*subIdPin, nativepcoordsPin, nativexPin, nativeweightsPin);
}



int vtkTriangle::Triangulate(int index, vtkIdList^ ptIds, vtkPoints^ pts)
{
  ::vtkIdList* ptIdsWrap = vtk::ConvertManagedToNative<::vtkIdList>(ptIds->GetNativePointer());
  ::vtkPoints* ptsWrap = vtk::ConvertManagedToNative<::vtkPoints>(pts->GetNativePointer());
  int retVal = vtk::ConvertManagedToNative<::vtkTriangle>(m_instance)->Triangulate(index, ptIdsWrap, ptsWrap);
  return retVal;
}



void vtkTriangle::Derivatives(int subId, array<double>^ pcoords, array<double>^ values, int dim, array<double>^ derivs)
{
  pin_ptr<double> pcoordsPin = &pcoords[0];
  double* nativepcoordsPin = pcoordsPin;
  pin_ptr<double> valuesPin = &values[0];
  double* nativevaluesPin = valuesPin;
  pin_ptr<double> derivsPin = &derivs[0];
  double* nativederivsPin = derivsPin;
  vtk::ConvertManagedToNative<::vtkTriangle>(m_instance)->Derivatives(subId, nativepcoordsPin, nativevaluesPin, dim, nativederivsPin);
}



void vtkTriangle::Clip(double value, vtkDataArray^ cellScalars, vtkPointLocator^ locator, vtkCellArray^ polys, vtkPointData^ inPd, vtkPointData^ outPd, vtkCellData^ inCd, int cellId, vtkCellData^ outCd, int insideOut)
{
  ::vtkDataArray* cellScalarsWrap = vtk::ConvertManagedToNative<::vtkDataArray>(cellScalars->GetNativePointer());
  ::vtkPointLocator* locatorWrap = vtk::ConvertManagedToNative<::vtkPointLocator>(locator->GetNativePointer());
  ::vtkCellArray* polysWrap = vtk::ConvertManagedToNative<::vtkCellArray>(polys->GetNativePointer());
  ::vtkPointData* inPdWrap = vtk::ConvertManagedToNative<::vtkPointData>(inPd->GetNativePointer());
  ::vtkPointData* outPdWrap = vtk::ConvertManagedToNative<::vtkPointData>(outPd->GetNativePointer());
  ::vtkCellData* inCdWrap = vtk::ConvertManagedToNative<::vtkCellData>(inCd->GetNativePointer());
  ::vtkCellData* outCdWrap = vtk::ConvertManagedToNative<::vtkCellData>(outCd->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkTriangle>(m_instance)->Clip(value, cellScalarsWrap, locatorWrap, polysWrap, inPdWrap, outPdWrap, inCdWrap, cellId, outCdWrap, insideOut);
}



void vtkTriangle::InterpolationFunctions(array<double>^ pcoords, array<double>^ sf)
{
  pin_ptr<double> pcoordsPin = &pcoords[0];
  double* nativepcoordsPin = pcoordsPin;
  pin_ptr<double> sfPin = &sf[0];
  double* nativesfPin = sfPin;
  ::vtkTriangle::InterpolationFunctions(nativepcoordsPin, nativesfPin);
}



void vtkTriangle::InterpolationDerivs(array<double>^ pcoords, array<double>^ derivs)
{
  pin_ptr<double> pcoordsPin = &pcoords[0];
  double* nativepcoordsPin = pcoordsPin;
  pin_ptr<double> derivsPin = &derivs[0];
  double* nativederivsPin = derivsPin;
  ::vtkTriangle::InterpolationDerivs(nativepcoordsPin, nativederivsPin);
}



int vtkTriangle::IntersectWithLine(array<double>^ p1, array<double>^ p2, double tol, double% t, array<double>^ x, array<double>^ pcoords, int% subId)
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
  int retVal = vtk::ConvertManagedToNative<::vtkTriangle>(m_instance)->IntersectWithLine(nativep1Pin, nativep2Pin, tol, *tPin, nativexPin, nativepcoordsPin, *subIdPin);
  return retVal;
}



int vtkTriangle::GetParametricCenter(array<double>^ pcoords)
{
  pin_ptr<double> pcoordsPin = &pcoords[0];
  double* nativepcoordsPin = pcoordsPin;
  int retVal = vtk::ConvertManagedToNative<::vtkTriangle>(m_instance)->GetParametricCenter(nativepcoordsPin);
  return retVal;
}



double vtkTriangle::GetParametricDistance(array<double>^ pcoords)
{
  pin_ptr<double> pcoordsPin = &pcoords[0];
  double* nativepcoordsPin = pcoordsPin;
  double retVal = vtk::ConvertManagedToNative<::vtkTriangle>(m_instance)->GetParametricDistance(nativepcoordsPin);
  return retVal;
}



void vtkTriangle::TriangleCenter(array<double>^ p1, array<double>^ p2, array<double>^ p3, array<double>^ center)
{
  pin_ptr<double> p1Pin = &p1[0];
  double* nativep1Pin = p1Pin;
  pin_ptr<double> p2Pin = &p2[0];
  double* nativep2Pin = p2Pin;
  pin_ptr<double> p3Pin = &p3[0];
  double* nativep3Pin = p3Pin;
  pin_ptr<double> centerPin = &center[0];
  double* nativecenterPin = centerPin;
  ::vtkTriangle::TriangleCenter(nativep1Pin, nativep2Pin, nativep3Pin, nativecenterPin);
}



double vtkTriangle::TriangleArea(array<double>^ p1, array<double>^ p2, array<double>^ p3)
{
  pin_ptr<double> p1Pin = &p1[0];
  double* nativep1Pin = p1Pin;
  pin_ptr<double> p2Pin = &p2[0];
  double* nativep2Pin = p2Pin;
  pin_ptr<double> p3Pin = &p3[0];
  double* nativep3Pin = p3Pin;
  double retVal = ::vtkTriangle::TriangleArea(nativep1Pin, nativep2Pin, nativep3Pin);
  return retVal;
}



double vtkTriangle::Circumcircle(array<double>^ p1, array<double>^ p2, array<double>^ p3, array<double>^ center)
{
  pin_ptr<double> p1Pin = &p1[0];
  double* nativep1Pin = p1Pin;
  pin_ptr<double> p2Pin = &p2[0];
  double* nativep2Pin = p2Pin;
  pin_ptr<double> p3Pin = &p3[0];
  double* nativep3Pin = p3Pin;
  pin_ptr<double> centerPin = &center[0];
  double* nativecenterPin = centerPin;
  double retVal = ::vtkTriangle::Circumcircle(nativep1Pin, nativep2Pin, nativep3Pin, nativecenterPin);
  return retVal;
}



int vtkTriangle::BarycentricCoords(array<double>^ x, array<double>^ x1, array<double>^ x2, array<double>^ x3, array<double>^ bcoords)
{
  pin_ptr<double> xPin = &x[0];
  double* nativexPin = xPin;
  pin_ptr<double> x1Pin = &x1[0];
  double* nativex1Pin = x1Pin;
  pin_ptr<double> x2Pin = &x2[0];
  double* nativex2Pin = x2Pin;
  pin_ptr<double> x3Pin = &x3[0];
  double* nativex3Pin = x3Pin;
  pin_ptr<double> bcoordsPin = &bcoords[0];
  double* nativebcoordsPin = bcoordsPin;
  int retVal = ::vtkTriangle::BarycentricCoords(nativexPin, nativex1Pin, nativex2Pin, nativex3Pin, nativebcoordsPin);
  return retVal;
}



int vtkTriangle::ProjectTo2D(array<double>^ x1, array<double>^ x2, array<double>^ x3, array<double>^ v1, array<double>^ v2, array<double>^ v3)
{
  pin_ptr<double> x1Pin = &x1[0];
  double* nativex1Pin = x1Pin;
  pin_ptr<double> x2Pin = &x2[0];
  double* nativex2Pin = x2Pin;
  pin_ptr<double> x3Pin = &x3[0];
  double* nativex3Pin = x3Pin;
  pin_ptr<double> v1Pin = &v1[0];
  double* nativev1Pin = v1Pin;
  pin_ptr<double> v2Pin = &v2[0];
  double* nativev2Pin = v2Pin;
  pin_ptr<double> v3Pin = &v3[0];
  double* nativev3Pin = v3Pin;
  int retVal = ::vtkTriangle::ProjectTo2D(nativex1Pin, nativex2Pin, nativex3Pin, nativev1Pin, nativev2Pin, nativev3Pin);
  return retVal;
}



void vtkTriangle::ComputeNormal(vtkPoints^ p, int numPts, array<int>^ arg2, array<double>^ n)
{
  ::vtkPoints* pWrap = vtk::ConvertManagedToNative<::vtkPoints>(p->GetNativePointer());
  pin_ptr<int> arg2Pin = &arg2[0];
  int* nativearg2Pin = arg2Pin;
  pin_ptr<double> nPin = &n[0];
  double* nativenPin = nPin;
  ::vtkTriangle::ComputeNormal(pWrap, numPts, nativearg2Pin, nativenPin);
}



void vtkTriangle::ComputeNormal(array<double>^ v1, array<double>^ v2, array<double>^ v3, array<double>^ n)
{
  pin_ptr<double> v1Pin = &v1[0];
  double* nativev1Pin = v1Pin;
  pin_ptr<double> v2Pin = &v2[0];
  double* nativev2Pin = v2Pin;
  pin_ptr<double> v3Pin = &v3[0];
  double* nativev3Pin = v3Pin;
  pin_ptr<double> nPin = &n[0];
  double* nativenPin = nPin;
  ::vtkTriangle::ComputeNormal(nativev1Pin, nativev2Pin, nativev3Pin, nativenPin);
}



void vtkTriangle::ComputeNormalDirection(array<double>^ v1, array<double>^ v2, array<double>^ v3, array<double>^ n)
{
  pin_ptr<double> v1Pin = &v1[0];
  double* nativev1Pin = v1Pin;
  pin_ptr<double> v2Pin = &v2[0];
  double* nativev2Pin = v2Pin;
  pin_ptr<double> v3Pin = &v3[0];
  double* nativev3Pin = v3Pin;
  pin_ptr<double> nPin = &n[0];
  double* nativenPin = nPin;
  ::vtkTriangle::ComputeNormalDirection(nativev1Pin, nativev2Pin, nativev3Pin, nativenPin);
}



int vtkTriangle::PointInTriangle(array<double>^ x, array<double>^ x1, array<double>^ x2, array<double>^ x3, double tol2)
{
  pin_ptr<double> xPin = &x[0];
  double* nativexPin = xPin;
  pin_ptr<double> x1Pin = &x1[0];
  double* nativex1Pin = x1Pin;
  pin_ptr<double> x2Pin = &x2[0];
  double* nativex2Pin = x2Pin;
  pin_ptr<double> x3Pin = &x3[0];
  double* nativex3Pin = x3Pin;
  int retVal = ::vtkTriangle::PointInTriangle(nativexPin, nativex1Pin, nativex2Pin, nativex3Pin, tol2);
  return retVal;
}



void vtkTriangle::ComputeQuadric(array<double>^ x1, array<double>^ x2, array<double>^ x3, array<double,2>^ quadric)
{
  pin_ptr<double> x1Pin = &x1[0];
  double* nativex1Pin = x1Pin;
  pin_ptr<double> x2Pin = &x2[0];
  double* nativex2Pin = x2Pin;
  pin_ptr<double> x3Pin = &x3[0];
  double* nativex3Pin = x3Pin;
  double nativequadric[4][4];
  for (size_t iquadric=0; iquadric<4; iquadric++)
    for (size_t jquadric=0; jquadric<4; jquadric++)
      nativequadric[iquadric][jquadric] = quadric[iquadric,jquadric];
  ::vtkTriangle::ComputeQuadric(nativex1Pin, nativex2Pin, nativex3Pin, nativequadric);
  for (size_t iquadric=0; iquadric<4; iquadric++)
    for (size_t jquadric=0; jquadric<4; jquadric++)
      quadric[iquadric,jquadric] = nativequadric[iquadric][jquadric];
}



void vtkTriangle::ComputeQuadric(array<double>^ x1, array<double>^ x2, array<double>^ x3, vtkQuadric^ quadric)
{
  pin_ptr<double> x1Pin = &x1[0];
  double* nativex1Pin = x1Pin;
  pin_ptr<double> x2Pin = &x2[0];
  double* nativex2Pin = x2Pin;
  pin_ptr<double> x3Pin = &x3[0];
  double* nativex3Pin = x3Pin;
  ::vtkQuadric* quadricWrap = vtk::ConvertManagedToNative<::vtkQuadric>(quadric->GetNativePointer());
  ::vtkTriangle::ComputeQuadric(nativex1Pin, nativex2Pin, nativex3Pin, quadricWrap);
}



  vtkTriangle::vtkTriangle(System::IntPtr native, bool bConst) : vtkCell(native, bConst) {}



  vtkTriangle::vtkTriangle(bool donothing) : vtkCell(donothing) {}



  vtkTriangle::vtkTriangle() : vtkCell(false) {
  this->SetNativePointer(IntPtr(::vtkTriangle::New()));
}



  vtkTriangle::~vtkTriangle() { }





} // end namespace vtkFiltering
