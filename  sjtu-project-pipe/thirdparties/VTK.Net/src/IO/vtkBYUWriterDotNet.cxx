

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkBYUWriterDotNet.h"

// native includes
#include "strstream"
#include "vtkBYUWriter.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkBYUWriter::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkBYUWriter>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkBYUWriter::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkBYUWriter>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkBYUWriter^ vtkBYUWriter::NewInstance()
{
  ::vtkBYUWriter* retVal = static_cast<::vtkBYUWriter*>(vtk::ConvertManagedToNative<::vtkBYUWriter>(m_instance)->NewInstance());
  return gcnew vtkBYUWriter(IntPtr(retVal), false);
}



vtkBYUWriter^ vtkBYUWriter::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkBYUWriter* retVal = static_cast<::vtkBYUWriter*>(::vtkBYUWriter::SafeDownCast(oWrap));
  return gcnew vtkBYUWriter(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkBYUWriter::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkBYUWriter>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkBYUWriter::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkBYUWriter>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkBYUWriter::SetGeometryFileName(System::String^ arg0)
{
  char* arg0Wrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(arg0).ToPointer());
  vtk::ConvertManagedToNative<::vtkBYUWriter>(m_instance)->SetGeometryFileName(arg0Wrap);
  arg0->Remove(0,arg0->Length);
  arg0->Insert(0,System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(arg0Wrap)));
System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(arg0Wrap));
}



System::String^ vtkBYUWriter::GetGeometryFileName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkBYUWriter>(m_instance)->GetGeometryFileName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



void vtkBYUWriter::SetDisplacementFileName(System::String^ arg0)
{
  char* arg0Wrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(arg0).ToPointer());
  vtk::ConvertManagedToNative<::vtkBYUWriter>(m_instance)->SetDisplacementFileName(arg0Wrap);
  arg0->Remove(0,arg0->Length);
  arg0->Insert(0,System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(arg0Wrap)));
System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(arg0Wrap));
}



System::String^ vtkBYUWriter::GetDisplacementFileName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkBYUWriter>(m_instance)->GetDisplacementFileName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



void vtkBYUWriter::SetScalarFileName(System::String^ arg0)
{
  char* arg0Wrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(arg0).ToPointer());
  vtk::ConvertManagedToNative<::vtkBYUWriter>(m_instance)->SetScalarFileName(arg0Wrap);
  arg0->Remove(0,arg0->Length);
  arg0->Insert(0,System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(arg0Wrap)));
System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(arg0Wrap));
}



System::String^ vtkBYUWriter::GetScalarFileName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkBYUWriter>(m_instance)->GetScalarFileName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



void vtkBYUWriter::SetTextureFileName(System::String^ arg0)
{
  char* arg0Wrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(arg0).ToPointer());
  vtk::ConvertManagedToNative<::vtkBYUWriter>(m_instance)->SetTextureFileName(arg0Wrap);
  arg0->Remove(0,arg0->Length);
  arg0->Insert(0,System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(arg0Wrap)));
System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(arg0Wrap));
}



System::String^ vtkBYUWriter::GetTextureFileName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkBYUWriter>(m_instance)->GetTextureFileName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



void vtkBYUWriter::SetWriteDisplacement(int arg0)
{
  vtk::ConvertManagedToNative<::vtkBYUWriter>(m_instance)->SetWriteDisplacement(arg0);
}



int vtkBYUWriter::GetWriteDisplacement()
{
  int retVal = vtk::ConvertManagedToNative<::vtkBYUWriter>(m_instance)->GetWriteDisplacement();
  return retVal;
}



void vtkBYUWriter::WriteDisplacementOn()
{
  vtk::ConvertManagedToNative<::vtkBYUWriter>(m_instance)->WriteDisplacementOn();
}



void vtkBYUWriter::WriteDisplacementOff()
{
  vtk::ConvertManagedToNative<::vtkBYUWriter>(m_instance)->WriteDisplacementOff();
}



void vtkBYUWriter::SetWriteScalar(int arg0)
{
  vtk::ConvertManagedToNative<::vtkBYUWriter>(m_instance)->SetWriteScalar(arg0);
}



int vtkBYUWriter::GetWriteScalar()
{
  int retVal = vtk::ConvertManagedToNative<::vtkBYUWriter>(m_instance)->GetWriteScalar();
  return retVal;
}



void vtkBYUWriter::WriteScalarOn()
{
  vtk::ConvertManagedToNative<::vtkBYUWriter>(m_instance)->WriteScalarOn();
}



void vtkBYUWriter::WriteScalarOff()
{
  vtk::ConvertManagedToNative<::vtkBYUWriter>(m_instance)->WriteScalarOff();
}



void vtkBYUWriter::SetWriteTexture(int arg0)
{
  vtk::ConvertManagedToNative<::vtkBYUWriter>(m_instance)->SetWriteTexture(arg0);
}



int vtkBYUWriter::GetWriteTexture()
{
  int retVal = vtk::ConvertManagedToNative<::vtkBYUWriter>(m_instance)->GetWriteTexture();
  return retVal;
}



void vtkBYUWriter::WriteTextureOn()
{
  vtk::ConvertManagedToNative<::vtkBYUWriter>(m_instance)->WriteTextureOn();
}



void vtkBYUWriter::WriteTextureOff()
{
  vtk::ConvertManagedToNative<::vtkBYUWriter>(m_instance)->WriteTextureOff();
}



  vtkBYUWriter::vtkBYUWriter(System::IntPtr native, bool bConst) : vtkPolyDataWriter(native, bConst) {}



  vtkBYUWriter::vtkBYUWriter(bool donothing) : vtkPolyDataWriter(donothing) {}



  vtkBYUWriter::vtkBYUWriter() : vtkPolyDataWriter(false) {
  this->SetNativePointer(IntPtr(::vtkBYUWriter::New()));
}



  vtkBYUWriter::~vtkBYUWriter() { }





} // end namespace vtkIO
