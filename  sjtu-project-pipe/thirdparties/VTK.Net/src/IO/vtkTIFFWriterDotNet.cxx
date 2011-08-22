

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkTIFFWriterDotNet.h"

// native includes
#include "strstream"
#include "vtkTIFFWriter.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkTIFFWriter::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkTIFFWriter>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkTIFFWriter::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkTIFFWriter>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkTIFFWriter^ vtkTIFFWriter::NewInstance()
{
  ::vtkTIFFWriter* retVal = static_cast<::vtkTIFFWriter*>(vtk::ConvertManagedToNative<::vtkTIFFWriter>(m_instance)->NewInstance());
  return gcnew vtkTIFFWriter(IntPtr(retVal), false);
}



vtkTIFFWriter^ vtkTIFFWriter::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkTIFFWriter* retVal = static_cast<::vtkTIFFWriter*>(::vtkTIFFWriter::SafeDownCast(oWrap));
  return gcnew vtkTIFFWriter(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkTIFFWriter::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkTIFFWriter>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkTIFFWriter::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkTIFFWriter>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkTIFFWriter::SetCompression(int arg0)
{
  vtk::ConvertManagedToNative<::vtkTIFFWriter>(m_instance)->SetCompression(arg0);
}



int vtkTIFFWriter::GetCompressionMinValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkTIFFWriter>(m_instance)->GetCompressionMinValue();
  return retVal;
}



int vtkTIFFWriter::GetCompressionMaxValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkTIFFWriter>(m_instance)->GetCompressionMaxValue();
  return retVal;
}



int vtkTIFFWriter::GetCompression()
{
  int retVal = vtk::ConvertManagedToNative<::vtkTIFFWriter>(m_instance)->GetCompression();
  return retVal;
}



void vtkTIFFWriter::SetCompressionToNoCompression()
{
  vtk::ConvertManagedToNative<::vtkTIFFWriter>(m_instance)->SetCompressionToNoCompression();
}



void vtkTIFFWriter::SetCompressionToPackBits()
{
  vtk::ConvertManagedToNative<::vtkTIFFWriter>(m_instance)->SetCompressionToPackBits();
}



void vtkTIFFWriter::SetCompressionToJPEG()
{
  vtk::ConvertManagedToNative<::vtkTIFFWriter>(m_instance)->SetCompressionToJPEG();
}



void vtkTIFFWriter::SetCompressionToDeflate()
{
  vtk::ConvertManagedToNative<::vtkTIFFWriter>(m_instance)->SetCompressionToDeflate();
}



void vtkTIFFWriter::SetCompressionToLZW()
{
  vtk::ConvertManagedToNative<::vtkTIFFWriter>(m_instance)->SetCompressionToLZW();
}



  vtkTIFFWriter::vtkTIFFWriter(System::IntPtr native, bool bConst) : vtkImageWriter(native, bConst) {}



  vtkTIFFWriter::vtkTIFFWriter(bool donothing) : vtkImageWriter(donothing) {}



  vtkTIFFWriter::vtkTIFFWriter() : vtkImageWriter(false) {
  this->SetNativePointer(IntPtr(::vtkTIFFWriter::New()));
}



  vtkTIFFWriter::~vtkTIFFWriter() { }





} // end namespace vtkIO
