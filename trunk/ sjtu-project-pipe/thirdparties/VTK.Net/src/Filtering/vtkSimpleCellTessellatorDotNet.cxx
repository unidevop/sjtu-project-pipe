

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkSimpleCellTessellatorDotNet.h"
#include "vtkCellArrayDotNet.h"
#include "vtkGenericAdaptorCellDotNet.h"
#include "vtkGenericAttributeCollectionDotNet.h"
#include "vtkGenericDataSetDotNet.h"
#include "vtkPointDataDotNet.h"

// native includes
#include "strstream"
#include "vtkSimpleCellTessellator.h"
#include "vtkCellArray.h"
#include "vtkDoubleArray.h"
#include "vtkGenericAdaptorCell.h"
#include "vtkGenericAttributeCollection.h"
#include "vtkGenericDataSet.h"
#include "vtkObject.h"
#include "vtkPointData.h"

using namespace System;

namespace vtk {

System::String^ vtkSimpleCellTessellator::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkSimpleCellTessellator>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkSimpleCellTessellator::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkSimpleCellTessellator>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkSimpleCellTessellator^ vtkSimpleCellTessellator::NewInstance()
{
  ::vtkSimpleCellTessellator* retVal = static_cast<::vtkSimpleCellTessellator*>(vtk::ConvertManagedToNative<::vtkSimpleCellTessellator>(m_instance)->NewInstance());
  return gcnew vtkSimpleCellTessellator(IntPtr(retVal), false);
}



vtkSimpleCellTessellator^ vtkSimpleCellTessellator::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkSimpleCellTessellator* retVal = static_cast<::vtkSimpleCellTessellator*>(::vtkSimpleCellTessellator::SafeDownCast(oWrap));
  return gcnew vtkSimpleCellTessellator(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkSimpleCellTessellator::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkSimpleCellTessellator>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkSimpleCellTessellator::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkSimpleCellTessellator>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




vtkGenericAdaptorCell^ vtkSimpleCellTessellator::GetGenericCell()
{
  ::vtkGenericAdaptorCell* retVal = static_cast<::vtkGenericAdaptorCell*>(vtk::ConvertManagedToNative<::vtkSimpleCellTessellator>(m_instance)->GetGenericCell());
  return gcnew vtkGenericAdaptorCell(IntPtr(retVal), false);
}



void vtkSimpleCellTessellator::TessellateFace(vtkGenericAdaptorCell^ cell, vtkGenericAttributeCollection^ att, int index, vtkDoubleArray^ points, vtkCellArray^ cellArray, vtkPointData^ internalPd)
{
  ::vtkGenericAdaptorCell* cellWrap = vtk::ConvertManagedToNative<::vtkGenericAdaptorCell>(cell->GetNativePointer());
  ::vtkGenericAttributeCollection* attWrap = vtk::ConvertManagedToNative<::vtkGenericAttributeCollection>(att->GetNativePointer());
  ::vtkDoubleArray* pointsWrap = vtk::ConvertManagedToNative<::vtkDoubleArray>(points->GetNativePointer());
  ::vtkCellArray* cellArrayWrap = vtk::ConvertManagedToNative<::vtkCellArray>(cellArray->GetNativePointer());
  ::vtkPointData* internalPdWrap = vtk::ConvertManagedToNative<::vtkPointData>(internalPd->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkSimpleCellTessellator>(m_instance)->TessellateFace(cellWrap, attWrap, index, pointsWrap, cellArrayWrap, internalPdWrap);
}



void vtkSimpleCellTessellator::Tessellate(vtkGenericAdaptorCell^ cell, vtkGenericAttributeCollection^ att, vtkDoubleArray^ points, vtkCellArray^ cellArray, vtkPointData^ internalPd)
{
  ::vtkGenericAdaptorCell* cellWrap = vtk::ConvertManagedToNative<::vtkGenericAdaptorCell>(cell->GetNativePointer());
  ::vtkGenericAttributeCollection* attWrap = vtk::ConvertManagedToNative<::vtkGenericAttributeCollection>(att->GetNativePointer());
  ::vtkDoubleArray* pointsWrap = vtk::ConvertManagedToNative<::vtkDoubleArray>(points->GetNativePointer());
  ::vtkCellArray* cellArrayWrap = vtk::ConvertManagedToNative<::vtkCellArray>(cellArray->GetNativePointer());
  ::vtkPointData* internalPdWrap = vtk::ConvertManagedToNative<::vtkPointData>(internalPd->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkSimpleCellTessellator>(m_instance)->Tessellate(cellWrap, attWrap, pointsWrap, cellArrayWrap, internalPdWrap);
}



void vtkSimpleCellTessellator::Triangulate(vtkGenericAdaptorCell^ cell, vtkGenericAttributeCollection^ att, vtkDoubleArray^ points, vtkCellArray^ cellArray, vtkPointData^ internalPd)
{
  ::vtkGenericAdaptorCell* cellWrap = vtk::ConvertManagedToNative<::vtkGenericAdaptorCell>(cell->GetNativePointer());
  ::vtkGenericAttributeCollection* attWrap = vtk::ConvertManagedToNative<::vtkGenericAttributeCollection>(att->GetNativePointer());
  ::vtkDoubleArray* pointsWrap = vtk::ConvertManagedToNative<::vtkDoubleArray>(points->GetNativePointer());
  ::vtkCellArray* cellArrayWrap = vtk::ConvertManagedToNative<::vtkCellArray>(cellArray->GetNativePointer());
  ::vtkPointData* internalPdWrap = vtk::ConvertManagedToNative<::vtkPointData>(internalPd->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkSimpleCellTessellator>(m_instance)->Triangulate(cellWrap, attWrap, pointsWrap, cellArrayWrap, internalPdWrap);
}



void vtkSimpleCellTessellator::Reset()
{
  vtk::ConvertManagedToNative<::vtkSimpleCellTessellator>(m_instance)->Reset();
}



void vtkSimpleCellTessellator::Initialize(vtkGenericDataSet^ ds)
{
  ::vtkGenericDataSet* dsWrap = vtk::ConvertManagedToNative<::vtkGenericDataSet>(ds->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkSimpleCellTessellator>(m_instance)->Initialize(dsWrap);
}



int vtkSimpleCellTessellator::GetFixedSubdivisions()
{
  int retVal = vtk::ConvertManagedToNative<::vtkSimpleCellTessellator>(m_instance)->GetFixedSubdivisions();
  return retVal;
}



int vtkSimpleCellTessellator::GetMaxSubdivisionLevel()
{
  int retVal = vtk::ConvertManagedToNative<::vtkSimpleCellTessellator>(m_instance)->GetMaxSubdivisionLevel();
  return retVal;
}



int vtkSimpleCellTessellator::GetMaxAdaptiveSubdivisions()
{
  int retVal = vtk::ConvertManagedToNative<::vtkSimpleCellTessellator>(m_instance)->GetMaxAdaptiveSubdivisions();
  return retVal;
}



void vtkSimpleCellTessellator::SetFixedSubdivisions(int level)
{
  vtk::ConvertManagedToNative<::vtkSimpleCellTessellator>(m_instance)->SetFixedSubdivisions(level);
}



void vtkSimpleCellTessellator::SetMaxSubdivisionLevel(int level)
{
  vtk::ConvertManagedToNative<::vtkSimpleCellTessellator>(m_instance)->SetMaxSubdivisionLevel(level);
}



void vtkSimpleCellTessellator::SetSubdivisionLevels(int fixed, int maxLevel)
{
  vtk::ConvertManagedToNative<::vtkSimpleCellTessellator>(m_instance)->SetSubdivisionLevels(fixed, maxLevel);
}



  vtkSimpleCellTessellator::vtkSimpleCellTessellator(System::IntPtr native, bool bConst) : vtkGenericCellTessellator(native, bConst) {}



  vtkSimpleCellTessellator::vtkSimpleCellTessellator(bool donothing) : vtkGenericCellTessellator(donothing) {}



  vtkSimpleCellTessellator::vtkSimpleCellTessellator() : vtkGenericCellTessellator(false) {
  this->SetNativePointer(IntPtr(::vtkSimpleCellTessellator::New()));
}



  vtkSimpleCellTessellator::~vtkSimpleCellTessellator() { }





} // end namespace vtkFiltering
