

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkDataSetToDataObjectFilterDotNet.h"

// native includes
#include "strstream"
#include "vtkDataSetToDataObjectFilter.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkDataSetToDataObjectFilter::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkDataSetToDataObjectFilter>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkDataSetToDataObjectFilter::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkDataSetToDataObjectFilter>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkDataSetToDataObjectFilter^ vtkDataSetToDataObjectFilter::NewInstance()
{
  ::vtkDataSetToDataObjectFilter* retVal = static_cast<::vtkDataSetToDataObjectFilter*>(vtk::ConvertManagedToNative<::vtkDataSetToDataObjectFilter>(m_instance)->NewInstance());
  return gcnew vtkDataSetToDataObjectFilter(IntPtr(retVal), false);
}



vtkDataSetToDataObjectFilter^ vtkDataSetToDataObjectFilter::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkDataSetToDataObjectFilter* retVal = static_cast<::vtkDataSetToDataObjectFilter*>(::vtkDataSetToDataObjectFilter::SafeDownCast(oWrap));
  return gcnew vtkDataSetToDataObjectFilter(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkDataSetToDataObjectFilter::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkDataSetToDataObjectFilter>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkDataSetToDataObjectFilter::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkDataSetToDataObjectFilter>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkDataSetToDataObjectFilter::SetGeometry(int arg0)
{
  vtk::ConvertManagedToNative<::vtkDataSetToDataObjectFilter>(m_instance)->SetGeometry(arg0);
}



int vtkDataSetToDataObjectFilter::GetGeometry()
{
  int retVal = vtk::ConvertManagedToNative<::vtkDataSetToDataObjectFilter>(m_instance)->GetGeometry();
  return retVal;
}



void vtkDataSetToDataObjectFilter::GeometryOn()
{
  vtk::ConvertManagedToNative<::vtkDataSetToDataObjectFilter>(m_instance)->GeometryOn();
}



void vtkDataSetToDataObjectFilter::GeometryOff()
{
  vtk::ConvertManagedToNative<::vtkDataSetToDataObjectFilter>(m_instance)->GeometryOff();
}



void vtkDataSetToDataObjectFilter::SetTopology(int arg0)
{
  vtk::ConvertManagedToNative<::vtkDataSetToDataObjectFilter>(m_instance)->SetTopology(arg0);
}



int vtkDataSetToDataObjectFilter::GetTopology()
{
  int retVal = vtk::ConvertManagedToNative<::vtkDataSetToDataObjectFilter>(m_instance)->GetTopology();
  return retVal;
}



void vtkDataSetToDataObjectFilter::TopologyOn()
{
  vtk::ConvertManagedToNative<::vtkDataSetToDataObjectFilter>(m_instance)->TopologyOn();
}



void vtkDataSetToDataObjectFilter::TopologyOff()
{
  vtk::ConvertManagedToNative<::vtkDataSetToDataObjectFilter>(m_instance)->TopologyOff();
}



void vtkDataSetToDataObjectFilter::SetFieldData(int arg0)
{
  vtk::ConvertManagedToNative<::vtkDataSetToDataObjectFilter>(m_instance)->SetFieldData(arg0);
}



int vtkDataSetToDataObjectFilter::GetFieldData()
{
  int retVal = vtk::ConvertManagedToNative<::vtkDataSetToDataObjectFilter>(m_instance)->GetFieldData();
  return retVal;
}



void vtkDataSetToDataObjectFilter::FieldDataOn()
{
  vtk::ConvertManagedToNative<::vtkDataSetToDataObjectFilter>(m_instance)->FieldDataOn();
}



void vtkDataSetToDataObjectFilter::FieldDataOff()
{
  vtk::ConvertManagedToNative<::vtkDataSetToDataObjectFilter>(m_instance)->FieldDataOff();
}



void vtkDataSetToDataObjectFilter::SetPointData(int arg0)
{
  vtk::ConvertManagedToNative<::vtkDataSetToDataObjectFilter>(m_instance)->SetPointData(arg0);
}



int vtkDataSetToDataObjectFilter::GetPointData()
{
  int retVal = vtk::ConvertManagedToNative<::vtkDataSetToDataObjectFilter>(m_instance)->GetPointData();
  return retVal;
}



void vtkDataSetToDataObjectFilter::PointDataOn()
{
  vtk::ConvertManagedToNative<::vtkDataSetToDataObjectFilter>(m_instance)->PointDataOn();
}



void vtkDataSetToDataObjectFilter::PointDataOff()
{
  vtk::ConvertManagedToNative<::vtkDataSetToDataObjectFilter>(m_instance)->PointDataOff();
}



void vtkDataSetToDataObjectFilter::SetCellData(int arg0)
{
  vtk::ConvertManagedToNative<::vtkDataSetToDataObjectFilter>(m_instance)->SetCellData(arg0);
}



int vtkDataSetToDataObjectFilter::GetCellData()
{
  int retVal = vtk::ConvertManagedToNative<::vtkDataSetToDataObjectFilter>(m_instance)->GetCellData();
  return retVal;
}



void vtkDataSetToDataObjectFilter::CellDataOn()
{
  vtk::ConvertManagedToNative<::vtkDataSetToDataObjectFilter>(m_instance)->CellDataOn();
}



void vtkDataSetToDataObjectFilter::CellDataOff()
{
  vtk::ConvertManagedToNative<::vtkDataSetToDataObjectFilter>(m_instance)->CellDataOff();
}



  vtkDataSetToDataObjectFilter::vtkDataSetToDataObjectFilter(System::IntPtr native, bool bConst) : vtkDataObjectAlgorithm(native, bConst) {}



  vtkDataSetToDataObjectFilter::vtkDataSetToDataObjectFilter(bool donothing) : vtkDataObjectAlgorithm(donothing) {}



  vtkDataSetToDataObjectFilter::vtkDataSetToDataObjectFilter() : vtkDataObjectAlgorithm(false) {
  this->SetNativePointer(IntPtr(::vtkDataSetToDataObjectFilter::New()));
}



  vtkDataSetToDataObjectFilter::~vtkDataSetToDataObjectFilter() { }





} // end namespace vtkGraphics
