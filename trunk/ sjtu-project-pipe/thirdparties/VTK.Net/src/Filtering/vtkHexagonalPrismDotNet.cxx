

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkHexagonalPrismDotNet.h"
#include "vtkCellDotNet.h"

// native includes
#include "strstream"
#include "vtkHexagonalPrism.h"
#include "vtkCell.h"
#include "vtkIdList.h"
#include "vtkObject.h"
#include "vtkPoints.h"

using namespace System;

namespace vtk {

System::String^ vtkHexagonalPrism::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkHexagonalPrism>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkHexagonalPrism::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkHexagonalPrism>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkHexagonalPrism^ vtkHexagonalPrism::NewInstance()
{
  ::vtkHexagonalPrism* retVal = static_cast<::vtkHexagonalPrism*>(vtk::ConvertManagedToNative<::vtkHexagonalPrism>(m_instance)->NewInstance());
  return gcnew vtkHexagonalPrism(IntPtr(retVal), false);
}



vtkHexagonalPrism^ vtkHexagonalPrism::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkHexagonalPrism* retVal = static_cast<::vtkHexagonalPrism*>(::vtkHexagonalPrism::SafeDownCast(oWrap));
  return gcnew vtkHexagonalPrism(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkHexagonalPrism::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkHexagonalPrism>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkHexagonalPrism::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkHexagonalPrism>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




int vtkHexagonalPrism::GetCellType()
{
  int retVal = vtk::ConvertManagedToNative<::vtkHexagonalPrism>(m_instance)->GetCellType();
  return retVal;
}



int vtkHexagonalPrism::GetCellDimension()
{
  int retVal = vtk::ConvertManagedToNative<::vtkHexagonalPrism>(m_instance)->GetCellDimension();
  return retVal;
}



int vtkHexagonalPrism::GetNumberOfEdges()
{
  int retVal = vtk::ConvertManagedToNative<::vtkHexagonalPrism>(m_instance)->GetNumberOfEdges();
  return retVal;
}



int vtkHexagonalPrism::GetNumberOfFaces()
{
  int retVal = vtk::ConvertManagedToNative<::vtkHexagonalPrism>(m_instance)->GetNumberOfFaces();
  return retVal;
}



vtkCell^ vtkHexagonalPrism::GetEdge(int edgeId)
{
  ::vtkCell* retVal = static_cast<::vtkCell*>(vtk::ConvertManagedToNative<::vtkHexagonalPrism>(m_instance)->GetEdge(edgeId));
  return gcnew vtkCell(IntPtr(retVal), false);
}



vtkCell^ vtkHexagonalPrism::GetFace(int faceId)
{
  ::vtkCell* retVal = static_cast<::vtkCell*>(vtk::ConvertManagedToNative<::vtkHexagonalPrism>(m_instance)->GetFace(faceId));
  return gcnew vtkCell(IntPtr(retVal), false);
}



int vtkHexagonalPrism::CellBoundary(int subId, array<double>^ pcoords, vtkIdList^ pts)
{
  pin_ptr<double> pcoordsPin = &pcoords[0];
  double* nativepcoordsPin = pcoordsPin;
  ::vtkIdList* ptsWrap = vtk::ConvertManagedToNative<::vtkIdList>(pts->GetNativePointer());
  int retVal = vtk::ConvertManagedToNative<::vtkHexagonalPrism>(m_instance)->CellBoundary(subId, nativepcoordsPin, ptsWrap);
  return retVal;
}



int vtkHexagonalPrism::EvaluatePosition(array<double>^ x, array<double>^ closestPoint, int% subId, array<double>^ pcoords, double% dist2, array<double>^ weights)
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
  int retVal = vtk::ConvertManagedToNative<::vtkHexagonalPrism>(m_instance)->EvaluatePosition(nativexPin, nativeclosestPointPin, *subIdPin, nativepcoordsPin, *dist2Pin, nativeweightsPin);
  return retVal;
}



void vtkHexagonalPrism::EvaluateLocation(int% subId, array<double>^ pcoords, array<double>^ x, array<double>^ weights)
{
  pin_ptr<int> subIdPin = &subId;
  pin_ptr<double> pcoordsPin = &pcoords[0];
  double* nativepcoordsPin = pcoordsPin;
  pin_ptr<double> xPin = &x[0];
  double* nativexPin = xPin;
  pin_ptr<double> weightsPin = &weights[0];
  double* nativeweightsPin = weightsPin;
  vtk::ConvertManagedToNative<::vtkHexagonalPrism>(m_instance)->EvaluateLocation(*subIdPin, nativepcoordsPin, nativexPin, nativeweightsPin);
}



int vtkHexagonalPrism::IntersectWithLine(array<double>^ p1, array<double>^ p2, double tol, double% t, array<double>^ x, array<double>^ pcoords, int% subId)
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
  int retVal = vtk::ConvertManagedToNative<::vtkHexagonalPrism>(m_instance)->IntersectWithLine(nativep1Pin, nativep2Pin, tol, *tPin, nativexPin, nativepcoordsPin, *subIdPin);
  return retVal;
}



int vtkHexagonalPrism::Triangulate(int index, vtkIdList^ ptIds, vtkPoints^ pts)
{
  ::vtkIdList* ptIdsWrap = vtk::ConvertManagedToNative<::vtkIdList>(ptIds->GetNativePointer());
  ::vtkPoints* ptsWrap = vtk::ConvertManagedToNative<::vtkPoints>(pts->GetNativePointer());
  int retVal = vtk::ConvertManagedToNative<::vtkHexagonalPrism>(m_instance)->Triangulate(index, ptIdsWrap, ptsWrap);
  return retVal;
}



void vtkHexagonalPrism::Derivatives(int subId, array<double>^ pcoords, array<double>^ values, int dim, array<double>^ derivs)
{
  pin_ptr<double> pcoordsPin = &pcoords[0];
  double* nativepcoordsPin = pcoordsPin;
  pin_ptr<double> valuesPin = &values[0];
  double* nativevaluesPin = valuesPin;
  pin_ptr<double> derivsPin = &derivs[0];
  double* nativederivsPin = derivsPin;
  vtk::ConvertManagedToNative<::vtkHexagonalPrism>(m_instance)->Derivatives(subId, nativepcoordsPin, nativevaluesPin, dim, nativederivsPin);
}



int vtkHexagonalPrism::GetParametricCenter(array<double>^ pcoords)
{
  pin_ptr<double> pcoordsPin = &pcoords[0];
  double* nativepcoordsPin = pcoordsPin;
  int retVal = vtk::ConvertManagedToNative<::vtkHexagonalPrism>(m_instance)->GetParametricCenter(nativepcoordsPin);
  return retVal;
}



void vtkHexagonalPrism::InterpolationFunctions(array<double>^ pcoords, array<double>^ weights)
{
  pin_ptr<double> pcoordsPin = &pcoords[0];
  double* nativepcoordsPin = pcoordsPin;
  pin_ptr<double> weightsPin = &weights[0];
  double* nativeweightsPin = weightsPin;
  ::vtkHexagonalPrism::InterpolationFunctions(nativepcoordsPin, nativeweightsPin);
}



void vtkHexagonalPrism::InterpolationDerivs(array<double>^ pcoords, array<double>^ derivs)
{
  pin_ptr<double> pcoordsPin = &pcoords[0];
  double* nativepcoordsPin = pcoordsPin;
  pin_ptr<double> derivsPin = &derivs[0];
  double* nativederivsPin = derivsPin;
  ::vtkHexagonalPrism::InterpolationDerivs(nativepcoordsPin, nativederivsPin);
}



  vtkHexagonalPrism::vtkHexagonalPrism(System::IntPtr native, bool bConst) : vtkCell3D(native, bConst) {}



  vtkHexagonalPrism::vtkHexagonalPrism(bool donothing) : vtkCell3D(donothing) {}



  vtkHexagonalPrism::vtkHexagonalPrism() : vtkCell3D(false) {
  this->SetNativePointer(IntPtr(::vtkHexagonalPrism::New()));
}



  vtkHexagonalPrism::~vtkHexagonalPrism() { }





} // end namespace vtkFiltering
