

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkGenericEnSightReaderDotNet.h"

// native includes
#include "strstream"
#include "vtkGenericEnSightReader.h"
#include "vtkDataArrayCollection.h"
#include "vtkDataArraySelection.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkGenericEnSightReader::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkGenericEnSightReader>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkGenericEnSightReader::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkGenericEnSightReader>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkGenericEnSightReader^ vtkGenericEnSightReader::NewInstance()
{
  ::vtkGenericEnSightReader* retVal = static_cast<::vtkGenericEnSightReader*>(vtk::ConvertManagedToNative<::vtkGenericEnSightReader>(m_instance)->NewInstance());
  return gcnew vtkGenericEnSightReader(IntPtr(retVal), false);
}



vtkGenericEnSightReader^ vtkGenericEnSightReader::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkGenericEnSightReader* retVal = static_cast<::vtkGenericEnSightReader*>(::vtkGenericEnSightReader::SafeDownCast(oWrap));
  return gcnew vtkGenericEnSightReader(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkGenericEnSightReader::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkGenericEnSightReader>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkGenericEnSightReader::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkGenericEnSightReader>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkGenericEnSightReader::SetCaseFileName(System::String^ fileName)
{
  char* fileNameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(fileName).ToPointer());
  vtk::ConvertManagedToNative<::vtkGenericEnSightReader>(m_instance)->SetCaseFileName(fileNameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(fileNameWrap));
}



System::String^ vtkGenericEnSightReader::GetCaseFileName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkGenericEnSightReader>(m_instance)->GetCaseFileName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



void vtkGenericEnSightReader::SetFilePath(System::String^ arg0)
{
  char* arg0Wrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(arg0).ToPointer());
  vtk::ConvertManagedToNative<::vtkGenericEnSightReader>(m_instance)->SetFilePath(arg0Wrap);
  arg0->Remove(0,arg0->Length);
  arg0->Insert(0,System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(arg0Wrap)));
System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(arg0Wrap));
}



System::String^ vtkGenericEnSightReader::GetFilePath()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkGenericEnSightReader>(m_instance)->GetFilePath();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



void vtkGenericEnSightReader::Update()
{
  vtk::ConvertManagedToNative<::vtkGenericEnSightReader>(m_instance)->Update();
}



void vtkGenericEnSightReader::ExecuteInformation()
{
  vtk::ConvertManagedToNative<::vtkGenericEnSightReader>(m_instance)->ExecuteInformation();
}



int vtkGenericEnSightReader::GetNumberOfVariables()
{
  int retVal = vtk::ConvertManagedToNative<::vtkGenericEnSightReader>(m_instance)->GetNumberOfVariables();
  return retVal;
}



int vtkGenericEnSightReader::GetNumberOfComplexVariables()
{
  int retVal = vtk::ConvertManagedToNative<::vtkGenericEnSightReader>(m_instance)->GetNumberOfComplexVariables();
  return retVal;
}



int vtkGenericEnSightReader::GetNumberOfVariables(int type)
{
  int retVal = vtk::ConvertManagedToNative<::vtkGenericEnSightReader>(m_instance)->GetNumberOfVariables(type);
  return retVal;
}



int vtkGenericEnSightReader::GetNumberOfScalarsPerNode()
{
  int retVal = vtk::ConvertManagedToNative<::vtkGenericEnSightReader>(m_instance)->GetNumberOfScalarsPerNode();
  return retVal;
}



int vtkGenericEnSightReader::GetNumberOfVectorsPerNode()
{
  int retVal = vtk::ConvertManagedToNative<::vtkGenericEnSightReader>(m_instance)->GetNumberOfVectorsPerNode();
  return retVal;
}



int vtkGenericEnSightReader::GetNumberOfTensorsSymmPerNode()
{
  int retVal = vtk::ConvertManagedToNative<::vtkGenericEnSightReader>(m_instance)->GetNumberOfTensorsSymmPerNode();
  return retVal;
}



int vtkGenericEnSightReader::GetNumberOfScalarsPerElement()
{
  int retVal = vtk::ConvertManagedToNative<::vtkGenericEnSightReader>(m_instance)->GetNumberOfScalarsPerElement();
  return retVal;
}



int vtkGenericEnSightReader::GetNumberOfVectorsPerElement()
{
  int retVal = vtk::ConvertManagedToNative<::vtkGenericEnSightReader>(m_instance)->GetNumberOfVectorsPerElement();
  return retVal;
}



int vtkGenericEnSightReader::GetNumberOfTensorsSymmPerElement()
{
  int retVal = vtk::ConvertManagedToNative<::vtkGenericEnSightReader>(m_instance)->GetNumberOfTensorsSymmPerElement();
  return retVal;
}



int vtkGenericEnSightReader::GetNumberOfScalarsPerMeasuredNode()
{
  int retVal = vtk::ConvertManagedToNative<::vtkGenericEnSightReader>(m_instance)->GetNumberOfScalarsPerMeasuredNode();
  return retVal;
}



int vtkGenericEnSightReader::GetNumberOfVectorsPerMeasuredNode()
{
  int retVal = vtk::ConvertManagedToNative<::vtkGenericEnSightReader>(m_instance)->GetNumberOfVectorsPerMeasuredNode();
  return retVal;
}



int vtkGenericEnSightReader::GetNumberOfComplexScalarsPerNode()
{
  int retVal = vtk::ConvertManagedToNative<::vtkGenericEnSightReader>(m_instance)->GetNumberOfComplexScalarsPerNode();
  return retVal;
}



int vtkGenericEnSightReader::GetNumberOfComplexVectorsPerNode()
{
  int retVal = vtk::ConvertManagedToNative<::vtkGenericEnSightReader>(m_instance)->GetNumberOfComplexVectorsPerNode();
  return retVal;
}



int vtkGenericEnSightReader::GetNumberOfComplexScalarsPerElement()
{
  int retVal = vtk::ConvertManagedToNative<::vtkGenericEnSightReader>(m_instance)->GetNumberOfComplexScalarsPerElement();
  return retVal;
}



int vtkGenericEnSightReader::GetNumberOfComplexVectorsPerElement()
{
  int retVal = vtk::ConvertManagedToNative<::vtkGenericEnSightReader>(m_instance)->GetNumberOfComplexVectorsPerElement();
  return retVal;
}



System::String^ vtkGenericEnSightReader::GetDescription(int n)
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkGenericEnSightReader>(m_instance)->GetDescription(n);
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



System::String^ vtkGenericEnSightReader::GetComplexDescription(int n)
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkGenericEnSightReader>(m_instance)->GetComplexDescription(n);
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



System::String^ vtkGenericEnSightReader::GetDescription(int n, int type)
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkGenericEnSightReader>(m_instance)->GetDescription(n, type);
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkGenericEnSightReader::GetVariableType(int n)
{
  int retVal = vtk::ConvertManagedToNative<::vtkGenericEnSightReader>(m_instance)->GetVariableType(n);
  return retVal;
}



int vtkGenericEnSightReader::GetComplexVariableType(int n)
{
  int retVal = vtk::ConvertManagedToNative<::vtkGenericEnSightReader>(m_instance)->GetComplexVariableType(n);
  return retVal;
}



void vtkGenericEnSightReader::SetTimeValue(float value)
{
  vtk::ConvertManagedToNative<::vtkGenericEnSightReader>(m_instance)->SetTimeValue(value);
}



float vtkGenericEnSightReader::GetTimeValue()
{
  float retVal = vtk::ConvertManagedToNative<::vtkGenericEnSightReader>(m_instance)->GetTimeValue();
  return retVal;
}



float vtkGenericEnSightReader::GetMinimumTimeValue()
{
  float retVal = vtk::ConvertManagedToNative<::vtkGenericEnSightReader>(m_instance)->GetMinimumTimeValue();
  return retVal;
}



float vtkGenericEnSightReader::GetMaximumTimeValue()
{
  float retVal = vtk::ConvertManagedToNative<::vtkGenericEnSightReader>(m_instance)->GetMaximumTimeValue();
  return retVal;
}



vtkDataArrayCollection^ vtkGenericEnSightReader::GetTimeSets()
{
  ::vtkDataArrayCollection* retVal = static_cast<::vtkDataArrayCollection*>(vtk::ConvertManagedToNative<::vtkGenericEnSightReader>(m_instance)->GetTimeSets());
  return gcnew vtkDataArrayCollection(IntPtr(retVal), false);
}



int vtkGenericEnSightReader::DetermineEnSightVersion()
{
  int retVal = vtk::ConvertManagedToNative<::vtkGenericEnSightReader>(m_instance)->DetermineEnSightVersion();
  return retVal;
}



void vtkGenericEnSightReader::ReadAllVariablesOn()
{
  vtk::ConvertManagedToNative<::vtkGenericEnSightReader>(m_instance)->ReadAllVariablesOn();
}



void vtkGenericEnSightReader::ReadAllVariablesOff()
{
  vtk::ConvertManagedToNative<::vtkGenericEnSightReader>(m_instance)->ReadAllVariablesOff();
}



void vtkGenericEnSightReader::SetReadAllVariables(int arg0)
{
  vtk::ConvertManagedToNative<::vtkGenericEnSightReader>(m_instance)->SetReadAllVariables(arg0);
}



int vtkGenericEnSightReader::GetReadAllVariables()
{
  int retVal = vtk::ConvertManagedToNative<::vtkGenericEnSightReader>(m_instance)->GetReadAllVariables();
  return retVal;
}



vtkDataArraySelection^ vtkGenericEnSightReader::GetPointDataArraySelection()
{
  ::vtkDataArraySelection* retVal = static_cast<::vtkDataArraySelection*>(vtk::ConvertManagedToNative<::vtkGenericEnSightReader>(m_instance)->GetPointDataArraySelection());
  return gcnew vtkDataArraySelection(IntPtr(retVal), false);
}



vtkDataArraySelection^ vtkGenericEnSightReader::GetCellDataArraySelection()
{
  ::vtkDataArraySelection* retVal = static_cast<::vtkDataArraySelection*>(vtk::ConvertManagedToNative<::vtkGenericEnSightReader>(m_instance)->GetCellDataArraySelection());
  return gcnew vtkDataArraySelection(IntPtr(retVal), false);
}



int vtkGenericEnSightReader::GetNumberOfPointArrays()
{
  int retVal = vtk::ConvertManagedToNative<::vtkGenericEnSightReader>(m_instance)->GetNumberOfPointArrays();
  return retVal;
}



int vtkGenericEnSightReader::GetNumberOfCellArrays()
{
  int retVal = vtk::ConvertManagedToNative<::vtkGenericEnSightReader>(m_instance)->GetNumberOfCellArrays();
  return retVal;
}



System::String^ vtkGenericEnSightReader::GetPointArrayName(int index)
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkGenericEnSightReader>(m_instance)->GetPointArrayName(index);
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



System::String^ vtkGenericEnSightReader::GetCellArrayName(int index)
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkGenericEnSightReader>(m_instance)->GetCellArrayName(index);
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkGenericEnSightReader::GetPointArrayStatus(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkGenericEnSightReader>(m_instance)->GetPointArrayStatus(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



int vtkGenericEnSightReader::GetCellArrayStatus(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkGenericEnSightReader>(m_instance)->GetCellArrayStatus(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



void vtkGenericEnSightReader::SetPointArrayStatus(System::String^ name, int status)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  vtk::ConvertManagedToNative<::vtkGenericEnSightReader>(m_instance)->SetPointArrayStatus(nameWrap, status);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
}



void vtkGenericEnSightReader::SetCellArrayStatus(System::String^ name, int status)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  vtk::ConvertManagedToNative<::vtkGenericEnSightReader>(m_instance)->SetCellArrayStatus(nameWrap, status);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
}



void vtkGenericEnSightReader::SetByteOrderToBigEndian()
{
  vtk::ConvertManagedToNative<::vtkGenericEnSightReader>(m_instance)->SetByteOrderToBigEndian();
}



void vtkGenericEnSightReader::SetByteOrderToLittleEndian()
{
  vtk::ConvertManagedToNative<::vtkGenericEnSightReader>(m_instance)->SetByteOrderToLittleEndian();
}



void vtkGenericEnSightReader::SetByteOrder(int arg0)
{
  vtk::ConvertManagedToNative<::vtkGenericEnSightReader>(m_instance)->SetByteOrder(arg0);
}



int vtkGenericEnSightReader::GetByteOrder()
{
  int retVal = vtk::ConvertManagedToNative<::vtkGenericEnSightReader>(m_instance)->GetByteOrder();
  return retVal;
}



System::String^ vtkGenericEnSightReader::GetByteOrderAsString()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkGenericEnSightReader>(m_instance)->GetByteOrderAsString();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



  vtkGenericEnSightReader::vtkGenericEnSightReader(System::IntPtr native, bool bConst) : vtkDataSetSource(native, bConst) {}



  vtkGenericEnSightReader::vtkGenericEnSightReader(bool donothing) : vtkDataSetSource(donothing) {}



  vtkGenericEnSightReader::vtkGenericEnSightReader() : vtkDataSetSource(false) {
  this->SetNativePointer(IntPtr(::vtkGenericEnSightReader::New()));
}



  vtkGenericEnSightReader::~vtkGenericEnSightReader() { }





} // end namespace vtkIO
