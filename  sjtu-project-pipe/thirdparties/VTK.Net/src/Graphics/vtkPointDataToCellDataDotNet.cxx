

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkPointDataToCellDataDotNet.h"

// native includes
#include "strstream"
#include "vtkPointDataToCellData.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkPointDataToCellData::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkPointDataToCellData>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkPointDataToCellData::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkPointDataToCellData>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkPointDataToCellData^ vtkPointDataToCellData::NewInstance()
{
  ::vtkPointDataToCellData* retVal = static_cast<::vtkPointDataToCellData*>(vtk::ConvertManagedToNative<::vtkPointDataToCellData>(m_instance)->NewInstance());
  return gcnew vtkPointDataToCellData(IntPtr(retVal), false);
}



vtkPointDataToCellData^ vtkPointDataToCellData::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkPointDataToCellData* retVal = static_cast<::vtkPointDataToCellData*>(::vtkPointDataToCellData::SafeDownCast(oWrap));
  return gcnew vtkPointDataToCellData(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkPointDataToCellData::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkPointDataToCellData>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkPointDataToCellData::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkPointDataToCellData>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkPointDataToCellData::SetPassPointData(int arg0)
{
  vtk::ConvertManagedToNative<::vtkPointDataToCellData>(m_instance)->SetPassPointData(arg0);
}



int vtkPointDataToCellData::GetPassPointData()
{
  int retVal = vtk::ConvertManagedToNative<::vtkPointDataToCellData>(m_instance)->GetPassPointData();
  return retVal;
}



void vtkPointDataToCellData::PassPointDataOn()
{
  vtk::ConvertManagedToNative<::vtkPointDataToCellData>(m_instance)->PassPointDataOn();
}



void vtkPointDataToCellData::PassPointDataOff()
{
  vtk::ConvertManagedToNative<::vtkPointDataToCellData>(m_instance)->PassPointDataOff();
}



  vtkPointDataToCellData::vtkPointDataToCellData(System::IntPtr native, bool bConst) : vtkDataSetAlgorithm(native, bConst) {}



  vtkPointDataToCellData::vtkPointDataToCellData(bool donothing) : vtkDataSetAlgorithm(donothing) {}



  vtkPointDataToCellData::vtkPointDataToCellData() : vtkDataSetAlgorithm(false) {
  this->SetNativePointer(IntPtr(::vtkPointDataToCellData::New()));
}



  vtkPointDataToCellData::~vtkPointDataToCellData() { }





} // end namespace vtkGraphics
