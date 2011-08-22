

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkEnSight6BinaryReaderDotNet.h"

// native includes
#include "strstream"
#include "vtkEnSight6BinaryReader.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkEnSight6BinaryReader::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkEnSight6BinaryReader>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkEnSight6BinaryReader::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkEnSight6BinaryReader>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkEnSight6BinaryReader^ vtkEnSight6BinaryReader::NewInstance()
{
  ::vtkEnSight6BinaryReader* retVal = static_cast<::vtkEnSight6BinaryReader*>(vtk::ConvertManagedToNative<::vtkEnSight6BinaryReader>(m_instance)->NewInstance());
  return gcnew vtkEnSight6BinaryReader(IntPtr(retVal), false);
}



vtkEnSight6BinaryReader^ vtkEnSight6BinaryReader::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkEnSight6BinaryReader* retVal = static_cast<::vtkEnSight6BinaryReader*>(::vtkEnSight6BinaryReader::SafeDownCast(oWrap));
  return gcnew vtkEnSight6BinaryReader(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkEnSight6BinaryReader::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkEnSight6BinaryReader>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkEnSight6BinaryReader::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkEnSight6BinaryReader>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




  vtkEnSight6BinaryReader::vtkEnSight6BinaryReader(System::IntPtr native, bool bConst) : vtkEnSightReader(native, bConst) {}



  vtkEnSight6BinaryReader::vtkEnSight6BinaryReader(bool donothing) : vtkEnSightReader(donothing) {}



  vtkEnSight6BinaryReader::vtkEnSight6BinaryReader() : vtkEnSightReader(false) {
  this->SetNativePointer(IntPtr(::vtkEnSight6BinaryReader::New()));
}



  vtkEnSight6BinaryReader::~vtkEnSight6BinaryReader() { }





} // end namespace vtkIO
