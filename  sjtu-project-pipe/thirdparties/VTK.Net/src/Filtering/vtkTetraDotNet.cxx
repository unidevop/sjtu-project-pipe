

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkTetraDotNet.h"
#include "vtkCellDotNet.h"
#include "vtkCellArrayDotNet.h"
#include "vtkCellDataDotNet.h"
#include "vtkPointDataDotNet.h"
#include "vtkPointLocatorDotNet.h"

// native includes
#include "strstream"
#include "vtkTetra.h"
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

System::String^ vtkTetra::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkTetra>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkTetra::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkTetra>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkTetra^ vtkTetra::NewInstance()
{
  ::vtkTetra* retVal = static_cast<::vtkTetra*>(vtk::ConvertManagedToNative<::vtkTetra>(m_instance)->NewInstance());
  return gcnew vtkTetra(IntPtr(retVal), false);
}



vtkTetra^ vtkTetra::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkTetra* retVal = static_cast<::vtkTetra*>(::vtkTetra::SafeDownCast(oWrap));
  return gcnew vtkTetra(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkTetra::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkTetra>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkTetra::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkTetra>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




int vtkTetra::GetCellType()
{
  int retVal = vtk::ConvertManagedToNative<::vtkTetra>(m_instance)->GetCellType();
  return retVal;
}



int vtkTetra::GetNumberOfEdges()
{
  int retVal = vtk::ConvertManagedToNative<::vtkTetra>(m_instance)->GetNumberOfEdges();
  return retVal;
}



int vtkTetra::GetNumberOfFaces()
{
  int retVal = vtk::ConvertManagedToNative<::vtkTetra>(m_instance)->GetNumberOfFaces();
  return retVal;
}



vtkCell^ vtkTetra::GetEdge(int edgeId)
{
  ::vtkCell* retVal = static_cast<::vtkCell*>(vtk::ConvertManagedToNative<::vtkTetra>(m_instance)->GetEdge(edgeId));
  return gcnew vtkCell(IntPtr(retVal), false);
}



vtkCell^ vtkTetra::GetFace(int faceId)
{
  ::vtkCell* retVal = static_cast<::vtkCell*>(vtk::ConvertManagedToNative<::vtkTetra>(m_instance)->GetFace(faceId));
  return gcnew vtkCell(IntPtr(retVal), false);
}



void vtkTetra::Contour(double value, vtkDataArray^ cellScalars, vtkPointLocator^ locator, vtkCellArray^ verts, vtkCellArray^ lines, vtkCellArray^ polys, vtkPointData^ inPd, vtkPointData^ outPd, vtkCellData^ inCd, int cellId, vtkCellData^ outCd)
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
  vtk::ConvertManagedToNative<::vtkTetra>(m_instance)->Contour(value, cellScalarsWrap, locatorWrap, vertsWrap, linesWrap, polysWrap, inPdWrap, outPdWrap, inCdWrap, cellId, outCdWrap);
}



void vtkTetra::Clip(double value, vtkDataArray^ cellScalars, vtkPointLocator^ locator, vtkCellArray^ connectivity, vtkPointData^ inPd, vtkPointData^ outPd, vtkCellData^ inCd, int cellId, vtkCellData^ outCd, int insideOut)
{
  ::vtkDataArray* cellScalarsWrap = vtk::ConvertManagedToNative<::vtkDataArray>(cellScalars->GetNativePointer());
  ::vtkPointLocator* locatorWrap = vtk::ConvertManagedToNative<::vtkPointLocator>(locator->GetNativePointer());
  ::vtkCellArray* connectivityWrap = vtk::ConvertManagedToNative<::vtkCellArray>(connectivity->GetNativePointer());
  ::vtkPointData* inPdWrap = vtk::ConvertManagedToNative<::vtkPointData>(inPd->GetNativePointer());
  ::vtkPointData* outPdWrap = vtk::ConvertManagedToNative<::vtkPointData>(outPd->GetNativePointer());
  ::vtkCellData* inCdWrap = vtk::ConvertManagedToNative<::vtkCellData>(inCd->GetNativePointer());
  ::vtkCellData* outCdWrap = vtk::ConvertManagedToNative<::vtkCellData>(outCd->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkTetra>(m_instance)->Clip(value, cellScalarsWrap, locatorWrap, connectivityWrap, inPdWrap, outPdWrap, inCdWrap, cellId, outCdWrap, insideOut);
}



int vtkTetra::EvaluatePosition(array<double>^ x, array<double>^ closestPoint, int% subId, array<double>^ pcoords, double% dist2, array<double>^ weights)
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
  int retVal = vtk::ConvertManagedToNative<::vtkTetra>(m_instance)->EvaluatePosition(nativexPin, nativeclosestPointPin, *subIdPin, nativepcoordsPin, *dist2Pin, nativeweightsPin);
  return retVal;
}



void vtkTetra::EvaluateLocation(int% subId, array<double>^ pcoords, array<double>^ x, array<double>^ weights)
{
  pin_ptr<int> subIdPin = &subId;
  pin_ptr<double> pcoordsPin = &pcoords[0];
  double* nativepcoordsPin = pcoordsPin;
  pin_ptr<double> xPin = &x[0];
  double* nativexPin = xPin;
  pin_ptr<double> weightsPin = &weights[0];
  double* nativeweightsPin = weightsPin;
  vtk::ConvertManagedToNative<::vtkTetra>(m_instance)->EvaluateLocation(*subIdPin, nativepcoordsPin, nativexPin, nativeweightsPin);
}



int vtkTetra::IntersectWithLine(array<double>^ p1, array<double>^ p2, double tol, double% t, array<double>^ x, array<double>^ pcoords, int% subId)
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
  int retVal = vtk::ConvertManagedToNative<::vtkTetra>(m_instance)->IntersectWithLine(nativep1Pin, nativep2Pin, tol, *tPin, nativexPin, nativepcoordsPin, *subIdPin);
  return retVal;
}



int vtkTetra::Triangulate(int index, vtkIdList^ ptIds, vtkPoints^ pts)
{
  ::vtkIdList* ptIdsWrap = vtk::ConvertManagedToNative<::vtkIdList>(ptIds->GetNativePointer());
  ::vtkPoints* ptsWrap = vtk::ConvertManagedToNative<::vtkPoints>(pts->GetNativePointer());
  int retVal = vtk::ConvertManagedToNative<::vtkTetra>(m_instance)->Triangulate(index, ptIdsWrap, ptsWrap);
  return retVal;
}



void vtkTetra::Derivatives(int subId, array<double>^ pcoords, array<double>^ values, int dim, array<double>^ derivs)
{
  pin_ptr<double> pcoordsPin = &pcoords[0];
  double* nativepcoordsPin = pcoordsPin;
  pin_ptr<double> valuesPin = &values[0];
  double* nativevaluesPin = valuesPin;
  pin_ptr<double> derivsPin = &derivs[0];
  double* nativederivsPin = derivsPin;
  vtk::ConvertManagedToNative<::vtkTetra>(m_instance)->Derivatives(subId, nativepcoordsPin, nativevaluesPin, dim, nativederivsPin);
}



int vtkTetra::CellBoundary(int subId, array<double>^ pcoords, vtkIdList^ pts)
{
  pin_ptr<double> pcoordsPin = &pcoords[0];
  double* nativepcoordsPin = pcoordsPin;
  ::vtkIdList* ptsWrap = vtk::ConvertManagedToNative<::vtkIdList>(pts->GetNativePointer());
  int retVal = vtk::ConvertManagedToNative<::vtkTetra>(m_instance)->CellBoundary(subId, nativepcoordsPin, ptsWrap);
  return retVal;
}



int vtkTetra::GetParametricCenter(array<double>^ pcoords)
{
  pin_ptr<double> pcoordsPin = &pcoords[0];
  double* nativepcoordsPin = pcoordsPin;
  int retVal = vtk::ConvertManagedToNative<::vtkTetra>(m_instance)->GetParametricCenter(nativepcoordsPin);
  return retVal;
}



double vtkTetra::GetParametricDistance(array<double>^ pcoords)
{
  pin_ptr<double> pcoordsPin = &pcoords[0];
  double* nativepcoordsPin = pcoordsPin;
  double retVal = vtk::ConvertManagedToNative<::vtkTetra>(m_instance)->GetParametricDistance(nativepcoordsPin);
  return retVal;
}



void vtkTetra::TetraCenter(array<double>^ p1, array<double>^ p2, array<double>^ p3, array<double>^ p4, array<double>^ center)
{
  pin_ptr<double> p1Pin = &p1[0];
  double* nativep1Pin = p1Pin;
  pin_ptr<double> p2Pin = &p2[0];
  double* nativep2Pin = p2Pin;
  pin_ptr<double> p3Pin = &p3[0];
  double* nativep3Pin = p3Pin;
  pin_ptr<double> p4Pin = &p4[0];
  double* nativep4Pin = p4Pin;
  pin_ptr<double> centerPin = &center[0];
  double* nativecenterPin = centerPin;
  ::vtkTetra::TetraCenter(nativep1Pin, nativep2Pin, nativep3Pin, nativep4Pin, nativecenterPin);
}



double vtkTetra::Circumsphere(array<double>^ p1, array<double>^ p2, array<double>^ p3, array<double>^ p4, array<double>^ center)
{
  pin_ptr<double> p1Pin = &p1[0];
  double* nativep1Pin = p1Pin;
  pin_ptr<double> p2Pin = &p2[0];
  double* nativep2Pin = p2Pin;
  pin_ptr<double> p3Pin = &p3[0];
  double* nativep3Pin = p3Pin;
  pin_ptr<double> p4Pin = &p4[0];
  double* nativep4Pin = p4Pin;
  pin_ptr<double> centerPin = &center[0];
  double* nativecenterPin = centerPin;
  double retVal = ::vtkTetra::Circumsphere(nativep1Pin, nativep2Pin, nativep3Pin, nativep4Pin, nativecenterPin);
  return retVal;
}



double vtkTetra::Insphere(array<double>^ p1, array<double>^ p2, array<double>^ p3, array<double>^ p4, array<double>^ center)
{
  pin_ptr<double> p1Pin = &p1[0];
  double* nativep1Pin = p1Pin;
  pin_ptr<double> p2Pin = &p2[0];
  double* nativep2Pin = p2Pin;
  pin_ptr<double> p3Pin = &p3[0];
  double* nativep3Pin = p3Pin;
  pin_ptr<double> p4Pin = &p4[0];
  double* nativep4Pin = p4Pin;
  pin_ptr<double> centerPin = &center[0];
  double* nativecenterPin = centerPin;
  double retVal = ::vtkTetra::Insphere(nativep1Pin, nativep2Pin, nativep3Pin, nativep4Pin, nativecenterPin);
  return retVal;
}



int vtkTetra::BarycentricCoords(array<double>^ x, array<double>^ x1, array<double>^ x2, array<double>^ x3, array<double>^ x4, array<double>^ bcoords)
{
  pin_ptr<double> xPin = &x[0];
  double* nativexPin = xPin;
  pin_ptr<double> x1Pin = &x1[0];
  double* nativex1Pin = x1Pin;
  pin_ptr<double> x2Pin = &x2[0];
  double* nativex2Pin = x2Pin;
  pin_ptr<double> x3Pin = &x3[0];
  double* nativex3Pin = x3Pin;
  pin_ptr<double> x4Pin = &x4[0];
  double* nativex4Pin = x4Pin;
  pin_ptr<double> bcoordsPin = &bcoords[0];
  double* nativebcoordsPin = bcoordsPin;
  int retVal = ::vtkTetra::BarycentricCoords(nativexPin, nativex1Pin, nativex2Pin, nativex3Pin, nativex4Pin, nativebcoordsPin);
  return retVal;
}



double vtkTetra::ComputeVolume(array<double>^ p1, array<double>^ p2, array<double>^ p3, array<double>^ p4)
{
  pin_ptr<double> p1Pin = &p1[0];
  double* nativep1Pin = p1Pin;
  pin_ptr<double> p2Pin = &p2[0];
  double* nativep2Pin = p2Pin;
  pin_ptr<double> p3Pin = &p3[0];
  double* nativep3Pin = p3Pin;
  pin_ptr<double> p4Pin = &p4[0];
  double* nativep4Pin = p4Pin;
  double retVal = ::vtkTetra::ComputeVolume(nativep1Pin, nativep2Pin, nativep3Pin, nativep4Pin);
  return retVal;
}



void vtkTetra::InterpolationFunctions(array<double>^ pcoords, array<double>^ weights)
{
  pin_ptr<double> pcoordsPin = &pcoords[0];
  double* nativepcoordsPin = pcoordsPin;
  pin_ptr<double> weightsPin = &weights[0];
  double* nativeweightsPin = weightsPin;
  ::vtkTetra::InterpolationFunctions(nativepcoordsPin, nativeweightsPin);
}



void vtkTetra::InterpolationDerivs(array<double>^ derivs)
{
  pin_ptr<double> derivsPin = &derivs[0];
  double* nativederivsPin = derivsPin;
  ::vtkTetra::InterpolationDerivs(nativederivsPin);
}



  vtkTetra::vtkTetra(System::IntPtr native, bool bConst) : vtkCell3D(native, bConst) {}



  vtkTetra::vtkTetra(bool donothing) : vtkCell3D(donothing) {}



  vtkTetra::vtkTetra() : vtkCell3D(false) {
  this->SetNativePointer(IntPtr(::vtkTetra::New()));
}



  vtkTetra::~vtkTetra() { }





} // end namespace vtkFiltering
