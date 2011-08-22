

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkGAMBITReaderDotNet.h"

// native includes
#include "strstream"
#include "vtkGAMBITReader.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkGAMBITReader::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkGAMBITReader>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkGAMBITReader::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkGAMBITReader>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkGAMBITReader^ vtkGAMBITReader::NewInstance()
{
  ::vtkGAMBITReader* retVal = static_cast<::vtkGAMBITReader*>(vtk::ConvertManagedToNative<::vtkGAMBITReader>(m_instance)->NewInstance());
  return gcnew vtkGAMBITReader(IntPtr(retVal), false);
}



vtkGAMBITReader^ vtkGAMBITReader::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkGAMBITReader* retVal = static_cast<::vtkGAMBITReader*>(::vtkGAMBITReader::SafeDownCast(oWrap));
  return gcnew vtkGAMBITReader(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkGAMBITReader::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkGAMBITReader>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkGAMBITReader::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkGAMBITReader>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkGAMBITReader::SetFileName(System::String^ arg0)
{
  char* arg0Wrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(arg0).ToPointer());
  vtk::ConvertManagedToNative<::vtkGAMBITReader>(m_instance)->SetFileName(arg0Wrap);
  arg0->Remove(0,arg0->Length);
  arg0->Insert(0,System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(arg0Wrap)));
System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(arg0Wrap));
}



System::String^ vtkGAMBITReader::GetFileName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkGAMBITReader>(m_instance)->GetFileName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkGAMBITReader::GetNumberOfCells()
{
  int retVal = vtk::ConvertManagedToNative<::vtkGAMBITReader>(m_instance)->GetNumberOfCells();
  return retVal;
}



int vtkGAMBITReader::GetNumberOfNodes()
{
  int retVal = vtk::ConvertManagedToNative<::vtkGAMBITReader>(m_instance)->GetNumberOfNodes();
  return retVal;
}



int vtkGAMBITReader::GetNumberOfNodeFields()
{
  int retVal = vtk::ConvertManagedToNative<::vtkGAMBITReader>(m_instance)->GetNumberOfNodeFields();
  return retVal;
}



int vtkGAMBITReader::GetNumberOfCellFields()
{
  int retVal = vtk::ConvertManagedToNative<::vtkGAMBITReader>(m_instance)->GetNumberOfCellFields();
  return retVal;
}



  vtkGAMBITReader::vtkGAMBITReader(System::IntPtr native, bool bConst) : vtkUnstructuredGridAlgorithm(native, bConst) {}



  vtkGAMBITReader::vtkGAMBITReader(bool donothing) : vtkUnstructuredGridAlgorithm(donothing) {}



  vtkGAMBITReader::vtkGAMBITReader() : vtkUnstructuredGridAlgorithm(false) {
  this->SetNativePointer(IntPtr(::vtkGAMBITReader::New()));
}



  vtkGAMBITReader::~vtkGAMBITReader() { }





} // end namespace vtkIO
