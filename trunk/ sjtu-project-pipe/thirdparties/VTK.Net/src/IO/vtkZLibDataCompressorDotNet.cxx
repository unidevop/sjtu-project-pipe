

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkZLibDataCompressorDotNet.h"

// native includes
#include "strstream"
#include "vtkZLibDataCompressor.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkZLibDataCompressor::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkZLibDataCompressor>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkZLibDataCompressor::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkZLibDataCompressor>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkZLibDataCompressor^ vtkZLibDataCompressor::NewInstance()
{
  ::vtkZLibDataCompressor* retVal = static_cast<::vtkZLibDataCompressor*>(vtk::ConvertManagedToNative<::vtkZLibDataCompressor>(m_instance)->NewInstance());
  return gcnew vtkZLibDataCompressor(IntPtr(retVal), false);
}



vtkZLibDataCompressor^ vtkZLibDataCompressor::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkZLibDataCompressor* retVal = static_cast<::vtkZLibDataCompressor*>(::vtkZLibDataCompressor::SafeDownCast(oWrap));
  return gcnew vtkZLibDataCompressor(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkZLibDataCompressor::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkZLibDataCompressor>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkZLibDataCompressor::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkZLibDataCompressor>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




unsigned long vtkZLibDataCompressor::GetMaximumCompressionSpace(unsigned long size)
{
  unsigned long retVal = vtk::ConvertManagedToNative<::vtkZLibDataCompressor>(m_instance)->GetMaximumCompressionSpace(size);
  return retVal;
}



void vtkZLibDataCompressor::SetCompressionLevel(int arg0)
{
  vtk::ConvertManagedToNative<::vtkZLibDataCompressor>(m_instance)->SetCompressionLevel(arg0);
}



int vtkZLibDataCompressor::GetCompressionLevelMinValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkZLibDataCompressor>(m_instance)->GetCompressionLevelMinValue();
  return retVal;
}



int vtkZLibDataCompressor::GetCompressionLevelMaxValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkZLibDataCompressor>(m_instance)->GetCompressionLevelMaxValue();
  return retVal;
}



int vtkZLibDataCompressor::GetCompressionLevel()
{
  int retVal = vtk::ConvertManagedToNative<::vtkZLibDataCompressor>(m_instance)->GetCompressionLevel();
  return retVal;
}



  vtkZLibDataCompressor::vtkZLibDataCompressor(System::IntPtr native, bool bConst) : vtkDataCompressor(native, bConst) {}



  vtkZLibDataCompressor::vtkZLibDataCompressor(bool donothing) : vtkDataCompressor(donothing) {}



  vtkZLibDataCompressor::vtkZLibDataCompressor() : vtkDataCompressor(false) {
  this->SetNativePointer(IntPtr(::vtkZLibDataCompressor::New()));
}



  vtkZLibDataCompressor::~vtkZLibDataCompressor() { }





} // end namespace vtkIO
