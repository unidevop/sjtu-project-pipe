

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkStringArrayDotNet.h"
#include "vtkDataArrayDotNet.h"
#include "vtkIdListDotNet.h"
#include "vtkIdTypeArrayDotNet.h"
#include "vtkObjectDotNet.h"

// native includes
#include "strstream"
#include "vtkStringArray.h"
#include "vtkDataArray.h"
#include "vtkIdList.h"
#include "vtkIdTypeArray.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkStringArray::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkStringArray>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkStringArray::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkStringArray>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkStringArray^ vtkStringArray::NewInstance()
{
  ::vtkStringArray* retVal = static_cast<::vtkStringArray*>(vtk::ConvertManagedToNative<::vtkStringArray>(m_instance)->NewInstance());
  return gcnew vtkStringArray(IntPtr(retVal), false);
}



vtkStringArray^ vtkStringArray::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkStringArray* retVal = static_cast<::vtkStringArray*>(::vtkStringArray::SafeDownCast(oWrap));
  return gcnew vtkStringArray(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkStringArray::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkStringArray>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkStringArray::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkStringArray>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




int vtkStringArray::GetDataType()
{
  int retVal = vtk::ConvertManagedToNative<::vtkStringArray>(m_instance)->GetDataType();
  return retVal;
}



void vtkStringArray::Initialize()
{
  vtk::ConvertManagedToNative<::vtkStringArray>(m_instance)->Initialize();
}



int vtkStringArray::GetDataTypeSize()
{
  int retVal = vtk::ConvertManagedToNative<::vtkStringArray>(m_instance)->GetDataTypeSize();
  return retVal;
}



void vtkStringArray::Squeeze()
{
  vtk::ConvertManagedToNative<::vtkStringArray>(m_instance)->Squeeze();
}



int vtkStringArray::Resize(int numTuples)
{
  int retVal = vtk::ConvertManagedToNative<::vtkStringArray>(m_instance)->Resize(numTuples);
  return retVal;
}



void vtkStringArray::GetValues(vtkIdList^ ptIds, vtkAbstractArray^ output)
{
  ::vtkIdList* ptIdsWrap = vtk::ConvertManagedToNative<::vtkIdList>(ptIds->GetNativePointer());
  ::vtkAbstractArray* outputWrap = vtk::ConvertManagedToNative<::vtkAbstractArray>(output->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkStringArray>(m_instance)->GetValues(ptIdsWrap, outputWrap);
}



void vtkStringArray::GetValues(int p1, int p2, vtkAbstractArray^ output)
{
  ::vtkAbstractArray* outputWrap = vtk::ConvertManagedToNative<::vtkAbstractArray>(output->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkStringArray>(m_instance)->GetValues(p1, p2, outputWrap);
}



void vtkStringArray::CopyValue(int toIndex, int fromIndex, vtkAbstractArray^ sourceArray)
{
  ::vtkAbstractArray* sourceArrayWrap = vtk::ConvertManagedToNative<::vtkAbstractArray>(sourceArray->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkStringArray>(m_instance)->CopyValue(toIndex, fromIndex, sourceArrayWrap);
}



int vtkStringArray::Allocate(int sz, int ext)
{
  int retVal = vtk::ConvertManagedToNative<::vtkStringArray>(m_instance)->Allocate(sz, ext);
  return retVal;
}



System::String^ vtkStringArray::GetValue(int id)
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkStringArray>(m_instance)->GetValue(id);
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



void vtkStringArray::SetValue(int id, System::String^ value)
{
  char* valueWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(value).ToPointer());
  vtk::ConvertManagedToNative<::vtkStringArray>(m_instance)->SetValue(id, valueWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(valueWrap));
}



void vtkStringArray::SetNumberOfValues(int number)
{
  vtk::ConvertManagedToNative<::vtkStringArray>(m_instance)->SetNumberOfValues(number);
}



int vtkStringArray::GetNumberOfValues()
{
  int retVal = vtk::ConvertManagedToNative<::vtkStringArray>(m_instance)->GetNumberOfValues();
  return retVal;
}



int vtkStringArray::GetNumberOfElementComponents()
{
  int retVal = vtk::ConvertManagedToNative<::vtkStringArray>(m_instance)->GetNumberOfElementComponents();
  return retVal;
}



int vtkStringArray::GetElementComponentSize()
{
  int retVal = vtk::ConvertManagedToNative<::vtkStringArray>(m_instance)->GetElementComponentSize();
  return retVal;
}



void vtkStringArray::InsertValue(int id, System::String^ val)
{
  char* valWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(val).ToPointer());
  vtk::ConvertManagedToNative<::vtkStringArray>(m_instance)->InsertValue(id, valWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(valWrap));
}



int vtkStringArray::InsertNextValue(System::String^ f)
{
  char* fWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(f).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkStringArray>(m_instance)->InsertNextValue(fWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(fWrap));
  return retVal;
}



unsigned long vtkStringArray::GetActualMemorySize()
{
  unsigned long retVal = vtk::ConvertManagedToNative<::vtkStringArray>(m_instance)->GetActualMemorySize();
  return retVal;
}



void vtkStringArray::ConvertFromContiguous(vtkDataArray^ Data, vtkIdTypeArray^ Offsets)
{
  ::vtkDataArray* DataWrap = vtk::ConvertManagedToNative<::vtkDataArray>(Data->GetNativePointer());
  ::vtkIdTypeArray* OffsetsWrap = vtk::ConvertManagedToNative<::vtkIdTypeArray>(Offsets->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkStringArray>(m_instance)->ConvertFromContiguous(DataWrap, OffsetsWrap);
}



  vtkStringArray::vtkStringArray(System::IntPtr native, bool bConst) : vtkAbstractArray(native, bConst) {}



  vtkStringArray::vtkStringArray(bool donothing) : vtkAbstractArray(donothing) {}



  vtkStringArray::vtkStringArray() : vtkAbstractArray(false) {
  this->SetNativePointer(IntPtr(::vtkStringArray::New()));
}



  vtkStringArray::~vtkStringArray() { }





} // end namespace vtkCommon
