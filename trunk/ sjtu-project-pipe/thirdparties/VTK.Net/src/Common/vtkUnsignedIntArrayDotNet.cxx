

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkUnsignedIntArrayDotNet.h"
#include "vtkObjectDotNet.h"

// native includes
#include "strstream"
#include "vtkUnsignedIntArray.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkUnsignedIntArray::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkUnsignedIntArray>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkUnsignedIntArray::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkUnsignedIntArray>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkUnsignedIntArray^ vtkUnsignedIntArray::NewInstance()
{
  ::vtkUnsignedIntArray* retVal = static_cast<::vtkUnsignedIntArray*>(vtk::ConvertManagedToNative<::vtkUnsignedIntArray>(m_instance)->NewInstance());
  return gcnew vtkUnsignedIntArray(IntPtr(retVal), false);
}



vtkUnsignedIntArray^ vtkUnsignedIntArray::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkUnsignedIntArray* retVal = static_cast<::vtkUnsignedIntArray*>(::vtkUnsignedIntArray::SafeDownCast(oWrap));
  return gcnew vtkUnsignedIntArray(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkUnsignedIntArray::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkUnsignedIntArray>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkUnsignedIntArray::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkUnsignedIntArray>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




int vtkUnsignedIntArray::GetDataType()
{
  int retVal = vtk::ConvertManagedToNative<::vtkUnsignedIntArray>(m_instance)->GetDataType();
  return retVal;
}



void vtkUnsignedIntArray::GetTupleValue(int i, array<unsigned int>^ arg1)
{
  pin_ptr<unsigned int> arg1Pin = &arg1[0];
  unsigned int* nativearg1Pin = arg1Pin;
  vtk::ConvertManagedToNative<::vtkUnsignedIntArray>(m_instance)->GetTupleValue(i, nativearg1Pin);
}



void vtkUnsignedIntArray::SetTupleValue(int i, array<unsigned int>^ tuple)
{
  pin_ptr<unsigned int> tuplePin = &tuple[0];
  unsigned int* nativetuplePin = tuplePin;
  vtk::ConvertManagedToNative<::vtkUnsignedIntArray>(m_instance)->SetTupleValue(i, nativetuplePin);
}



void vtkUnsignedIntArray::InsertTupleValue(int i, array<unsigned int>^ tuple)
{
  pin_ptr<unsigned int> tuplePin = &tuple[0];
  unsigned int* nativetuplePin = tuplePin;
  vtk::ConvertManagedToNative<::vtkUnsignedIntArray>(m_instance)->InsertTupleValue(i, nativetuplePin);
}



int vtkUnsignedIntArray::InsertNextTupleValue(array<unsigned int>^ tuple)
{
  pin_ptr<unsigned int> tuplePin = &tuple[0];
  unsigned int* nativetuplePin = tuplePin;
  int retVal = vtk::ConvertManagedToNative<::vtkUnsignedIntArray>(m_instance)->InsertNextTupleValue(nativetuplePin);
  return retVal;
}



unsigned int vtkUnsignedIntArray::GetValue(int id)
{
  unsigned int retVal = vtk::ConvertManagedToNative<::vtkUnsignedIntArray>(m_instance)->GetValue(id);
  return retVal;
}



void vtkUnsignedIntArray::SetValue(int id, unsigned int value)
{
  vtk::ConvertManagedToNative<::vtkUnsignedIntArray>(m_instance)->SetValue(id, value);
}



void vtkUnsignedIntArray::SetNumberOfValues(int number)
{
  vtk::ConvertManagedToNative<::vtkUnsignedIntArray>(m_instance)->SetNumberOfValues(number);
}



void vtkUnsignedIntArray::InsertValue(int id, unsigned int f)
{
  vtk::ConvertManagedToNative<::vtkUnsignedIntArray>(m_instance)->InsertValue(id, f);
}



int vtkUnsignedIntArray::InsertNextValue(unsigned int f)
{
  int retVal = vtk::ConvertManagedToNative<::vtkUnsignedIntArray>(m_instance)->InsertNextValue(f);
  return retVal;
}



void vtkUnsignedIntArray::SetArray(array<unsigned int>^ arg0, int size, int save)
{
  pin_ptr<unsigned int> arg0Pin = &arg0[0];
  unsigned int* nativearg0Pin = arg0Pin;
  vtk::ConvertManagedToNative<::vtkUnsignedIntArray>(m_instance)->SetArray(nativearg0Pin, size, save);
}



  vtkUnsignedIntArray::vtkUnsignedIntArray(System::IntPtr native, bool bConst) : vtkDataArray(native, bConst) {}



  vtkUnsignedIntArray::vtkUnsignedIntArray(bool donothing) : vtkDataArray(donothing) {}



  vtkUnsignedIntArray::vtkUnsignedIntArray() : vtkDataArray(false) {
  this->SetNativePointer(IntPtr(::vtkUnsignedIntArray::New()));
}



  vtkUnsignedIntArray::~vtkUnsignedIntArray() { }





} // end namespace vtkCommon
