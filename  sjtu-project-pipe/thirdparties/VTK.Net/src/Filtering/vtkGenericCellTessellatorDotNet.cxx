

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkGenericCellTessellatorDotNet.h"
#include "vtkCellArrayDotNet.h"
#include "vtkGenericAdaptorCellDotNet.h"
#include "vtkGenericAttributeCollectionDotNet.h"
#include "vtkGenericDataSetDotNet.h"
#include "vtkPointDataDotNet.h"

// native includes
#include "strstream"
#include "vtkGenericCellTessellator.h"
#include "vtkCellArray.h"
#include "vtkCollection.h"
#include "vtkDoubleArray.h"
#include "vtkGenericAdaptorCell.h"
#include "vtkGenericAttributeCollection.h"
#include "vtkGenericDataSet.h"
#include "vtkPointData.h"

using namespace System;

namespace vtk {

System::String^ vtkGenericCellTessellator::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkGenericCellTessellator>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkGenericCellTessellator::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkGenericCellTessellator>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkGenericCellTessellator^ vtkGenericCellTessellator::NewInstance()
{
  ::vtkGenericCellTessellator* retVal = static_cast<::vtkGenericCellTessellator*>(vtk::ConvertManagedToNative<::vtkGenericCellTessellator>(m_instance)->NewInstance());
  return gcnew vtkGenericCellTessellator(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkGenericCellTessellator::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkGenericCellTessellator>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkGenericCellTessellator::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkGenericCellTessellator>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkGenericCellTessellator::TessellateFace(vtkGenericAdaptorCell^ cell, vtkGenericAttributeCollection^ att, int index, vtkDoubleArray^ points, vtkCellArray^ cellArray, vtkPointData^ internalPd)
{
  ::vtkGenericAdaptorCell* cellWrap = vtk::ConvertManagedToNative<::vtkGenericAdaptorCell>(cell->GetNativePointer());
  ::vtkGenericAttributeCollection* attWrap = vtk::ConvertManagedToNative<::vtkGenericAttributeCollection>(att->GetNativePointer());
  ::vtkDoubleArray* pointsWrap = vtk::ConvertManagedToNative<::vtkDoubleArray>(points->GetNativePointer());
  ::vtkCellArray* cellArrayWrap = vtk::ConvertManagedToNative<::vtkCellArray>(cellArray->GetNativePointer());
  ::vtkPointData* internalPdWrap = vtk::ConvertManagedToNative<::vtkPointData>(internalPd->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkGenericCellTessellator>(m_instance)->TessellateFace(cellWrap, attWrap, index, pointsWrap, cellArrayWrap, internalPdWrap);
}



void vtkGenericCellTessellator::Tessellate(vtkGenericAdaptorCell^ cell, vtkGenericAttributeCollection^ att, vtkDoubleArray^ points, vtkCellArray^ cellArray, vtkPointData^ internalPd)
{
  ::vtkGenericAdaptorCell* cellWrap = vtk::ConvertManagedToNative<::vtkGenericAdaptorCell>(cell->GetNativePointer());
  ::vtkGenericAttributeCollection* attWrap = vtk::ConvertManagedToNative<::vtkGenericAttributeCollection>(att->GetNativePointer());
  ::vtkDoubleArray* pointsWrap = vtk::ConvertManagedToNative<::vtkDoubleArray>(points->GetNativePointer());
  ::vtkCellArray* cellArrayWrap = vtk::ConvertManagedToNative<::vtkCellArray>(cellArray->GetNativePointer());
  ::vtkPointData* internalPdWrap = vtk::ConvertManagedToNative<::vtkPointData>(internalPd->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkGenericCellTessellator>(m_instance)->Tessellate(cellWrap, attWrap, pointsWrap, cellArrayWrap, internalPdWrap);
}



void vtkGenericCellTessellator::Triangulate(vtkGenericAdaptorCell^ cell, vtkGenericAttributeCollection^ att, vtkDoubleArray^ points, vtkCellArray^ cellArray, vtkPointData^ internalPd)
{
  ::vtkGenericAdaptorCell* cellWrap = vtk::ConvertManagedToNative<::vtkGenericAdaptorCell>(cell->GetNativePointer());
  ::vtkGenericAttributeCollection* attWrap = vtk::ConvertManagedToNative<::vtkGenericAttributeCollection>(att->GetNativePointer());
  ::vtkDoubleArray* pointsWrap = vtk::ConvertManagedToNative<::vtkDoubleArray>(points->GetNativePointer());
  ::vtkCellArray* cellArrayWrap = vtk::ConvertManagedToNative<::vtkCellArray>(cellArray->GetNativePointer());
  ::vtkPointData* internalPdWrap = vtk::ConvertManagedToNative<::vtkPointData>(internalPd->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkGenericCellTessellator>(m_instance)->Triangulate(cellWrap, attWrap, pointsWrap, cellArrayWrap, internalPdWrap);
}



void vtkGenericCellTessellator::SetErrorMetrics(vtkCollection^ someErrorMetrics)
{
  ::vtkCollection* someErrorMetricsWrap = vtk::ConvertManagedToNative<::vtkCollection>(someErrorMetrics->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkGenericCellTessellator>(m_instance)->SetErrorMetrics(someErrorMetricsWrap);
}



vtkCollection^ vtkGenericCellTessellator::GetErrorMetrics()
{
  ::vtkCollection* retVal = static_cast<::vtkCollection*>(vtk::ConvertManagedToNative<::vtkGenericCellTessellator>(m_instance)->GetErrorMetrics());
  return gcnew vtkCollection(IntPtr(retVal), false);
}



void vtkGenericCellTessellator::Initialize(vtkGenericDataSet^ ds)
{
  ::vtkGenericDataSet* dsWrap = vtk::ConvertManagedToNative<::vtkGenericDataSet>(ds->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkGenericCellTessellator>(m_instance)->Initialize(dsWrap);
}



void vtkGenericCellTessellator::InitErrorMetrics(vtkGenericDataSet^ ds)
{
  ::vtkGenericDataSet* dsWrap = vtk::ConvertManagedToNative<::vtkGenericDataSet>(ds->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkGenericCellTessellator>(m_instance)->InitErrorMetrics(dsWrap);
}



int vtkGenericCellTessellator::GetMeasurement()
{
  int retVal = vtk::ConvertManagedToNative<::vtkGenericCellTessellator>(m_instance)->GetMeasurement();
  return retVal;
}



void vtkGenericCellTessellator::SetMeasurement(int flag)
{
  vtk::ConvertManagedToNative<::vtkGenericCellTessellator>(m_instance)->SetMeasurement(flag);
}



void vtkGenericCellTessellator::GetMaxErrors(array<double>^ errors)
{
  pin_ptr<double> errorsPin = &errors[0];
  double* nativeerrorsPin = errorsPin;
  vtk::ConvertManagedToNative<::vtkGenericCellTessellator>(m_instance)->GetMaxErrors(nativeerrorsPin);
}



  vtkGenericCellTessellator::vtkGenericCellTessellator(System::IntPtr native, bool bConst) : vtkObject(native, bConst) {}



  vtkGenericCellTessellator::vtkGenericCellTessellator(bool donothing) : vtkObject(donothing) {}



  vtkGenericCellTessellator::vtkGenericCellTessellator() : vtkObject(false) {
  this->SetNativePointer(IntPtr(::vtkGenericCellTessellator::New()));
}



  vtkGenericCellTessellator::~vtkGenericCellTessellator() { }





} // end namespace vtkFiltering
