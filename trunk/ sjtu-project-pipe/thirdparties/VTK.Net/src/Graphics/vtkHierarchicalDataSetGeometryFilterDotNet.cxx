

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkHierarchicalDataSetGeometryFilterDotNet.h"

// native includes
#include "strstream"
#include "vtkHierarchicalDataSetGeometryFilter.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkHierarchicalDataSetGeometryFilter::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkHierarchicalDataSetGeometryFilter>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkHierarchicalDataSetGeometryFilter::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkHierarchicalDataSetGeometryFilter>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkHierarchicalDataSetGeometryFilter^ vtkHierarchicalDataSetGeometryFilter::NewInstance()
{
  ::vtkHierarchicalDataSetGeometryFilter* retVal = static_cast<::vtkHierarchicalDataSetGeometryFilter*>(vtk::ConvertManagedToNative<::vtkHierarchicalDataSetGeometryFilter>(m_instance)->NewInstance());
  return gcnew vtkHierarchicalDataSetGeometryFilter(IntPtr(retVal), false);
}



vtkHierarchicalDataSetGeometryFilter^ vtkHierarchicalDataSetGeometryFilter::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkHierarchicalDataSetGeometryFilter* retVal = static_cast<::vtkHierarchicalDataSetGeometryFilter*>(::vtkHierarchicalDataSetGeometryFilter::SafeDownCast(oWrap));
  return gcnew vtkHierarchicalDataSetGeometryFilter(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkHierarchicalDataSetGeometryFilter::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkHierarchicalDataSetGeometryFilter>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkHierarchicalDataSetGeometryFilter::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkHierarchicalDataSetGeometryFilter>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




  vtkHierarchicalDataSetGeometryFilter::vtkHierarchicalDataSetGeometryFilter(System::IntPtr native, bool bConst) : vtkPolyDataAlgorithm(native, bConst) {}



  vtkHierarchicalDataSetGeometryFilter::vtkHierarchicalDataSetGeometryFilter(bool donothing) : vtkPolyDataAlgorithm(donothing) {}



  vtkHierarchicalDataSetGeometryFilter::vtkHierarchicalDataSetGeometryFilter() : vtkPolyDataAlgorithm(false) {
  this->SetNativePointer(IntPtr(::vtkHierarchicalDataSetGeometryFilter::New()));
}



  vtkHierarchicalDataSetGeometryFilter::~vtkHierarchicalDataSetGeometryFilter() { }





} // end namespace vtkGraphics
