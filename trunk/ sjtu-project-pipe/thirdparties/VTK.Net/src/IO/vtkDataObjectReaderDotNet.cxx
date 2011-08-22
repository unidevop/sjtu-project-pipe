

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkDataObjectReaderDotNet.h"

// native includes
#include "strstream"
#include "vtkDataObjectReader.h"
#include "vtkDataObject.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkDataObjectReader::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkDataObjectReader>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkDataObjectReader::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkDataObjectReader>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkDataObjectReader^ vtkDataObjectReader::NewInstance()
{
  ::vtkDataObjectReader* retVal = static_cast<::vtkDataObjectReader*>(vtk::ConvertManagedToNative<::vtkDataObjectReader>(m_instance)->NewInstance());
  return gcnew vtkDataObjectReader(IntPtr(retVal), false);
}



vtkDataObjectReader^ vtkDataObjectReader::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkDataObjectReader* retVal = static_cast<::vtkDataObjectReader*>(::vtkDataObjectReader::SafeDownCast(oWrap));
  return gcnew vtkDataObjectReader(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkDataObjectReader::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkDataObjectReader>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkDataObjectReader::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkDataObjectReader>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




vtkDataObject^ vtkDataObjectReader::GetOutput()
{
  ::vtkDataObject* retVal = static_cast<::vtkDataObject*>(vtk::ConvertManagedToNative<::vtkDataObjectReader>(m_instance)->GetOutput());
  return gcnew vtkDataObject(IntPtr(retVal), false);
}



vtkDataObject^ vtkDataObjectReader::GetOutput(int idx)
{
  ::vtkDataObject* retVal = static_cast<::vtkDataObject*>(vtk::ConvertManagedToNative<::vtkDataObjectReader>(m_instance)->GetOutput(idx));
  return gcnew vtkDataObject(IntPtr(retVal), false);
}



void vtkDataObjectReader::SetOutput(vtkDataObject^ arg0)
{
  ::vtkDataObject* arg0Wrap = vtk::ConvertManagedToNative<::vtkDataObject>(arg0->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkDataObjectReader>(m_instance)->SetOutput(arg0Wrap);
}



  vtkDataObjectReader::vtkDataObjectReader(System::IntPtr native, bool bConst) : vtkDataReader(native, bConst) {}



  vtkDataObjectReader::vtkDataObjectReader(bool donothing) : vtkDataReader(donothing) {}



  vtkDataObjectReader::vtkDataObjectReader() : vtkDataReader(false) {
  this->SetNativePointer(IntPtr(::vtkDataObjectReader::New()));
}



  vtkDataObjectReader::~vtkDataObjectReader() { }





} // end namespace vtkIO
