

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkAttributeDataToFieldDataFilterDotNet.h"

// native includes
#include "strstream"
#include "vtkAttributeDataToFieldDataFilter.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkAttributeDataToFieldDataFilter::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkAttributeDataToFieldDataFilter>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkAttributeDataToFieldDataFilter::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkAttributeDataToFieldDataFilter>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




System::String^ vtkAttributeDataToFieldDataFilter::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkAttributeDataToFieldDataFilter>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkAttributeDataToFieldDataFilter::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkAttributeDataToFieldDataFilter>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkAttributeDataToFieldDataFilter^ vtkAttributeDataToFieldDataFilter::NewInstance()
{
  ::vtkAttributeDataToFieldDataFilter* retVal = static_cast<::vtkAttributeDataToFieldDataFilter*>(vtk::ConvertManagedToNative<::vtkAttributeDataToFieldDataFilter>(m_instance)->NewInstance());
  return gcnew vtkAttributeDataToFieldDataFilter(IntPtr(retVal), false);
}



vtkAttributeDataToFieldDataFilter^ vtkAttributeDataToFieldDataFilter::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkAttributeDataToFieldDataFilter* retVal = static_cast<::vtkAttributeDataToFieldDataFilter*>(::vtkAttributeDataToFieldDataFilter::SafeDownCast(oWrap));
  return gcnew vtkAttributeDataToFieldDataFilter(IntPtr(retVal), false);
}



void vtkAttributeDataToFieldDataFilter::SetPassAttributeData(int arg0)
{
  vtk::ConvertManagedToNative<::vtkAttributeDataToFieldDataFilter>(m_instance)->SetPassAttributeData(arg0);
}



int vtkAttributeDataToFieldDataFilter::GetPassAttributeData()
{
  int retVal = vtk::ConvertManagedToNative<::vtkAttributeDataToFieldDataFilter>(m_instance)->GetPassAttributeData();
  return retVal;
}



void vtkAttributeDataToFieldDataFilter::PassAttributeDataOn()
{
  vtk::ConvertManagedToNative<::vtkAttributeDataToFieldDataFilter>(m_instance)->PassAttributeDataOn();
}



void vtkAttributeDataToFieldDataFilter::PassAttributeDataOff()
{
  vtk::ConvertManagedToNative<::vtkAttributeDataToFieldDataFilter>(m_instance)->PassAttributeDataOff();
}



  vtkAttributeDataToFieldDataFilter::vtkAttributeDataToFieldDataFilter(System::IntPtr native, bool bConst) : vtkDataSetAlgorithm(native, bConst) {}



  vtkAttributeDataToFieldDataFilter::vtkAttributeDataToFieldDataFilter(bool donothing) : vtkDataSetAlgorithm(donothing) {}



  vtkAttributeDataToFieldDataFilter::vtkAttributeDataToFieldDataFilter() : vtkDataSetAlgorithm(false) {
  this->SetNativePointer(IntPtr(::vtkAttributeDataToFieldDataFilter::New()));
}



  vtkAttributeDataToFieldDataFilter::~vtkAttributeDataToFieldDataFilter() { }





} // end namespace vtkGraphics
