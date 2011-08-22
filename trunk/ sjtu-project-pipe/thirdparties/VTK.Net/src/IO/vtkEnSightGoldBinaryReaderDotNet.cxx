

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkEnSightGoldBinaryReaderDotNet.h"

// native includes
#include "strstream"
#include "vtkEnSightGoldBinaryReader.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkEnSightGoldBinaryReader::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkEnSightGoldBinaryReader>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkEnSightGoldBinaryReader::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkEnSightGoldBinaryReader>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkEnSightGoldBinaryReader^ vtkEnSightGoldBinaryReader::NewInstance()
{
  ::vtkEnSightGoldBinaryReader* retVal = static_cast<::vtkEnSightGoldBinaryReader*>(vtk::ConvertManagedToNative<::vtkEnSightGoldBinaryReader>(m_instance)->NewInstance());
  return gcnew vtkEnSightGoldBinaryReader(IntPtr(retVal), false);
}



vtkEnSightGoldBinaryReader^ vtkEnSightGoldBinaryReader::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkEnSightGoldBinaryReader* retVal = static_cast<::vtkEnSightGoldBinaryReader*>(::vtkEnSightGoldBinaryReader::SafeDownCast(oWrap));
  return gcnew vtkEnSightGoldBinaryReader(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkEnSightGoldBinaryReader::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkEnSightGoldBinaryReader>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkEnSightGoldBinaryReader::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkEnSightGoldBinaryReader>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




  vtkEnSightGoldBinaryReader::vtkEnSightGoldBinaryReader(System::IntPtr native, bool bConst) : vtkEnSightReader(native, bConst) {}



  vtkEnSightGoldBinaryReader::vtkEnSightGoldBinaryReader(bool donothing) : vtkEnSightReader(donothing) {}



  vtkEnSightGoldBinaryReader::vtkEnSightGoldBinaryReader() : vtkEnSightReader(false) {
  this->SetNativePointer(IntPtr(::vtkEnSightGoldBinaryReader::New()));
}



  vtkEnSightGoldBinaryReader::~vtkEnSightGoldBinaryReader() { }





} // end namespace vtkIO
