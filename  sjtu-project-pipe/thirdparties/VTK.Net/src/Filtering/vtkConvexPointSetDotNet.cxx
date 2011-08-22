

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkConvexPointSetDotNet.h"
#include "vtkCellDotNet.h"
#include "vtkCellArrayDotNet.h"
#include "vtkCellDataDotNet.h"
#include "vtkPointDataDotNet.h"
#include "vtkPointLocatorDotNet.h"

// native includes
#include "strstream"
#include "vtkConvexPointSet.h"
#include "vtkCell.h"
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

System::String^ vtkConvexPointSet::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkConvexPointSet>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkConvexPointSet::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkConvexPointSet>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkConvexPointSet^ vtkConvexPointSet::NewInstance()
{
  ::vtkConvexPointSet* retVal = static_cast<::vtkConvexPointSet*>(vtk::ConvertManagedToNative<::vtkConvexPointSet>(m_instance)->NewInstance());
  return gcnew vtkConvexPointSet(IntPtr(retVal), false);
}



vtkConvexPointSet^ vtkConvexPointSet::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkConvexPointSet* retVal = static_cast<::vtkConvexPointSet*>(::vtkConvexPointSet::SafeDownCast(oWrap));
  return gcnew vtkConvexPointSet(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkConvexPointSet::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkConvexPointSet>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkConvexPointSet::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkConvexPointSet>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




int vtkConvexPointSet::HasFixedTopology()
{
  int retVal = vtk::ConvertManagedToNative<::vtkConvexPointSet>(m_instance)->HasFixedTopology();
  return retVal;
}



int vtkConvexPointSet::GetCellType()
{
  int retVal = vtk::ConvertManagedToNative<::vtkConvexPointSet>(m_instance)->GetCellType();
  return retVal;
}



int vtkConvexPointSet::RequiresInitialization()
{
  int retVal = vtk::ConvertManagedToNative<::vtkConvexPointSet>(m_instance)->RequiresInitialization();
  return retVal;
}



void vtkConvexPointSet::Initialize()
{
  vtk::ConvertManagedToNative<::vtkConvexPointSet>(m_instance)->Initialize();
}



int vtkConvexPointSet::GetNumberOfEdges()
{
  int retVal = vtk::ConvertManagedToNative<::vtkConvexPointSet>(m_instance)->GetNumberOfEdges();
  return retVal;
}



vtkCell^ vtkConvexPointSet::GetEdge(int arg0)
{
  ::vtkCell* retVal = static_cast<::vtkCell*>(vtk::ConvertManagedToNative<::vtkConvexPointSet>(m_instance)->GetEdge(arg0));
  return gcnew vtkCell(IntPtr(retVal), false);
}



int vtkConvexPointSet::GetNumberOfFaces()
{
  int retVal = vtk::ConvertManagedToNative<::vtkConvexPointSet>(m_instance)->GetNumberOfFaces();
  return retVal;
}



vtkCell^ vtkConvexPointSet::GetFace(int faceId)
{
  ::vtkCell* retVal = static_cast<::vtkCell*>(vtk::ConvertManagedToNative<::vtkConvexPointSet>(m_instance)->GetFace(faceId));
  return gcnew vtkCell(IntPtr(retVal), false);
}



void vtkConvexPointSet::Contour(double value, vtkDataArray^ cellScalars, vtkPointLocator^ locator, vtkCellArray^ verts, vtkCellArray^ lines, vtkCellArray^ polys, vtkPointData^ inPd, vtkPointData^ outPd, vtkCellData^ inCd, int cellId, vtkCellData^ outCd)
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
  vtk::ConvertManagedToNative<::vtkConvexPointSet>(m_instance)->Contour(value, cellScalarsWrap, locatorWrap, vertsWrap, linesWrap, polysWrap, inPdWrap, outPdWrap, inCdWrap, cellId, outCdWrap);
}



void vtkConvexPointSet::Clip(double value, vtkDataArray^ cellScalars, vtkPointLocator^ locator, vtkCellArray^ connectivity, vtkPointData^ inPd, vtkPointData^ outPd, vtkCellData^ inCd, int cellId, vtkCellData^ outCd, int insideOut)
{
  ::vtkDataArray* cellScalarsWrap = vtk::ConvertManagedToNative<::vtkDataArray>(cellScalars->GetNativePointer());
  ::vtkPointLocator* locatorWrap = vtk::ConvertManagedToNative<::vtkPointLocator>(locator->GetNativePointer());
  ::vtkCellArray* connectivityWrap = vtk::ConvertManagedToNative<::vtkCellArray>(connectivity->GetNativePointer());
  ::vtkPointData* inPdWrap = vtk::ConvertManagedToNative<::vtkPointData>(inPd->GetNativePointer());
  ::vtkPointData* outPdWrap = vtk::ConvertManagedToNative<::vtkPointData>(outPd->GetNativePointer());
  ::vtkCellData* inCdWrap = vtk::ConvertManagedToNative<::vtkCellData>(inCd->GetNativePointer());
  ::vtkCellData* outCdWrap = vtk::ConvertManagedToNative<::vtkCellData>(outCd->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkConvexPointSet>(m_instance)->Clip(value, cellScalarsWrap, locatorWrap, connectivityWrap, inPdWrap, outPdWrap, inCdWrap, cellId, outCdWrap, insideOut);
}



int vtkConvexPointSet::EvaluatePosition(array<double>^ x, array<double>^ closestPoint, int% subId, array<double>^ pcoords, double% dist2, array<double>^ weights)
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
  int retVal = vtk::ConvertManagedToNative<::vtkConvexPointSet>(m_instance)->EvaluatePosition(nativexPin, nativeclosestPointPin, *subIdPin, nativepcoordsPin, *dist2Pin, nativeweightsPin);
  return retVal;
}



void vtkConvexPointSet::EvaluateLocation(int% subId, array<double>^ pcoords, array<double>^ x, array<double>^ weights)
{
  pin_ptr<int> subIdPin = &subId;
  pin_ptr<double> pcoordsPin = &pcoords[0];
  double* nativepcoordsPin = pcoordsPin;
  pin_ptr<double> xPin = &x[0];
  double* nativexPin = xPin;
  pin_ptr<double> weightsPin = &weights[0];
  double* nativeweightsPin = weightsPin;
  vtk::ConvertManagedToNative<::vtkConvexPointSet>(m_instance)->EvaluateLocation(*subIdPin, nativepcoordsPin, nativexPin, nativeweightsPin);
}



int vtkConvexPointSet::IntersectWithLine(array<double>^ p1, array<double>^ p2, double tol, double% t, array<double>^ x, array<double>^ pcoords, int% subId)
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
  int retVal = vtk::ConvertManagedToNative<::vtkConvexPointSet>(m_instance)->IntersectWithLine(nativep1Pin, nativep2Pin, tol, *tPin, nativexPin, nativepcoordsPin, *subIdPin);
  return retVal;
}



int vtkConvexPointSet::Triangulate(int index, vtkIdList^ ptIds, vtkPoints^ pts)
{
  ::vtkIdList* ptIdsWrap = vtk::ConvertManagedToNative<::vtkIdList>(ptIds->GetNativePointer());
  ::vtkPoints* ptsWrap = vtk::ConvertManagedToNative<::vtkPoints>(pts->GetNativePointer());
  int retVal = vtk::ConvertManagedToNative<::vtkConvexPointSet>(m_instance)->Triangulate(index, ptIdsWrap, ptsWrap);
  return retVal;
}



void vtkConvexPointSet::Derivatives(int subId, array<double>^ pcoords, array<double>^ values, int dim, array<double>^ derivs)
{
  pin_ptr<double> pcoordsPin = &pcoords[0];
  double* nativepcoordsPin = pcoordsPin;
  pin_ptr<double> valuesPin = &values[0];
  double* nativevaluesPin = valuesPin;
  pin_ptr<double> derivsPin = &derivs[0];
  double* nativederivsPin = derivsPin;
  vtk::ConvertManagedToNative<::vtkConvexPointSet>(m_instance)->Derivatives(subId, nativepcoordsPin, nativevaluesPin, dim, nativederivsPin);
}



int vtkConvexPointSet::CellBoundary(int subId, array<double>^ pcoords, vtkIdList^ pts)
{
  pin_ptr<double> pcoordsPin = &pcoords[0];
  double* nativepcoordsPin = pcoordsPin;
  ::vtkIdList* ptsWrap = vtk::ConvertManagedToNative<::vtkIdList>(pts->GetNativePointer());
  int retVal = vtk::ConvertManagedToNative<::vtkConvexPointSet>(m_instance)->CellBoundary(subId, nativepcoordsPin, ptsWrap);
  return retVal;
}



int vtkConvexPointSet::GetParametricCenter(array<double>^ pcoords)
{
  pin_ptr<double> pcoordsPin = &pcoords[0];
  double* nativepcoordsPin = pcoordsPin;
  int retVal = vtk::ConvertManagedToNative<::vtkConvexPointSet>(m_instance)->GetParametricCenter(nativepcoordsPin);
  return retVal;
}



int vtkConvexPointSet::IsPrimaryCell()
{
  int retVal = vtk::ConvertManagedToNative<::vtkConvexPointSet>(m_instance)->IsPrimaryCell();
  return retVal;
}



  vtkConvexPointSet::vtkConvexPointSet(System::IntPtr native, bool bConst) : vtkCell3D(native, bConst) {}



  vtkConvexPointSet::vtkConvexPointSet(bool donothing) : vtkCell3D(donothing) {}



  vtkConvexPointSet::vtkConvexPointSet() : vtkCell3D(false) {
  this->SetNativePointer(IntPtr(::vtkConvexPointSet::New()));
}



  vtkConvexPointSet::~vtkConvexPointSet() { }





} // end namespace vtkFiltering
