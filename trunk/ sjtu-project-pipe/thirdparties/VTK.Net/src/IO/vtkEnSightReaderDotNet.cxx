

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkEnSightReaderDotNet.h"

// native includes
#include "strstream"
#include "vtkEnSightReader.h"
#include "vtkDataObject.h"

using namespace System;

namespace vtk {

System::String^ vtkEnSightReader::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkEnSightReader>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkEnSightReader::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkEnSightReader>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkEnSightReader^ vtkEnSightReader::NewInstance()
{
  ::vtkEnSightReader* retVal = static_cast<::vtkEnSightReader*>(vtk::ConvertManagedToNative<::vtkEnSightReader>(m_instance)->NewInstance());
  return gcnew vtkEnSightReader(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkEnSightReader::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkEnSightReader>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkEnSightReader::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkEnSightReader>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkEnSightReader::Update()
{
  vtk::ConvertManagedToNative<::vtkEnSightReader>(m_instance)->Update();
}



void vtkEnSightReader::ExecuteInformation()
{
  vtk::ConvertManagedToNative<::vtkEnSightReader>(m_instance)->ExecuteInformation();
}



void vtkEnSightReader::ReplaceNthOutput(int n, vtkDataObject^ output)
{
  ::vtkDataObject* outputWrap = vtk::ConvertManagedToNative<::vtkDataObject>(output->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkEnSightReader>(m_instance)->ReplaceNthOutput(n, outputWrap);
}



int vtkEnSightReader::GetOutputsAreValid()
{
  int retVal = vtk::ConvertManagedToNative<::vtkEnSightReader>(m_instance)->GetOutputsAreValid();
  return retVal;
}



  vtkEnSightReader::vtkEnSightReader(System::IntPtr native, bool bConst) : vtkGenericEnSightReader(native, bConst) {}



  vtkEnSightReader::vtkEnSightReader(bool donothing) : vtkGenericEnSightReader(donothing) {}



  vtkEnSightReader::vtkEnSightReader() : vtkGenericEnSightReader(false) {
  this->SetNativePointer(IntPtr(::vtkEnSightReader::New()));
}



  vtkEnSightReader::~vtkEnSightReader() { }





} // end namespace vtkIO
