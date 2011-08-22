

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkXMLUnstructuredDataReaderDotNet.h"

// native includes
#include "strstream"
#include "vtkXMLUnstructuredDataReader.h"
#include "vtkInformation.h"

using namespace System;

namespace vtk {

System::String^ vtkXMLUnstructuredDataReader::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkXMLUnstructuredDataReader>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkXMLUnstructuredDataReader::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkXMLUnstructuredDataReader>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkXMLUnstructuredDataReader^ vtkXMLUnstructuredDataReader::NewInstance()
{
  ::vtkXMLUnstructuredDataReader* retVal = static_cast<::vtkXMLUnstructuredDataReader*>(vtk::ConvertManagedToNative<::vtkXMLUnstructuredDataReader>(m_instance)->NewInstance());
  return gcnew vtkXMLUnstructuredDataReader(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkXMLUnstructuredDataReader::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkXMLUnstructuredDataReader>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkXMLUnstructuredDataReader::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkXMLUnstructuredDataReader>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




int vtkXMLUnstructuredDataReader::GetNumberOfPoints()
{
  int retVal = vtk::ConvertManagedToNative<::vtkXMLUnstructuredDataReader>(m_instance)->GetNumberOfPoints();
  return retVal;
}



int vtkXMLUnstructuredDataReader::GetNumberOfCells()
{
  int retVal = vtk::ConvertManagedToNative<::vtkXMLUnstructuredDataReader>(m_instance)->GetNumberOfCells();
  return retVal;
}



void vtkXMLUnstructuredDataReader::SetupUpdateExtent(int piece, int numberOfPieces, int ghostLevel)
{
  vtk::ConvertManagedToNative<::vtkXMLUnstructuredDataReader>(m_instance)->SetupUpdateExtent(piece, numberOfPieces, ghostLevel);
}



void vtkXMLUnstructuredDataReader::CopyOutputInformation(vtkInformation^ outInfo, int port)
{
  ::vtkInformation* outInfoWrap = vtk::ConvertManagedToNative<::vtkInformation>(outInfo->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkXMLUnstructuredDataReader>(m_instance)->CopyOutputInformation(outInfoWrap, port);
}



  vtkXMLUnstructuredDataReader::vtkXMLUnstructuredDataReader(System::IntPtr native, bool bConst) : vtkXMLDataReader(native, bConst) {}



  vtkXMLUnstructuredDataReader::vtkXMLUnstructuredDataReader(bool donothing) : vtkXMLDataReader(donothing) {}



  vtkXMLUnstructuredDataReader::vtkXMLUnstructuredDataReader() : vtkXMLDataReader(false) {
  this->SetNativePointer(IntPtr(::vtkXMLUnstructuredDataReader::New()));
}



  vtkXMLUnstructuredDataReader::~vtkXMLUnstructuredDataReader() { }





} // end namespace vtkIO
