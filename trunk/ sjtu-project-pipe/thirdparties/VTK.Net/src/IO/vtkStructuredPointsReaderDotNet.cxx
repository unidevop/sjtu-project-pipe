

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkStructuredPointsReaderDotNet.h"

// native includes
#include "strstream"
#include "vtkStructuredPointsReader.h"
#include "vtkInformation.h"
#include "vtkObject.h"
#include "vtkStructuredPoints.h"

using namespace System;

namespace vtk {

System::String^ vtkStructuredPointsReader::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkStructuredPointsReader>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkStructuredPointsReader::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkStructuredPointsReader>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkStructuredPointsReader^ vtkStructuredPointsReader::NewInstance()
{
  ::vtkStructuredPointsReader* retVal = static_cast<::vtkStructuredPointsReader*>(vtk::ConvertManagedToNative<::vtkStructuredPointsReader>(m_instance)->NewInstance());
  return gcnew vtkStructuredPointsReader(IntPtr(retVal), false);
}



vtkStructuredPointsReader^ vtkStructuredPointsReader::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkStructuredPointsReader* retVal = static_cast<::vtkStructuredPointsReader*>(::vtkStructuredPointsReader::SafeDownCast(oWrap));
  return gcnew vtkStructuredPointsReader(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkStructuredPointsReader::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkStructuredPointsReader>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkStructuredPointsReader::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkStructuredPointsReader>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkStructuredPointsReader::SetOutput(vtkStructuredPoints^ output)
{
  ::vtkStructuredPoints* outputWrap = vtk::ConvertManagedToNative<::vtkStructuredPoints>(output->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkStructuredPointsReader>(m_instance)->SetOutput(outputWrap);
}



vtkStructuredPoints^ vtkStructuredPointsReader::GetOutput(int idx)
{
  ::vtkStructuredPoints* retVal = static_cast<::vtkStructuredPoints*>(vtk::ConvertManagedToNative<::vtkStructuredPointsReader>(m_instance)->GetOutput(idx));
  return gcnew vtkStructuredPoints(IntPtr(retVal), false);
}



vtkStructuredPoints^ vtkStructuredPointsReader::GetOutput()
{
  ::vtkStructuredPoints* retVal = static_cast<::vtkStructuredPoints*>(vtk::ConvertManagedToNative<::vtkStructuredPointsReader>(m_instance)->GetOutput());
  return gcnew vtkStructuredPoints(IntPtr(retVal), false);
}



int vtkStructuredPointsReader::ReadMetaData(vtkInformation^ outInfo)
{
  ::vtkInformation* outInfoWrap = vtk::ConvertManagedToNative<::vtkInformation>(outInfo->GetNativePointer());
  int retVal = vtk::ConvertManagedToNative<::vtkStructuredPointsReader>(m_instance)->ReadMetaData(outInfoWrap);
  return retVal;
}



  vtkStructuredPointsReader::vtkStructuredPointsReader(System::IntPtr native, bool bConst) : vtkDataReader(native, bConst) {}



  vtkStructuredPointsReader::vtkStructuredPointsReader(bool donothing) : vtkDataReader(donothing) {}



  vtkStructuredPointsReader::vtkStructuredPointsReader() : vtkDataReader(false) {
  this->SetNativePointer(IntPtr(::vtkStructuredPointsReader::New()));
}



  vtkStructuredPointsReader::~vtkStructuredPointsReader() { }





} // end namespace vtkIO
