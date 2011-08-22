

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkSpatialRepresentationFilterDotNet.h"

// native includes
#include "strstream"
#include "vtkSpatialRepresentationFilter.h"
#include "vtkDataSet.h"
#include "vtkLocator.h"
#include "vtkObject.h"
#include "vtkPolyData.h"

using namespace System;

namespace vtk {

System::String^ vtkSpatialRepresentationFilter::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkSpatialRepresentationFilter>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkSpatialRepresentationFilter::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkSpatialRepresentationFilter>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkSpatialRepresentationFilter^ vtkSpatialRepresentationFilter::NewInstance()
{
  ::vtkSpatialRepresentationFilter* retVal = static_cast<::vtkSpatialRepresentationFilter*>(vtk::ConvertManagedToNative<::vtkSpatialRepresentationFilter>(m_instance)->NewInstance());
  return gcnew vtkSpatialRepresentationFilter(IntPtr(retVal), false);
}



vtkSpatialRepresentationFilter^ vtkSpatialRepresentationFilter::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkSpatialRepresentationFilter* retVal = static_cast<::vtkSpatialRepresentationFilter*>(::vtkSpatialRepresentationFilter::SafeDownCast(oWrap));
  return gcnew vtkSpatialRepresentationFilter(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkSpatialRepresentationFilter::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkSpatialRepresentationFilter>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkSpatialRepresentationFilter::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkSpatialRepresentationFilter>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkSpatialRepresentationFilter::SetSpatialRepresentation(vtkLocator^ arg0)
{
  ::vtkLocator* arg0Wrap = vtk::ConvertManagedToNative<::vtkLocator>(arg0->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkSpatialRepresentationFilter>(m_instance)->SetSpatialRepresentation(arg0Wrap);
}



vtkLocator^ vtkSpatialRepresentationFilter::GetSpatialRepresentation()
{
  ::vtkLocator* retVal = static_cast<::vtkLocator*>(vtk::ConvertManagedToNative<::vtkSpatialRepresentationFilter>(m_instance)->GetSpatialRepresentation());
  return gcnew vtkLocator(IntPtr(retVal), false);
}



int vtkSpatialRepresentationFilter::GetLevel()
{
  int retVal = vtk::ConvertManagedToNative<::vtkSpatialRepresentationFilter>(m_instance)->GetLevel();
  return retVal;
}



vtkPolyData^ vtkSpatialRepresentationFilter::GetOutput(int level)
{
  ::vtkPolyData* retVal = static_cast<::vtkPolyData*>(vtk::ConvertManagedToNative<::vtkSpatialRepresentationFilter>(m_instance)->GetOutput(level));
  return gcnew vtkPolyData(IntPtr(retVal), false);
}



vtkPolyData^ vtkSpatialRepresentationFilter::GetOutput()
{
  ::vtkPolyData* retVal = static_cast<::vtkPolyData*>(vtk::ConvertManagedToNative<::vtkSpatialRepresentationFilter>(m_instance)->GetOutput());
  return gcnew vtkPolyData(IntPtr(retVal), false);
}



void vtkSpatialRepresentationFilter::ResetOutput()
{
  vtk::ConvertManagedToNative<::vtkSpatialRepresentationFilter>(m_instance)->ResetOutput();
}



void vtkSpatialRepresentationFilter::SetInput(vtkDataSet^ input)
{
  ::vtkDataSet* inputWrap = vtk::ConvertManagedToNative<::vtkDataSet>(input->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkSpatialRepresentationFilter>(m_instance)->SetInput(inputWrap);
}



vtkDataSet^ vtkSpatialRepresentationFilter::GetInput()
{
  ::vtkDataSet* retVal = static_cast<::vtkDataSet*>(vtk::ConvertManagedToNative<::vtkSpatialRepresentationFilter>(m_instance)->GetInput());
  return gcnew vtkDataSet(IntPtr(retVal), false);
}



  vtkSpatialRepresentationFilter::vtkSpatialRepresentationFilter(System::IntPtr native, bool bConst) : vtkPolyDataSource(native, bConst) {}



  vtkSpatialRepresentationFilter::vtkSpatialRepresentationFilter(bool donothing) : vtkPolyDataSource(donothing) {}



  vtkSpatialRepresentationFilter::vtkSpatialRepresentationFilter() : vtkPolyDataSource(false) {
  this->SetNativePointer(IntPtr(::vtkSpatialRepresentationFilter::New()));
}



  vtkSpatialRepresentationFilter::~vtkSpatialRepresentationFilter() { }





} // end namespace vtkGraphics
