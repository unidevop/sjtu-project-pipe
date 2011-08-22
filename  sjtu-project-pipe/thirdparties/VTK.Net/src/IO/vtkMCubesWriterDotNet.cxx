

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkMCubesWriterDotNet.h"

// native includes
#include "strstream"
#include "vtkMCubesWriter.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkMCubesWriter::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkMCubesWriter>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkMCubesWriter::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkMCubesWriter>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkMCubesWriter^ vtkMCubesWriter::NewInstance()
{
  ::vtkMCubesWriter* retVal = static_cast<::vtkMCubesWriter*>(vtk::ConvertManagedToNative<::vtkMCubesWriter>(m_instance)->NewInstance());
  return gcnew vtkMCubesWriter(IntPtr(retVal), false);
}



vtkMCubesWriter^ vtkMCubesWriter::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkMCubesWriter* retVal = static_cast<::vtkMCubesWriter*>(::vtkMCubesWriter::SafeDownCast(oWrap));
  return gcnew vtkMCubesWriter(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkMCubesWriter::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkMCubesWriter>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkMCubesWriter::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkMCubesWriter>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkMCubesWriter::SetLimitsFileName(System::String^ arg0)
{
  char* arg0Wrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(arg0).ToPointer());
  vtk::ConvertManagedToNative<::vtkMCubesWriter>(m_instance)->SetLimitsFileName(arg0Wrap);
  arg0->Remove(0,arg0->Length);
  arg0->Insert(0,System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(arg0Wrap)));
System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(arg0Wrap));
}



System::String^ vtkMCubesWriter::GetLimitsFileName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkMCubesWriter>(m_instance)->GetLimitsFileName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



  vtkMCubesWriter::vtkMCubesWriter(System::IntPtr native, bool bConst) : vtkPolyDataWriter(native, bConst) {}



  vtkMCubesWriter::vtkMCubesWriter(bool donothing) : vtkPolyDataWriter(donothing) {}



  vtkMCubesWriter::vtkMCubesWriter() : vtkPolyDataWriter(false) {
  this->SetNativePointer(IntPtr(::vtkMCubesWriter::New()));
}



  vtkMCubesWriter::~vtkMCubesWriter() { }





} // end namespace vtkIO
