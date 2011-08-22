

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkDataArrayDotNet.h"
#include "vtkDoubleArrayDotNet.h"
#include "vtkIdListDotNet.h"
#include "vtkLookupTableDotNet.h"

// native includes
#include "strstream"
#include "vtkDataArray.h"
#include "vtkDoubleArray.h"
#include "vtkIdList.h"
#include "vtkLookupTable.h"

using namespace System;

namespace vtk {

System::String^ vtkDataArray::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkDataArray>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkDataArray::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkDataArray>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkDataArray^ vtkDataArray::NewInstance()
{
  ::vtkDataArray* retVal = static_cast<::vtkDataArray*>(vtk::ConvertManagedToNative<::vtkDataArray>(m_instance)->NewInstance());
  return gcnew vtkDataArray(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkDataArray::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkDataArray>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkDataArray::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkDataArray>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




int vtkDataArray::Allocate(int sz, int ext)
{
  int retVal = vtk::ConvertManagedToNative<::vtkDataArray>(m_instance)->Allocate(sz, ext);
  return retVal;
}



void vtkDataArray::Initialize()
{
  vtk::ConvertManagedToNative<::vtkDataArray>(m_instance)->Initialize();
}



int vtkDataArray::GetDataType()
{
  int retVal = vtk::ConvertManagedToNative<::vtkDataArray>(m_instance)->GetDataType();
  return retVal;
}



int vtkDataArray::GetDataTypeSize()
{
  int retVal = vtk::ConvertManagedToNative<::vtkDataArray>(m_instance)->GetDataTypeSize();
  return retVal;
}



unsigned long vtkDataArray::GetDataTypeSize(int type)
{
  unsigned long retVal = ::vtkDataArray::GetDataTypeSize(type);
  return retVal;
}



void vtkDataArray::SetNumberOfComponents(int arg0)
{
  vtk::ConvertManagedToNative<::vtkDataArray>(m_instance)->SetNumberOfComponents(arg0);
}



int vtkDataArray::GetNumberOfComponentsMinValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkDataArray>(m_instance)->GetNumberOfComponentsMinValue();
  return retVal;
}



int vtkDataArray::GetNumberOfComponentsMaxValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkDataArray>(m_instance)->GetNumberOfComponentsMaxValue();
  return retVal;
}



int vtkDataArray::GetNumberOfComponents()
{
  int retVal = vtk::ConvertManagedToNative<::vtkDataArray>(m_instance)->GetNumberOfComponents();
  return retVal;
}



void vtkDataArray::SetNumberOfTuples(int number)
{
  vtk::ConvertManagedToNative<::vtkDataArray>(m_instance)->SetNumberOfTuples(number);
}



int vtkDataArray::GetNumberOfTuples()
{
  int retVal = vtk::ConvertManagedToNative<::vtkDataArray>(m_instance)->GetNumberOfTuples();
  return retVal;
}



void vtkDataArray::GetTuple(int i, array<double>^ tuple)
{
  pin_ptr<double> tuplePin = &tuple[0];
  double* nativetuplePin = tuplePin;
  vtk::ConvertManagedToNative<::vtkDataArray>(m_instance)->GetTuple(i, nativetuplePin);
}



double vtkDataArray::GetTuple1(int i)
{
  double retVal = vtk::ConvertManagedToNative<::vtkDataArray>(m_instance)->GetTuple1(i);
  return retVal;
}



array<double>^ vtkDataArray::GetTuple2(int i)
{
  const double* retVal = vtk::ConvertManagedToNative<::vtkDataArray>(m_instance)->GetTuple2(i);
  array<double>^ mRetVal = gcnew array<double>(2);
  for (size_t cprIdx=0; cprIdx<2; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



array<double>^ vtkDataArray::GetTuple3(int i)
{
  const double* retVal = vtk::ConvertManagedToNative<::vtkDataArray>(m_instance)->GetTuple3(i);
  array<double>^ mRetVal = gcnew array<double>(3);
  for (size_t cprIdx=0; cprIdx<3; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



array<double>^ vtkDataArray::GetTuple4(int i)
{
  const double* retVal = vtk::ConvertManagedToNative<::vtkDataArray>(m_instance)->GetTuple4(i);
  array<double>^ mRetVal = gcnew array<double>(4);
  for (size_t cprIdx=0; cprIdx<4; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



array<double>^ vtkDataArray::GetTuple9(int i)
{
  const double* retVal = vtk::ConvertManagedToNative<::vtkDataArray>(m_instance)->GetTuple9(i);
  array<double>^ mRetVal = gcnew array<double>(9);
  for (size_t cprIdx=0; cprIdx<9; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



void vtkDataArray::GetTuples(vtkIdList^ ptIds, vtkDataArray^ output)
{
  ::vtkIdList* ptIdsWrap = vtk::ConvertManagedToNative<::vtkIdList>(ptIds->GetNativePointer());
  ::vtkDataArray* outputWrap = vtk::ConvertManagedToNative<::vtkDataArray>(output->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkDataArray>(m_instance)->GetTuples(ptIdsWrap, outputWrap);
}



void vtkDataArray::GetTuples(int p1, int p2, vtkDataArray^ output)
{
  ::vtkDataArray* outputWrap = vtk::ConvertManagedToNative<::vtkDataArray>(output->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkDataArray>(m_instance)->GetTuples(p1, p2, outputWrap);
}



void vtkDataArray::SetTuple(int i, array<float>^ tuple)
{
  pin_ptr<float> tuplePin = &tuple[0];
  float* nativetuplePin = tuplePin;
  vtk::ConvertManagedToNative<::vtkDataArray>(m_instance)->SetTuple(i, nativetuplePin);
}



void vtkDataArray::SetTuple(int i, array<double>^ tuple)
{
  pin_ptr<double> tuplePin = &tuple[0];
  double* nativetuplePin = tuplePin;
  vtk::ConvertManagedToNative<::vtkDataArray>(m_instance)->SetTuple(i, nativetuplePin);
}



void vtkDataArray::SetTuple1(int i, double value)
{
  vtk::ConvertManagedToNative<::vtkDataArray>(m_instance)->SetTuple1(i, value);
}



void vtkDataArray::SetTuple2(int i, double val0, double val1)
{
  vtk::ConvertManagedToNative<::vtkDataArray>(m_instance)->SetTuple2(i, val0, val1);
}



void vtkDataArray::SetTuple3(int i, double val0, double val1, double val2)
{
  vtk::ConvertManagedToNative<::vtkDataArray>(m_instance)->SetTuple3(i, val0, val1, val2);
}



void vtkDataArray::SetTuple4(int i, double val0, double val1, double val2, double val3)
{
  vtk::ConvertManagedToNative<::vtkDataArray>(m_instance)->SetTuple4(i, val0, val1, val2, val3);
}



void vtkDataArray::SetTuple9(int i, double val0, double val1, double val2, double val3, double val4, double val5, double val6, double val7, double val8)
{
  vtk::ConvertManagedToNative<::vtkDataArray>(m_instance)->SetTuple9(i, val0, val1, val2, val3, val4, val5, val6, val7, val8);
}



void vtkDataArray::InsertTuple(int i, array<float>^ tuple)
{
  pin_ptr<float> tuplePin = &tuple[0];
  float* nativetuplePin = tuplePin;
  vtk::ConvertManagedToNative<::vtkDataArray>(m_instance)->InsertTuple(i, nativetuplePin);
}



void vtkDataArray::InsertTuple(int i, array<double>^ tuple)
{
  pin_ptr<double> tuplePin = &tuple[0];
  double* nativetuplePin = tuplePin;
  vtk::ConvertManagedToNative<::vtkDataArray>(m_instance)->InsertTuple(i, nativetuplePin);
}



void vtkDataArray::InsertTuple1(int i, double value)
{
  vtk::ConvertManagedToNative<::vtkDataArray>(m_instance)->InsertTuple1(i, value);
}



void vtkDataArray::InsertTuple2(int i, double val0, double val1)
{
  vtk::ConvertManagedToNative<::vtkDataArray>(m_instance)->InsertTuple2(i, val0, val1);
}



void vtkDataArray::InsertTuple3(int i, double val0, double val1, double val2)
{
  vtk::ConvertManagedToNative<::vtkDataArray>(m_instance)->InsertTuple3(i, val0, val1, val2);
}



void vtkDataArray::InsertTuple4(int i, double val0, double val1, double val2, double val3)
{
  vtk::ConvertManagedToNative<::vtkDataArray>(m_instance)->InsertTuple4(i, val0, val1, val2, val3);
}



void vtkDataArray::InsertTuple9(int i, double val0, double val1, double val2, double val3, double val4, double val5, double val6, double val7, double val8)
{
  vtk::ConvertManagedToNative<::vtkDataArray>(m_instance)->InsertTuple9(i, val0, val1, val2, val3, val4, val5, val6, val7, val8);
}



int vtkDataArray::InsertNextTuple(array<float>^ tuple)
{
  pin_ptr<float> tuplePin = &tuple[0];
  float* nativetuplePin = tuplePin;
  int retVal = vtk::ConvertManagedToNative<::vtkDataArray>(m_instance)->InsertNextTuple(nativetuplePin);
  return retVal;
}



int vtkDataArray::InsertNextTuple(array<double>^ tuple)
{
  pin_ptr<double> tuplePin = &tuple[0];
  double* nativetuplePin = tuplePin;
  int retVal = vtk::ConvertManagedToNative<::vtkDataArray>(m_instance)->InsertNextTuple(nativetuplePin);
  return retVal;
}



void vtkDataArray::InsertNextTuple1(double value)
{
  vtk::ConvertManagedToNative<::vtkDataArray>(m_instance)->InsertNextTuple1(value);
}



void vtkDataArray::InsertNextTuple2(double val0, double val1)
{
  vtk::ConvertManagedToNative<::vtkDataArray>(m_instance)->InsertNextTuple2(val0, val1);
}



void vtkDataArray::InsertNextTuple3(double val0, double val1, double val2)
{
  vtk::ConvertManagedToNative<::vtkDataArray>(m_instance)->InsertNextTuple3(val0, val1, val2);
}



void vtkDataArray::InsertNextTuple4(double val0, double val1, double val2, double val3)
{
  vtk::ConvertManagedToNative<::vtkDataArray>(m_instance)->InsertNextTuple4(val0, val1, val2, val3);
}



void vtkDataArray::InsertNextTuple9(double val0, double val1, double val2, double val3, double val4, double val5, double val6, double val7, double val8)
{
  vtk::ConvertManagedToNative<::vtkDataArray>(m_instance)->InsertNextTuple9(val0, val1, val2, val3, val4, val5, val6, val7, val8);
}



double vtkDataArray::GetComponent(int i, int j)
{
  double retVal = vtk::ConvertManagedToNative<::vtkDataArray>(m_instance)->GetComponent(i, j);
  return retVal;
}



void vtkDataArray::SetComponent(int i, int j, double c)
{
  vtk::ConvertManagedToNative<::vtkDataArray>(m_instance)->SetComponent(i, j, c);
}



void vtkDataArray::InsertComponent(int i, int j, double c)
{
  vtk::ConvertManagedToNative<::vtkDataArray>(m_instance)->InsertComponent(i, j, c);
}



void vtkDataArray::GetData(int tupleMin, int tupleMax, int compMin, int compMax, vtkDoubleArray^ data)
{
  ::vtkDoubleArray* dataWrap = vtk::ConvertManagedToNative<::vtkDoubleArray>(data->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkDataArray>(m_instance)->GetData(tupleMin, tupleMax, compMin, compMax, dataWrap);
}



void vtkDataArray::DeepCopy(vtkDataArray^ da)
{
  ::vtkDataArray* daWrap = vtk::ConvertManagedToNative<::vtkDataArray>(da->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkDataArray>(m_instance)->DeepCopy(daWrap);
}



void vtkDataArray::FillComponent(int j, double c)
{
  vtk::ConvertManagedToNative<::vtkDataArray>(m_instance)->FillComponent(j, c);
}



void vtkDataArray::CopyComponent(int j, vtkDataArray^ from, int fromComponent)
{
  ::vtkDataArray* fromWrap = vtk::ConvertManagedToNative<::vtkDataArray>(from->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkDataArray>(m_instance)->CopyComponent(j, fromWrap, fromComponent);
}



System::IntPtr vtkDataArray::WriteVoidPointer(int id, int number)
{
  void* retVal = vtk::ConvertManagedToNative<::vtkDataArray>(m_instance)->WriteVoidPointer(id, number);
  IntPtr retValWrap(retVal);
  return retValWrap;
}



System::IntPtr vtkDataArray::GetVoidPointer(int id)
{
  void* retVal = vtk::ConvertManagedToNative<::vtkDataArray>(m_instance)->GetVoidPointer(id);
  IntPtr retValWrap(retVal);
  return retValWrap;
}



void vtkDataArray::Squeeze()
{
  vtk::ConvertManagedToNative<::vtkDataArray>(m_instance)->Squeeze();
}



int vtkDataArray::Resize(int numTuples)
{
  int retVal = vtk::ConvertManagedToNative<::vtkDataArray>(m_instance)->Resize(numTuples);
  return retVal;
}



void vtkDataArray::Reset()
{
  vtk::ConvertManagedToNative<::vtkDataArray>(m_instance)->Reset();
}



int vtkDataArray::GetSize()
{
  int retVal = vtk::ConvertManagedToNative<::vtkDataArray>(m_instance)->GetSize();
  return retVal;
}



int vtkDataArray::GetMaxId()
{
  int retVal = vtk::ConvertManagedToNative<::vtkDataArray>(m_instance)->GetMaxId();
  return retVal;
}



void vtkDataArray::SetVoidArray(System::IntPtr arg0, int arg1, int arg2)
{
  vtk::ConvertManagedToNative<::vtkDataArray>(m_instance)->SetVoidArray(arg0.ToPointer(), arg1, arg2);
}



void vtkDataArray::ExportToVoidPointer(System::IntPtr arg0)
{
  vtk::ConvertManagedToNative<::vtkDataArray>(m_instance)->ExportToVoidPointer(arg0.ToPointer());
}



unsigned long vtkDataArray::GetActualMemorySize()
{
  unsigned long retVal = vtk::ConvertManagedToNative<::vtkDataArray>(m_instance)->GetActualMemorySize();
  return retVal;
}



void vtkDataArray::CreateDefaultLookupTable()
{
  vtk::ConvertManagedToNative<::vtkDataArray>(m_instance)->CreateDefaultLookupTable();
}



void vtkDataArray::SetLookupTable(vtkLookupTable^ lut)
{
  ::vtkLookupTable* lutWrap = vtk::ConvertManagedToNative<::vtkLookupTable>(lut->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkDataArray>(m_instance)->SetLookupTable(lutWrap);
}



vtkLookupTable^ vtkDataArray::GetLookupTable()
{
  ::vtkLookupTable* retVal = static_cast<::vtkLookupTable*>(vtk::ConvertManagedToNative<::vtkDataArray>(m_instance)->GetLookupTable());
  return gcnew vtkLookupTable(IntPtr(retVal), false);
}



void vtkDataArray::SetName(System::String^ arg0)
{
  char* arg0Wrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(arg0).ToPointer());
  vtk::ConvertManagedToNative<::vtkDataArray>(m_instance)->SetName(arg0Wrap);
  arg0->Remove(0,arg0->Length);
  arg0->Insert(0,System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(arg0Wrap)));
System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(arg0Wrap));
}



System::String^ vtkDataArray::GetName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkDataArray>(m_instance)->GetName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



void vtkDataArray::GetRange(array<double>^ range, int comp)
{
  pin_ptr<double> rangePin = &range[0];
  double* nativerangePin = rangePin;
  vtk::ConvertManagedToNative<::vtkDataArray>(m_instance)->GetRange(nativerangePin, comp);
}



array<double>^ vtkDataArray::GetRange(int comp)
{
  const double* retVal = vtk::ConvertManagedToNative<::vtkDataArray>(m_instance)->GetRange(comp);
  array<double>^ mRetVal = gcnew array<double>(2);
  for (size_t cprIdx=0; cprIdx<2; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



void vtkDataArray::ComputeRange(int comp)
{
  vtk::ConvertManagedToNative<::vtkDataArray>(m_instance)->ComputeRange(comp);
}



array<double>^ vtkDataArray::GetRange()
{
  const double* retVal = vtk::ConvertManagedToNative<::vtkDataArray>(m_instance)->GetRange();
  array<double>^ mRetVal = gcnew array<double>(2);
  for (size_t cprIdx=0; cprIdx<2; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



void vtkDataArray::GetRange(array<double>^ range)
{
  pin_ptr<double> rangePin = &range[0];
  double* nativerangePin = rangePin;
  vtk::ConvertManagedToNative<::vtkDataArray>(m_instance)->GetRange(nativerangePin);
}



void vtkDataArray::GetDataTypeRange(array<double>^ range)
{
  pin_ptr<double> rangePin = &range[0];
  double* nativerangePin = rangePin;
  vtk::ConvertManagedToNative<::vtkDataArray>(m_instance)->GetDataTypeRange(nativerangePin);
}



double vtkDataArray::GetDataTypeMin()
{
  double retVal = vtk::ConvertManagedToNative<::vtkDataArray>(m_instance)->GetDataTypeMin();
  return retVal;
}



double vtkDataArray::GetDataTypeMax()
{
  double retVal = vtk::ConvertManagedToNative<::vtkDataArray>(m_instance)->GetDataTypeMax();
  return retVal;
}



void vtkDataArray::GetDataTypeRange(int type, array<double>^ range)
{
  pin_ptr<double> rangePin = &range[0];
  double* nativerangePin = rangePin;
  ::vtkDataArray::GetDataTypeRange(type, nativerangePin);
}



double vtkDataArray::GetDataTypeMin(int type)
{
  double retVal = ::vtkDataArray::GetDataTypeMin(type);
  return retVal;
}



double vtkDataArray::GetDataTypeMax(int type)
{
  double retVal = ::vtkDataArray::GetDataTypeMax(type);
  return retVal;
}



double vtkDataArray::GetMaxNorm()
{
  double retVal = vtk::ConvertManagedToNative<::vtkDataArray>(m_instance)->GetMaxNorm();
  return retVal;
}



vtkDataArray^ vtkDataArray::CreateDataArray(int dataType)
{
  ::vtkDataArray* retVal = static_cast<::vtkDataArray*>(::vtkDataArray::CreateDataArray(dataType));
  return gcnew vtkDataArray(IntPtr(retVal), false);
}



  vtkDataArray::vtkDataArray(System::IntPtr native, bool bConst) : vtkObject(native, bConst) {}



  vtkDataArray::vtkDataArray(bool donothing) : vtkObject(donothing) {}



  vtkDataArray::vtkDataArray() : vtkObject(false) {
  this->SetNativePointer(IntPtr(::vtkDataArray::New()));
}



  vtkDataArray::~vtkDataArray() { }





} // end namespace vtkCommon
