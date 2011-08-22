

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkIdFilterDotNet.h"

// native includes
#include "strstream"
#include "vtkIdFilter.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkIdFilter::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkIdFilter>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkIdFilter::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkIdFilter>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkIdFilter^ vtkIdFilter::NewInstance()
{
  ::vtkIdFilter* retVal = static_cast<::vtkIdFilter*>(vtk::ConvertManagedToNative<::vtkIdFilter>(m_instance)->NewInstance());
  return gcnew vtkIdFilter(IntPtr(retVal), false);
}



vtkIdFilter^ vtkIdFilter::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkIdFilter* retVal = static_cast<::vtkIdFilter*>(::vtkIdFilter::SafeDownCast(oWrap));
  return gcnew vtkIdFilter(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkIdFilter::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkIdFilter>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkIdFilter::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkIdFilter>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkIdFilter::SetPointIds(int arg0)
{
  vtk::ConvertManagedToNative<::vtkIdFilter>(m_instance)->SetPointIds(arg0);
}



int vtkIdFilter::GetPointIds()
{
  int retVal = vtk::ConvertManagedToNative<::vtkIdFilter>(m_instance)->GetPointIds();
  return retVal;
}



void vtkIdFilter::PointIdsOn()
{
  vtk::ConvertManagedToNative<::vtkIdFilter>(m_instance)->PointIdsOn();
}



void vtkIdFilter::PointIdsOff()
{
  vtk::ConvertManagedToNative<::vtkIdFilter>(m_instance)->PointIdsOff();
}



void vtkIdFilter::SetCellIds(int arg0)
{
  vtk::ConvertManagedToNative<::vtkIdFilter>(m_instance)->SetCellIds(arg0);
}



int vtkIdFilter::GetCellIds()
{
  int retVal = vtk::ConvertManagedToNative<::vtkIdFilter>(m_instance)->GetCellIds();
  return retVal;
}



void vtkIdFilter::CellIdsOn()
{
  vtk::ConvertManagedToNative<::vtkIdFilter>(m_instance)->CellIdsOn();
}



void vtkIdFilter::CellIdsOff()
{
  vtk::ConvertManagedToNative<::vtkIdFilter>(m_instance)->CellIdsOff();
}



void vtkIdFilter::SetFieldData(int arg0)
{
  vtk::ConvertManagedToNative<::vtkIdFilter>(m_instance)->SetFieldData(arg0);
}



int vtkIdFilter::GetFieldData()
{
  int retVal = vtk::ConvertManagedToNative<::vtkIdFilter>(m_instance)->GetFieldData();
  return retVal;
}



void vtkIdFilter::FieldDataOn()
{
  vtk::ConvertManagedToNative<::vtkIdFilter>(m_instance)->FieldDataOn();
}



void vtkIdFilter::FieldDataOff()
{
  vtk::ConvertManagedToNative<::vtkIdFilter>(m_instance)->FieldDataOff();
}



void vtkIdFilter::SetIdsArrayName(System::String^ arg0)
{
  char* arg0Wrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(arg0).ToPointer());
  vtk::ConvertManagedToNative<::vtkIdFilter>(m_instance)->SetIdsArrayName(arg0Wrap);
  arg0->Remove(0,arg0->Length);
  arg0->Insert(0,System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(arg0Wrap)));
System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(arg0Wrap));
}



System::String^ vtkIdFilter::GetIdsArrayName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkIdFilter>(m_instance)->GetIdsArrayName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



  vtkIdFilter::vtkIdFilter(System::IntPtr native, bool bConst) : vtkDataSetAlgorithm(native, bConst) {}



  vtkIdFilter::vtkIdFilter(bool donothing) : vtkDataSetAlgorithm(donothing) {}



  vtkIdFilter::vtkIdFilter() : vtkDataSetAlgorithm(false) {
  this->SetNativePointer(IntPtr(::vtkIdFilter::New()));
}



  vtkIdFilter::~vtkIdFilter() { }





} // end namespace vtkGraphics
