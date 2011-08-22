

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkProgrammableGlyphFilterDotNet.h"

// native includes
#include "strstream"
#include "vtkProgrammableGlyphFilter.h"
#include "vtkObject.h"
#include "vtkPointData.h"
#include "vtkPolyData.h"

using namespace System;

namespace vtk {

System::String^ vtkProgrammableGlyphFilter::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkProgrammableGlyphFilter>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkProgrammableGlyphFilter::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkProgrammableGlyphFilter>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkProgrammableGlyphFilter^ vtkProgrammableGlyphFilter::NewInstance()
{
  ::vtkProgrammableGlyphFilter* retVal = static_cast<::vtkProgrammableGlyphFilter*>(vtk::ConvertManagedToNative<::vtkProgrammableGlyphFilter>(m_instance)->NewInstance());
  return gcnew vtkProgrammableGlyphFilter(IntPtr(retVal), false);
}



vtkProgrammableGlyphFilter^ vtkProgrammableGlyphFilter::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkProgrammableGlyphFilter* retVal = static_cast<::vtkProgrammableGlyphFilter*>(::vtkProgrammableGlyphFilter::SafeDownCast(oWrap));
  return gcnew vtkProgrammableGlyphFilter(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkProgrammableGlyphFilter::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkProgrammableGlyphFilter>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkProgrammableGlyphFilter::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkProgrammableGlyphFilter>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkProgrammableGlyphFilter::SetSource(vtkPolyData^ source)
{
  ::vtkPolyData* sourceWrap = vtk::ConvertManagedToNative<::vtkPolyData>(source->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkProgrammableGlyphFilter>(m_instance)->SetSource(sourceWrap);
}



vtkPolyData^ vtkProgrammableGlyphFilter::GetSource()
{
  ::vtkPolyData* retVal = static_cast<::vtkPolyData*>(vtk::ConvertManagedToNative<::vtkProgrammableGlyphFilter>(m_instance)->GetSource());
  return gcnew vtkPolyData(IntPtr(retVal), false);
}



int vtkProgrammableGlyphFilter::GetPointId()
{
  int retVal = vtk::ConvertManagedToNative<::vtkProgrammableGlyphFilter>(m_instance)->GetPointId();
  return retVal;
}



array<double>^ vtkProgrammableGlyphFilter::GetPoint()
{
  const double* retVal = vtk::ConvertManagedToNative<::vtkProgrammableGlyphFilter>(m_instance)->GetPoint();
  array<double>^ mRetVal = gcnew array<double>(3);
  for (size_t cprIdx=0; cprIdx<3; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



vtkPointData^ vtkProgrammableGlyphFilter::GetPointData()
{
  ::vtkPointData* retVal = static_cast<::vtkPointData*>(vtk::ConvertManagedToNative<::vtkProgrammableGlyphFilter>(m_instance)->GetPointData());
  return gcnew vtkPointData(IntPtr(retVal), false);
}



void vtkProgrammableGlyphFilter::SetColorMode(int arg0)
{
  vtk::ConvertManagedToNative<::vtkProgrammableGlyphFilter>(m_instance)->SetColorMode(arg0);
}



int vtkProgrammableGlyphFilter::GetColorMode()
{
  int retVal = vtk::ConvertManagedToNative<::vtkProgrammableGlyphFilter>(m_instance)->GetColorMode();
  return retVal;
}



void vtkProgrammableGlyphFilter::SetColorModeToColorByInput()
{
  vtk::ConvertManagedToNative<::vtkProgrammableGlyphFilter>(m_instance)->SetColorModeToColorByInput();
}



void vtkProgrammableGlyphFilter::SetColorModeToColorBySource()
{
  vtk::ConvertManagedToNative<::vtkProgrammableGlyphFilter>(m_instance)->SetColorModeToColorBySource();
}



System::String^ vtkProgrammableGlyphFilter::GetColorModeAsString()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkProgrammableGlyphFilter>(m_instance)->GetColorModeAsString();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



  vtkProgrammableGlyphFilter::vtkProgrammableGlyphFilter(System::IntPtr native, bool bConst) : vtkPolyDataAlgorithm(native, bConst) {}



  vtkProgrammableGlyphFilter::vtkProgrammableGlyphFilter(bool donothing) : vtkPolyDataAlgorithm(donothing) {}



  vtkProgrammableGlyphFilter::vtkProgrammableGlyphFilter() : vtkPolyDataAlgorithm(false) {
  this->SetNativePointer(IntPtr(::vtkProgrammableGlyphFilter::New()));
}



  vtkProgrammableGlyphFilter::~vtkProgrammableGlyphFilter() { }





} // end namespace vtkGraphics
