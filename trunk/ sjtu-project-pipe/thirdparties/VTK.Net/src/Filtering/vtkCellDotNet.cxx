

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkCellDotNet.h"
#include "vtkCellArrayDotNet.h"
#include "vtkCellDataDotNet.h"
#include "vtkPointDataDotNet.h"
#include "vtkPointLocatorDotNet.h"

// native includes
#include "strstream"
#include "vtkCell.h"
#include "vtkCellArray.h"
#include "vtkCellData.h"
#include "vtkDataArray.h"
#include "vtkIdList.h"
#include "vtkPointData.h"
#include "vtkPointLocator.h"
#include "vtkPoints.h"

using namespace System;

namespace vtk {

System::String^ vtkCell::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkCell>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkCell::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkCell>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkCell^ vtkCell::NewInstance()
{
  ::vtkCell* retVal = static_cast<::vtkCell*>(vtk::ConvertManagedToNative<::vtkCell>(m_instance)->NewInstance());
  return gcnew vtkCell(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkCell::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkCell>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkCell::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkCell>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkCell::Initialize(int npts, array<int>^ arg1, vtkPoints^ p)
{
  pin_ptr<int> arg1Pin = &arg1[0];
  int* nativearg1Pin = arg1Pin;
  ::vtkPoints* pWrap = vtk::ConvertManagedToNative<::vtkPoints>(p->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkCell>(m_instance)->Initialize(npts, nativearg1Pin, pWrap);
}



void vtkCell::ShallowCopy(vtkCell^ c)
{
  ::vtkCell* cWrap = vtk::ConvertManagedToNative<::vtkCell>(c->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkCell>(m_instance)->ShallowCopy(cWrap);
}



void vtkCell::DeepCopy(vtkCell^ c)
{
  ::vtkCell* cWrap = vtk::ConvertManagedToNative<::vtkCell>(c->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkCell>(m_instance)->DeepCopy(cWrap);
}



int vtkCell::GetCellType()
{
  int retVal = vtk::ConvertManagedToNative<::vtkCell>(m_instance)->GetCellType();
  return retVal;
}



int vtkCell::GetCellDimension()
{
  int retVal = vtk::ConvertManagedToNative<::vtkCell>(m_instance)->GetCellDimension();
  return retVal;
}



int vtkCell::IsLinear()
{
  int retVal = vtk::ConvertManagedToNative<::vtkCell>(m_instance)->IsLinear();
  return retVal;
}



int vtkCell::RequiresInitialization()
{
  int retVal = vtk::ConvertManagedToNative<::vtkCell>(m_instance)->RequiresInitialization();
  return retVal;
}



void vtkCell::Initialize()
{
  vtk::ConvertManagedToNative<::vtkCell>(m_instance)->Initialize();
}



int vtkCell::IsExplicitCell()
{
  int retVal = vtk::ConvertManagedToNative<::vtkCell>(m_instance)->IsExplicitCell();
  return retVal;
}



vtkPoints^ vtkCell::GetPoints()
{
  ::vtkPoints* retVal = static_cast<::vtkPoints*>(vtk::ConvertManagedToNative<::vtkCell>(m_instance)->GetPoints());
  return gcnew vtkPoints(IntPtr(retVal), false);
}



int vtkCell::GetNumberOfPoints()
{
  int retVal = vtk::ConvertManagedToNative<::vtkCell>(m_instance)->GetNumberOfPoints();
  return retVal;
}



int vtkCell::GetNumberOfEdges()
{
  int retVal = vtk::ConvertManagedToNative<::vtkCell>(m_instance)->GetNumberOfEdges();
  return retVal;
}



int vtkCell::GetNumberOfFaces()
{
  int retVal = vtk::ConvertManagedToNative<::vtkCell>(m_instance)->GetNumberOfFaces();
  return retVal;
}



vtkIdList^ vtkCell::GetPointIds()
{
  ::vtkIdList* retVal = static_cast<::vtkIdList*>(vtk::ConvertManagedToNative<::vtkCell>(m_instance)->GetPointIds());
  return gcnew vtkIdList(IntPtr(retVal), false);
}



int vtkCell::GetPointId(int ptId)
{
  int retVal = vtk::ConvertManagedToNative<::vtkCell>(m_instance)->GetPointId(ptId);
  return retVal;
}



vtkCell^ vtkCell::GetEdge(int edgeId)
{
  ::vtkCell* retVal = static_cast<::vtkCell*>(vtk::ConvertManagedToNative<::vtkCell>(m_instance)->GetEdge(edgeId));
  return gcnew vtkCell(IntPtr(retVal), false);
}



vtkCell^ vtkCell::GetFace(int faceId)
{
  ::vtkCell* retVal = static_cast<::vtkCell*>(vtk::ConvertManagedToNative<::vtkCell>(m_instance)->GetFace(faceId));
  return gcnew vtkCell(IntPtr(retVal), false);
}



int vtkCell::CellBoundary(int subId, array<double>^ pcoords, vtkIdList^ pts)
{
  pin_ptr<double> pcoordsPin = &pcoords[0];
  double* nativepcoordsPin = pcoordsPin;
  ::vtkIdList* ptsWrap = vtk::ConvertManagedToNative<::vtkIdList>(pts->GetNativePointer());
  int retVal = vtk::ConvertManagedToNative<::vtkCell>(m_instance)->CellBoundary(subId, nativepcoordsPin, ptsWrap);
  return retVal;
}



int vtkCell::EvaluatePosition(array<double>^ x, array<double>^ closestPoint, int% subId, array<double>^ pcoords, double% dist2, array<double>^ weights)
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
  int retVal = vtk::ConvertManagedToNative<::vtkCell>(m_instance)->EvaluatePosition(nativexPin, nativeclosestPointPin, *subIdPin, nativepcoordsPin, *dist2Pin, nativeweightsPin);
  return retVal;
}



void vtkCell::EvaluateLocation(int% subId, array<double>^ pcoords, array<double>^ x, array<double>^ weights)
{
  pin_ptr<int> subIdPin = &subId;
  pin_ptr<double> pcoordsPin = &pcoords[0];
  double* nativepcoordsPin = pcoordsPin;
  pin_ptr<double> xPin = &x[0];
  double* nativexPin = xPin;
  pin_ptr<double> weightsPin = &weights[0];
  double* nativeweightsPin = weightsPin;
  vtk::ConvertManagedToNative<::vtkCell>(m_instance)->EvaluateLocation(*subIdPin, nativepcoordsPin, nativexPin, nativeweightsPin);
}



void vtkCell::Contour(double value, vtkDataArray^ cellScalars, vtkPointLocator^ locator, vtkCellArray^ verts, vtkCellArray^ lines, vtkCellArray^ polys, vtkPointData^ inPd, vtkPointData^ outPd, vtkCellData^ inCd, int cellId, vtkCellData^ outCd)
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
  vtk::ConvertManagedToNative<::vtkCell>(m_instance)->Contour(value, cellScalarsWrap, locatorWrap, vertsWrap, linesWrap, polysWrap, inPdWrap, outPdWrap, inCdWrap, cellId, outCdWrap);
}



void vtkCell::Clip(double value, vtkDataArray^ cellScalars, vtkPointLocator^ locator, vtkCellArray^ connectivity, vtkPointData^ inPd, vtkPointData^ outPd, vtkCellData^ inCd, int cellId, vtkCellData^ outCd, int insideOut)
{
  ::vtkDataArray* cellScalarsWrap = vtk::ConvertManagedToNative<::vtkDataArray>(cellScalars->GetNativePointer());
  ::vtkPointLocator* locatorWrap = vtk::ConvertManagedToNative<::vtkPointLocator>(locator->GetNativePointer());
  ::vtkCellArray* connectivityWrap = vtk::ConvertManagedToNative<::vtkCellArray>(connectivity->GetNativePointer());
  ::vtkPointData* inPdWrap = vtk::ConvertManagedToNative<::vtkPointData>(inPd->GetNativePointer());
  ::vtkPointData* outPdWrap = vtk::ConvertManagedToNative<::vtkPointData>(outPd->GetNativePointer());
  ::vtkCellData* inCdWrap = vtk::ConvertManagedToNative<::vtkCellData>(inCd->GetNativePointer());
  ::vtkCellData* outCdWrap = vtk::ConvertManagedToNative<::vtkCellData>(outCd->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkCell>(m_instance)->Clip(value, cellScalarsWrap, locatorWrap, connectivityWrap, inPdWrap, outPdWrap, inCdWrap, cellId, outCdWrap, insideOut);
}



int vtkCell::IntersectWithLine(array<double>^ p1, array<double>^ p2, double tol, double% t, array<double>^ x, array<double>^ pcoords, int% subId)
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
  int retVal = vtk::ConvertManagedToNative<::vtkCell>(m_instance)->IntersectWithLine(nativep1Pin, nativep2Pin, tol, *tPin, nativexPin, nativepcoordsPin, *subIdPin);
  return retVal;
}



int vtkCell::Triangulate(int index, vtkIdList^ ptIds, vtkPoints^ pts)
{
  ::vtkIdList* ptIdsWrap = vtk::ConvertManagedToNative<::vtkIdList>(ptIds->GetNativePointer());
  ::vtkPoints* ptsWrap = vtk::ConvertManagedToNative<::vtkPoints>(pts->GetNativePointer());
  int retVal = vtk::ConvertManagedToNative<::vtkCell>(m_instance)->Triangulate(index, ptIdsWrap, ptsWrap);
  return retVal;
}



void vtkCell::Derivatives(int subId, array<double>^ pcoords, array<double>^ values, int dim, array<double>^ derivs)
{
  pin_ptr<double> pcoordsPin = &pcoords[0];
  double* nativepcoordsPin = pcoordsPin;
  pin_ptr<double> valuesPin = &values[0];
  double* nativevaluesPin = valuesPin;
  pin_ptr<double> derivsPin = &derivs[0];
  double* nativederivsPin = derivsPin;
  vtk::ConvertManagedToNative<::vtkCell>(m_instance)->Derivatives(subId, nativepcoordsPin, nativevaluesPin, dim, nativederivsPin);
}



void vtkCell::GetBounds(array<double>^ bounds)
{
  pin_ptr<double> boundsPin = &bounds[0];
  double* nativeboundsPin = boundsPin;
  vtk::ConvertManagedToNative<::vtkCell>(m_instance)->GetBounds(nativeboundsPin);
}



array<double>^ vtkCell::GetBounds()
{
  const double* retVal = vtk::ConvertManagedToNative<::vtkCell>(m_instance)->GetBounds();
  array<double>^ mRetVal = gcnew array<double>(6);
  for (size_t cprIdx=0; cprIdx<6; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



double vtkCell::GetLength2()
{
  double retVal = vtk::ConvertManagedToNative<::vtkCell>(m_instance)->GetLength2();
  return retVal;
}



int vtkCell::GetParametricCenter(array<double>^ pcoords)
{
  pin_ptr<double> pcoordsPin = &pcoords[0];
  double* nativepcoordsPin = pcoordsPin;
  int retVal = vtk::ConvertManagedToNative<::vtkCell>(m_instance)->GetParametricCenter(nativepcoordsPin);
  return retVal;
}



double vtkCell::GetParametricDistance(array<double>^ pcoords)
{
  pin_ptr<double> pcoordsPin = &pcoords[0];
  double* nativepcoordsPin = pcoordsPin;
  double retVal = vtk::ConvertManagedToNative<::vtkCell>(m_instance)->GetParametricDistance(nativepcoordsPin);
  return retVal;
}



int vtkCell::IsPrimaryCell()
{
  int retVal = vtk::ConvertManagedToNative<::vtkCell>(m_instance)->IsPrimaryCell();
  return retVal;
}



  vtkCell::vtkCell(System::IntPtr native, bool bConst) : vtkObject(native, bConst) {}



  vtkCell::vtkCell(bool donothing) : vtkObject(donothing) {}



  vtkCell::vtkCell() : vtkObject(false) {
  this->SetNativePointer(IntPtr(::vtkCell::New()));
}



  vtkCell::~vtkCell() { }





} // end namespace vtkFiltering
