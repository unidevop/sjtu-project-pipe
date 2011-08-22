

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkCellDataToPointDataDotNet.h"

// native includes
#include "strstream"
#include "vtkCellDataToPointData.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkCellDataToPointData::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkCellDataToPointData>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkCellDataToPointData::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkCellDataToPointData>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkCellDataToPointData^ vtkCellDataToPointData::NewInstance()
{
  ::vtkCellDataToPointData* retVal = static_cast<::vtkCellDataToPointData*>(vtk::ConvertManagedToNative<::vtkCellDataToPointData>(m_instance)->NewInstance());
  return gcnew vtkCellDataToPointData(IntPtr(retVal), false);
}



vtkCellDataToPointData^ vtkCellDataToPointData::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkCellDataToPointData* retVal = static_cast<::vtkCellDataToPointData*>(::vtkCellDataToPointData::SafeDownCast(oWrap));
  return gcnew vtkCellDataToPointData(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkCellDataToPointData::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkCellDataToPointData>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkCellDataToPointData::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkCellDataToPointData>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkCellDataToPointData::SetPassCellData(int arg0)
{
  vtk::ConvertManagedToNative<::vtkCellDataToPointData>(m_instance)->SetPassCellData(arg0);
}



int vtkCellDataToPointData::GetPassCellData()
{
  int retVal = vtk::ConvertManagedToNative<::vtkCellDataToPointData>(m_instance)->GetPassCellData();
  return retVal;
}



void vtkCellDataToPointData::PassCellDataOn()
{
  vtk::ConvertManagedToNative<::vtkCellDataToPointData>(m_instance)->PassCellDataOn();
}



void vtkCellDataToPointData::PassCellDataOff()
{
  vtk::ConvertManagedToNative<::vtkCellDataToPointData>(m_instance)->PassCellDataOff();
}



  vtkCellDataToPointData::vtkCellDataToPointData(System::IntPtr native, bool bConst) : vtkDataSetAlgorithm(native, bConst) {}



  vtkCellDataToPointData::vtkCellDataToPointData(bool donothing) : vtkDataSetAlgorithm(donothing) {}



  vtkCellDataToPointData::vtkCellDataToPointData() : vtkDataSetAlgorithm(false) {
  this->SetNativePointer(IntPtr(::vtkCellDataToPointData::New()));
}



  vtkCellDataToPointData::~vtkCellDataToPointData() { }





} // end namespace vtkGraphics
