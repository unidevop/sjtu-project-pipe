

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkEnSightMasterServerReaderDotNet.h"

// native includes
#include "strstream"
#include "vtkEnSightMasterServerReader.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkEnSightMasterServerReader::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkEnSightMasterServerReader>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkEnSightMasterServerReader::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkEnSightMasterServerReader>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkEnSightMasterServerReader^ vtkEnSightMasterServerReader::NewInstance()
{
  ::vtkEnSightMasterServerReader* retVal = static_cast<::vtkEnSightMasterServerReader*>(vtk::ConvertManagedToNative<::vtkEnSightMasterServerReader>(m_instance)->NewInstance());
  return gcnew vtkEnSightMasterServerReader(IntPtr(retVal), false);
}



vtkEnSightMasterServerReader^ vtkEnSightMasterServerReader::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkEnSightMasterServerReader* retVal = static_cast<::vtkEnSightMasterServerReader*>(::vtkEnSightMasterServerReader::SafeDownCast(oWrap));
  return gcnew vtkEnSightMasterServerReader(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkEnSightMasterServerReader::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkEnSightMasterServerReader>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkEnSightMasterServerReader::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkEnSightMasterServerReader>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




int vtkEnSightMasterServerReader::DetermineFileName(int piece)
{
  int retVal = vtk::ConvertManagedToNative<::vtkEnSightMasterServerReader>(m_instance)->DetermineFileName(piece);
  return retVal;
}



System::String^ vtkEnSightMasterServerReader::GetPieceCaseFileName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkEnSightMasterServerReader>(m_instance)->GetPieceCaseFileName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



void vtkEnSightMasterServerReader::SetCurrentPiece(int arg0)
{
  vtk::ConvertManagedToNative<::vtkEnSightMasterServerReader>(m_instance)->SetCurrentPiece(arg0);
}



int vtkEnSightMasterServerReader::GetCurrentPiece()
{
  int retVal = vtk::ConvertManagedToNative<::vtkEnSightMasterServerReader>(m_instance)->GetCurrentPiece();
  return retVal;
}



  vtkEnSightMasterServerReader::vtkEnSightMasterServerReader(System::IntPtr native, bool bConst) : vtkGenericEnSightReader(native, bConst) {}



  vtkEnSightMasterServerReader::vtkEnSightMasterServerReader(bool donothing) : vtkGenericEnSightReader(donothing) {}



  vtkEnSightMasterServerReader::vtkEnSightMasterServerReader() : vtkGenericEnSightReader(false) {
  this->SetNativePointer(IntPtr(::vtkEnSightMasterServerReader::New()));
}



  vtkEnSightMasterServerReader::~vtkEnSightMasterServerReader() { }





} // end namespace vtkIO
