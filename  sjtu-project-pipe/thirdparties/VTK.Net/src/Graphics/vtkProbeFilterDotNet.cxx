

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkProbeFilterDotNet.h"

// native includes
#include "strstream"
#include "vtkProbeFilter.h"
#include "vtkAlgorithmOutput.h"
#include "vtkDataObject.h"
#include "vtkIdTypeArray.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkProbeFilter::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkProbeFilter>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkProbeFilter::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkProbeFilter>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkProbeFilter^ vtkProbeFilter::NewInstance()
{
  ::vtkProbeFilter* retVal = static_cast<::vtkProbeFilter*>(vtk::ConvertManagedToNative<::vtkProbeFilter>(m_instance)->NewInstance());
  return gcnew vtkProbeFilter(IntPtr(retVal), false);
}



vtkProbeFilter^ vtkProbeFilter::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkProbeFilter* retVal = static_cast<::vtkProbeFilter*>(::vtkProbeFilter::SafeDownCast(oWrap));
  return gcnew vtkProbeFilter(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkProbeFilter::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkProbeFilter>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkProbeFilter::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkProbeFilter>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkProbeFilter::SetSource(vtkDataObject^ source)
{
  ::vtkDataObject* sourceWrap = vtk::ConvertManagedToNative<::vtkDataObject>(source->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkProbeFilter>(m_instance)->SetSource(sourceWrap);
}



vtkDataObject^ vtkProbeFilter::GetSource()
{
  ::vtkDataObject* retVal = static_cast<::vtkDataObject*>(vtk::ConvertManagedToNative<::vtkProbeFilter>(m_instance)->GetSource());
  return gcnew vtkDataObject(IntPtr(retVal), false);
}



void vtkProbeFilter::SetSourceConnection(vtkAlgorithmOutput^ algOutput)
{
  ::vtkAlgorithmOutput* algOutputWrap = vtk::ConvertManagedToNative<::vtkAlgorithmOutput>(algOutput->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkProbeFilter>(m_instance)->SetSourceConnection(algOutputWrap);
}



void vtkProbeFilter::SetSpatialMatch(int arg0)
{
  vtk::ConvertManagedToNative<::vtkProbeFilter>(m_instance)->SetSpatialMatch(arg0);
}



int vtkProbeFilter::GetSpatialMatch()
{
  int retVal = vtk::ConvertManagedToNative<::vtkProbeFilter>(m_instance)->GetSpatialMatch();
  return retVal;
}



void vtkProbeFilter::SpatialMatchOn()
{
  vtk::ConvertManagedToNative<::vtkProbeFilter>(m_instance)->SpatialMatchOn();
}



void vtkProbeFilter::SpatialMatchOff()
{
  vtk::ConvertManagedToNative<::vtkProbeFilter>(m_instance)->SpatialMatchOff();
}



vtkIdTypeArray^ vtkProbeFilter::GetValidPoints()
{
  ::vtkIdTypeArray* retVal = static_cast<::vtkIdTypeArray*>(vtk::ConvertManagedToNative<::vtkProbeFilter>(m_instance)->GetValidPoints());
  return gcnew vtkIdTypeArray(IntPtr(retVal), false);
}



  vtkProbeFilter::vtkProbeFilter(System::IntPtr native, bool bConst) : vtkDataSetAlgorithm(native, bConst) {}



  vtkProbeFilter::vtkProbeFilter(bool donothing) : vtkDataSetAlgorithm(donothing) {}



  vtkProbeFilter::vtkProbeFilter() : vtkDataSetAlgorithm(false) {
  this->SetNativePointer(IntPtr(::vtkProbeFilter::New()));
}



  vtkProbeFilter::~vtkProbeFilter() { }





} // end namespace vtkGraphics
