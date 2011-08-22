

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkDataSetTriangleFilterDotNet.h"

// native includes
#include "strstream"
#include "vtkDataSetTriangleFilter.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkDataSetTriangleFilter::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkDataSetTriangleFilter>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkDataSetTriangleFilter::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkDataSetTriangleFilter>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkDataSetTriangleFilter^ vtkDataSetTriangleFilter::NewInstance()
{
  ::vtkDataSetTriangleFilter* retVal = static_cast<::vtkDataSetTriangleFilter*>(vtk::ConvertManagedToNative<::vtkDataSetTriangleFilter>(m_instance)->NewInstance());
  return gcnew vtkDataSetTriangleFilter(IntPtr(retVal), false);
}



vtkDataSetTriangleFilter^ vtkDataSetTriangleFilter::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkDataSetTriangleFilter* retVal = static_cast<::vtkDataSetTriangleFilter*>(::vtkDataSetTriangleFilter::SafeDownCast(oWrap));
  return gcnew vtkDataSetTriangleFilter(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkDataSetTriangleFilter::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkDataSetTriangleFilter>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkDataSetTriangleFilter::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkDataSetTriangleFilter>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




  vtkDataSetTriangleFilter::vtkDataSetTriangleFilter(System::IntPtr native, bool bConst) : vtkUnstructuredGridAlgorithm(native, bConst) {}



  vtkDataSetTriangleFilter::vtkDataSetTriangleFilter(bool donothing) : vtkUnstructuredGridAlgorithm(donothing) {}



  vtkDataSetTriangleFilter::vtkDataSetTriangleFilter() : vtkUnstructuredGridAlgorithm(false) {
  this->SetNativePointer(IntPtr(::vtkDataSetTriangleFilter::New()));
}



  vtkDataSetTriangleFilter::~vtkDataSetTriangleFilter() { }





} // end namespace vtkGraphics
