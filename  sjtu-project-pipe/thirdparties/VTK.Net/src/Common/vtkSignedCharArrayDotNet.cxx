

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkSignedCharArrayDotNet.h"
#include "vtkObjectDotNet.h"

// native includes
#include "strstream"
#include "vtkSignedCharArray.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkSignedCharArray::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkSignedCharArray>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkSignedCharArray::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkSignedCharArray>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkSignedCharArray^ vtkSignedCharArray::NewInstance()
{
  ::vtkSignedCharArray* retVal = static_cast<::vtkSignedCharArray*>(vtk::ConvertManagedToNative<::vtkSignedCharArray>(m_instance)->NewInstance());
  return gcnew vtkSignedCharArray(IntPtr(retVal), false);
}



vtkSignedCharArray^ vtkSignedCharArray::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkSignedCharArray* retVal = static_cast<::vtkSignedCharArray*>(::vtkSignedCharArray::SafeDownCast(oWrap));
  return gcnew vtkSignedCharArray(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkSignedCharArray::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkSignedCharArray>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkSignedCharArray::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkSignedCharArray>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




int vtkSignedCharArray::GetDataType()
{
  int retVal = vtk::ConvertManagedToNative<::vtkSignedCharArray>(m_instance)->GetDataType();
  return retVal;
}



void vtkSignedCharArray::GetTupleValue(int i, array<signed char>^ tuple)
{
  pin_ptr<signed char> tuplePin = &tuple[0];
  signed char* nativetuplePin = tuplePin;
  vtk::ConvertManagedToNative<::vtkSignedCharArray>(m_instance)->GetTupleValue(i, nativetuplePin);
}



void vtkSignedCharArray::SetTupleValue(int i, array<signed char>^ tuple)
{
  pin_ptr<signed char> tuplePin = &tuple[0];
  signed char* nativetuplePin = tuplePin;
  vtk::ConvertManagedToNative<::vtkSignedCharArray>(m_instance)->SetTupleValue(i, nativetuplePin);
}



void vtkSignedCharArray::InsertTupleValue(int i, array<signed char>^ tuple)
{
  pin_ptr<signed char> tuplePin = &tuple[0];
  signed char* nativetuplePin = tuplePin;
  vtk::ConvertManagedToNative<::vtkSignedCharArray>(m_instance)->InsertTupleValue(i, nativetuplePin);
}



int vtkSignedCharArray::InsertNextTupleValue(array<signed char>^ tuple)
{
  pin_ptr<signed char> tuplePin = &tuple[0];
  signed char* nativetuplePin = tuplePin;
  int retVal = vtk::ConvertManagedToNative<::vtkSignedCharArray>(m_instance)->InsertNextTupleValue(nativetuplePin);
  return retVal;
}



signed char vtkSignedCharArray::GetValue(int id)
{
  signed char retVal = vtk::ConvertManagedToNative<::vtkSignedCharArray>(m_instance)->GetValue(id);
  return retVal;
}



void vtkSignedCharArray::SetValue(int id, signed char value)
{
  vtk::ConvertManagedToNative<::vtkSignedCharArray>(m_instance)->SetValue(id, value);
}



void vtkSignedCharArray::SetNumberOfValues(int number)
{
  vtk::ConvertManagedToNative<::vtkSignedCharArray>(m_instance)->SetNumberOfValues(number);
}



void vtkSignedCharArray::InsertValue(int id, signed char f)
{
  vtk::ConvertManagedToNative<::vtkSignedCharArray>(m_instance)->InsertValue(id, f);
}



int vtkSignedCharArray::InsertNextValue(signed char f)
{
  int retVal = vtk::ConvertManagedToNative<::vtkSignedCharArray>(m_instance)->InsertNextValue(f);
  return retVal;
}



void vtkSignedCharArray::SetArray(array<signed char>^ arg0, int size, int save)
{
  pin_ptr<signed char> arg0Pin = &arg0[0];
  signed char* nativearg0Pin = arg0Pin;
  vtk::ConvertManagedToNative<::vtkSignedCharArray>(m_instance)->SetArray(nativearg0Pin, size, save);
}



  vtkSignedCharArray::vtkSignedCharArray(System::IntPtr native, bool bConst) : vtkDataArray(native, bConst) {}



  vtkSignedCharArray::vtkSignedCharArray(bool donothing) : vtkDataArray(donothing) {}



  vtkSignedCharArray::vtkSignedCharArray() : vtkDataArray(false) {
  this->SetNativePointer(IntPtr(::vtkSignedCharArray::New()));
}



  vtkSignedCharArray::~vtkSignedCharArray() { }





} // end namespace vtkCommon
