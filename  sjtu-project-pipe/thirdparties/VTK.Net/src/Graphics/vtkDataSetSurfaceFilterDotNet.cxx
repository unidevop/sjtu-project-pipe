

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkDataSetSurfaceFilterDotNet.h"

// native includes
#include "strstream"
#include "vtkDataSetSurfaceFilter.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkDataSetSurfaceFilter::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkDataSetSurfaceFilter>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkDataSetSurfaceFilter::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkDataSetSurfaceFilter>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkDataSetSurfaceFilter^ vtkDataSetSurfaceFilter::NewInstance()
{
  ::vtkDataSetSurfaceFilter* retVal = static_cast<::vtkDataSetSurfaceFilter*>(vtk::ConvertManagedToNative<::vtkDataSetSurfaceFilter>(m_instance)->NewInstance());
  return gcnew vtkDataSetSurfaceFilter(IntPtr(retVal), false);
}



vtkDataSetSurfaceFilter^ vtkDataSetSurfaceFilter::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkDataSetSurfaceFilter* retVal = static_cast<::vtkDataSetSurfaceFilter*>(::vtkDataSetSurfaceFilter::SafeDownCast(oWrap));
  return gcnew vtkDataSetSurfaceFilter(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkDataSetSurfaceFilter::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkDataSetSurfaceFilter>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkDataSetSurfaceFilter::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkDataSetSurfaceFilter>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkDataSetSurfaceFilter::SetUseStrips(int arg0)
{
  vtk::ConvertManagedToNative<::vtkDataSetSurfaceFilter>(m_instance)->SetUseStrips(arg0);
}



int vtkDataSetSurfaceFilter::GetUseStrips()
{
  int retVal = vtk::ConvertManagedToNative<::vtkDataSetSurfaceFilter>(m_instance)->GetUseStrips();
  return retVal;
}



void vtkDataSetSurfaceFilter::UseStripsOn()
{
  vtk::ConvertManagedToNative<::vtkDataSetSurfaceFilter>(m_instance)->UseStripsOn();
}



void vtkDataSetSurfaceFilter::UseStripsOff()
{
  vtk::ConvertManagedToNative<::vtkDataSetSurfaceFilter>(m_instance)->UseStripsOff();
}



void vtkDataSetSurfaceFilter::SetPieceInvariant(int arg0)
{
  vtk::ConvertManagedToNative<::vtkDataSetSurfaceFilter>(m_instance)->SetPieceInvariant(arg0);
}



int vtkDataSetSurfaceFilter::GetPieceInvariant()
{
  int retVal = vtk::ConvertManagedToNative<::vtkDataSetSurfaceFilter>(m_instance)->GetPieceInvariant();
  return retVal;
}



  vtkDataSetSurfaceFilter::vtkDataSetSurfaceFilter(System::IntPtr native, bool bConst) : vtkPolyDataAlgorithm(native, bConst) {}



  vtkDataSetSurfaceFilter::vtkDataSetSurfaceFilter(bool donothing) : vtkPolyDataAlgorithm(donothing) {}



  vtkDataSetSurfaceFilter::vtkDataSetSurfaceFilter() : vtkPolyDataAlgorithm(false) {
  this->SetNativePointer(IntPtr(::vtkDataSetSurfaceFilter::New()));
}



  vtkDataSetSurfaceFilter::~vtkDataSetSurfaceFilter() { }





} // end namespace vtkGraphics
