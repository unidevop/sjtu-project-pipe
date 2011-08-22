

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkIntArrayDotNet.h"
#include "vtkObjectDotNet.h"

// native includes
#include "strstream"
#include "vtkIntArray.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkIntArray::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkIntArray>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkIntArray::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkIntArray>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkIntArray^ vtkIntArray::NewInstance()
{
  ::vtkIntArray* retVal = static_cast<::vtkIntArray*>(vtk::ConvertManagedToNative<::vtkIntArray>(m_instance)->NewInstance());
  return gcnew vtkIntArray(IntPtr(retVal), false);
}



vtkIntArray^ vtkIntArray::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkIntArray* retVal = static_cast<::vtkIntArray*>(::vtkIntArray::SafeDownCast(oWrap));
  return gcnew vtkIntArray(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkIntArray::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkIntArray>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkIntArray::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkIntArray>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




int vtkIntArray::GetDataType()
{
  int retVal = vtk::ConvertManagedToNative<::vtkIntArray>(m_instance)->GetDataType();
  return retVal;
}



void vtkIntArray::GetTupleValue(int i, array<int>^ tuple)
{
  pin_ptr<int> tuplePin = &tuple[0];
  int* nativetuplePin = tuplePin;
  vtk::ConvertManagedToNative<::vtkIntArray>(m_instance)->GetTupleValue(i, nativetuplePin);
}



void vtkIntArray::SetTupleValue(int i, array<int>^ arg1)
{
  pin_ptr<int> arg1Pin = &arg1[0];
  int* nativearg1Pin = arg1Pin;
  vtk::ConvertManagedToNative<::vtkIntArray>(m_instance)->SetTupleValue(i, nativearg1Pin);
}



void vtkIntArray::InsertTupleValue(int i, array<int>^ arg1)
{
  pin_ptr<int> arg1Pin = &arg1[0];
  int* nativearg1Pin = arg1Pin;
  vtk::ConvertManagedToNative<::vtkIntArray>(m_instance)->InsertTupleValue(i, nativearg1Pin);
}



int vtkIntArray::InsertNextTupleValue(array<int>^ arg0)
{
  pin_ptr<int> arg0Pin = &arg0[0];
  int* nativearg0Pin = arg0Pin;
  int retVal = vtk::ConvertManagedToNative<::vtkIntArray>(m_instance)->InsertNextTupleValue(nativearg0Pin);
  return retVal;
}



int vtkIntArray::GetValue(int id)
{
  int retVal = vtk::ConvertManagedToNative<::vtkIntArray>(m_instance)->GetValue(id);
  return retVal;
}



void vtkIntArray::SetValue(int id, int value)
{
  vtk::ConvertManagedToNative<::vtkIntArray>(m_instance)->SetValue(id, value);
}



void vtkIntArray::SetNumberOfValues(int number)
{
  vtk::ConvertManagedToNative<::vtkIntArray>(m_instance)->SetNumberOfValues(number);
}



void vtkIntArray::InsertValue(int id, int f)
{
  vtk::ConvertManagedToNative<::vtkIntArray>(m_instance)->InsertValue(id, f);
}



int vtkIntArray::InsertNextValue(int f)
{
  int retVal = vtk::ConvertManagedToNative<::vtkIntArray>(m_instance)->InsertNextValue(f);
  return retVal;
}



void vtkIntArray::SetArray(array<int>^ arg0, int size, int save)
{
  pin_ptr<int> arg0Pin = &arg0[0];
  int* nativearg0Pin = arg0Pin;
  vtk::ConvertManagedToNative<::vtkIntArray>(m_instance)->SetArray(nativearg0Pin, size, save);
}



  vtkIntArray::vtkIntArray(System::IntPtr native, bool bConst) : vtkDataArray(native, bConst) {}



  vtkIntArray::vtkIntArray(bool donothing) : vtkDataArray(donothing) {}



  vtkIntArray::vtkIntArray() : vtkDataArray(false) {
  this->SetNativePointer(IntPtr(::vtkIntArray::New()));
}



  vtkIntArray::~vtkIntArray() { }





} // end namespace vtkCommon
