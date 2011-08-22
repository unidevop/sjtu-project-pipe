

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkMergeDataObjectFilterDotNet.h"

// native includes
#include "strstream"
#include "vtkMergeDataObjectFilter.h"
#include "vtkDataObject.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkMergeDataObjectFilter::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkMergeDataObjectFilter>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkMergeDataObjectFilter::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkMergeDataObjectFilter>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkMergeDataObjectFilter^ vtkMergeDataObjectFilter::NewInstance()
{
  ::vtkMergeDataObjectFilter* retVal = static_cast<::vtkMergeDataObjectFilter*>(vtk::ConvertManagedToNative<::vtkMergeDataObjectFilter>(m_instance)->NewInstance());
  return gcnew vtkMergeDataObjectFilter(IntPtr(retVal), false);
}



vtkMergeDataObjectFilter^ vtkMergeDataObjectFilter::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkMergeDataObjectFilter* retVal = static_cast<::vtkMergeDataObjectFilter*>(::vtkMergeDataObjectFilter::SafeDownCast(oWrap));
  return gcnew vtkMergeDataObjectFilter(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkMergeDataObjectFilter::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkMergeDataObjectFilter>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkMergeDataObjectFilter::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkMergeDataObjectFilter>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkMergeDataObjectFilter::SetDataObject(vtkDataObject^ object)
{
  ::vtkDataObject* objectWrap = vtk::ConvertManagedToNative<::vtkDataObject>(object->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkMergeDataObjectFilter>(m_instance)->SetDataObject(objectWrap);
}



vtkDataObject^ vtkMergeDataObjectFilter::GetDataObject()
{
  ::vtkDataObject* retVal = static_cast<::vtkDataObject*>(vtk::ConvertManagedToNative<::vtkMergeDataObjectFilter>(m_instance)->GetDataObject());
  return gcnew vtkDataObject(IntPtr(retVal), false);
}



void vtkMergeDataObjectFilter::SetOutputField(int arg0)
{
  vtk::ConvertManagedToNative<::vtkMergeDataObjectFilter>(m_instance)->SetOutputField(arg0);
}



int vtkMergeDataObjectFilter::GetOutputField()
{
  int retVal = vtk::ConvertManagedToNative<::vtkMergeDataObjectFilter>(m_instance)->GetOutputField();
  return retVal;
}



void vtkMergeDataObjectFilter::SetOutputFieldToDataObjectField()
{
  vtk::ConvertManagedToNative<::vtkMergeDataObjectFilter>(m_instance)->SetOutputFieldToDataObjectField();
}



void vtkMergeDataObjectFilter::SetOutputFieldToPointDataField()
{
  vtk::ConvertManagedToNative<::vtkMergeDataObjectFilter>(m_instance)->SetOutputFieldToPointDataField();
}



void vtkMergeDataObjectFilter::SetOutputFieldToCellDataField()
{
  vtk::ConvertManagedToNative<::vtkMergeDataObjectFilter>(m_instance)->SetOutputFieldToCellDataField();
}



  vtkMergeDataObjectFilter::vtkMergeDataObjectFilter(System::IntPtr native, bool bConst) : vtkDataSetAlgorithm(native, bConst) {}



  vtkMergeDataObjectFilter::vtkMergeDataObjectFilter(bool donothing) : vtkDataSetAlgorithm(donothing) {}



  vtkMergeDataObjectFilter::vtkMergeDataObjectFilter() : vtkDataSetAlgorithm(false) {
  this->SetNativePointer(IntPtr(::vtkMergeDataObjectFilter::New()));
}



  vtkMergeDataObjectFilter::~vtkMergeDataObjectFilter() { }





} // end namespace vtkGraphics
