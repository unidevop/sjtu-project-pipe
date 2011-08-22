

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkXMLStructuredDataReaderDotNet.h"

// native includes
#include "strstream"
#include "vtkXMLStructuredDataReader.h"
#include "vtkInformation.h"

using namespace System;

namespace vtk {

System::String^ vtkXMLStructuredDataReader::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkXMLStructuredDataReader>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkXMLStructuredDataReader::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkXMLStructuredDataReader>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkXMLStructuredDataReader^ vtkXMLStructuredDataReader::NewInstance()
{
  ::vtkXMLStructuredDataReader* retVal = static_cast<::vtkXMLStructuredDataReader*>(vtk::ConvertManagedToNative<::vtkXMLStructuredDataReader>(m_instance)->NewInstance());
  return gcnew vtkXMLStructuredDataReader(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkXMLStructuredDataReader::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkXMLStructuredDataReader>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkXMLStructuredDataReader::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkXMLStructuredDataReader>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




int vtkXMLStructuredDataReader::GetNumberOfPoints()
{
  int retVal = vtk::ConvertManagedToNative<::vtkXMLStructuredDataReader>(m_instance)->GetNumberOfPoints();
  return retVal;
}



int vtkXMLStructuredDataReader::GetNumberOfCells()
{
  int retVal = vtk::ConvertManagedToNative<::vtkXMLStructuredDataReader>(m_instance)->GetNumberOfCells();
  return retVal;
}



void vtkXMLStructuredDataReader::SetWholeSlices(int arg0)
{
  vtk::ConvertManagedToNative<::vtkXMLStructuredDataReader>(m_instance)->SetWholeSlices(arg0);
}



int vtkXMLStructuredDataReader::GetWholeSlices()
{
  int retVal = vtk::ConvertManagedToNative<::vtkXMLStructuredDataReader>(m_instance)->GetWholeSlices();
  return retVal;
}



void vtkXMLStructuredDataReader::WholeSlicesOn()
{
  vtk::ConvertManagedToNative<::vtkXMLStructuredDataReader>(m_instance)->WholeSlicesOn();
}



void vtkXMLStructuredDataReader::WholeSlicesOff()
{
  vtk::ConvertManagedToNative<::vtkXMLStructuredDataReader>(m_instance)->WholeSlicesOff();
}



void vtkXMLStructuredDataReader::CopyOutputInformation(vtkInformation^ outInfo, int port)
{
  ::vtkInformation* outInfoWrap = vtk::ConvertManagedToNative<::vtkInformation>(outInfo->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkXMLStructuredDataReader>(m_instance)->CopyOutputInformation(outInfoWrap, port);
}



  vtkXMLStructuredDataReader::vtkXMLStructuredDataReader(System::IntPtr native, bool bConst) : vtkXMLDataReader(native, bConst) {}



  vtkXMLStructuredDataReader::vtkXMLStructuredDataReader(bool donothing) : vtkXMLDataReader(donothing) {}



  vtkXMLStructuredDataReader::vtkXMLStructuredDataReader() : vtkXMLDataReader(false) {
  this->SetNativePointer(IntPtr(::vtkXMLStructuredDataReader::New()));
}



  vtkXMLStructuredDataReader::~vtkXMLStructuredDataReader() { }





} // end namespace vtkIO
