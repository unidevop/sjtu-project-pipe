

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkHierarchicalDataLevelFilterDotNet.h"

// native includes
#include "strstream"
#include "vtkHierarchicalDataLevelFilter.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkHierarchicalDataLevelFilter::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkHierarchicalDataLevelFilter>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkHierarchicalDataLevelFilter::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkHierarchicalDataLevelFilter>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkHierarchicalDataLevelFilter^ vtkHierarchicalDataLevelFilter::NewInstance()
{
  ::vtkHierarchicalDataLevelFilter* retVal = static_cast<::vtkHierarchicalDataLevelFilter*>(vtk::ConvertManagedToNative<::vtkHierarchicalDataLevelFilter>(m_instance)->NewInstance());
  return gcnew vtkHierarchicalDataLevelFilter(IntPtr(retVal), false);
}



vtkHierarchicalDataLevelFilter^ vtkHierarchicalDataLevelFilter::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkHierarchicalDataLevelFilter* retVal = static_cast<::vtkHierarchicalDataLevelFilter*>(::vtkHierarchicalDataLevelFilter::SafeDownCast(oWrap));
  return gcnew vtkHierarchicalDataLevelFilter(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkHierarchicalDataLevelFilter::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkHierarchicalDataLevelFilter>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkHierarchicalDataLevelFilter::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkHierarchicalDataLevelFilter>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




  vtkHierarchicalDataLevelFilter::vtkHierarchicalDataLevelFilter(System::IntPtr native, bool bConst) : vtkHierarchicalDataSetAlgorithm(native, bConst) {}



  vtkHierarchicalDataLevelFilter::vtkHierarchicalDataLevelFilter(bool donothing) : vtkHierarchicalDataSetAlgorithm(donothing) {}



  vtkHierarchicalDataLevelFilter::vtkHierarchicalDataLevelFilter() : vtkHierarchicalDataSetAlgorithm(false) {
  this->SetNativePointer(IntPtr(::vtkHierarchicalDataLevelFilter::New()));
}



  vtkHierarchicalDataLevelFilter::~vtkHierarchicalDataLevelFilter() { }





} // end namespace vtkGraphics
