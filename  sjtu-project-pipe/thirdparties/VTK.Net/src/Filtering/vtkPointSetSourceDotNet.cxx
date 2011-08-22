

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkPointSetSourceDotNet.h"
#include "vtkPointSetDotNet.h"

// native includes
#include "strstream"
#include "vtkPointSetSource.h"
#include "vtkPointSet.h"

using namespace System;

namespace vtk {

System::String^ vtkPointSetSource::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkPointSetSource>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkPointSetSource::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkPointSetSource>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkPointSetSource^ vtkPointSetSource::NewInstance()
{
  ::vtkPointSetSource* retVal = static_cast<::vtkPointSetSource*>(vtk::ConvertManagedToNative<::vtkPointSetSource>(m_instance)->NewInstance());
  return gcnew vtkPointSetSource(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkPointSetSource::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkPointSetSource>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkPointSetSource::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkPointSetSource>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




vtkPointSet^ vtkPointSetSource::GetOutput()
{
  ::vtkPointSet* retVal = static_cast<::vtkPointSet*>(vtk::ConvertManagedToNative<::vtkPointSetSource>(m_instance)->GetOutput());
  return gcnew vtkPointSet(IntPtr(retVal), false);
}



vtkPointSet^ vtkPointSetSource::GetOutput(int idx)
{
  ::vtkPointSet* retVal = static_cast<::vtkPointSet*>(vtk::ConvertManagedToNative<::vtkPointSetSource>(m_instance)->GetOutput(idx));
  return gcnew vtkPointSet(IntPtr(retVal), false);
}



void vtkPointSetSource::SetOutput(vtkPointSet^ output)
{
  ::vtkPointSet* outputWrap = vtk::ConvertManagedToNative<::vtkPointSet>(output->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkPointSetSource>(m_instance)->SetOutput(outputWrap);
}



  vtkPointSetSource::vtkPointSetSource(System::IntPtr native, bool bConst) : vtkSource(native, bConst) {}



  vtkPointSetSource::vtkPointSetSource(bool donothing) : vtkSource(donothing) {}



  vtkPointSetSource::vtkPointSetSource() : vtkSource(false) {
  this->SetNativePointer(IntPtr(::vtkPointSetSource::New()));
}



  vtkPointSetSource::~vtkPointSetSource() { }





} // end namespace vtkFiltering
