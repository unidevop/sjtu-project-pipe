

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkPNGReaderDotNet.h"

// native includes
#include "strstream"
#include "vtkPNGReader.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkPNGReader::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkPNGReader>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkPNGReader::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkPNGReader>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkPNGReader^ vtkPNGReader::NewInstance()
{
  ::vtkPNGReader* retVal = static_cast<::vtkPNGReader*>(vtk::ConvertManagedToNative<::vtkPNGReader>(m_instance)->NewInstance());
  return gcnew vtkPNGReader(IntPtr(retVal), false);
}



vtkPNGReader^ vtkPNGReader::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkPNGReader* retVal = static_cast<::vtkPNGReader*>(::vtkPNGReader::SafeDownCast(oWrap));
  return gcnew vtkPNGReader(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkPNGReader::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkPNGReader>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkPNGReader::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkPNGReader>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




  vtkPNGReader::vtkPNGReader(System::IntPtr native, bool bConst) : vtkImageReader2(native, bConst) {}



  vtkPNGReader::vtkPNGReader(bool donothing) : vtkImageReader2(donothing) {}



  vtkPNGReader::vtkPNGReader() : vtkImageReader2(false) {
  this->SetNativePointer(IntPtr(::vtkPNGReader::New()));
}



  vtkPNGReader::~vtkPNGReader() { }





} // end namespace vtkIO
