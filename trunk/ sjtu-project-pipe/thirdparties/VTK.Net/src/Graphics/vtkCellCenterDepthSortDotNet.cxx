

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkCellCenterDepthSortDotNet.h"

// native includes
#include "strstream"
#include "vtkCellCenterDepthSort.h"
#include "vtkIdTypeArray.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkCellCenterDepthSort::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkCellCenterDepthSort>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkCellCenterDepthSort::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkCellCenterDepthSort>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkCellCenterDepthSort^ vtkCellCenterDepthSort::NewInstance()
{
  ::vtkCellCenterDepthSort* retVal = static_cast<::vtkCellCenterDepthSort*>(vtk::ConvertManagedToNative<::vtkCellCenterDepthSort>(m_instance)->NewInstance());
  return gcnew vtkCellCenterDepthSort(IntPtr(retVal), false);
}



vtkCellCenterDepthSort^ vtkCellCenterDepthSort::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkCellCenterDepthSort* retVal = static_cast<::vtkCellCenterDepthSort*>(::vtkCellCenterDepthSort::SafeDownCast(oWrap));
  return gcnew vtkCellCenterDepthSort(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkCellCenterDepthSort::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkCellCenterDepthSort>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkCellCenterDepthSort::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkCellCenterDepthSort>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkCellCenterDepthSort::InitTraversal()
{
  vtk::ConvertManagedToNative<::vtkCellCenterDepthSort>(m_instance)->InitTraversal();
}



vtkIdTypeArray^ vtkCellCenterDepthSort::GetNextCells()
{
  ::vtkIdTypeArray* retVal = static_cast<::vtkIdTypeArray*>(vtk::ConvertManagedToNative<::vtkCellCenterDepthSort>(m_instance)->GetNextCells());
  return gcnew vtkIdTypeArray(IntPtr(retVal), false);
}



  vtkCellCenterDepthSort::vtkCellCenterDepthSort(System::IntPtr native, bool bConst) : vtkVisibilitySort(native, bConst) {}



  vtkCellCenterDepthSort::vtkCellCenterDepthSort(bool donothing) : vtkVisibilitySort(donothing) {}



  vtkCellCenterDepthSort::vtkCellCenterDepthSort() : vtkVisibilitySort(false) {
  this->SetNativePointer(IntPtr(::vtkCellCenterDepthSort::New()));
}



  vtkCellCenterDepthSort::~vtkCellCenterDepthSort() { }





} // end namespace vtkGraphics
