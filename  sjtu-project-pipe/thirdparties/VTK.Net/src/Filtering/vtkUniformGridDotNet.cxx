

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkUniformGridDotNet.h"
#include "vtkCellDotNet.h"
#include "vtkDataObjectDotNet.h"
#include "vtkDataSetDotNet.h"
#include "vtkGenericCellDotNet.h"

// native includes
#include "strstream"
#include "vtkUniformGrid.h"
#include "vtkCell.h"
#include "vtkDataObject.h"
#include "vtkDataSet.h"
#include "vtkGenericCell.h"
#include "vtkIdList.h"
#include "vtkObject.h"
#include "vtkUnsignedCharArray.h"

using namespace System;

namespace vtk {

System::String^ vtkUniformGrid::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkUniformGrid>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkUniformGrid::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkUniformGrid>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkUniformGrid^ vtkUniformGrid::NewInstance()
{
  ::vtkUniformGrid* retVal = static_cast<::vtkUniformGrid*>(vtk::ConvertManagedToNative<::vtkUniformGrid>(m_instance)->NewInstance());
  return gcnew vtkUniformGrid(IntPtr(retVal), false);
}



vtkUniformGrid^ vtkUniformGrid::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkUniformGrid* retVal = static_cast<::vtkUniformGrid*>(::vtkUniformGrid::SafeDownCast(oWrap));
  return gcnew vtkUniformGrid(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkUniformGrid::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkUniformGrid>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkUniformGrid::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkUniformGrid>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkUniformGrid::CopyStructure(vtkDataSet^ ds)
{
  ::vtkDataSet* dsWrap = vtk::ConvertManagedToNative<::vtkDataSet>(ds->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkUniformGrid>(m_instance)->CopyStructure(dsWrap);
}



int vtkUniformGrid::GetDataObjectType()
{
  int retVal = vtk::ConvertManagedToNative<::vtkUniformGrid>(m_instance)->GetDataObjectType();
  return retVal;
}



vtkCell^ vtkUniformGrid::GetCell(int cellId)
{
  ::vtkCell* retVal = static_cast<::vtkCell*>(vtk::ConvertManagedToNative<::vtkUniformGrid>(m_instance)->GetCell(cellId));
  return gcnew vtkCell(IntPtr(retVal), false);
}



void vtkUniformGrid::GetCell(int cellId, vtkGenericCell^ cell)
{
  ::vtkGenericCell* cellWrap = vtk::ConvertManagedToNative<::vtkGenericCell>(cell->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkUniformGrid>(m_instance)->GetCell(cellId, cellWrap);
}



int vtkUniformGrid::FindCell(array<double>^ x, vtkCell^ cell, int cellId, double tol2, int% subId, array<double>^ pcoords, array<double>^ weights)
{
  pin_ptr<double> xPin = &x[0];
  double* nativexPin = xPin;
  ::vtkCell* cellWrap = vtk::ConvertManagedToNative<::vtkCell>(cell->GetNativePointer());
  pin_ptr<int> subIdPin = &subId;
  pin_ptr<double> pcoordsPin = &pcoords[0];
  double* nativepcoordsPin = pcoordsPin;
  pin_ptr<double> weightsPin = &weights[0];
  double* nativeweightsPin = weightsPin;
  int retVal = vtk::ConvertManagedToNative<::vtkUniformGrid>(m_instance)->FindCell(nativexPin, cellWrap, cellId, tol2, *subIdPin, nativepcoordsPin, nativeweightsPin);
  return retVal;
}



int vtkUniformGrid::FindCell(array<double>^ x, vtkCell^ cell, vtkGenericCell^ gencell, int cellId, double tol2, int% subId, array<double>^ pcoords, array<double>^ weights)
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
  int retVal = vtk::ConvertManagedToNative<::vtkUniformGrid>(m_instance)->FindCell(nativexPin, cellWrap, gencellWrap, cellId, tol2, *subIdPin, nativepcoordsPin, nativeweightsPin);
  return retVal;
}



vtkCell^ vtkUniformGrid::FindAndGetCell(array<double>^ x, vtkCell^ cell, int cellId, double tol2, int% subId, array<double>^ pcoords, array<double>^ weights)
{
  pin_ptr<double> xPin = &x[0];
  double* nativexPin = xPin;
  ::vtkCell* cellWrap = vtk::ConvertManagedToNative<::vtkCell>(cell->GetNativePointer());
  pin_ptr<int> subIdPin = &subId;
  pin_ptr<double> pcoordsPin = &pcoords[0];
  double* nativepcoordsPin = pcoordsPin;
  pin_ptr<double> weightsPin = &weights[0];
  double* nativeweightsPin = weightsPin;
  ::vtkCell* retVal = static_cast<::vtkCell*>(vtk::ConvertManagedToNative<::vtkUniformGrid>(m_instance)->FindAndGetCell(nativexPin, cellWrap, cellId, tol2, *subIdPin, nativepcoordsPin, nativeweightsPin));
  return gcnew vtkCell(IntPtr(retVal), false);
}



int vtkUniformGrid::GetCellType(int cellId)
{
  int retVal = vtk::ConvertManagedToNative<::vtkUniformGrid>(m_instance)->GetCellType(cellId);
  return retVal;
}



void vtkUniformGrid::GetCellPoints(int cellId, vtkIdList^ ptIds)
{
  ::vtkIdList* ptIdsWrap = vtk::ConvertManagedToNative<::vtkIdList>(ptIds->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkUniformGrid>(m_instance)->GetCellPoints(cellId, ptIdsWrap);
}



void vtkUniformGrid::GetPointCells(int ptId, vtkIdList^ cellIds)
{
  ::vtkIdList* cellIdsWrap = vtk::ConvertManagedToNative<::vtkIdList>(cellIds->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkUniformGrid>(m_instance)->GetPointCells(ptId, cellIdsWrap);
}



void vtkUniformGrid::Initialize()
{
  vtk::ConvertManagedToNative<::vtkUniformGrid>(m_instance)->Initialize();
}



int vtkUniformGrid::GetMaxCellSize()
{
  int retVal = vtk::ConvertManagedToNative<::vtkUniformGrid>(m_instance)->GetMaxCellSize();
  return retVal;
}



void vtkUniformGrid::GetScalarRange(array<double>^ range)
{
  pin_ptr<double> rangePin = &range[0];
  double* nativerangePin = rangePin;
  vtk::ConvertManagedToNative<::vtkUniformGrid>(m_instance)->GetScalarRange(nativerangePin);
}



void vtkUniformGrid::ShallowCopy(vtkDataObject^ src)
{
  ::vtkDataObject* srcWrap = vtk::ConvertManagedToNative<::vtkDataObject>(src->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkUniformGrid>(m_instance)->ShallowCopy(srcWrap);
}



void vtkUniformGrid::DeepCopy(vtkDataObject^ src)
{
  ::vtkDataObject* srcWrap = vtk::ConvertManagedToNative<::vtkDataObject>(src->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkUniformGrid>(m_instance)->DeepCopy(srcWrap);
}



void vtkUniformGrid::BlankPoint(int ptId)
{
  vtk::ConvertManagedToNative<::vtkUniformGrid>(m_instance)->BlankPoint(ptId);
}



void vtkUniformGrid::UnBlankPoint(int ptId)
{
  vtk::ConvertManagedToNative<::vtkUniformGrid>(m_instance)->UnBlankPoint(ptId);
}



void vtkUniformGrid::BlankCell(int ptId)
{
  vtk::ConvertManagedToNative<::vtkUniformGrid>(m_instance)->BlankCell(ptId);
}



void vtkUniformGrid::UnBlankCell(int ptId)
{
  vtk::ConvertManagedToNative<::vtkUniformGrid>(m_instance)->UnBlankCell(ptId);
}



vtkUnsignedCharArray^ vtkUniformGrid::GetPointVisibilityArray()
{
  ::vtkUnsignedCharArray* retVal = static_cast<::vtkUnsignedCharArray*>(vtk::ConvertManagedToNative<::vtkUniformGrid>(m_instance)->GetPointVisibilityArray());
  return gcnew vtkUnsignedCharArray(IntPtr(retVal), false);
}



void vtkUniformGrid::SetPointVisibilityArray(vtkUnsignedCharArray^ pointVisibility)
{
  ::vtkUnsignedCharArray* pointVisibilityWrap = vtk::ConvertManagedToNative<::vtkUnsignedCharArray>(pointVisibility->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkUniformGrid>(m_instance)->SetPointVisibilityArray(pointVisibilityWrap);
}



vtkUnsignedCharArray^ vtkUniformGrid::GetCellVisibilityArray()
{
  ::vtkUnsignedCharArray* retVal = static_cast<::vtkUnsignedCharArray*>(vtk::ConvertManagedToNative<::vtkUniformGrid>(m_instance)->GetCellVisibilityArray());
  return gcnew vtkUnsignedCharArray(IntPtr(retVal), false);
}



void vtkUniformGrid::SetCellVisibilityArray(vtkUnsignedCharArray^ pointVisibility)
{
  ::vtkUnsignedCharArray* pointVisibilityWrap = vtk::ConvertManagedToNative<::vtkUnsignedCharArray>(pointVisibility->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkUniformGrid>(m_instance)->SetCellVisibilityArray(pointVisibilityWrap);
}



unsigned char vtkUniformGrid::IsPointVisible(int ptId)
{
  unsigned char retVal = vtk::ConvertManagedToNative<::vtkUniformGrid>(m_instance)->IsPointVisible(ptId);
  return retVal;
}



unsigned char vtkUniformGrid::IsCellVisible(int cellId)
{
  unsigned char retVal = vtk::ConvertManagedToNative<::vtkUniformGrid>(m_instance)->IsCellVisible(cellId);
  return retVal;
}



unsigned char vtkUniformGrid::GetPointBlanking()
{
  unsigned char retVal = vtk::ConvertManagedToNative<::vtkUniformGrid>(m_instance)->GetPointBlanking();
  return retVal;
}



unsigned char vtkUniformGrid::GetCellBlanking()
{
  unsigned char retVal = vtk::ConvertManagedToNative<::vtkUniformGrid>(m_instance)->GetCellBlanking();
  return retVal;
}



vtkImageData^ vtkUniformGrid::NewImageDataCopy()
{
  ::vtkImageData* retVal = static_cast<::vtkImageData*>(vtk::ConvertManagedToNative<::vtkUniformGrid>(m_instance)->NewImageDataCopy());
  return gcnew vtkImageData(IntPtr(retVal), false);
}



  vtkUniformGrid::vtkUniformGrid(System::IntPtr native, bool bConst) : vtkImageData(native, bConst) {}



  vtkUniformGrid::vtkUniformGrid(bool donothing) : vtkImageData(donothing) {}



  vtkUniformGrid::vtkUniformGrid() : vtkImageData(false) {
  this->SetNativePointer(IntPtr(::vtkUniformGrid::New()));
}



  vtkUniformGrid::~vtkUniformGrid() { }





} // end namespace vtkFiltering
