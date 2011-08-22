

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkSurfaceReconstructionFilterDotNet.h"

// native includes
#include "strstream"
#include "vtkSurfaceReconstructionFilter.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkSurfaceReconstructionFilter::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkSurfaceReconstructionFilter>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkSurfaceReconstructionFilter::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkSurfaceReconstructionFilter>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkSurfaceReconstructionFilter^ vtkSurfaceReconstructionFilter::NewInstance()
{
  ::vtkSurfaceReconstructionFilter* retVal = static_cast<::vtkSurfaceReconstructionFilter*>(vtk::ConvertManagedToNative<::vtkSurfaceReconstructionFilter>(m_instance)->NewInstance());
  return gcnew vtkSurfaceReconstructionFilter(IntPtr(retVal), false);
}



vtkSurfaceReconstructionFilter^ vtkSurfaceReconstructionFilter::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkSurfaceReconstructionFilter* retVal = static_cast<::vtkSurfaceReconstructionFilter*>(::vtkSurfaceReconstructionFilter::SafeDownCast(oWrap));
  return gcnew vtkSurfaceReconstructionFilter(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkSurfaceReconstructionFilter::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkSurfaceReconstructionFilter>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkSurfaceReconstructionFilter::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkSurfaceReconstructionFilter>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




int vtkSurfaceReconstructionFilter::GetNeighborhoodSize()
{
  int retVal = vtk::ConvertManagedToNative<::vtkSurfaceReconstructionFilter>(m_instance)->GetNeighborhoodSize();
  return retVal;
}



void vtkSurfaceReconstructionFilter::SetNeighborhoodSize(int arg0)
{
  vtk::ConvertManagedToNative<::vtkSurfaceReconstructionFilter>(m_instance)->SetNeighborhoodSize(arg0);
}



double vtkSurfaceReconstructionFilter::GetSampleSpacing()
{
  double retVal = vtk::ConvertManagedToNative<::vtkSurfaceReconstructionFilter>(m_instance)->GetSampleSpacing();
  return retVal;
}



void vtkSurfaceReconstructionFilter::SetSampleSpacing(double arg0)
{
  vtk::ConvertManagedToNative<::vtkSurfaceReconstructionFilter>(m_instance)->SetSampleSpacing(arg0);
}



  vtkSurfaceReconstructionFilter::vtkSurfaceReconstructionFilter(System::IntPtr native, bool bConst) : vtkImageAlgorithm(native, bConst) {}



  vtkSurfaceReconstructionFilter::vtkSurfaceReconstructionFilter(bool donothing) : vtkImageAlgorithm(donothing) {}



  vtkSurfaceReconstructionFilter::vtkSurfaceReconstructionFilter() : vtkImageAlgorithm(false) {
  this->SetNativePointer(IntPtr(::vtkSurfaceReconstructionFilter::New()));
}



  vtkSurfaceReconstructionFilter::~vtkSurfaceReconstructionFilter() { }





} // end namespace vtkImaging
