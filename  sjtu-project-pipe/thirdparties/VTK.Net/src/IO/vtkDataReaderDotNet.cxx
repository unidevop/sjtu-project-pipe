

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkDataReaderDotNet.h"

// native includes
#include "strstream"
#include "vtkDataReader.h"
#include "vtkCharArray.h"
#include "vtkDataArray.h"
#include "vtkDataSet.h"
#include "vtkFieldData.h"
#include "vtkInformation.h"
#include "vtkObject.h"
#include "vtkPointSet.h"
#include "vtkRectilinearGrid.h"

using namespace System;

namespace vtk {

System::String^ vtkDataReader::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkDataReader>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkDataReader::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkDataReader>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkDataReader^ vtkDataReader::NewInstance()
{
  ::vtkDataReader* retVal = static_cast<::vtkDataReader*>(vtk::ConvertManagedToNative<::vtkDataReader>(m_instance)->NewInstance());
  return gcnew vtkDataReader(IntPtr(retVal), false);
}



vtkDataReader^ vtkDataReader::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkDataReader* retVal = static_cast<::vtkDataReader*>(::vtkDataReader::SafeDownCast(oWrap));
  return gcnew vtkDataReader(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkDataReader::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkDataReader>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkDataReader::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkDataReader>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkDataReader::SetFileName(System::String^ arg0)
{
  char* arg0Wrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(arg0).ToPointer());
  vtk::ConvertManagedToNative<::vtkDataReader>(m_instance)->SetFileName(arg0Wrap);
  arg0->Remove(0,arg0->Length);
  arg0->Insert(0,System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(arg0Wrap)));
System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(arg0Wrap));
}



System::String^ vtkDataReader::GetFileName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkDataReader>(m_instance)->GetFileName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkDataReader::IsFileValid(System::String^ dstype)
{
  char* dstypeWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(dstype).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkDataReader>(m_instance)->IsFileValid(dstypeWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(dstypeWrap));
  return retVal;
}



int vtkDataReader::IsFileStructuredPoints()
{
  int retVal = vtk::ConvertManagedToNative<::vtkDataReader>(m_instance)->IsFileStructuredPoints();
  return retVal;
}



int vtkDataReader::IsFilePolyData()
{
  int retVal = vtk::ConvertManagedToNative<::vtkDataReader>(m_instance)->IsFilePolyData();
  return retVal;
}



int vtkDataReader::IsFileStructuredGrid()
{
  int retVal = vtk::ConvertManagedToNative<::vtkDataReader>(m_instance)->IsFileStructuredGrid();
  return retVal;
}



int vtkDataReader::IsFileUnstructuredGrid()
{
  int retVal = vtk::ConvertManagedToNative<::vtkDataReader>(m_instance)->IsFileUnstructuredGrid();
  return retVal;
}



int vtkDataReader::IsFileRectilinearGrid()
{
  int retVal = vtk::ConvertManagedToNative<::vtkDataReader>(m_instance)->IsFileRectilinearGrid();
  return retVal;
}



void vtkDataReader::SetInputString(System::String^ in)
{
  char* inWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(in).ToPointer());
  vtk::ConvertManagedToNative<::vtkDataReader>(m_instance)->SetInputString(inWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(inWrap));
}



System::String^ vtkDataReader::GetInputString()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkDataReader>(m_instance)->GetInputString();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



void vtkDataReader::SetInputString(System::String^ in, int len)
{
  char* inWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(in).ToPointer());
  vtk::ConvertManagedToNative<::vtkDataReader>(m_instance)->SetInputString(inWrap, len);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(inWrap));
}



int vtkDataReader::GetInputStringLength()
{
  int retVal = vtk::ConvertManagedToNative<::vtkDataReader>(m_instance)->GetInputStringLength();
  return retVal;
}



void vtkDataReader::SetBinaryInputString(System::String^ arg0, int len)
{
  char* arg0Wrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(arg0).ToPointer());
  vtk::ConvertManagedToNative<::vtkDataReader>(m_instance)->SetBinaryInputString(arg0Wrap, len);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(arg0Wrap));
}



void vtkDataReader::SetInputArray(vtkCharArray^ arg0)
{
  ::vtkCharArray* arg0Wrap = vtk::ConvertManagedToNative<::vtkCharArray>(arg0->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkDataReader>(m_instance)->SetInputArray(arg0Wrap);
}



vtkCharArray^ vtkDataReader::GetInputArray()
{
  ::vtkCharArray* retVal = static_cast<::vtkCharArray*>(vtk::ConvertManagedToNative<::vtkDataReader>(m_instance)->GetInputArray());
  return gcnew vtkCharArray(IntPtr(retVal), false);
}



System::String^ vtkDataReader::GetHeader()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkDataReader>(m_instance)->GetHeader();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



void vtkDataReader::SetReadFromInputString(int arg0)
{
  vtk::ConvertManagedToNative<::vtkDataReader>(m_instance)->SetReadFromInputString(arg0);
}



int vtkDataReader::GetReadFromInputString()
{
  int retVal = vtk::ConvertManagedToNative<::vtkDataReader>(m_instance)->GetReadFromInputString();
  return retVal;
}



void vtkDataReader::ReadFromInputStringOn()
{
  vtk::ConvertManagedToNative<::vtkDataReader>(m_instance)->ReadFromInputStringOn();
}



void vtkDataReader::ReadFromInputStringOff()
{
  vtk::ConvertManagedToNative<::vtkDataReader>(m_instance)->ReadFromInputStringOff();
}



int vtkDataReader::GetFileType()
{
  int retVal = vtk::ConvertManagedToNative<::vtkDataReader>(m_instance)->GetFileType();
  return retVal;
}



int vtkDataReader::GetNumberOfScalarsInFile()
{
  int retVal = vtk::ConvertManagedToNative<::vtkDataReader>(m_instance)->GetNumberOfScalarsInFile();
  return retVal;
}



int vtkDataReader::GetNumberOfVectorsInFile()
{
  int retVal = vtk::ConvertManagedToNative<::vtkDataReader>(m_instance)->GetNumberOfVectorsInFile();
  return retVal;
}



int vtkDataReader::GetNumberOfTensorsInFile()
{
  int retVal = vtk::ConvertManagedToNative<::vtkDataReader>(m_instance)->GetNumberOfTensorsInFile();
  return retVal;
}



int vtkDataReader::GetNumberOfNormalsInFile()
{
  int retVal = vtk::ConvertManagedToNative<::vtkDataReader>(m_instance)->GetNumberOfNormalsInFile();
  return retVal;
}



int vtkDataReader::GetNumberOfTCoordsInFile()
{
  int retVal = vtk::ConvertManagedToNative<::vtkDataReader>(m_instance)->GetNumberOfTCoordsInFile();
  return retVal;
}



int vtkDataReader::GetNumberOfFieldDataInFile()
{
  int retVal = vtk::ConvertManagedToNative<::vtkDataReader>(m_instance)->GetNumberOfFieldDataInFile();
  return retVal;
}



System::String^ vtkDataReader::GetScalarsNameInFile(int i)
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkDataReader>(m_instance)->GetScalarsNameInFile(i);
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



System::String^ vtkDataReader::GetVectorsNameInFile(int i)
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkDataReader>(m_instance)->GetVectorsNameInFile(i);
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



System::String^ vtkDataReader::GetTensorsNameInFile(int i)
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkDataReader>(m_instance)->GetTensorsNameInFile(i);
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



System::String^ vtkDataReader::GetNormalsNameInFile(int i)
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkDataReader>(m_instance)->GetNormalsNameInFile(i);
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



System::String^ vtkDataReader::GetTCoordsNameInFile(int i)
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkDataReader>(m_instance)->GetTCoordsNameInFile(i);
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



System::String^ vtkDataReader::GetFieldDataNameInFile(int i)
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkDataReader>(m_instance)->GetFieldDataNameInFile(i);
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



void vtkDataReader::SetScalarsName(System::String^ arg0)
{
  char* arg0Wrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(arg0).ToPointer());
  vtk::ConvertManagedToNative<::vtkDataReader>(m_instance)->SetScalarsName(arg0Wrap);
  arg0->Remove(0,arg0->Length);
  arg0->Insert(0,System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(arg0Wrap)));
System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(arg0Wrap));
}



System::String^ vtkDataReader::GetScalarsName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkDataReader>(m_instance)->GetScalarsName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



void vtkDataReader::SetVectorsName(System::String^ arg0)
{
  char* arg0Wrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(arg0).ToPointer());
  vtk::ConvertManagedToNative<::vtkDataReader>(m_instance)->SetVectorsName(arg0Wrap);
  arg0->Remove(0,arg0->Length);
  arg0->Insert(0,System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(arg0Wrap)));
System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(arg0Wrap));
}



System::String^ vtkDataReader::GetVectorsName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkDataReader>(m_instance)->GetVectorsName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



void vtkDataReader::SetTensorsName(System::String^ arg0)
{
  char* arg0Wrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(arg0).ToPointer());
  vtk::ConvertManagedToNative<::vtkDataReader>(m_instance)->SetTensorsName(arg0Wrap);
  arg0->Remove(0,arg0->Length);
  arg0->Insert(0,System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(arg0Wrap)));
System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(arg0Wrap));
}



System::String^ vtkDataReader::GetTensorsName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkDataReader>(m_instance)->GetTensorsName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



void vtkDataReader::SetNormalsName(System::String^ arg0)
{
  char* arg0Wrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(arg0).ToPointer());
  vtk::ConvertManagedToNative<::vtkDataReader>(m_instance)->SetNormalsName(arg0Wrap);
  arg0->Remove(0,arg0->Length);
  arg0->Insert(0,System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(arg0Wrap)));
System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(arg0Wrap));
}



System::String^ vtkDataReader::GetNormalsName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkDataReader>(m_instance)->GetNormalsName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



void vtkDataReader::SetTCoordsName(System::String^ arg0)
{
  char* arg0Wrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(arg0).ToPointer());
  vtk::ConvertManagedToNative<::vtkDataReader>(m_instance)->SetTCoordsName(arg0Wrap);
  arg0->Remove(0,arg0->Length);
  arg0->Insert(0,System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(arg0Wrap)));
System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(arg0Wrap));
}



System::String^ vtkDataReader::GetTCoordsName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkDataReader>(m_instance)->GetTCoordsName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



void vtkDataReader::SetLookupTableName(System::String^ arg0)
{
  char* arg0Wrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(arg0).ToPointer());
  vtk::ConvertManagedToNative<::vtkDataReader>(m_instance)->SetLookupTableName(arg0Wrap);
  arg0->Remove(0,arg0->Length);
  arg0->Insert(0,System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(arg0Wrap)));
System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(arg0Wrap));
}



System::String^ vtkDataReader::GetLookupTableName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkDataReader>(m_instance)->GetLookupTableName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



void vtkDataReader::SetFieldDataName(System::String^ arg0)
{
  char* arg0Wrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(arg0).ToPointer());
  vtk::ConvertManagedToNative<::vtkDataReader>(m_instance)->SetFieldDataName(arg0Wrap);
  arg0->Remove(0,arg0->Length);
  arg0->Insert(0,System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(arg0Wrap)));
System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(arg0Wrap));
}



System::String^ vtkDataReader::GetFieldDataName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkDataReader>(m_instance)->GetFieldDataName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



void vtkDataReader::SetReadAllScalars(int arg0)
{
  vtk::ConvertManagedToNative<::vtkDataReader>(m_instance)->SetReadAllScalars(arg0);
}



int vtkDataReader::GetReadAllScalars()
{
  int retVal = vtk::ConvertManagedToNative<::vtkDataReader>(m_instance)->GetReadAllScalars();
  return retVal;
}



void vtkDataReader::ReadAllScalarsOn()
{
  vtk::ConvertManagedToNative<::vtkDataReader>(m_instance)->ReadAllScalarsOn();
}



void vtkDataReader::ReadAllScalarsOff()
{
  vtk::ConvertManagedToNative<::vtkDataReader>(m_instance)->ReadAllScalarsOff();
}



void vtkDataReader::SetReadAllVectors(int arg0)
{
  vtk::ConvertManagedToNative<::vtkDataReader>(m_instance)->SetReadAllVectors(arg0);
}



int vtkDataReader::GetReadAllVectors()
{
  int retVal = vtk::ConvertManagedToNative<::vtkDataReader>(m_instance)->GetReadAllVectors();
  return retVal;
}



void vtkDataReader::ReadAllVectorsOn()
{
  vtk::ConvertManagedToNative<::vtkDataReader>(m_instance)->ReadAllVectorsOn();
}



void vtkDataReader::ReadAllVectorsOff()
{
  vtk::ConvertManagedToNative<::vtkDataReader>(m_instance)->ReadAllVectorsOff();
}



void vtkDataReader::SetReadAllNormals(int arg0)
{
  vtk::ConvertManagedToNative<::vtkDataReader>(m_instance)->SetReadAllNormals(arg0);
}



int vtkDataReader::GetReadAllNormals()
{
  int retVal = vtk::ConvertManagedToNative<::vtkDataReader>(m_instance)->GetReadAllNormals();
  return retVal;
}



void vtkDataReader::ReadAllNormalsOn()
{
  vtk::ConvertManagedToNative<::vtkDataReader>(m_instance)->ReadAllNormalsOn();
}



void vtkDataReader::ReadAllNormalsOff()
{
  vtk::ConvertManagedToNative<::vtkDataReader>(m_instance)->ReadAllNormalsOff();
}



void vtkDataReader::SetReadAllTensors(int arg0)
{
  vtk::ConvertManagedToNative<::vtkDataReader>(m_instance)->SetReadAllTensors(arg0);
}



int vtkDataReader::GetReadAllTensors()
{
  int retVal = vtk::ConvertManagedToNative<::vtkDataReader>(m_instance)->GetReadAllTensors();
  return retVal;
}



void vtkDataReader::ReadAllTensorsOn()
{
  vtk::ConvertManagedToNative<::vtkDataReader>(m_instance)->ReadAllTensorsOn();
}



void vtkDataReader::ReadAllTensorsOff()
{
  vtk::ConvertManagedToNative<::vtkDataReader>(m_instance)->ReadAllTensorsOff();
}



void vtkDataReader::SetReadAllColorScalars(int arg0)
{
  vtk::ConvertManagedToNative<::vtkDataReader>(m_instance)->SetReadAllColorScalars(arg0);
}



int vtkDataReader::GetReadAllColorScalars()
{
  int retVal = vtk::ConvertManagedToNative<::vtkDataReader>(m_instance)->GetReadAllColorScalars();
  return retVal;
}



void vtkDataReader::ReadAllColorScalarsOn()
{
  vtk::ConvertManagedToNative<::vtkDataReader>(m_instance)->ReadAllColorScalarsOn();
}



void vtkDataReader::ReadAllColorScalarsOff()
{
  vtk::ConvertManagedToNative<::vtkDataReader>(m_instance)->ReadAllColorScalarsOff();
}



void vtkDataReader::SetReadAllTCoords(int arg0)
{
  vtk::ConvertManagedToNative<::vtkDataReader>(m_instance)->SetReadAllTCoords(arg0);
}



int vtkDataReader::GetReadAllTCoords()
{
  int retVal = vtk::ConvertManagedToNative<::vtkDataReader>(m_instance)->GetReadAllTCoords();
  return retVal;
}



void vtkDataReader::ReadAllTCoordsOn()
{
  vtk::ConvertManagedToNative<::vtkDataReader>(m_instance)->ReadAllTCoordsOn();
}



void vtkDataReader::ReadAllTCoordsOff()
{
  vtk::ConvertManagedToNative<::vtkDataReader>(m_instance)->ReadAllTCoordsOff();
}



void vtkDataReader::SetReadAllFields(int arg0)
{
  vtk::ConvertManagedToNative<::vtkDataReader>(m_instance)->SetReadAllFields(arg0);
}



int vtkDataReader::GetReadAllFields()
{
  int retVal = vtk::ConvertManagedToNative<::vtkDataReader>(m_instance)->GetReadAllFields();
  return retVal;
}



void vtkDataReader::ReadAllFieldsOn()
{
  vtk::ConvertManagedToNative<::vtkDataReader>(m_instance)->ReadAllFieldsOn();
}



void vtkDataReader::ReadAllFieldsOff()
{
  vtk::ConvertManagedToNative<::vtkDataReader>(m_instance)->ReadAllFieldsOff();
}



int vtkDataReader::OpenVTKFile()
{
  int retVal = vtk::ConvertManagedToNative<::vtkDataReader>(m_instance)->OpenVTKFile();
  return retVal;
}



int vtkDataReader::ReadHeader()
{
  int retVal = vtk::ConvertManagedToNative<::vtkDataReader>(m_instance)->ReadHeader();
  return retVal;
}



int vtkDataReader::ReadCellData(vtkDataSet^ ds, int numCells)
{
  ::vtkDataSet* dsWrap = vtk::ConvertManagedToNative<::vtkDataSet>(ds->GetNativePointer());
  int retVal = vtk::ConvertManagedToNative<::vtkDataReader>(m_instance)->ReadCellData(dsWrap, numCells);
  return retVal;
}



int vtkDataReader::ReadPointData(vtkDataSet^ ds, int numPts)
{
  ::vtkDataSet* dsWrap = vtk::ConvertManagedToNative<::vtkDataSet>(ds->GetNativePointer());
  int retVal = vtk::ConvertManagedToNative<::vtkDataReader>(m_instance)->ReadPointData(dsWrap, numPts);
  return retVal;
}



int vtkDataReader::ReadPoints(vtkPointSet^ ps, int numPts)
{
  ::vtkPointSet* psWrap = vtk::ConvertManagedToNative<::vtkPointSet>(ps->GetNativePointer());
  int retVal = vtk::ConvertManagedToNative<::vtkDataReader>(m_instance)->ReadPoints(psWrap, numPts);
  return retVal;
}



int vtkDataReader::ReadCells(int size, array<int>^ data)
{
  pin_ptr<int> dataPin = &data[0];
  int* nativedataPin = dataPin;
  int retVal = vtk::ConvertManagedToNative<::vtkDataReader>(m_instance)->ReadCells(size, nativedataPin);
  return retVal;
}



int vtkDataReader::ReadCells(int size, array<int>^ data, int skip1, int read2, int skip3)
{
  pin_ptr<int> dataPin = &data[0];
  int* nativedataPin = dataPin;
  int retVal = vtk::ConvertManagedToNative<::vtkDataReader>(m_instance)->ReadCells(size, nativedataPin, skip1, read2, skip3);
  return retVal;
}



int vtkDataReader::ReadCoordinates(vtkRectilinearGrid^ rg, int axes, int numCoords)
{
  ::vtkRectilinearGrid* rgWrap = vtk::ConvertManagedToNative<::vtkRectilinearGrid>(rg->GetNativePointer());
  int retVal = vtk::ConvertManagedToNative<::vtkDataReader>(m_instance)->ReadCoordinates(rgWrap, axes, numCoords);
  return retVal;
}



vtkDataArray^ vtkDataReader::ReadArray(System::String^ dataType, int numTuples, int numComp)
{
  char* dataTypeWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(dataType).ToPointer());
  ::vtkDataArray* retVal = static_cast<::vtkDataArray*>(vtk::ConvertManagedToNative<::vtkDataReader>(m_instance)->ReadArray(dataTypeWrap, numTuples, numComp));
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(dataTypeWrap));
  return gcnew vtkDataArray(IntPtr(retVal), false);
}



vtkFieldData^ vtkDataReader::ReadFieldData()
{
  ::vtkFieldData* retVal = static_cast<::vtkFieldData*>(vtk::ConvertManagedToNative<::vtkDataReader>(m_instance)->ReadFieldData());
  return gcnew vtkFieldData(IntPtr(retVal), false);
}



int vtkDataReader::Read(System::String^ arg0)
{
  char* arg0Wrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(arg0).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkDataReader>(m_instance)->Read(arg0Wrap);
  arg0->Remove(0,arg0->Length);
  arg0->Insert(0,System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(arg0Wrap)));
System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(arg0Wrap));
  return retVal;
}



int vtkDataReader::Read(array<unsigned char>^ arg0)
{
  pin_ptr<unsigned char> arg0Pin = &arg0[0];
  unsigned char* nativearg0Pin = arg0Pin;
  int retVal = vtk::ConvertManagedToNative<::vtkDataReader>(m_instance)->Read(nativearg0Pin);
  return retVal;
}



int vtkDataReader::Read(array<short>^ arg0)
{
  pin_ptr<short> arg0Pin = &arg0[0];
  short* nativearg0Pin = arg0Pin;
  int retVal = vtk::ConvertManagedToNative<::vtkDataReader>(m_instance)->Read(nativearg0Pin);
  return retVal;
}



int vtkDataReader::Read(array<unsigned short>^ arg0)
{
  pin_ptr<unsigned short> arg0Pin = &arg0[0];
  unsigned short* nativearg0Pin = arg0Pin;
  int retVal = vtk::ConvertManagedToNative<::vtkDataReader>(m_instance)->Read(nativearg0Pin);
  return retVal;
}



int vtkDataReader::Read(array<int>^ arg0)
{
  pin_ptr<int> arg0Pin = &arg0[0];
  int* nativearg0Pin = arg0Pin;
  int retVal = vtk::ConvertManagedToNative<::vtkDataReader>(m_instance)->Read(nativearg0Pin);
  return retVal;
}



int vtkDataReader::Read(array<unsigned int>^ arg0)
{
  pin_ptr<unsigned int> arg0Pin = &arg0[0];
  unsigned int* nativearg0Pin = arg0Pin;
  int retVal = vtk::ConvertManagedToNative<::vtkDataReader>(m_instance)->Read(nativearg0Pin);
  return retVal;
}



int vtkDataReader::Read(array<long>^ arg0)
{
  pin_ptr<long> arg0Pin = &arg0[0];
  long* nativearg0Pin = arg0Pin;
  int retVal = vtk::ConvertManagedToNative<::vtkDataReader>(m_instance)->Read(nativearg0Pin);
  return retVal;
}



int vtkDataReader::Read(array<unsigned long>^ arg0)
{
  pin_ptr<unsigned long> arg0Pin = &arg0[0];
  unsigned long* nativearg0Pin = arg0Pin;
  int retVal = vtk::ConvertManagedToNative<::vtkDataReader>(m_instance)->Read(nativearg0Pin);
  return retVal;
}



int vtkDataReader::Read(array<float>^ arg0)
{
  pin_ptr<float> arg0Pin = &arg0[0];
  float* nativearg0Pin = arg0Pin;
  int retVal = vtk::ConvertManagedToNative<::vtkDataReader>(m_instance)->Read(nativearg0Pin);
  return retVal;
}



int vtkDataReader::Read(array<double>^ arg0)
{
  pin_ptr<double> arg0Pin = &arg0[0];
  double* nativearg0Pin = arg0Pin;
  int retVal = vtk::ConvertManagedToNative<::vtkDataReader>(m_instance)->Read(nativearg0Pin);
  return retVal;
}



void vtkDataReader::CloseVTKFile()
{
  vtk::ConvertManagedToNative<::vtkDataReader>(m_instance)->CloseVTKFile();
}



int vtkDataReader::ReadMetaData(vtkInformation^ arg0)
{
  ::vtkInformation* arg0Wrap = vtk::ConvertManagedToNative<::vtkInformation>(arg0->GetNativePointer());
  int retVal = vtk::ConvertManagedToNative<::vtkDataReader>(m_instance)->ReadMetaData(arg0Wrap);
  return retVal;
}



  vtkDataReader::vtkDataReader(System::IntPtr native, bool bConst) : vtkAlgorithm(native, bConst) {}



  vtkDataReader::vtkDataReader(bool donothing) : vtkAlgorithm(donothing) {}



  vtkDataReader::vtkDataReader() : vtkAlgorithm(false) {
  this->SetNativePointer(IntPtr(::vtkDataReader::New()));
}



  vtkDataReader::~vtkDataReader() { }





} // end namespace vtkIO
