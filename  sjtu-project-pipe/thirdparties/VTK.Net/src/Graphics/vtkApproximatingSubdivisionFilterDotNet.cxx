

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkApproximatingSubdivisionFilterDotNet.h"

// native includes
#include "strstream"
#include "vtkApproximatingSubdivisionFilter.h"

using namespace System;

namespace vtk {

System::String^ vtkApproximatingSubdivisionFilter::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkApproximatingSubdivisionFilter>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkApproximatingSubdivisionFilter::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkApproximatingSubdivisionFilter>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkApproximatingSubdivisionFilter^ vtkApproximatingSubdivisionFilter::NewInstance()
{
  ::vtkApproximatingSubdivisionFilter* retVal = static_cast<::vtkApproximatingSubdivisionFilter*>(vtk::ConvertManagedToNative<::vtkApproximatingSubdivisionFilter>(m_instance)->NewInstance());
  return gcnew vtkApproximatingSubdivisionFilter(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkApproximatingSubdivisionFilter::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkApproximatingSubdivisionFilter>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkApproximatingSubdivisionFilter::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkApproximatingSubdivisionFilter>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkApproximatingSubdivisionFilter::SetNumberOfSubdivisions(int arg0)
{
  vtk::ConvertManagedToNative<::vtkApproximatingSubdivisionFilter>(m_instance)->SetNumberOfSubdivisions(arg0);
}



int vtkApproximatingSubdivisionFilter::GetNumberOfSubdivisions()
{
  int retVal = vtk::ConvertManagedToNative<::vtkApproximatingSubdivisionFilter>(m_instance)->GetNumberOfSubdivisions();
  return retVal;
}



  vtkApproximatingSubdivisionFilter::vtkApproximatingSubdivisionFilter(System::IntPtr native, bool bConst) : vtkPolyDataAlgorithm(native, bConst) {}



  vtkApproximatingSubdivisionFilter::vtkApproximatingSubdivisionFilter(bool donothing) : vtkPolyDataAlgorithm(donothing) {}



  vtkApproximatingSubdivisionFilter::vtkApproximatingSubdivisionFilter() : vtkPolyDataAlgorithm(false) {
  this->SetNativePointer(IntPtr(::vtkApproximatingSubdivisionFilter::New()));
}



  vtkApproximatingSubdivisionFilter::~vtkApproximatingSubdivisionFilter() { }





} // end namespace vtkGraphics
