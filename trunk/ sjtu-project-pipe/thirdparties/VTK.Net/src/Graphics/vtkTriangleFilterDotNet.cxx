

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkTriangleFilterDotNet.h"

// native includes
#include "strstream"
#include "vtkTriangleFilter.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkTriangleFilter::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkTriangleFilter>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkTriangleFilter::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkTriangleFilter>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkTriangleFilter^ vtkTriangleFilter::NewInstance()
{
  ::vtkTriangleFilter* retVal = static_cast<::vtkTriangleFilter*>(vtk::ConvertManagedToNative<::vtkTriangleFilter>(m_instance)->NewInstance());
  return gcnew vtkTriangleFilter(IntPtr(retVal), false);
}



vtkTriangleFilter^ vtkTriangleFilter::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkTriangleFilter* retVal = static_cast<::vtkTriangleFilter*>(::vtkTriangleFilter::SafeDownCast(oWrap));
  return gcnew vtkTriangleFilter(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkTriangleFilter::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkTriangleFilter>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkTriangleFilter::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkTriangleFilter>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkTriangleFilter::PassVertsOn()
{
  vtk::ConvertManagedToNative<::vtkTriangleFilter>(m_instance)->PassVertsOn();
}



void vtkTriangleFilter::PassVertsOff()
{
  vtk::ConvertManagedToNative<::vtkTriangleFilter>(m_instance)->PassVertsOff();
}



void vtkTriangleFilter::SetPassVerts(int arg0)
{
  vtk::ConvertManagedToNative<::vtkTriangleFilter>(m_instance)->SetPassVerts(arg0);
}



int vtkTriangleFilter::GetPassVerts()
{
  int retVal = vtk::ConvertManagedToNative<::vtkTriangleFilter>(m_instance)->GetPassVerts();
  return retVal;
}



void vtkTriangleFilter::PassLinesOn()
{
  vtk::ConvertManagedToNative<::vtkTriangleFilter>(m_instance)->PassLinesOn();
}



void vtkTriangleFilter::PassLinesOff()
{
  vtk::ConvertManagedToNative<::vtkTriangleFilter>(m_instance)->PassLinesOff();
}



void vtkTriangleFilter::SetPassLines(int arg0)
{
  vtk::ConvertManagedToNative<::vtkTriangleFilter>(m_instance)->SetPassLines(arg0);
}



int vtkTriangleFilter::GetPassLines()
{
  int retVal = vtk::ConvertManagedToNative<::vtkTriangleFilter>(m_instance)->GetPassLines();
  return retVal;
}



  vtkTriangleFilter::vtkTriangleFilter(System::IntPtr native, bool bConst) : vtkPolyDataAlgorithm(native, bConst) {}



  vtkTriangleFilter::vtkTriangleFilter(bool donothing) : vtkPolyDataAlgorithm(donothing) {}



  vtkTriangleFilter::vtkTriangleFilter() : vtkPolyDataAlgorithm(false) {
  this->SetNativePointer(IntPtr(::vtkTriangleFilter::New()));
}



  vtkTriangleFilter::~vtkTriangleFilter() { }





} // end namespace vtkGraphics
