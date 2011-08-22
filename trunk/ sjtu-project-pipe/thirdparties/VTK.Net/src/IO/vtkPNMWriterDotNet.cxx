

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkPNMWriterDotNet.h"

// native includes
#include "strstream"
#include "vtkPNMWriter.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkPNMWriter::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkPNMWriter>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkPNMWriter::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkPNMWriter>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkPNMWriter^ vtkPNMWriter::NewInstance()
{
  ::vtkPNMWriter* retVal = static_cast<::vtkPNMWriter*>(vtk::ConvertManagedToNative<::vtkPNMWriter>(m_instance)->NewInstance());
  return gcnew vtkPNMWriter(IntPtr(retVal), false);
}



vtkPNMWriter^ vtkPNMWriter::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkPNMWriter* retVal = static_cast<::vtkPNMWriter*>(::vtkPNMWriter::SafeDownCast(oWrap));
  return gcnew vtkPNMWriter(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkPNMWriter::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkPNMWriter>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkPNMWriter::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkPNMWriter>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




  vtkPNMWriter::vtkPNMWriter(System::IntPtr native, bool bConst) : vtkImageWriter(native, bConst) {}



  vtkPNMWriter::vtkPNMWriter(bool donothing) : vtkImageWriter(donothing) {}



  vtkPNMWriter::vtkPNMWriter() : vtkImageWriter(false) {
  this->SetNativePointer(IntPtr(::vtkPNMWriter::New()));
}



  vtkPNMWriter::~vtkPNMWriter() { }





} // end namespace vtkIO
