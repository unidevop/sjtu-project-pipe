

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkStructuredGridGeometryFilterDotNet.h"

// native includes
#include "strstream"
#include "vtkStructuredGridGeometryFilter.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkStructuredGridGeometryFilter::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkStructuredGridGeometryFilter>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkStructuredGridGeometryFilter::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkStructuredGridGeometryFilter>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkStructuredGridGeometryFilter^ vtkStructuredGridGeometryFilter::NewInstance()
{
  ::vtkStructuredGridGeometryFilter* retVal = static_cast<::vtkStructuredGridGeometryFilter*>(vtk::ConvertManagedToNative<::vtkStructuredGridGeometryFilter>(m_instance)->NewInstance());
  return gcnew vtkStructuredGridGeometryFilter(IntPtr(retVal), false);
}



vtkStructuredGridGeometryFilter^ vtkStructuredGridGeometryFilter::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkStructuredGridGeometryFilter* retVal = static_cast<::vtkStructuredGridGeometryFilter*>(::vtkStructuredGridGeometryFilter::SafeDownCast(oWrap));
  return gcnew vtkStructuredGridGeometryFilter(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkStructuredGridGeometryFilter::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkStructuredGridGeometryFilter>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkStructuredGridGeometryFilter::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkStructuredGridGeometryFilter>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




array<int>^ vtkStructuredGridGeometryFilter::GetExtent()
{
  const int* retVal = vtk::ConvertManagedToNative<::vtkStructuredGridGeometryFilter>(m_instance)->GetExtent();
  array<int>^ mRetVal = gcnew array<int>(6);
  for (size_t cprIdx=0; cprIdx<6; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



void vtkStructuredGridGeometryFilter::SetExtent(int iMin, int iMax, int jMin, int jMax, int kMin, int kMax)
{
  vtk::ConvertManagedToNative<::vtkStructuredGridGeometryFilter>(m_instance)->SetExtent(iMin, iMax, jMin, jMax, kMin, kMax);
}



void vtkStructuredGridGeometryFilter::SetExtent(array<int>^ extent)
{
  pin_ptr<int> extentPin = &extent[0];
  int* nativeextentPin = extentPin;
  vtk::ConvertManagedToNative<::vtkStructuredGridGeometryFilter>(m_instance)->SetExtent(nativeextentPin);
}



  vtkStructuredGridGeometryFilter::vtkStructuredGridGeometryFilter(System::IntPtr native, bool bConst) : vtkPolyDataAlgorithm(native, bConst) {}



  vtkStructuredGridGeometryFilter::vtkStructuredGridGeometryFilter(bool donothing) : vtkPolyDataAlgorithm(donothing) {}



  vtkStructuredGridGeometryFilter::vtkStructuredGridGeometryFilter() : vtkPolyDataAlgorithm(false) {
  this->SetNativePointer(IntPtr(::vtkStructuredGridGeometryFilter::New()));
}



  vtkStructuredGridGeometryFilter::~vtkStructuredGridGeometryFilter() { }





} // end namespace vtkGraphics
