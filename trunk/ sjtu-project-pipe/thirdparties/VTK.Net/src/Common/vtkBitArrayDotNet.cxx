

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkBitArrayDotNet.h"
#include "vtkObjectDotNet.h"

// native includes
#include "strstream"
#include "vtkBitArray.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkBitArray::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkBitArray>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkBitArray::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkBitArray>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkBitArray^ vtkBitArray::NewInstance()
{
  ::vtkBitArray* retVal = static_cast<::vtkBitArray*>(vtk::ConvertManagedToNative<::vtkBitArray>(m_instance)->NewInstance());
  return gcnew vtkBitArray(IntPtr(retVal), false);
}



vtkBitArray^ vtkBitArray::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkBitArray* retVal = static_cast<::vtkBitArray*>(::vtkBitArray::SafeDownCast(oWrap));
  return gcnew vtkBitArray(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkBitArray::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkBitArray>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkBitArray::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkBitArray>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




int vtkBitArray::Allocate(int sz, int ext)
{
  int retVal = vtk::ConvertManagedToNative<::vtkBitArray>(m_instance)->Allocate(sz, ext);
  return retVal;
}



void vtkBitArray::Initialize()
{
  vtk::ConvertManagedToNative<::vtkBitArray>(m_instance)->Initialize();
}



int vtkBitArray::GetDataType()
{
  int retVal = vtk::ConvertManagedToNative<::vtkBitArray>(m_instance)->GetDataType();
  return retVal;
}



int vtkBitArray::GetDataTypeSize()
{
  int retVal = vtk::ConvertManagedToNative<::vtkBitArray>(m_instance)->GetDataTypeSize();
  return retVal;
}



void vtkBitArray::SetNumberOfTuples(int number)
{
  vtk::ConvertManagedToNative<::vtkBitArray>(m_instance)->SetNumberOfTuples(number);
}



void vtkBitArray::GetTuple(int i, array<double>^ tuple)
{
  pin_ptr<double> tuplePin = &tuple[0];
  double* nativetuplePin = tuplePin;
  vtk::ConvertManagedToNative<::vtkBitArray>(m_instance)->GetTuple(i, nativetuplePin);
}



void vtkBitArray::SetTuple(int i, array<float>^ tuple)
{
  pin_ptr<float> tuplePin = &tuple[0];
  float* nativetuplePin = tuplePin;
  vtk::ConvertManagedToNative<::vtkBitArray>(m_instance)->SetTuple(i, nativetuplePin);
}



void vtkBitArray::SetTuple(int i, array<double>^ tuple)
{
  pin_ptr<double> tuplePin = &tuple[0];
  double* nativetuplePin = tuplePin;
  vtk::ConvertManagedToNative<::vtkBitArray>(m_instance)->SetTuple(i, nativetuplePin);
}



void vtkBitArray::InsertTuple(int i, array<float>^ tuple)
{
  pin_ptr<float> tuplePin = &tuple[0];
  float* nativetuplePin = tuplePin;
  vtk::ConvertManagedToNative<::vtkBitArray>(m_instance)->InsertTuple(i, nativetuplePin);
}



void vtkBitArray::InsertTuple(int i, array<double>^ tuple)
{
  pin_ptr<double> tuplePin = &tuple[0];
  double* nativetuplePin = tuplePin;
  vtk::ConvertManagedToNative<::vtkBitArray>(m_instance)->InsertTuple(i, nativetuplePin);
}



int vtkBitArray::InsertNextTuple(array<float>^ tuple)
{
  pin_ptr<float> tuplePin = &tuple[0];
  float* nativetuplePin = tuplePin;
  int retVal = vtk::ConvertManagedToNative<::vtkBitArray>(m_instance)->InsertNextTuple(nativetuplePin);
  return retVal;
}



int vtkBitArray::InsertNextTuple(array<double>^ tuple)
{
  pin_ptr<double> tuplePin = &tuple[0];
  double* nativetuplePin = tuplePin;
  int retVal = vtk::ConvertManagedToNative<::vtkBitArray>(m_instance)->InsertNextTuple(nativetuplePin);
  return retVal;
}



void vtkBitArray::SetComponent(int i, int j, double c)
{
  vtk::ConvertManagedToNative<::vtkBitArray>(m_instance)->SetComponent(i, j, c);
}



void vtkBitArray::Squeeze()
{
  vtk::ConvertManagedToNative<::vtkBitArray>(m_instance)->Squeeze();
}



int vtkBitArray::Resize(int numTuples)
{
  int retVal = vtk::ConvertManagedToNative<::vtkBitArray>(m_instance)->Resize(numTuples);
  return retVal;
}



int vtkBitArray::GetValue(int id)
{
  int retVal = vtk::ConvertManagedToNative<::vtkBitArray>(m_instance)->GetValue(id);
  return retVal;
}



void vtkBitArray::SetNumberOfValues(int number)
{
  vtk::ConvertManagedToNative<::vtkBitArray>(m_instance)->SetNumberOfValues(number);
}



void vtkBitArray::SetValue(int id, int value)
{
  vtk::ConvertManagedToNative<::vtkBitArray>(m_instance)->SetValue(id, value);
}



void vtkBitArray::InsertValue(int id, int i)
{
  vtk::ConvertManagedToNative<::vtkBitArray>(m_instance)->InsertValue(id, i);
}



int vtkBitArray::InsertNextValue(int i)
{
  int retVal = vtk::ConvertManagedToNative<::vtkBitArray>(m_instance)->InsertNextValue(i);
  return retVal;
}



void vtkBitArray::InsertComponent(int i, int j, double c)
{
  vtk::ConvertManagedToNative<::vtkBitArray>(m_instance)->InsertComponent(i, j, c);
}



System::IntPtr vtkBitArray::WriteVoidPointer(int id, int number)
{
  void* retVal = vtk::ConvertManagedToNative<::vtkBitArray>(m_instance)->WriteVoidPointer(id, number);
  IntPtr retValWrap(retVal);
  return retValWrap;
}



System::IntPtr vtkBitArray::GetVoidPointer(int id)
{
  void* retVal = vtk::ConvertManagedToNative<::vtkBitArray>(m_instance)->GetVoidPointer(id);
  IntPtr retValWrap(retVal);
  return retValWrap;
}



void vtkBitArray::DeepCopy(vtkDataArray^ da)
{
  ::vtkDataArray* daWrap = vtk::ConvertManagedToNative<::vtkDataArray>(da->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkBitArray>(m_instance)->DeepCopy(daWrap);
}



void vtkBitArray::SetArray(array<unsigned char>^ arg0, int size, int save)
{
  pin_ptr<unsigned char> arg0Pin = &arg0[0];
  unsigned char* nativearg0Pin = arg0Pin;
  vtk::ConvertManagedToNative<::vtkBitArray>(m_instance)->SetArray(nativearg0Pin, size, save);
}



void vtkBitArray::SetVoidArray(System::IntPtr arg0, int size, int save)
{
  vtk::ConvertManagedToNative<::vtkBitArray>(m_instance)->SetVoidArray(arg0.ToPointer(), size, save);
}



  vtkBitArray::vtkBitArray(System::IntPtr native, bool bConst) : vtkDataArray(native, bConst) {}



  vtkBitArray::vtkBitArray(bool donothing) : vtkDataArray(donothing) {}



  vtkBitArray::vtkBitArray() : vtkDataArray(false) {
  this->SetNativePointer(IntPtr(::vtkBitArray::New()));
}



  vtkBitArray::~vtkBitArray() { }





} // end namespace vtkCommon
