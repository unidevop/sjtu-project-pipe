

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkFloatArrayDotNet.h"
#include "vtkObjectDotNet.h"

// native includes
#include "strstream"
#include "vtkFloatArray.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkFloatArray::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkFloatArray>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkFloatArray::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkFloatArray>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkFloatArray^ vtkFloatArray::NewInstance()
{
  ::vtkFloatArray* retVal = static_cast<::vtkFloatArray*>(vtk::ConvertManagedToNative<::vtkFloatArray>(m_instance)->NewInstance());
  return gcnew vtkFloatArray(IntPtr(retVal), false);
}



vtkFloatArray^ vtkFloatArray::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkFloatArray* retVal = static_cast<::vtkFloatArray*>(::vtkFloatArray::SafeDownCast(oWrap));
  return gcnew vtkFloatArray(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkFloatArray::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkFloatArray>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkFloatArray::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkFloatArray>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




int vtkFloatArray::GetDataType()
{
  int retVal = vtk::ConvertManagedToNative<::vtkFloatArray>(m_instance)->GetDataType();
  return retVal;
}



void vtkFloatArray::GetTupleValue(int i, array<float>^ tuple)
{
  pin_ptr<float> tuplePin = &tuple[0];
  float* nativetuplePin = tuplePin;
  vtk::ConvertManagedToNative<::vtkFloatArray>(m_instance)->GetTupleValue(i, nativetuplePin);
}



void vtkFloatArray::SetTupleValue(int i, array<float>^ tuple)
{
  pin_ptr<float> tuplePin = &tuple[0];
  float* nativetuplePin = tuplePin;
  vtk::ConvertManagedToNative<::vtkFloatArray>(m_instance)->SetTupleValue(i, nativetuplePin);
}



void vtkFloatArray::InsertTupleValue(int i, array<float>^ tuple)
{
  pin_ptr<float> tuplePin = &tuple[0];
  float* nativetuplePin = tuplePin;
  vtk::ConvertManagedToNative<::vtkFloatArray>(m_instance)->InsertTupleValue(i, nativetuplePin);
}



int vtkFloatArray::InsertNextTupleValue(array<float>^ tuple)
{
  pin_ptr<float> tuplePin = &tuple[0];
  float* nativetuplePin = tuplePin;
  int retVal = vtk::ConvertManagedToNative<::vtkFloatArray>(m_instance)->InsertNextTupleValue(nativetuplePin);
  return retVal;
}



float vtkFloatArray::GetValue(int id)
{
  float retVal = vtk::ConvertManagedToNative<::vtkFloatArray>(m_instance)->GetValue(id);
  return retVal;
}



void vtkFloatArray::SetValue(int id, float value)
{
  vtk::ConvertManagedToNative<::vtkFloatArray>(m_instance)->SetValue(id, value);
}



void vtkFloatArray::SetNumberOfValues(int number)
{
  vtk::ConvertManagedToNative<::vtkFloatArray>(m_instance)->SetNumberOfValues(number);
}



void vtkFloatArray::InsertValue(int id, float f)
{
  vtk::ConvertManagedToNative<::vtkFloatArray>(m_instance)->InsertValue(id, f);
}



int vtkFloatArray::InsertNextValue(float f)
{
  int retVal = vtk::ConvertManagedToNative<::vtkFloatArray>(m_instance)->InsertNextValue(f);
  return retVal;
}



void vtkFloatArray::SetArray(array<float>^ arg0, int size, int save)
{
  pin_ptr<float> arg0Pin = &arg0[0];
  float* nativearg0Pin = arg0Pin;
  vtk::ConvertManagedToNative<::vtkFloatArray>(m_instance)->SetArray(nativearg0Pin, size, save);
}



  vtkFloatArray::vtkFloatArray(System::IntPtr native, bool bConst) : vtkDataArray(native, bConst) {}



  vtkFloatArray::vtkFloatArray(bool donothing) : vtkDataArray(donothing) {}



  vtkFloatArray::vtkFloatArray() : vtkDataArray(false) {
  this->SetNativePointer(IntPtr(::vtkFloatArray::New()));
}



  vtkFloatArray::~vtkFloatArray() { }





} // end namespace vtkCommon
