

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkExplicitCellDotNet.h"
#include "vtkDataSetDotNet.h"

// native includes
#include "strstream"
#include "vtkExplicitCell.h"
#include "vtkDataSet.h"

using namespace System;

namespace vtk {

System::String^ vtkExplicitCell::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkExplicitCell>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkExplicitCell::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkExplicitCell>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkExplicitCell^ vtkExplicitCell::NewInstance()
{
  ::vtkExplicitCell* retVal = static_cast<::vtkExplicitCell*>(vtk::ConvertManagedToNative<::vtkExplicitCell>(m_instance)->NewInstance());
  return gcnew vtkExplicitCell(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkExplicitCell::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkExplicitCell>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkExplicitCell::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkExplicitCell>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




int vtkExplicitCell::IsExplicitCell()
{
  int retVal = vtk::ConvertManagedToNative<::vtkExplicitCell>(m_instance)->IsExplicitCell();
  return retVal;
}



void vtkExplicitCell::SetCellId(int arg0)
{
  vtk::ConvertManagedToNative<::vtkExplicitCell>(m_instance)->SetCellId(arg0);
}



int vtkExplicitCell::GetCellId()
{
  int retVal = vtk::ConvertManagedToNative<::vtkExplicitCell>(m_instance)->GetCellId();
  return retVal;
}



void vtkExplicitCell::SetDataSet(vtkDataSet^ arg0)
{
  ::vtkDataSet* arg0Wrap = vtk::ConvertManagedToNative<::vtkDataSet>(arg0->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkExplicitCell>(m_instance)->SetDataSet(arg0Wrap);
}



vtkDataSet^ vtkExplicitCell::GetDataSet()
{
  ::vtkDataSet* retVal = static_cast<::vtkDataSet*>(vtk::ConvertManagedToNative<::vtkExplicitCell>(m_instance)->GetDataSet());
  return gcnew vtkDataSet(IntPtr(retVal), false);
}



  vtkExplicitCell::vtkExplicitCell(System::IntPtr native, bool bConst) : vtkNonLinearCell(native, bConst) {}



  vtkExplicitCell::vtkExplicitCell(bool donothing) : vtkNonLinearCell(donothing) {}



  vtkExplicitCell::vtkExplicitCell() : vtkNonLinearCell(false) {
  this->SetNativePointer(IntPtr(::vtkExplicitCell::New()));
}



  vtkExplicitCell::~vtkExplicitCell() { }





} // end namespace vtkFiltering
