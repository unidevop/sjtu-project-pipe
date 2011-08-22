

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkIdTypeArrayDotNet.h"
#include "vtkObjectDotNet.h"

// native includes
#include "strstream"
#include "vtkIdTypeArray.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkIdTypeArray::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkIdTypeArray>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkIdTypeArray::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkIdTypeArray>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkIdTypeArray^ vtkIdTypeArray::NewInstance()
{
  ::vtkIdTypeArray* retVal = static_cast<::vtkIdTypeArray*>(vtk::ConvertManagedToNative<::vtkIdTypeArray>(m_instance)->NewInstance());
  return gcnew vtkIdTypeArray(IntPtr(retVal), false);
}



vtkIdTypeArray^ vtkIdTypeArray::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkIdTypeArray* retVal = static_cast<::vtkIdTypeArray*>(::vtkIdTypeArray::SafeDownCast(oWrap));
  return gcnew vtkIdTypeArray(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkIdTypeArray::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkIdTypeArray>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkIdTypeArray::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkIdTypeArray>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




int vtkIdTypeArray::GetDataType()
{
  int retVal = vtk::ConvertManagedToNative<::vtkIdTypeArray>(m_instance)->GetDataType();
  return retVal;
}



void vtkIdTypeArray::GetTupleValue(int i, array<int>^ arg1)
{
  pin_ptr<int> arg1Pin = &arg1[0];
  int* nativearg1Pin = arg1Pin;
  vtk::ConvertManagedToNative<::vtkIdTypeArray>(m_instance)->GetTupleValue(i, nativearg1Pin);
}



void vtkIdTypeArray::SetTupleValue(int i, array<int>^ tuple)
{
  pin_ptr<int> tuplePin = &tuple[0];
  int* nativetuplePin = tuplePin;
  vtk::ConvertManagedToNative<::vtkIdTypeArray>(m_instance)->SetTupleValue(i, nativetuplePin);
}



void vtkIdTypeArray::InsertTupleValue(int i, array<int>^ tuple)
{
  pin_ptr<int> tuplePin = &tuple[0];
  int* nativetuplePin = tuplePin;
  vtk::ConvertManagedToNative<::vtkIdTypeArray>(m_instance)->InsertTupleValue(i, nativetuplePin);
}



int vtkIdTypeArray::InsertNextTupleValue(array<int>^ tuple)
{
  pin_ptr<int> tuplePin = &tuple[0];
  int* nativetuplePin = tuplePin;
  int retVal = vtk::ConvertManagedToNative<::vtkIdTypeArray>(m_instance)->InsertNextTupleValue(nativetuplePin);
  return retVal;
}



int vtkIdTypeArray::GetValue(int id)
{
  int retVal = vtk::ConvertManagedToNative<::vtkIdTypeArray>(m_instance)->GetValue(id);
  return retVal;
}



void vtkIdTypeArray::SetValue(int id, int value)
{
  vtk::ConvertManagedToNative<::vtkIdTypeArray>(m_instance)->SetValue(id, value);
}



void vtkIdTypeArray::SetNumberOfValues(int number)
{
  vtk::ConvertManagedToNative<::vtkIdTypeArray>(m_instance)->SetNumberOfValues(number);
}



void vtkIdTypeArray::InsertValue(int id, int f)
{
  vtk::ConvertManagedToNative<::vtkIdTypeArray>(m_instance)->InsertValue(id, f);
}



int vtkIdTypeArray::InsertNextValue(int f)
{
  int retVal = vtk::ConvertManagedToNative<::vtkIdTypeArray>(m_instance)->InsertNextValue(f);
  return retVal;
}



void vtkIdTypeArray::SetArray(array<int>^ arg0, int size, int save)
{
  pin_ptr<int> arg0Pin = &arg0[0];
  int* nativearg0Pin = arg0Pin;
  vtk::ConvertManagedToNative<::vtkIdTypeArray>(m_instance)->SetArray(nativearg0Pin, size, save);
}



  vtkIdTypeArray::vtkIdTypeArray(System::IntPtr native, bool bConst) : vtkDataArray(native, bConst) {}



  vtkIdTypeArray::vtkIdTypeArray(bool donothing) : vtkDataArray(donothing) {}



  vtkIdTypeArray::vtkIdTypeArray() : vtkDataArray(false) {
  this->SetNativePointer(IntPtr(::vtkIdTypeArray::New()));
}



  vtkIdTypeArray::~vtkIdTypeArray() { }





} // end namespace vtkCommon
