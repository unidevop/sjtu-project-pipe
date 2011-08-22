

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkFieldDataDotNet.h"

// native includes
#include "strstream"
#include "vtkFieldData.h"
#include "vtkDataArray.h"
#include "vtkIdList.h"

using namespace System;

namespace vtk {

System::String^ vtkFieldData::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkFieldData>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkFieldData::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkFieldData>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkFieldData^ vtkFieldData::NewInstance()
{
  ::vtkFieldData* retVal = static_cast<::vtkFieldData*>(vtk::ConvertManagedToNative<::vtkFieldData>(m_instance)->NewInstance());
  return gcnew vtkFieldData(IntPtr(retVal), false);
}



vtkFieldData^ vtkFieldData::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkFieldData* retVal = static_cast<::vtkFieldData*>(::vtkFieldData::SafeDownCast(oWrap));
  return gcnew vtkFieldData(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkFieldData::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkFieldData>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkFieldData::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkFieldData>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkFieldData::Initialize()
{
  vtk::ConvertManagedToNative<::vtkFieldData>(m_instance)->Initialize();
}



int vtkFieldData::Allocate(int sz, int ext)
{
  int retVal = vtk::ConvertManagedToNative<::vtkFieldData>(m_instance)->Allocate(sz, ext);
  return retVal;
}



void vtkFieldData::CopyStructure(vtkFieldData^ arg0)
{
  ::vtkFieldData* arg0Wrap = vtk::ConvertManagedToNative<::vtkFieldData>(arg0->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkFieldData>(m_instance)->CopyStructure(arg0Wrap);
}



void vtkFieldData::AllocateArrays(int num)
{
  vtk::ConvertManagedToNative<::vtkFieldData>(m_instance)->AllocateArrays(num);
}



int vtkFieldData::GetNumberOfArrays()
{
  int retVal = vtk::ConvertManagedToNative<::vtkFieldData>(m_instance)->GetNumberOfArrays();
  return retVal;
}



int vtkFieldData::AddArray(vtkDataArray^ arg0)
{
  ::vtkDataArray* arg0Wrap = vtk::ConvertManagedToNative<::vtkDataArray>(arg0->GetNativePointer());
  int retVal = vtk::ConvertManagedToNative<::vtkFieldData>(m_instance)->AddArray(arg0Wrap);
  return retVal;
}



void vtkFieldData::RemoveArray(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  vtk::ConvertManagedToNative<::vtkFieldData>(m_instance)->RemoveArray(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
}



vtkDataArray^ vtkFieldData::GetArray(int i)
{
  ::vtkDataArray* retVal = static_cast<::vtkDataArray*>(vtk::ConvertManagedToNative<::vtkFieldData>(m_instance)->GetArray(i));
  return gcnew vtkDataArray(IntPtr(retVal), false);
}



vtkDataArray^ vtkFieldData::GetArray(System::String^ arrayName, int% index)
{
  char* arrayNameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(arrayName).ToPointer());
  pin_ptr<int> indexPin = &index;
  ::vtkDataArray* retVal = static_cast<::vtkDataArray*>(vtk::ConvertManagedToNative<::vtkFieldData>(m_instance)->GetArray(arrayNameWrap, *indexPin));
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(arrayNameWrap));
  return gcnew vtkDataArray(IntPtr(retVal), false);
}



vtkDataArray^ vtkFieldData::GetArray(System::String^ arrayName)
{
  char* arrayNameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(arrayName).ToPointer());
  ::vtkDataArray* retVal = static_cast<::vtkDataArray*>(vtk::ConvertManagedToNative<::vtkFieldData>(m_instance)->GetArray(arrayNameWrap));
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(arrayNameWrap));
  return gcnew vtkDataArray(IntPtr(retVal), false);
}



int vtkFieldData::HasArray(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkFieldData>(m_instance)->HasArray(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



System::String^ vtkFieldData::GetArrayName(int i)
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkFieldData>(m_instance)->GetArrayName(i);
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



void vtkFieldData::PassData(vtkFieldData^ fd)
{
  ::vtkFieldData* fdWrap = vtk::ConvertManagedToNative<::vtkFieldData>(fd->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkFieldData>(m_instance)->PassData(fdWrap);
}



void vtkFieldData::CopyFieldOn(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  vtk::ConvertManagedToNative<::vtkFieldData>(m_instance)->CopyFieldOn(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
}



void vtkFieldData::CopyFieldOff(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  vtk::ConvertManagedToNative<::vtkFieldData>(m_instance)->CopyFieldOff(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
}



void vtkFieldData::CopyAllOn()
{
  vtk::ConvertManagedToNative<::vtkFieldData>(m_instance)->CopyAllOn();
}



void vtkFieldData::CopyAllOff()
{
  vtk::ConvertManagedToNative<::vtkFieldData>(m_instance)->CopyAllOff();
}



void vtkFieldData::DeepCopy(vtkFieldData^ da)
{
  ::vtkFieldData* daWrap = vtk::ConvertManagedToNative<::vtkFieldData>(da->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkFieldData>(m_instance)->DeepCopy(daWrap);
}



void vtkFieldData::ShallowCopy(vtkFieldData^ da)
{
  ::vtkFieldData* daWrap = vtk::ConvertManagedToNative<::vtkFieldData>(da->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkFieldData>(m_instance)->ShallowCopy(daWrap);
}



void vtkFieldData::Squeeze()
{
  vtk::ConvertManagedToNative<::vtkFieldData>(m_instance)->Squeeze();
}



void vtkFieldData::Reset()
{
  vtk::ConvertManagedToNative<::vtkFieldData>(m_instance)->Reset();
}



unsigned long vtkFieldData::GetActualMemorySize()
{
  unsigned long retVal = vtk::ConvertManagedToNative<::vtkFieldData>(m_instance)->GetActualMemorySize();
  return retVal;
}



unsigned long vtkFieldData::GetMTime()
{
  unsigned long retVal = vtk::ConvertManagedToNative<::vtkFieldData>(m_instance)->GetMTime();
  return retVal;
}



void vtkFieldData::GetField(vtkIdList^ ptId, vtkFieldData^ f)
{
  ::vtkIdList* ptIdWrap = vtk::ConvertManagedToNative<::vtkIdList>(ptId->GetNativePointer());
  ::vtkFieldData* fWrap = vtk::ConvertManagedToNative<::vtkFieldData>(f->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkFieldData>(m_instance)->GetField(ptIdWrap, fWrap);
}



int vtkFieldData::GetArrayContainingComponent(int i, int% arrayComp)
{
  pin_ptr<int> arrayCompPin = &arrayComp;
  int retVal = vtk::ConvertManagedToNative<::vtkFieldData>(m_instance)->GetArrayContainingComponent(i, *arrayCompPin);
  return retVal;
}



int vtkFieldData::GetNumberOfComponents()
{
  int retVal = vtk::ConvertManagedToNative<::vtkFieldData>(m_instance)->GetNumberOfComponents();
  return retVal;
}



int vtkFieldData::GetNumberOfTuples()
{
  int retVal = vtk::ConvertManagedToNative<::vtkFieldData>(m_instance)->GetNumberOfTuples();
  return retVal;
}



void vtkFieldData::SetNumberOfTuples(int number)
{
  vtk::ConvertManagedToNative<::vtkFieldData>(m_instance)->SetNumberOfTuples(number);
}



void vtkFieldData::GetTuple(int i, array<double>^ tuple)
{
  pin_ptr<double> tuplePin = &tuple[0];
  double* nativetuplePin = tuplePin;
  vtk::ConvertManagedToNative<::vtkFieldData>(m_instance)->GetTuple(i, nativetuplePin);
}



void vtkFieldData::SetTuple(int i, array<double>^ tuple)
{
  pin_ptr<double> tuplePin = &tuple[0];
  double* nativetuplePin = tuplePin;
  vtk::ConvertManagedToNative<::vtkFieldData>(m_instance)->SetTuple(i, nativetuplePin);
}



void vtkFieldData::InsertTuple(int i, array<double>^ tuple)
{
  pin_ptr<double> tuplePin = &tuple[0];
  double* nativetuplePin = tuplePin;
  vtk::ConvertManagedToNative<::vtkFieldData>(m_instance)->InsertTuple(i, nativetuplePin);
}



int vtkFieldData::InsertNextTuple(array<double>^ tuple)
{
  pin_ptr<double> tuplePin = &tuple[0];
  double* nativetuplePin = tuplePin;
  int retVal = vtk::ConvertManagedToNative<::vtkFieldData>(m_instance)->InsertNextTuple(nativetuplePin);
  return retVal;
}



double vtkFieldData::GetComponent(int i, int j)
{
  double retVal = vtk::ConvertManagedToNative<::vtkFieldData>(m_instance)->GetComponent(i, j);
  return retVal;
}



void vtkFieldData::SetComponent(int i, int j, double c)
{
  vtk::ConvertManagedToNative<::vtkFieldData>(m_instance)->SetComponent(i, j, c);
}



void vtkFieldData::InsertComponent(int i, int j, double c)
{
  vtk::ConvertManagedToNative<::vtkFieldData>(m_instance)->InsertComponent(i, j, c);
}



  vtkFieldData::vtkFieldData(System::IntPtr native, bool bConst) : vtkObject(native, bConst) {}



  vtkFieldData::vtkFieldData(bool donothing) : vtkObject(donothing) {}



  vtkFieldData::vtkFieldData() : vtkObject(false) {
  this->SetNativePointer(IntPtr(::vtkFieldData::New()));
}



  vtkFieldData::~vtkFieldData() { }





} // end namespace vtkFiltering
