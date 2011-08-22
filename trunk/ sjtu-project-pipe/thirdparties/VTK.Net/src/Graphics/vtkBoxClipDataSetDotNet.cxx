

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkBoxClipDataSetDotNet.h"

// native includes
#include "strstream"
#include "vtkBoxClipDataSet.h"
#include "vtkCellArray.h"
#include "vtkCellData.h"
#include "vtkGenericCell.h"
#include "vtkObject.h"
#include "vtkPointData.h"
#include "vtkPointLocator.h"
#include "vtkPoints.h"
#include "vtkUnstructuredGrid.h"

using namespace System;

namespace vtk {

System::String^ vtkBoxClipDataSet::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkBoxClipDataSet>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkBoxClipDataSet::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkBoxClipDataSet>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkBoxClipDataSet^ vtkBoxClipDataSet::NewInstance()
{
  ::vtkBoxClipDataSet* retVal = static_cast<::vtkBoxClipDataSet*>(vtk::ConvertManagedToNative<::vtkBoxClipDataSet>(m_instance)->NewInstance());
  return gcnew vtkBoxClipDataSet(IntPtr(retVal), false);
}



vtkBoxClipDataSet^ vtkBoxClipDataSet::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkBoxClipDataSet* retVal = static_cast<::vtkBoxClipDataSet*>(::vtkBoxClipDataSet::SafeDownCast(oWrap));
  return gcnew vtkBoxClipDataSet(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkBoxClipDataSet::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkBoxClipDataSet>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkBoxClipDataSet::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkBoxClipDataSet>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkBoxClipDataSet::SetBoxClip(double xmin, double xmax, double ymin, double ymax, double zmin, double zmax)
{
  vtk::ConvertManagedToNative<::vtkBoxClipDataSet>(m_instance)->SetBoxClip(xmin, xmax, ymin, ymax, zmin, zmax);
}



void vtkBoxClipDataSet::SetBoxClip(array<double>^ n0, array<double>^ o0, array<double>^ n1, array<double>^ o1, array<double>^ n2, array<double>^ o2, array<double>^ n3, array<double>^ o3, array<double>^ n4, array<double>^ o4, array<double>^ n5, array<double>^ o5)
{
  pin_ptr<double> n0Pin = &n0[0];
  double* nativen0Pin = n0Pin;
  pin_ptr<double> o0Pin = &o0[0];
  double* nativeo0Pin = o0Pin;
  pin_ptr<double> n1Pin = &n1[0];
  double* nativen1Pin = n1Pin;
  pin_ptr<double> o1Pin = &o1[0];
  double* nativeo1Pin = o1Pin;
  pin_ptr<double> n2Pin = &n2[0];
  double* nativen2Pin = n2Pin;
  pin_ptr<double> o2Pin = &o2[0];
  double* nativeo2Pin = o2Pin;
  pin_ptr<double> n3Pin = &n3[0];
  double* nativen3Pin = n3Pin;
  pin_ptr<double> o3Pin = &o3[0];
  double* nativeo3Pin = o3Pin;
  pin_ptr<double> n4Pin = &n4[0];
  double* nativen4Pin = n4Pin;
  pin_ptr<double> o4Pin = &o4[0];
  double* nativeo4Pin = o4Pin;
  pin_ptr<double> n5Pin = &n5[0];
  double* nativen5Pin = n5Pin;
  pin_ptr<double> o5Pin = &o5[0];
  double* nativeo5Pin = o5Pin;
  vtk::ConvertManagedToNative<::vtkBoxClipDataSet>(m_instance)->SetBoxClip(nativen0Pin, nativeo0Pin, nativen1Pin, nativeo1Pin, nativen2Pin, nativeo2Pin, nativen3Pin, nativeo3Pin, nativen4Pin, nativeo4Pin, nativen5Pin, nativeo5Pin);
}



void vtkBoxClipDataSet::SetGenerateClipScalars(int arg0)
{
  vtk::ConvertManagedToNative<::vtkBoxClipDataSet>(m_instance)->SetGenerateClipScalars(arg0);
}



int vtkBoxClipDataSet::GetGenerateClipScalars()
{
  int retVal = vtk::ConvertManagedToNative<::vtkBoxClipDataSet>(m_instance)->GetGenerateClipScalars();
  return retVal;
}



void vtkBoxClipDataSet::GenerateClipScalarsOn()
{
  vtk::ConvertManagedToNative<::vtkBoxClipDataSet>(m_instance)->GenerateClipScalarsOn();
}



void vtkBoxClipDataSet::GenerateClipScalarsOff()
{
  vtk::ConvertManagedToNative<::vtkBoxClipDataSet>(m_instance)->GenerateClipScalarsOff();
}



void vtkBoxClipDataSet::SetGenerateClippedOutput(int arg0)
{
  vtk::ConvertManagedToNative<::vtkBoxClipDataSet>(m_instance)->SetGenerateClippedOutput(arg0);
}



int vtkBoxClipDataSet::GetGenerateClippedOutput()
{
  int retVal = vtk::ConvertManagedToNative<::vtkBoxClipDataSet>(m_instance)->GetGenerateClippedOutput();
  return retVal;
}



void vtkBoxClipDataSet::GenerateClippedOutputOn()
{
  vtk::ConvertManagedToNative<::vtkBoxClipDataSet>(m_instance)->GenerateClippedOutputOn();
}



void vtkBoxClipDataSet::GenerateClippedOutputOff()
{
  vtk::ConvertManagedToNative<::vtkBoxClipDataSet>(m_instance)->GenerateClippedOutputOff();
}



vtkUnstructuredGrid^ vtkBoxClipDataSet::GetClippedOutput()
{
  ::vtkUnstructuredGrid* retVal = static_cast<::vtkUnstructuredGrid*>(vtk::ConvertManagedToNative<::vtkBoxClipDataSet>(m_instance)->GetClippedOutput());
  return gcnew vtkUnstructuredGrid(IntPtr(retVal), false);
}



int vtkBoxClipDataSet::GetNumberOfOutputs()
{
  int retVal = vtk::ConvertManagedToNative<::vtkBoxClipDataSet>(m_instance)->GetNumberOfOutputs();
  return retVal;
}



void vtkBoxClipDataSet::SetLocator(vtkPointLocator^ locator)
{
  ::vtkPointLocator* locatorWrap = vtk::ConvertManagedToNative<::vtkPointLocator>(locator->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkBoxClipDataSet>(m_instance)->SetLocator(locatorWrap);
}



vtkPointLocator^ vtkBoxClipDataSet::GetLocator()
{
  ::vtkPointLocator* retVal = static_cast<::vtkPointLocator*>(vtk::ConvertManagedToNative<::vtkBoxClipDataSet>(m_instance)->GetLocator());
  return gcnew vtkPointLocator(IntPtr(retVal), false);
}



void vtkBoxClipDataSet::CreateDefaultLocator()
{
  vtk::ConvertManagedToNative<::vtkBoxClipDataSet>(m_instance)->CreateDefaultLocator();
}



unsigned long vtkBoxClipDataSet::GetMTime()
{
  unsigned long retVal = vtk::ConvertManagedToNative<::vtkBoxClipDataSet>(m_instance)->GetMTime();
  return retVal;
}



unsigned int vtkBoxClipDataSet::GetOrientation()
{
  unsigned int retVal = vtk::ConvertManagedToNative<::vtkBoxClipDataSet>(m_instance)->GetOrientation();
  return retVal;
}



void vtkBoxClipDataSet::SetOrientation(unsigned int arg0)
{
  vtk::ConvertManagedToNative<::vtkBoxClipDataSet>(m_instance)->SetOrientation(arg0);
}



void vtkBoxClipDataSet::MinEdgeF(array<unsigned int>^ id_v, array<int>^ cellIds, array<unsigned int>^ arg2)
{
  pin_ptr<unsigned int> id_vPin = &id_v[0];
  unsigned int* nativeid_vPin = id_vPin;
  pin_ptr<int> cellIdsPin = &cellIds[0];
  int* nativecellIdsPin = cellIdsPin;
  pin_ptr<unsigned int> arg2Pin = &arg2[0];
  unsigned int* nativearg2Pin = arg2Pin;
  vtk::ConvertManagedToNative<::vtkBoxClipDataSet>(m_instance)->MinEdgeF(nativeid_vPin, nativecellIdsPin, nativearg2Pin);
}



void vtkBoxClipDataSet::PyramidToTetra(array<int>^ pyramId, array<int>^ cellIds, vtkCellArray^ newCellArray)
{
  pin_ptr<int> pyramIdPin = &pyramId[0];
  int* nativepyramIdPin = pyramIdPin;
  pin_ptr<int> cellIdsPin = &cellIds[0];
  int* nativecellIdsPin = cellIdsPin;
  ::vtkCellArray* newCellArrayWrap = vtk::ConvertManagedToNative<::vtkCellArray>(newCellArray->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkBoxClipDataSet>(m_instance)->PyramidToTetra(nativepyramIdPin, nativecellIdsPin, newCellArrayWrap);
}



void vtkBoxClipDataSet::WedgeToTetra(array<int>^ wedgeId, array<int>^ cellIds, vtkCellArray^ newCellArray)
{
  pin_ptr<int> wedgeIdPin = &wedgeId[0];
  int* nativewedgeIdPin = wedgeIdPin;
  pin_ptr<int> cellIdsPin = &cellIds[0];
  int* nativecellIdsPin = cellIdsPin;
  ::vtkCellArray* newCellArrayWrap = vtk::ConvertManagedToNative<::vtkCellArray>(newCellArray->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkBoxClipDataSet>(m_instance)->WedgeToTetra(nativewedgeIdPin, nativecellIdsPin, newCellArrayWrap);
}



void vtkBoxClipDataSet::CellGrid(int typeobj, int npts, array<int>^ cellIds, vtkCellArray^ newCellArray)
{
  pin_ptr<int> cellIdsPin = &cellIds[0];
  int* nativecellIdsPin = cellIdsPin;
  ::vtkCellArray* newCellArrayWrap = vtk::ConvertManagedToNative<::vtkCellArray>(newCellArray->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkBoxClipDataSet>(m_instance)->CellGrid(typeobj, npts, nativecellIdsPin, newCellArrayWrap);
}



void vtkBoxClipDataSet::CreateTetra(int npts, array<int>^ cellIds, vtkCellArray^ newCellArray)
{
  pin_ptr<int> cellIdsPin = &cellIds[0];
  int* nativecellIdsPin = cellIdsPin;
  ::vtkCellArray* newCellArrayWrap = vtk::ConvertManagedToNative<::vtkCellArray>(newCellArray->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkBoxClipDataSet>(m_instance)->CreateTetra(npts, nativecellIdsPin, newCellArrayWrap);
}



void vtkBoxClipDataSet::ClipBox(vtkPoints^ newPoints, vtkGenericCell^ cell, vtkPointLocator^ locator, vtkCellArray^ tets, vtkPointData^ inPD, vtkPointData^ outPD, vtkCellData^ inCD, int cellId, vtkCellData^ outCD)
{
  ::vtkPoints* newPointsWrap = vtk::ConvertManagedToNative<::vtkPoints>(newPoints->GetNativePointer());
  ::vtkGenericCell* cellWrap = vtk::ConvertManagedToNative<::vtkGenericCell>(cell->GetNativePointer());
  ::vtkPointLocator* locatorWrap = vtk::ConvertManagedToNative<::vtkPointLocator>(locator->GetNativePointer());
  ::vtkCellArray* tetsWrap = vtk::ConvertManagedToNative<::vtkCellArray>(tets->GetNativePointer());
  ::vtkPointData* inPDWrap = vtk::ConvertManagedToNative<::vtkPointData>(inPD->GetNativePointer());
  ::vtkPointData* outPDWrap = vtk::ConvertManagedToNative<::vtkPointData>(outPD->GetNativePointer());
  ::vtkCellData* inCDWrap = vtk::ConvertManagedToNative<::vtkCellData>(inCD->GetNativePointer());
  ::vtkCellData* outCDWrap = vtk::ConvertManagedToNative<::vtkCellData>(outCD->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkBoxClipDataSet>(m_instance)->ClipBox(newPointsWrap, cellWrap, locatorWrap, tetsWrap, inPDWrap, outPDWrap, inCDWrap, cellId, outCDWrap);
}



void vtkBoxClipDataSet::ClipHexahedron(vtkPoints^ newPoints, vtkGenericCell^ cell, vtkPointLocator^ locator, vtkCellArray^ tets, vtkPointData^ inPD, vtkPointData^ outPD, vtkCellData^ inCD, int cellId, vtkCellData^ outCD)
{
  ::vtkPoints* newPointsWrap = vtk::ConvertManagedToNative<::vtkPoints>(newPoints->GetNativePointer());
  ::vtkGenericCell* cellWrap = vtk::ConvertManagedToNative<::vtkGenericCell>(cell->GetNativePointer());
  ::vtkPointLocator* locatorWrap = vtk::ConvertManagedToNative<::vtkPointLocator>(locator->GetNativePointer());
  ::vtkCellArray* tetsWrap = vtk::ConvertManagedToNative<::vtkCellArray>(tets->GetNativePointer());
  ::vtkPointData* inPDWrap = vtk::ConvertManagedToNative<::vtkPointData>(inPD->GetNativePointer());
  ::vtkPointData* outPDWrap = vtk::ConvertManagedToNative<::vtkPointData>(outPD->GetNativePointer());
  ::vtkCellData* inCDWrap = vtk::ConvertManagedToNative<::vtkCellData>(inCD->GetNativePointer());
  ::vtkCellData* outCDWrap = vtk::ConvertManagedToNative<::vtkCellData>(outCD->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkBoxClipDataSet>(m_instance)->ClipHexahedron(newPointsWrap, cellWrap, locatorWrap, tetsWrap, inPDWrap, outPDWrap, inCDWrap, cellId, outCDWrap);
}



void vtkBoxClipDataSet::ClipBox2D(vtkPoints^ newPoints, vtkGenericCell^ cell, vtkPointLocator^ locator, vtkCellArray^ tets, vtkPointData^ inPD, vtkPointData^ outPD, vtkCellData^ inCD, int cellId, vtkCellData^ outCD)
{
  ::vtkPoints* newPointsWrap = vtk::ConvertManagedToNative<::vtkPoints>(newPoints->GetNativePointer());
  ::vtkGenericCell* cellWrap = vtk::ConvertManagedToNative<::vtkGenericCell>(cell->GetNativePointer());
  ::vtkPointLocator* locatorWrap = vtk::ConvertManagedToNative<::vtkPointLocator>(locator->GetNativePointer());
  ::vtkCellArray* tetsWrap = vtk::ConvertManagedToNative<::vtkCellArray>(tets->GetNativePointer());
  ::vtkPointData* inPDWrap = vtk::ConvertManagedToNative<::vtkPointData>(inPD->GetNativePointer());
  ::vtkPointData* outPDWrap = vtk::ConvertManagedToNative<::vtkPointData>(outPD->GetNativePointer());
  ::vtkCellData* inCDWrap = vtk::ConvertManagedToNative<::vtkCellData>(inCD->GetNativePointer());
  ::vtkCellData* outCDWrap = vtk::ConvertManagedToNative<::vtkCellData>(outCD->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkBoxClipDataSet>(m_instance)->ClipBox2D(newPointsWrap, cellWrap, locatorWrap, tetsWrap, inPDWrap, outPDWrap, inCDWrap, cellId, outCDWrap);
}



void vtkBoxClipDataSet::ClipHexahedron2D(vtkPoints^ newPoints, vtkGenericCell^ cell, vtkPointLocator^ locator, vtkCellArray^ tets, vtkPointData^ inPD, vtkPointData^ outPD, vtkCellData^ inCD, int cellId, vtkCellData^ outCD)
{
  ::vtkPoints* newPointsWrap = vtk::ConvertManagedToNative<::vtkPoints>(newPoints->GetNativePointer());
  ::vtkGenericCell* cellWrap = vtk::ConvertManagedToNative<::vtkGenericCell>(cell->GetNativePointer());
  ::vtkPointLocator* locatorWrap = vtk::ConvertManagedToNative<::vtkPointLocator>(locator->GetNativePointer());
  ::vtkCellArray* tetsWrap = vtk::ConvertManagedToNative<::vtkCellArray>(tets->GetNativePointer());
  ::vtkPointData* inPDWrap = vtk::ConvertManagedToNative<::vtkPointData>(inPD->GetNativePointer());
  ::vtkPointData* outPDWrap = vtk::ConvertManagedToNative<::vtkPointData>(outPD->GetNativePointer());
  ::vtkCellData* inCDWrap = vtk::ConvertManagedToNative<::vtkCellData>(inCD->GetNativePointer());
  ::vtkCellData* outCDWrap = vtk::ConvertManagedToNative<::vtkCellData>(outCD->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkBoxClipDataSet>(m_instance)->ClipHexahedron2D(newPointsWrap, cellWrap, locatorWrap, tetsWrap, inPDWrap, outPDWrap, inCDWrap, cellId, outCDWrap);
}



void vtkBoxClipDataSet::ClipBox1D(vtkPoints^ newPoints, vtkGenericCell^ cell, vtkPointLocator^ locator, vtkCellArray^ lines, vtkPointData^ inPD, vtkPointData^ outPD, vtkCellData^ inCD, int cellId, vtkCellData^ outCD)
{
  ::vtkPoints* newPointsWrap = vtk::ConvertManagedToNative<::vtkPoints>(newPoints->GetNativePointer());
  ::vtkGenericCell* cellWrap = vtk::ConvertManagedToNative<::vtkGenericCell>(cell->GetNativePointer());
  ::vtkPointLocator* locatorWrap = vtk::ConvertManagedToNative<::vtkPointLocator>(locator->GetNativePointer());
  ::vtkCellArray* linesWrap = vtk::ConvertManagedToNative<::vtkCellArray>(lines->GetNativePointer());
  ::vtkPointData* inPDWrap = vtk::ConvertManagedToNative<::vtkPointData>(inPD->GetNativePointer());
  ::vtkPointData* outPDWrap = vtk::ConvertManagedToNative<::vtkPointData>(outPD->GetNativePointer());
  ::vtkCellData* inCDWrap = vtk::ConvertManagedToNative<::vtkCellData>(inCD->GetNativePointer());
  ::vtkCellData* outCDWrap = vtk::ConvertManagedToNative<::vtkCellData>(outCD->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkBoxClipDataSet>(m_instance)->ClipBox1D(newPointsWrap, cellWrap, locatorWrap, linesWrap, inPDWrap, outPDWrap, inCDWrap, cellId, outCDWrap);
}



void vtkBoxClipDataSet::ClipHexahedron1D(vtkPoints^ newPoints, vtkGenericCell^ cell, vtkPointLocator^ locator, vtkCellArray^ lines, vtkPointData^ inPD, vtkPointData^ outPD, vtkCellData^ inCD, int cellId, vtkCellData^ outCD)
{
  ::vtkPoints* newPointsWrap = vtk::ConvertManagedToNative<::vtkPoints>(newPoints->GetNativePointer());
  ::vtkGenericCell* cellWrap = vtk::ConvertManagedToNative<::vtkGenericCell>(cell->GetNativePointer());
  ::vtkPointLocator* locatorWrap = vtk::ConvertManagedToNative<::vtkPointLocator>(locator->GetNativePointer());
  ::vtkCellArray* linesWrap = vtk::ConvertManagedToNative<::vtkCellArray>(lines->GetNativePointer());
  ::vtkPointData* inPDWrap = vtk::ConvertManagedToNative<::vtkPointData>(inPD->GetNativePointer());
  ::vtkPointData* outPDWrap = vtk::ConvertManagedToNative<::vtkPointData>(outPD->GetNativePointer());
  ::vtkCellData* inCDWrap = vtk::ConvertManagedToNative<::vtkCellData>(inCD->GetNativePointer());
  ::vtkCellData* outCDWrap = vtk::ConvertManagedToNative<::vtkCellData>(outCD->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkBoxClipDataSet>(m_instance)->ClipHexahedron1D(newPointsWrap, cellWrap, locatorWrap, linesWrap, inPDWrap, outPDWrap, inCDWrap, cellId, outCDWrap);
}



void vtkBoxClipDataSet::ClipBox0D(vtkGenericCell^ cell, vtkPointLocator^ locator, vtkCellArray^ verts, vtkPointData^ inPD, vtkPointData^ outPD, vtkCellData^ inCD, int cellId, vtkCellData^ outCD)
{
  ::vtkGenericCell* cellWrap = vtk::ConvertManagedToNative<::vtkGenericCell>(cell->GetNativePointer());
  ::vtkPointLocator* locatorWrap = vtk::ConvertManagedToNative<::vtkPointLocator>(locator->GetNativePointer());
  ::vtkCellArray* vertsWrap = vtk::ConvertManagedToNative<::vtkCellArray>(verts->GetNativePointer());
  ::vtkPointData* inPDWrap = vtk::ConvertManagedToNative<::vtkPointData>(inPD->GetNativePointer());
  ::vtkPointData* outPDWrap = vtk::ConvertManagedToNative<::vtkPointData>(outPD->GetNativePointer());
  ::vtkCellData* inCDWrap = vtk::ConvertManagedToNative<::vtkCellData>(inCD->GetNativePointer());
  ::vtkCellData* outCDWrap = vtk::ConvertManagedToNative<::vtkCellData>(outCD->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkBoxClipDataSet>(m_instance)->ClipBox0D(cellWrap, locatorWrap, vertsWrap, inPDWrap, outPDWrap, inCDWrap, cellId, outCDWrap);
}



void vtkBoxClipDataSet::ClipHexahedron0D(vtkGenericCell^ cell, vtkPointLocator^ locator, vtkCellArray^ verts, vtkPointData^ inPD, vtkPointData^ outPD, vtkCellData^ inCD, int cellId, vtkCellData^ outCD)
{
  ::vtkGenericCell* cellWrap = vtk::ConvertManagedToNative<::vtkGenericCell>(cell->GetNativePointer());
  ::vtkPointLocator* locatorWrap = vtk::ConvertManagedToNative<::vtkPointLocator>(locator->GetNativePointer());
  ::vtkCellArray* vertsWrap = vtk::ConvertManagedToNative<::vtkCellArray>(verts->GetNativePointer());
  ::vtkPointData* inPDWrap = vtk::ConvertManagedToNative<::vtkPointData>(inPD->GetNativePointer());
  ::vtkPointData* outPDWrap = vtk::ConvertManagedToNative<::vtkPointData>(outPD->GetNativePointer());
  ::vtkCellData* inCDWrap = vtk::ConvertManagedToNative<::vtkCellData>(inCD->GetNativePointer());
  ::vtkCellData* outCDWrap = vtk::ConvertManagedToNative<::vtkCellData>(outCD->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkBoxClipDataSet>(m_instance)->ClipHexahedron0D(cellWrap, locatorWrap, vertsWrap, inPDWrap, outPDWrap, inCDWrap, cellId, outCDWrap);
}



  vtkBoxClipDataSet::vtkBoxClipDataSet(System::IntPtr native, bool bConst) : vtkUnstructuredGridAlgorithm(native, bConst) {}



  vtkBoxClipDataSet::vtkBoxClipDataSet(bool donothing) : vtkUnstructuredGridAlgorithm(donothing) {}



  vtkBoxClipDataSet::vtkBoxClipDataSet() : vtkUnstructuredGridAlgorithm(false) {
  this->SetNativePointer(IntPtr(::vtkBoxClipDataSet::New()));
}



  vtkBoxClipDataSet::~vtkBoxClipDataSet() { }





} // end namespace vtkGraphics
