

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkVisibilitySortDotNet.h"

// native includes
#include "strstream"
#include "vtkVisibilitySort.h"
#include "vtkDataSet.h"
#include "vtkIdTypeArray.h"
#include "vtkMatrix4x4.h"
#include "vtkObjectBase.h"

using namespace System;

namespace vtk {

System::String^ vtkVisibilitySort::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkVisibilitySort>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkVisibilitySort::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkVisibilitySort>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkVisibilitySort^ vtkVisibilitySort::NewInstance()
{
  ::vtkVisibilitySort* retVal = static_cast<::vtkVisibilitySort*>(vtk::ConvertManagedToNative<::vtkVisibilitySort>(m_instance)->NewInstance());
  return gcnew vtkVisibilitySort(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkVisibilitySort::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkVisibilitySort>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkVisibilitySort::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkVisibilitySort>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkVisibilitySort::InitTraversal()
{
  vtk::ConvertManagedToNative<::vtkVisibilitySort>(m_instance)->InitTraversal();
}



vtkIdTypeArray^ vtkVisibilitySort::GetNextCells()
{
  ::vtkIdTypeArray* retVal = static_cast<::vtkIdTypeArray*>(vtk::ConvertManagedToNative<::vtkVisibilitySort>(m_instance)->GetNextCells());
  return gcnew vtkIdTypeArray(IntPtr(retVal), false);
}



void vtkVisibilitySort::SetMaxCellsReturned(int arg0)
{
  vtk::ConvertManagedToNative<::vtkVisibilitySort>(m_instance)->SetMaxCellsReturned(arg0);
}



int vtkVisibilitySort::GetMaxCellsReturnedMinValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkVisibilitySort>(m_instance)->GetMaxCellsReturnedMinValue();
  return retVal;
}



int vtkVisibilitySort::GetMaxCellsReturnedMaxValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkVisibilitySort>(m_instance)->GetMaxCellsReturnedMaxValue();
  return retVal;
}



int vtkVisibilitySort::GetMaxCellsReturned()
{
  int retVal = vtk::ConvertManagedToNative<::vtkVisibilitySort>(m_instance)->GetMaxCellsReturned();
  return retVal;
}



void vtkVisibilitySort::SetModelTransform(vtkMatrix4x4^ mat)
{
  ::vtkMatrix4x4* matWrap = vtk::ConvertManagedToNative<::vtkMatrix4x4>(mat->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkVisibilitySort>(m_instance)->SetModelTransform(matWrap);
}



vtkMatrix4x4^ vtkVisibilitySort::GetModelTransform()
{
  ::vtkMatrix4x4* retVal = static_cast<::vtkMatrix4x4*>(vtk::ConvertManagedToNative<::vtkVisibilitySort>(m_instance)->GetModelTransform());
  return gcnew vtkMatrix4x4(IntPtr(retVal), false);
}



vtkMatrix4x4^ vtkVisibilitySort::GetInverseModelTransform()
{
  ::vtkMatrix4x4* retVal = static_cast<::vtkMatrix4x4*>(vtk::ConvertManagedToNative<::vtkVisibilitySort>(m_instance)->GetInverseModelTransform());
  return gcnew vtkMatrix4x4(IntPtr(retVal), false);
}



void vtkVisibilitySort::SetInput(vtkDataSet^ data)
{
  ::vtkDataSet* dataWrap = vtk::ConvertManagedToNative<::vtkDataSet>(data->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkVisibilitySort>(m_instance)->SetInput(dataWrap);
}



vtkDataSet^ vtkVisibilitySort::GetInput()
{
  ::vtkDataSet* retVal = static_cast<::vtkDataSet*>(vtk::ConvertManagedToNative<::vtkVisibilitySort>(m_instance)->GetInput());
  return gcnew vtkDataSet(IntPtr(retVal), false);
}



int vtkVisibilitySort::GetDirection()
{
  int retVal = vtk::ConvertManagedToNative<::vtkVisibilitySort>(m_instance)->GetDirection();
  return retVal;
}



void vtkVisibilitySort::SetDirection(int arg0)
{
  vtk::ConvertManagedToNative<::vtkVisibilitySort>(m_instance)->SetDirection(arg0);
}



void vtkVisibilitySort::SetDirectionToBackToFront()
{
  vtk::ConvertManagedToNative<::vtkVisibilitySort>(m_instance)->SetDirectionToBackToFront();
}



void vtkVisibilitySort::SetDirectionToFrontToBack()
{
  vtk::ConvertManagedToNative<::vtkVisibilitySort>(m_instance)->SetDirectionToFrontToBack();
}



void vtkVisibilitySort::Register(vtkObjectBase^ o)
{
  ::vtkObjectBase* oWrap = static_cast<::vtkObjectBase*>(o->GetNativePointer().ToPointer());
  vtk::ConvertManagedToNative<::vtkVisibilitySort>(m_instance)->Register(oWrap);
}



void vtkVisibilitySort::UnRegister(vtkObjectBase^ o)
{
  ::vtkObjectBase* oWrap = static_cast<::vtkObjectBase*>(o->GetNativePointer().ToPointer());
  vtk::ConvertManagedToNative<::vtkVisibilitySort>(m_instance)->UnRegister(oWrap);
}



  vtkVisibilitySort::vtkVisibilitySort(System::IntPtr native, bool bConst) : vtkObject(native, bConst) {}



  vtkVisibilitySort::vtkVisibilitySort(bool donothing) : vtkObject(donothing) {}



  vtkVisibilitySort::vtkVisibilitySort() : vtkObject(false) {
  this->SetNativePointer(IntPtr(::vtkVisibilitySort::New()));
}



  vtkVisibilitySort::~vtkVisibilitySort() { }





} // end namespace vtkGraphics
