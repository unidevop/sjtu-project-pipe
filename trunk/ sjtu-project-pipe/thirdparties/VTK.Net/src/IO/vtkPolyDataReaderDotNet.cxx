

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkPolyDataReaderDotNet.h"

// native includes
#include "strstream"
#include "vtkPolyDataReader.h"
#include "vtkObject.h"
#include "vtkPolyData.h"

using namespace System;

namespace vtk {

System::String^ vtkPolyDataReader::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkPolyDataReader>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkPolyDataReader::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkPolyDataReader>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkPolyDataReader^ vtkPolyDataReader::NewInstance()
{
  ::vtkPolyDataReader* retVal = static_cast<::vtkPolyDataReader*>(vtk::ConvertManagedToNative<::vtkPolyDataReader>(m_instance)->NewInstance());
  return gcnew vtkPolyDataReader(IntPtr(retVal), false);
}



vtkPolyDataReader^ vtkPolyDataReader::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkPolyDataReader* retVal = static_cast<::vtkPolyDataReader*>(::vtkPolyDataReader::SafeDownCast(oWrap));
  return gcnew vtkPolyDataReader(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkPolyDataReader::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkPolyDataReader>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkPolyDataReader::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkPolyDataReader>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




vtkPolyData^ vtkPolyDataReader::GetOutput()
{
  ::vtkPolyData* retVal = static_cast<::vtkPolyData*>(vtk::ConvertManagedToNative<::vtkPolyDataReader>(m_instance)->GetOutput());
  return gcnew vtkPolyData(IntPtr(retVal), false);
}



vtkPolyData^ vtkPolyDataReader::GetOutput(int idx)
{
  ::vtkPolyData* retVal = static_cast<::vtkPolyData*>(vtk::ConvertManagedToNative<::vtkPolyDataReader>(m_instance)->GetOutput(idx));
  return gcnew vtkPolyData(IntPtr(retVal), false);
}



void vtkPolyDataReader::SetOutput(vtkPolyData^ output)
{
  ::vtkPolyData* outputWrap = vtk::ConvertManagedToNative<::vtkPolyData>(output->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkPolyDataReader>(m_instance)->SetOutput(outputWrap);
}



  vtkPolyDataReader::vtkPolyDataReader(System::IntPtr native, bool bConst) : vtkDataReader(native, bConst) {}



  vtkPolyDataReader::vtkPolyDataReader(bool donothing) : vtkDataReader(donothing) {}



  vtkPolyDataReader::vtkPolyDataReader() : vtkDataReader(false) {
  this->SetNativePointer(IntPtr(::vtkPolyDataReader::New()));
}



  vtkPolyDataReader::~vtkPolyDataReader() { }





} // end namespace vtkIO
