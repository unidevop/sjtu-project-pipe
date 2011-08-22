

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkDataObjectSourceDotNet.h"
#include "vtkDataObjectDotNet.h"

// native includes
#include "strstream"
#include "vtkDataObjectSource.h"
#include "vtkDataObject.h"

using namespace System;

namespace vtk {

System::String^ vtkDataObjectSource::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkDataObjectSource>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkDataObjectSource::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkDataObjectSource>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkDataObjectSource^ vtkDataObjectSource::NewInstance()
{
  ::vtkDataObjectSource* retVal = static_cast<::vtkDataObjectSource*>(vtk::ConvertManagedToNative<::vtkDataObjectSource>(m_instance)->NewInstance());
  return gcnew vtkDataObjectSource(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkDataObjectSource::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkDataObjectSource>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkDataObjectSource::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkDataObjectSource>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




vtkDataObject^ vtkDataObjectSource::GetOutput()
{
  ::vtkDataObject* retVal = static_cast<::vtkDataObject*>(vtk::ConvertManagedToNative<::vtkDataObjectSource>(m_instance)->GetOutput());
  return gcnew vtkDataObject(IntPtr(retVal), false);
}



vtkDataObject^ vtkDataObjectSource::GetOutput(int idx)
{
  ::vtkDataObject* retVal = static_cast<::vtkDataObject*>(vtk::ConvertManagedToNative<::vtkDataObjectSource>(m_instance)->GetOutput(idx));
  return gcnew vtkDataObject(IntPtr(retVal), false);
}



void vtkDataObjectSource::SetOutput(vtkDataObject^ arg0)
{
  ::vtkDataObject* arg0Wrap = vtk::ConvertManagedToNative<::vtkDataObject>(arg0->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkDataObjectSource>(m_instance)->SetOutput(arg0Wrap);
}



  vtkDataObjectSource::vtkDataObjectSource(System::IntPtr native, bool bConst) : vtkSource(native, bConst) {}



  vtkDataObjectSource::vtkDataObjectSource(bool donothing) : vtkSource(donothing) {}



  vtkDataObjectSource::vtkDataObjectSource() : vtkSource(false) {
  this->SetNativePointer(IntPtr(::vtkDataObjectSource::New()));
}



  vtkDataObjectSource::~vtkDataObjectSource() { }





} // end namespace vtkFiltering
