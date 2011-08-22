

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkProgrammableAttributeDataFilterDotNet.h"

// native includes
#include "strstream"
#include "vtkProgrammableAttributeDataFilter.h"
#include "vtkDataSet.h"
#include "vtkDataSetCollection.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkProgrammableAttributeDataFilter::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkProgrammableAttributeDataFilter>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkProgrammableAttributeDataFilter::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkProgrammableAttributeDataFilter>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkProgrammableAttributeDataFilter^ vtkProgrammableAttributeDataFilter::NewInstance()
{
  ::vtkProgrammableAttributeDataFilter* retVal = static_cast<::vtkProgrammableAttributeDataFilter*>(vtk::ConvertManagedToNative<::vtkProgrammableAttributeDataFilter>(m_instance)->NewInstance());
  return gcnew vtkProgrammableAttributeDataFilter(IntPtr(retVal), false);
}



vtkProgrammableAttributeDataFilter^ vtkProgrammableAttributeDataFilter::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkProgrammableAttributeDataFilter* retVal = static_cast<::vtkProgrammableAttributeDataFilter*>(::vtkProgrammableAttributeDataFilter::SafeDownCast(oWrap));
  return gcnew vtkProgrammableAttributeDataFilter(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkProgrammableAttributeDataFilter::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkProgrammableAttributeDataFilter>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkProgrammableAttributeDataFilter::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkProgrammableAttributeDataFilter>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkProgrammableAttributeDataFilter::AddInput(vtkDataSet^ in)
{
  ::vtkDataSet* inWrap = vtk::ConvertManagedToNative<::vtkDataSet>(in->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkProgrammableAttributeDataFilter>(m_instance)->AddInput(inWrap);
}



void vtkProgrammableAttributeDataFilter::RemoveInput(vtkDataSet^ in)
{
  ::vtkDataSet* inWrap = vtk::ConvertManagedToNative<::vtkDataSet>(in->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkProgrammableAttributeDataFilter>(m_instance)->RemoveInput(inWrap);
}



vtkDataSetCollection^ vtkProgrammableAttributeDataFilter::GetInputList()
{
  ::vtkDataSetCollection* retVal = static_cast<::vtkDataSetCollection*>(vtk::ConvertManagedToNative<::vtkProgrammableAttributeDataFilter>(m_instance)->GetInputList());
  return gcnew vtkDataSetCollection(IntPtr(retVal), false);
}



  vtkProgrammableAttributeDataFilter::vtkProgrammableAttributeDataFilter(System::IntPtr native, bool bConst) : vtkDataSetAlgorithm(native, bConst) {}



  vtkProgrammableAttributeDataFilter::vtkProgrammableAttributeDataFilter(bool donothing) : vtkDataSetAlgorithm(donothing) {}



  vtkProgrammableAttributeDataFilter::vtkProgrammableAttributeDataFilter() : vtkDataSetAlgorithm(false) {
  this->SetNativePointer(IntPtr(::vtkProgrammableAttributeDataFilter::New()));
}



  vtkProgrammableAttributeDataFilter::~vtkProgrammableAttributeDataFilter() { }





} // end namespace vtkGraphics
