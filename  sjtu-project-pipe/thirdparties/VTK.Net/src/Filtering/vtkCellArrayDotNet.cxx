

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkCellArrayDotNet.h"
#include "vtkCellDotNet.h"

// native includes
#include "strstream"
#include "vtkCellArray.h"
#include "vtkCell.h"
#include "vtkIdList.h"
#include "vtkIdTypeArray.h"

using namespace System;

namespace vtk {

System::String^ vtkCellArray::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkCellArray>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkCellArray::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkCellArray>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkCellArray^ vtkCellArray::NewInstance()
{
  ::vtkCellArray* retVal = static_cast<::vtkCellArray*>(vtk::ConvertManagedToNative<::vtkCellArray>(m_instance)->NewInstance());
  return gcnew vtkCellArray(IntPtr(retVal), false);
}



vtkCellArray^ vtkCellArray::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkCellArray* retVal = static_cast<::vtkCellArray*>(::vtkCellArray::SafeDownCast(oWrap));
  return gcnew vtkCellArray(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkCellArray::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkCellArray>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkCellArray::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkCellArray>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




int vtkCellArray::Allocate(int sz, int ext)
{
  int retVal = vtk::ConvertManagedToNative<::vtkCellArray>(m_instance)->Allocate(sz, ext);
  return retVal;
}



void vtkCellArray::Initialize()
{
  vtk::ConvertManagedToNative<::vtkCellArray>(m_instance)->Initialize();
}



int vtkCellArray::GetNumberOfCells()
{
  int retVal = vtk::ConvertManagedToNative<::vtkCellArray>(m_instance)->GetNumberOfCells();
  return retVal;
}



void vtkCellArray::SetNumberOfCells(int arg0)
{
  vtk::ConvertManagedToNative<::vtkCellArray>(m_instance)->SetNumberOfCells(arg0);
}



int vtkCellArray::EstimateSize(int numCells, int maxPtsPerCell)
{
  int retVal = vtk::ConvertManagedToNative<::vtkCellArray>(m_instance)->EstimateSize(numCells, maxPtsPerCell);
  return retVal;
}



void vtkCellArray::InitTraversal()
{
  vtk::ConvertManagedToNative<::vtkCellArray>(m_instance)->InitTraversal();
}



int vtkCellArray::GetSize()
{
  int retVal = vtk::ConvertManagedToNative<::vtkCellArray>(m_instance)->GetSize();
  return retVal;
}



int vtkCellArray::GetNumberOfConnectivityEntries()
{
  int retVal = vtk::ConvertManagedToNative<::vtkCellArray>(m_instance)->GetNumberOfConnectivityEntries();
  return retVal;
}



int vtkCellArray::InsertNextCell(vtkCell^ cell)
{
  ::vtkCell* cellWrap = vtk::ConvertManagedToNative<::vtkCell>(cell->GetNativePointer());
  int retVal = vtk::ConvertManagedToNative<::vtkCellArray>(m_instance)->InsertNextCell(cellWrap);
  return retVal;
}



int vtkCellArray::InsertNextCell(int npts, array<int>^ pts)
{
  pin_ptr<int> ptsPin = &pts[0];
  int* nativeptsPin = ptsPin;
  int retVal = vtk::ConvertManagedToNative<::vtkCellArray>(m_instance)->InsertNextCell(npts, nativeptsPin);
  return retVal;
}



int vtkCellArray::InsertNextCell(vtkIdList^ pts)
{
  ::vtkIdList* ptsWrap = vtk::ConvertManagedToNative<::vtkIdList>(pts->GetNativePointer());
  int retVal = vtk::ConvertManagedToNative<::vtkCellArray>(m_instance)->InsertNextCell(ptsWrap);
  return retVal;
}



int vtkCellArray::InsertNextCell(int npts)
{
  int retVal = vtk::ConvertManagedToNative<::vtkCellArray>(m_instance)->InsertNextCell(npts);
  return retVal;
}



void vtkCellArray::InsertCellPoint(int id)
{
  vtk::ConvertManagedToNative<::vtkCellArray>(m_instance)->InsertCellPoint(id);
}



void vtkCellArray::UpdateCellCount(int npts)
{
  vtk::ConvertManagedToNative<::vtkCellArray>(m_instance)->UpdateCellCount(npts);
}



int vtkCellArray::GetInsertLocation(int npts)
{
  int retVal = vtk::ConvertManagedToNative<::vtkCellArray>(m_instance)->GetInsertLocation(npts);
  return retVal;
}



int vtkCellArray::GetTraversalLocation()
{
  int retVal = vtk::ConvertManagedToNative<::vtkCellArray>(m_instance)->GetTraversalLocation();
  return retVal;
}



void vtkCellArray::SetTraversalLocation(int loc)
{
  vtk::ConvertManagedToNative<::vtkCellArray>(m_instance)->SetTraversalLocation(loc);
}



int vtkCellArray::GetTraversalLocation(int npts)
{
  int retVal = vtk::ConvertManagedToNative<::vtkCellArray>(m_instance)->GetTraversalLocation(npts);
  return retVal;
}



void vtkCellArray::ReverseCell(int loc)
{
  vtk::ConvertManagedToNative<::vtkCellArray>(m_instance)->ReverseCell(loc);
}



void vtkCellArray::ReplaceCell(int loc, int npts, array<int>^ pts)
{
  pin_ptr<int> ptsPin = &pts[0];
  int* nativeptsPin = ptsPin;
  vtk::ConvertManagedToNative<::vtkCellArray>(m_instance)->ReplaceCell(loc, npts, nativeptsPin);
}



int vtkCellArray::GetMaxCellSize()
{
  int retVal = vtk::ConvertManagedToNative<::vtkCellArray>(m_instance)->GetMaxCellSize();
  return retVal;
}



void vtkCellArray::SetCells(int ncells, vtkIdTypeArray^ cells)
{
  ::vtkIdTypeArray* cellsWrap = vtk::ConvertManagedToNative<::vtkIdTypeArray>(cells->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkCellArray>(m_instance)->SetCells(ncells, cellsWrap);
}



void vtkCellArray::DeepCopy(vtkCellArray^ ca)
{
  ::vtkCellArray* caWrap = vtk::ConvertManagedToNative<::vtkCellArray>(ca->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkCellArray>(m_instance)->DeepCopy(caWrap);
}



vtkIdTypeArray^ vtkCellArray::GetData()
{
  ::vtkIdTypeArray* retVal = static_cast<::vtkIdTypeArray*>(vtk::ConvertManagedToNative<::vtkCellArray>(m_instance)->GetData());
  return gcnew vtkIdTypeArray(IntPtr(retVal), false);
}



void vtkCellArray::Reset()
{
  vtk::ConvertManagedToNative<::vtkCellArray>(m_instance)->Reset();
}



void vtkCellArray::Squeeze()
{
  vtk::ConvertManagedToNative<::vtkCellArray>(m_instance)->Squeeze();
}



unsigned long vtkCellArray::GetActualMemorySize()
{
  unsigned long retVal = vtk::ConvertManagedToNative<::vtkCellArray>(m_instance)->GetActualMemorySize();
  return retVal;
}



  vtkCellArray::vtkCellArray(System::IntPtr native, bool bConst) : vtkObject(native, bConst) {}



  vtkCellArray::vtkCellArray(bool donothing) : vtkObject(donothing) {}



  vtkCellArray::vtkCellArray() : vtkObject(false) {
  this->SetNativePointer(IntPtr(::vtkCellArray::New()));
}



  vtkCellArray::~vtkCellArray() { }





} // end namespace vtkFiltering
