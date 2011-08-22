

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkLongLongArrayDotNet.h"
#include "vtkObjectDotNet.h"

// native includes
#include "strstream"
#include "vtkLongLongArray.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkLongLongArray::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkLongLongArray>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkLongLongArray::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkLongLongArray>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkLongLongArray^ vtkLongLongArray::NewInstance()
{
  ::vtkLongLongArray* retVal = static_cast<::vtkLongLongArray*>(vtk::ConvertManagedToNative<::vtkLongLongArray>(m_instance)->NewInstance());
  return gcnew vtkLongLongArray(IntPtr(retVal), false);
}



vtkLongLongArray^ vtkLongLongArray::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkLongLongArray* retVal = static_cast<::vtkLongLongArray*>(::vtkLongLongArray::SafeDownCast(oWrap));
  return gcnew vtkLongLongArray(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkLongLongArray::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkLongLongArray>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkLongLongArray::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkLongLongArray>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




int vtkLongLongArray::GetDataType()
{
  int retVal = vtk::ConvertManagedToNative<::vtkLongLongArray>(m_instance)->GetDataType();
  return retVal;
}



void vtkLongLongArray::GetTupleValue(int i, array<signed __int64>^ tuple)
{
  pin_ptr<signed __int64> tuplePin = &tuple[0];
  signed __int64* nativetuplePin = tuplePin;
  vtk::ConvertManagedToNative<::vtkLongLongArray>(m_instance)->GetTupleValue(i, nativetuplePin);
}



void vtkLongLongArray::SetTupleValue(int i, array<signed __int64>^ tuple)
{
  pin_ptr<signed __int64> tuplePin = &tuple[0];
  signed __int64* nativetuplePin = tuplePin;
  vtk::ConvertManagedToNative<::vtkLongLongArray>(m_instance)->SetTupleValue(i, nativetuplePin);
}



void vtkLongLongArray::InsertTupleValue(int i, array<signed __int64>^ tuple)
{
  pin_ptr<signed __int64> tuplePin = &tuple[0];
  signed __int64* nativetuplePin = tuplePin;
  vtk::ConvertManagedToNative<::vtkLongLongArray>(m_instance)->InsertTupleValue(i, nativetuplePin);
}



int vtkLongLongArray::InsertNextTupleValue(array<signed __int64>^ tuple)
{
  pin_ptr<signed __int64> tuplePin = &tuple[0];
  signed __int64* nativetuplePin = tuplePin;
  int retVal = vtk::ConvertManagedToNative<::vtkLongLongArray>(m_instance)->InsertNextTupleValue(nativetuplePin);
  return retVal;
}



signed __int64 vtkLongLongArray::GetValue(int id)
{
  signed __int64 retVal = vtk::ConvertManagedToNative<::vtkLongLongArray>(m_instance)->GetValue(id);
  return retVal;
}



void vtkLongLongArray::SetValue(int id, signed __int64 value)
{
  vtk::ConvertManagedToNative<::vtkLongLongArray>(m_instance)->SetValue(id, value);
}



void vtkLongLongArray::SetNumberOfValues(int number)
{
  vtk::ConvertManagedToNative<::vtkLongLongArray>(m_instance)->SetNumberOfValues(number);
}



void vtkLongLongArray::InsertValue(int id, signed __int64 f)
{
  vtk::ConvertManagedToNative<::vtkLongLongArray>(m_instance)->InsertValue(id, f);
}



int vtkLongLongArray::InsertNextValue(signed __int64 f)
{
  int retVal = vtk::ConvertManagedToNative<::vtkLongLongArray>(m_instance)->InsertNextValue(f);
  return retVal;
}



void vtkLongLongArray::SetArray(array<signed __int64>^ arg0, int size, int save)
{
  pin_ptr<signed __int64> arg0Pin = &arg0[0];
  signed __int64* nativearg0Pin = arg0Pin;
  vtk::ConvertManagedToNative<::vtkLongLongArray>(m_instance)->SetArray(nativearg0Pin, size, save);
}



  vtkLongLongArray::vtkLongLongArray(System::IntPtr native, bool bConst) : vtkDataArray(native, bConst) {}



  vtkLongLongArray::vtkLongLongArray(bool donothing) : vtkDataArray(donothing) {}



  vtkLongLongArray::vtkLongLongArray() : vtkDataArray(false) {
  this->SetNativePointer(IntPtr(::vtkLongLongArray::New()));
}



  vtkLongLongArray::~vtkLongLongArray() { }





} // end namespace vtkCommon
