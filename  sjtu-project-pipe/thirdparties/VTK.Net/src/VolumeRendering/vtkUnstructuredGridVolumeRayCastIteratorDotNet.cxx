

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkUnstructuredGridVolumeRayCastIteratorDotNet.h"

// native includes
#include "strstream"
#include "vtkUnstructuredGridVolumeRayCastIterator.h"
#include "vtkDataArray.h"
#include "vtkDoubleArray.h"
#include "vtkIdList.h"

using namespace System;

namespace vtk {

System::String^ vtkUnstructuredGridVolumeRayCastIterator::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkUnstructuredGridVolumeRayCastIterator>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkUnstructuredGridVolumeRayCastIterator::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkUnstructuredGridVolumeRayCastIterator>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkUnstructuredGridVolumeRayCastIterator^ vtkUnstructuredGridVolumeRayCastIterator::NewInstance()
{
  ::vtkUnstructuredGridVolumeRayCastIterator* retVal = static_cast<::vtkUnstructuredGridVolumeRayCastIterator*>(vtk::ConvertManagedToNative<::vtkUnstructuredGridVolumeRayCastIterator>(m_instance)->NewInstance());
  return gcnew vtkUnstructuredGridVolumeRayCastIterator(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkUnstructuredGridVolumeRayCastIterator::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkUnstructuredGridVolumeRayCastIterator>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkUnstructuredGridVolumeRayCastIterator::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkUnstructuredGridVolumeRayCastIterator>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkUnstructuredGridVolumeRayCastIterator::Initialize(int x, int y)
{
  vtk::ConvertManagedToNative<::vtkUnstructuredGridVolumeRayCastIterator>(m_instance)->Initialize(x, y);
}



int vtkUnstructuredGridVolumeRayCastIterator::GetNextIntersections(vtkIdList^ intersectedCells, vtkDoubleArray^ intersectionLengths, vtkDataArray^ scalars, vtkDataArray^ nearIntersections, vtkDataArray^ farIntersections)
{
  ::vtkIdList* intersectedCellsWrap = vtk::ConvertManagedToNative<::vtkIdList>(intersectedCells->GetNativePointer());
  ::vtkDoubleArray* intersectionLengthsWrap = vtk::ConvertManagedToNative<::vtkDoubleArray>(intersectionLengths->GetNativePointer());
  ::vtkDataArray* scalarsWrap = vtk::ConvertManagedToNative<::vtkDataArray>(scalars->GetNativePointer());
  ::vtkDataArray* nearIntersectionsWrap = vtk::ConvertManagedToNative<::vtkDataArray>(nearIntersections->GetNativePointer());
  ::vtkDataArray* farIntersectionsWrap = vtk::ConvertManagedToNative<::vtkDataArray>(farIntersections->GetNativePointer());
  int retVal = vtk::ConvertManagedToNative<::vtkUnstructuredGridVolumeRayCastIterator>(m_instance)->GetNextIntersections(intersectedCellsWrap, intersectionLengthsWrap, scalarsWrap, nearIntersectionsWrap, farIntersectionsWrap);
  return retVal;
}



void vtkUnstructuredGridVolumeRayCastIterator::SetBounds(double arg0, double arg1)
{
  vtk::ConvertManagedToNative<::vtkUnstructuredGridVolumeRayCastIterator>(m_instance)->SetBounds(arg0, arg1);
}



void vtkUnstructuredGridVolumeRayCastIterator::SetBounds(array<double>^ a)
{
  pin_ptr<double> aPin = &a[0];
  double* nativeaPin = aPin;
  vtk::ConvertManagedToNative<::vtkUnstructuredGridVolumeRayCastIterator>(m_instance)->SetBounds(nativeaPin);
}



array<double>^ vtkUnstructuredGridVolumeRayCastIterator::GetBounds()
{
  const double* retVal = vtk::ConvertManagedToNative<::vtkUnstructuredGridVolumeRayCastIterator>(m_instance)->GetBounds();
  array<double>^ mRetVal = gcnew array<double>(2);
  for (size_t cprIdx=0; cprIdx<2; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



void vtkUnstructuredGridVolumeRayCastIterator::SetMaxNumberOfIntersections(int arg0)
{
  vtk::ConvertManagedToNative<::vtkUnstructuredGridVolumeRayCastIterator>(m_instance)->SetMaxNumberOfIntersections(arg0);
}



int vtkUnstructuredGridVolumeRayCastIterator::GetMaxNumberOfIntersections()
{
  int retVal = vtk::ConvertManagedToNative<::vtkUnstructuredGridVolumeRayCastIterator>(m_instance)->GetMaxNumberOfIntersections();
  return retVal;
}



  vtkUnstructuredGridVolumeRayCastIterator::vtkUnstructuredGridVolumeRayCastIterator(System::IntPtr native, bool bConst) : vtkObject(native, bConst) {}



  vtkUnstructuredGridVolumeRayCastIterator::vtkUnstructuredGridVolumeRayCastIterator(bool donothing) : vtkObject(donothing) {}



  vtkUnstructuredGridVolumeRayCastIterator::vtkUnstructuredGridVolumeRayCastIterator() : vtkObject(false) {
  this->SetNativePointer(IntPtr(::vtkUnstructuredGridVolumeRayCastIterator::New()));
}



  vtkUnstructuredGridVolumeRayCastIterator::~vtkUnstructuredGridVolumeRayCastIterator() { }





} // end namespace vtkVolumeRendering
