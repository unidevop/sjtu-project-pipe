

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkWriterDotNet.h"

// native includes
#include "strstream"
#include "vtkWriter.h"
#include "vtkDataObject.h"

using namespace System;

namespace vtk {

System::String^ vtkWriter::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkWriter>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkWriter::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkWriter>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkWriter^ vtkWriter::NewInstance()
{
  ::vtkWriter* retVal = static_cast<::vtkWriter*>(vtk::ConvertManagedToNative<::vtkWriter>(m_instance)->NewInstance());
  return gcnew vtkWriter(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkWriter::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkWriter>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkWriter::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkWriter>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




int vtkWriter::Write()
{
  int retVal = vtk::ConvertManagedToNative<::vtkWriter>(m_instance)->Write();
  return retVal;
}



void vtkWriter::EncodeArrayName(System::String^ resname, System::String^ name)
{
  char* resnameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(resname).ToPointer());
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  vtk::ConvertManagedToNative<::vtkWriter>(m_instance)->EncodeArrayName(resnameWrap, nameWrap);
  resname->Remove(0,resname->Length);
  resname->Insert(0,System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(resnameWrap)));
System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(resnameWrap));
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
}



void vtkWriter::SetInput(vtkDataObject^ input)
{
  ::vtkDataObject* inputWrap = vtk::ConvertManagedToNative<::vtkDataObject>(input->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkWriter>(m_instance)->SetInput(inputWrap);
}



void vtkWriter::SetInput(int index, vtkDataObject^ input)
{
  ::vtkDataObject* inputWrap = vtk::ConvertManagedToNative<::vtkDataObject>(input->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkWriter>(m_instance)->SetInput(index, inputWrap);
}



  vtkWriter::vtkWriter(System::IntPtr native, bool bConst) : vtkAlgorithm(native, bConst) {}



  vtkWriter::vtkWriter(bool donothing) : vtkAlgorithm(donothing) {}



  vtkWriter::vtkWriter() : vtkAlgorithm(false) {
  this->SetNativePointer(IntPtr(::vtkWriter::New()));
}



  vtkWriter::~vtkWriter() { }





} // end namespace vtkIO
