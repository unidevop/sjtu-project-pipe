

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkPointLocatorDotNet.h"
#include "vtkPolyDataDotNet.h"

// native includes
#include "strstream"
#include "vtkPointLocator.h"
#include "vtkIdList.h"
#include "vtkObject.h"
#include "vtkPoints.h"
#include "vtkPolyData.h"

using namespace System;

namespace vtk {

System::String^ vtkPointLocator::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkPointLocator>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkPointLocator::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkPointLocator>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkPointLocator^ vtkPointLocator::NewInstance()
{
  ::vtkPointLocator* retVal = static_cast<::vtkPointLocator*>(vtk::ConvertManagedToNative<::vtkPointLocator>(m_instance)->NewInstance());
  return gcnew vtkPointLocator(IntPtr(retVal), false);
}



vtkPointLocator^ vtkPointLocator::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkPointLocator* retVal = static_cast<::vtkPointLocator*>(::vtkPointLocator::SafeDownCast(oWrap));
  return gcnew vtkPointLocator(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkPointLocator::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkPointLocator>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkPointLocator::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkPointLocator>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkPointLocator::SetDivisions(int arg0, int arg1, int arg2)
{
  vtk::ConvertManagedToNative<::vtkPointLocator>(m_instance)->SetDivisions(arg0, arg1, arg2);
}



void vtkPointLocator::SetDivisions(array<int>^ a)
{
  pin_ptr<int> aPin = &a[0];
  int* nativeaPin = aPin;
  vtk::ConvertManagedToNative<::vtkPointLocator>(m_instance)->SetDivisions(nativeaPin);
}



array<int>^ vtkPointLocator::GetDivisions()
{
  const int* retVal = vtk::ConvertManagedToNative<::vtkPointLocator>(m_instance)->GetDivisions();
  array<int>^ mRetVal = gcnew array<int>(3);
  for (size_t cprIdx=0; cprIdx<3; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



void vtkPointLocator::SetNumberOfPointsPerBucket(int arg0)
{
  vtk::ConvertManagedToNative<::vtkPointLocator>(m_instance)->SetNumberOfPointsPerBucket(arg0);
}



int vtkPointLocator::GetNumberOfPointsPerBucketMinValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkPointLocator>(m_instance)->GetNumberOfPointsPerBucketMinValue();
  return retVal;
}



int vtkPointLocator::GetNumberOfPointsPerBucketMaxValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkPointLocator>(m_instance)->GetNumberOfPointsPerBucketMaxValue();
  return retVal;
}



int vtkPointLocator::GetNumberOfPointsPerBucket()
{
  int retVal = vtk::ConvertManagedToNative<::vtkPointLocator>(m_instance)->GetNumberOfPointsPerBucket();
  return retVal;
}



int vtkPointLocator::FindClosestPoint(array<double>^ x)
{
  pin_ptr<double> xPin = &x[0];
  double* nativexPin = xPin;
  int retVal = vtk::ConvertManagedToNative<::vtkPointLocator>(m_instance)->FindClosestPoint(nativexPin);
  return retVal;
}



int vtkPointLocator::FindClosestPoint(double x, double y, double z)
{
  int retVal = vtk::ConvertManagedToNative<::vtkPointLocator>(m_instance)->FindClosestPoint(x, y, z);
  return retVal;
}



int vtkPointLocator::FindClosestPointWithinRadius(double radius, array<double>^ x, double% dist2)
{
  pin_ptr<double> xPin = &x[0];
  double* nativexPin = xPin;
  pin_ptr<double> dist2Pin = &dist2;
  int retVal = vtk::ConvertManagedToNative<::vtkPointLocator>(m_instance)->FindClosestPointWithinRadius(radius, nativexPin, *dist2Pin);
  return retVal;
}



int vtkPointLocator::FindClosestPointWithinRadius(double radius, array<double>^ x, double inputDataLength, double% dist2)
{
  pin_ptr<double> xPin = &x[0];
  double* nativexPin = xPin;
  pin_ptr<double> dist2Pin = &dist2;
  int retVal = vtk::ConvertManagedToNative<::vtkPointLocator>(m_instance)->FindClosestPointWithinRadius(radius, nativexPin, inputDataLength, *dist2Pin);
  return retVal;
}



int vtkPointLocator::InitPointInsertion(vtkPoints^ newPts, array<double>^ bounds)
{
  ::vtkPoints* newPtsWrap = vtk::ConvertManagedToNative<::vtkPoints>(newPts->GetNativePointer());
  pin_ptr<double> boundsPin = &bounds[0];
  double* nativeboundsPin = boundsPin;
  int retVal = vtk::ConvertManagedToNative<::vtkPointLocator>(m_instance)->InitPointInsertion(newPtsWrap, nativeboundsPin);
  return retVal;
}



int vtkPointLocator::InitPointInsertion(vtkPoints^ newPts, array<double>^ bounds, int estSize)
{
  ::vtkPoints* newPtsWrap = vtk::ConvertManagedToNative<::vtkPoints>(newPts->GetNativePointer());
  pin_ptr<double> boundsPin = &bounds[0];
  double* nativeboundsPin = boundsPin;
  int retVal = vtk::ConvertManagedToNative<::vtkPointLocator>(m_instance)->InitPointInsertion(newPtsWrap, nativeboundsPin, estSize);
  return retVal;
}



void vtkPointLocator::InsertPoint(int ptId, array<double>^ x)
{
  pin_ptr<double> xPin = &x[0];
  double* nativexPin = xPin;
  vtk::ConvertManagedToNative<::vtkPointLocator>(m_instance)->InsertPoint(ptId, nativexPin);
}



int vtkPointLocator::InsertNextPoint(array<double>^ x)
{
  pin_ptr<double> xPin = &x[0];
  double* nativexPin = xPin;
  int retVal = vtk::ConvertManagedToNative<::vtkPointLocator>(m_instance)->InsertNextPoint(nativexPin);
  return retVal;
}



int vtkPointLocator::IsInsertedPoint(double x, double y, double z)
{
  int retVal = vtk::ConvertManagedToNative<::vtkPointLocator>(m_instance)->IsInsertedPoint(x, y, z);
  return retVal;
}



int vtkPointLocator::IsInsertedPoint(array<double>^ x)
{
  pin_ptr<double> xPin = &x[0];
  double* nativexPin = xPin;
  int retVal = vtk::ConvertManagedToNative<::vtkPointLocator>(m_instance)->IsInsertedPoint(nativexPin);
  return retVal;
}



int vtkPointLocator::InsertUniquePoint(array<double>^ x, int% ptId)
{
  pin_ptr<double> xPin = &x[0];
  double* nativexPin = xPin;
  pin_ptr<int> ptIdPin = &ptId;
  int retVal = vtk::ConvertManagedToNative<::vtkPointLocator>(m_instance)->InsertUniquePoint(nativexPin, *ptIdPin);
  return retVal;
}



int vtkPointLocator::FindClosestInsertedPoint(array<double>^ x)
{
  pin_ptr<double> xPin = &x[0];
  double* nativexPin = xPin;
  int retVal = vtk::ConvertManagedToNative<::vtkPointLocator>(m_instance)->FindClosestInsertedPoint(nativexPin);
  return retVal;
}



void vtkPointLocator::FindClosestNPoints(int N, array<double>^ x, vtkIdList^ result)
{
  pin_ptr<double> xPin = &x[0];
  double* nativexPin = xPin;
  ::vtkIdList* resultWrap = vtk::ConvertManagedToNative<::vtkIdList>(result->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkPointLocator>(m_instance)->FindClosestNPoints(N, nativexPin, resultWrap);
}



void vtkPointLocator::FindClosestNPoints(int N, double x, double y, double z, vtkIdList^ result)
{
  ::vtkIdList* resultWrap = vtk::ConvertManagedToNative<::vtkIdList>(result->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkPointLocator>(m_instance)->FindClosestNPoints(N, x, y, z, resultWrap);
}



void vtkPointLocator::FindDistributedPoints(int N, array<double>^ x, vtkIdList^ result, int M)
{
  pin_ptr<double> xPin = &x[0];
  double* nativexPin = xPin;
  ::vtkIdList* resultWrap = vtk::ConvertManagedToNative<::vtkIdList>(result->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkPointLocator>(m_instance)->FindDistributedPoints(N, nativexPin, resultWrap, M);
}



void vtkPointLocator::FindDistributedPoints(int N, double x, double y, double z, vtkIdList^ result, int M)
{
  ::vtkIdList* resultWrap = vtk::ConvertManagedToNative<::vtkIdList>(result->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkPointLocator>(m_instance)->FindDistributedPoints(N, x, y, z, resultWrap, M);
}



void vtkPointLocator::FindPointsWithinRadius(double R, array<double>^ x, vtkIdList^ result)
{
  pin_ptr<double> xPin = &x[0];
  double* nativexPin = xPin;
  ::vtkIdList* resultWrap = vtk::ConvertManagedToNative<::vtkIdList>(result->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkPointLocator>(m_instance)->FindPointsWithinRadius(R, nativexPin, resultWrap);
}



void vtkPointLocator::FindPointsWithinRadius(double R, double x, double y, double z, vtkIdList^ result)
{
  ::vtkIdList* resultWrap = vtk::ConvertManagedToNative<::vtkIdList>(result->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkPointLocator>(m_instance)->FindPointsWithinRadius(R, x, y, z, resultWrap);
}



vtkIdList^ vtkPointLocator::GetPointsInBucket(array<double>^ x, array<int>^ ijk)
{
  pin_ptr<double> xPin = &x[0];
  double* nativexPin = xPin;
  pin_ptr<int> ijkPin = &ijk[0];
  int* nativeijkPin = ijkPin;
  ::vtkIdList* retVal = static_cast<::vtkIdList*>(vtk::ConvertManagedToNative<::vtkPointLocator>(m_instance)->GetPointsInBucket(nativexPin, nativeijkPin));
  return gcnew vtkIdList(IntPtr(retVal), false);
}



vtkPoints^ vtkPointLocator::GetPoints()
{
  ::vtkPoints* retVal = static_cast<::vtkPoints*>(vtk::ConvertManagedToNative<::vtkPointLocator>(m_instance)->GetPoints());
  return gcnew vtkPoints(IntPtr(retVal), false);
}



void vtkPointLocator::Initialize()
{
  vtk::ConvertManagedToNative<::vtkPointLocator>(m_instance)->Initialize();
}



void vtkPointLocator::FreeSearchStructure()
{
  vtk::ConvertManagedToNative<::vtkPointLocator>(m_instance)->FreeSearchStructure();
}



void vtkPointLocator::BuildLocator()
{
  vtk::ConvertManagedToNative<::vtkPointLocator>(m_instance)->BuildLocator();
}



void vtkPointLocator::GenerateRepresentation(int level, vtkPolyData^ pd)
{
  ::vtkPolyData* pdWrap = vtk::ConvertManagedToNative<::vtkPolyData>(pd->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkPointLocator>(m_instance)->GenerateRepresentation(level, pdWrap);
}



  vtkPointLocator::vtkPointLocator(System::IntPtr native, bool bConst) : vtkLocator(native, bConst) {}



  vtkPointLocator::vtkPointLocator(bool donothing) : vtkLocator(donothing) {}



  vtkPointLocator::vtkPointLocator() : vtkLocator(false) {
  this->SetNativePointer(IntPtr(::vtkPointLocator::New()));
}



  vtkPointLocator::~vtkPointLocator() { }





} // end namespace vtkFiltering
