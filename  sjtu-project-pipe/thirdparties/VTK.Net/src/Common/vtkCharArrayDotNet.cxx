

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkCharArrayDotNet.h"
#include "vtkObjectDotNet.h"

// native includes
#include "strstream"
#include "vtkCharArray.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkCharArray::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkCharArray>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkCharArray::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkCharArray>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkCharArray^ vtkCharArray::NewInstance()
{
  ::vtkCharArray* retVal = static_cast<::vtkCharArray*>(vtk::ConvertManagedToNative<::vtkCharArray>(m_instance)->NewInstance());
  return gcnew vtkCharArray(IntPtr(retVal), false);
}



vtkCharArray^ vtkCharArray::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkCharArray* retVal = static_cast<::vtkCharArray*>(::vtkCharArray::SafeDownCast(oWrap));
  return gcnew vtkCharArray(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkCharArray::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkCharArray>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkCharArray::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkCharArray>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




int vtkCharArray::GetDataType()
{
  int retVal = vtk::ConvertManagedToNative<::vtkCharArray>(m_instance)->GetDataType();
  return retVal;
}



void vtkCharArray::GetTupleValue(int i, System::String^ tuple)
{
  char* tupleWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(tuple).ToPointer());
  vtk::ConvertManagedToNative<::vtkCharArray>(m_instance)->GetTupleValue(i, tupleWrap);
  tuple->Remove(0,tuple->Length);
  tuple->Insert(0,System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(tupleWrap)));
System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(tupleWrap));
}



void vtkCharArray::SetTupleValue(int i, System::String^ tuple)
{
  char* tupleWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(tuple).ToPointer());
  vtk::ConvertManagedToNative<::vtkCharArray>(m_instance)->SetTupleValue(i, tupleWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(tupleWrap));
}



void vtkCharArray::InsertTupleValue(int i, System::String^ tuple)
{
  char* tupleWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(tuple).ToPointer());
  vtk::ConvertManagedToNative<::vtkCharArray>(m_instance)->InsertTupleValue(i, tupleWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(tupleWrap));
}



int vtkCharArray::InsertNextTupleValue(System::String^ tuple)
{
  char* tupleWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(tuple).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkCharArray>(m_instance)->InsertNextTupleValue(tupleWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(tupleWrap));
  return retVal;
}



char vtkCharArray::GetValue(int id)
{
  char retVal = vtk::ConvertManagedToNative<::vtkCharArray>(m_instance)->GetValue(id);
  return retVal;
}



void vtkCharArray::SetValue(int id, char value)
{
  vtk::ConvertManagedToNative<::vtkCharArray>(m_instance)->SetValue(id, value);
}



void vtkCharArray::SetNumberOfValues(int number)
{
  vtk::ConvertManagedToNative<::vtkCharArray>(m_instance)->SetNumberOfValues(number);
}



void vtkCharArray::InsertValue(int id, char f)
{
  vtk::ConvertManagedToNative<::vtkCharArray>(m_instance)->InsertValue(id, f);
}



int vtkCharArray::InsertNextValue(char f)
{
  int retVal = vtk::ConvertManagedToNative<::vtkCharArray>(m_instance)->InsertNextValue(f);
  return retVal;
}



System::String^ vtkCharArray::WritePointer(int id, int number)
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkCharArray>(m_instance)->WritePointer(id, number);
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



System::String^ vtkCharArray::GetPointer(int id)
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkCharArray>(m_instance)->GetPointer(id);
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



void vtkCharArray::SetArray(System::String^ arg0, int size, int save)
{
  char* arg0Wrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(arg0).ToPointer());
  vtk::ConvertManagedToNative<::vtkCharArray>(m_instance)->SetArray(arg0Wrap, size, save);
  arg0->Remove(0,arg0->Length);
  arg0->Insert(0,System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(arg0Wrap)));
System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(arg0Wrap));
}



  vtkCharArray::vtkCharArray(System::IntPtr native, bool bConst) : vtkDataArray(native, bConst) {}



  vtkCharArray::vtkCharArray(bool donothing) : vtkDataArray(donothing) {}



  vtkCharArray::vtkCharArray() : vtkDataArray(false) {
  this->SetNativePointer(IntPtr(::vtkCharArray::New()));
}



  vtkCharArray::~vtkCharArray() { }





} // end namespace vtkCommon
