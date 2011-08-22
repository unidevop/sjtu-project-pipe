

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkShrinkFilterDotNet.h"

// native includes
#include "strstream"
#include "vtkShrinkFilter.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkShrinkFilter::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkShrinkFilter>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkShrinkFilter::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkShrinkFilter>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkShrinkFilter^ vtkShrinkFilter::NewInstance()
{
  ::vtkShrinkFilter* retVal = static_cast<::vtkShrinkFilter*>(vtk::ConvertManagedToNative<::vtkShrinkFilter>(m_instance)->NewInstance());
  return gcnew vtkShrinkFilter(IntPtr(retVal), false);
}



vtkShrinkFilter^ vtkShrinkFilter::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkShrinkFilter* retVal = static_cast<::vtkShrinkFilter*>(::vtkShrinkFilter::SafeDownCast(oWrap));
  return gcnew vtkShrinkFilter(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkShrinkFilter::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkShrinkFilter>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkShrinkFilter::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkShrinkFilter>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkShrinkFilter::SetShrinkFactor(double arg0)
{
  vtk::ConvertManagedToNative<::vtkShrinkFilter>(m_instance)->SetShrinkFactor(arg0);
}



double vtkShrinkFilter::GetShrinkFactorMinValue()
{
  double retVal = vtk::ConvertManagedToNative<::vtkShrinkFilter>(m_instance)->GetShrinkFactorMinValue();
  return retVal;
}



double vtkShrinkFilter::GetShrinkFactorMaxValue()
{
  double retVal = vtk::ConvertManagedToNative<::vtkShrinkFilter>(m_instance)->GetShrinkFactorMaxValue();
  return retVal;
}



double vtkShrinkFilter::GetShrinkFactor()
{
  double retVal = vtk::ConvertManagedToNative<::vtkShrinkFilter>(m_instance)->GetShrinkFactor();
  return retVal;
}



  vtkShrinkFilter::vtkShrinkFilter(System::IntPtr native, bool bConst) : vtkUnstructuredGridAlgorithm(native, bConst) {}



  vtkShrinkFilter::vtkShrinkFilter(bool donothing) : vtkUnstructuredGridAlgorithm(donothing) {}



  vtkShrinkFilter::vtkShrinkFilter() : vtkUnstructuredGridAlgorithm(false) {
  this->SetNativePointer(IntPtr(::vtkShrinkFilter::New()));
}



  vtkShrinkFilter::~vtkShrinkFilter() { }





} // end namespace vtkGraphics
