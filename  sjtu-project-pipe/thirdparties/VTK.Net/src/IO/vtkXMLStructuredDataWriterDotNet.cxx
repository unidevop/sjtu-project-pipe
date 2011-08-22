

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkXMLStructuredDataWriterDotNet.h"

// native includes
#include "strstream"
#include "vtkXMLStructuredDataWriter.h"
#include "vtkExtentTranslator.h"

using namespace System;

namespace vtk {

System::String^ vtkXMLStructuredDataWriter::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkXMLStructuredDataWriter>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkXMLStructuredDataWriter::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkXMLStructuredDataWriter>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkXMLStructuredDataWriter^ vtkXMLStructuredDataWriter::NewInstance()
{
  ::vtkXMLStructuredDataWriter* retVal = static_cast<::vtkXMLStructuredDataWriter*>(vtk::ConvertManagedToNative<::vtkXMLStructuredDataWriter>(m_instance)->NewInstance());
  return gcnew vtkXMLStructuredDataWriter(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkXMLStructuredDataWriter::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkXMLStructuredDataWriter>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkXMLStructuredDataWriter::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkXMLStructuredDataWriter>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkXMLStructuredDataWriter::SetNumberOfPieces(int arg0)
{
  vtk::ConvertManagedToNative<::vtkXMLStructuredDataWriter>(m_instance)->SetNumberOfPieces(arg0);
}



int vtkXMLStructuredDataWriter::GetNumberOfPieces()
{
  int retVal = vtk::ConvertManagedToNative<::vtkXMLStructuredDataWriter>(m_instance)->GetNumberOfPieces();
  return retVal;
}



void vtkXMLStructuredDataWriter::SetWriteExtent(int arg0, int arg1, int arg2, int arg3, int arg4, int arg5)
{
  vtk::ConvertManagedToNative<::vtkXMLStructuredDataWriter>(m_instance)->SetWriteExtent(arg0, arg1, arg2, arg3, arg4, arg5);
}



void vtkXMLStructuredDataWriter::SetWriteExtent(array<int>^ a)
{
  pin_ptr<int> aPin = &a[0];
  int* nativeaPin = aPin;
  vtk::ConvertManagedToNative<::vtkXMLStructuredDataWriter>(m_instance)->SetWriteExtent(nativeaPin);
}



array<int>^ vtkXMLStructuredDataWriter::GetWriteExtent()
{
  const int* retVal = vtk::ConvertManagedToNative<::vtkXMLStructuredDataWriter>(m_instance)->GetWriteExtent();
  array<int>^ mRetVal = gcnew array<int>(6);
  for (size_t cprIdx=0; cprIdx<6; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



void vtkXMLStructuredDataWriter::SetExtentTranslator(vtkExtentTranslator^ arg0)
{
  ::vtkExtentTranslator* arg0Wrap = vtk::ConvertManagedToNative<::vtkExtentTranslator>(arg0->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkXMLStructuredDataWriter>(m_instance)->SetExtentTranslator(arg0Wrap);
}



vtkExtentTranslator^ vtkXMLStructuredDataWriter::GetExtentTranslator()
{
  ::vtkExtentTranslator* retVal = static_cast<::vtkExtentTranslator*>(vtk::ConvertManagedToNative<::vtkXMLStructuredDataWriter>(m_instance)->GetExtentTranslator());
  return gcnew vtkExtentTranslator(IntPtr(retVal), false);
}



  vtkXMLStructuredDataWriter::vtkXMLStructuredDataWriter(System::IntPtr native, bool bConst) : vtkXMLWriter(native, bConst) {}



  vtkXMLStructuredDataWriter::vtkXMLStructuredDataWriter(bool donothing) : vtkXMLWriter(donothing) {}



  vtkXMLStructuredDataWriter::vtkXMLStructuredDataWriter() : vtkXMLWriter(false) {
  this->SetNativePointer(IntPtr(::vtkXMLStructuredDataWriter::New()));
}



  vtkXMLStructuredDataWriter::~vtkXMLStructuredDataWriter() { }





} // end namespace vtkIO
