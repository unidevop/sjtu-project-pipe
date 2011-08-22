

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkImageDataDotNet.h"
#include "vtkCellDotNet.h"
#include "vtkDataObjectDotNet.h"
#include "vtkGenericCellDotNet.h"
#include "vtkInformationDotNet.h"

// native includes
#include "strstream"
#include "vtkImageData.h"
#include "vtkCell.h"
#include "vtkDataArray.h"
#include "vtkDataObject.h"
#include "vtkGenericCell.h"
#include "vtkIdList.h"
#include "vtkInformation.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkImageData::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkImageData>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkImageData::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkImageData>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkImageData^ vtkImageData::NewInstance()
{
  ::vtkImageData* retVal = static_cast<::vtkImageData*>(vtk::ConvertManagedToNative<::vtkImageData>(m_instance)->NewInstance());
  return gcnew vtkImageData(IntPtr(retVal), false);
}



vtkImageData^ vtkImageData::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkImageData* retVal = static_cast<::vtkImageData*>(::vtkImageData::SafeDownCast(oWrap));
  return gcnew vtkImageData(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkImageData::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkImageData>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkImageData::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkImageData>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkImageData::CopyStructure(vtkDataSet^ ds)
{
  ::vtkDataSet* dsWrap = vtk::ConvertManagedToNative<::vtkDataSet>(ds->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkImageData>(m_instance)->CopyStructure(dsWrap);
}



int vtkImageData::GetDataObjectType()
{
  int retVal = vtk::ConvertManagedToNative<::vtkImageData>(m_instance)->GetDataObjectType();
  return retVal;
}



int vtkImageData::GetNumberOfCells()
{
  int retVal = vtk::ConvertManagedToNative<::vtkImageData>(m_instance)->GetNumberOfCells();
  return retVal;
}



int vtkImageData::GetNumberOfPoints()
{
  int retVal = vtk::ConvertManagedToNative<::vtkImageData>(m_instance)->GetNumberOfPoints();
  return retVal;
}



array<double>^ vtkImageData::GetPoint(int ptId)
{
  const double* retVal = vtk::ConvertManagedToNative<::vtkImageData>(m_instance)->GetPoint(ptId);
  array<double>^ mRetVal = gcnew array<double>(3);
  for (size_t cprIdx=0; cprIdx<3; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



void vtkImageData::GetPoint(int id, array<double>^ x)
{
  pin_ptr<double> xPin = &x[0];
  double* nativexPin = xPin;
  vtk::ConvertManagedToNative<::vtkImageData>(m_instance)->GetPoint(id, nativexPin);
}



vtkCell^ vtkImageData::GetCell(int cellId)
{
  ::vtkCell* retVal = static_cast<::vtkCell*>(vtk::ConvertManagedToNative<::vtkImageData>(m_instance)->GetCell(cellId));
  return gcnew vtkCell(IntPtr(retVal), false);
}



void vtkImageData::GetCell(int cellId, vtkGenericCell^ cell)
{
  ::vtkGenericCell* cellWrap = vtk::ConvertManagedToNative<::vtkGenericCell>(cell->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkImageData>(m_instance)->GetCell(cellId, cellWrap);
}



void vtkImageData::GetCellBounds(int cellId, array<double>^ bounds)
{
  pin_ptr<double> boundsPin = &bounds[0];
  double* nativeboundsPin = boundsPin;
  vtk::ConvertManagedToNative<::vtkImageData>(m_instance)->GetCellBounds(cellId, nativeboundsPin);
}



int vtkImageData::FindPoint(double x, double y, double z)
{
  int retVal = vtk::ConvertManagedToNative<::vtkImageData>(m_instance)->FindPoint(x, y, z);
  return retVal;
}



int vtkImageData::FindPoint(array<double>^ x)
{
  pin_ptr<double> xPin = &x[0];
  double* nativexPin = xPin;
  int retVal = vtk::ConvertManagedToNative<::vtkImageData>(m_instance)->FindPoint(nativexPin);
  return retVal;
}



int vtkImageData::FindCell(array<double>^ x, vtkCell^ cell, int cellId, double tol2, int% subId, array<double>^ pcoords, array<double>^ weights)
{
  pin_ptr<double> xPin = &x[0];
  double* nativexPin = xPin;
  ::vtkCell* cellWrap = vtk::ConvertManagedToNative<::vtkCell>(cell->GetNativePointer());
  pin_ptr<int> subIdPin = &subId;
  pin_ptr<double> pcoordsPin = &pcoords[0];
  double* nativepcoordsPin = pcoordsPin;
  pin_ptr<double> weightsPin = &weights[0];
  double* nativeweightsPin = weightsPin;
  int retVal = vtk::ConvertManagedToNative<::vtkImageData>(m_instance)->FindCell(nativexPin, cellWrap, cellId, tol2, *subIdPin, nativepcoordsPin, nativeweightsPin);
  return retVal;
}



int vtkImageData::FindCell(array<double>^ x, vtkCell^ cell, vtkGenericCell^ gencell, int cellId, double tol2, int% subId, array<double>^ pcoords, array<double>^ weights)
{
  pin_ptr<double> xPin = &x[0];
  double* nativexPin = xPin;
  ::vtkCell* cellWrap = vtk::ConvertManagedToNative<::vtkCell>(cell->GetNativePointer());
  ::vtkGenericCell* gencellWrap = vtk::ConvertManagedToNative<::vtkGenericCell>(gencell->GetNativePointer());
  pin_ptr<int> subIdPin = &subId;
  pin_ptr<double> pcoordsPin = &pcoords[0];
  double* nativepcoordsPin = pcoordsPin;
  pin_ptr<double> weightsPin = &weights[0];
  double* nativeweightsPin = weightsPin;
  int retVal = vtk::ConvertManagedToNative<::vtkImageData>(m_instance)->FindCell(nativexPin, cellWrap, gencellWrap, cellId, tol2, *subIdPin, nativepcoordsPin, nativeweightsPin);
  return retVal;
}



vtkCell^ vtkImageData::FindAndGetCell(array<double>^ x, vtkCell^ cell, int cellId, double tol2, int% subId, array<double>^ pcoords, array<double>^ weights)
{
  pin_ptr<double> xPin = &x[0];
  double* nativexPin = xPin;
  ::vtkCell* cellWrap = vtk::ConvertManagedToNative<::vtkCell>(cell->GetNativePointer());
  pin_ptr<int> subIdPin = &subId;
  pin_ptr<double> pcoordsPin = &pcoords[0];
  double* nativepcoordsPin = pcoordsPin;
  pin_ptr<double> weightsPin = &weights[0];
  double* nativeweightsPin = weightsPin;
  ::vtkCell* retVal = static_cast<::vtkCell*>(vtk::ConvertManagedToNative<::vtkImageData>(m_instance)->FindAndGetCell(nativexPin, cellWrap, cellId, tol2, *subIdPin, nativepcoordsPin, nativeweightsPin));
  return gcnew vtkCell(IntPtr(retVal), false);
}



int vtkImageData::GetCellType(int cellId)
{
  int retVal = vtk::ConvertManagedToNative<::vtkImageData>(m_instance)->GetCellType(cellId);
  return retVal;
}



void vtkImageData::GetCellPoints(int cellId, vtkIdList^ ptIds)
{
  ::vtkIdList* ptIdsWrap = vtk::ConvertManagedToNative<::vtkIdList>(ptIds->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkImageData>(m_instance)->GetCellPoints(cellId, ptIdsWrap);
}



void vtkImageData::GetPointCells(int ptId, vtkIdList^ cellIds)
{
  ::vtkIdList* cellIdsWrap = vtk::ConvertManagedToNative<::vtkIdList>(cellIds->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkImageData>(m_instance)->GetPointCells(ptId, cellIdsWrap);
}



void vtkImageData::ComputeBounds()
{
  vtk::ConvertManagedToNative<::vtkImageData>(m_instance)->ComputeBounds();
}



int vtkImageData::GetMaxCellSize()
{
  int retVal = vtk::ConvertManagedToNative<::vtkImageData>(m_instance)->GetMaxCellSize();
  return retVal;
}



void vtkImageData::Initialize()
{
  vtk::ConvertManagedToNative<::vtkImageData>(m_instance)->Initialize();
}



void vtkImageData::SetDimensions(int i, int j, int k)
{
  vtk::ConvertManagedToNative<::vtkImageData>(m_instance)->SetDimensions(i, j, k);
}



void vtkImageData::SetDimensions(array<int>^ dims)
{
  pin_ptr<int> dimsPin = &dims[0];
  int* nativedimsPin = dimsPin;
  vtk::ConvertManagedToNative<::vtkImageData>(m_instance)->SetDimensions(nativedimsPin);
}



array<int>^ vtkImageData::GetDimensions()
{
  const int* retVal = vtk::ConvertManagedToNative<::vtkImageData>(m_instance)->GetDimensions();
  array<int>^ mRetVal = gcnew array<int>(3);
  for (size_t cprIdx=0; cprIdx<3; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



void vtkImageData::GetDimensions(array<int>^ dims)
{
  pin_ptr<int> dimsPin = &dims[0];
  int* nativedimsPin = dimsPin;
  vtk::ConvertManagedToNative<::vtkImageData>(m_instance)->GetDimensions(nativedimsPin);
}



int vtkImageData::ComputeStructuredCoordinates(array<double>^ x, array<int>^ ijk, array<double>^ pcoords)
{
  pin_ptr<double> xPin = &x[0];
  double* nativexPin = xPin;
  pin_ptr<int> ijkPin = &ijk[0];
  int* nativeijkPin = ijkPin;
  pin_ptr<double> pcoordsPin = &pcoords[0];
  double* nativepcoordsPin = pcoordsPin;
  int retVal = vtk::ConvertManagedToNative<::vtkImageData>(m_instance)->ComputeStructuredCoordinates(nativexPin, nativeijkPin, nativepcoordsPin);
  return retVal;
}



void vtkImageData::GetVoxelGradient(int i, int j, int k, vtkDataArray^ s, vtkDataArray^ g)
{
  ::vtkDataArray* sWrap = vtk::ConvertManagedToNative<::vtkDataArray>(s->GetNativePointer());
  ::vtkDataArray* gWrap = vtk::ConvertManagedToNative<::vtkDataArray>(g->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkImageData>(m_instance)->GetVoxelGradient(i, j, k, sWrap, gWrap);
}



void vtkImageData::GetPointGradient(int i, int j, int k, vtkDataArray^ s, array<double>^ g)
{
  ::vtkDataArray* sWrap = vtk::ConvertManagedToNative<::vtkDataArray>(s->GetNativePointer());
  pin_ptr<double> gPin = &g[0];
  double* nativegPin = gPin;
  vtk::ConvertManagedToNative<::vtkImageData>(m_instance)->GetPointGradient(i, j, k, sWrap, nativegPin);
}



int vtkImageData::GetDataDimension()
{
  int retVal = vtk::ConvertManagedToNative<::vtkImageData>(m_instance)->GetDataDimension();
  return retVal;
}



int vtkImageData::ComputePointId(array<int>^ ijk)
{
  pin_ptr<int> ijkPin = &ijk[0];
  int* nativeijkPin = ijkPin;
  int retVal = vtk::ConvertManagedToNative<::vtkImageData>(m_instance)->ComputePointId(nativeijkPin);
  return retVal;
}



int vtkImageData::ComputeCellId(array<int>^ ijk)
{
  pin_ptr<int> ijkPin = &ijk[0];
  int* nativeijkPin = ijkPin;
  int retVal = vtk::ConvertManagedToNative<::vtkImageData>(m_instance)->ComputeCellId(nativeijkPin);
  return retVal;
}



void vtkImageData::SetAxisUpdateExtent(int axis, int min, int max)
{
  vtk::ConvertManagedToNative<::vtkImageData>(m_instance)->SetAxisUpdateExtent(axis, min, max);
}



void vtkImageData::GetAxisUpdateExtent(int axis, int% min, int% max)
{
  pin_ptr<int> minPin = &min;
  pin_ptr<int> maxPin = &max;
  vtk::ConvertManagedToNative<::vtkImageData>(m_instance)->GetAxisUpdateExtent(axis, *minPin, *maxPin);
}



void vtkImageData::UpdateInformation()
{
  vtk::ConvertManagedToNative<::vtkImageData>(m_instance)->UpdateInformation();
}



void vtkImageData::SetExtent(array<int>^ extent)
{
  pin_ptr<int> extentPin = &extent[0];
  int* nativeextentPin = extentPin;
  vtk::ConvertManagedToNative<::vtkImageData>(m_instance)->SetExtent(nativeextentPin);
}



void vtkImageData::SetExtent(int x1, int x2, int y1, int y2, int z1, int z2)
{
  vtk::ConvertManagedToNative<::vtkImageData>(m_instance)->SetExtent(x1, x2, y1, y2, z1, z2);
}



array<int>^ vtkImageData::GetExtent()
{
  const int* retVal = vtk::ConvertManagedToNative<::vtkImageData>(m_instance)->GetExtent();
  array<int>^ mRetVal = gcnew array<int>(6);
  for (size_t cprIdx=0; cprIdx<6; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



unsigned long vtkImageData::GetEstimatedMemorySize()
{
  unsigned long retVal = vtk::ConvertManagedToNative<::vtkImageData>(m_instance)->GetEstimatedMemorySize();
  return retVal;
}



double vtkImageData::GetScalarTypeMin()
{
  double retVal = vtk::ConvertManagedToNative<::vtkImageData>(m_instance)->GetScalarTypeMin();
  return retVal;
}



double vtkImageData::GetScalarTypeMax()
{
  double retVal = vtk::ConvertManagedToNative<::vtkImageData>(m_instance)->GetScalarTypeMax();
  return retVal;
}



int vtkImageData::GetScalarSize()
{
  int retVal = vtk::ConvertManagedToNative<::vtkImageData>(m_instance)->GetScalarSize();
  return retVal;
}



array<int>^ vtkImageData::GetIncrements()
{
  const int* retVal = vtk::ConvertManagedToNative<::vtkImageData>(m_instance)->GetIncrements();
  array<int>^ mRetVal = gcnew array<int>(3);
  for (size_t cprIdx=0; cprIdx<3; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



void vtkImageData::GetIncrements(int% incX, int% incY, int% incZ)
{
  pin_ptr<int> incXPin = &incX;
  pin_ptr<int> incYPin = &incY;
  pin_ptr<int> incZPin = &incZ;
  vtk::ConvertManagedToNative<::vtkImageData>(m_instance)->GetIncrements(*incXPin, *incYPin, *incZPin);
}



void vtkImageData::GetIncrements(array<int>^ arg0)
{
  pin_ptr<int> arg0Pin = &arg0[0];
  int* nativearg0Pin = arg0Pin;
  vtk::ConvertManagedToNative<::vtkImageData>(m_instance)->GetIncrements(nativearg0Pin);
}



void vtkImageData::GetContinuousIncrements(array<int>^ extent, int% incX, int% incY, int% incZ)
{
  pin_ptr<int> extentPin = &extent[0];
  int* nativeextentPin = extentPin;
  pin_ptr<int> incXPin = &incX;
  pin_ptr<int> incYPin = &incY;
  pin_ptr<int> incZPin = &incZ;
  vtk::ConvertManagedToNative<::vtkImageData>(m_instance)->GetContinuousIncrements(nativeextentPin, *incXPin, *incYPin, *incZPin);
}



System::IntPtr vtkImageData::GetScalarPointerForExtent(array<int>^ extent)
{
  pin_ptr<int> extentPin = &extent[0];
  int* nativeextentPin = extentPin;
  void* retVal = vtk::ConvertManagedToNative<::vtkImageData>(m_instance)->GetScalarPointerForExtent(nativeextentPin);
  IntPtr retValWrap(retVal);
  return retValWrap;
}



System::IntPtr vtkImageData::GetScalarPointer(array<int>^ coordinates)
{
  pin_ptr<int> coordinatesPin = &coordinates[0];
  int* nativecoordinatesPin = coordinatesPin;
  void* retVal = vtk::ConvertManagedToNative<::vtkImageData>(m_instance)->GetScalarPointer(nativecoordinatesPin);
  IntPtr retValWrap(retVal);
  return retValWrap;
}



System::IntPtr vtkImageData::GetScalarPointer(int x, int y, int z)
{
  void* retVal = vtk::ConvertManagedToNative<::vtkImageData>(m_instance)->GetScalarPointer(x, y, z);
  IntPtr retValWrap(retVal);
  return retValWrap;
}



System::IntPtr vtkImageData::GetScalarPointer()
{
  void* retVal = vtk::ConvertManagedToNative<::vtkImageData>(m_instance)->GetScalarPointer();
  IntPtr retValWrap(retVal);
  return retValWrap;
}



float vtkImageData::GetScalarComponentAsFloat(int x, int y, int z, int component)
{
  float retVal = vtk::ConvertManagedToNative<::vtkImageData>(m_instance)->GetScalarComponentAsFloat(x, y, z, component);
  return retVal;
}



void vtkImageData::SetScalarComponentFromFloat(int x, int y, int z, int component, float v)
{
  vtk::ConvertManagedToNative<::vtkImageData>(m_instance)->SetScalarComponentFromFloat(x, y, z, component, v);
}



double vtkImageData::GetScalarComponentAsDouble(int x, int y, int z, int component)
{
  double retVal = vtk::ConvertManagedToNative<::vtkImageData>(m_instance)->GetScalarComponentAsDouble(x, y, z, component);
  return retVal;
}



void vtkImageData::SetScalarComponentFromDouble(int x, int y, int z, int component, double v)
{
  vtk::ConvertManagedToNative<::vtkImageData>(m_instance)->SetScalarComponentFromDouble(x, y, z, component, v);
}



void vtkImageData::AllocateScalars()
{
  vtk::ConvertManagedToNative<::vtkImageData>(m_instance)->AllocateScalars();
}



void vtkImageData::CopyAndCastFrom(vtkImageData^ inData, array<int>^ extent)
{
  ::vtkImageData* inDataWrap = vtk::ConvertManagedToNative<::vtkImageData>(inData->GetNativePointer());
  pin_ptr<int> extentPin = &extent[0];
  int* nativeextentPin = extentPin;
  vtk::ConvertManagedToNative<::vtkImageData>(m_instance)->CopyAndCastFrom(inDataWrap, nativeextentPin);
}



void vtkImageData::CopyAndCastFrom(vtkImageData^ inData, int x0, int x1, int y0, int y1, int z0, int z1)
{
  ::vtkImageData* inDataWrap = vtk::ConvertManagedToNative<::vtkImageData>(inData->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkImageData>(m_instance)->CopyAndCastFrom(inDataWrap, x0, x1, y0, y1, z0, z1);
}



void vtkImageData::Crop()
{
  vtk::ConvertManagedToNative<::vtkImageData>(m_instance)->Crop();
}



unsigned long vtkImageData::GetActualMemorySize()
{
  unsigned long retVal = vtk::ConvertManagedToNative<::vtkImageData>(m_instance)->GetActualMemorySize();
  return retVal;
}



void vtkImageData::SetSpacing(double arg0, double arg1, double arg2)
{
  vtk::ConvertManagedToNative<::vtkImageData>(m_instance)->SetSpacing(arg0, arg1, arg2);
}



void vtkImageData::SetSpacing(array<double>^ a)
{
  pin_ptr<double> aPin = &a[0];
  double* nativeaPin = aPin;
  vtk::ConvertManagedToNative<::vtkImageData>(m_instance)->SetSpacing(nativeaPin);
}



array<double>^ vtkImageData::GetSpacing()
{
  const double* retVal = vtk::ConvertManagedToNative<::vtkImageData>(m_instance)->GetSpacing();
  array<double>^ mRetVal = gcnew array<double>(3);
  for (size_t cprIdx=0; cprIdx<3; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



void vtkImageData::SetOrigin(double arg0, double arg1, double arg2)
{
  vtk::ConvertManagedToNative<::vtkImageData>(m_instance)->SetOrigin(arg0, arg1, arg2);
}



void vtkImageData::SetOrigin(array<double>^ a)
{
  pin_ptr<double> aPin = &a[0];
  double* nativeaPin = aPin;
  vtk::ConvertManagedToNative<::vtkImageData>(m_instance)->SetOrigin(nativeaPin);
}



array<double>^ vtkImageData::GetOrigin()
{
  const double* retVal = vtk::ConvertManagedToNative<::vtkImageData>(m_instance)->GetOrigin();
  array<double>^ mRetVal = gcnew array<double>(3);
  for (size_t cprIdx=0; cprIdx<3; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



void vtkImageData::SetScalarTypeToFloat()
{
  vtk::ConvertManagedToNative<::vtkImageData>(m_instance)->SetScalarTypeToFloat();
}



void vtkImageData::SetScalarTypeToDouble()
{
  vtk::ConvertManagedToNative<::vtkImageData>(m_instance)->SetScalarTypeToDouble();
}



void vtkImageData::SetScalarTypeToInt()
{
  vtk::ConvertManagedToNative<::vtkImageData>(m_instance)->SetScalarTypeToInt();
}



void vtkImageData::SetScalarTypeToUnsignedInt()
{
  vtk::ConvertManagedToNative<::vtkImageData>(m_instance)->SetScalarTypeToUnsignedInt();
}



void vtkImageData::SetScalarTypeToLong()
{
  vtk::ConvertManagedToNative<::vtkImageData>(m_instance)->SetScalarTypeToLong();
}



void vtkImageData::SetScalarTypeToUnsignedLong()
{
  vtk::ConvertManagedToNative<::vtkImageData>(m_instance)->SetScalarTypeToUnsignedLong();
}



void vtkImageData::SetScalarTypeToShort()
{
  vtk::ConvertManagedToNative<::vtkImageData>(m_instance)->SetScalarTypeToShort();
}



void vtkImageData::SetScalarTypeToUnsignedShort()
{
  vtk::ConvertManagedToNative<::vtkImageData>(m_instance)->SetScalarTypeToUnsignedShort();
}



void vtkImageData::SetScalarTypeToUnsignedChar()
{
  vtk::ConvertManagedToNative<::vtkImageData>(m_instance)->SetScalarTypeToUnsignedChar();
}



void vtkImageData::SetScalarTypeToChar()
{
  vtk::ConvertManagedToNative<::vtkImageData>(m_instance)->SetScalarTypeToChar();
}



void vtkImageData::SetScalarType(int arg0)
{
  vtk::ConvertManagedToNative<::vtkImageData>(m_instance)->SetScalarType(arg0);
}



int vtkImageData::GetScalarType()
{
  int retVal = vtk::ConvertManagedToNative<::vtkImageData>(m_instance)->GetScalarType();
  return retVal;
}



System::String^ vtkImageData::GetScalarTypeAsString()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkImageData>(m_instance)->GetScalarTypeAsString();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



void vtkImageData::SetNumberOfScalarComponents(int n)
{
  vtk::ConvertManagedToNative<::vtkImageData>(m_instance)->SetNumberOfScalarComponents(n);
}



int vtkImageData::GetNumberOfScalarComponents()
{
  int retVal = vtk::ConvertManagedToNative<::vtkImageData>(m_instance)->GetNumberOfScalarComponents();
  return retVal;
}



void vtkImageData::CopyTypeSpecificInformation(vtkDataObject^ image)
{
  ::vtkDataObject* imageWrap = vtk::ConvertManagedToNative<::vtkDataObject>(image->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkImageData>(m_instance)->CopyTypeSpecificInformation(imageWrap);
}



void vtkImageData::CopyInformationToPipeline(vtkInformation^ request, vtkInformation^ input)
{
  ::vtkInformation* requestWrap = vtk::ConvertManagedToNative<::vtkInformation>(request->GetNativePointer());
  ::vtkInformation* inputWrap = vtk::ConvertManagedToNative<::vtkInformation>(input->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkImageData>(m_instance)->CopyInformationToPipeline(requestWrap, inputWrap);
}



void vtkImageData::CopyInformationFromPipeline(vtkInformation^ request)
{
  ::vtkInformation* requestWrap = vtk::ConvertManagedToNative<::vtkInformation>(request->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkImageData>(m_instance)->CopyInformationFromPipeline(requestWrap);
}



void vtkImageData::PrepareForNewData()
{
  vtk::ConvertManagedToNative<::vtkImageData>(m_instance)->PrepareForNewData();
}



void vtkImageData::ShallowCopy(vtkDataObject^ src)
{
  ::vtkDataObject* srcWrap = vtk::ConvertManagedToNative<::vtkDataObject>(src->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkImageData>(m_instance)->ShallowCopy(srcWrap);
}



void vtkImageData::DeepCopy(vtkDataObject^ src)
{
  ::vtkDataObject* srcWrap = vtk::ConvertManagedToNative<::vtkDataObject>(src->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkImageData>(m_instance)->DeepCopy(srcWrap);
}



System::IntPtr vtkImageData::GetArrayPointerForExtent(vtkDataArray^ arg0, array<int>^ extent)
{
  ::vtkDataArray* arg0Wrap = vtk::ConvertManagedToNative<::vtkDataArray>(arg0->GetNativePointer());
  pin_ptr<int> extentPin = &extent[0];
  int* nativeextentPin = extentPin;
  void* retVal = vtk::ConvertManagedToNative<::vtkImageData>(m_instance)->GetArrayPointerForExtent(arg0Wrap, nativeextentPin);
  IntPtr retValWrap(retVal);
  return retValWrap;
}



System::IntPtr vtkImageData::GetArrayPointer(vtkDataArray^ arg0, array<int>^ coordinates)
{
  ::vtkDataArray* arg0Wrap = vtk::ConvertManagedToNative<::vtkDataArray>(arg0->GetNativePointer());
  pin_ptr<int> coordinatesPin = &coordinates[0];
  int* nativecoordinatesPin = coordinatesPin;
  void* retVal = vtk::ConvertManagedToNative<::vtkImageData>(m_instance)->GetArrayPointer(arg0Wrap, nativecoordinatesPin);
  IntPtr retValWrap(retVal);
  return retValWrap;
}



void vtkImageData::GetArrayIncrements(vtkDataArray^ arg0, array<int>^ arg1)
{
  ::vtkDataArray* arg0Wrap = vtk::ConvertManagedToNative<::vtkDataArray>(arg0->GetNativePointer());
  pin_ptr<int> arg1Pin = &arg1[0];
  int* nativearg1Pin = arg1Pin;
  vtk::ConvertManagedToNative<::vtkImageData>(m_instance)->GetArrayIncrements(arg0Wrap, nativearg1Pin);
}



void vtkImageData::ComputeInternalExtent(array<int>^ intExt, array<int>^ tgtExt, array<int>^ bnds)
{
  pin_ptr<int> intExtPin = &intExt[0];
  int* nativeintExtPin = intExtPin;
  pin_ptr<int> tgtExtPin = &tgtExt[0];
  int* nativetgtExtPin = tgtExtPin;
  pin_ptr<int> bndsPin = &bnds[0];
  int* nativebndsPin = bndsPin;
  vtk::ConvertManagedToNative<::vtkImageData>(m_instance)->ComputeInternalExtent(nativeintExtPin, nativetgtExtPin, nativebndsPin);
}



int vtkImageData::GetExtentType()
{
  int retVal = vtk::ConvertManagedToNative<::vtkImageData>(m_instance)->GetExtentType();
  return retVal;
}



  vtkImageData::vtkImageData(System::IntPtr native, bool bConst) : vtkDataSet(native, bConst) {}



  vtkImageData::vtkImageData(bool donothing) : vtkDataSet(donothing) {}



  vtkImageData::vtkImageData() : vtkDataSet(false) {
  this->SetNativePointer(IntPtr(::vtkImageData::New()));
}



  vtkImageData::~vtkImageData() { }





} // end namespace vtkFiltering
