

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkModelMetadataDotNet.h"

// native includes
#include "strstream"
#include "vtkModelMetadata.h"
#include "vtkDataSet.h"
#include "vtkIntArray.h"

using namespace System;

namespace vtk {

System::String^ vtkModelMetadata::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkModelMetadata>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkModelMetadata::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkModelMetadata>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkModelMetadata^ vtkModelMetadata::NewInstance()
{
  ::vtkModelMetadata* retVal = static_cast<::vtkModelMetadata*>(vtk::ConvertManagedToNative<::vtkModelMetadata>(m_instance)->NewInstance());
  return gcnew vtkModelMetadata(IntPtr(retVal), false);
}



vtkModelMetadata^ vtkModelMetadata::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkModelMetadata* retVal = static_cast<::vtkModelMetadata*>(::vtkModelMetadata::SafeDownCast(oWrap));
  return gcnew vtkModelMetadata(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkModelMetadata::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkModelMetadata>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkModelMetadata::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkModelMetadata>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkModelMetadata::PrintGlobalInformation()
{
  vtk::ConvertManagedToNative<::vtkModelMetadata>(m_instance)->PrintGlobalInformation();
}



void vtkModelMetadata::PrintLocalInformation()
{
  vtk::ConvertManagedToNative<::vtkModelMetadata>(m_instance)->PrintLocalInformation();
}



void vtkModelMetadata::SetTitle(System::String^ arg0)
{
  char* arg0Wrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(arg0).ToPointer());
  vtk::ConvertManagedToNative<::vtkModelMetadata>(m_instance)->SetTitle(arg0Wrap);
  arg0->Remove(0,arg0->Length);
  arg0->Insert(0,System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(arg0Wrap)));
System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(arg0Wrap));
}



void vtkModelMetadata::AddInformationLine(System::String^ info)
{
  char* infoWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(info).ToPointer());
  vtk::ConvertManagedToNative<::vtkModelMetadata>(m_instance)->AddInformationLine(infoWrap);
  info->Remove(0,info->Length);
  info->Insert(0,System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(infoWrap)));
System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(infoWrap));
}



void vtkModelMetadata::AddQARecord(System::String^ name, System::String^ version, System::String^ date, System::String^ time)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  char* versionWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(version).ToPointer());
  char* dateWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(date).ToPointer());
  char* timeWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(time).ToPointer());
  vtk::ConvertManagedToNative<::vtkModelMetadata>(m_instance)->AddQARecord(nameWrap, versionWrap, dateWrap, timeWrap);
  name->Remove(0,name->Length);
  name->Insert(0,System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(nameWrap)));
System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  version->Remove(0,version->Length);
  version->Insert(0,System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(versionWrap)));
System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(versionWrap));
  date->Remove(0,date->Length);
  date->Insert(0,System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(dateWrap)));
System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(dateWrap));
  time->Remove(0,time->Length);
  time->Insert(0,System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(timeWrap)));
System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(timeWrap));
}



void vtkModelMetadata::SetTimeStepIndex(int arg0)
{
  vtk::ConvertManagedToNative<::vtkModelMetadata>(m_instance)->SetTimeStepIndex(arg0);
}



void vtkModelMetadata::SetTimeSteps(int numberOfTimeSteps, array<float>^ timeStepValues)
{
  pin_ptr<float> timeStepValuesPin = &timeStepValues[0];
  float* nativetimeStepValuesPin = timeStepValuesPin;
  vtk::ConvertManagedToNative<::vtkModelMetadata>(m_instance)->SetTimeSteps(numberOfTimeSteps, nativetimeStepValuesPin);
}



void vtkModelMetadata::SetNumberOfBlocks(int arg0)
{
  vtk::ConvertManagedToNative<::vtkModelMetadata>(m_instance)->SetNumberOfBlocks(arg0);
}



void vtkModelMetadata::SetBlockIds(array<int>^ arg0)
{
  pin_ptr<int> arg0Pin = &arg0[0];
  int* nativearg0Pin = arg0Pin;
  vtk::ConvertManagedToNative<::vtkModelMetadata>(m_instance)->SetBlockIds(nativearg0Pin);
}



int vtkModelMetadata::SetBlockNumberOfElements(array<int>^ nelts)
{
  pin_ptr<int> neltsPin = &nelts[0];
  int* nativeneltsPin = neltsPin;
  int retVal = vtk::ConvertManagedToNative<::vtkModelMetadata>(m_instance)->SetBlockNumberOfElements(nativeneltsPin);
  return retVal;
}



void vtkModelMetadata::SetBlockNodesPerElement(array<int>^ arg0)
{
  pin_ptr<int> arg0Pin = &arg0[0];
  int* nativearg0Pin = arg0Pin;
  vtk::ConvertManagedToNative<::vtkModelMetadata>(m_instance)->SetBlockNodesPerElement(nativearg0Pin);
}



void vtkModelMetadata::SetBlockElementIdList(array<int>^ arg0)
{
  pin_ptr<int> arg0Pin = &arg0[0];
  int* nativearg0Pin = arg0Pin;
  vtk::ConvertManagedToNative<::vtkModelMetadata>(m_instance)->SetBlockElementIdList(nativearg0Pin);
}



int vtkModelMetadata::SetBlockNumberOfAttributesPerElement(array<int>^ natts)
{
  pin_ptr<int> nattsPin = &natts[0];
  int* nativenattsPin = nattsPin;
  int retVal = vtk::ConvertManagedToNative<::vtkModelMetadata>(m_instance)->SetBlockNumberOfAttributesPerElement(nativenattsPin);
  return retVal;
}



void vtkModelMetadata::SetBlockAttributes(array<float>^ arg0)
{
  pin_ptr<float> arg0Pin = &arg0[0];
  float* nativearg0Pin = arg0Pin;
  vtk::ConvertManagedToNative<::vtkModelMetadata>(m_instance)->SetBlockAttributes(nativearg0Pin);
}



void vtkModelMetadata::SetNumberOfNodeSets(int arg0)
{
  vtk::ConvertManagedToNative<::vtkModelMetadata>(m_instance)->SetNumberOfNodeSets(arg0);
}



void vtkModelMetadata::SetNodeSetIds(array<int>^ arg0)
{
  pin_ptr<int> arg0Pin = &arg0[0];
  int* nativearg0Pin = arg0Pin;
  vtk::ConvertManagedToNative<::vtkModelMetadata>(m_instance)->SetNodeSetIds(nativearg0Pin);
}



int vtkModelMetadata::SetNodeSetSize(array<int>^ arg0)
{
  pin_ptr<int> arg0Pin = &arg0[0];
  int* nativearg0Pin = arg0Pin;
  int retVal = vtk::ConvertManagedToNative<::vtkModelMetadata>(m_instance)->SetNodeSetSize(nativearg0Pin);
  return retVal;
}



void vtkModelMetadata::SetNodeSetNodeIdList(array<int>^ arg0)
{
  pin_ptr<int> arg0Pin = &arg0[0];
  int* nativearg0Pin = arg0Pin;
  vtk::ConvertManagedToNative<::vtkModelMetadata>(m_instance)->SetNodeSetNodeIdList(nativearg0Pin);
}



int vtkModelMetadata::SetNodeSetNumberOfDistributionFactors(array<int>^ arg0)
{
  pin_ptr<int> arg0Pin = &arg0[0];
  int* nativearg0Pin = arg0Pin;
  int retVal = vtk::ConvertManagedToNative<::vtkModelMetadata>(m_instance)->SetNodeSetNumberOfDistributionFactors(nativearg0Pin);
  return retVal;
}



void vtkModelMetadata::SetNodeSetDistributionFactors(array<float>^ arg0)
{
  pin_ptr<float> arg0Pin = &arg0[0];
  float* nativearg0Pin = arg0Pin;
  vtk::ConvertManagedToNative<::vtkModelMetadata>(m_instance)->SetNodeSetDistributionFactors(nativearg0Pin);
}



void vtkModelMetadata::SetNumberOfSideSets(int arg0)
{
  vtk::ConvertManagedToNative<::vtkModelMetadata>(m_instance)->SetNumberOfSideSets(arg0);
}



void vtkModelMetadata::SetSideSetIds(array<int>^ arg0)
{
  pin_ptr<int> arg0Pin = &arg0[0];
  int* nativearg0Pin = arg0Pin;
  vtk::ConvertManagedToNative<::vtkModelMetadata>(m_instance)->SetSideSetIds(nativearg0Pin);
}



int vtkModelMetadata::SetSideSetSize(array<int>^ sizes)
{
  pin_ptr<int> sizesPin = &sizes[0];
  int* nativesizesPin = sizesPin;
  int retVal = vtk::ConvertManagedToNative<::vtkModelMetadata>(m_instance)->SetSideSetSize(nativesizesPin);
  return retVal;
}



int vtkModelMetadata::SetSideSetNumberOfDistributionFactors(array<int>^ df)
{
  pin_ptr<int> dfPin = &df[0];
  int* nativedfPin = dfPin;
  int retVal = vtk::ConvertManagedToNative<::vtkModelMetadata>(m_instance)->SetSideSetNumberOfDistributionFactors(nativedfPin);
  return retVal;
}



void vtkModelMetadata::SetSideSetElementList(array<int>^ arg0)
{
  pin_ptr<int> arg0Pin = &arg0[0];
  int* nativearg0Pin = arg0Pin;
  vtk::ConvertManagedToNative<::vtkModelMetadata>(m_instance)->SetSideSetElementList(nativearg0Pin);
}



void vtkModelMetadata::SetSideSetSideList(array<int>^ arg0)
{
  pin_ptr<int> arg0Pin = &arg0[0];
  int* nativearg0Pin = arg0Pin;
  vtk::ConvertManagedToNative<::vtkModelMetadata>(m_instance)->SetSideSetSideList(nativearg0Pin);
}



void vtkModelMetadata::SetSideSetNumDFPerSide(array<int>^ numNodes)
{
  pin_ptr<int> numNodesPin = &numNodes[0];
  int* nativenumNodesPin = numNodesPin;
  vtk::ConvertManagedToNative<::vtkModelMetadata>(m_instance)->SetSideSetNumDFPerSide(nativenumNodesPin);
}



void vtkModelMetadata::SetSideSetDistributionFactors(array<float>^ arg0)
{
  pin_ptr<float> arg0Pin = &arg0[0];
  float* nativearg0Pin = arg0Pin;
  vtk::ConvertManagedToNative<::vtkModelMetadata>(m_instance)->SetSideSetDistributionFactors(nativearg0Pin);
}



void vtkModelMetadata::SetBlockPropertyValue(array<int>^ arg0)
{
  pin_ptr<int> arg0Pin = &arg0[0];
  int* nativearg0Pin = arg0Pin;
  vtk::ConvertManagedToNative<::vtkModelMetadata>(m_instance)->SetBlockPropertyValue(nativearg0Pin);
}



void vtkModelMetadata::SetNodeSetPropertyValue(array<int>^ arg0)
{
  pin_ptr<int> arg0Pin = &arg0[0];
  int* nativearg0Pin = arg0Pin;
  vtk::ConvertManagedToNative<::vtkModelMetadata>(m_instance)->SetNodeSetPropertyValue(nativearg0Pin);
}



void vtkModelMetadata::SetSideSetPropertyValue(array<int>^ arg0)
{
  pin_ptr<int> arg0Pin = &arg0[0];
  int* nativearg0Pin = arg0Pin;
  vtk::ConvertManagedToNative<::vtkModelMetadata>(m_instance)->SetSideSetPropertyValue(nativearg0Pin);
}



void vtkModelMetadata::SetGlobalVariableValue(array<float>^ f)
{
  pin_ptr<float> fPin = &f[0];
  float* nativefPin = fPin;
  vtk::ConvertManagedToNative<::vtkModelMetadata>(m_instance)->SetGlobalVariableValue(nativefPin);
}



void vtkModelMetadata::SetElementVariableTruthTable(array<int>^ arg0)
{
  pin_ptr<int> arg0Pin = &arg0[0];
  int* nativearg0Pin = arg0Pin;
  vtk::ConvertManagedToNative<::vtkModelMetadata>(m_instance)->SetElementVariableTruthTable(nativearg0Pin);
}



void vtkModelMetadata::SetAllVariablesDefinedInAllBlocks(int arg0)
{
  vtk::ConvertManagedToNative<::vtkModelMetadata>(m_instance)->SetAllVariablesDefinedInAllBlocks(arg0);
}



void vtkModelMetadata::AllVariablesDefinedInAllBlocksOn()
{
  vtk::ConvertManagedToNative<::vtkModelMetadata>(m_instance)->AllVariablesDefinedInAllBlocksOn();
}



void vtkModelMetadata::AllVariablesDefinedInAllBlocksOff()
{
  vtk::ConvertManagedToNative<::vtkModelMetadata>(m_instance)->AllVariablesDefinedInAllBlocksOff();
}



int vtkModelMetadata::ElementVariableIsDefinedInBlock(System::String^ varname, int blockId)
{
  char* varnameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(varname).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkModelMetadata>(m_instance)->ElementVariableIsDefinedInBlock(varnameWrap, blockId);
  varname->Remove(0,varname->Length);
  varname->Insert(0,System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(varnameWrap)));
System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(varnameWrap));
  return retVal;
}



System::String^ vtkModelMetadata::FindOriginalElementVariableName(System::String^ name, int component)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  const char* retVal = vtk::ConvertManagedToNative<::vtkModelMetadata>(m_instance)->FindOriginalElementVariableName(nameWrap, component);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



System::String^ vtkModelMetadata::FindOriginalNodeVariableName(System::String^ name, int component)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  const char* retVal = vtk::ConvertManagedToNative<::vtkModelMetadata>(m_instance)->FindOriginalNodeVariableName(nameWrap, component);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkModelMetadata::HasMetadata(vtkDataSet^ grid)
{
  ::vtkDataSet* gridWrap = vtk::ConvertManagedToNative<::vtkDataSet>(grid->GetNativePointer());
  int retVal = ::vtkModelMetadata::HasMetadata(gridWrap);
  return retVal;
}



void vtkModelMetadata::RemoveMetadata(vtkDataSet^ grid)
{
  ::vtkDataSet* gridWrap = vtk::ConvertManagedToNative<::vtkDataSet>(grid->GetNativePointer());
  ::vtkModelMetadata::RemoveMetadata(gridWrap);
}



void vtkModelMetadata::Pack(vtkDataSet^ ugrid)
{
  ::vtkDataSet* ugridWrap = vtk::ConvertManagedToNative<::vtkDataSet>(ugrid->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkModelMetadata>(m_instance)->Pack(ugridWrap);
}



int vtkModelMetadata::Unpack(vtkDataSet^ ugrid, int deleteIt)
{
  ::vtkDataSet* ugridWrap = vtk::ConvertManagedToNative<::vtkDataSet>(ugrid->GetNativePointer());
  int retVal = vtk::ConvertManagedToNative<::vtkModelMetadata>(m_instance)->Unpack(ugridWrap, deleteIt);
  return retVal;
}



int vtkModelMetadata::AddUGridElementVariable(System::String^ ugridVarName, System::String^ origName, int numComponents)
{
  char* ugridVarNameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(ugridVarName).ToPointer());
  char* origNameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(origName).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkModelMetadata>(m_instance)->AddUGridElementVariable(ugridVarNameWrap, origNameWrap, numComponents);
  ugridVarName->Remove(0,ugridVarName->Length);
  ugridVarName->Insert(0,System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(ugridVarNameWrap)));
System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(ugridVarNameWrap));
  origName->Remove(0,origName->Length);
  origName->Insert(0,System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(origNameWrap)));
System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(origNameWrap));
  return retVal;
}



int vtkModelMetadata::RemoveUGridElementVariable(System::String^ ugridVarName)
{
  char* ugridVarNameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(ugridVarName).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkModelMetadata>(m_instance)->RemoveUGridElementVariable(ugridVarNameWrap);
  ugridVarName->Remove(0,ugridVarName->Length);
  ugridVarName->Insert(0,System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(ugridVarNameWrap)));
System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(ugridVarNameWrap));
  return retVal;
}



int vtkModelMetadata::AddUGridNodeVariable(System::String^ ugridVarName, System::String^ origName, int numComponents)
{
  char* ugridVarNameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(ugridVarName).ToPointer());
  char* origNameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(origName).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkModelMetadata>(m_instance)->AddUGridNodeVariable(ugridVarNameWrap, origNameWrap, numComponents);
  ugridVarName->Remove(0,ugridVarName->Length);
  ugridVarName->Insert(0,System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(ugridVarNameWrap)));
System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(ugridVarNameWrap));
  origName->Remove(0,origName->Length);
  origName->Insert(0,System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(origNameWrap)));
System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(origNameWrap));
  return retVal;
}



int vtkModelMetadata::RemoveUGridNodeVariable(System::String^ ugridVarName)
{
  char* ugridVarNameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(ugridVarName).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkModelMetadata>(m_instance)->RemoveUGridNodeVariable(ugridVarNameWrap);
  ugridVarName->Remove(0,ugridVarName->Length);
  ugridVarName->Insert(0,System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(ugridVarNameWrap)));
System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(ugridVarNameWrap));
  return retVal;
}



int vtkModelMetadata::MergeModelMetadata(vtkModelMetadata^ em)
{
  ::vtkModelMetadata* emWrap = vtk::ConvertManagedToNative<::vtkModelMetadata>(em->GetNativePointer());
  int retVal = vtk::ConvertManagedToNative<::vtkModelMetadata>(m_instance)->MergeModelMetadata(emWrap);
  return retVal;
}



int vtkModelMetadata::MergeGlobalInformation(vtkModelMetadata^ em)
{
  ::vtkModelMetadata* emWrap = vtk::ConvertManagedToNative<::vtkModelMetadata>(em->GetNativePointer());
  int retVal = vtk::ConvertManagedToNative<::vtkModelMetadata>(m_instance)->MergeGlobalInformation(emWrap);
  return retVal;
}



vtkModelMetadata^ vtkModelMetadata::ExtractModelMetadata(vtkIntArray^ globalCellIdList, vtkDataSet^ grid, System::String^ globalCellIdArrayName, System::String^ globalNodeIdArrayName)
{
  ::vtkIntArray* globalCellIdListWrap = vtk::ConvertManagedToNative<::vtkIntArray>(globalCellIdList->GetNativePointer());
  ::vtkDataSet* gridWrap = vtk::ConvertManagedToNative<::vtkDataSet>(grid->GetNativePointer());
  char* globalCellIdArrayNameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(globalCellIdArrayName).ToPointer());
  char* globalNodeIdArrayNameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(globalNodeIdArrayName).ToPointer());
  ::vtkModelMetadata* retVal = static_cast<::vtkModelMetadata*>(vtk::ConvertManagedToNative<::vtkModelMetadata>(m_instance)->ExtractModelMetadata(globalCellIdListWrap, gridWrap, globalCellIdArrayNameWrap, globalNodeIdArrayNameWrap));
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(globalCellIdArrayNameWrap));
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(globalNodeIdArrayNameWrap));
  return gcnew vtkModelMetadata(IntPtr(retVal), false);
}



vtkModelMetadata^ vtkModelMetadata::ExtractGlobalMetadata()
{
  ::vtkModelMetadata* retVal = static_cast<::vtkModelMetadata*>(vtk::ConvertManagedToNative<::vtkModelMetadata>(m_instance)->ExtractGlobalMetadata());
  return gcnew vtkModelMetadata(IntPtr(retVal), false);
}



void vtkModelMetadata::FreeAllGlobalData()
{
  vtk::ConvertManagedToNative<::vtkModelMetadata>(m_instance)->FreeAllGlobalData();
}



void vtkModelMetadata::FreeAllLocalData()
{
  vtk::ConvertManagedToNative<::vtkModelMetadata>(m_instance)->FreeAllLocalData();
}



void vtkModelMetadata::FreeBlockDependentData()
{
  vtk::ConvertManagedToNative<::vtkModelMetadata>(m_instance)->FreeBlockDependentData();
}



void vtkModelMetadata::FreeOriginalElementVariableNames()
{
  vtk::ConvertManagedToNative<::vtkModelMetadata>(m_instance)->FreeOriginalElementVariableNames();
}



void vtkModelMetadata::FreeOriginalNodeVariableNames()
{
  vtk::ConvertManagedToNative<::vtkModelMetadata>(m_instance)->FreeOriginalNodeVariableNames();
}



void vtkModelMetadata::FreeUsedElementVariableNames()
{
  vtk::ConvertManagedToNative<::vtkModelMetadata>(m_instance)->FreeUsedElementVariableNames();
}



void vtkModelMetadata::FreeUsedNodeVariableNames()
{
  vtk::ConvertManagedToNative<::vtkModelMetadata>(m_instance)->FreeUsedNodeVariableNames();
}



void vtkModelMetadata::FreeUsedElementVariables()
{
  vtk::ConvertManagedToNative<::vtkModelMetadata>(m_instance)->FreeUsedElementVariables();
}



void vtkModelMetadata::FreeUsedNodeVariables()
{
  vtk::ConvertManagedToNative<::vtkModelMetadata>(m_instance)->FreeUsedNodeVariables();
}



void vtkModelMetadata::Reset()
{
  vtk::ConvertManagedToNative<::vtkModelMetadata>(m_instance)->Reset();
}



int vtkModelMetadata::GetBlockLocalIndex(int id)
{
  int retVal = vtk::ConvertManagedToNative<::vtkModelMetadata>(m_instance)->GetBlockLocalIndex(id);
  return retVal;
}



  vtkModelMetadata::vtkModelMetadata(System::IntPtr native, bool bConst) : vtkObject(native, bConst) {}



  vtkModelMetadata::vtkModelMetadata(bool donothing) : vtkObject(donothing) {}



  vtkModelMetadata::vtkModelMetadata() : vtkObject(false) {
  this->SetNativePointer(IntPtr(::vtkModelMetadata::New()));
}



  vtkModelMetadata::~vtkModelMetadata() { }





} // end namespace vtkGraphics
