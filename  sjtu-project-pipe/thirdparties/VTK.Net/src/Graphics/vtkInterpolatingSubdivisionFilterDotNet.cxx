

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkInterpolatingSubdivisionFilterDotNet.h"

// native includes
#include "strstream"
#include "vtkInterpolatingSubdivisionFilter.h"

using namespace System;

namespace vtk {

System::String^ vtkInterpolatingSubdivisionFilter::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkInterpolatingSubdivisionFilter>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkInterpolatingSubdivisionFilter::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkInterpolatingSubdivisionFilter>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkInterpolatingSubdivisionFilter^ vtkInterpolatingSubdivisionFilter::NewInstance()
{
  ::vtkInterpolatingSubdivisionFilter* retVal = static_cast<::vtkInterpolatingSubdivisionFilter*>(vtk::ConvertManagedToNative<::vtkInterpolatingSubdivisionFilter>(m_instance)->NewInstance());
  return gcnew vtkInterpolatingSubdivisionFilter(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkInterpolatingSubdivisionFilter::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkInterpolatingSubdivisionFilter>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkInterpolatingSubdivisionFilter::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkInterpolatingSubdivisionFilter>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkInterpolatingSubdivisionFilter::SetNumberOfSubdivisions(int arg0)
{
  vtk::ConvertManagedToNative<::vtkInterpolatingSubdivisionFilter>(m_instance)->SetNumberOfSubdivisions(arg0);
}



int vtkInterpolatingSubdivisionFilter::GetNumberOfSubdivisions()
{
  int retVal = vtk::ConvertManagedToNative<::vtkInterpolatingSubdivisionFilter>(m_instance)->GetNumberOfSubdivisions();
  return retVal;
}



  vtkInterpolatingSubdivisionFilter::vtkInterpolatingSubdivisionFilter(System::IntPtr native, bool bConst) : vtkPolyDataAlgorithm(native, bConst) {}



  vtkInterpolatingSubdivisionFilter::vtkInterpolatingSubdivisionFilter(bool donothing) : vtkPolyDataAlgorithm(donothing) {}



  vtkInterpolatingSubdivisionFilter::vtkInterpolatingSubdivisionFilter() : vtkPolyDataAlgorithm(false) {
  this->SetNativePointer(IntPtr(::vtkInterpolatingSubdivisionFilter::New()));
}



  vtkInterpolatingSubdivisionFilter::~vtkInterpolatingSubdivisionFilter() { }





} // end namespace vtkGraphics
