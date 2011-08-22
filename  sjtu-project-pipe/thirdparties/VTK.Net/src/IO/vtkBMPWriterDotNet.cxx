

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkBMPWriterDotNet.h"

// native includes
#include "strstream"
#include "vtkBMPWriter.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkBMPWriter::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkBMPWriter>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkBMPWriter::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkBMPWriter>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkBMPWriter^ vtkBMPWriter::NewInstance()
{
  ::vtkBMPWriter* retVal = static_cast<::vtkBMPWriter*>(vtk::ConvertManagedToNative<::vtkBMPWriter>(m_instance)->NewInstance());
  return gcnew vtkBMPWriter(IntPtr(retVal), false);
}



vtkBMPWriter^ vtkBMPWriter::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkBMPWriter* retVal = static_cast<::vtkBMPWriter*>(::vtkBMPWriter::SafeDownCast(oWrap));
  return gcnew vtkBMPWriter(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkBMPWriter::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkBMPWriter>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkBMPWriter::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkBMPWriter>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




  vtkBMPWriter::vtkBMPWriter(System::IntPtr native, bool bConst) : vtkImageWriter(native, bConst) {}



  vtkBMPWriter::vtkBMPWriter(bool donothing) : vtkImageWriter(donothing) {}



  vtkBMPWriter::vtkBMPWriter() : vtkImageWriter(false) {
  this->SetNativePointer(IntPtr(::vtkBMPWriter::New()));
}



  vtkBMPWriter::~vtkBMPWriter() { }





} // end namespace vtkIO
