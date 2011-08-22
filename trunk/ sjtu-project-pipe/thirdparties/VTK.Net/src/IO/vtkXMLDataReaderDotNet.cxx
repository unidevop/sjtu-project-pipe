

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkXMLDataReaderDotNet.h"

// native includes
#include "strstream"
#include "vtkXMLDataReader.h"
#include "vtkInformation.h"

using namespace System;

namespace vtk {

System::String^ vtkXMLDataReader::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkXMLDataReader>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkXMLDataReader::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkXMLDataReader>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkXMLDataReader^ vtkXMLDataReader::NewInstance()
{
  ::vtkXMLDataReader* retVal = static_cast<::vtkXMLDataReader*>(vtk::ConvertManagedToNative<::vtkXMLDataReader>(m_instance)->NewInstance());
  return gcnew vtkXMLDataReader(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkXMLDataReader::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkXMLDataReader>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkXMLDataReader::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkXMLDataReader>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




int vtkXMLDataReader::GetNumberOfPoints()
{
  int retVal = vtk::ConvertManagedToNative<::vtkXMLDataReader>(m_instance)->GetNumberOfPoints();
  return retVal;
}



int vtkXMLDataReader::GetNumberOfCells()
{
  int retVal = vtk::ConvertManagedToNative<::vtkXMLDataReader>(m_instance)->GetNumberOfCells();
  return retVal;
}



void vtkXMLDataReader::CopyOutputInformation(vtkInformation^ outInfo, int port)
{
  ::vtkInformation* outInfoWrap = vtk::ConvertManagedToNative<::vtkInformation>(outInfo->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkXMLDataReader>(m_instance)->CopyOutputInformation(outInfoWrap, port);
}



  vtkXMLDataReader::vtkXMLDataReader(System::IntPtr native, bool bConst) : vtkXMLReader(native, bConst) {}



  vtkXMLDataReader::vtkXMLDataReader(bool donothing) : vtkXMLReader(donothing) {}



  vtkXMLDataReader::vtkXMLDataReader() : vtkXMLReader(false) {
  this->SetNativePointer(IntPtr(::vtkXMLDataReader::New()));
}



  vtkXMLDataReader::~vtkXMLDataReader() { }





} // end namespace vtkIO
