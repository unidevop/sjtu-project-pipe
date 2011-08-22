

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkUnsignedLongArrayDotNet.h"
#include "vtkObjectDotNet.h"

// native includes
#include "strstream"
#include "vtkUnsignedLongArray.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkUnsignedLongArray::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkUnsignedLongArray>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkUnsignedLongArray::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkUnsignedLongArray>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkUnsignedLongArray^ vtkUnsignedLongArray::NewInstance()
{
  ::vtkUnsignedLongArray* retVal = static_cast<::vtkUnsignedLongArray*>(vtk::ConvertManagedToNative<::vtkUnsignedLongArray>(m_instance)->NewInstance());
  return gcnew vtkUnsignedLongArray(IntPtr(retVal), false);
}



vtkUnsignedLongArray^ vtkUnsignedLongArray::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkUnsignedLongArray* retVal = static_cast<::vtkUnsignedLongArray*>(::vtkUnsignedLongArray::SafeDownCast(oWrap));
  return gcnew vtkUnsignedLongArray(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkUnsignedLongArray::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkUnsignedLongArray>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkUnsignedLongArray::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkUnsignedLongArray>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




int vtkUnsignedLongArray::GetDataType()
{
  int retVal = vtk::ConvertManagedToNative<::vtkUnsignedLongArray>(m_instance)->GetDataType();
  return retVal;
}



void vtkUnsignedLongArray::GetTupleValue(int i, array<unsigned long>^ tuple)
{
  pin_ptr<unsigned long> tuplePin = &tuple[0];
  unsigned long* nativetuplePin = tuplePin;
  vtk::ConvertManagedToNative<::vtkUnsignedLongArray>(m_instance)->GetTupleValue(i, nativetuplePin);
}



void vtkUnsignedLongArray::SetTupleValue(int i, array<unsigned long>^ tuple)
{
  pin_ptr<unsigned long> tuplePin = &tuple[0];
  unsigned long* nativetuplePin = tuplePin;
  vtk::ConvertManagedToNative<::vtkUnsignedLongArray>(m_instance)->SetTupleValue(i, nativetuplePin);
}



void vtkUnsignedLongArray::InsertTupleValue(int i, array<unsigned long>^ tuple)
{
  pin_ptr<unsigned long> tuplePin = &tuple[0];
  unsigned long* nativetuplePin = tuplePin;
  vtk::ConvertManagedToNative<::vtkUnsignedLongArray>(m_instance)->InsertTupleValue(i, nativetuplePin);
}



int vtkUnsignedLongArray::InsertNextTupleValue(array<unsigned long>^ tuple)
{
  pin_ptr<unsigned long> tuplePin = &tuple[0];
  unsigned long* nativetuplePin = tuplePin;
  int retVal = vtk::ConvertManagedToNative<::vtkUnsignedLongArray>(m_instance)->InsertNextTupleValue(nativetuplePin);
  return retVal;
}



unsigned long vtkUnsignedLongArray::GetValue(int id)
{
  unsigned long retVal = vtk::ConvertManagedToNative<::vtkUnsignedLongArray>(m_instance)->GetValue(id);
  return retVal;
}



void vtkUnsignedLongArray::SetValue(int id, unsigned long value)
{
  vtk::ConvertManagedToNative<::vtkUnsignedLongArray>(m_instance)->SetValue(id, value);
}



void vtkUnsignedLongArray::SetNumberOfValues(int number)
{
  vtk::ConvertManagedToNative<::vtkUnsignedLongArray>(m_instance)->SetNumberOfValues(number);
}



void vtkUnsignedLongArray::InsertValue(int id, unsigned long f)
{
  vtk::ConvertManagedToNative<::vtkUnsignedLongArray>(m_instance)->InsertValue(id, f);
}



int vtkUnsignedLongArray::InsertNextValue(unsigned long f)
{
  int retVal = vtk::ConvertManagedToNative<::vtkUnsignedLongArray>(m_instance)->InsertNextValue(f);
  return retVal;
}



void vtkUnsignedLongArray::SetArray(array<unsigned long>^ arg0, int size, int save)
{
  pin_ptr<unsigned long> arg0Pin = &arg0[0];
  unsigned long* nativearg0Pin = arg0Pin;
  vtk::ConvertManagedToNative<::vtkUnsignedLongArray>(m_instance)->SetArray(nativearg0Pin, size, save);
}



  vtkUnsignedLongArray::vtkUnsignedLongArray(System::IntPtr native, bool bConst) : vtkDataArray(native, bConst) {}



  vtkUnsignedLongArray::vtkUnsignedLongArray(bool donothing) : vtkDataArray(donothing) {}



  vtkUnsignedLongArray::vtkUnsignedLongArray() : vtkDataArray(false) {
  this->SetNativePointer(IntPtr(::vtkUnsignedLongArray::New()));
}



  vtkUnsignedLongArray::~vtkUnsignedLongArray() { }





} // end namespace vtkCommon
