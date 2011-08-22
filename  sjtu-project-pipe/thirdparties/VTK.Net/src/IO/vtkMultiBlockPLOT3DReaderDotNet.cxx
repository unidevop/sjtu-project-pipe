

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkMultiBlockPLOT3DReaderDotNet.h"

// native includes
#include "strstream"
#include "vtkMultiBlockPLOT3DReader.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkMultiBlockPLOT3DReader::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkMultiBlockPLOT3DReader>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkMultiBlockPLOT3DReader::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkMultiBlockPLOT3DReader>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkMultiBlockPLOT3DReader^ vtkMultiBlockPLOT3DReader::NewInstance()
{
  ::vtkMultiBlockPLOT3DReader* retVal = static_cast<::vtkMultiBlockPLOT3DReader*>(vtk::ConvertManagedToNative<::vtkMultiBlockPLOT3DReader>(m_instance)->NewInstance());
  return gcnew vtkMultiBlockPLOT3DReader(IntPtr(retVal), false);
}



vtkMultiBlockPLOT3DReader^ vtkMultiBlockPLOT3DReader::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkMultiBlockPLOT3DReader* retVal = static_cast<::vtkMultiBlockPLOT3DReader*>(::vtkMultiBlockPLOT3DReader::SafeDownCast(oWrap));
  return gcnew vtkMultiBlockPLOT3DReader(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkMultiBlockPLOT3DReader::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkMultiBlockPLOT3DReader>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkMultiBlockPLOT3DReader::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkMultiBlockPLOT3DReader>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkMultiBlockPLOT3DReader::SetFileName(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  vtk::ConvertManagedToNative<::vtkMultiBlockPLOT3DReader>(m_instance)->SetFileName(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
}



System::String^ vtkMultiBlockPLOT3DReader::GetFileName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkMultiBlockPLOT3DReader>(m_instance)->GetFileName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



void vtkMultiBlockPLOT3DReader::SetXYZFileName(System::String^ arg0)
{
  char* arg0Wrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(arg0).ToPointer());
  vtk::ConvertManagedToNative<::vtkMultiBlockPLOT3DReader>(m_instance)->SetXYZFileName(arg0Wrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(arg0Wrap));
}



System::String^ vtkMultiBlockPLOT3DReader::GetXYZFileName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkMultiBlockPLOT3DReader>(m_instance)->GetXYZFileName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



void vtkMultiBlockPLOT3DReader::SetQFileName(System::String^ arg0)
{
  char* arg0Wrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(arg0).ToPointer());
  vtk::ConvertManagedToNative<::vtkMultiBlockPLOT3DReader>(m_instance)->SetQFileName(arg0Wrap);
  arg0->Remove(0,arg0->Length);
  arg0->Insert(0,System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(arg0Wrap)));
System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(arg0Wrap));
}



System::String^ vtkMultiBlockPLOT3DReader::GetQFileName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkMultiBlockPLOT3DReader>(m_instance)->GetQFileName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkMultiBlockPLOT3DReader::GetNumberOfBlocks()
{
  int retVal = vtk::ConvertManagedToNative<::vtkMultiBlockPLOT3DReader>(m_instance)->GetNumberOfBlocks();
  return retVal;
}



int vtkMultiBlockPLOT3DReader::GetNumberOfGrids()
{
  int retVal = vtk::ConvertManagedToNative<::vtkMultiBlockPLOT3DReader>(m_instance)->GetNumberOfGrids();
  return retVal;
}



void vtkMultiBlockPLOT3DReader::SetBinaryFile(int arg0)
{
  vtk::ConvertManagedToNative<::vtkMultiBlockPLOT3DReader>(m_instance)->SetBinaryFile(arg0);
}



int vtkMultiBlockPLOT3DReader::GetBinaryFile()
{
  int retVal = vtk::ConvertManagedToNative<::vtkMultiBlockPLOT3DReader>(m_instance)->GetBinaryFile();
  return retVal;
}



void vtkMultiBlockPLOT3DReader::BinaryFileOn()
{
  vtk::ConvertManagedToNative<::vtkMultiBlockPLOT3DReader>(m_instance)->BinaryFileOn();
}



void vtkMultiBlockPLOT3DReader::BinaryFileOff()
{
  vtk::ConvertManagedToNative<::vtkMultiBlockPLOT3DReader>(m_instance)->BinaryFileOff();
}



void vtkMultiBlockPLOT3DReader::SetMultiGrid(int arg0)
{
  vtk::ConvertManagedToNative<::vtkMultiBlockPLOT3DReader>(m_instance)->SetMultiGrid(arg0);
}



int vtkMultiBlockPLOT3DReader::GetMultiGrid()
{
  int retVal = vtk::ConvertManagedToNative<::vtkMultiBlockPLOT3DReader>(m_instance)->GetMultiGrid();
  return retVal;
}



void vtkMultiBlockPLOT3DReader::MultiGridOn()
{
  vtk::ConvertManagedToNative<::vtkMultiBlockPLOT3DReader>(m_instance)->MultiGridOn();
}



void vtkMultiBlockPLOT3DReader::MultiGridOff()
{
  vtk::ConvertManagedToNative<::vtkMultiBlockPLOT3DReader>(m_instance)->MultiGridOff();
}



void vtkMultiBlockPLOT3DReader::SetHasByteCount(int arg0)
{
  vtk::ConvertManagedToNative<::vtkMultiBlockPLOT3DReader>(m_instance)->SetHasByteCount(arg0);
}



int vtkMultiBlockPLOT3DReader::GetHasByteCount()
{
  int retVal = vtk::ConvertManagedToNative<::vtkMultiBlockPLOT3DReader>(m_instance)->GetHasByteCount();
  return retVal;
}



void vtkMultiBlockPLOT3DReader::HasByteCountOn()
{
  vtk::ConvertManagedToNative<::vtkMultiBlockPLOT3DReader>(m_instance)->HasByteCountOn();
}



void vtkMultiBlockPLOT3DReader::HasByteCountOff()
{
  vtk::ConvertManagedToNative<::vtkMultiBlockPLOT3DReader>(m_instance)->HasByteCountOff();
}



void vtkMultiBlockPLOT3DReader::SetIBlanking(int arg0)
{
  vtk::ConvertManagedToNative<::vtkMultiBlockPLOT3DReader>(m_instance)->SetIBlanking(arg0);
}



int vtkMultiBlockPLOT3DReader::GetIBlanking()
{
  int retVal = vtk::ConvertManagedToNative<::vtkMultiBlockPLOT3DReader>(m_instance)->GetIBlanking();
  return retVal;
}



void vtkMultiBlockPLOT3DReader::IBlankingOn()
{
  vtk::ConvertManagedToNative<::vtkMultiBlockPLOT3DReader>(m_instance)->IBlankingOn();
}



void vtkMultiBlockPLOT3DReader::IBlankingOff()
{
  vtk::ConvertManagedToNative<::vtkMultiBlockPLOT3DReader>(m_instance)->IBlankingOff();
}



void vtkMultiBlockPLOT3DReader::SetTwoDimensionalGeometry(int arg0)
{
  vtk::ConvertManagedToNative<::vtkMultiBlockPLOT3DReader>(m_instance)->SetTwoDimensionalGeometry(arg0);
}



int vtkMultiBlockPLOT3DReader::GetTwoDimensionalGeometry()
{
  int retVal = vtk::ConvertManagedToNative<::vtkMultiBlockPLOT3DReader>(m_instance)->GetTwoDimensionalGeometry();
  return retVal;
}



void vtkMultiBlockPLOT3DReader::TwoDimensionalGeometryOn()
{
  vtk::ConvertManagedToNative<::vtkMultiBlockPLOT3DReader>(m_instance)->TwoDimensionalGeometryOn();
}



void vtkMultiBlockPLOT3DReader::TwoDimensionalGeometryOff()
{
  vtk::ConvertManagedToNative<::vtkMultiBlockPLOT3DReader>(m_instance)->TwoDimensionalGeometryOff();
}



void vtkMultiBlockPLOT3DReader::SetForceRead(int arg0)
{
  vtk::ConvertManagedToNative<::vtkMultiBlockPLOT3DReader>(m_instance)->SetForceRead(arg0);
}



int vtkMultiBlockPLOT3DReader::GetForceRead()
{
  int retVal = vtk::ConvertManagedToNative<::vtkMultiBlockPLOT3DReader>(m_instance)->GetForceRead();
  return retVal;
}



void vtkMultiBlockPLOT3DReader::ForceReadOn()
{
  vtk::ConvertManagedToNative<::vtkMultiBlockPLOT3DReader>(m_instance)->ForceReadOn();
}



void vtkMultiBlockPLOT3DReader::ForceReadOff()
{
  vtk::ConvertManagedToNative<::vtkMultiBlockPLOT3DReader>(m_instance)->ForceReadOff();
}



void vtkMultiBlockPLOT3DReader::SetByteOrderToBigEndian()
{
  vtk::ConvertManagedToNative<::vtkMultiBlockPLOT3DReader>(m_instance)->SetByteOrderToBigEndian();
}



void vtkMultiBlockPLOT3DReader::SetByteOrderToLittleEndian()
{
  vtk::ConvertManagedToNative<::vtkMultiBlockPLOT3DReader>(m_instance)->SetByteOrderToLittleEndian();
}



void vtkMultiBlockPLOT3DReader::SetByteOrder(int arg0)
{
  vtk::ConvertManagedToNative<::vtkMultiBlockPLOT3DReader>(m_instance)->SetByteOrder(arg0);
}



int vtkMultiBlockPLOT3DReader::GetByteOrder()
{
  int retVal = vtk::ConvertManagedToNative<::vtkMultiBlockPLOT3DReader>(m_instance)->GetByteOrder();
  return retVal;
}



System::String^ vtkMultiBlockPLOT3DReader::GetByteOrderAsString()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkMultiBlockPLOT3DReader>(m_instance)->GetByteOrderAsString();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



void vtkMultiBlockPLOT3DReader::SetR(double arg0)
{
  vtk::ConvertManagedToNative<::vtkMultiBlockPLOT3DReader>(m_instance)->SetR(arg0);
}



double vtkMultiBlockPLOT3DReader::GetR()
{
  double retVal = vtk::ConvertManagedToNative<::vtkMultiBlockPLOT3DReader>(m_instance)->GetR();
  return retVal;
}



void vtkMultiBlockPLOT3DReader::SetGamma(double arg0)
{
  vtk::ConvertManagedToNative<::vtkMultiBlockPLOT3DReader>(m_instance)->SetGamma(arg0);
}



double vtkMultiBlockPLOT3DReader::GetGamma()
{
  double retVal = vtk::ConvertManagedToNative<::vtkMultiBlockPLOT3DReader>(m_instance)->GetGamma();
  return retVal;
}



void vtkMultiBlockPLOT3DReader::SetUvinf(double arg0)
{
  vtk::ConvertManagedToNative<::vtkMultiBlockPLOT3DReader>(m_instance)->SetUvinf(arg0);
}



double vtkMultiBlockPLOT3DReader::GetUvinf()
{
  double retVal = vtk::ConvertManagedToNative<::vtkMultiBlockPLOT3DReader>(m_instance)->GetUvinf();
  return retVal;
}



void vtkMultiBlockPLOT3DReader::SetVvinf(double arg0)
{
  vtk::ConvertManagedToNative<::vtkMultiBlockPLOT3DReader>(m_instance)->SetVvinf(arg0);
}



double vtkMultiBlockPLOT3DReader::GetVvinf()
{
  double retVal = vtk::ConvertManagedToNative<::vtkMultiBlockPLOT3DReader>(m_instance)->GetVvinf();
  return retVal;
}



void vtkMultiBlockPLOT3DReader::SetWvinf(double arg0)
{
  vtk::ConvertManagedToNative<::vtkMultiBlockPLOT3DReader>(m_instance)->SetWvinf(arg0);
}



double vtkMultiBlockPLOT3DReader::GetWvinf()
{
  double retVal = vtk::ConvertManagedToNative<::vtkMultiBlockPLOT3DReader>(m_instance)->GetWvinf();
  return retVal;
}



void vtkMultiBlockPLOT3DReader::SetScalarFunctionNumber(int num)
{
  vtk::ConvertManagedToNative<::vtkMultiBlockPLOT3DReader>(m_instance)->SetScalarFunctionNumber(num);
}



int vtkMultiBlockPLOT3DReader::GetScalarFunctionNumber()
{
  int retVal = vtk::ConvertManagedToNative<::vtkMultiBlockPLOT3DReader>(m_instance)->GetScalarFunctionNumber();
  return retVal;
}



void vtkMultiBlockPLOT3DReader::SetVectorFunctionNumber(int num)
{
  vtk::ConvertManagedToNative<::vtkMultiBlockPLOT3DReader>(m_instance)->SetVectorFunctionNumber(num);
}



int vtkMultiBlockPLOT3DReader::GetVectorFunctionNumber()
{
  int retVal = vtk::ConvertManagedToNative<::vtkMultiBlockPLOT3DReader>(m_instance)->GetVectorFunctionNumber();
  return retVal;
}



void vtkMultiBlockPLOT3DReader::AddFunction(int functionNumber)
{
  vtk::ConvertManagedToNative<::vtkMultiBlockPLOT3DReader>(m_instance)->AddFunction(functionNumber);
}



void vtkMultiBlockPLOT3DReader::RemoveFunction(int arg0)
{
  vtk::ConvertManagedToNative<::vtkMultiBlockPLOT3DReader>(m_instance)->RemoveFunction(arg0);
}



void vtkMultiBlockPLOT3DReader::RemoveAllFunctions()
{
  vtk::ConvertManagedToNative<::vtkMultiBlockPLOT3DReader>(m_instance)->RemoveAllFunctions();
}



int vtkMultiBlockPLOT3DReader::CanReadBinaryFile(System::String^ fname)
{
  char* fnameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(fname).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkMultiBlockPLOT3DReader>(m_instance)->CanReadBinaryFile(fnameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(fnameWrap));
  return retVal;
}



int vtkMultiBlockPLOT3DReader::GenerateDefaultConfiguration()
{
  int retVal = vtk::ConvertManagedToNative<::vtkMultiBlockPLOT3DReader>(m_instance)->GenerateDefaultConfiguration();
  return retVal;
}



  vtkMultiBlockPLOT3DReader::vtkMultiBlockPLOT3DReader(System::IntPtr native, bool bConst) : vtkHierarchicalDataSetAlgorithm(native, bConst) {}



  vtkMultiBlockPLOT3DReader::vtkMultiBlockPLOT3DReader(bool donothing) : vtkHierarchicalDataSetAlgorithm(donothing) {}



  vtkMultiBlockPLOT3DReader::vtkMultiBlockPLOT3DReader() : vtkHierarchicalDataSetAlgorithm(false) {
  this->SetNativePointer(IntPtr(::vtkMultiBlockPLOT3DReader::New()));
}



  vtkMultiBlockPLOT3DReader::~vtkMultiBlockPLOT3DReader() { }





} // end namespace vtkIO
