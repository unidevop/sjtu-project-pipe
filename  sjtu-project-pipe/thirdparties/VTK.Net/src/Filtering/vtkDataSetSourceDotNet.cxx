

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkDataSetSourceDotNet.h"
#include "vtkDataSetDotNet.h"

// native includes
#include "strstream"
#include "vtkDataSetSource.h"
#include "vtkDataSet.h"

using namespace System;

namespace vtk {

System::String^ vtkDataSetSource::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkDataSetSource>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkDataSetSource::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkDataSetSource>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkDataSetSource^ vtkDataSetSource::NewInstance()
{
  ::vtkDataSetSource* retVal = static_cast<::vtkDataSetSource*>(vtk::ConvertManagedToNative<::vtkDataSetSource>(m_instance)->NewInstance());
  return gcnew vtkDataSetSource(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkDataSetSource::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkDataSetSource>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkDataSetSource::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkDataSetSource>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




vtkDataSet^ vtkDataSetSource::GetOutput()
{
  ::vtkDataSet* retVal = static_cast<::vtkDataSet*>(vtk::ConvertManagedToNative<::vtkDataSetSource>(m_instance)->GetOutput());
  return gcnew vtkDataSet(IntPtr(retVal), false);
}



vtkDataSet^ vtkDataSetSource::GetOutput(int idx)
{
  ::vtkDataSet* retVal = static_cast<::vtkDataSet*>(vtk::ConvertManagedToNative<::vtkDataSetSource>(m_instance)->GetOutput(idx));
  return gcnew vtkDataSet(IntPtr(retVal), false);
}



void vtkDataSetSource::SetOutput(vtkDataSet^ arg0)
{
  ::vtkDataSet* arg0Wrap = vtk::ConvertManagedToNative<::vtkDataSet>(arg0->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkDataSetSource>(m_instance)->SetOutput(arg0Wrap);
}



  vtkDataSetSource::vtkDataSetSource(System::IntPtr native, bool bConst) : vtkSource(native, bConst) {}



  vtkDataSetSource::vtkDataSetSource(bool donothing) : vtkSource(donothing) {}



  vtkDataSetSource::vtkDataSetSource() : vtkSource(false) {
  this->SetNativePointer(IntPtr(::vtkDataSetSource::New()));
}



  vtkDataSetSource::~vtkDataSetSource() { }





} // end namespace vtkFiltering
