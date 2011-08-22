

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkPolygonDotNet.h"
#include "vtkCellArrayDotNet.h"
#include "vtkCellDataDotNet.h"
#include "vtkPointDataDotNet.h"
#include "vtkPointLocatorDotNet.h"

// native includes
#include "strstream"
#include "vtkPolygon.h"
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

System::String^ vtkPolygon::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkPolygon>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkPolygon::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkPolygon>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkPolygon^ vtkPolygon::NewInstance()
{
  ::vtkPolygon* retVal = static_cast<::vtkPolygon*>(vtk::ConvertManagedToNative<::vtkPolygon>(m_instance)->NewInstance());
  return gcnew vtkPolygon(IntPtr(retVal), false);
}



vtkPolygon^ vtkPolygon::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkPolygon* retVal = static_cast<::vtkPolygon*>(::vtkPolygon::SafeDownCast(oWrap));
  return gcnew vtkPolygon(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkPolygon::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkPolygon>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkPolygon::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkPolygon>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




int vtkPolygon::GetCellType()
{
  int retVal = vtk::ConvertManagedToNative<::vtkPolygon>(m_instance)->GetCellType();
  return retVal;
}



int vtkPolygon::GetCellDimension()
{
  int retVal = vtk::ConvertManagedToNative<::vtkPolygon>(m_instance)->GetCellDimension();
  return retVal;
}



int vtkPolygon::GetNumberOfEdges()
{
  int retVal = vtk::ConvertManagedToNative<::vtkPolygon>(m_instance)->GetNumberOfEdges();
  return retVal;
}



int vtkPolygon::GetNumberOfFaces()
{
  int retVal = vtk::ConvertManagedToNative<::vtkPolygon>(m_instance)->GetNumberOfFaces();
  return retVal;
}



vtkCell^ vtkPolygon::GetEdge(int edgeId)
{
  ::vtkCell* retVal = static_cast<::vtkCell*>(vtk::ConvertManagedToNative<::vtkPolygon>(m_instance)->GetEdge(edgeId));
  return gcnew vtkCell(IntPtr(retVal), false);
}



vtkCell^ vtkPolygon::GetFace(int arg0)
{
  ::vtkCell* retVal = static_cast<::vtkCell*>(vtk::ConvertManagedToNative<::vtkPolygon>(m_instance)->GetFace(arg0));
  return gcnew vtkCell(IntPtr(retVal), false);
}



int vtkPolygon::CellBoundary(int subId, array<double>^ pcoords, vtkIdList^ pts)
{
  pin_ptr<double> pcoordsPin = &pcoords[0];
  double* nativepcoordsPin = pcoordsPin;
  ::vtkIdList* ptsWrap = vtk::ConvertManagedToNative<::vtkIdList>(pts->GetNativePointer());
  int retVal = vtk::ConvertManagedToNative<::vtkPolygon>(m_instance)->CellBoundary(subId, nativepcoordsPin, ptsWrap);
  return retVal;
}



void vtkPolygon::Contour(double value, vtkDataArray^ cellScalars, vtkPointLocator^ locator, vtkCellArray^ verts, vtkCellArray^ lines, vtkCellArray^ polys, vtkPointData^ inPd, vtkPointData^ outPd, vtkCellData^ inCd, int cellId, vtkCellData^ outCd)
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
  vtk::ConvertManagedToNative<::vtkPolygon>(m_instance)->Contour(value, cellScalarsWrap, locatorWrap, vertsWrap, linesWrap, polysWrap, inPdWrap, outPdWrap, inCdWrap, cellId, outCdWrap);
}



void vtkPolygon::Clip(double value, vtkDataArray^ cellScalars, vtkPointLocator^ locator, vtkCellArray^ tris, vtkPointData^ inPd, vtkPointData^ outPd, vtkCellData^ inCd, int cellId, vtkCellData^ outCd, int insideOut)
{
  ::vtkDataArray* cellScalarsWrap = vtk::ConvertManagedToNative<::vtkDataArray>(cellScalars->GetNativePointer());
  ::vtkPointLocator* locatorWrap = vtk::ConvertManagedToNative<::vtkPointLocator>(locator->GetNativePointer());
  ::vtkCellArray* trisWrap = vtk::ConvertManagedToNative<::vtkCellArray>(tris->GetNativePointer());
  ::vtkPointData* inPdWrap = vtk::ConvertManagedToNative<::vtkPointData>(inPd->GetNativePointer());
  ::vtkPointData* outPdWrap = vtk::ConvertManagedToNative<::vtkPointData>(outPd->GetNativePointer());
  ::vtkCellData* inCdWrap = vtk::ConvertManagedToNative<::vtkCellData>(inCd->GetNativePointer());
  ::vtkCellData* outCdWrap = vtk::ConvertManagedToNative<::vtkCellData>(outCd->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkPolygon>(m_instance)->Clip(value, cellScalarsWrap, locatorWrap, trisWrap, inPdWrap, outPdWrap, inCdWrap, cellId, outCdWrap, insideOut);
}



int vtkPolygon::EvaluatePosition(array<double>^ x, array<double>^ closestPoint, int% subId, array<double>^ pcoords, double% dist2, array<double>^ weights)
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
  int retVal = vtk::ConvertManagedToNative<::vtkPolygon>(m_instance)->EvaluatePosition(nativexPin, nativeclosestPointPin, *subIdPin, nativepcoordsPin, *dist2Pin, nativeweightsPin);
  return retVal;
}



void vtkPolygon::EvaluateLocation(int% subId, array<double>^ pcoords, array<double>^ x, array<double>^ weights)
{
  pin_ptr<int> subIdPin = &subId;
  pin_ptr<double> pcoordsPin = &pcoords[0];
  double* nativepcoordsPin = pcoordsPin;
  pin_ptr<double> xPin = &x[0];
  double* nativexPin = xPin;
  pin_ptr<double> weightsPin = &weights[0];
  double* nativeweightsPin = weightsPin;
  vtk::ConvertManagedToNative<::vtkPolygon>(m_instance)->EvaluateLocation(*subIdPin, nativepcoordsPin, nativexPin, nativeweightsPin);
}



int vtkPolygon::IntersectWithLine(array<double>^ p1, array<double>^ p2, double tol, double% t, array<double>^ x, array<double>^ pcoords, int% subId)
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
  int retVal = vtk::ConvertManagedToNative<::vtkPolygon>(m_instance)->IntersectWithLine(nativep1Pin, nativep2Pin, tol, *tPin, nativexPin, nativepcoordsPin, *subIdPin);
  return retVal;
}



int vtkPolygon::Triangulate(int index, vtkIdList^ ptIds, vtkPoints^ pts)
{
  ::vtkIdList* ptIdsWrap = vtk::ConvertManagedToNative<::vtkIdList>(ptIds->GetNativePointer());
  ::vtkPoints* ptsWrap = vtk::ConvertManagedToNative<::vtkPoints>(pts->GetNativePointer());
  int retVal = vtk::ConvertManagedToNative<::vtkPolygon>(m_instance)->Triangulate(index, ptIdsWrap, ptsWrap);
  return retVal;
}



void vtkPolygon::Derivatives(int subId, array<double>^ pcoords, array<double>^ values, int dim, array<double>^ derivs)
{
  pin_ptr<double> pcoordsPin = &pcoords[0];
  double* nativepcoordsPin = pcoordsPin;
  pin_ptr<double> valuesPin = &values[0];
  double* nativevaluesPin = valuesPin;
  pin_ptr<double> derivsPin = &derivs[0];
  double* nativederivsPin = derivsPin;
  vtk::ConvertManagedToNative<::vtkPolygon>(m_instance)->Derivatives(subId, nativepcoordsPin, nativevaluesPin, dim, nativederivsPin);
}



int vtkPolygon::IsPrimaryCell()
{
  int retVal = vtk::ConvertManagedToNative<::vtkPolygon>(m_instance)->IsPrimaryCell();
  return retVal;
}



void vtkPolygon::ComputeNormal(vtkPoints^ p, int numPts, array<int>^ arg2, array<double>^ n)
{
  ::vtkPoints* pWrap = vtk::ConvertManagedToNative<::vtkPoints>(p->GetNativePointer());
  pin_ptr<int> arg2Pin = &arg2[0];
  int* nativearg2Pin = arg2Pin;
  pin_ptr<double> nPin = &n[0];
  double* nativenPin = nPin;
  ::vtkPolygon::ComputeNormal(pWrap, numPts, nativearg2Pin, nativenPin);
}



void vtkPolygon::ComputeNormal(vtkPoints^ p, array<double>^ n)
{
  ::vtkPoints* pWrap = vtk::ConvertManagedToNative<::vtkPoints>(p->GetNativePointer());
  pin_ptr<double> nPin = &n[0];
  double* nativenPin = nPin;
  ::vtkPolygon::ComputeNormal(pWrap, nativenPin);
}



void vtkPolygon::ComputeNormal(int numPts, array<double>^ pts, array<double>^ n)
{
  pin_ptr<double> ptsPin = &pts[0];
  double* nativeptsPin = ptsPin;
  pin_ptr<double> nPin = &n[0];
  double* nativenPin = nPin;
  ::vtkPolygon::ComputeNormal(numPts, nativeptsPin, nativenPin);
}



void vtkPolygon::ComputeWeights(array<double>^ x, array<double>^ weights)
{
  pin_ptr<double> xPin = &x[0];
  double* nativexPin = xPin;
  pin_ptr<double> weightsPin = &weights[0];
  double* nativeweightsPin = weightsPin;
  vtk::ConvertManagedToNative<::vtkPolygon>(m_instance)->ComputeWeights(nativexPin, nativeweightsPin);
}



int vtkPolygon::ParameterizePolygon(array<double>^ p0, array<double>^ p10, double% l10, array<double>^ p20, double% l20, array<double>^ n)
{
  pin_ptr<double> p0Pin = &p0[0];
  double* nativep0Pin = p0Pin;
  pin_ptr<double> p10Pin = &p10[0];
  double* nativep10Pin = p10Pin;
  pin_ptr<double> l10Pin = &l10;
  pin_ptr<double> p20Pin = &p20[0];
  double* nativep20Pin = p20Pin;
  pin_ptr<double> l20Pin = &l20;
  pin_ptr<double> nPin = &n[0];
  double* nativenPin = nPin;
  int retVal = vtk::ConvertManagedToNative<::vtkPolygon>(m_instance)->ParameterizePolygon(nativep0Pin, nativep10Pin, *l10Pin, nativep20Pin, *l20Pin, nativenPin);
  return retVal;
}



int vtkPolygon::PointInPolygon(array<double>^ x, int numPts, array<double>^ pts, array<double>^ bounds, array<double>^ n)
{
  pin_ptr<double> xPin = &x[0];
  double* nativexPin = xPin;
  pin_ptr<double> ptsPin = &pts[0];
  double* nativeptsPin = ptsPin;
  pin_ptr<double> boundsPin = &bounds[0];
  double* nativeboundsPin = boundsPin;
  pin_ptr<double> nPin = &n[0];
  double* nativenPin = nPin;
  int retVal = ::vtkPolygon::PointInPolygon(nativexPin, numPts, nativeptsPin, nativeboundsPin, nativenPin);
  return retVal;
}



int vtkPolygon::Triangulate(vtkIdList^ outTris)
{
  ::vtkIdList* outTrisWrap = vtk::ConvertManagedToNative<::vtkIdList>(outTris->GetNativePointer());
  int retVal = vtk::ConvertManagedToNative<::vtkPolygon>(m_instance)->Triangulate(outTrisWrap);
  return retVal;
}



int vtkPolygon::IntersectPolygonWithPolygon(int npts, array<double>^ pts, array<double>^ bounds, int npts2, array<double>^ pts2, array<double>^ bounds2, double tol, array<double>^ x)
{
  pin_ptr<double> ptsPin = &pts[0];
  double* nativeptsPin = ptsPin;
  pin_ptr<double> boundsPin = &bounds[0];
  double* nativeboundsPin = boundsPin;
  pin_ptr<double> pts2Pin = &pts2[0];
  double* nativepts2Pin = pts2Pin;
  pin_ptr<double> bounds2Pin = &bounds2[0];
  double* nativebounds2Pin = bounds2Pin;
  pin_ptr<double> xPin = &x[0];
  double* nativexPin = xPin;
  int retVal = ::vtkPolygon::IntersectPolygonWithPolygon(npts, nativeptsPin, nativeboundsPin, npts2, nativepts2Pin, nativebounds2Pin, tol, nativexPin);
  return retVal;
}



  vtkPolygon::vtkPolygon(System::IntPtr native, bool bConst) : vtkCell(native, bConst) {}



  vtkPolygon::vtkPolygon(bool donothing) : vtkCell(donothing) {}



  vtkPolygon::vtkPolygon() : vtkCell(false) {
  this->SetNativePointer(IntPtr(::vtkPolygon::New()));
}



  vtkPolygon::~vtkPolygon() { }





} // end namespace vtkFiltering
