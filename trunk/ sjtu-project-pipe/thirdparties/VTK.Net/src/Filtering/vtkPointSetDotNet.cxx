

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkPointSetDotNet.h"
#include "vtkCellDotNet.h"
#include "vtkDataObjectDotNet.h"
#include "vtkGenericCellDotNet.h"

// native includes
#include "strstream"
#include "vtkPointSet.h"
#include "vtkCell.h"
#include "vtkDataObject.h"
#include "vtkGenericCell.h"
#include "vtkPoints.h"

using namespace System;

namespace vtk {

System::String^ vtkPointSet::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkPointSet>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkPointSet::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkPointSet>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkPointSet^ vtkPointSet::NewInstance()
{
  ::vtkPointSet* retVal = static_cast<::vtkPointSet*>(vtk::ConvertManagedToNative<::vtkPointSet>(m_instance)->NewInstance());
  return gcnew vtkPointSet(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkPointSet::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkPointSet>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkPointSet::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkPointSet>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkPointSet::Initialize()
{
  vtk::ConvertManagedToNative<::vtkPointSet>(m_instance)->Initialize();
}



void vtkPointSet::CopyStructure(vtkDataSet^ pd)
{
  ::vtkDataSet* pdWrap = vtk::ConvertManagedToNative<::vtkDataSet>(pd->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkPointSet>(m_instance)->CopyStructure(pdWrap);
}



int vtkPointSet::GetNumberOfPoints()
{
  int retVal = vtk::ConvertManagedToNative<::vtkPointSet>(m_instance)->GetNumberOfPoints();
  return retVal;
}



array<double>^ vtkPointSet::GetPoint(int ptId)
{
  const double* retVal = vtk::ConvertManagedToNative<::vtkPointSet>(m_instance)->GetPoint(ptId);
  array<double>^ mRetVal = gcnew array<double>(3);
  for (size_t cprIdx=0; cprIdx<3; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



void vtkPointSet::GetPoint(int ptId, array<double>^ x)
{
  pin_ptr<double> xPin = &x[0];
  double* nativexPin = xPin;
  vtk::ConvertManagedToNative<::vtkPointSet>(m_instance)->GetPoint(ptId, nativexPin);
}



int vtkPointSet::FindPoint(array<double>^ x)
{
  pin_ptr<double> xPin = &x[0];
  double* nativexPin = xPin;
  int retVal = vtk::ConvertManagedToNative<::vtkPointSet>(m_instance)->FindPoint(nativexPin);
  return retVal;
}



int vtkPointSet::FindPoint(double x, double y, double z)
{
  int retVal = vtk::ConvertManagedToNative<::vtkPointSet>(m_instance)->FindPoint(x, y, z);
  return retVal;
}



int vtkPointSet::FindCell(array<double>^ x, vtkCell^ cell, int cellId, double tol2, int% subId, array<double>^ pcoords, array<double>^ weights)
{
  pin_ptr<double> xPin = &x[0];
  double* nativexPin = xPin;
  ::vtkCell* cellWrap = vtk::ConvertManagedToNative<::vtkCell>(cell->GetNativePointer());
  pin_ptr<int> subIdPin = &subId;
  pin_ptr<double> pcoordsPin = &pcoords[0];
  double* nativepcoordsPin = pcoordsPin;
  pin_ptr<double> weightsPin = &weights[0];
  double* nativeweightsPin = weightsPin;
  int retVal = vtk::ConvertManagedToNative<::vtkPointSet>(m_instance)->FindCell(nativexPin, cellWrap, cellId, tol2, *subIdPin, nativepcoordsPin, nativeweightsPin);
  return retVal;
}



int vtkPointSet::FindCell(array<double>^ x, vtkCell^ cell, vtkGenericCell^ gencell, int cellId, double tol2, int% subId, array<double>^ pcoords, array<double>^ weights)
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
  int retVal = vtk::ConvertManagedToNative<::vtkPointSet>(m_instance)->FindCell(nativexPin, cellWrap, gencellWrap, cellId, tol2, *subIdPin, nativepcoordsPin, nativeweightsPin);
  return retVal;
}



unsigned long vtkPointSet::GetMTime()
{
  unsigned long retVal = vtk::ConvertManagedToNative<::vtkPointSet>(m_instance)->GetMTime();
  return retVal;
}



void vtkPointSet::ComputeBounds()
{
  vtk::ConvertManagedToNative<::vtkPointSet>(m_instance)->ComputeBounds();
}



void vtkPointSet::Squeeze()
{
  vtk::ConvertManagedToNative<::vtkPointSet>(m_instance)->Squeeze();
}



void vtkPointSet::SetPoints(vtkPoints^ arg0)
{
  ::vtkPoints* arg0Wrap = vtk::ConvertManagedToNative<::vtkPoints>(arg0->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkPointSet>(m_instance)->SetPoints(arg0Wrap);
}



vtkPoints^ vtkPointSet::GetPoints()
{
  ::vtkPoints* retVal = static_cast<::vtkPoints*>(vtk::ConvertManagedToNative<::vtkPointSet>(m_instance)->GetPoints());
  return gcnew vtkPoints(IntPtr(retVal), false);
}



unsigned long vtkPointSet::GetActualMemorySize()
{
  unsigned long retVal = vtk::ConvertManagedToNative<::vtkPointSet>(m_instance)->GetActualMemorySize();
  return retVal;
}



void vtkPointSet::ShallowCopy(vtkDataObject^ src)
{
  ::vtkDataObject* srcWrap = vtk::ConvertManagedToNative<::vtkDataObject>(src->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkPointSet>(m_instance)->ShallowCopy(srcWrap);
}



void vtkPointSet::DeepCopy(vtkDataObject^ src)
{
  ::vtkDataObject* srcWrap = vtk::ConvertManagedToNative<::vtkDataObject>(src->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkPointSet>(m_instance)->DeepCopy(srcWrap);
}



  vtkPointSet::vtkPointSet(System::IntPtr native, bool bConst) : vtkDataSet(native, bConst) {}



  vtkPointSet::vtkPointSet(bool donothing) : vtkDataSet(donothing) {}



  vtkPointSet::vtkPointSet() : vtkDataSet(false) {
  this->SetNativePointer(IntPtr(::vtkPointSet::New()));
}



  vtkPointSet::~vtkPointSet() { }





} // end namespace vtkFiltering
