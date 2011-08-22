

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkAVSucdReaderDotNet.h"

// native includes
#include "strstream"
#include "vtkAVSucdReader.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkAVSucdReader::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkAVSucdReader>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkAVSucdReader::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkAVSucdReader>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkAVSucdReader^ vtkAVSucdReader::NewInstance()
{
  ::vtkAVSucdReader* retVal = static_cast<::vtkAVSucdReader*>(vtk::ConvertManagedToNative<::vtkAVSucdReader>(m_instance)->NewInstance());
  return gcnew vtkAVSucdReader(IntPtr(retVal), false);
}



vtkAVSucdReader^ vtkAVSucdReader::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkAVSucdReader* retVal = static_cast<::vtkAVSucdReader*>(::vtkAVSucdReader::SafeDownCast(oWrap));
  return gcnew vtkAVSucdReader(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkAVSucdReader::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkAVSucdReader>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkAVSucdReader::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkAVSucdReader>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkAVSucdReader::SetFileName(System::String^ arg0)
{
  char* arg0Wrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(arg0).ToPointer());
  vtk::ConvertManagedToNative<::vtkAVSucdReader>(m_instance)->SetFileName(arg0Wrap);
  arg0->Remove(0,arg0->Length);
  arg0->Insert(0,System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(arg0Wrap)));
System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(arg0Wrap));
}



System::String^ vtkAVSucdReader::GetFileName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkAVSucdReader>(m_instance)->GetFileName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



void vtkAVSucdReader::SetBinaryFile(int arg0)
{
  vtk::ConvertManagedToNative<::vtkAVSucdReader>(m_instance)->SetBinaryFile(arg0);
}



int vtkAVSucdReader::GetBinaryFile()
{
  int retVal = vtk::ConvertManagedToNative<::vtkAVSucdReader>(m_instance)->GetBinaryFile();
  return retVal;
}



void vtkAVSucdReader::BinaryFileOn()
{
  vtk::ConvertManagedToNative<::vtkAVSucdReader>(m_instance)->BinaryFileOn();
}



void vtkAVSucdReader::BinaryFileOff()
{
  vtk::ConvertManagedToNative<::vtkAVSucdReader>(m_instance)->BinaryFileOff();
}



int vtkAVSucdReader::GetNumberOfCells()
{
  int retVal = vtk::ConvertManagedToNative<::vtkAVSucdReader>(m_instance)->GetNumberOfCells();
  return retVal;
}



int vtkAVSucdReader::GetNumberOfNodes()
{
  int retVal = vtk::ConvertManagedToNative<::vtkAVSucdReader>(m_instance)->GetNumberOfNodes();
  return retVal;
}



int vtkAVSucdReader::GetNumberOfNodeFields()
{
  int retVal = vtk::ConvertManagedToNative<::vtkAVSucdReader>(m_instance)->GetNumberOfNodeFields();
  return retVal;
}



int vtkAVSucdReader::GetNumberOfCellFields()
{
  int retVal = vtk::ConvertManagedToNative<::vtkAVSucdReader>(m_instance)->GetNumberOfCellFields();
  return retVal;
}



int vtkAVSucdReader::GetNumberOfFields()
{
  int retVal = vtk::ConvertManagedToNative<::vtkAVSucdReader>(m_instance)->GetNumberOfFields();
  return retVal;
}



int vtkAVSucdReader::GetNumberOfNodeComponents()
{
  int retVal = vtk::ConvertManagedToNative<::vtkAVSucdReader>(m_instance)->GetNumberOfNodeComponents();
  return retVal;
}



int vtkAVSucdReader::GetNumberOfCellComponents()
{
  int retVal = vtk::ConvertManagedToNative<::vtkAVSucdReader>(m_instance)->GetNumberOfCellComponents();
  return retVal;
}



void vtkAVSucdReader::SetByteOrderToBigEndian()
{
  vtk::ConvertManagedToNative<::vtkAVSucdReader>(m_instance)->SetByteOrderToBigEndian();
}



void vtkAVSucdReader::SetByteOrderToLittleEndian()
{
  vtk::ConvertManagedToNative<::vtkAVSucdReader>(m_instance)->SetByteOrderToLittleEndian();
}



System::String^ vtkAVSucdReader::GetByteOrderAsString()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkAVSucdReader>(m_instance)->GetByteOrderAsString();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



void vtkAVSucdReader::SetByteOrder(int arg0)
{
  vtk::ConvertManagedToNative<::vtkAVSucdReader>(m_instance)->SetByteOrder(arg0);
}



int vtkAVSucdReader::GetByteOrder()
{
  int retVal = vtk::ConvertManagedToNative<::vtkAVSucdReader>(m_instance)->GetByteOrder();
  return retVal;
}



int vtkAVSucdReader::GetNumberOfPointArrays()
{
  int retVal = vtk::ConvertManagedToNative<::vtkAVSucdReader>(m_instance)->GetNumberOfPointArrays();
  return retVal;
}



int vtkAVSucdReader::GetNumberOfCellArrays()
{
  int retVal = vtk::ConvertManagedToNative<::vtkAVSucdReader>(m_instance)->GetNumberOfCellArrays();
  return retVal;
}



System::String^ vtkAVSucdReader::GetPointArrayName(int index)
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkAVSucdReader>(m_instance)->GetPointArrayName(index);
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



System::String^ vtkAVSucdReader::GetCellArrayName(int index)
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkAVSucdReader>(m_instance)->GetCellArrayName(index);
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkAVSucdReader::GetPointArrayStatus(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkAVSucdReader>(m_instance)->GetPointArrayStatus(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



int vtkAVSucdReader::GetCellArrayStatus(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkAVSucdReader>(m_instance)->GetCellArrayStatus(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



void vtkAVSucdReader::SetPointArrayStatus(System::String^ name, int status)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  vtk::ConvertManagedToNative<::vtkAVSucdReader>(m_instance)->SetPointArrayStatus(nameWrap, status);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
}



void vtkAVSucdReader::SetCellArrayStatus(System::String^ name, int status)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  vtk::ConvertManagedToNative<::vtkAVSucdReader>(m_instance)->SetCellArrayStatus(nameWrap, status);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
}



void vtkAVSucdReader::DisableAllCellArrays()
{
  vtk::ConvertManagedToNative<::vtkAVSucdReader>(m_instance)->DisableAllCellArrays();
}



void vtkAVSucdReader::EnableAllCellArrays()
{
  vtk::ConvertManagedToNative<::vtkAVSucdReader>(m_instance)->EnableAllCellArrays();
}



void vtkAVSucdReader::DisableAllPointArrays()
{
  vtk::ConvertManagedToNative<::vtkAVSucdReader>(m_instance)->DisableAllPointArrays();
}



void vtkAVSucdReader::EnableAllPointArrays()
{
  vtk::ConvertManagedToNative<::vtkAVSucdReader>(m_instance)->EnableAllPointArrays();
}



void vtkAVSucdReader::GetCellDataRange(int cellComp, int index, array<float>^ min, array<float>^ max)
{
  pin_ptr<float> minPin = &min[0];
  float* nativeminPin = minPin;
  pin_ptr<float> maxPin = &max[0];
  float* nativemaxPin = maxPin;
  vtk::ConvertManagedToNative<::vtkAVSucdReader>(m_instance)->GetCellDataRange(cellComp, index, nativeminPin, nativemaxPin);
}



void vtkAVSucdReader::GetNodeDataRange(int nodeComp, int index, array<float>^ min, array<float>^ max)
{
  pin_ptr<float> minPin = &min[0];
  float* nativeminPin = minPin;
  pin_ptr<float> maxPin = &max[0];
  float* nativemaxPin = maxPin;
  vtk::ConvertManagedToNative<::vtkAVSucdReader>(m_instance)->GetNodeDataRange(nodeComp, index, nativeminPin, nativemaxPin);
}



  vtkAVSucdReader::vtkAVSucdReader(System::IntPtr native, bool bConst) : vtkUnstructuredGridAlgorithm(native, bConst) {}



  vtkAVSucdReader::vtkAVSucdReader(bool donothing) : vtkUnstructuredGridAlgorithm(donothing) {}



  vtkAVSucdReader::vtkAVSucdReader() : vtkUnstructuredGridAlgorithm(false) {
  this->SetNativePointer(IntPtr(::vtkAVSucdReader::New()));
}



  vtkAVSucdReader::~vtkAVSucdReader() { }





} // end namespace vtkIO
