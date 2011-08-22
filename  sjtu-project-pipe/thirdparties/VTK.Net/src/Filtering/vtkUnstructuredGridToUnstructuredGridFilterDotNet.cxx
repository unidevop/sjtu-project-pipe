

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkUnstructuredGridToUnstructuredGridFilterDotNet.h"
#include "vtkInformationDotNet.h"
#include "vtkUnstructuredGridDotNet.h"

// native includes
#include "strstream"
#include "vtkUnstructuredGridToUnstructuredGridFilter.h"
#include "vtkInformation.h"
#include "vtkUnstructuredGrid.h"

using namespace System;

namespace vtk {

System::String^ vtkUnstructuredGridToUnstructuredGridFilter::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkUnstructuredGridToUnstructuredGridFilter>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkUnstructuredGridToUnstructuredGridFilter::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkUnstructuredGridToUnstructuredGridFilter>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkUnstructuredGridToUnstructuredGridFilter^ vtkUnstructuredGridToUnstructuredGridFilter::NewInstance()
{
  ::vtkUnstructuredGridToUnstructuredGridFilter* retVal = static_cast<::vtkUnstructuredGridToUnstructuredGridFilter*>(vtk::ConvertManagedToNative<::vtkUnstructuredGridToUnstructuredGridFilter>(m_instance)->NewInstance());
  return gcnew vtkUnstructuredGridToUnstructuredGridFilter(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkUnstructuredGridToUnstructuredGridFilter::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkUnstructuredGridToUnstructuredGridFilter>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkUnstructuredGridToUnstructuredGridFilter::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkUnstructuredGridToUnstructuredGridFilter>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkUnstructuredGridToUnstructuredGridFilter::SetInput(vtkUnstructuredGrid^ input)
{
  ::vtkUnstructuredGrid* inputWrap = vtk::ConvertManagedToNative<::vtkUnstructuredGrid>(input->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkUnstructuredGridToUnstructuredGridFilter>(m_instance)->SetInput(inputWrap);
}



vtkUnstructuredGrid^ vtkUnstructuredGridToUnstructuredGridFilter::GetInput()
{
  ::vtkUnstructuredGrid* retVal = static_cast<::vtkUnstructuredGrid*>(vtk::ConvertManagedToNative<::vtkUnstructuredGridToUnstructuredGridFilter>(m_instance)->GetInput());
  return gcnew vtkUnstructuredGrid(IntPtr(retVal), false);
}



int vtkUnstructuredGridToUnstructuredGridFilter::FillInputPortInformation(int arg0, vtkInformation^ arg1)
{
  ::vtkInformation* arg1Wrap = vtk::ConvertManagedToNative<::vtkInformation>(arg1->GetNativePointer());
  int retVal = vtk::ConvertManagedToNative<::vtkUnstructuredGridToUnstructuredGridFilter>(m_instance)->FillInputPortInformation(arg0, arg1Wrap);
  return retVal;
}



  vtkUnstructuredGridToUnstructuredGridFilter::vtkUnstructuredGridToUnstructuredGridFilter(System::IntPtr native, bool bConst) : vtkUnstructuredGridSource(native, bConst) {}



  vtkUnstructuredGridToUnstructuredGridFilter::vtkUnstructuredGridToUnstructuredGridFilter(bool donothing) : vtkUnstructuredGridSource(donothing) {}



  vtkUnstructuredGridToUnstructuredGridFilter::vtkUnstructuredGridToUnstructuredGridFilter() : vtkUnstructuredGridSource(false) {
  this->SetNativePointer(IntPtr(::vtkUnstructuredGridToUnstructuredGridFilter::New()));
}



  vtkUnstructuredGridToUnstructuredGridFilter::~vtkUnstructuredGridToUnstructuredGridFilter() { }





} // end namespace vtkFiltering
