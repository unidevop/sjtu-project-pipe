

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkEnSightGoldReaderDotNet.h"

// native includes
#include "strstream"
#include "vtkEnSightGoldReader.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkEnSightGoldReader::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkEnSightGoldReader>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkEnSightGoldReader::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkEnSightGoldReader>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkEnSightGoldReader^ vtkEnSightGoldReader::NewInstance()
{
  ::vtkEnSightGoldReader* retVal = static_cast<::vtkEnSightGoldReader*>(vtk::ConvertManagedToNative<::vtkEnSightGoldReader>(m_instance)->NewInstance());
  return gcnew vtkEnSightGoldReader(IntPtr(retVal), false);
}



vtkEnSightGoldReader^ vtkEnSightGoldReader::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkEnSightGoldReader* retVal = static_cast<::vtkEnSightGoldReader*>(::vtkEnSightGoldReader::SafeDownCast(oWrap));
  return gcnew vtkEnSightGoldReader(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkEnSightGoldReader::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkEnSightGoldReader>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkEnSightGoldReader::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkEnSightGoldReader>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




  vtkEnSightGoldReader::vtkEnSightGoldReader(System::IntPtr native, bool bConst) : vtkEnSightReader(native, bConst) {}



  vtkEnSightGoldReader::vtkEnSightGoldReader(bool donothing) : vtkEnSightReader(donothing) {}



  vtkEnSightGoldReader::vtkEnSightGoldReader() : vtkEnSightReader(false) {
  this->SetNativePointer(IntPtr(::vtkEnSightGoldReader::New()));
}



  vtkEnSightGoldReader::~vtkEnSightGoldReader() { }





} // end namespace vtkIO
