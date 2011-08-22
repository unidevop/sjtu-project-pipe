

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkExodusReaderDotNet.h"
#include "vtkDSPFilterDefinitionDotNet.h"
#include "vtkExodusModelDotNet.h"

// native includes
#include "strstream"
#include "vtkExodusReader.h"
#include "vtkDSPFilterDefinition.h"
#include "vtkDataSet.h"
#include "vtkExodusModel.h"
#include "vtkFloatArray.h"
#include "vtkObject.h"
#include "vtkUnstructuredGrid.h"

using namespace System;

namespace vtk {

System::String^ vtkExodusReader::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkExodusReader>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkExodusReader::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkExodusReader>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkExodusReader^ vtkExodusReader::NewInstance()
{
  ::vtkExodusReader* retVal = static_cast<::vtkExodusReader*>(vtk::ConvertManagedToNative<::vtkExodusReader>(m_instance)->NewInstance());
  return gcnew vtkExodusReader(IntPtr(retVal), false);
}



vtkExodusReader^ vtkExodusReader::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkExodusReader* retVal = static_cast<::vtkExodusReader*>(::vtkExodusReader::SafeDownCast(oWrap));
  return gcnew vtkExodusReader(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkExodusReader::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkExodusReader>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkExodusReader::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkExodusReader>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkExodusReader::SetFileName(System::String^ arg0)
{
  char* arg0Wrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(arg0).ToPointer());
  vtk::ConvertManagedToNative<::vtkExodusReader>(m_instance)->SetFileName(arg0Wrap);
  arg0->Remove(0,arg0->Length);
  arg0->Insert(0,System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(arg0Wrap)));
System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(arg0Wrap));
}



System::String^ vtkExodusReader::GetFileName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkExodusReader>(m_instance)->GetFileName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



void vtkExodusReader::SetXMLFileName(System::String^ filename)
{
  char* filenameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(filename).ToPointer());
  vtk::ConvertManagedToNative<::vtkExodusReader>(m_instance)->SetXMLFileName(filenameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(filenameWrap));
}



System::String^ vtkExodusReader::GetXMLFileName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkExodusReader>(m_instance)->GetXMLFileName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



void vtkExodusReader::SetTimeStep(int arg0)
{
  vtk::ConvertManagedToNative<::vtkExodusReader>(m_instance)->SetTimeStep(arg0);
}



int vtkExodusReader::GetTimeStep()
{
  int retVal = vtk::ConvertManagedToNative<::vtkExodusReader>(m_instance)->GetTimeStep();
  return retVal;
}



void vtkExodusReader::SetGenerateBlockIdCellArray(int arg0)
{
  vtk::ConvertManagedToNative<::vtkExodusReader>(m_instance)->SetGenerateBlockIdCellArray(arg0);
}



int vtkExodusReader::GetGenerateBlockIdCellArray()
{
  int retVal = vtk::ConvertManagedToNative<::vtkExodusReader>(m_instance)->GetGenerateBlockIdCellArray();
  return retVal;
}



void vtkExodusReader::GenerateBlockIdCellArrayOn()
{
  vtk::ConvertManagedToNative<::vtkExodusReader>(m_instance)->GenerateBlockIdCellArrayOn();
}



void vtkExodusReader::GenerateBlockIdCellArrayOff()
{
  vtk::ConvertManagedToNative<::vtkExodusReader>(m_instance)->GenerateBlockIdCellArrayOff();
}



System::String^ vtkExodusReader::GetBlockIdArrayName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkExodusReader>(m_instance)->GetBlockIdArrayName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



void vtkExodusReader::SetGenerateGlobalElementIdArray(int arg0)
{
  vtk::ConvertManagedToNative<::vtkExodusReader>(m_instance)->SetGenerateGlobalElementIdArray(arg0);
}



int vtkExodusReader::GetGenerateGlobalElementIdArray()
{
  int retVal = vtk::ConvertManagedToNative<::vtkExodusReader>(m_instance)->GetGenerateGlobalElementIdArray();
  return retVal;
}



void vtkExodusReader::GenerateGlobalElementIdArrayOn()
{
  vtk::ConvertManagedToNative<::vtkExodusReader>(m_instance)->GenerateGlobalElementIdArrayOn();
}



void vtkExodusReader::GenerateGlobalElementIdArrayOff()
{
  vtk::ConvertManagedToNative<::vtkExodusReader>(m_instance)->GenerateGlobalElementIdArrayOff();
}



System::String^ vtkExodusReader::GetGlobalElementIdArrayName()
{
  const char* retVal = ::vtkExodusReader::GetGlobalElementIdArrayName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkExodusReader::GetGlobalElementID(vtkDataSet^ data, int localID)
{
  ::vtkDataSet* dataWrap = vtk::ConvertManagedToNative<::vtkDataSet>(data->GetNativePointer());
  int retVal = ::vtkExodusReader::GetGlobalElementID(dataWrap, localID);
  return retVal;
}



int vtkExodusReader::GetGlobalElementID(vtkDataSet^ data, int localID, int searchType)
{
  ::vtkDataSet* dataWrap = vtk::ConvertManagedToNative<::vtkDataSet>(data->GetNativePointer());
  int retVal = ::vtkExodusReader::GetGlobalElementID(dataWrap, localID, searchType);
  return retVal;
}



void vtkExodusReader::SetGenerateGlobalNodeIdArray(int arg0)
{
  vtk::ConvertManagedToNative<::vtkExodusReader>(m_instance)->SetGenerateGlobalNodeIdArray(arg0);
}



int vtkExodusReader::GetGenerateGlobalNodeIdArray()
{
  int retVal = vtk::ConvertManagedToNative<::vtkExodusReader>(m_instance)->GetGenerateGlobalNodeIdArray();
  return retVal;
}



void vtkExodusReader::GenerateGlobalNodeIdArrayOn()
{
  vtk::ConvertManagedToNative<::vtkExodusReader>(m_instance)->GenerateGlobalNodeIdArrayOn();
}



void vtkExodusReader::GenerateGlobalNodeIdArrayOff()
{
  vtk::ConvertManagedToNative<::vtkExodusReader>(m_instance)->GenerateGlobalNodeIdArrayOff();
}



System::String^ vtkExodusReader::GetGlobalNodeIdArrayName()
{
  const char* retVal = ::vtkExodusReader::GetGlobalNodeIdArrayName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkExodusReader::GetGlobalNodeID(vtkDataSet^ data, int localID)
{
  ::vtkDataSet* dataWrap = vtk::ConvertManagedToNative<::vtkDataSet>(data->GetNativePointer());
  int retVal = ::vtkExodusReader::GetGlobalNodeID(dataWrap, localID);
  return retVal;
}



int vtkExodusReader::GetGlobalNodeID(vtkDataSet^ data, int localID, int searchType)
{
  ::vtkDataSet* dataWrap = vtk::ConvertManagedToNative<::vtkDataSet>(data->GetNativePointer());
  int retVal = ::vtkExodusReader::GetGlobalNodeID(dataWrap, localID, searchType);
  return retVal;
}



void vtkExodusReader::SetApplyDisplacements(int arg0)
{
  vtk::ConvertManagedToNative<::vtkExodusReader>(m_instance)->SetApplyDisplacements(arg0);
}



int vtkExodusReader::GetApplyDisplacements()
{
  int retVal = vtk::ConvertManagedToNative<::vtkExodusReader>(m_instance)->GetApplyDisplacements();
  return retVal;
}



void vtkExodusReader::ApplyDisplacementsOn()
{
  vtk::ConvertManagedToNative<::vtkExodusReader>(m_instance)->ApplyDisplacementsOn();
}



void vtkExodusReader::ApplyDisplacementsOff()
{
  vtk::ConvertManagedToNative<::vtkExodusReader>(m_instance)->ApplyDisplacementsOff();
}



void vtkExodusReader::SetDisplacementMagnitude(float arg0)
{
  vtk::ConvertManagedToNative<::vtkExodusReader>(m_instance)->SetDisplacementMagnitude(arg0);
}



float vtkExodusReader::GetDisplacementMagnitude()
{
  float retVal = vtk::ConvertManagedToNative<::vtkExodusReader>(m_instance)->GetDisplacementMagnitude();
  return retVal;
}



System::String^ vtkExodusReader::GetTitle()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkExodusReader>(m_instance)->GetTitle();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkExodusReader::GetDimensionality()
{
  int retVal = vtk::ConvertManagedToNative<::vtkExodusReader>(m_instance)->GetDimensionality();
  return retVal;
}



int vtkExodusReader::GetNumberOfTimeSteps()
{
  int retVal = vtk::ConvertManagedToNative<::vtkExodusReader>(m_instance)->GetNumberOfTimeSteps();
  return retVal;
}



int vtkExodusReader::GetNumberOfElements()
{
  int retVal = vtk::ConvertManagedToNative<::vtkExodusReader>(m_instance)->GetNumberOfElements();
  return retVal;
}



int vtkExodusReader::GetNumberOfNodeSets()
{
  int retVal = vtk::ConvertManagedToNative<::vtkExodusReader>(m_instance)->GetNumberOfNodeSets();
  return retVal;
}



int vtkExodusReader::GetNumberOfSideSets()
{
  int retVal = vtk::ConvertManagedToNative<::vtkExodusReader>(m_instance)->GetNumberOfSideSets();
  return retVal;
}



int vtkExodusReader::GetNumberOfBlocks()
{
  int retVal = vtk::ConvertManagedToNative<::vtkExodusReader>(m_instance)->GetNumberOfBlocks();
  return retVal;
}



array<int>^ vtkExodusReader::GetTimeStepRange()
{
  const int* retVal = vtk::ConvertManagedToNative<::vtkExodusReader>(m_instance)->GetTimeStepRange();
  array<int>^ mRetVal = gcnew array<int>(2);
  for (size_t cprIdx=0; cprIdx<2; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



void vtkExodusReader::SetTimeStepRange(int arg0, int arg1)
{
  vtk::ConvertManagedToNative<::vtkExodusReader>(m_instance)->SetTimeStepRange(arg0, arg1);
}



void vtkExodusReader::SetTimeStepRange(array<int>^ a)
{
  pin_ptr<int> aPin = &a[0];
  int* nativeaPin = aPin;
  vtk::ConvertManagedToNative<::vtkExodusReader>(m_instance)->SetTimeStepRange(nativeaPin);
}



int vtkExodusReader::GetNumberOfNodes()
{
  int retVal = vtk::ConvertManagedToNative<::vtkExodusReader>(m_instance)->GetNumberOfNodes();
  return retVal;
}



int vtkExodusReader::GetNumberOfElementsInBlock(int block_idx)
{
  int retVal = vtk::ConvertManagedToNative<::vtkExodusReader>(m_instance)->GetNumberOfElementsInBlock(block_idx);
  return retVal;
}



int vtkExodusReader::GetBlockId(int block_idx)
{
  int retVal = vtk::ConvertManagedToNative<::vtkExodusReader>(m_instance)->GetBlockId(block_idx);
  return retVal;
}



int vtkExodusReader::GetNumberOfPointArrays()
{
  int retVal = vtk::ConvertManagedToNative<::vtkExodusReader>(m_instance)->GetNumberOfPointArrays();
  return retVal;
}



System::String^ vtkExodusReader::GetPointArrayName(int index)
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkExodusReader>(m_instance)->GetPointArrayName(index);
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkExodusReader::GetPointArrayID(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkExodusReader>(m_instance)->GetPointArrayID(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



int vtkExodusReader::GetPointArrayNumberOfComponents(int index)
{
  int retVal = vtk::ConvertManagedToNative<::vtkExodusReader>(m_instance)->GetPointArrayNumberOfComponents(index);
  return retVal;
}



void vtkExodusReader::SetPointArrayStatus(int index, int flag)
{
  vtk::ConvertManagedToNative<::vtkExodusReader>(m_instance)->SetPointArrayStatus(index, flag);
}



void vtkExodusReader::SetPointArrayStatus(System::String^ arg0, int flag)
{
  char* arg0Wrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(arg0).ToPointer());
  vtk::ConvertManagedToNative<::vtkExodusReader>(m_instance)->SetPointArrayStatus(arg0Wrap, flag);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(arg0Wrap));
}



int vtkExodusReader::GetPointArrayStatus(int index)
{
  int retVal = vtk::ConvertManagedToNative<::vtkExodusReader>(m_instance)->GetPointArrayStatus(index);
  return retVal;
}



int vtkExodusReader::GetPointArrayStatus(System::String^ arg0)
{
  char* arg0Wrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(arg0).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkExodusReader>(m_instance)->GetPointArrayStatus(arg0Wrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(arg0Wrap));
  return retVal;
}



int vtkExodusReader::GetNumberOfCellArrays()
{
  int retVal = vtk::ConvertManagedToNative<::vtkExodusReader>(m_instance)->GetNumberOfCellArrays();
  return retVal;
}



System::String^ vtkExodusReader::GetCellArrayName(int index)
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkExodusReader>(m_instance)->GetCellArrayName(index);
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkExodusReader::GetCellArrayID(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkExodusReader>(m_instance)->GetCellArrayID(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



int vtkExodusReader::GetCellArrayNumberOfComponents(int index)
{
  int retVal = vtk::ConvertManagedToNative<::vtkExodusReader>(m_instance)->GetCellArrayNumberOfComponents(index);
  return retVal;
}



void vtkExodusReader::SetCellArrayStatus(int index, int flag)
{
  vtk::ConvertManagedToNative<::vtkExodusReader>(m_instance)->SetCellArrayStatus(index, flag);
}



void vtkExodusReader::SetCellArrayStatus(System::String^ arg0, int flag)
{
  char* arg0Wrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(arg0).ToPointer());
  vtk::ConvertManagedToNative<::vtkExodusReader>(m_instance)->SetCellArrayStatus(arg0Wrap, flag);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(arg0Wrap));
}



int vtkExodusReader::GetCellArrayStatus(int index)
{
  int retVal = vtk::ConvertManagedToNative<::vtkExodusReader>(m_instance)->GetCellArrayStatus(index);
  return retVal;
}



int vtkExodusReader::GetCellArrayStatus(System::String^ arg0)
{
  char* arg0Wrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(arg0).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkExodusReader>(m_instance)->GetCellArrayStatus(arg0Wrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(arg0Wrap));
  return retVal;
}



int vtkExodusReader::GetNumberOfBlockArrays()
{
  int retVal = vtk::ConvertManagedToNative<::vtkExodusReader>(m_instance)->GetNumberOfBlockArrays();
  return retVal;
}



System::String^ vtkExodusReader::GetBlockArrayName(int index)
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkExodusReader>(m_instance)->GetBlockArrayName(index);
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkExodusReader::GetBlockArrayID(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkExodusReader>(m_instance)->GetBlockArrayID(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



void vtkExodusReader::SetBlockArrayStatus(int index, int flag)
{
  vtk::ConvertManagedToNative<::vtkExodusReader>(m_instance)->SetBlockArrayStatus(index, flag);
}



void vtkExodusReader::SetBlockArrayStatus(System::String^ arg0, int flag)
{
  char* arg0Wrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(arg0).ToPointer());
  vtk::ConvertManagedToNative<::vtkExodusReader>(m_instance)->SetBlockArrayStatus(arg0Wrap, flag);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(arg0Wrap));
}



int vtkExodusReader::GetBlockArrayStatus(int index)
{
  int retVal = vtk::ConvertManagedToNative<::vtkExodusReader>(m_instance)->GetBlockArrayStatus(index);
  return retVal;
}



int vtkExodusReader::GetBlockArrayStatus(System::String^ arg0)
{
  char* arg0Wrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(arg0).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkExodusReader>(m_instance)->GetBlockArrayStatus(arg0Wrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(arg0Wrap));
  return retVal;
}



int vtkExodusReader::GetNumberOfNodeSetArrays()
{
  int retVal = vtk::ConvertManagedToNative<::vtkExodusReader>(m_instance)->GetNumberOfNodeSetArrays();
  return retVal;
}



int vtkExodusReader::GetNodeSetArrayStatus(int index)
{
  int retVal = vtk::ConvertManagedToNative<::vtkExodusReader>(m_instance)->GetNodeSetArrayStatus(index);
  return retVal;
}



int vtkExodusReader::GetNodeSetArrayStatus(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkExodusReader>(m_instance)->GetNodeSetArrayStatus(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



void vtkExodusReader::SetNodeSetArrayStatus(int index, int flag)
{
  vtk::ConvertManagedToNative<::vtkExodusReader>(m_instance)->SetNodeSetArrayStatus(index, flag);
}



void vtkExodusReader::SetNodeSetArrayStatus(System::String^ name, int flag)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  vtk::ConvertManagedToNative<::vtkExodusReader>(m_instance)->SetNodeSetArrayStatus(nameWrap, flag);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
}



System::String^ vtkExodusReader::GetNodeSetArrayName(int index)
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkExodusReader>(m_instance)->GetNodeSetArrayName(index);
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkExodusReader::GetNumberOfSideSetArrays()
{
  int retVal = vtk::ConvertManagedToNative<::vtkExodusReader>(m_instance)->GetNumberOfSideSetArrays();
  return retVal;
}



int vtkExodusReader::GetSideSetArrayStatus(int index)
{
  int retVal = vtk::ConvertManagedToNative<::vtkExodusReader>(m_instance)->GetSideSetArrayStatus(index);
  return retVal;
}



int vtkExodusReader::GetSideSetArrayStatus(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkExodusReader>(m_instance)->GetSideSetArrayStatus(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



void vtkExodusReader::SetSideSetArrayStatus(int index, int flag)
{
  vtk::ConvertManagedToNative<::vtkExodusReader>(m_instance)->SetSideSetArrayStatus(index, flag);
}



void vtkExodusReader::SetSideSetArrayStatus(System::String^ name, int flag)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  vtk::ConvertManagedToNative<::vtkExodusReader>(m_instance)->SetSideSetArrayStatus(nameWrap, flag);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
}



System::String^ vtkExodusReader::GetSideSetArrayName(int index)
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkExodusReader>(m_instance)->GetSideSetArrayName(index);
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkExodusReader::GetNumberOfPartArrays()
{
  int retVal = vtk::ConvertManagedToNative<::vtkExodusReader>(m_instance)->GetNumberOfPartArrays();
  return retVal;
}



System::String^ vtkExodusReader::GetPartArrayName(int arrayIdx)
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkExodusReader>(m_instance)->GetPartArrayName(arrayIdx);
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkExodusReader::GetPartArrayID(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkExodusReader>(m_instance)->GetPartArrayID(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



System::String^ vtkExodusReader::GetPartBlockInfo(int arrayIdx)
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkExodusReader>(m_instance)->GetPartBlockInfo(arrayIdx);
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



void vtkExodusReader::SetPartArrayStatus(int index, int flag)
{
  vtk::ConvertManagedToNative<::vtkExodusReader>(m_instance)->SetPartArrayStatus(index, flag);
}



void vtkExodusReader::SetPartArrayStatus(System::String^ arg0, int flag)
{
  char* arg0Wrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(arg0).ToPointer());
  vtk::ConvertManagedToNative<::vtkExodusReader>(m_instance)->SetPartArrayStatus(arg0Wrap, flag);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(arg0Wrap));
}



int vtkExodusReader::GetPartArrayStatus(int index)
{
  int retVal = vtk::ConvertManagedToNative<::vtkExodusReader>(m_instance)->GetPartArrayStatus(index);
  return retVal;
}



int vtkExodusReader::GetPartArrayStatus(System::String^ arg0)
{
  char* arg0Wrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(arg0).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkExodusReader>(m_instance)->GetPartArrayStatus(arg0Wrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(arg0Wrap));
  return retVal;
}



int vtkExodusReader::GetNumberOfMaterialArrays()
{
  int retVal = vtk::ConvertManagedToNative<::vtkExodusReader>(m_instance)->GetNumberOfMaterialArrays();
  return retVal;
}



System::String^ vtkExodusReader::GetMaterialArrayName(int arrayIdx)
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkExodusReader>(m_instance)->GetMaterialArrayName(arrayIdx);
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkExodusReader::GetMaterialArrayID(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkExodusReader>(m_instance)->GetMaterialArrayID(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



void vtkExodusReader::SetMaterialArrayStatus(int index, int flag)
{
  vtk::ConvertManagedToNative<::vtkExodusReader>(m_instance)->SetMaterialArrayStatus(index, flag);
}



void vtkExodusReader::SetMaterialArrayStatus(System::String^ arg0, int flag)
{
  char* arg0Wrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(arg0).ToPointer());
  vtk::ConvertManagedToNative<::vtkExodusReader>(m_instance)->SetMaterialArrayStatus(arg0Wrap, flag);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(arg0Wrap));
}



int vtkExodusReader::GetMaterialArrayStatus(int index)
{
  int retVal = vtk::ConvertManagedToNative<::vtkExodusReader>(m_instance)->GetMaterialArrayStatus(index);
  return retVal;
}



int vtkExodusReader::GetMaterialArrayStatus(System::String^ arg0)
{
  char* arg0Wrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(arg0).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkExodusReader>(m_instance)->GetMaterialArrayStatus(arg0Wrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(arg0Wrap));
  return retVal;
}



int vtkExodusReader::GetNumberOfAssemblyArrays()
{
  int retVal = vtk::ConvertManagedToNative<::vtkExodusReader>(m_instance)->GetNumberOfAssemblyArrays();
  return retVal;
}



System::String^ vtkExodusReader::GetAssemblyArrayName(int arrayIdx)
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkExodusReader>(m_instance)->GetAssemblyArrayName(arrayIdx);
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkExodusReader::GetAssemblyArrayID(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkExodusReader>(m_instance)->GetAssemblyArrayID(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



void vtkExodusReader::SetAssemblyArrayStatus(int index, int flag)
{
  vtk::ConvertManagedToNative<::vtkExodusReader>(m_instance)->SetAssemblyArrayStatus(index, flag);
}



void vtkExodusReader::SetAssemblyArrayStatus(System::String^ arg0, int flag)
{
  char* arg0Wrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(arg0).ToPointer());
  vtk::ConvertManagedToNative<::vtkExodusReader>(m_instance)->SetAssemblyArrayStatus(arg0Wrap, flag);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(arg0Wrap));
}



int vtkExodusReader::GetAssemblyArrayStatus(int index)
{
  int retVal = vtk::ConvertManagedToNative<::vtkExodusReader>(m_instance)->GetAssemblyArrayStatus(index);
  return retVal;
}



int vtkExodusReader::GetAssemblyArrayStatus(System::String^ arg0)
{
  char* arg0Wrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(arg0).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkExodusReader>(m_instance)->GetAssemblyArrayStatus(arg0Wrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(arg0Wrap));
  return retVal;
}



int vtkExodusReader::GetNumberOfHierarchyArrays()
{
  int retVal = vtk::ConvertManagedToNative<::vtkExodusReader>(m_instance)->GetNumberOfHierarchyArrays();
  return retVal;
}



System::String^ vtkExodusReader::GetHierarchyArrayName(int arrayIdx)
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkExodusReader>(m_instance)->GetHierarchyArrayName(arrayIdx);
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



void vtkExodusReader::SetHierarchyArrayStatus(int index, int flag)
{
  vtk::ConvertManagedToNative<::vtkExodusReader>(m_instance)->SetHierarchyArrayStatus(index, flag);
}



void vtkExodusReader::SetHierarchyArrayStatus(System::String^ arg0, int flag)
{
  char* arg0Wrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(arg0).ToPointer());
  vtk::ConvertManagedToNative<::vtkExodusReader>(m_instance)->SetHierarchyArrayStatus(arg0Wrap, flag);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(arg0Wrap));
}



int vtkExodusReader::GetHierarchyArrayStatus(int index)
{
  int retVal = vtk::ConvertManagedToNative<::vtkExodusReader>(m_instance)->GetHierarchyArrayStatus(index);
  return retVal;
}



int vtkExodusReader::GetHierarchyArrayStatus(System::String^ arg0)
{
  char* arg0Wrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(arg0).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkExodusReader>(m_instance)->GetHierarchyArrayStatus(arg0Wrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(arg0Wrap));
  return retVal;
}



int vtkExodusReader::GetDisplayType()
{
  int retVal = vtk::ConvertManagedToNative<::vtkExodusReader>(m_instance)->GetDisplayType();
  return retVal;
}



void vtkExodusReader::SetDisplayType(int type)
{
  vtk::ConvertManagedToNative<::vtkExodusReader>(m_instance)->SetDisplayType(type);
}



void vtkExodusReader::ExodusModelMetadataOn()
{
  vtk::ConvertManagedToNative<::vtkExodusReader>(m_instance)->ExodusModelMetadataOn();
}



void vtkExodusReader::ExodusModelMetadataOff()
{
  vtk::ConvertManagedToNative<::vtkExodusReader>(m_instance)->ExodusModelMetadataOff();
}



void vtkExodusReader::SetExodusModelMetadata(int arg0)
{
  vtk::ConvertManagedToNative<::vtkExodusReader>(m_instance)->SetExodusModelMetadata(arg0);
}



int vtkExodusReader::GetExodusModelMetadata()
{
  int retVal = vtk::ConvertManagedToNative<::vtkExodusReader>(m_instance)->GetExodusModelMetadata();
  return retVal;
}



vtkExodusModel^ vtkExodusReader::GetExodusModel()
{
  ::vtkExodusModel* retVal = static_cast<::vtkExodusModel*>(vtk::ConvertManagedToNative<::vtkExodusReader>(m_instance)->GetExodusModel());
  return gcnew vtkExodusModel(IntPtr(retVal), false);
}



void vtkExodusReader::SetPackExodusModelOntoOutput(int arg0)
{
  vtk::ConvertManagedToNative<::vtkExodusReader>(m_instance)->SetPackExodusModelOntoOutput(arg0);
}



int vtkExodusReader::GetPackExodusModelOntoOutput()
{
  int retVal = vtk::ConvertManagedToNative<::vtkExodusReader>(m_instance)->GetPackExodusModelOntoOutput();
  return retVal;
}



void vtkExodusReader::PackExodusModelOntoOutputOn()
{
  vtk::ConvertManagedToNative<::vtkExodusReader>(m_instance)->PackExodusModelOntoOutputOn();
}



void vtkExodusReader::PackExodusModelOntoOutputOff()
{
  vtk::ConvertManagedToNative<::vtkExodusReader>(m_instance)->PackExodusModelOntoOutputOff();
}



int vtkExodusReader::IsValidVariable(System::String^ type, System::String^ name)
{
  char* typeWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(type).ToPointer());
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkExodusReader>(m_instance)->IsValidVariable(typeWrap, nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(typeWrap));
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



int vtkExodusReader::GetVariableID(System::String^ type, System::String^ name)
{
  char* typeWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(type).ToPointer());
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkExodusReader>(m_instance)->GetVariableID(typeWrap, nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(typeWrap));
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



void vtkExodusReader::SetAllAssemblyArrayStatus(int status)
{
  vtk::ConvertManagedToNative<::vtkExodusReader>(m_instance)->SetAllAssemblyArrayStatus(status);
}



void vtkExodusReader::SetAllBlockArrayStatus(int status)
{
  vtk::ConvertManagedToNative<::vtkExodusReader>(m_instance)->SetAllBlockArrayStatus(status);
}



void vtkExodusReader::SetAllCellArrayStatus(int status)
{
  vtk::ConvertManagedToNative<::vtkExodusReader>(m_instance)->SetAllCellArrayStatus(status);
}



void vtkExodusReader::SetAllHierarchyArrayStatus(int status)
{
  vtk::ConvertManagedToNative<::vtkExodusReader>(m_instance)->SetAllHierarchyArrayStatus(status);
}



void vtkExodusReader::SetAllMaterialArrayStatus(int status)
{
  vtk::ConvertManagedToNative<::vtkExodusReader>(m_instance)->SetAllMaterialArrayStatus(status);
}



void vtkExodusReader::SetAllPartArrayStatus(int status)
{
  vtk::ConvertManagedToNative<::vtkExodusReader>(m_instance)->SetAllPartArrayStatus(status);
}



void vtkExodusReader::SetAllPointArrayStatus(int status)
{
  vtk::ConvertManagedToNative<::vtkExodusReader>(m_instance)->SetAllPointArrayStatus(status);
}



void vtkExodusReader::SetArrayStatus(System::String^ type, System::String^ name, int flag)
{
  char* typeWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(type).ToPointer());
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  vtk::ConvertManagedToNative<::vtkExodusReader>(m_instance)->SetArrayStatus(typeWrap, nameWrap, flag);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(typeWrap));
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
}



int vtkExodusReader::GetArrayStatus(System::String^ type, System::String^ name)
{
  char* typeWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(type).ToPointer());
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkExodusReader>(m_instance)->GetArrayStatus(typeWrap, nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(typeWrap));
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



int vtkExodusReader::StringsEqual(System::String^ s1, System::String^ s2)
{
  char* s1Wrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(s1).ToPointer());
  char* s2Wrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(s2).ToPointer());
  int retVal = ::vtkExodusReader::StringsEqual(s1Wrap, s2Wrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(s1Wrap));
  s2->Remove(0,s2->Length);
  s2->Insert(0,System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(s2Wrap)));
System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(s2Wrap));
  return retVal;
}



void vtkExodusReader::StringUppercase(System::String^ str, System::String^ upperstr)
{
  char* strWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(str).ToPointer());
  char* upperstrWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(upperstr).ToPointer());
  ::vtkExodusReader::StringUppercase(strWrap, upperstrWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(strWrap));
  upperstr->Remove(0,upperstr->Length);
  upperstr->Insert(0,System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(upperstrWrap)));
System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(upperstrWrap));
}



System::String^ vtkExodusReader::StrDupWithNew(System::String^ s)
{
  char* sWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(s).ToPointer());
  const char* retVal = ::vtkExodusReader::StrDupWithNew(sWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(sWrap));
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkExodusReader::GetTimeSeriesData(int ID, System::String^ vName, System::String^ vType, vtkFloatArray^ result)
{
  char* vNameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(vName).ToPointer());
  char* vTypeWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(vType).ToPointer());
  ::vtkFloatArray* resultWrap = vtk::ConvertManagedToNative<::vtkFloatArray>(result->GetNativePointer());
  int retVal = vtk::ConvertManagedToNative<::vtkExodusReader>(m_instance)->GetTimeSeriesData(ID, vNameWrap, vTypeWrap, resultWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(vNameWrap));
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(vTypeWrap));
  return retVal;
}



int vtkExodusReader::GetNumberOfVariableArrays()
{
  int retVal = vtk::ConvertManagedToNative<::vtkExodusReader>(m_instance)->GetNumberOfVariableArrays();
  return retVal;
}



System::String^ vtkExodusReader::GetVariableArrayName(int a_which)
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkExodusReader>(m_instance)->GetVariableArrayName(a_which);
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



void vtkExodusReader::EnableDSPFiltering()
{
  vtk::ConvertManagedToNative<::vtkExodusReader>(m_instance)->EnableDSPFiltering();
}



void vtkExodusReader::AddFilter(vtkDSPFilterDefinition^ a_filter)
{
  ::vtkDSPFilterDefinition* a_filterWrap = vtk::ConvertManagedToNative<::vtkDSPFilterDefinition>(a_filter->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkExodusReader>(m_instance)->AddFilter(a_filterWrap);
}



void vtkExodusReader::StartAddingFilter()
{
  vtk::ConvertManagedToNative<::vtkExodusReader>(m_instance)->StartAddingFilter();
}



void vtkExodusReader::AddFilterInputVar(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  vtk::ConvertManagedToNative<::vtkExodusReader>(m_instance)->AddFilterInputVar(nameWrap);
  name->Remove(0,name->Length);
  name->Insert(0,System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(nameWrap)));
System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
}



void vtkExodusReader::AddFilterOutputVar(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  vtk::ConvertManagedToNative<::vtkExodusReader>(m_instance)->AddFilterOutputVar(nameWrap);
  name->Remove(0,name->Length);
  name->Insert(0,System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(nameWrap)));
System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
}



void vtkExodusReader::AddFilterNumeratorWeight(double weight)
{
  vtk::ConvertManagedToNative<::vtkExodusReader>(m_instance)->AddFilterNumeratorWeight(weight);
}



void vtkExodusReader::AddFilterForwardNumeratorWeight(double weight)
{
  vtk::ConvertManagedToNative<::vtkExodusReader>(m_instance)->AddFilterForwardNumeratorWeight(weight);
}



void vtkExodusReader::AddFilterDenominatorWeight(double weight)
{
  vtk::ConvertManagedToNative<::vtkExodusReader>(m_instance)->AddFilterDenominatorWeight(weight);
}



void vtkExodusReader::FinishAddingFilter()
{
  vtk::ConvertManagedToNative<::vtkExodusReader>(m_instance)->FinishAddingFilter();
}



void vtkExodusReader::RemoveFilter(System::String^ a_outputVariableName)
{
  char* a_outputVariableNameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(a_outputVariableName).ToPointer());
  vtk::ConvertManagedToNative<::vtkExodusReader>(m_instance)->RemoveFilter(a_outputVariableNameWrap);
  a_outputVariableName->Remove(0,a_outputVariableName->Length);
  a_outputVariableName->Insert(0,System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(a_outputVariableNameWrap)));
System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(a_outputVariableNameWrap));
}



void vtkExodusReader::GetDSPOutputArrays(int exoid, vtkUnstructuredGrid^ output)
{
  ::vtkUnstructuredGrid* outputWrap = vtk::ConvertManagedToNative<::vtkUnstructuredGrid>(output->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkExodusReader>(m_instance)->GetDSPOutputArrays(exoid, outputWrap);
}



  vtkExodusReader::vtkExodusReader(System::IntPtr native, bool bConst) : vtkUnstructuredGridAlgorithm(native, bConst) {}



  vtkExodusReader::vtkExodusReader(bool donothing) : vtkUnstructuredGridAlgorithm(donothing) {}



  vtkExodusReader::vtkExodusReader() : vtkUnstructuredGridAlgorithm(false) {
  this->SetNativePointer(IntPtr(::vtkExodusReader::New()));
}



  vtkExodusReader::~vtkExodusReader() { }





} // end namespace vtkHybrid
