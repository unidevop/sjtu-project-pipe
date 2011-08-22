

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkOutlineCornerFilterDotNet.h"

// native includes
#include "strstream"
#include "vtkOutlineCornerFilter.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkOutlineCornerFilter::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkOutlineCornerFilter>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkOutlineCornerFilter::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkOutlineCornerFilter>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkOutlineCornerFilter^ vtkOutlineCornerFilter::NewInstance()
{
  ::vtkOutlineCornerFilter* retVal = static_cast<::vtkOutlineCornerFilter*>(vtk::ConvertManagedToNative<::vtkOutlineCornerFilter>(m_instance)->NewInstance());
  return gcnew vtkOutlineCornerFilter(IntPtr(retVal), false);
}



vtkOutlineCornerFilter^ vtkOutlineCornerFilter::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkOutlineCornerFilter* retVal = static_cast<::vtkOutlineCornerFilter*>(::vtkOutlineCornerFilter::SafeDownCast(oWrap));
  return gcnew vtkOutlineCornerFilter(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkOutlineCornerFilter::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkOutlineCornerFilter>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkOutlineCornerFilter::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkOutlineCornerFilter>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkOutlineCornerFilter::SetCornerFactor(double arg0)
{
  vtk::ConvertManagedToNative<::vtkOutlineCornerFilter>(m_instance)->SetCornerFactor(arg0);
}



double vtkOutlineCornerFilter::GetCornerFactorMinValue()
{
  double retVal = vtk::ConvertManagedToNative<::vtkOutlineCornerFilter>(m_instance)->GetCornerFactorMinValue();
  return retVal;
}



double vtkOutlineCornerFilter::GetCornerFactorMaxValue()
{
  double retVal = vtk::ConvertManagedToNative<::vtkOutlineCornerFilter>(m_instance)->GetCornerFactorMaxValue();
  return retVal;
}



double vtkOutlineCornerFilter::GetCornerFactor()
{
  double retVal = vtk::ConvertManagedToNative<::vtkOutlineCornerFilter>(m_instance)->GetCornerFactor();
  return retVal;
}



  vtkOutlineCornerFilter::vtkOutlineCornerFilter(System::IntPtr native, bool bConst) : vtkPolyDataAlgorithm(native, bConst) {}



  vtkOutlineCornerFilter::vtkOutlineCornerFilter(bool donothing) : vtkPolyDataAlgorithm(donothing) {}



  vtkOutlineCornerFilter::vtkOutlineCornerFilter() : vtkPolyDataAlgorithm(false) {
  this->SetNativePointer(IntPtr(::vtkOutlineCornerFilter::New()));
}



  vtkOutlineCornerFilter::~vtkOutlineCornerFilter() { }





} // end namespace vtkGraphics
