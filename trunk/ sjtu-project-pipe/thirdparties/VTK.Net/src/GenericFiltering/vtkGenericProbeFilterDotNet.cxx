

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkGenericProbeFilterDotNet.h"

// native includes
#include "strstream"
#include "vtkGenericProbeFilter.h"
#include "vtkGenericDataSet.h"
#include "vtkIdTypeArray.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkGenericProbeFilter::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkGenericProbeFilter>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkGenericProbeFilter::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkGenericProbeFilter>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkGenericProbeFilter^ vtkGenericProbeFilter::NewInstance()
{
  ::vtkGenericProbeFilter* retVal = static_cast<::vtkGenericProbeFilter*>(vtk::ConvertManagedToNative<::vtkGenericProbeFilter>(m_instance)->NewInstance());
  return gcnew vtkGenericProbeFilter(IntPtr(retVal), false);
}



vtkGenericProbeFilter^ vtkGenericProbeFilter::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkGenericProbeFilter* retVal = static_cast<::vtkGenericProbeFilter*>(::vtkGenericProbeFilter::SafeDownCast(oWrap));
  return gcnew vtkGenericProbeFilter(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkGenericProbeFilter::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkGenericProbeFilter>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkGenericProbeFilter::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkGenericProbeFilter>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkGenericProbeFilter::SetSource(vtkGenericDataSet^ source)
{
  ::vtkGenericDataSet* sourceWrap = vtk::ConvertManagedToNative<::vtkGenericDataSet>(source->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkGenericProbeFilter>(m_instance)->SetSource(sourceWrap);
}



vtkGenericDataSet^ vtkGenericProbeFilter::GetSource()
{
  ::vtkGenericDataSet* retVal = static_cast<::vtkGenericDataSet*>(vtk::ConvertManagedToNative<::vtkGenericProbeFilter>(m_instance)->GetSource());
  return gcnew vtkGenericDataSet(IntPtr(retVal), false);
}



vtkIdTypeArray^ vtkGenericProbeFilter::GetValidPoints()
{
  ::vtkIdTypeArray* retVal = static_cast<::vtkIdTypeArray*>(vtk::ConvertManagedToNative<::vtkGenericProbeFilter>(m_instance)->GetValidPoints());
  return gcnew vtkIdTypeArray(IntPtr(retVal), false);
}



  vtkGenericProbeFilter::vtkGenericProbeFilter(System::IntPtr native, bool bConst) : vtkDataSetToDataSetFilter(native, bConst) {}



  vtkGenericProbeFilter::vtkGenericProbeFilter(bool donothing) : vtkDataSetToDataSetFilter(donothing) {}



  vtkGenericProbeFilter::vtkGenericProbeFilter() : vtkDataSetToDataSetFilter(false) {
  this->SetNativePointer(IntPtr(::vtkGenericProbeFilter::New()));
}



  vtkGenericProbeFilter::~vtkGenericProbeFilter() { }





} // end namespace vtkGenericFiltering
