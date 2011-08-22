

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkPLOT3DReaderDotNet.h"

// native includes
#include "strstream"
#include "vtkPLOT3DReader.h"
#include "vtkObject.h"
#include "vtkStructuredGrid.h"

using namespace System;

namespace vtk {

System::String^ vtkPLOT3DReader::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkPLOT3DReader>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkPLOT3DReader::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkPLOT3DReader>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkPLOT3DReader^ vtkPLOT3DReader::NewInstance()
{
  ::vtkPLOT3DReader* retVal = static_cast<::vtkPLOT3DReader*>(vtk::ConvertManagedToNative<::vtkPLOT3DReader>(m_instance)->NewInstance());
  return gcnew vtkPLOT3DReader(IntPtr(retVal), false);
}



vtkPLOT3DReader^ vtkPLOT3DReader::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkPLOT3DReader* retVal = static_cast<::vtkPLOT3DReader*>(::vtkPLOT3DReader::SafeDownCast(oWrap));
  return gcnew vtkPLOT3DReader(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkPLOT3DReader::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkPLOT3DReader>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkPLOT3DReader::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkPLOT3DReader>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkPLOT3DReader::SetFileName(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  vtk::ConvertManagedToNative<::vtkPLOT3DReader>(m_instance)->SetFileName(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
}



System::String^ vtkPLOT3DReader::GetFileName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkPLOT3DReader>(m_instance)->GetFileName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



void vtkPLOT3DReader::SetXYZFileName(System::String^ arg0)
{
  char* arg0Wrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(arg0).ToPointer());
  vtk::ConvertManagedToNative<::vtkPLOT3DReader>(m_instance)->SetXYZFileName(arg0Wrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(arg0Wrap));
}



System::String^ vtkPLOT3DReader::GetXYZFileName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkPLOT3DReader>(m_instance)->GetXYZFileName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



void vtkPLOT3DReader::SetQFileName(System::String^ arg0)
{
  char* arg0Wrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(arg0).ToPointer());
  vtk::ConvertManagedToNative<::vtkPLOT3DReader>(m_instance)->SetQFileName(arg0Wrap);
  arg0->Remove(0,arg0->Length);
  arg0->Insert(0,System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(arg0Wrap)));
System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(arg0Wrap));
}



System::String^ vtkPLOT3DReader::GetQFileName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkPLOT3DReader>(m_instance)->GetQFileName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkPLOT3DReader::GetNumberOfOutputs()
{
  int retVal = vtk::ConvertManagedToNative<::vtkPLOT3DReader>(m_instance)->GetNumberOfOutputs();
  return retVal;
}



int vtkPLOT3DReader::GetNumberOfGrids()
{
  int retVal = vtk::ConvertManagedToNative<::vtkPLOT3DReader>(m_instance)->GetNumberOfGrids();
  return retVal;
}



void vtkPLOT3DReader::SetOutput(int idx, vtkStructuredGrid^ output)
{
  ::vtkStructuredGrid* outputWrap = vtk::ConvertManagedToNative<::vtkStructuredGrid>(output->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkPLOT3DReader>(m_instance)->SetOutput(idx, outputWrap);
}



void vtkPLOT3DReader::SetBinaryFile(int arg0)
{
  vtk::ConvertManagedToNative<::vtkPLOT3DReader>(m_instance)->SetBinaryFile(arg0);
}



int vtkPLOT3DReader::GetBinaryFile()
{
  int retVal = vtk::ConvertManagedToNative<::vtkPLOT3DReader>(m_instance)->GetBinaryFile();
  return retVal;
}



void vtkPLOT3DReader::BinaryFileOn()
{
  vtk::ConvertManagedToNative<::vtkPLOT3DReader>(m_instance)->BinaryFileOn();
}



void vtkPLOT3DReader::BinaryFileOff()
{
  vtk::ConvertManagedToNative<::vtkPLOT3DReader>(m_instance)->BinaryFileOff();
}



void vtkPLOT3DReader::SetMultiGrid(int arg0)
{
  vtk::ConvertManagedToNative<::vtkPLOT3DReader>(m_instance)->SetMultiGrid(arg0);
}



int vtkPLOT3DReader::GetMultiGrid()
{
  int retVal = vtk::ConvertManagedToNative<::vtkPLOT3DReader>(m_instance)->GetMultiGrid();
  return retVal;
}



void vtkPLOT3DReader::MultiGridOn()
{
  vtk::ConvertManagedToNative<::vtkPLOT3DReader>(m_instance)->MultiGridOn();
}



void vtkPLOT3DReader::MultiGridOff()
{
  vtk::ConvertManagedToNative<::vtkPLOT3DReader>(m_instance)->MultiGridOff();
}



void vtkPLOT3DReader::SetHasByteCount(int arg0)
{
  vtk::ConvertManagedToNative<::vtkPLOT3DReader>(m_instance)->SetHasByteCount(arg0);
}



int vtkPLOT3DReader::GetHasByteCount()
{
  int retVal = vtk::ConvertManagedToNative<::vtkPLOT3DReader>(m_instance)->GetHasByteCount();
  return retVal;
}



void vtkPLOT3DReader::HasByteCountOn()
{
  vtk::ConvertManagedToNative<::vtkPLOT3DReader>(m_instance)->HasByteCountOn();
}



void vtkPLOT3DReader::HasByteCountOff()
{
  vtk::ConvertManagedToNative<::vtkPLOT3DReader>(m_instance)->HasByteCountOff();
}



void vtkPLOT3DReader::SetIBlanking(int arg0)
{
  vtk::ConvertManagedToNative<::vtkPLOT3DReader>(m_instance)->SetIBlanking(arg0);
}



int vtkPLOT3DReader::GetIBlanking()
{
  int retVal = vtk::ConvertManagedToNative<::vtkPLOT3DReader>(m_instance)->GetIBlanking();
  return retVal;
}



void vtkPLOT3DReader::IBlankingOn()
{
  vtk::ConvertManagedToNative<::vtkPLOT3DReader>(m_instance)->IBlankingOn();
}



void vtkPLOT3DReader::IBlankingOff()
{
  vtk::ConvertManagedToNative<::vtkPLOT3DReader>(m_instance)->IBlankingOff();
}



void vtkPLOT3DReader::SetTwoDimensionalGeometry(int arg0)
{
  vtk::ConvertManagedToNative<::vtkPLOT3DReader>(m_instance)->SetTwoDimensionalGeometry(arg0);
}



int vtkPLOT3DReader::GetTwoDimensionalGeometry()
{
  int retVal = vtk::ConvertManagedToNative<::vtkPLOT3DReader>(m_instance)->GetTwoDimensionalGeometry();
  return retVal;
}



void vtkPLOT3DReader::TwoDimensionalGeometryOn()
{
  vtk::ConvertManagedToNative<::vtkPLOT3DReader>(m_instance)->TwoDimensionalGeometryOn();
}



void vtkPLOT3DReader::TwoDimensionalGeometryOff()
{
  vtk::ConvertManagedToNative<::vtkPLOT3DReader>(m_instance)->TwoDimensionalGeometryOff();
}



void vtkPLOT3DReader::SetForceRead(int arg0)
{
  vtk::ConvertManagedToNative<::vtkPLOT3DReader>(m_instance)->SetForceRead(arg0);
}



int vtkPLOT3DReader::GetForceRead()
{
  int retVal = vtk::ConvertManagedToNative<::vtkPLOT3DReader>(m_instance)->GetForceRead();
  return retVal;
}



void vtkPLOT3DReader::ForceReadOn()
{
  vtk::ConvertManagedToNative<::vtkPLOT3DReader>(m_instance)->ForceReadOn();
}



void vtkPLOT3DReader::ForceReadOff()
{
  vtk::ConvertManagedToNative<::vtkPLOT3DReader>(m_instance)->ForceReadOff();
}



void vtkPLOT3DReader::SetDoNotReduceNumberOfOutputs(int arg0)
{
  vtk::ConvertManagedToNative<::vtkPLOT3DReader>(m_instance)->SetDoNotReduceNumberOfOutputs(arg0);
}



int vtkPLOT3DReader::GetDoNotReduceNumberOfOutputs()
{
  int retVal = vtk::ConvertManagedToNative<::vtkPLOT3DReader>(m_instance)->GetDoNotReduceNumberOfOutputs();
  return retVal;
}



void vtkPLOT3DReader::DoNotReduceNumberOfOutputsOn()
{
  vtk::ConvertManagedToNative<::vtkPLOT3DReader>(m_instance)->DoNotReduceNumberOfOutputsOn();
}



void vtkPLOT3DReader::DoNotReduceNumberOfOutputsOff()
{
  vtk::ConvertManagedToNative<::vtkPLOT3DReader>(m_instance)->DoNotReduceNumberOfOutputsOff();
}



void vtkPLOT3DReader::SetByteOrderToBigEndian()
{
  vtk::ConvertManagedToNative<::vtkPLOT3DReader>(m_instance)->SetByteOrderToBigEndian();
}



void vtkPLOT3DReader::SetByteOrderToLittleEndian()
{
  vtk::ConvertManagedToNative<::vtkPLOT3DReader>(m_instance)->SetByteOrderToLittleEndian();
}



void vtkPLOT3DReader::SetByteOrder(int arg0)
{
  vtk::ConvertManagedToNative<::vtkPLOT3DReader>(m_instance)->SetByteOrder(arg0);
}



int vtkPLOT3DReader::GetByteOrder()
{
  int retVal = vtk::ConvertManagedToNative<::vtkPLOT3DReader>(m_instance)->GetByteOrder();
  return retVal;
}



System::String^ vtkPLOT3DReader::GetByteOrderAsString()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkPLOT3DReader>(m_instance)->GetByteOrderAsString();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



void vtkPLOT3DReader::SetR(double arg0)
{
  vtk::ConvertManagedToNative<::vtkPLOT3DReader>(m_instance)->SetR(arg0);
}



double vtkPLOT3DReader::GetR()
{
  double retVal = vtk::ConvertManagedToNative<::vtkPLOT3DReader>(m_instance)->GetR();
  return retVal;
}



void vtkPLOT3DReader::SetGamma(double arg0)
{
  vtk::ConvertManagedToNative<::vtkPLOT3DReader>(m_instance)->SetGamma(arg0);
}



double vtkPLOT3DReader::GetGamma()
{
  double retVal = vtk::ConvertManagedToNative<::vtkPLOT3DReader>(m_instance)->GetGamma();
  return retVal;
}



void vtkPLOT3DReader::SetUvinf(double arg0)
{
  vtk::ConvertManagedToNative<::vtkPLOT3DReader>(m_instance)->SetUvinf(arg0);
}



double vtkPLOT3DReader::GetUvinf()
{
  double retVal = vtk::ConvertManagedToNative<::vtkPLOT3DReader>(m_instance)->GetUvinf();
  return retVal;
}



void vtkPLOT3DReader::SetVvinf(double arg0)
{
  vtk::ConvertManagedToNative<::vtkPLOT3DReader>(m_instance)->SetVvinf(arg0);
}



double vtkPLOT3DReader::GetVvinf()
{
  double retVal = vtk::ConvertManagedToNative<::vtkPLOT3DReader>(m_instance)->GetVvinf();
  return retVal;
}



void vtkPLOT3DReader::SetWvinf(double arg0)
{
  vtk::ConvertManagedToNative<::vtkPLOT3DReader>(m_instance)->SetWvinf(arg0);
}



double vtkPLOT3DReader::GetWvinf()
{
  double retVal = vtk::ConvertManagedToNative<::vtkPLOT3DReader>(m_instance)->GetWvinf();
  return retVal;
}



void vtkPLOT3DReader::SetScalarFunctionNumber(int num)
{
  vtk::ConvertManagedToNative<::vtkPLOT3DReader>(m_instance)->SetScalarFunctionNumber(num);
}



int vtkPLOT3DReader::GetScalarFunctionNumber()
{
  int retVal = vtk::ConvertManagedToNative<::vtkPLOT3DReader>(m_instance)->GetScalarFunctionNumber();
  return retVal;
}



void vtkPLOT3DReader::SetVectorFunctionNumber(int num)
{
  vtk::ConvertManagedToNative<::vtkPLOT3DReader>(m_instance)->SetVectorFunctionNumber(num);
}



int vtkPLOT3DReader::GetVectorFunctionNumber()
{
  int retVal = vtk::ConvertManagedToNative<::vtkPLOT3DReader>(m_instance)->GetVectorFunctionNumber();
  return retVal;
}



void vtkPLOT3DReader::AddFunction(int functionNumber)
{
  vtk::ConvertManagedToNative<::vtkPLOT3DReader>(m_instance)->AddFunction(functionNumber);
}



void vtkPLOT3DReader::RemoveFunction(int arg0)
{
  vtk::ConvertManagedToNative<::vtkPLOT3DReader>(m_instance)->RemoveFunction(arg0);
}



void vtkPLOT3DReader::RemoveAllFunctions()
{
  vtk::ConvertManagedToNative<::vtkPLOT3DReader>(m_instance)->RemoveAllFunctions();
}



int vtkPLOT3DReader::CanReadBinaryFile(System::String^ fname)
{
  char* fnameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(fname).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkPLOT3DReader>(m_instance)->CanReadBinaryFile(fnameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(fnameWrap));
  return retVal;
}



int vtkPLOT3DReader::GenerateDefaultConfiguration()
{
  int retVal = vtk::ConvertManagedToNative<::vtkPLOT3DReader>(m_instance)->GenerateDefaultConfiguration();
  return retVal;
}



  vtkPLOT3DReader::vtkPLOT3DReader(System::IntPtr native, bool bConst) : vtkStructuredGridSource(native, bConst) {}



  vtkPLOT3DReader::vtkPLOT3DReader(bool donothing) : vtkStructuredGridSource(donothing) {}



  vtkPLOT3DReader::vtkPLOT3DReader() : vtkStructuredGridSource(false) {
  this->SetNativePointer(IntPtr(::vtkPLOT3DReader::New()));
}



  vtkPLOT3DReader::~vtkPLOT3DReader() { }





} // end namespace vtkIO
