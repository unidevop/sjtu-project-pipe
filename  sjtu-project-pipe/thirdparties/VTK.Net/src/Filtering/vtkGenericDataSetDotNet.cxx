

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkGenericDataSetDotNet.h"
#include "vtkCellTypesDotNet.h"
#include "vtkGenericAttributeCollectionDotNet.h"
#include "vtkGenericCellIteratorDotNet.h"
#include "vtkGenericCellTessellatorDotNet.h"
#include "vtkGenericPointIteratorDotNet.h"

// native includes
#include "strstream"
#include "vtkGenericDataSet.h"
#include "vtkCellTypes.h"
#include "vtkGenericAttributeCollection.h"
#include "vtkGenericCellIterator.h"
#include "vtkGenericCellTessellator.h"
#include "vtkGenericPointIterator.h"

using namespace System;

namespace vtk {

System::String^ vtkGenericDataSet::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkGenericDataSet>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkGenericDataSet::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkGenericDataSet>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkGenericDataSet^ vtkGenericDataSet::NewInstance()
{
  ::vtkGenericDataSet* retVal = static_cast<::vtkGenericDataSet*>(vtk::ConvertManagedToNative<::vtkGenericDataSet>(m_instance)->NewInstance());
  return gcnew vtkGenericDataSet(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkGenericDataSet::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkGenericDataSet>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkGenericDataSet::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkGenericDataSet>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




int vtkGenericDataSet::GetNumberOfPoints()
{
  int retVal = vtk::ConvertManagedToNative<::vtkGenericDataSet>(m_instance)->GetNumberOfPoints();
  return retVal;
}



int vtkGenericDataSet::GetNumberOfCells(int dim)
{
  int retVal = vtk::ConvertManagedToNative<::vtkGenericDataSet>(m_instance)->GetNumberOfCells(dim);
  return retVal;
}



int vtkGenericDataSet::GetCellDimension()
{
  int retVal = vtk::ConvertManagedToNative<::vtkGenericDataSet>(m_instance)->GetCellDimension();
  return retVal;
}



void vtkGenericDataSet::GetCellTypes(vtkCellTypes^ types)
{
  ::vtkCellTypes* typesWrap = vtk::ConvertManagedToNative<::vtkCellTypes>(types->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkGenericDataSet>(m_instance)->GetCellTypes(typesWrap);
}



vtkGenericCellIterator^ vtkGenericDataSet::NewCellIterator(int dim)
{
  ::vtkGenericCellIterator* retVal = static_cast<::vtkGenericCellIterator*>(vtk::ConvertManagedToNative<::vtkGenericDataSet>(m_instance)->NewCellIterator(dim));
  return gcnew vtkGenericCellIterator(IntPtr(retVal), false);
}



vtkGenericCellIterator^ vtkGenericDataSet::NewBoundaryIterator(int dim, int exteriorOnly)
{
  ::vtkGenericCellIterator* retVal = static_cast<::vtkGenericCellIterator*>(vtk::ConvertManagedToNative<::vtkGenericDataSet>(m_instance)->NewBoundaryIterator(dim, exteriorOnly));
  return gcnew vtkGenericCellIterator(IntPtr(retVal), false);
}



vtkGenericPointIterator^ vtkGenericDataSet::NewPointIterator()
{
  ::vtkGenericPointIterator* retVal = static_cast<::vtkGenericPointIterator*>(vtk::ConvertManagedToNative<::vtkGenericDataSet>(m_instance)->NewPointIterator());
  return gcnew vtkGenericPointIterator(IntPtr(retVal), false);
}



void vtkGenericDataSet::FindPoint(array<double>^ x, vtkGenericPointIterator^ p)
{
  pin_ptr<double> xPin = &x[0];
  double* nativexPin = xPin;
  ::vtkGenericPointIterator* pWrap = vtk::ConvertManagedToNative<::vtkGenericPointIterator>(p->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkGenericDataSet>(m_instance)->FindPoint(nativexPin, pWrap);
}



unsigned long vtkGenericDataSet::GetMTime()
{
  unsigned long retVal = vtk::ConvertManagedToNative<::vtkGenericDataSet>(m_instance)->GetMTime();
  return retVal;
}



void vtkGenericDataSet::ComputeBounds()
{
  vtk::ConvertManagedToNative<::vtkGenericDataSet>(m_instance)->ComputeBounds();
}



void vtkGenericDataSet::GetBounds(array<double>^ bounds)
{
  pin_ptr<double> boundsPin = &bounds[0];
  double* nativeboundsPin = boundsPin;
  vtk::ConvertManagedToNative<::vtkGenericDataSet>(m_instance)->GetBounds(nativeboundsPin);
}



void vtkGenericDataSet::GetCenter(array<double>^ center)
{
  pin_ptr<double> centerPin = &center[0];
  double* nativecenterPin = centerPin;
  vtk::ConvertManagedToNative<::vtkGenericDataSet>(m_instance)->GetCenter(nativecenterPin);
}



double vtkGenericDataSet::GetLength()
{
  double retVal = vtk::ConvertManagedToNative<::vtkGenericDataSet>(m_instance)->GetLength();
  return retVal;
}



vtkGenericAttributeCollection^ vtkGenericDataSet::GetAttributes()
{
  ::vtkGenericAttributeCollection* retVal = static_cast<::vtkGenericAttributeCollection*>(vtk::ConvertManagedToNative<::vtkGenericDataSet>(m_instance)->GetAttributes());
  return gcnew vtkGenericAttributeCollection(IntPtr(retVal), false);
}



void vtkGenericDataSet::SetTessellator(vtkGenericCellTessellator^ tessellator)
{
  ::vtkGenericCellTessellator* tessellatorWrap = vtk::ConvertManagedToNative<::vtkGenericCellTessellator>(tessellator->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkGenericDataSet>(m_instance)->SetTessellator(tessellatorWrap);
}



vtkGenericCellTessellator^ vtkGenericDataSet::GetTessellator()
{
  ::vtkGenericCellTessellator* retVal = static_cast<::vtkGenericCellTessellator*>(vtk::ConvertManagedToNative<::vtkGenericDataSet>(m_instance)->GetTessellator());
  return gcnew vtkGenericCellTessellator(IntPtr(retVal), false);
}



unsigned long vtkGenericDataSet::GetActualMemorySize()
{
  unsigned long retVal = vtk::ConvertManagedToNative<::vtkGenericDataSet>(m_instance)->GetActualMemorySize();
  return retVal;
}



int vtkGenericDataSet::GetDataObjectType()
{
  int retVal = vtk::ConvertManagedToNative<::vtkGenericDataSet>(m_instance)->GetDataObjectType();
  return retVal;
}



int vtkGenericDataSet::GetEstimatedSize()
{
  int retVal = vtk::ConvertManagedToNative<::vtkGenericDataSet>(m_instance)->GetEstimatedSize();
  return retVal;
}



  vtkGenericDataSet::vtkGenericDataSet(System::IntPtr native, bool bConst) : vtkDataObject(native, bConst) {}



  vtkGenericDataSet::vtkGenericDataSet(bool donothing) : vtkDataObject(donothing) {}



  vtkGenericDataSet::vtkGenericDataSet() : vtkDataObject(false) {
  this->SetNativePointer(IntPtr(::vtkGenericDataSet::New()));
}



  vtkGenericDataSet::~vtkGenericDataSet() { }





} // end namespace vtkFiltering
