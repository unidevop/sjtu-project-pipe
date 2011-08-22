

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkDoubleArrayDotNet.h"
#include "vtkObjectDotNet.h"

// native includes
#include "strstream"
#include "vtkDoubleArray.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkDoubleArray::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkDoubleArray>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkDoubleArray::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkDoubleArray>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkDoubleArray^ vtkDoubleArray::NewInstance()
{
  ::vtkDoubleArray* retVal = static_cast<::vtkDoubleArray*>(vtk::ConvertManagedToNative<::vtkDoubleArray>(m_instance)->NewInstance());
  return gcnew vtkDoubleArray(IntPtr(retVal), false);
}



vtkDoubleArray^ vtkDoubleArray::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkDoubleArray* retVal = static_cast<::vtkDoubleArray*>(::vtkDoubleArray::SafeDownCast(oWrap));
  return gcnew vtkDoubleArray(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkDoubleArray::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkDoubleArray>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkDoubleArray::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkDoubleArray>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




int vtkDoubleArray::GetDataType()
{
  int retVal = vtk::ConvertManagedToNative<::vtkDoubleArray>(m_instance)->GetDataType();
  return retVal;
}



void vtkDoubleArray::GetTupleValue(int i, array<double>^ tuple)
{
  pin_ptr<double> tuplePin = &tuple[0];
  double* nativetuplePin = tuplePin;
  vtk::ConvertManagedToNative<::vtkDoubleArray>(m_instance)->GetTupleValue(i, nativetuplePin);
}



void vtkDoubleArray::SetTupleValue(int i, array<double>^ tuple)
{
  pin_ptr<double> tuplePin = &tuple[0];
  double* nativetuplePin = tuplePin;
  vtk::ConvertManagedToNative<::vtkDoubleArray>(m_instance)->SetTupleValue(i, nativetuplePin);
}



void vtkDoubleArray::InsertTupleValue(int i, array<double>^ tuple)
{
  pin_ptr<double> tuplePin = &tuple[0];
  double* nativetuplePin = tuplePin;
  vtk::ConvertManagedToNative<::vtkDoubleArray>(m_instance)->InsertTupleValue(i, nativetuplePin);
}



int vtkDoubleArray::InsertNextTupleValue(array<double>^ tuple)
{
  pin_ptr<double> tuplePin = &tuple[0];
  double* nativetuplePin = tuplePin;
  int retVal = vtk::ConvertManagedToNative<::vtkDoubleArray>(m_instance)->InsertNextTupleValue(nativetuplePin);
  return retVal;
}



double vtkDoubleArray::GetValue(int id)
{
  double retVal = vtk::ConvertManagedToNative<::vtkDoubleArray>(m_instance)->GetValue(id);
  return retVal;
}



void vtkDoubleArray::SetValue(int id, double value)
{
  vtk::ConvertManagedToNative<::vtkDoubleArray>(m_instance)->SetValue(id, value);
}



void vtkDoubleArray::SetNumberOfValues(int number)
{
  vtk::ConvertManagedToNative<::vtkDoubleArray>(m_instance)->SetNumberOfValues(number);
}



void vtkDoubleArray::InsertValue(int id, double f)
{
  vtk::ConvertManagedToNative<::vtkDoubleArray>(m_instance)->InsertValue(id, f);
}



int vtkDoubleArray::InsertNextValue(double f)
{
  int retVal = vtk::ConvertManagedToNative<::vtkDoubleArray>(m_instance)->InsertNextValue(f);
  return retVal;
}



void vtkDoubleArray::SetArray(array<double>^ arg0, int size, int save)
{
  pin_ptr<double> arg0Pin = &arg0[0];
  double* nativearg0Pin = arg0Pin;
  vtk::ConvertManagedToNative<::vtkDoubleArray>(m_instance)->SetArray(nativearg0Pin, size, save);
}



  vtkDoubleArray::vtkDoubleArray(System::IntPtr native, bool bConst) : vtkDataArray(native, bConst) {}



  vtkDoubleArray::vtkDoubleArray(bool donothing) : vtkDataArray(donothing) {}



  vtkDoubleArray::vtkDoubleArray() : vtkDataArray(false) {
  this->SetNativePointer(IntPtr(::vtkDoubleArray::New()));
}



  vtkDoubleArray::~vtkDoubleArray() { }





} // end namespace vtkCommon
