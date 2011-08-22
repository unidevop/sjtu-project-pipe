

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkAppendFilterDotNet.h"

// native includes
#include "strstream"
#include "vtkAppendFilter.h"
#include "vtkDataSet.h"
#include "vtkDataSetCollection.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkAppendFilter::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkAppendFilter>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkAppendFilter::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkAppendFilter>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkAppendFilter^ vtkAppendFilter::NewInstance()
{
  ::vtkAppendFilter* retVal = static_cast<::vtkAppendFilter*>(vtk::ConvertManagedToNative<::vtkAppendFilter>(m_instance)->NewInstance());
  return gcnew vtkAppendFilter(IntPtr(retVal), false);
}



vtkAppendFilter^ vtkAppendFilter::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkAppendFilter* retVal = static_cast<::vtkAppendFilter*>(::vtkAppendFilter::SafeDownCast(oWrap));
  return gcnew vtkAppendFilter(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkAppendFilter::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkAppendFilter>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkAppendFilter::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkAppendFilter>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkAppendFilter::RemoveInput(vtkDataSet^ in)
{
  ::vtkDataSet* inWrap = vtk::ConvertManagedToNative<::vtkDataSet>(in->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkAppendFilter>(m_instance)->RemoveInput(inWrap);
}



vtkDataSetCollection^ vtkAppendFilter::GetInputList()
{
  ::vtkDataSetCollection* retVal = static_cast<::vtkDataSetCollection*>(vtk::ConvertManagedToNative<::vtkAppendFilter>(m_instance)->GetInputList());
  return gcnew vtkDataSetCollection(IntPtr(retVal), false);
}



  vtkAppendFilter::vtkAppendFilter(System::IntPtr native, bool bConst) : vtkUnstructuredGridAlgorithm(native, bConst) {}



  vtkAppendFilter::vtkAppendFilter(bool donothing) : vtkUnstructuredGridAlgorithm(donothing) {}



  vtkAppendFilter::vtkAppendFilter() : vtkUnstructuredGridAlgorithm(false) {
  this->SetNativePointer(IntPtr(::vtkAppendFilter::New()));
}



  vtkAppendFilter::~vtkAppendFilter() { }





} // end namespace vtkGraphics
