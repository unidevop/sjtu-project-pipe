

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkXMLPolyDataReaderDotNet.h"

// native includes
#include "strstream"
#include "vtkXMLPolyDataReader.h"
#include "vtkObject.h"
#include "vtkPolyData.h"

using namespace System;

namespace vtk {

System::String^ vtkXMLPolyDataReader::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkXMLPolyDataReader>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkXMLPolyDataReader::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkXMLPolyDataReader>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkXMLPolyDataReader^ vtkXMLPolyDataReader::NewInstance()
{
  ::vtkXMLPolyDataReader* retVal = static_cast<::vtkXMLPolyDataReader*>(vtk::ConvertManagedToNative<::vtkXMLPolyDataReader>(m_instance)->NewInstance());
  return gcnew vtkXMLPolyDataReader(IntPtr(retVal), false);
}



vtkXMLPolyDataReader^ vtkXMLPolyDataReader::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkXMLPolyDataReader* retVal = static_cast<::vtkXMLPolyDataReader*>(::vtkXMLPolyDataReader::SafeDownCast(oWrap));
  return gcnew vtkXMLPolyDataReader(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkXMLPolyDataReader::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkXMLPolyDataReader>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkXMLPolyDataReader::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkXMLPolyDataReader>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkXMLPolyDataReader::SetOutput(vtkPolyData^ output)
{
  ::vtkPolyData* outputWrap = vtk::ConvertManagedToNative<::vtkPolyData>(output->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkXMLPolyDataReader>(m_instance)->SetOutput(outputWrap);
}



vtkPolyData^ vtkXMLPolyDataReader::GetOutput()
{
  ::vtkPolyData* retVal = static_cast<::vtkPolyData*>(vtk::ConvertManagedToNative<::vtkXMLPolyDataReader>(m_instance)->GetOutput());
  return gcnew vtkPolyData(IntPtr(retVal), false);
}



vtkPolyData^ vtkXMLPolyDataReader::GetOutput(int idx)
{
  ::vtkPolyData* retVal = static_cast<::vtkPolyData*>(vtk::ConvertManagedToNative<::vtkXMLPolyDataReader>(m_instance)->GetOutput(idx));
  return gcnew vtkPolyData(IntPtr(retVal), false);
}



int vtkXMLPolyDataReader::GetNumberOfVerts()
{
  int retVal = vtk::ConvertManagedToNative<::vtkXMLPolyDataReader>(m_instance)->GetNumberOfVerts();
  return retVal;
}



int vtkXMLPolyDataReader::GetNumberOfLines()
{
  int retVal = vtk::ConvertManagedToNative<::vtkXMLPolyDataReader>(m_instance)->GetNumberOfLines();
  return retVal;
}



int vtkXMLPolyDataReader::GetNumberOfStrips()
{
  int retVal = vtk::ConvertManagedToNative<::vtkXMLPolyDataReader>(m_instance)->GetNumberOfStrips();
  return retVal;
}



int vtkXMLPolyDataReader::GetNumberOfPolys()
{
  int retVal = vtk::ConvertManagedToNative<::vtkXMLPolyDataReader>(m_instance)->GetNumberOfPolys();
  return retVal;
}



  vtkXMLPolyDataReader::vtkXMLPolyDataReader(System::IntPtr native, bool bConst) : vtkXMLUnstructuredDataReader(native, bConst) {}



  vtkXMLPolyDataReader::vtkXMLPolyDataReader(bool donothing) : vtkXMLUnstructuredDataReader(donothing) {}



  vtkXMLPolyDataReader::vtkXMLPolyDataReader() : vtkXMLUnstructuredDataReader(false) {
  this->SetNativePointer(IntPtr(::vtkXMLPolyDataReader::New()));
}



  vtkXMLPolyDataReader::~vtkXMLPolyDataReader() { }





} // end namespace vtkIO
