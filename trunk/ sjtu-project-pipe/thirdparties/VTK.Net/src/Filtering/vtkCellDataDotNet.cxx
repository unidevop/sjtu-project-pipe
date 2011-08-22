

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkCellDataDotNet.h"

// native includes
#include "strstream"
#include "vtkCellData.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkCellData::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkCellData>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkCellData::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkCellData>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkCellData^ vtkCellData::NewInstance()
{
  ::vtkCellData* retVal = static_cast<::vtkCellData*>(vtk::ConvertManagedToNative<::vtkCellData>(m_instance)->NewInstance());
  return gcnew vtkCellData(IntPtr(retVal), false);
}



vtkCellData^ vtkCellData::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkCellData* retVal = static_cast<::vtkCellData*>(::vtkCellData::SafeDownCast(oWrap));
  return gcnew vtkCellData(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkCellData::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkCellData>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkCellData::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkCellData>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




  vtkCellData::vtkCellData(System::IntPtr native, bool bConst) : vtkDataSetAttributes(native, bConst) {}



  vtkCellData::vtkCellData(bool donothing) : vtkDataSetAttributes(donothing) {}



  vtkCellData::vtkCellData() : vtkDataSetAttributes(false) {
  this->SetNativePointer(IntPtr(::vtkCellData::New()));
}



  vtkCellData::~vtkCellData() { }





} // end namespace vtkFiltering
