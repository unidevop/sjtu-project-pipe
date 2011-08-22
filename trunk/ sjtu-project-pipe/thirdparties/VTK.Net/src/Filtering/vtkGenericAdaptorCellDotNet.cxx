

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkGenericAdaptorCellDotNet.h"
#include "vtkCellArrayDotNet.h"
#include "vtkCellDataDotNet.h"
#include "vtkGenericAttributeDotNet.h"
#include "vtkGenericAttributeCollectionDotNet.h"
#include "vtkGenericCellIteratorDotNet.h"
#include "vtkGenericCellTessellatorDotNet.h"
#include "vtkGenericPointIteratorDotNet.h"
#include "vtkPointDataDotNet.h"
#include "vtkPointLocatorDotNet.h"

// native includes
#include "strstream"
#include "vtkGenericAdaptorCell.h"
#include "vtkCellArray.h"
#include "vtkCellData.h"
#include "vtkContourValues.h"
#include "vtkGenericAttribute.h"
#include "vtkGenericAttributeCollection.h"
#include "vtkGenericCellIterator.h"
#include "vtkGenericCellTessellator.h"
#include "vtkGenericPointIterator.h"
#include "vtkImplicitFunction.h"
#include "vtkPointData.h"
#include "vtkPointLocator.h"
#include "vtkPoints.h"
#include "vtkUnsignedCharArray.h"

using namespace System;

namespace vtk {

System::String^ vtkGenericAdaptorCell::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkGenericAdaptorCell>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkGenericAdaptorCell::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkGenericAdaptorCell>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkGenericAdaptorCell^ vtkGenericAdaptorCell::NewInstance()
{
  ::vtkGenericAdaptorCell* retVal = static_cast<::vtkGenericAdaptorCell*>(vtk::ConvertManagedToNative<::vtkGenericAdaptorCell>(m_instance)->NewInstance());
  return gcnew vtkGenericAdaptorCell(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkGenericAdaptorCell::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkGenericAdaptorCell>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkGenericAdaptorCell::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkGenericAdaptorCell>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




int vtkGenericAdaptorCell::GetId()
{
  int retVal = vtk::ConvertManagedToNative<::vtkGenericAdaptorCell>(m_instance)->GetId();
  return retVal;
}



int vtkGenericAdaptorCell::IsInDataSet()
{
  int retVal = vtk::ConvertManagedToNative<::vtkGenericAdaptorCell>(m_instance)->IsInDataSet();
  return retVal;
}



int vtkGenericAdaptorCell::GetType()
{
  int retVal = vtk::ConvertManagedToNative<::vtkGenericAdaptorCell>(m_instance)->GetType();
  return retVal;
}



int vtkGenericAdaptorCell::GetDimension()
{
  int retVal = vtk::ConvertManagedToNative<::vtkGenericAdaptorCell>(m_instance)->GetDimension();
  return retVal;
}



int vtkGenericAdaptorCell::GetGeometryOrder()
{
  int retVal = vtk::ConvertManagedToNative<::vtkGenericAdaptorCell>(m_instance)->GetGeometryOrder();
  return retVal;
}



int vtkGenericAdaptorCell::IsGeometryLinear()
{
  int retVal = vtk::ConvertManagedToNative<::vtkGenericAdaptorCell>(m_instance)->IsGeometryLinear();
  return retVal;
}



int vtkGenericAdaptorCell::GetAttributeOrder(vtkGenericAttribute^ a)
{
  ::vtkGenericAttribute* aWrap = vtk::ConvertManagedToNative<::vtkGenericAttribute>(a->GetNativePointer());
  int retVal = vtk::ConvertManagedToNative<::vtkGenericAdaptorCell>(m_instance)->GetAttributeOrder(aWrap);
  return retVal;
}



int vtkGenericAdaptorCell::GetHighestOrderAttribute(vtkGenericAttributeCollection^ ac)
{
  ::vtkGenericAttributeCollection* acWrap = vtk::ConvertManagedToNative<::vtkGenericAttributeCollection>(ac->GetNativePointer());
  int retVal = vtk::ConvertManagedToNative<::vtkGenericAdaptorCell>(m_instance)->GetHighestOrderAttribute(acWrap);
  return retVal;
}



int vtkGenericAdaptorCell::IsAttributeLinear(vtkGenericAttribute^ a)
{
  ::vtkGenericAttribute* aWrap = vtk::ConvertManagedToNative<::vtkGenericAttribute>(a->GetNativePointer());
  int retVal = vtk::ConvertManagedToNative<::vtkGenericAdaptorCell>(m_instance)->IsAttributeLinear(aWrap);
  return retVal;
}



int vtkGenericAdaptorCell::IsPrimary()
{
  int retVal = vtk::ConvertManagedToNative<::vtkGenericAdaptorCell>(m_instance)->IsPrimary();
  return retVal;
}



int vtkGenericAdaptorCell::GetNumberOfPoints()
{
  int retVal = vtk::ConvertManagedToNative<::vtkGenericAdaptorCell>(m_instance)->GetNumberOfPoints();
  return retVal;
}



int vtkGenericAdaptorCell::GetNumberOfBoundaries(int dim)
{
  int retVal = vtk::ConvertManagedToNative<::vtkGenericAdaptorCell>(m_instance)->GetNumberOfBoundaries(dim);
  return retVal;
}



int vtkGenericAdaptorCell::GetNumberOfDOFNodes()
{
  int retVal = vtk::ConvertManagedToNative<::vtkGenericAdaptorCell>(m_instance)->GetNumberOfDOFNodes();
  return retVal;
}



void vtkGenericAdaptorCell::GetPointIterator(vtkGenericPointIterator^ it)
{
  ::vtkGenericPointIterator* itWrap = vtk::ConvertManagedToNative<::vtkGenericPointIterator>(it->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkGenericAdaptorCell>(m_instance)->GetPointIterator(itWrap);
}



vtkGenericCellIterator^ vtkGenericAdaptorCell::NewCellIterator()
{
  ::vtkGenericCellIterator* retVal = static_cast<::vtkGenericCellIterator*>(vtk::ConvertManagedToNative<::vtkGenericAdaptorCell>(m_instance)->NewCellIterator());
  return gcnew vtkGenericCellIterator(IntPtr(retVal), false);
}



void vtkGenericAdaptorCell::GetBoundaryIterator(vtkGenericCellIterator^ boundaries, int dim)
{
  ::vtkGenericCellIterator* boundariesWrap = vtk::ConvertManagedToNative<::vtkGenericCellIterator>(boundaries->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkGenericAdaptorCell>(m_instance)->GetBoundaryIterator(boundariesWrap, dim);
}



int vtkGenericAdaptorCell::CountNeighbors(vtkGenericAdaptorCell^ boundary)
{
  ::vtkGenericAdaptorCell* boundaryWrap = vtk::ConvertManagedToNative<::vtkGenericAdaptorCell>(boundary->GetNativePointer());
  int retVal = vtk::ConvertManagedToNative<::vtkGenericAdaptorCell>(m_instance)->CountNeighbors(boundaryWrap);
  return retVal;
}



void vtkGenericAdaptorCell::CountEdgeNeighbors(array<int>^ sharing)
{
  pin_ptr<int> sharingPin = &sharing[0];
  int* nativesharingPin = sharingPin;
  vtk::ConvertManagedToNative<::vtkGenericAdaptorCell>(m_instance)->CountEdgeNeighbors(nativesharingPin);
}



void vtkGenericAdaptorCell::GetNeighbors(vtkGenericAdaptorCell^ boundary, vtkGenericCellIterator^ neighbors)
{
  ::vtkGenericAdaptorCell* boundaryWrap = vtk::ConvertManagedToNative<::vtkGenericAdaptorCell>(boundary->GetNativePointer());
  ::vtkGenericCellIterator* neighborsWrap = vtk::ConvertManagedToNative<::vtkGenericCellIterator>(neighbors->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkGenericAdaptorCell>(m_instance)->GetNeighbors(boundaryWrap, neighborsWrap);
}



int vtkGenericAdaptorCell::EvaluatePosition(array<double>^ x, array<double>^ closestPoint, int% subId, array<double>^ pcoords, double% dist2)
{
  pin_ptr<double> xPin = &x[0];
  double* nativexPin = xPin;
  pin_ptr<double> closestPointPin = &closestPoint[0];
  double* nativeclosestPointPin = closestPointPin;
  pin_ptr<int> subIdPin = &subId;
  pin_ptr<double> pcoordsPin = &pcoords[0];
  double* nativepcoordsPin = pcoordsPin;
  pin_ptr<double> dist2Pin = &dist2;
  int retVal = vtk::ConvertManagedToNative<::vtkGenericAdaptorCell>(m_instance)->EvaluatePosition(nativexPin, nativeclosestPointPin, *subIdPin, nativepcoordsPin, *dist2Pin);
  return retVal;
}



void vtkGenericAdaptorCell::EvaluateLocation(int subId, array<double>^ pcoords, array<double>^ x)
{
  pin_ptr<double> pcoordsPin = &pcoords[0];
  double* nativepcoordsPin = pcoordsPin;
  pin_ptr<double> xPin = &x[0];
  double* nativexPin = xPin;
  vtk::ConvertManagedToNative<::vtkGenericAdaptorCell>(m_instance)->EvaluateLocation(subId, nativepcoordsPin, nativexPin);
}



void vtkGenericAdaptorCell::InterpolateTuple(vtkGenericAttribute^ a, array<double>^ pcoords, array<double>^ val)
{
  ::vtkGenericAttribute* aWrap = vtk::ConvertManagedToNative<::vtkGenericAttribute>(a->GetNativePointer());
  pin_ptr<double> pcoordsPin = &pcoords[0];
  double* nativepcoordsPin = pcoordsPin;
  pin_ptr<double> valPin = &val[0];
  double* nativevalPin = valPin;
  vtk::ConvertManagedToNative<::vtkGenericAdaptorCell>(m_instance)->InterpolateTuple(aWrap, nativepcoordsPin, nativevalPin);
}



void vtkGenericAdaptorCell::InterpolateTuple(vtkGenericAttributeCollection^ c, array<double>^ pcoords, array<double>^ val)
{
  ::vtkGenericAttributeCollection* cWrap = vtk::ConvertManagedToNative<::vtkGenericAttributeCollection>(c->GetNativePointer());
  pin_ptr<double> pcoordsPin = &pcoords[0];
  double* nativepcoordsPin = pcoordsPin;
  pin_ptr<double> valPin = &val[0];
  double* nativevalPin = valPin;
  vtk::ConvertManagedToNative<::vtkGenericAdaptorCell>(m_instance)->InterpolateTuple(cWrap, nativepcoordsPin, nativevalPin);
}



void vtkGenericAdaptorCell::Contour(vtkContourValues^ values, vtkImplicitFunction^ f, vtkGenericAttributeCollection^ attributes, vtkGenericCellTessellator^ tess, vtkPointLocator^ locator, vtkCellArray^ verts, vtkCellArray^ lines, vtkCellArray^ polys, vtkPointData^ outPd, vtkCellData^ outCd, vtkPointData^ internalPd, vtkPointData^ secondaryPd, vtkCellData^ secondaryCd)
{
  ::vtkContourValues* valuesWrap = vtk::ConvertManagedToNative<::vtkContourValues>(values->GetNativePointer());
  ::vtkImplicitFunction* fWrap = vtk::ConvertManagedToNative<::vtkImplicitFunction>(f->GetNativePointer());
  ::vtkGenericAttributeCollection* attributesWrap = vtk::ConvertManagedToNative<::vtkGenericAttributeCollection>(attributes->GetNativePointer());
  ::vtkGenericCellTessellator* tessWrap = vtk::ConvertManagedToNative<::vtkGenericCellTessellator>(tess->GetNativePointer());
  ::vtkPointLocator* locatorWrap = vtk::ConvertManagedToNative<::vtkPointLocator>(locator->GetNativePointer());
  ::vtkCellArray* vertsWrap = vtk::ConvertManagedToNative<::vtkCellArray>(verts->GetNativePointer());
  ::vtkCellArray* linesWrap = vtk::ConvertManagedToNative<::vtkCellArray>(lines->GetNativePointer());
  ::vtkCellArray* polysWrap = vtk::ConvertManagedToNative<::vtkCellArray>(polys->GetNativePointer());
  ::vtkPointData* outPdWrap = vtk::ConvertManagedToNative<::vtkPointData>(outPd->GetNativePointer());
  ::vtkCellData* outCdWrap = vtk::ConvertManagedToNative<::vtkCellData>(outCd->GetNativePointer());
  ::vtkPointData* internalPdWrap = vtk::ConvertManagedToNative<::vtkPointData>(internalPd->GetNativePointer());
  ::vtkPointData* secondaryPdWrap = vtk::ConvertManagedToNative<::vtkPointData>(secondaryPd->GetNativePointer());
  ::vtkCellData* secondaryCdWrap = vtk::ConvertManagedToNative<::vtkCellData>(secondaryCd->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkGenericAdaptorCell>(m_instance)->Contour(valuesWrap, fWrap, attributesWrap, tessWrap, locatorWrap, vertsWrap, linesWrap, polysWrap, outPdWrap, outCdWrap, internalPdWrap, secondaryPdWrap, secondaryCdWrap);
}



void vtkGenericAdaptorCell::Clip(double value, vtkImplicitFunction^ f, vtkGenericAttributeCollection^ attributes, vtkGenericCellTessellator^ tess, int insideOut, vtkPointLocator^ locator, vtkCellArray^ connectivity, vtkPointData^ outPd, vtkCellData^ outCd, vtkPointData^ internalPd, vtkPointData^ secondaryPd, vtkCellData^ secondaryCd)
{
  ::vtkImplicitFunction* fWrap = vtk::ConvertManagedToNative<::vtkImplicitFunction>(f->GetNativePointer());
  ::vtkGenericAttributeCollection* attributesWrap = vtk::ConvertManagedToNative<::vtkGenericAttributeCollection>(attributes->GetNativePointer());
  ::vtkGenericCellTessellator* tessWrap = vtk::ConvertManagedToNative<::vtkGenericCellTessellator>(tess->GetNativePointer());
  ::vtkPointLocator* locatorWrap = vtk::ConvertManagedToNative<::vtkPointLocator>(locator->GetNativePointer());
  ::vtkCellArray* connectivityWrap = vtk::ConvertManagedToNative<::vtkCellArray>(connectivity->GetNativePointer());
  ::vtkPointData* outPdWrap = vtk::ConvertManagedToNative<::vtkPointData>(outPd->GetNativePointer());
  ::vtkCellData* outCdWrap = vtk::ConvertManagedToNative<::vtkCellData>(outCd->GetNativePointer());
  ::vtkPointData* internalPdWrap = vtk::ConvertManagedToNative<::vtkPointData>(internalPd->GetNativePointer());
  ::vtkPointData* secondaryPdWrap = vtk::ConvertManagedToNative<::vtkPointData>(secondaryPd->GetNativePointer());
  ::vtkCellData* secondaryCdWrap = vtk::ConvertManagedToNative<::vtkCellData>(secondaryCd->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkGenericAdaptorCell>(m_instance)->Clip(value, fWrap, attributesWrap, tessWrap, insideOut, locatorWrap, connectivityWrap, outPdWrap, outCdWrap, internalPdWrap, secondaryPdWrap, secondaryCdWrap);
}



int vtkGenericAdaptorCell::IntersectWithLine(array<double>^ p1, array<double>^ p2, double tol, double% t, array<double>^ x, array<double>^ pcoords, int% subId)
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
  int retVal = vtk::ConvertManagedToNative<::vtkGenericAdaptorCell>(m_instance)->IntersectWithLine(nativep1Pin, nativep2Pin, tol, *tPin, nativexPin, nativepcoordsPin, *subIdPin);
  return retVal;
}



void vtkGenericAdaptorCell::Derivatives(int subId, array<double>^ pcoords, vtkGenericAttribute^ attribute, array<double>^ derivs)
{
  pin_ptr<double> pcoordsPin = &pcoords[0];
  double* nativepcoordsPin = pcoordsPin;
  ::vtkGenericAttribute* attributeWrap = vtk::ConvertManagedToNative<::vtkGenericAttribute>(attribute->GetNativePointer());
  pin_ptr<double> derivsPin = &derivs[0];
  double* nativederivsPin = derivsPin;
  vtk::ConvertManagedToNative<::vtkGenericAdaptorCell>(m_instance)->Derivatives(subId, nativepcoordsPin, attributeWrap, nativederivsPin);
}



void vtkGenericAdaptorCell::GetBounds(array<double>^ bounds)
{
  pin_ptr<double> boundsPin = &bounds[0];
  double* nativeboundsPin = boundsPin;
  vtk::ConvertManagedToNative<::vtkGenericAdaptorCell>(m_instance)->GetBounds(nativeboundsPin);
}



double vtkGenericAdaptorCell::GetLength2()
{
  double retVal = vtk::ConvertManagedToNative<::vtkGenericAdaptorCell>(m_instance)->GetLength2();
  return retVal;
}



int vtkGenericAdaptorCell::GetParametricCenter(array<double>^ pcoords)
{
  pin_ptr<double> pcoordsPin = &pcoords[0];
  double* nativepcoordsPin = pcoordsPin;
  int retVal = vtk::ConvertManagedToNative<::vtkGenericAdaptorCell>(m_instance)->GetParametricCenter(nativepcoordsPin);
  return retVal;
}



double vtkGenericAdaptorCell::GetParametricDistance(array<double>^ pcoords)
{
  pin_ptr<double> pcoordsPin = &pcoords[0];
  double* nativepcoordsPin = pcoordsPin;
  double retVal = vtk::ConvertManagedToNative<::vtkGenericAdaptorCell>(m_instance)->GetParametricDistance(nativepcoordsPin);
  return retVal;
}



void vtkGenericAdaptorCell::Tessellate(vtkGenericAttributeCollection^ attributes, vtkGenericCellTessellator^ tess, vtkPoints^ points, vtkPointLocator^ locator, vtkCellArray^ cellArray, vtkPointData^ internalPd, vtkPointData^ pd, vtkCellData^ cd, vtkUnsignedCharArray^ types)
{
  ::vtkGenericAttributeCollection* attributesWrap = vtk::ConvertManagedToNative<::vtkGenericAttributeCollection>(attributes->GetNativePointer());
  ::vtkGenericCellTessellator* tessWrap = vtk::ConvertManagedToNative<::vtkGenericCellTessellator>(tess->GetNativePointer());
  ::vtkPoints* pointsWrap = vtk::ConvertManagedToNative<::vtkPoints>(points->GetNativePointer());
  ::vtkPointLocator* locatorWrap = vtk::ConvertManagedToNative<::vtkPointLocator>(locator->GetNativePointer());
  ::vtkCellArray* cellArrayWrap = vtk::ConvertManagedToNative<::vtkCellArray>(cellArray->GetNativePointer());
  ::vtkPointData* internalPdWrap = vtk::ConvertManagedToNative<::vtkPointData>(internalPd->GetNativePointer());
  ::vtkPointData* pdWrap = vtk::ConvertManagedToNative<::vtkPointData>(pd->GetNativePointer());
  ::vtkCellData* cdWrap = vtk::ConvertManagedToNative<::vtkCellData>(cd->GetNativePointer());
  ::vtkUnsignedCharArray* typesWrap = vtk::ConvertManagedToNative<::vtkUnsignedCharArray>(types->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkGenericAdaptorCell>(m_instance)->Tessellate(attributesWrap, tessWrap, pointsWrap, locatorWrap, cellArrayWrap, internalPdWrap, pdWrap, cdWrap, typesWrap);
}



int vtkGenericAdaptorCell::IsFaceOnBoundary(int faceId)
{
  int retVal = vtk::ConvertManagedToNative<::vtkGenericAdaptorCell>(m_instance)->IsFaceOnBoundary(faceId);
  return retVal;
}



int vtkGenericAdaptorCell::IsOnBoundary()
{
  int retVal = vtk::ConvertManagedToNative<::vtkGenericAdaptorCell>(m_instance)->IsOnBoundary();
  return retVal;
}



void vtkGenericAdaptorCell::GetPointIds(array<int>^ arg0)
{
  pin_ptr<int> arg0Pin = &arg0[0];
  int* nativearg0Pin = arg0Pin;
  vtk::ConvertManagedToNative<::vtkGenericAdaptorCell>(m_instance)->GetPointIds(nativearg0Pin);
}



void vtkGenericAdaptorCell::TriangulateFace(vtkGenericAttributeCollection^ attributes, vtkGenericCellTessellator^ tess, int index, vtkPoints^ points, vtkPointLocator^ locator, vtkCellArray^ cellArray, vtkPointData^ internalPd, vtkPointData^ pd, vtkCellData^ cd)
{
  ::vtkGenericAttributeCollection* attributesWrap = vtk::ConvertManagedToNative<::vtkGenericAttributeCollection>(attributes->GetNativePointer());
  ::vtkGenericCellTessellator* tessWrap = vtk::ConvertManagedToNative<::vtkGenericCellTessellator>(tess->GetNativePointer());
  ::vtkPoints* pointsWrap = vtk::ConvertManagedToNative<::vtkPoints>(points->GetNativePointer());
  ::vtkPointLocator* locatorWrap = vtk::ConvertManagedToNative<::vtkPointLocator>(locator->GetNativePointer());
  ::vtkCellArray* cellArrayWrap = vtk::ConvertManagedToNative<::vtkCellArray>(cellArray->GetNativePointer());
  ::vtkPointData* internalPdWrap = vtk::ConvertManagedToNative<::vtkPointData>(internalPd->GetNativePointer());
  ::vtkPointData* pdWrap = vtk::ConvertManagedToNative<::vtkPointData>(pd->GetNativePointer());
  ::vtkCellData* cdWrap = vtk::ConvertManagedToNative<::vtkCellData>(cd->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkGenericAdaptorCell>(m_instance)->TriangulateFace(attributesWrap, tessWrap, index, pointsWrap, locatorWrap, cellArrayWrap, internalPdWrap, pdWrap, cdWrap);
}



int vtkGenericAdaptorCell::GetNumberOfVerticesOnFace(int faceId)
{
  int retVal = vtk::ConvertManagedToNative<::vtkGenericAdaptorCell>(m_instance)->GetNumberOfVerticesOnFace(faceId);
  return retVal;
}



  vtkGenericAdaptorCell::vtkGenericAdaptorCell(System::IntPtr native, bool bConst) : vtkObject(native, bConst) {}



  vtkGenericAdaptorCell::vtkGenericAdaptorCell(bool donothing) : vtkObject(donothing) {}



  vtkGenericAdaptorCell::vtkGenericAdaptorCell() : vtkObject(false) {
  this->SetNativePointer(IntPtr(::vtkGenericAdaptorCell::New()));
}



  vtkGenericAdaptorCell::~vtkGenericAdaptorCell() { }





} // end namespace vtkFiltering
