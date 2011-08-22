

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkBYUReaderDotNet.h"

// native includes
#include "strstream"
#include "vtkBYUReader.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkBYUReader::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkBYUReader>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkBYUReader::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkBYUReader>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkBYUReader^ vtkBYUReader::NewInstance()
{
  ::vtkBYUReader* retVal = static_cast<::vtkBYUReader*>(vtk::ConvertManagedToNative<::vtkBYUReader>(m_instance)->NewInstance());
  return gcnew vtkBYUReader(IntPtr(retVal), false);
}



vtkBYUReader^ vtkBYUReader::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkBYUReader* retVal = static_cast<::vtkBYUReader*>(::vtkBYUReader::SafeDownCast(oWrap));
  return gcnew vtkBYUReader(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkBYUReader::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkBYUReader>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkBYUReader::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkBYUReader>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkBYUReader::SetGeometryFileName(System::String^ arg0)
{
  char* arg0Wrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(arg0).ToPointer());
  vtk::ConvertManagedToNative<::vtkBYUReader>(m_instance)->SetGeometryFileName(arg0Wrap);
  arg0->Remove(0,arg0->Length);
  arg0->Insert(0,System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(arg0Wrap)));
System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(arg0Wrap));
}



System::String^ vtkBYUReader::GetGeometryFileName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkBYUReader>(m_instance)->GetGeometryFileName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



void vtkBYUReader::SetFileName(System::String^ f)
{
  char* fWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(f).ToPointer());
  vtk::ConvertManagedToNative<::vtkBYUReader>(m_instance)->SetFileName(fWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(fWrap));
}



System::String^ vtkBYUReader::GetFileName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkBYUReader>(m_instance)->GetFileName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



void vtkBYUReader::SetDisplacementFileName(System::String^ arg0)
{
  char* arg0Wrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(arg0).ToPointer());
  vtk::ConvertManagedToNative<::vtkBYUReader>(m_instance)->SetDisplacementFileName(arg0Wrap);
  arg0->Remove(0,arg0->Length);
  arg0->Insert(0,System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(arg0Wrap)));
System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(arg0Wrap));
}



System::String^ vtkBYUReader::GetDisplacementFileName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkBYUReader>(m_instance)->GetDisplacementFileName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



void vtkBYUReader::SetScalarFileName(System::String^ arg0)
{
  char* arg0Wrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(arg0).ToPointer());
  vtk::ConvertManagedToNative<::vtkBYUReader>(m_instance)->SetScalarFileName(arg0Wrap);
  arg0->Remove(0,arg0->Length);
  arg0->Insert(0,System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(arg0Wrap)));
System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(arg0Wrap));
}



System::String^ vtkBYUReader::GetScalarFileName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkBYUReader>(m_instance)->GetScalarFileName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



void vtkBYUReader::SetTextureFileName(System::String^ arg0)
{
  char* arg0Wrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(arg0).ToPointer());
  vtk::ConvertManagedToNative<::vtkBYUReader>(m_instance)->SetTextureFileName(arg0Wrap);
  arg0->Remove(0,arg0->Length);
  arg0->Insert(0,System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(arg0Wrap)));
System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(arg0Wrap));
}



System::String^ vtkBYUReader::GetTextureFileName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkBYUReader>(m_instance)->GetTextureFileName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



void vtkBYUReader::SetReadDisplacement(int arg0)
{
  vtk::ConvertManagedToNative<::vtkBYUReader>(m_instance)->SetReadDisplacement(arg0);
}



int vtkBYUReader::GetReadDisplacement()
{
  int retVal = vtk::ConvertManagedToNative<::vtkBYUReader>(m_instance)->GetReadDisplacement();
  return retVal;
}



void vtkBYUReader::ReadDisplacementOn()
{
  vtk::ConvertManagedToNative<::vtkBYUReader>(m_instance)->ReadDisplacementOn();
}



void vtkBYUReader::ReadDisplacementOff()
{
  vtk::ConvertManagedToNative<::vtkBYUReader>(m_instance)->ReadDisplacementOff();
}



void vtkBYUReader::SetReadScalar(int arg0)
{
  vtk::ConvertManagedToNative<::vtkBYUReader>(m_instance)->SetReadScalar(arg0);
}



int vtkBYUReader::GetReadScalar()
{
  int retVal = vtk::ConvertManagedToNative<::vtkBYUReader>(m_instance)->GetReadScalar();
  return retVal;
}



void vtkBYUReader::ReadScalarOn()
{
  vtk::ConvertManagedToNative<::vtkBYUReader>(m_instance)->ReadScalarOn();
}



void vtkBYUReader::ReadScalarOff()
{
  vtk::ConvertManagedToNative<::vtkBYUReader>(m_instance)->ReadScalarOff();
}



void vtkBYUReader::SetReadTexture(int arg0)
{
  vtk::ConvertManagedToNative<::vtkBYUReader>(m_instance)->SetReadTexture(arg0);
}



int vtkBYUReader::GetReadTexture()
{
  int retVal = vtk::ConvertManagedToNative<::vtkBYUReader>(m_instance)->GetReadTexture();
  return retVal;
}



void vtkBYUReader::ReadTextureOn()
{
  vtk::ConvertManagedToNative<::vtkBYUReader>(m_instance)->ReadTextureOn();
}



void vtkBYUReader::ReadTextureOff()
{
  vtk::ConvertManagedToNative<::vtkBYUReader>(m_instance)->ReadTextureOff();
}



void vtkBYUReader::SetPartNumber(int arg0)
{
  vtk::ConvertManagedToNative<::vtkBYUReader>(m_instance)->SetPartNumber(arg0);
}



int vtkBYUReader::GetPartNumberMinValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkBYUReader>(m_instance)->GetPartNumberMinValue();
  return retVal;
}



int vtkBYUReader::GetPartNumberMaxValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkBYUReader>(m_instance)->GetPartNumberMaxValue();
  return retVal;
}



int vtkBYUReader::GetPartNumber()
{
  int retVal = vtk::ConvertManagedToNative<::vtkBYUReader>(m_instance)->GetPartNumber();
  return retVal;
}



  vtkBYUReader::vtkBYUReader(System::IntPtr native, bool bConst) : vtkPolyDataAlgorithm(native, bConst) {}



  vtkBYUReader::vtkBYUReader(bool donothing) : vtkPolyDataAlgorithm(donothing) {}



  vtkBYUReader::vtkBYUReader() : vtkPolyDataAlgorithm(false) {
  this->SetNativePointer(IntPtr(::vtkBYUReader::New()));
}



  vtkBYUReader::~vtkBYUReader() { }





} // end namespace vtkIO
