

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkMergeCellsDotNet.h"

// native includes
#include "strstream"
#include "vtkMergeCells.h"
#include "vtkDataSet.h"
#include "vtkUnstructuredGrid.h"

using namespace System;

namespace vtk {

System::String^ vtkMergeCells::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkMergeCells>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkMergeCells::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkMergeCells>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkMergeCells^ vtkMergeCells::NewInstance()
{
  ::vtkMergeCells* retVal = static_cast<::vtkMergeCells*>(vtk::ConvertManagedToNative<::vtkMergeCells>(m_instance)->NewInstance());
  return gcnew vtkMergeCells(IntPtr(retVal), false);
}



vtkMergeCells^ vtkMergeCells::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkMergeCells* retVal = static_cast<::vtkMergeCells*>(::vtkMergeCells::SafeDownCast(oWrap));
  return gcnew vtkMergeCells(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkMergeCells::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkMergeCells>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkMergeCells::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkMergeCells>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkMergeCells::SetUnstructuredGrid(vtkUnstructuredGrid^ arg0)
{
  ::vtkUnstructuredGrid* arg0Wrap = vtk::ConvertManagedToNative<::vtkUnstructuredGrid>(arg0->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkMergeCells>(m_instance)->SetUnstructuredGrid(arg0Wrap);
}



vtkUnstructuredGrid^ vtkMergeCells::GetUnstructuredGrid()
{
  ::vtkUnstructuredGrid* retVal = static_cast<::vtkUnstructuredGrid*>(vtk::ConvertManagedToNative<::vtkMergeCells>(m_instance)->GetUnstructuredGrid());
  return gcnew vtkUnstructuredGrid(IntPtr(retVal), false);
}



void vtkMergeCells::SetTotalNumberOfCells(int arg0)
{
  vtk::ConvertManagedToNative<::vtkMergeCells>(m_instance)->SetTotalNumberOfCells(arg0);
}



int vtkMergeCells::GetTotalNumberOfCells()
{
  int retVal = vtk::ConvertManagedToNative<::vtkMergeCells>(m_instance)->GetTotalNumberOfCells();
  return retVal;
}



void vtkMergeCells::SetTotalNumberOfPoints(int arg0)
{
  vtk::ConvertManagedToNative<::vtkMergeCells>(m_instance)->SetTotalNumberOfPoints(arg0);
}



int vtkMergeCells::GetTotalNumberOfPoints()
{
  int retVal = vtk::ConvertManagedToNative<::vtkMergeCells>(m_instance)->GetTotalNumberOfPoints();
  return retVal;
}



void vtkMergeCells::SetGlobalIdArrayName(System::String^ arg0)
{
  char* arg0Wrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(arg0).ToPointer());
  vtk::ConvertManagedToNative<::vtkMergeCells>(m_instance)->SetGlobalIdArrayName(arg0Wrap);
  arg0->Remove(0,arg0->Length);
  arg0->Insert(0,System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(arg0Wrap)));
System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(arg0Wrap));
}



System::String^ vtkMergeCells::GetGlobalIdArrayName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkMergeCells>(m_instance)->GetGlobalIdArrayName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



void vtkMergeCells::SetPointMergeTolerance(float arg0)
{
  vtk::ConvertManagedToNative<::vtkMergeCells>(m_instance)->SetPointMergeTolerance(arg0);
}



float vtkMergeCells::GetPointMergeToleranceMinValue()
{
  float retVal = vtk::ConvertManagedToNative<::vtkMergeCells>(m_instance)->GetPointMergeToleranceMinValue();
  return retVal;
}



float vtkMergeCells::GetPointMergeToleranceMaxValue()
{
  float retVal = vtk::ConvertManagedToNative<::vtkMergeCells>(m_instance)->GetPointMergeToleranceMaxValue();
  return retVal;
}



float vtkMergeCells::GetPointMergeTolerance()
{
  float retVal = vtk::ConvertManagedToNative<::vtkMergeCells>(m_instance)->GetPointMergeTolerance();
  return retVal;
}



void vtkMergeCells::SetGlobalCellIdArrayName(System::String^ arg0)
{
  char* arg0Wrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(arg0).ToPointer());
  vtk::ConvertManagedToNative<::vtkMergeCells>(m_instance)->SetGlobalCellIdArrayName(arg0Wrap);
  arg0->Remove(0,arg0->Length);
  arg0->Insert(0,System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(arg0Wrap)));
System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(arg0Wrap));
}



System::String^ vtkMergeCells::GetGlobalCellIdArrayName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkMergeCells>(m_instance)->GetGlobalCellIdArrayName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



void vtkMergeCells::SetMergeDuplicatePoints(int arg0)
{
  vtk::ConvertManagedToNative<::vtkMergeCells>(m_instance)->SetMergeDuplicatePoints(arg0);
}



int vtkMergeCells::GetMergeDuplicatePoints()
{
  int retVal = vtk::ConvertManagedToNative<::vtkMergeCells>(m_instance)->GetMergeDuplicatePoints();
  return retVal;
}



void vtkMergeCells::MergeDuplicatePointsOn()
{
  vtk::ConvertManagedToNative<::vtkMergeCells>(m_instance)->MergeDuplicatePointsOn();
}



void vtkMergeCells::MergeDuplicatePointsOff()
{
  vtk::ConvertManagedToNative<::vtkMergeCells>(m_instance)->MergeDuplicatePointsOff();
}



void vtkMergeCells::SetTotalNumberOfDataSets(int arg0)
{
  vtk::ConvertManagedToNative<::vtkMergeCells>(m_instance)->SetTotalNumberOfDataSets(arg0);
}



int vtkMergeCells::GetTotalNumberOfDataSets()
{
  int retVal = vtk::ConvertManagedToNative<::vtkMergeCells>(m_instance)->GetTotalNumberOfDataSets();
  return retVal;
}



int vtkMergeCells::MergeDataSet(vtkDataSet^ set)
{
  ::vtkDataSet* setWrap = vtk::ConvertManagedToNative<::vtkDataSet>(set->GetNativePointer());
  int retVal = vtk::ConvertManagedToNative<::vtkMergeCells>(m_instance)->MergeDataSet(setWrap);
  return retVal;
}



void vtkMergeCells::Finish()
{
  vtk::ConvertManagedToNative<::vtkMergeCells>(m_instance)->Finish();
}



  vtkMergeCells::vtkMergeCells(System::IntPtr native, bool bConst) : vtkObject(native, bConst) {}



  vtkMergeCells::vtkMergeCells(bool donothing) : vtkObject(donothing) {}



  vtkMergeCells::vtkMergeCells() : vtkObject(false) {
  this->SetNativePointer(IntPtr(::vtkMergeCells::New()));
}



  vtkMergeCells::~vtkMergeCells() { }





} // end namespace vtkGraphics
