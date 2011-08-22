

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkRectilinearGridGeometryFilterDotNet.h"

// native includes
#include "strstream"
#include "vtkRectilinearGridGeometryFilter.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkRectilinearGridGeometryFilter::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkRectilinearGridGeometryFilter>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkRectilinearGridGeometryFilter::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkRectilinearGridGeometryFilter>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkRectilinearGridGeometryFilter^ vtkRectilinearGridGeometryFilter::NewInstance()
{
  ::vtkRectilinearGridGeometryFilter* retVal = static_cast<::vtkRectilinearGridGeometryFilter*>(vtk::ConvertManagedToNative<::vtkRectilinearGridGeometryFilter>(m_instance)->NewInstance());
  return gcnew vtkRectilinearGridGeometryFilter(IntPtr(retVal), false);
}



vtkRectilinearGridGeometryFilter^ vtkRectilinearGridGeometryFilter::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkRectilinearGridGeometryFilter* retVal = static_cast<::vtkRectilinearGridGeometryFilter*>(::vtkRectilinearGridGeometryFilter::SafeDownCast(oWrap));
  return gcnew vtkRectilinearGridGeometryFilter(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkRectilinearGridGeometryFilter::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkRectilinearGridGeometryFilter>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkRectilinearGridGeometryFilter::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkRectilinearGridGeometryFilter>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




array<int>^ vtkRectilinearGridGeometryFilter::GetExtent()
{
  const int* retVal = vtk::ConvertManagedToNative<::vtkRectilinearGridGeometryFilter>(m_instance)->GetExtent();
  array<int>^ mRetVal = gcnew array<int>(6);
  for (size_t cprIdx=0; cprIdx<6; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



void vtkRectilinearGridGeometryFilter::SetExtent(int iMin, int iMax, int jMin, int jMax, int kMin, int kMax)
{
  vtk::ConvertManagedToNative<::vtkRectilinearGridGeometryFilter>(m_instance)->SetExtent(iMin, iMax, jMin, jMax, kMin, kMax);
}



void vtkRectilinearGridGeometryFilter::SetExtent(array<int>^ extent)
{
  pin_ptr<int> extentPin = &extent[0];
  int* nativeextentPin = extentPin;
  vtk::ConvertManagedToNative<::vtkRectilinearGridGeometryFilter>(m_instance)->SetExtent(nativeextentPin);
}



  vtkRectilinearGridGeometryFilter::vtkRectilinearGridGeometryFilter(System::IntPtr native, bool bConst) : vtkPolyDataAlgorithm(native, bConst) {}



  vtkRectilinearGridGeometryFilter::vtkRectilinearGridGeometryFilter(bool donothing) : vtkPolyDataAlgorithm(donothing) {}



  vtkRectilinearGridGeometryFilter::vtkRectilinearGridGeometryFilter() : vtkPolyDataAlgorithm(false) {
  this->SetNativePointer(IntPtr(::vtkRectilinearGridGeometryFilter::New()));
}



  vtkRectilinearGridGeometryFilter::~vtkRectilinearGridGeometryFilter() { }





} // end namespace vtkGraphics
