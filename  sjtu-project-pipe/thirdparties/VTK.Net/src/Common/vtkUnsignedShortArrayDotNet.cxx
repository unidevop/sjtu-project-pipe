

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkUnsignedShortArrayDotNet.h"
#include "vtkObjectDotNet.h"

// native includes
#include "strstream"
#include "vtkUnsignedShortArray.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkUnsignedShortArray::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkUnsignedShortArray>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkUnsignedShortArray::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkUnsignedShortArray>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkUnsignedShortArray^ vtkUnsignedShortArray::NewInstance()
{
  ::vtkUnsignedShortArray* retVal = static_cast<::vtkUnsignedShortArray*>(vtk::ConvertManagedToNative<::vtkUnsignedShortArray>(m_instance)->NewInstance());
  return gcnew vtkUnsignedShortArray(IntPtr(retVal), false);
}



vtkUnsignedShortArray^ vtkUnsignedShortArray::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkUnsignedShortArray* retVal = static_cast<::vtkUnsignedShortArray*>(::vtkUnsignedShortArray::SafeDownCast(oWrap));
  return gcnew vtkUnsignedShortArray(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkUnsignedShortArray::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkUnsignedShortArray>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkUnsignedShortArray::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkUnsignedShortArray>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




int vtkUnsignedShortArray::GetDataType()
{
  int retVal = vtk::ConvertManagedToNative<::vtkUnsignedShortArray>(m_instance)->GetDataType();
  return retVal;
}



void vtkUnsignedShortArray::GetTupleValue(int i, array<unsigned short>^ tuple)
{
  pin_ptr<unsigned short> tuplePin = &tuple[0];
  unsigned short* nativetuplePin = tuplePin;
  vtk::ConvertManagedToNative<::vtkUnsignedShortArray>(m_instance)->GetTupleValue(i, nativetuplePin);
}



void vtkUnsignedShortArray::SetTupleValue(int i, array<unsigned short>^ tuple)
{
  pin_ptr<unsigned short> tuplePin = &tuple[0];
  unsigned short* nativetuplePin = tuplePin;
  vtk::ConvertManagedToNative<::vtkUnsignedShortArray>(m_instance)->SetTupleValue(i, nativetuplePin);
}



void vtkUnsignedShortArray::InsertTupleValue(int i, array<unsigned short>^ tuple)
{
  pin_ptr<unsigned short> tuplePin = &tuple[0];
  unsigned short* nativetuplePin = tuplePin;
  vtk::ConvertManagedToNative<::vtkUnsignedShortArray>(m_instance)->InsertTupleValue(i, nativetuplePin);
}



int vtkUnsignedShortArray::InsertNextTupleValue(array<unsigned short>^ tuple)
{
  pin_ptr<unsigned short> tuplePin = &tuple[0];
  unsigned short* nativetuplePin = tuplePin;
  int retVal = vtk::ConvertManagedToNative<::vtkUnsignedShortArray>(m_instance)->InsertNextTupleValue(nativetuplePin);
  return retVal;
}



unsigned short vtkUnsignedShortArray::GetValue(int id)
{
  unsigned short retVal = vtk::ConvertManagedToNative<::vtkUnsignedShortArray>(m_instance)->GetValue(id);
  return retVal;
}



void vtkUnsignedShortArray::SetValue(int id, unsigned short value)
{
  vtk::ConvertManagedToNative<::vtkUnsignedShortArray>(m_instance)->SetValue(id, value);
}



void vtkUnsignedShortArray::SetNumberOfValues(int number)
{
  vtk::ConvertManagedToNative<::vtkUnsignedShortArray>(m_instance)->SetNumberOfValues(number);
}



void vtkUnsignedShortArray::InsertValue(int id, unsigned short f)
{
  vtk::ConvertManagedToNative<::vtkUnsignedShortArray>(m_instance)->InsertValue(id, f);
}



int vtkUnsignedShortArray::InsertNextValue(unsigned short f)
{
  int retVal = vtk::ConvertManagedToNative<::vtkUnsignedShortArray>(m_instance)->InsertNextValue(f);
  return retVal;
}



void vtkUnsignedShortArray::SetArray(array<unsigned short>^ arg0, int size, int save)
{
  pin_ptr<unsigned short> arg0Pin = &arg0[0];
  unsigned short* nativearg0Pin = arg0Pin;
  vtk::ConvertManagedToNative<::vtkUnsignedShortArray>(m_instance)->SetArray(nativearg0Pin, size, save);
}



  vtkUnsignedShortArray::vtkUnsignedShortArray(System::IntPtr native, bool bConst) : vtkDataArray(native, bConst) {}



  vtkUnsignedShortArray::vtkUnsignedShortArray(bool donothing) : vtkDataArray(donothing) {}



  vtkUnsignedShortArray::vtkUnsignedShortArray() : vtkDataArray(false) {
  this->SetNativePointer(IntPtr(::vtkUnsignedShortArray::New()));
}



  vtkUnsignedShortArray::~vtkUnsignedShortArray() { }





} // end namespace vtkCommon
