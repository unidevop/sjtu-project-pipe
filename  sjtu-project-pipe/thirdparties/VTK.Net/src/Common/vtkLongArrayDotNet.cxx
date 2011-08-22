

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkLongArrayDotNet.h"
#include "vtkObjectDotNet.h"

// native includes
#include "strstream"
#include "vtkLongArray.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkLongArray::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkLongArray>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkLongArray::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkLongArray>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkLongArray^ vtkLongArray::NewInstance()
{
  ::vtkLongArray* retVal = static_cast<::vtkLongArray*>(vtk::ConvertManagedToNative<::vtkLongArray>(m_instance)->NewInstance());
  return gcnew vtkLongArray(IntPtr(retVal), false);
}



vtkLongArray^ vtkLongArray::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkLongArray* retVal = static_cast<::vtkLongArray*>(::vtkLongArray::SafeDownCast(oWrap));
  return gcnew vtkLongArray(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkLongArray::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkLongArray>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkLongArray::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkLongArray>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




int vtkLongArray::GetDataType()
{
  int retVal = vtk::ConvertManagedToNative<::vtkLongArray>(m_instance)->GetDataType();
  return retVal;
}



void vtkLongArray::GetTupleValue(int i, array<long>^ tuple)
{
  pin_ptr<long> tuplePin = &tuple[0];
  long* nativetuplePin = tuplePin;
  vtk::ConvertManagedToNative<::vtkLongArray>(m_instance)->GetTupleValue(i, nativetuplePin);
}



void vtkLongArray::SetTupleValue(int i, array<long>^ tuple)
{
  pin_ptr<long> tuplePin = &tuple[0];
  long* nativetuplePin = tuplePin;
  vtk::ConvertManagedToNative<::vtkLongArray>(m_instance)->SetTupleValue(i, nativetuplePin);
}



void vtkLongArray::InsertTupleValue(int i, array<long>^ tuple)
{
  pin_ptr<long> tuplePin = &tuple[0];
  long* nativetuplePin = tuplePin;
  vtk::ConvertManagedToNative<::vtkLongArray>(m_instance)->InsertTupleValue(i, nativetuplePin);
}



int vtkLongArray::InsertNextTupleValue(array<long>^ tuple)
{
  pin_ptr<long> tuplePin = &tuple[0];
  long* nativetuplePin = tuplePin;
  int retVal = vtk::ConvertManagedToNative<::vtkLongArray>(m_instance)->InsertNextTupleValue(nativetuplePin);
  return retVal;
}



long vtkLongArray::GetValue(int id)
{
  long retVal = vtk::ConvertManagedToNative<::vtkLongArray>(m_instance)->GetValue(id);
  return retVal;
}



void vtkLongArray::SetValue(int id, long value)
{
  vtk::ConvertManagedToNative<::vtkLongArray>(m_instance)->SetValue(id, value);
}



void vtkLongArray::SetNumberOfValues(int number)
{
  vtk::ConvertManagedToNative<::vtkLongArray>(m_instance)->SetNumberOfValues(number);
}



void vtkLongArray::InsertValue(int id, long f)
{
  vtk::ConvertManagedToNative<::vtkLongArray>(m_instance)->InsertValue(id, f);
}



int vtkLongArray::InsertNextValue(long f)
{
  int retVal = vtk::ConvertManagedToNative<::vtkLongArray>(m_instance)->InsertNextValue(f);
  return retVal;
}



void vtkLongArray::SetArray(array<long>^ arg0, int size, int save)
{
  pin_ptr<long> arg0Pin = &arg0[0];
  long* nativearg0Pin = arg0Pin;
  vtk::ConvertManagedToNative<::vtkLongArray>(m_instance)->SetArray(nativearg0Pin, size, save);
}



  vtkLongArray::vtkLongArray(System::IntPtr native, bool bConst) : vtkDataArray(native, bConst) {}



  vtkLongArray::vtkLongArray(bool donothing) : vtkDataArray(donothing) {}



  vtkLongArray::vtkLongArray() : vtkDataArray(false) {
  this->SetNativePointer(IntPtr(::vtkLongArray::New()));
}



  vtkLongArray::~vtkLongArray() { }





} // end namespace vtkCommon
