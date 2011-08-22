

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkXMLWriterDotNet.h"
#include "vtkDataCompressorDotNet.h"

// native includes
#include "strstream"
#include "vtkXMLWriter.h"
#include "vtkDataCompressor.h"
#include "vtkDataObject.h"

using namespace System;

namespace vtk {

System::String^ vtkXMLWriter::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkXMLWriter>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkXMLWriter::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkXMLWriter>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkXMLWriter^ vtkXMLWriter::NewInstance()
{
  ::vtkXMLWriter* retVal = static_cast<::vtkXMLWriter*>(vtk::ConvertManagedToNative<::vtkXMLWriter>(m_instance)->NewInstance());
  return gcnew vtkXMLWriter(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkXMLWriter::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkXMLWriter>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkXMLWriter::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkXMLWriter>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkXMLWriter::SetByteOrder(int arg0)
{
  vtk::ConvertManagedToNative<::vtkXMLWriter>(m_instance)->SetByteOrder(arg0);
}



int vtkXMLWriter::GetByteOrder()
{
  int retVal = vtk::ConvertManagedToNative<::vtkXMLWriter>(m_instance)->GetByteOrder();
  return retVal;
}



void vtkXMLWriter::SetByteOrderToBigEndian()
{
  vtk::ConvertManagedToNative<::vtkXMLWriter>(m_instance)->SetByteOrderToBigEndian();
}



void vtkXMLWriter::SetByteOrderToLittleEndian()
{
  vtk::ConvertManagedToNative<::vtkXMLWriter>(m_instance)->SetByteOrderToLittleEndian();
}



void vtkXMLWriter::SetIdType(int arg0)
{
  vtk::ConvertManagedToNative<::vtkXMLWriter>(m_instance)->SetIdType(arg0);
}



int vtkXMLWriter::GetIdType()
{
  int retVal = vtk::ConvertManagedToNative<::vtkXMLWriter>(m_instance)->GetIdType();
  return retVal;
}



void vtkXMLWriter::SetIdTypeToInt32()
{
  vtk::ConvertManagedToNative<::vtkXMLWriter>(m_instance)->SetIdTypeToInt32();
}



void vtkXMLWriter::SetIdTypeToInt64()
{
  vtk::ConvertManagedToNative<::vtkXMLWriter>(m_instance)->SetIdTypeToInt64();
}



void vtkXMLWriter::SetFileName(System::String^ arg0)
{
  char* arg0Wrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(arg0).ToPointer());
  vtk::ConvertManagedToNative<::vtkXMLWriter>(m_instance)->SetFileName(arg0Wrap);
  arg0->Remove(0,arg0->Length);
  arg0->Insert(0,System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(arg0Wrap)));
System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(arg0Wrap));
}



System::String^ vtkXMLWriter::GetFileName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkXMLWriter>(m_instance)->GetFileName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



void vtkXMLWriter::SetCompressor(vtkDataCompressor^ arg0)
{
  ::vtkDataCompressor* arg0Wrap = vtk::ConvertManagedToNative<::vtkDataCompressor>(arg0->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkXMLWriter>(m_instance)->SetCompressor(arg0Wrap);
}



vtkDataCompressor^ vtkXMLWriter::GetCompressor()
{
  ::vtkDataCompressor* retVal = static_cast<::vtkDataCompressor*>(vtk::ConvertManagedToNative<::vtkXMLWriter>(m_instance)->GetCompressor());
  return gcnew vtkDataCompressor(IntPtr(retVal), false);
}



void vtkXMLWriter::SetBlockSize(unsigned int blockSize)
{
  vtk::ConvertManagedToNative<::vtkXMLWriter>(m_instance)->SetBlockSize(blockSize);
}



unsigned int vtkXMLWriter::GetBlockSize()
{
  unsigned int retVal = vtk::ConvertManagedToNative<::vtkXMLWriter>(m_instance)->GetBlockSize();
  return retVal;
}



void vtkXMLWriter::SetDataMode(int arg0)
{
  vtk::ConvertManagedToNative<::vtkXMLWriter>(m_instance)->SetDataMode(arg0);
}



int vtkXMLWriter::GetDataMode()
{
  int retVal = vtk::ConvertManagedToNative<::vtkXMLWriter>(m_instance)->GetDataMode();
  return retVal;
}



void vtkXMLWriter::SetDataModeToAscii()
{
  vtk::ConvertManagedToNative<::vtkXMLWriter>(m_instance)->SetDataModeToAscii();
}



void vtkXMLWriter::SetDataModeToBinary()
{
  vtk::ConvertManagedToNative<::vtkXMLWriter>(m_instance)->SetDataModeToBinary();
}



void vtkXMLWriter::SetDataModeToAppended()
{
  vtk::ConvertManagedToNative<::vtkXMLWriter>(m_instance)->SetDataModeToAppended();
}



void vtkXMLWriter::SetEncodeAppendedData(int arg0)
{
  vtk::ConvertManagedToNative<::vtkXMLWriter>(m_instance)->SetEncodeAppendedData(arg0);
}



int vtkXMLWriter::GetEncodeAppendedData()
{
  int retVal = vtk::ConvertManagedToNative<::vtkXMLWriter>(m_instance)->GetEncodeAppendedData();
  return retVal;
}



void vtkXMLWriter::EncodeAppendedDataOn()
{
  vtk::ConvertManagedToNative<::vtkXMLWriter>(m_instance)->EncodeAppendedDataOn();
}



void vtkXMLWriter::EncodeAppendedDataOff()
{
  vtk::ConvertManagedToNative<::vtkXMLWriter>(m_instance)->EncodeAppendedDataOff();
}



void vtkXMLWriter::SetInput(vtkDataObject^ arg0)
{
  ::vtkDataObject* arg0Wrap = vtk::ConvertManagedToNative<::vtkDataObject>(arg0->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkXMLWriter>(m_instance)->SetInput(arg0Wrap);
}



void vtkXMLWriter::SetInput(int arg0, vtkDataObject^ arg1)
{
  ::vtkDataObject* arg1Wrap = vtk::ConvertManagedToNative<::vtkDataObject>(arg1->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkXMLWriter>(m_instance)->SetInput(arg0, arg1Wrap);
}



vtkDataObject^ vtkXMLWriter::GetInput(int port)
{
  ::vtkDataObject* retVal = static_cast<::vtkDataObject*>(vtk::ConvertManagedToNative<::vtkXMLWriter>(m_instance)->GetInput(port));
  return gcnew vtkDataObject(IntPtr(retVal), false);
}



vtkDataObject^ vtkXMLWriter::GetInput()
{
  ::vtkDataObject* retVal = static_cast<::vtkDataObject*>(vtk::ConvertManagedToNative<::vtkXMLWriter>(m_instance)->GetInput());
  return gcnew vtkDataObject(IntPtr(retVal), false);
}



System::String^ vtkXMLWriter::GetDefaultFileExtension()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkXMLWriter>(m_instance)->GetDefaultFileExtension();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkXMLWriter::Write()
{
  int retVal = vtk::ConvertManagedToNative<::vtkXMLWriter>(m_instance)->Write();
  return retVal;
}



void vtkXMLWriter::SetTimeStep(int arg0)
{
  vtk::ConvertManagedToNative<::vtkXMLWriter>(m_instance)->SetTimeStep(arg0);
}



int vtkXMLWriter::GetTimeStep()
{
  int retVal = vtk::ConvertManagedToNative<::vtkXMLWriter>(m_instance)->GetTimeStep();
  return retVal;
}



array<int>^ vtkXMLWriter::GetTimeStepRange()
{
  const int* retVal = vtk::ConvertManagedToNative<::vtkXMLWriter>(m_instance)->GetTimeStepRange();
  array<int>^ mRetVal = gcnew array<int>(2);
  for (size_t cprIdx=0; cprIdx<2; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



void vtkXMLWriter::SetTimeStepRange(int arg0, int arg1)
{
  vtk::ConvertManagedToNative<::vtkXMLWriter>(m_instance)->SetTimeStepRange(arg0, arg1);
}



void vtkXMLWriter::SetTimeStepRange(array<int>^ a)
{
  pin_ptr<int> aPin = &a[0];
  int* nativeaPin = aPin;
  vtk::ConvertManagedToNative<::vtkXMLWriter>(m_instance)->SetTimeStepRange(nativeaPin);
}



int vtkXMLWriter::GetNumberOfTimeSteps()
{
  int retVal = vtk::ConvertManagedToNative<::vtkXMLWriter>(m_instance)->GetNumberOfTimeSteps();
  return retVal;
}



void vtkXMLWriter::SetNumberOfTimeSteps(int arg0)
{
  vtk::ConvertManagedToNative<::vtkXMLWriter>(m_instance)->SetNumberOfTimeSteps(arg0);
}



void vtkXMLWriter::Start()
{
  vtk::ConvertManagedToNative<::vtkXMLWriter>(m_instance)->Start();
}



void vtkXMLWriter::Stop()
{
  vtk::ConvertManagedToNative<::vtkXMLWriter>(m_instance)->Stop();
}



void vtkXMLWriter::WriteNextTime(double time)
{
  vtk::ConvertManagedToNative<::vtkXMLWriter>(m_instance)->WriteNextTime(time);
}



  vtkXMLWriter::vtkXMLWriter(System::IntPtr native, bool bConst) : vtkAlgorithm(native, bConst) {}



  vtkXMLWriter::vtkXMLWriter(bool donothing) : vtkAlgorithm(donothing) {}



  vtkXMLWriter::vtkXMLWriter() : vtkAlgorithm(false) {
  this->SetNativePointer(IntPtr(::vtkXMLWriter::New()));
}



  vtkXMLWriter::~vtkXMLWriter() { }





} // end namespace vtkIO
