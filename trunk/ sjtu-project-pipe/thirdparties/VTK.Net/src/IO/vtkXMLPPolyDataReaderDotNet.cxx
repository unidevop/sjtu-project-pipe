

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkXMLPPolyDataReaderDotNet.h"

// native includes
#include "strstream"
#include "vtkXMLPPolyDataReader.h"
#include "vtkObject.h"
#include "vtkPolyData.h"

using namespace System;

namespace vtk {

System::String^ vtkXMLPPolyDataReader::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkXMLPPolyDataReader>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkXMLPPolyDataReader::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkXMLPPolyDataReader>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkXMLPPolyDataReader^ vtkXMLPPolyDataReader::NewInstance()
{
  ::vtkXMLPPolyDataReader* retVal = static_cast<::vtkXMLPPolyDataReader*>(vtk::ConvertManagedToNative<::vtkXMLPPolyDataReader>(m_instance)->NewInstance());
  return gcnew vtkXMLPPolyDataReader(IntPtr(retVal), false);
}



vtkXMLPPolyDataReader^ vtkXMLPPolyDataReader::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkXMLPPolyDataReader* retVal = static_cast<::vtkXMLPPolyDataReader*>(::vtkXMLPPolyDataReader::SafeDownCast(oWrap));
  return gcnew vtkXMLPPolyDataReader(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkXMLPPolyDataReader::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkXMLPPolyDataReader>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkXMLPPolyDataReader::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkXMLPPolyDataReader>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkXMLPPolyDataReader::SetOutput(vtkPolyData^ output)
{
  ::vtkPolyData* outputWrap = vtk::ConvertManagedToNative<::vtkPolyData>(output->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkXMLPPolyDataReader>(m_instance)->SetOutput(outputWrap);
}



vtkPolyData^ vtkXMLPPolyDataReader::GetOutput()
{
  ::vtkPolyData* retVal = static_cast<::vtkPolyData*>(vtk::ConvertManagedToNative<::vtkXMLPPolyDataReader>(m_instance)->GetOutput());
  return gcnew vtkPolyData(IntPtr(retVal), false);
}



vtkPolyData^ vtkXMLPPolyDataReader::GetOutput(int idx)
{
  ::vtkPolyData* retVal = static_cast<::vtkPolyData*>(vtk::ConvertManagedToNative<::vtkXMLPPolyDataReader>(m_instance)->GetOutput(idx));
  return gcnew vtkPolyData(IntPtr(retVal), false);
}



  vtkXMLPPolyDataReader::vtkXMLPPolyDataReader(System::IntPtr native, bool bConst) : vtkXMLPUnstructuredDataReader(native, bConst) {}



  vtkXMLPPolyDataReader::vtkXMLPPolyDataReader(bool donothing) : vtkXMLPUnstructuredDataReader(donothing) {}



  vtkXMLPPolyDataReader::vtkXMLPPolyDataReader() : vtkXMLPUnstructuredDataReader(false) {
  this->SetNativePointer(IntPtr(::vtkXMLPPolyDataReader::New()));
}



  vtkXMLPPolyDataReader::~vtkXMLPPolyDataReader() { }





} // end namespace vtkIO
