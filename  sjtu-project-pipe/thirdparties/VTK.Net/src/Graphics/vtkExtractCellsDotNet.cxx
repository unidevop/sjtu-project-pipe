

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkExtractCellsDotNet.h"

// native includes
#include "strstream"
#include "vtkExtractCells.h"
#include "vtkIdList.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkExtractCells::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkExtractCells>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkExtractCells::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkExtractCells>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkExtractCells^ vtkExtractCells::NewInstance()
{
  ::vtkExtractCells* retVal = static_cast<::vtkExtractCells*>(vtk::ConvertManagedToNative<::vtkExtractCells>(m_instance)->NewInstance());
  return gcnew vtkExtractCells(IntPtr(retVal), false);
}



vtkExtractCells^ vtkExtractCells::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkExtractCells* retVal = static_cast<::vtkExtractCells*>(::vtkExtractCells::SafeDownCast(oWrap));
  return gcnew vtkExtractCells(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkExtractCells::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkExtractCells>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkExtractCells::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkExtractCells>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkExtractCells::SetCellList(vtkIdList^ l)
{
  ::vtkIdList* lWrap = vtk::ConvertManagedToNative<::vtkIdList>(l->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkExtractCells>(m_instance)->SetCellList(lWrap);
}



void vtkExtractCells::AddCellList(vtkIdList^ l)
{
  ::vtkIdList* lWrap = vtk::ConvertManagedToNative<::vtkIdList>(l->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkExtractCells>(m_instance)->AddCellList(lWrap);
}



void vtkExtractCells::AddCellRange(int from, int to)
{
  vtk::ConvertManagedToNative<::vtkExtractCells>(m_instance)->AddCellRange(from, to);
}



  vtkExtractCells::vtkExtractCells(System::IntPtr native, bool bConst) : vtkUnstructuredGridAlgorithm(native, bConst) {}



  vtkExtractCells::vtkExtractCells(bool donothing) : vtkUnstructuredGridAlgorithm(donothing) {}



  vtkExtractCells::vtkExtractCells() : vtkUnstructuredGridAlgorithm(false) {
  this->SetNativePointer(IntPtr(::vtkExtractCells::New()));
}



  vtkExtractCells::~vtkExtractCells() { }





} // end namespace vtkGraphics
