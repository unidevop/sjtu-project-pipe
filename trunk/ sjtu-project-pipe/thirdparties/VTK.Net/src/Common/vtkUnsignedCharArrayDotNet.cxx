

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkUnsignedCharArrayDotNet.h"
#include "vtkObjectDotNet.h"

// native includes
#include "strstream"
#include "vtkUnsignedCharArray.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkUnsignedCharArray::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkUnsignedCharArray>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkUnsignedCharArray::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkUnsignedCharArray>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkUnsignedCharArray^ vtkUnsignedCharArray::NewInstance()
{
  ::vtkUnsignedCharArray* retVal = static_cast<::vtkUnsignedCharArray*>(vtk::ConvertManagedToNative<::vtkUnsignedCharArray>(m_instance)->NewInstance());
  return gcnew vtkUnsignedCharArray(IntPtr(retVal), false);
}



vtkUnsignedCharArray^ vtkUnsignedCharArray::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkUnsignedCharArray* retVal = static_cast<::vtkUnsignedCharArray*>(::vtkUnsignedCharArray::SafeDownCast(oWrap));
  return gcnew vtkUnsignedCharArray(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkUnsignedCharArray::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkUnsignedCharArray>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkUnsignedCharArray::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkUnsignedCharArray>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




int vtkUnsignedCharArray::GetDataType()
{
  int retVal = vtk::ConvertManagedToNative<::vtkUnsignedCharArray>(m_instance)->GetDataType();
  return retVal;
}



void vtkUnsignedCharArray::GetTupleValue(int i, array<unsigned char>^ tuple)
{
  pin_ptr<unsigned char> tuplePin = &tuple[0];
  unsigned char* nativetuplePin = tuplePin;
  vtk::ConvertManagedToNative<::vtkUnsignedCharArray>(m_instance)->GetTupleValue(i, nativetuplePin);
}



void vtkUnsignedCharArray::SetTupleValue(int i, array<unsigned char>^ tuple)
{
  pin_ptr<unsigned char> tuplePin = &tuple[0];
  unsigned char* nativetuplePin = tuplePin;
  vtk::ConvertManagedToNative<::vtkUnsignedCharArray>(m_instance)->SetTupleValue(i, nativetuplePin);
}



void vtkUnsignedCharArray::InsertTupleValue(int i, array<unsigned char>^ tuple)
{
  pin_ptr<unsigned char> tuplePin = &tuple[0];
  unsigned char* nativetuplePin = tuplePin;
  vtk::ConvertManagedToNative<::vtkUnsignedCharArray>(m_instance)->InsertTupleValue(i, nativetuplePin);
}



int vtkUnsignedCharArray::InsertNextTupleValue(array<unsigned char>^ tuple)
{
  pin_ptr<unsigned char> tuplePin = &tuple[0];
  unsigned char* nativetuplePin = tuplePin;
  int retVal = vtk::ConvertManagedToNative<::vtkUnsignedCharArray>(m_instance)->InsertNextTupleValue(nativetuplePin);
  return retVal;
}



unsigned char vtkUnsignedCharArray::GetValue(int id)
{
  unsigned char retVal = vtk::ConvertManagedToNative<::vtkUnsignedCharArray>(m_instance)->GetValue(id);
  return retVal;
}



void vtkUnsignedCharArray::SetValue(int id, unsigned char value)
{
  vtk::ConvertManagedToNative<::vtkUnsignedCharArray>(m_instance)->SetValue(id, value);
}



void vtkUnsignedCharArray::SetNumberOfValues(int number)
{
  vtk::ConvertManagedToNative<::vtkUnsignedCharArray>(m_instance)->SetNumberOfValues(number);
}



void vtkUnsignedCharArray::InsertValue(int id, unsigned char f)
{
  vtk::ConvertManagedToNative<::vtkUnsignedCharArray>(m_instance)->InsertValue(id, f);
}



int vtkUnsignedCharArray::InsertNextValue(unsigned char f)
{
  int retVal = vtk::ConvertManagedToNative<::vtkUnsignedCharArray>(m_instance)->InsertNextValue(f);
  return retVal;
}



void vtkUnsignedCharArray::SetArray(array<unsigned char>^ arg0, int size, int save)
{
  pin_ptr<unsigned char> arg0Pin = &arg0[0];
  unsigned char* nativearg0Pin = arg0Pin;
  vtk::ConvertManagedToNative<::vtkUnsignedCharArray>(m_instance)->SetArray(nativearg0Pin, size, save);
}



  vtkUnsignedCharArray::vtkUnsignedCharArray(System::IntPtr native, bool bConst) : vtkDataArray(native, bConst) {}



  vtkUnsignedCharArray::vtkUnsignedCharArray(bool donothing) : vtkDataArray(donothing) {}



  vtkUnsignedCharArray::vtkUnsignedCharArray() : vtkDataArray(false) {
  this->SetNativePointer(IntPtr(::vtkUnsignedCharArray::New()));
}



  vtkUnsignedCharArray::~vtkUnsignedCharArray() { }





} // end namespace vtkCommon
