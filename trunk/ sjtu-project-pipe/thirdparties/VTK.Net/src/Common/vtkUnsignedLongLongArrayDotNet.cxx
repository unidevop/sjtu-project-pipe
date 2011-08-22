

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkUnsignedLongLongArrayDotNet.h"
#include "vtkObjectDotNet.h"

// native includes
#include "strstream"
#include "vtkUnsignedLongLongArray.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkUnsignedLongLongArray::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkUnsignedLongLongArray>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkUnsignedLongLongArray::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkUnsignedLongLongArray>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkUnsignedLongLongArray^ vtkUnsignedLongLongArray::NewInstance()
{
  ::vtkUnsignedLongLongArray* retVal = static_cast<::vtkUnsignedLongLongArray*>(vtk::ConvertManagedToNative<::vtkUnsignedLongLongArray>(m_instance)->NewInstance());
  return gcnew vtkUnsignedLongLongArray(IntPtr(retVal), false);
}



vtkUnsignedLongLongArray^ vtkUnsignedLongLongArray::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkUnsignedLongLongArray* retVal = static_cast<::vtkUnsignedLongLongArray*>(::vtkUnsignedLongLongArray::SafeDownCast(oWrap));
  return gcnew vtkUnsignedLongLongArray(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkUnsignedLongLongArray::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkUnsignedLongLongArray>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkUnsignedLongLongArray::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkUnsignedLongLongArray>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




int vtkUnsignedLongLongArray::GetDataType()
{
  int retVal = vtk::ConvertManagedToNative<::vtkUnsignedLongLongArray>(m_instance)->GetDataType();
  return retVal;
}



void vtkUnsignedLongLongArray::GetTupleValue(int i, array<unsigned __int64>^ tuple)
{
  pin_ptr<unsigned __int64> tuplePin = &tuple[0];
  unsigned __int64* nativetuplePin = tuplePin;
  vtk::ConvertManagedToNative<::vtkUnsignedLongLongArray>(m_instance)->GetTupleValue(i, nativetuplePin);
}



void vtkUnsignedLongLongArray::SetTupleValue(int i, array<unsigned __int64>^ tuple)
{
  pin_ptr<unsigned __int64> tuplePin = &tuple[0];
  unsigned __int64* nativetuplePin = tuplePin;
  vtk::ConvertManagedToNative<::vtkUnsignedLongLongArray>(m_instance)->SetTupleValue(i, nativetuplePin);
}



void vtkUnsignedLongLongArray::InsertTupleValue(int i, array<unsigned __int64>^ tuple)
{
  pin_ptr<unsigned __int64> tuplePin = &tuple[0];
  unsigned __int64* nativetuplePin = tuplePin;
  vtk::ConvertManagedToNative<::vtkUnsignedLongLongArray>(m_instance)->InsertTupleValue(i, nativetuplePin);
}



int vtkUnsignedLongLongArray::InsertNextTupleValue(array<unsigned __int64>^ tuple)
{
  pin_ptr<unsigned __int64> tuplePin = &tuple[0];
  unsigned __int64* nativetuplePin = tuplePin;
  int retVal = vtk::ConvertManagedToNative<::vtkUnsignedLongLongArray>(m_instance)->InsertNextTupleValue(nativetuplePin);
  return retVal;
}



unsigned __int64 vtkUnsignedLongLongArray::GetValue(int id)
{
  unsigned __int64 retVal = vtk::ConvertManagedToNative<::vtkUnsignedLongLongArray>(m_instance)->GetValue(id);
  return retVal;
}



void vtkUnsignedLongLongArray::SetValue(int id, unsigned __int64 value)
{
  vtk::ConvertManagedToNative<::vtkUnsignedLongLongArray>(m_instance)->SetValue(id, value);
}



void vtkUnsignedLongLongArray::SetNumberOfValues(int number)
{
  vtk::ConvertManagedToNative<::vtkUnsignedLongLongArray>(m_instance)->SetNumberOfValues(number);
}



void vtkUnsignedLongLongArray::InsertValue(int id, unsigned __int64 f)
{
  vtk::ConvertManagedToNative<::vtkUnsignedLongLongArray>(m_instance)->InsertValue(id, f);
}



int vtkUnsignedLongLongArray::InsertNextValue(unsigned __int64 f)
{
  int retVal = vtk::ConvertManagedToNative<::vtkUnsignedLongLongArray>(m_instance)->InsertNextValue(f);
  return retVal;
}



void vtkUnsignedLongLongArray::SetArray(array<unsigned __int64>^ arg0, int size, int save)
{
  pin_ptr<unsigned __int64> arg0Pin = &arg0[0];
  unsigned __int64* nativearg0Pin = arg0Pin;
  vtk::ConvertManagedToNative<::vtkUnsignedLongLongArray>(m_instance)->SetArray(nativearg0Pin, size, save);
}



  vtkUnsignedLongLongArray::vtkUnsignedLongLongArray(System::IntPtr native, bool bConst) : vtkDataArray(native, bConst) {}



  vtkUnsignedLongLongArray::vtkUnsignedLongLongArray(bool donothing) : vtkDataArray(donothing) {}



  vtkUnsignedLongLongArray::vtkUnsignedLongLongArray() : vtkDataArray(false) {
  this->SetNativePointer(IntPtr(::vtkUnsignedLongLongArray::New()));
}



  vtkUnsignedLongLongArray::~vtkUnsignedLongLongArray() { }





} // end namespace vtkCommon
