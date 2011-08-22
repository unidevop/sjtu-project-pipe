

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkBMPReaderDotNet.h"

// native includes
#include "strstream"
#include "vtkBMPReader.h"
#include "vtkLookupTable.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkBMPReader::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkBMPReader>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkBMPReader::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkBMPReader>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkBMPReader^ vtkBMPReader::NewInstance()
{
  ::vtkBMPReader* retVal = static_cast<::vtkBMPReader*>(vtk::ConvertManagedToNative<::vtkBMPReader>(m_instance)->NewInstance());
  return gcnew vtkBMPReader(IntPtr(retVal), false);
}



vtkBMPReader^ vtkBMPReader::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkBMPReader* retVal = static_cast<::vtkBMPReader*>(::vtkBMPReader::SafeDownCast(oWrap));
  return gcnew vtkBMPReader(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkBMPReader::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkBMPReader>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkBMPReader::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkBMPReader>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




int vtkBMPReader::GetDepth()
{
  int retVal = vtk::ConvertManagedToNative<::vtkBMPReader>(m_instance)->GetDepth();
  return retVal;
}



int vtkBMPReader::CanReadFile(System::String^ fname)
{
  char* fnameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(fname).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkBMPReader>(m_instance)->CanReadFile(fnameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(fnameWrap));
  return retVal;
}



System::String^ vtkBMPReader::GetFileExtensions()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkBMPReader>(m_instance)->GetFileExtensions();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



System::String^ vtkBMPReader::GetDescriptiveName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkBMPReader>(m_instance)->GetDescriptiveName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



void vtkBMPReader::SetAllow8BitBMP(int arg0)
{
  vtk::ConvertManagedToNative<::vtkBMPReader>(m_instance)->SetAllow8BitBMP(arg0);
}



int vtkBMPReader::GetAllow8BitBMP()
{
  int retVal = vtk::ConvertManagedToNative<::vtkBMPReader>(m_instance)->GetAllow8BitBMP();
  return retVal;
}



void vtkBMPReader::Allow8BitBMPOn()
{
  vtk::ConvertManagedToNative<::vtkBMPReader>(m_instance)->Allow8BitBMPOn();
}



void vtkBMPReader::Allow8BitBMPOff()
{
  vtk::ConvertManagedToNative<::vtkBMPReader>(m_instance)->Allow8BitBMPOff();
}



vtkLookupTable^ vtkBMPReader::GetLookupTable()
{
  ::vtkLookupTable* retVal = static_cast<::vtkLookupTable*>(vtk::ConvertManagedToNative<::vtkBMPReader>(m_instance)->GetLookupTable());
  return gcnew vtkLookupTable(IntPtr(retVal), false);
}



  vtkBMPReader::vtkBMPReader(System::IntPtr native, bool bConst) : vtkImageReader(native, bConst) {}



  vtkBMPReader::vtkBMPReader(bool donothing) : vtkImageReader(donothing) {}



  vtkBMPReader::vtkBMPReader() : vtkImageReader(false) {
  this->SetNativePointer(IntPtr(::vtkBMPReader::New()));
}



  vtkBMPReader::~vtkBMPReader() { }





} // end namespace vtkIO
