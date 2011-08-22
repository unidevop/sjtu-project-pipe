

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkVoidArrayDotNet.h"

// native includes
#include "strstream"
#include "vtkVoidArray.h"

using namespace System;

namespace vtk {

System::String^ vtkVoidArray::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkVoidArray>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkVoidArray::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkVoidArray>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkVoidArray^ vtkVoidArray::NewInstance()
{
  ::vtkVoidArray* retVal = static_cast<::vtkVoidArray*>(vtk::ConvertManagedToNative<::vtkVoidArray>(m_instance)->NewInstance());
  return gcnew vtkVoidArray(IntPtr(retVal), false);
}



vtkVoidArray^ vtkVoidArray::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkVoidArray* retVal = static_cast<::vtkVoidArray*>(::vtkVoidArray::SafeDownCast(oWrap));
  return gcnew vtkVoidArray(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkVoidArray::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkVoidArray>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkVoidArray::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkVoidArray>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




int vtkVoidArray::Allocate(int sz, int ext)
{
  int retVal = vtk::ConvertManagedToNative<::vtkVoidArray>(m_instance)->Allocate(sz, ext);
  return retVal;
}



void vtkVoidArray::Initialize()
{
  vtk::ConvertManagedToNative<::vtkVoidArray>(m_instance)->Initialize();
}



int vtkVoidArray::GetDataType()
{
  int retVal = vtk::ConvertManagedToNative<::vtkVoidArray>(m_instance)->GetDataType();
  return retVal;
}



int vtkVoidArray::GetDataTypeSize()
{
  int retVal = vtk::ConvertManagedToNative<::vtkVoidArray>(m_instance)->GetDataTypeSize();
  return retVal;
}



void vtkVoidArray::SetNumberOfPointers(int number)
{
  vtk::ConvertManagedToNative<::vtkVoidArray>(m_instance)->SetNumberOfPointers(number);
}



int vtkVoidArray::GetNumberOfPointers()
{
  int retVal = vtk::ConvertManagedToNative<::vtkVoidArray>(m_instance)->GetNumberOfPointers();
  return retVal;
}



System::IntPtr vtkVoidArray::GetVoidPointer(int id)
{
  void* retVal = vtk::ConvertManagedToNative<::vtkVoidArray>(m_instance)->GetVoidPointer(id);
  IntPtr retValWrap(retVal);
  return retValWrap;
}



void vtkVoidArray::SetVoidPointer(int id, System::IntPtr ptr)
{
  vtk::ConvertManagedToNative<::vtkVoidArray>(m_instance)->SetVoidPointer(id, ptr.ToPointer());
}



void vtkVoidArray::InsertVoidPointer(int i, System::IntPtr ptr)
{
  vtk::ConvertManagedToNative<::vtkVoidArray>(m_instance)->InsertVoidPointer(i, ptr.ToPointer());
}



int vtkVoidArray::InsertNextVoidPointer(System::IntPtr tuple)
{
  int retVal = vtk::ConvertManagedToNative<::vtkVoidArray>(m_instance)->InsertNextVoidPointer(tuple.ToPointer());
  return retVal;
}



void vtkVoidArray::Reset()
{
  vtk::ConvertManagedToNative<::vtkVoidArray>(m_instance)->Reset();
}



void vtkVoidArray::Squeeze()
{
  vtk::ConvertManagedToNative<::vtkVoidArray>(m_instance)->Squeeze();
}



void vtkVoidArray::DeepCopy(vtkVoidArray^ va)
{
  ::vtkVoidArray* vaWrap = vtk::ConvertManagedToNative<::vtkVoidArray>(va->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkVoidArray>(m_instance)->DeepCopy(vaWrap);
}



  vtkVoidArray::vtkVoidArray(System::IntPtr native, bool bConst) : vtkObject(native, bConst) {}



  vtkVoidArray::vtkVoidArray(bool donothing) : vtkObject(donothing) {}



  vtkVoidArray::vtkVoidArray() : vtkObject(false) {
  this->SetNativePointer(IntPtr(::vtkVoidArray::New()));
}



  vtkVoidArray::~vtkVoidArray() { }





} // end namespace vtkCommon
