

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkXMLReaderDotNet.h"

// native includes
#include "strstream"
#include "vtkXMLReader.h"
#include "vtkDataArraySelection.h"
#include "vtkDataSet.h"
#include "vtkInformation.h"

using namespace System;

namespace vtk {

System::String^ vtkXMLReader::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkXMLReader>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkXMLReader::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkXMLReader>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkXMLReader^ vtkXMLReader::NewInstance()
{
  ::vtkXMLReader* retVal = static_cast<::vtkXMLReader*>(vtk::ConvertManagedToNative<::vtkXMLReader>(m_instance)->NewInstance());
  return gcnew vtkXMLReader(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkXMLReader::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkXMLReader>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkXMLReader::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkXMLReader>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkXMLReader::SetFileName(System::String^ arg0)
{
  char* arg0Wrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(arg0).ToPointer());
  vtk::ConvertManagedToNative<::vtkXMLReader>(m_instance)->SetFileName(arg0Wrap);
  arg0->Remove(0,arg0->Length);
  arg0->Insert(0,System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(arg0Wrap)));
System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(arg0Wrap));
}



System::String^ vtkXMLReader::GetFileName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkXMLReader>(m_instance)->GetFileName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkXMLReader::CanReadFile(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkXMLReader>(m_instance)->CanReadFile(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkDataSet^ vtkXMLReader::GetOutputAsDataSet()
{
  ::vtkDataSet* retVal = static_cast<::vtkDataSet*>(vtk::ConvertManagedToNative<::vtkXMLReader>(m_instance)->GetOutputAsDataSet());
  return gcnew vtkDataSet(IntPtr(retVal), false);
}



vtkDataSet^ vtkXMLReader::GetOutputAsDataSet(int index)
{
  ::vtkDataSet* retVal = static_cast<::vtkDataSet*>(vtk::ConvertManagedToNative<::vtkXMLReader>(m_instance)->GetOutputAsDataSet(index));
  return gcnew vtkDataSet(IntPtr(retVal), false);
}



vtkDataArraySelection^ vtkXMLReader::GetPointDataArraySelection()
{
  ::vtkDataArraySelection* retVal = static_cast<::vtkDataArraySelection*>(vtk::ConvertManagedToNative<::vtkXMLReader>(m_instance)->GetPointDataArraySelection());
  return gcnew vtkDataArraySelection(IntPtr(retVal), false);
}



vtkDataArraySelection^ vtkXMLReader::GetCellDataArraySelection()
{
  ::vtkDataArraySelection* retVal = static_cast<::vtkDataArraySelection*>(vtk::ConvertManagedToNative<::vtkXMLReader>(m_instance)->GetCellDataArraySelection());
  return gcnew vtkDataArraySelection(IntPtr(retVal), false);
}



int vtkXMLReader::GetNumberOfPointArrays()
{
  int retVal = vtk::ConvertManagedToNative<::vtkXMLReader>(m_instance)->GetNumberOfPointArrays();
  return retVal;
}



int vtkXMLReader::GetNumberOfCellArrays()
{
  int retVal = vtk::ConvertManagedToNative<::vtkXMLReader>(m_instance)->GetNumberOfCellArrays();
  return retVal;
}



System::String^ vtkXMLReader::GetPointArrayName(int index)
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkXMLReader>(m_instance)->GetPointArrayName(index);
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



System::String^ vtkXMLReader::GetCellArrayName(int index)
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkXMLReader>(m_instance)->GetCellArrayName(index);
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkXMLReader::GetPointArrayStatus(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkXMLReader>(m_instance)->GetPointArrayStatus(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



int vtkXMLReader::GetCellArrayStatus(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkXMLReader>(m_instance)->GetCellArrayStatus(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



void vtkXMLReader::SetPointArrayStatus(System::String^ name, int status)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  vtk::ConvertManagedToNative<::vtkXMLReader>(m_instance)->SetPointArrayStatus(nameWrap, status);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
}



void vtkXMLReader::SetCellArrayStatus(System::String^ name, int status)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  vtk::ConvertManagedToNative<::vtkXMLReader>(m_instance)->SetCellArrayStatus(nameWrap, status);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
}



void vtkXMLReader::CopyOutputInformation(vtkInformation^ arg0, int arg1)
{
  ::vtkInformation* arg0Wrap = vtk::ConvertManagedToNative<::vtkInformation>(arg0->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkXMLReader>(m_instance)->CopyOutputInformation(arg0Wrap, arg1);
}



void vtkXMLReader::SetTimeStep(int arg0)
{
  vtk::ConvertManagedToNative<::vtkXMLReader>(m_instance)->SetTimeStep(arg0);
}



int vtkXMLReader::GetTimeStep()
{
  int retVal = vtk::ConvertManagedToNative<::vtkXMLReader>(m_instance)->GetTimeStep();
  return retVal;
}



int vtkXMLReader::GetNumberOfTimeSteps()
{
  int retVal = vtk::ConvertManagedToNative<::vtkXMLReader>(m_instance)->GetNumberOfTimeSteps();
  return retVal;
}



array<int>^ vtkXMLReader::GetTimeStepRange()
{
  const int* retVal = vtk::ConvertManagedToNative<::vtkXMLReader>(m_instance)->GetTimeStepRange();
  array<int>^ mRetVal = gcnew array<int>(2);
  for (size_t cprIdx=0; cprIdx<2; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



void vtkXMLReader::SetTimeStepRange(int arg0, int arg1)
{
  vtk::ConvertManagedToNative<::vtkXMLReader>(m_instance)->SetTimeStepRange(arg0, arg1);
}



void vtkXMLReader::SetTimeStepRange(array<int>^ a)
{
  pin_ptr<int> aPin = &a[0];
  int* nativeaPin = aPin;
  vtk::ConvertManagedToNative<::vtkXMLReader>(m_instance)->SetTimeStepRange(nativeaPin);
}



  vtkXMLReader::vtkXMLReader(System::IntPtr native, bool bConst) : vtkAlgorithm(native, bConst) {}



  vtkXMLReader::vtkXMLReader(bool donothing) : vtkAlgorithm(donothing) {}



  vtkXMLReader::vtkXMLReader() : vtkAlgorithm(false) {
  this->SetNativePointer(IntPtr(::vtkXMLReader::New()));
}



  vtkXMLReader::~vtkXMLReader() { }





} // end namespace vtkIO
