

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkShortArrayDotNet.h"
#include "vtkObjectDotNet.h"

// native includes
#include "strstream"
#include "vtkShortArray.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkShortArray::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkShortArray>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkShortArray::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkShortArray>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkShortArray^ vtkShortArray::NewInstance()
{
  ::vtkShortArray* retVal = static_cast<::vtkShortArray*>(vtk::ConvertManagedToNative<::vtkShortArray>(m_instance)->NewInstance());
  return gcnew vtkShortArray(IntPtr(retVal), false);
}



vtkShortArray^ vtkShortArray::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkShortArray* retVal = static_cast<::vtkShortArray*>(::vtkShortArray::SafeDownCast(oWrap));
  return gcnew vtkShortArray(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkShortArray::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkShortArray>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkShortArray::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkShortArray>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




int vtkShortArray::GetDataType()
{
  int retVal = vtk::ConvertManagedToNative<::vtkShortArray>(m_instance)->GetDataType();
  return retVal;
}



void vtkShortArray::GetTupleValue(int i, array<short>^ tuple)
{
  pin_ptr<short> tuplePin = &tuple[0];
  short* nativetuplePin = tuplePin;
  vtk::ConvertManagedToNative<::vtkShortArray>(m_instance)->GetTupleValue(i, nativetuplePin);
}



void vtkShortArray::SetTupleValue(int i, array<short>^ tuple)
{
  pin_ptr<short> tuplePin = &tuple[0];
  short* nativetuplePin = tuplePin;
  vtk::ConvertManagedToNative<::vtkShortArray>(m_instance)->SetTupleValue(i, nativetuplePin);
}



void vtkShortArray::InsertTupleValue(int i, array<short>^ tuple)
{
  pin_ptr<short> tuplePin = &tuple[0];
  short* nativetuplePin = tuplePin;
  vtk::ConvertManagedToNative<::vtkShortArray>(m_instance)->InsertTupleValue(i, nativetuplePin);
}



int vtkShortArray::InsertNextTupleValue(array<short>^ tuple)
{
  pin_ptr<short> tuplePin = &tuple[0];
  short* nativetuplePin = tuplePin;
  int retVal = vtk::ConvertManagedToNative<::vtkShortArray>(m_instance)->InsertNextTupleValue(nativetuplePin);
  return retVal;
}



short vtkShortArray::GetValue(int id)
{
  short retVal = vtk::ConvertManagedToNative<::vtkShortArray>(m_instance)->GetValue(id);
  return retVal;
}



void vtkShortArray::SetValue(int id, short value)
{
  vtk::ConvertManagedToNative<::vtkShortArray>(m_instance)->SetValue(id, value);
}



void vtkShortArray::SetNumberOfValues(int number)
{
  vtk::ConvertManagedToNative<::vtkShortArray>(m_instance)->SetNumberOfValues(number);
}



void vtkShortArray::InsertValue(int id, short f)
{
  vtk::ConvertManagedToNative<::vtkShortArray>(m_instance)->InsertValue(id, f);
}



int vtkShortArray::InsertNextValue(short f)
{
  int retVal = vtk::ConvertManagedToNative<::vtkShortArray>(m_instance)->InsertNextValue(f);
  return retVal;
}



void vtkShortArray::SetArray(array<short>^ arg0, int size, int save)
{
  pin_ptr<short> arg0Pin = &arg0[0];
  short* nativearg0Pin = arg0Pin;
  vtk::ConvertManagedToNative<::vtkShortArray>(m_instance)->SetArray(nativearg0Pin, size, save);
}



  vtkShortArray::vtkShortArray(System::IntPtr native, bool bConst) : vtkDataArray(native, bConst) {}



  vtkShortArray::vtkShortArray(bool donothing) : vtkDataArray(donothing) {}



  vtkShortArray::vtkShortArray() : vtkDataArray(false) {
  this->SetNativePointer(IntPtr(::vtkShortArray::New()));
}



  vtkShortArray::~vtkShortArray() { }





} // end namespace vtkCommon
