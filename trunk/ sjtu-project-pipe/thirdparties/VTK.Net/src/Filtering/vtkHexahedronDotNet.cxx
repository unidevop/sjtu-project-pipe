

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkHexahedronDotNet.h"
#include "vtkCellDotNet.h"
#include "vtkCellArrayDotNet.h"
#include "vtkCellDataDotNet.h"
#include "vtkPointDataDotNet.h"
#include "vtkPointLocatorDotNet.h"

// native includes
#include "strstream"
#include "vtkHexahedron.h"
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

System::String^ vtkHexahedron::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkHexahedron>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkHexahedron::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkHexahedron>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkHexahedron^ vtkHexahedron::NewInstance()
{
  ::vtkHexahedron* retVal = static_cast<::vtkHexahedron*>(vtk::ConvertManagedToNative<::vtkHexahedron>(m_instance)->NewInstance());
  return gcnew vtkHexahedron(IntPtr(retVal), false);
}



vtkHexahedron^ vtkHexahedron::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkHexahedron* retVal = static_cast<::vtkHexahedron*>(::vtkHexahedron::SafeDownCast(oWrap));
  return gcnew vtkHexahedron(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkHexahedron::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkHexahedron>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkHexahedron::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkHexahedron>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




int vtkHexahedron::GetCellType()
{
  int retVal = vtk::ConvertManagedToNative<::vtkHexahedron>(m_instance)->GetCellType();
  return retVal;
}



int vtkHexahedron::GetNumberOfEdges()
{
  int retVal = vtk::ConvertManagedToNative<::vtkHexahedron>(m_instance)->GetNumberOfEdges();
  return retVal;
}



int vtkHexahedron::GetNumberOfFaces()
{
  int retVal = vtk::ConvertManagedToNative<::vtkHexahedron>(m_instance)->GetNumberOfFaces();
  return retVal;
}



vtkCell^ vtkHexahedron::GetEdge(int edgeId)
{
  ::vtkCell* retVal = static_cast<::vtkCell*>(vtk::ConvertManagedToNative<::vtkHexahedron>(m_instance)->GetEdge(edgeId));
  return gcnew vtkCell(IntPtr(retVal), false);
}



vtkCell^ vtkHexahedron::GetFace(int faceId)
{
  ::vtkCell* retVal = static_cast<::vtkCell*>(vtk::ConvertManagedToNative<::vtkHexahedron>(m_instance)->GetFace(faceId));
  return gcnew vtkCell(IntPtr(retVal), false);
}



int vtkHexahedron::CellBoundary(int subId, array<double>^ pcoords, vtkIdList^ pts)
{
  pin_ptr<double> pcoordsPin = &pcoords[0];
  double* nativepcoordsPin = pcoordsPin;
  ::vtkIdList* ptsWrap = vtk::ConvertManagedToNative<::vtkIdList>(pts->GetNativePointer());
  int retVal = vtk::ConvertManagedToNative<::vtkHexahedron>(m_instance)->CellBoundary(subId, nativepcoordsPin, ptsWrap);
  return retVal;
}



void vtkHexahedron::Contour(double value, vtkDataArray^ cellScalars, vtkPointLocator^ locator, vtkCellArray^ verts, vtkCellArray^ lines, vtkCellArray^ polys, vtkPointData^ inPd, vtkPointData^ outPd, vtkCellData^ inCd, int cellId, vtkCellData^ outCd)
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
  vtk::ConvertManagedToNative<::vtkHexahedron>(m_instance)->Contour(value, cellScalarsWrap, locatorWrap, vertsWrap, linesWrap, polysWrap, inPdWrap, outPdWrap, inCdWrap, cellId, outCdWrap);
}



int vtkHexahedron::EvaluatePosition(array<double>^ x, array<double>^ closestPoint, int% subId, array<double>^ pcoords, double% dist2, array<double>^ weights)
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
  int retVal = vtk::ConvertManagedToNative<::vtkHexahedron>(m_instance)->EvaluatePosition(nativexPin, nativeclosestPointPin, *subIdPin, nativepcoordsPin, *dist2Pin, nativeweightsPin);
  return retVal;
}



void vtkHexahedron::EvaluateLocation(int% subId, array<double>^ pcoords, array<double>^ x, array<double>^ weights)
{
  pin_ptr<int> subIdPin = &subId;
  pin_ptr<double> pcoordsPin = &pcoords[0];
  double* nativepcoordsPin = pcoordsPin;
  pin_ptr<double> xPin = &x[0];
  double* nativexPin = xPin;
  pin_ptr<double> weightsPin = &weights[0];
  double* nativeweightsPin = weightsPin;
  vtk::ConvertManagedToNative<::vtkHexahedron>(m_instance)->EvaluateLocation(*subIdPin, nativepcoordsPin, nativexPin, nativeweightsPin);
}



int vtkHexahedron::IntersectWithLine(array<double>^ p1, array<double>^ p2, double tol, double% t, array<double>^ x, array<double>^ pcoords, int% subId)
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
  int retVal = vtk::ConvertManagedToNative<::vtkHexahedron>(m_instance)->IntersectWithLine(nativep1Pin, nativep2Pin, tol, *tPin, nativexPin, nativepcoordsPin, *subIdPin);
  return retVal;
}



int vtkHexahedron::Triangulate(int index, vtkIdList^ ptIds, vtkPoints^ pts)
{
  ::vtkIdList* ptIdsWrap = vtk::ConvertManagedToNative<::vtkIdList>(ptIds->GetNativePointer());
  ::vtkPoints* ptsWrap = vtk::ConvertManagedToNative<::vtkPoints>(pts->GetNativePointer());
  int retVal = vtk::ConvertManagedToNative<::vtkHexahedron>(m_instance)->Triangulate(index, ptIdsWrap, ptsWrap);
  return retVal;
}



void vtkHexahedron::Derivatives(int subId, array<double>^ pcoords, array<double>^ values, int dim, array<double>^ derivs)
{
  pin_ptr<double> pcoordsPin = &pcoords[0];
  double* nativepcoordsPin = pcoordsPin;
  pin_ptr<double> valuesPin = &values[0];
  double* nativevaluesPin = valuesPin;
  pin_ptr<double> derivsPin = &derivs[0];
  double* nativederivsPin = derivsPin;
  vtk::ConvertManagedToNative<::vtkHexahedron>(m_instance)->Derivatives(subId, nativepcoordsPin, nativevaluesPin, dim, nativederivsPin);
}



void vtkHexahedron::InterpolationFunctions(array<double>^ pcoords, array<double>^ weights)
{
  pin_ptr<double> pcoordsPin = &pcoords[0];
  double* nativepcoordsPin = pcoordsPin;
  pin_ptr<double> weightsPin = &weights[0];
  double* nativeweightsPin = weightsPin;
  ::vtkHexahedron::InterpolationFunctions(nativepcoordsPin, nativeweightsPin);
}



void vtkHexahedron::InterpolationDerivs(array<double>^ pcoords, array<double>^ derivs)
{
  pin_ptr<double> pcoordsPin = &pcoords[0];
  double* nativepcoordsPin = pcoordsPin;
  pin_ptr<double> derivsPin = &derivs[0];
  double* nativederivsPin = derivsPin;
  ::vtkHexahedron::InterpolationDerivs(nativepcoordsPin, nativederivsPin);
}



  vtkHexahedron::vtkHexahedron(System::IntPtr native, bool bConst) : vtkCell3D(native, bConst) {}



  vtkHexahedron::vtkHexahedron(bool donothing) : vtkCell3D(donothing) {}



  vtkHexahedron::vtkHexahedron() : vtkCell3D(false) {
  this->SetNativePointer(IntPtr(::vtkHexahedron::New()));
}



  vtkHexahedron::~vtkHexahedron() { }





} // end namespace vtkFiltering
