

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkCellLocatorDotNet.h"
#include "vtkGenericCellDotNet.h"
#include "vtkPolyDataDotNet.h"

// native includes
#include "strstream"
#include "vtkCellLocator.h"
#include "vtkGenericCell.h"
#include "vtkIdList.h"
#include "vtkObject.h"
#include "vtkPolyData.h"

using namespace System;

namespace vtk {

System::String^ vtkCellLocator::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkCellLocator>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkCellLocator::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkCellLocator>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkCellLocator^ vtkCellLocator::NewInstance()
{
  ::vtkCellLocator* retVal = static_cast<::vtkCellLocator*>(vtk::ConvertManagedToNative<::vtkCellLocator>(m_instance)->NewInstance());
  return gcnew vtkCellLocator(IntPtr(retVal), false);
}



vtkCellLocator^ vtkCellLocator::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkCellLocator* retVal = static_cast<::vtkCellLocator*>(::vtkCellLocator::SafeDownCast(oWrap));
  return gcnew vtkCellLocator(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkCellLocator::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkCellLocator>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkCellLocator::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkCellLocator>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkCellLocator::SetNumberOfCellsPerBucket(int arg0)
{
  vtk::ConvertManagedToNative<::vtkCellLocator>(m_instance)->SetNumberOfCellsPerBucket(arg0);
}



int vtkCellLocator::GetNumberOfCellsPerBucketMinValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkCellLocator>(m_instance)->GetNumberOfCellsPerBucketMinValue();
  return retVal;
}



int vtkCellLocator::GetNumberOfCellsPerBucketMaxValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkCellLocator>(m_instance)->GetNumberOfCellsPerBucketMaxValue();
  return retVal;
}



int vtkCellLocator::GetNumberOfCellsPerBucket()
{
  int retVal = vtk::ConvertManagedToNative<::vtkCellLocator>(m_instance)->GetNumberOfCellsPerBucket();
  return retVal;
}



void vtkCellLocator::SetCacheCellBounds(int arg0)
{
  vtk::ConvertManagedToNative<::vtkCellLocator>(m_instance)->SetCacheCellBounds(arg0);
}



int vtkCellLocator::GetCacheCellBounds()
{
  int retVal = vtk::ConvertManagedToNative<::vtkCellLocator>(m_instance)->GetCacheCellBounds();
  return retVal;
}



void vtkCellLocator::CacheCellBoundsOn()
{
  vtk::ConvertManagedToNative<::vtkCellLocator>(m_instance)->CacheCellBoundsOn();
}



void vtkCellLocator::CacheCellBoundsOff()
{
  vtk::ConvertManagedToNative<::vtkCellLocator>(m_instance)->CacheCellBoundsOff();
}



int vtkCellLocator::IntersectWithLine(array<double>^ a0, array<double>^ a1, double tol, double% t, array<double>^ x, array<double>^ pcoords, int% subId)
{
  pin_ptr<double> a0Pin = &a0[0];
  double* nativea0Pin = a0Pin;
  pin_ptr<double> a1Pin = &a1[0];
  double* nativea1Pin = a1Pin;
  pin_ptr<double> tPin = &t;
  pin_ptr<double> xPin = &x[0];
  double* nativexPin = xPin;
  pin_ptr<double> pcoordsPin = &pcoords[0];
  double* nativepcoordsPin = pcoordsPin;
  pin_ptr<int> subIdPin = &subId;
  int retVal = vtk::ConvertManagedToNative<::vtkCellLocator>(m_instance)->IntersectWithLine(nativea0Pin, nativea1Pin, tol, *tPin, nativexPin, nativepcoordsPin, *subIdPin);
  return retVal;
}



int vtkCellLocator::IntersectWithLine(array<double>^ a0, array<double>^ a1, double tol, double% t, array<double>^ x, array<double>^ pcoords, int% subId, int% cellId)
{
  pin_ptr<double> a0Pin = &a0[0];
  double* nativea0Pin = a0Pin;
  pin_ptr<double> a1Pin = &a1[0];
  double* nativea1Pin = a1Pin;
  pin_ptr<double> tPin = &t;
  pin_ptr<double> xPin = &x[0];
  double* nativexPin = xPin;
  pin_ptr<double> pcoordsPin = &pcoords[0];
  double* nativepcoordsPin = pcoordsPin;
  pin_ptr<int> subIdPin = &subId;
  pin_ptr<int> cellIdPin = &cellId;
  int retVal = vtk::ConvertManagedToNative<::vtkCellLocator>(m_instance)->IntersectWithLine(nativea0Pin, nativea1Pin, tol, *tPin, nativexPin, nativepcoordsPin, *subIdPin, *cellIdPin);
  return retVal;
}



int vtkCellLocator::IntersectWithLine(array<double>^ a0, array<double>^ a1, double tol, double% t, array<double>^ x, array<double>^ pcoords, int% subId, int% cellId, vtkGenericCell^ cell)
{
  pin_ptr<double> a0Pin = &a0[0];
  double* nativea0Pin = a0Pin;
  pin_ptr<double> a1Pin = &a1[0];
  double* nativea1Pin = a1Pin;
  pin_ptr<double> tPin = &t;
  pin_ptr<double> xPin = &x[0];
  double* nativexPin = xPin;
  pin_ptr<double> pcoordsPin = &pcoords[0];
  double* nativepcoordsPin = pcoordsPin;
  pin_ptr<int> subIdPin = &subId;
  pin_ptr<int> cellIdPin = &cellId;
  ::vtkGenericCell* cellWrap = vtk::ConvertManagedToNative<::vtkGenericCell>(cell->GetNativePointer());
  int retVal = vtk::ConvertManagedToNative<::vtkCellLocator>(m_instance)->IntersectWithLine(nativea0Pin, nativea1Pin, tol, *tPin, nativexPin, nativepcoordsPin, *subIdPin, *cellIdPin, cellWrap);
  return retVal;
}



void vtkCellLocator::FindClosestPoint(array<double>^ x, array<double>^ closestPoint, int% cellId, int% subId, double% dist2)
{
  pin_ptr<double> xPin = &x[0];
  double* nativexPin = xPin;
  pin_ptr<double> closestPointPin = &closestPoint[0];
  double* nativeclosestPointPin = closestPointPin;
  pin_ptr<int> cellIdPin = &cellId;
  pin_ptr<int> subIdPin = &subId;
  pin_ptr<double> dist2Pin = &dist2;
  vtk::ConvertManagedToNative<::vtkCellLocator>(m_instance)->FindClosestPoint(nativexPin, nativeclosestPointPin, *cellIdPin, *subIdPin, *dist2Pin);
}



void vtkCellLocator::FindClosestPoint(array<double>^ x, array<double>^ closestPoint, vtkGenericCell^ cell, int% cellId, int% subId, double% dist2)
{
  pin_ptr<double> xPin = &x[0];
  double* nativexPin = xPin;
  pin_ptr<double> closestPointPin = &closestPoint[0];
  double* nativeclosestPointPin = closestPointPin;
  ::vtkGenericCell* cellWrap = vtk::ConvertManagedToNative<::vtkGenericCell>(cell->GetNativePointer());
  pin_ptr<int> cellIdPin = &cellId;
  pin_ptr<int> subIdPin = &subId;
  pin_ptr<double> dist2Pin = &dist2;
  vtk::ConvertManagedToNative<::vtkCellLocator>(m_instance)->FindClosestPoint(nativexPin, nativeclosestPointPin, cellWrap, *cellIdPin, *subIdPin, *dist2Pin);
}



int vtkCellLocator::FindClosestPointWithinRadius(array<double>^ x, double radius, array<double>^ closestPoint, int% cellId, int% subId, double% dist2)
{
  pin_ptr<double> xPin = &x[0];
  double* nativexPin = xPin;
  pin_ptr<double> closestPointPin = &closestPoint[0];
  double* nativeclosestPointPin = closestPointPin;
  pin_ptr<int> cellIdPin = &cellId;
  pin_ptr<int> subIdPin = &subId;
  pin_ptr<double> dist2Pin = &dist2;
  int retVal = vtk::ConvertManagedToNative<::vtkCellLocator>(m_instance)->FindClosestPointWithinRadius(nativexPin, radius, nativeclosestPointPin, *cellIdPin, *subIdPin, *dist2Pin);
  return retVal;
}



int vtkCellLocator::FindClosestPointWithinRadius(array<double>^ x, double radius, array<double>^ closestPoint, vtkGenericCell^ cell, int% cellId, int% subId, double% dist2)
{
  pin_ptr<double> xPin = &x[0];
  double* nativexPin = xPin;
  pin_ptr<double> closestPointPin = &closestPoint[0];
  double* nativeclosestPointPin = closestPointPin;
  ::vtkGenericCell* cellWrap = vtk::ConvertManagedToNative<::vtkGenericCell>(cell->GetNativePointer());
  pin_ptr<int> cellIdPin = &cellId;
  pin_ptr<int> subIdPin = &subId;
  pin_ptr<double> dist2Pin = &dist2;
  int retVal = vtk::ConvertManagedToNative<::vtkCellLocator>(m_instance)->FindClosestPointWithinRadius(nativexPin, radius, nativeclosestPointPin, cellWrap, *cellIdPin, *subIdPin, *dist2Pin);
  return retVal;
}



int vtkCellLocator::FindClosestPointWithinRadius(array<double>^ x, double radius, array<double>^ closestPoint, vtkGenericCell^ cell, int% cellId, int% subId, double% dist2, int% inside)
{
  pin_ptr<double> xPin = &x[0];
  double* nativexPin = xPin;
  pin_ptr<double> closestPointPin = &closestPoint[0];
  double* nativeclosestPointPin = closestPointPin;
  ::vtkGenericCell* cellWrap = vtk::ConvertManagedToNative<::vtkGenericCell>(cell->GetNativePointer());
  pin_ptr<int> cellIdPin = &cellId;
  pin_ptr<int> subIdPin = &subId;
  pin_ptr<double> dist2Pin = &dist2;
  pin_ptr<int> insidePin = &inside;
  int retVal = vtk::ConvertManagedToNative<::vtkCellLocator>(m_instance)->FindClosestPointWithinRadius(nativexPin, radius, nativeclosestPointPin, cellWrap, *cellIdPin, *subIdPin, *dist2Pin, *insidePin);
  return retVal;
}



vtkIdList^ vtkCellLocator::GetCells(int bucket)
{
  ::vtkIdList* retVal = static_cast<::vtkIdList*>(vtk::ConvertManagedToNative<::vtkCellLocator>(m_instance)->GetCells(bucket));
  return gcnew vtkIdList(IntPtr(retVal), false);
}



int vtkCellLocator::GetNumberOfBuckets()
{
  int retVal = vtk::ConvertManagedToNative<::vtkCellLocator>(m_instance)->GetNumberOfBuckets();
  return retVal;
}



void vtkCellLocator::FreeSearchStructure()
{
  vtk::ConvertManagedToNative<::vtkCellLocator>(m_instance)->FreeSearchStructure();
}



void vtkCellLocator::BuildLocator()
{
  vtk::ConvertManagedToNative<::vtkCellLocator>(m_instance)->BuildLocator();
}



void vtkCellLocator::GenerateRepresentation(int level, vtkPolyData^ pd)
{
  ::vtkPolyData* pdWrap = vtk::ConvertManagedToNative<::vtkPolyData>(pd->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkCellLocator>(m_instance)->GenerateRepresentation(level, pdWrap);
}



  vtkCellLocator::vtkCellLocator(System::IntPtr native, bool bConst) : vtkLocator(native, bConst) {}



  vtkCellLocator::vtkCellLocator(bool donothing) : vtkLocator(donothing) {}



  vtkCellLocator::vtkCellLocator() : vtkLocator(false) {
  this->SetNativePointer(IntPtr(::vtkCellLocator::New()));
}



  vtkCellLocator::~vtkCellLocator() { }





} // end namespace vtkFiltering
