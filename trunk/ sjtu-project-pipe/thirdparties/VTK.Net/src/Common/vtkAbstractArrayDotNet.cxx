

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkAbstractArrayDotNet.h"
#include "vtkDataArrayDotNet.h"
#include "vtkIdListDotNet.h"
#include "vtkIdTypeArrayDotNet.h"

// native includes
#include "strstream"
#include "vtkAbstractArray.h"
#include "vtkDataArray.h"
#include "vtkIdList.h"
#include "vtkIdTypeArray.h"

using namespace System;

namespace vtk {

System::String^ vtkAbstractArray::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkAbstractArray>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkAbstractArray::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkAbstractArray>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkAbstractArray^ vtkAbstractArray::NewInstance()
{
  ::vtkAbstractArray* retVal = static_cast<::vtkAbstractArray*>(vtk::ConvertManagedToNative<::vtkAbstractArray>(m_instance)->NewInstance());
  return gcnew vtkAbstractArray(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkAbstractArray::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkAbstractArray>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkAbstractArray::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkAbstractArray>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




int vtkAbstractArray::Allocate(int sz, int ext)
{
  int retVal = vtk::ConvertManagedToNative<::vtkAbstractArray>(m_instance)->Allocate(sz, ext);
  return retVal;
}



void vtkAbstractArray::Initialize()
{
  vtk::ConvertManagedToNative<::vtkAbstractArray>(m_instance)->Initialize();
}



int vtkAbstractArray::GetDataType()
{
  int retVal = vtk::ConvertManagedToNative<::vtkAbstractArray>(m_instance)->GetDataType();
  return retVal;
}



int vtkAbstractArray::GetDataTypeSize()
{
  int retVal = vtk::ConvertManagedToNative<::vtkAbstractArray>(m_instance)->GetDataTypeSize();
  return retVal;
}



unsigned long vtkAbstractArray::GetDataTypeSize(int type)
{
  unsigned long retVal = ::vtkAbstractArray::GetDataTypeSize(type);
  return retVal;
}



void vtkAbstractArray::GetValues(vtkIdList^ indices, vtkAbstractArray^ output)
{
  ::vtkIdList* indicesWrap = vtk::ConvertManagedToNative<::vtkIdList>(indices->GetNativePointer());
  ::vtkAbstractArray* outputWrap = vtk::ConvertManagedToNative<::vtkAbstractArray>(output->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkAbstractArray>(m_instance)->GetValues(indicesWrap, outputWrap);
}



void vtkAbstractArray::GetValues(int p1, int p2, vtkAbstractArray^ output)
{
  ::vtkAbstractArray* outputWrap = vtk::ConvertManagedToNative<::vtkAbstractArray>(output->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkAbstractArray>(m_instance)->GetValues(p1, p2, outputWrap);
}



int vtkAbstractArray::GetNumberOfElementComponents()
{
  int retVal = vtk::ConvertManagedToNative<::vtkAbstractArray>(m_instance)->GetNumberOfElementComponents();
  return retVal;
}



int vtkAbstractArray::GetElementComponentSize()
{
  int retVal = vtk::ConvertManagedToNative<::vtkAbstractArray>(m_instance)->GetElementComponentSize();
  return retVal;
}



System::IntPtr vtkAbstractArray::GetVoidPointer(int id)
{
  void* retVal = vtk::ConvertManagedToNative<::vtkAbstractArray>(m_instance)->GetVoidPointer(id);
  IntPtr retValWrap(retVal);
  return retValWrap;
}



void vtkAbstractArray::DeepCopy(vtkAbstractArray^ da)
{
  ::vtkAbstractArray* daWrap = vtk::ConvertManagedToNative<::vtkAbstractArray>(da->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkAbstractArray>(m_instance)->DeepCopy(daWrap);
}



void vtkAbstractArray::CopyValue(int toIndex, int fromIndex, vtkAbstractArray^ sourceArray)
{
  ::vtkAbstractArray* sourceArrayWrap = vtk::ConvertManagedToNative<::vtkAbstractArray>(sourceArray->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkAbstractArray>(m_instance)->CopyValue(toIndex, fromIndex, sourceArrayWrap);
}



void vtkAbstractArray::Squeeze()
{
  vtk::ConvertManagedToNative<::vtkAbstractArray>(m_instance)->Squeeze();
}



int vtkAbstractArray::Resize(int numTuples)
{
  int retVal = vtk::ConvertManagedToNative<::vtkAbstractArray>(m_instance)->Resize(numTuples);
  return retVal;
}



void vtkAbstractArray::Reset()
{
  vtk::ConvertManagedToNative<::vtkAbstractArray>(m_instance)->Reset();
}



int vtkAbstractArray::GetSize()
{
  int retVal = vtk::ConvertManagedToNative<::vtkAbstractArray>(m_instance)->GetSize();
  return retVal;
}



int vtkAbstractArray::GetMaxId()
{
  int retVal = vtk::ConvertManagedToNative<::vtkAbstractArray>(m_instance)->GetMaxId();
  return retVal;
}



void vtkAbstractArray::SetVoidArray(System::IntPtr arg0, int arg1, int arg2)
{
  vtk::ConvertManagedToNative<::vtkAbstractArray>(m_instance)->SetVoidArray(arg0.ToPointer(), arg1, arg2);
}



unsigned long vtkAbstractArray::GetActualMemorySize()
{
  unsigned long retVal = vtk::ConvertManagedToNative<::vtkAbstractArray>(m_instance)->GetActualMemorySize();
  return retVal;
}



void vtkAbstractArray::SetName(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  vtk::ConvertManagedToNative<::vtkAbstractArray>(m_instance)->SetName(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
}



System::String^ vtkAbstractArray::GetName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkAbstractArray>(m_instance)->GetName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



System::String^ vtkAbstractArray::GetDataTypeAsString()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkAbstractArray>(m_instance)->GetDataTypeAsString();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



void vtkAbstractArray::ConvertFromContiguous(vtkDataArray^ Data, vtkIdTypeArray^ Offsets)
{
  ::vtkDataArray* DataWrap = vtk::ConvertManagedToNative<::vtkDataArray>(Data->GetNativePointer());
  ::vtkIdTypeArray* OffsetsWrap = vtk::ConvertManagedToNative<::vtkIdTypeArray>(Offsets->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkAbstractArray>(m_instance)->ConvertFromContiguous(DataWrap, OffsetsWrap);
}



  vtkAbstractArray::vtkAbstractArray(System::IntPtr native, bool bConst) : vtkObject(native, bConst) {}



  vtkAbstractArray::vtkAbstractArray(bool donothing) : vtkObject(donothing) {}



  vtkAbstractArray::vtkAbstractArray() : vtkObject(false) {
  this->SetNativePointer(IntPtr(::vtkAbstractArray::New()));
}



  vtkAbstractArray::~vtkAbstractArray() { }





} // end namespace vtkCommon
