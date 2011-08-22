

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkDataObjectDotNet.h"
#include "vtkAlgorithmOutputDotNet.h"
#include "vtkFieldDataDotNet.h"
#include "vtkInformationDotNet.h"
#include "vtkInformationDataObjectKeyDotNet.h"
#include "vtkInformationDoubleKeyDotNet.h"
#include "vtkInformationDoubleVectorKeyDotNet.h"
#include "vtkInformationInformationVectorKeyDotNet.h"
#include "vtkInformationIntegerKeyDotNet.h"
#include "vtkInformationIntegerPointerKeyDotNet.h"
#include "vtkInformationStringKeyDotNet.h"
#include "vtkSourceDotNet.h"

// native includes
#include "strstream"
#include "vtkDataObject.h"
#include "vtkAlgorithmOutput.h"
#include "vtkExtentTranslator.h"
#include "vtkFieldData.h"
#include "vtkInformation.h"
#include "vtkInformationDataObjectKey.h"
#include "vtkInformationDoubleKey.h"
#include "vtkInformationDoubleVectorKey.h"
#include "vtkInformationInformationVectorKey.h"
#include "vtkInformationIntegerKey.h"
#include "vtkInformationIntegerPointerKey.h"
#include "vtkInformationStringKey.h"
#include "vtkObjectBase.h"
#include "vtkSource.h"

using namespace System;

namespace vtk {

System::String^ vtkDataObject::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkDataObject>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkDataObject::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkDataObject>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkDataObject^ vtkDataObject::NewInstance()
{
  ::vtkDataObject* retVal = static_cast<::vtkDataObject*>(vtk::ConvertManagedToNative<::vtkDataObject>(m_instance)->NewInstance());
  return gcnew vtkDataObject(IntPtr(retVal), false);
}



vtkDataObject^ vtkDataObject::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkDataObject* retVal = static_cast<::vtkDataObject*>(::vtkDataObject::SafeDownCast(oWrap));
  return gcnew vtkDataObject(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkDataObject::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkDataObject>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkDataObject::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkDataObject>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




vtkSource^ vtkDataObject::GetSource()
{
  ::vtkSource* retVal = static_cast<::vtkSource*>(vtk::ConvertManagedToNative<::vtkDataObject>(m_instance)->GetSource());
  return gcnew vtkSource(IntPtr(retVal), false);
}



void vtkDataObject::SetSource(vtkSource^ s)
{
  ::vtkSource* sWrap = vtk::ConvertManagedToNative<::vtkSource>(s->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkDataObject>(m_instance)->SetSource(sWrap);
}



vtkInformation^ vtkDataObject::GetInformation()
{
  ::vtkInformation* retVal = static_cast<::vtkInformation*>(vtk::ConvertManagedToNative<::vtkDataObject>(m_instance)->GetInformation());
  return gcnew vtkInformation(IntPtr(retVal), false);
}



void vtkDataObject::SetInformation(vtkInformation^ arg0)
{
  ::vtkInformation* arg0Wrap = vtk::ConvertManagedToNative<::vtkInformation>(arg0->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkDataObject>(m_instance)->SetInformation(arg0Wrap);
}



vtkInformation^ vtkDataObject::GetPipelineInformation()
{
  ::vtkInformation* retVal = static_cast<::vtkInformation*>(vtk::ConvertManagedToNative<::vtkDataObject>(m_instance)->GetPipelineInformation());
  return gcnew vtkInformation(IntPtr(retVal), false);
}



void vtkDataObject::SetPipelineInformation(vtkInformation^ arg0)
{
  ::vtkInformation* arg0Wrap = vtk::ConvertManagedToNative<::vtkInformation>(arg0->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkDataObject>(m_instance)->SetPipelineInformation(arg0Wrap);
}



vtkAlgorithmOutput^ vtkDataObject::GetProducerPort()
{
  ::vtkAlgorithmOutput* retVal = static_cast<::vtkAlgorithmOutput*>(vtk::ConvertManagedToNative<::vtkDataObject>(m_instance)->GetProducerPort());
  return gcnew vtkAlgorithmOutput(IntPtr(retVal), false);
}



unsigned long vtkDataObject::GetMTime()
{
  unsigned long retVal = vtk::ConvertManagedToNative<::vtkDataObject>(m_instance)->GetMTime();
  return retVal;
}



void vtkDataObject::Initialize()
{
  vtk::ConvertManagedToNative<::vtkDataObject>(m_instance)->Initialize();
}



void vtkDataObject::ReleaseData()
{
  vtk::ConvertManagedToNative<::vtkDataObject>(m_instance)->ReleaseData();
}



int vtkDataObject::ShouldIReleaseData()
{
  int retVal = vtk::ConvertManagedToNative<::vtkDataObject>(m_instance)->ShouldIReleaseData();
  return retVal;
}



int vtkDataObject::GetDataReleased()
{
  int retVal = vtk::ConvertManagedToNative<::vtkDataObject>(m_instance)->GetDataReleased();
  return retVal;
}



void vtkDataObject::SetReleaseDataFlag(int arg0)
{
  vtk::ConvertManagedToNative<::vtkDataObject>(m_instance)->SetReleaseDataFlag(arg0);
}



int vtkDataObject::GetReleaseDataFlag()
{
  int retVal = vtk::ConvertManagedToNative<::vtkDataObject>(m_instance)->GetReleaseDataFlag();
  return retVal;
}



void vtkDataObject::ReleaseDataFlagOn()
{
  vtk::ConvertManagedToNative<::vtkDataObject>(m_instance)->ReleaseDataFlagOn();
}



void vtkDataObject::ReleaseDataFlagOff()
{
  vtk::ConvertManagedToNative<::vtkDataObject>(m_instance)->ReleaseDataFlagOff();
}



void vtkDataObject::SetGlobalReleaseDataFlag(int val)
{
  ::vtkDataObject::SetGlobalReleaseDataFlag(val);
}



void vtkDataObject::GlobalReleaseDataFlagOn()
{
  vtk::ConvertManagedToNative<::vtkDataObject>(m_instance)->GlobalReleaseDataFlagOn();
}



void vtkDataObject::GlobalReleaseDataFlagOff()
{
  vtk::ConvertManagedToNative<::vtkDataObject>(m_instance)->GlobalReleaseDataFlagOff();
}



int vtkDataObject::GetGlobalReleaseDataFlag()
{
  int retVal = ::vtkDataObject::GetGlobalReleaseDataFlag();
  return retVal;
}



void vtkDataObject::SetFieldData(vtkFieldData^ arg0)
{
  ::vtkFieldData* arg0Wrap = vtk::ConvertManagedToNative<::vtkFieldData>(arg0->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkDataObject>(m_instance)->SetFieldData(arg0Wrap);
}



vtkFieldData^ vtkDataObject::GetFieldData()
{
  ::vtkFieldData* retVal = static_cast<::vtkFieldData*>(vtk::ConvertManagedToNative<::vtkDataObject>(m_instance)->GetFieldData());
  return gcnew vtkFieldData(IntPtr(retVal), false);
}



void vtkDataObject::Register(vtkObjectBase^ o)
{
  ::vtkObjectBase* oWrap = static_cast<::vtkObjectBase*>(o->GetNativePointer().ToPointer());
  vtk::ConvertManagedToNative<::vtkDataObject>(m_instance)->Register(oWrap);
}



void vtkDataObject::UnRegister(vtkObjectBase^ o)
{
  ::vtkObjectBase* oWrap = static_cast<::vtkObjectBase*>(o->GetNativePointer().ToPointer());
  vtk::ConvertManagedToNative<::vtkDataObject>(m_instance)->UnRegister(oWrap);
}



void vtkDataObject::Update()
{
  vtk::ConvertManagedToNative<::vtkDataObject>(m_instance)->Update();
}



void vtkDataObject::UpdateInformation()
{
  vtk::ConvertManagedToNative<::vtkDataObject>(m_instance)->UpdateInformation();
}



void vtkDataObject::PropagateUpdateExtent()
{
  vtk::ConvertManagedToNative<::vtkDataObject>(m_instance)->PropagateUpdateExtent();
}



void vtkDataObject::TriggerAsynchronousUpdate()
{
  vtk::ConvertManagedToNative<::vtkDataObject>(m_instance)->TriggerAsynchronousUpdate();
}



void vtkDataObject::UpdateData()
{
  vtk::ConvertManagedToNative<::vtkDataObject>(m_instance)->UpdateData();
}



unsigned long vtkDataObject::GetEstimatedMemorySize()
{
  unsigned long retVal = vtk::ConvertManagedToNative<::vtkDataObject>(m_instance)->GetEstimatedMemorySize();
  return retVal;
}



void vtkDataObject::SetUpdateExtent(int piece, int numPieces, int ghostLevel)
{
  vtk::ConvertManagedToNative<::vtkDataObject>(m_instance)->SetUpdateExtent(piece, numPieces, ghostLevel);
}



void vtkDataObject::SetUpdateExtent(int piece, int numPieces)
{
  vtk::ConvertManagedToNative<::vtkDataObject>(m_instance)->SetUpdateExtent(piece, numPieces);
}



void vtkDataObject::SetUpdateExtent(int x0, int x1, int y0, int y1, int z0, int z1)
{
  vtk::ConvertManagedToNative<::vtkDataObject>(m_instance)->SetUpdateExtent(x0, x1, y0, y1, z0, z1);
}



void vtkDataObject::SetUpdateExtent(array<int>^ extent)
{
  pin_ptr<int> extentPin = &extent[0];
  int* nativeextentPin = extentPin;
  vtk::ConvertManagedToNative<::vtkDataObject>(m_instance)->SetUpdateExtent(nativeextentPin);
}



array<int>^ vtkDataObject::GetUpdateExtent()
{
  const int* retVal = vtk::ConvertManagedToNative<::vtkDataObject>(m_instance)->GetUpdateExtent();
  array<int>^ mRetVal = gcnew array<int>(6);
  for (size_t cprIdx=0; cprIdx<6; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



void vtkDataObject::GetUpdateExtent(int% x0, int% x1, int% y0, int% y1, int% z0, int% z1)
{
  pin_ptr<int> x0Pin = &x0;
  pin_ptr<int> x1Pin = &x1;
  pin_ptr<int> y0Pin = &y0;
  pin_ptr<int> y1Pin = &y1;
  pin_ptr<int> z0Pin = &z0;
  pin_ptr<int> z1Pin = &z1;
  vtk::ConvertManagedToNative<::vtkDataObject>(m_instance)->GetUpdateExtent(*x0Pin, *x1Pin, *y0Pin, *y1Pin, *z0Pin, *z1Pin);
}



void vtkDataObject::GetUpdateExtent(array<int>^ extent)
{
  pin_ptr<int> extentPin = &extent[0];
  int* nativeextentPin = extentPin;
  vtk::ConvertManagedToNative<::vtkDataObject>(m_instance)->GetUpdateExtent(nativeextentPin);
}



int vtkDataObject::GetDataObjectType()
{
  int retVal = vtk::ConvertManagedToNative<::vtkDataObject>(m_instance)->GetDataObjectType();
  return retVal;
}



unsigned long vtkDataObject::GetUpdateTime()
{
  unsigned long retVal = vtk::ConvertManagedToNative<::vtkDataObject>(m_instance)->GetUpdateTime();
  return retVal;
}



void vtkDataObject::SetUpdateExtentToWholeExtent()
{
  vtk::ConvertManagedToNative<::vtkDataObject>(m_instance)->SetUpdateExtentToWholeExtent();
}



unsigned long vtkDataObject::GetPipelineMTime()
{
  unsigned long retVal = vtk::ConvertManagedToNative<::vtkDataObject>(m_instance)->GetPipelineMTime();
  return retVal;
}



unsigned long vtkDataObject::GetActualMemorySize()
{
  unsigned long retVal = vtk::ConvertManagedToNative<::vtkDataObject>(m_instance)->GetActualMemorySize();
  return retVal;
}



void vtkDataObject::CopyInformation(vtkDataObject^ data)
{
  ::vtkDataObject* dataWrap = vtk::ConvertManagedToNative<::vtkDataObject>(data->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkDataObject>(m_instance)->CopyInformation(dataWrap);
}



void vtkDataObject::CopyTypeSpecificInformation(vtkDataObject^ data)
{
  ::vtkDataObject* dataWrap = vtk::ConvertManagedToNative<::vtkDataObject>(data->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkDataObject>(m_instance)->CopyTypeSpecificInformation(dataWrap);
}



void vtkDataObject::SetUpdatePiece(int piece)
{
  vtk::ConvertManagedToNative<::vtkDataObject>(m_instance)->SetUpdatePiece(piece);
}



void vtkDataObject::SetUpdateNumberOfPieces(int num)
{
  vtk::ConvertManagedToNative<::vtkDataObject>(m_instance)->SetUpdateNumberOfPieces(num);
}



int vtkDataObject::GetUpdatePiece()
{
  int retVal = vtk::ConvertManagedToNative<::vtkDataObject>(m_instance)->GetUpdatePiece();
  return retVal;
}



int vtkDataObject::GetUpdateNumberOfPieces()
{
  int retVal = vtk::ConvertManagedToNative<::vtkDataObject>(m_instance)->GetUpdateNumberOfPieces();
  return retVal;
}



void vtkDataObject::SetUpdateGhostLevel(int level)
{
  vtk::ConvertManagedToNative<::vtkDataObject>(m_instance)->SetUpdateGhostLevel(level);
}



int vtkDataObject::GetUpdateGhostLevel()
{
  int retVal = vtk::ConvertManagedToNative<::vtkDataObject>(m_instance)->GetUpdateGhostLevel();
  return retVal;
}



void vtkDataObject::SetRequestExactExtent(int flag)
{
  vtk::ConvertManagedToNative<::vtkDataObject>(m_instance)->SetRequestExactExtent(flag);
}



int vtkDataObject::GetRequestExactExtent()
{
  int retVal = vtk::ConvertManagedToNative<::vtkDataObject>(m_instance)->GetRequestExactExtent();
  return retVal;
}



void vtkDataObject::RequestExactExtentOn()
{
  vtk::ConvertManagedToNative<::vtkDataObject>(m_instance)->RequestExactExtentOn();
}



void vtkDataObject::RequestExactExtentOff()
{
  vtk::ConvertManagedToNative<::vtkDataObject>(m_instance)->RequestExactExtentOff();
}



void vtkDataObject::SetWholeExtent(int x0, int x1, int y0, int y1, int z0, int z1)
{
  vtk::ConvertManagedToNative<::vtkDataObject>(m_instance)->SetWholeExtent(x0, x1, y0, y1, z0, z1);
}



void vtkDataObject::SetWholeExtent(array<int>^ extent)
{
  pin_ptr<int> extentPin = &extent[0];
  int* nativeextentPin = extentPin;
  vtk::ConvertManagedToNative<::vtkDataObject>(m_instance)->SetWholeExtent(nativeextentPin);
}



array<int>^ vtkDataObject::GetWholeExtent()
{
  const int* retVal = vtk::ConvertManagedToNative<::vtkDataObject>(m_instance)->GetWholeExtent();
  array<int>^ mRetVal = gcnew array<int>(6);
  for (size_t cprIdx=0; cprIdx<6; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



void vtkDataObject::GetWholeExtent(int% x0, int% x1, int% y0, int% y1, int% z0, int% z1)
{
  pin_ptr<int> x0Pin = &x0;
  pin_ptr<int> x1Pin = &x1;
  pin_ptr<int> y0Pin = &y0;
  pin_ptr<int> y1Pin = &y1;
  pin_ptr<int> z0Pin = &z0;
  pin_ptr<int> z1Pin = &z1;
  vtk::ConvertManagedToNative<::vtkDataObject>(m_instance)->GetWholeExtent(*x0Pin, *x1Pin, *y0Pin, *y1Pin, *z0Pin, *z1Pin);
}



void vtkDataObject::GetWholeExtent(array<int>^ extent)
{
  pin_ptr<int> extentPin = &extent[0];
  int* nativeextentPin = extentPin;
  vtk::ConvertManagedToNative<::vtkDataObject>(m_instance)->GetWholeExtent(nativeextentPin);
}



void vtkDataObject::SetWholeBoundingBox(double x0, double x1, double y0, double y1, double z0, double z1)
{
  vtk::ConvertManagedToNative<::vtkDataObject>(m_instance)->SetWholeBoundingBox(x0, x1, y0, y1, z0, z1);
}



void vtkDataObject::SetWholeBoundingBox(array<double>^ bb)
{
  pin_ptr<double> bbPin = &bb[0];
  double* nativebbPin = bbPin;
  vtk::ConvertManagedToNative<::vtkDataObject>(m_instance)->SetWholeBoundingBox(nativebbPin);
}



void vtkDataObject::GetWholeBoundingBox(double% x0, double% x1, double% y0, double% y1, double% z0, double% z1)
{
  pin_ptr<double> x0Pin = &x0;
  pin_ptr<double> x1Pin = &x1;
  pin_ptr<double> y0Pin = &y0;
  pin_ptr<double> y1Pin = &y1;
  pin_ptr<double> z0Pin = &z0;
  pin_ptr<double> z1Pin = &z1;
  vtk::ConvertManagedToNative<::vtkDataObject>(m_instance)->GetWholeBoundingBox(*x0Pin, *x1Pin, *y0Pin, *y1Pin, *z0Pin, *z1Pin);
}



void vtkDataObject::GetWholeBoundingBox(array<double>^ extent)
{
  pin_ptr<double> extentPin = &extent[0];
  double* nativeextentPin = extentPin;
  vtk::ConvertManagedToNative<::vtkDataObject>(m_instance)->GetWholeBoundingBox(nativeextentPin);
}



void vtkDataObject::SetMaximumNumberOfPieces(int arg0)
{
  vtk::ConvertManagedToNative<::vtkDataObject>(m_instance)->SetMaximumNumberOfPieces(arg0);
}



int vtkDataObject::GetMaximumNumberOfPieces()
{
  int retVal = vtk::ConvertManagedToNative<::vtkDataObject>(m_instance)->GetMaximumNumberOfPieces();
  return retVal;
}



void vtkDataObject::CopyInformationToPipeline(vtkInformation^ request, vtkInformation^ input)
{
  ::vtkInformation* requestWrap = vtk::ConvertManagedToNative<::vtkInformation>(request->GetNativePointer());
  ::vtkInformation* inputWrap = vtk::ConvertManagedToNative<::vtkInformation>(input->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkDataObject>(m_instance)->CopyInformationToPipeline(requestWrap, inputWrap);
}



void vtkDataObject::CopyInformationFromPipeline(vtkInformation^ request)
{
  ::vtkInformation* requestWrap = vtk::ConvertManagedToNative<::vtkInformation>(request->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkDataObject>(m_instance)->CopyInformationFromPipeline(requestWrap);
}



vtkInformation^ vtkDataObject::GetActiveFieldInformation(vtkInformation^ info, int fieldAssociation, int attributeType)
{
  ::vtkInformation* infoWrap = vtk::ConvertManagedToNative<::vtkInformation>(info->GetNativePointer());
  ::vtkInformation* retVal = static_cast<::vtkInformation*>(::vtkDataObject::GetActiveFieldInformation(infoWrap, fieldAssociation, attributeType));
  return gcnew vtkInformation(IntPtr(retVal), false);
}



vtkInformation^ vtkDataObject::GetNamedFieldInformation(vtkInformation^ info, int fieldAssociation, System::String^ name)
{
  ::vtkInformation* infoWrap = vtk::ConvertManagedToNative<::vtkInformation>(info->GetNativePointer());
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  ::vtkInformation* retVal = static_cast<::vtkInformation*>(::vtkDataObject::GetNamedFieldInformation(infoWrap, fieldAssociation, nameWrap));
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return gcnew vtkInformation(IntPtr(retVal), false);
}



void vtkDataObject::RemoveNamedFieldInformation(vtkInformation^ info, int fieldAssociation, System::String^ name)
{
  ::vtkInformation* infoWrap = vtk::ConvertManagedToNative<::vtkInformation>(info->GetNativePointer());
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  ::vtkDataObject::RemoveNamedFieldInformation(infoWrap, fieldAssociation, nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
}



vtkInformation^ vtkDataObject::SetActiveAttribute(vtkInformation^ info, int fieldAssociation, System::String^ attributeName, int attributeType)
{
  ::vtkInformation* infoWrap = vtk::ConvertManagedToNative<::vtkInformation>(info->GetNativePointer());
  char* attributeNameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(attributeName).ToPointer());
  ::vtkInformation* retVal = static_cast<::vtkInformation*>(::vtkDataObject::SetActiveAttribute(infoWrap, fieldAssociation, attributeNameWrap, attributeType));
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(attributeNameWrap));
  return gcnew vtkInformation(IntPtr(retVal), false);
}



void vtkDataObject::SetActiveAttributeInfo(vtkInformation^ info, int fieldAssociation, int attributeType, System::String^ name, int arrayType, int numComponents, int numTuples)
{
  ::vtkInformation* infoWrap = vtk::ConvertManagedToNative<::vtkInformation>(info->GetNativePointer());
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  ::vtkDataObject::SetActiveAttributeInfo(infoWrap, fieldAssociation, attributeType, nameWrap, arrayType, numComponents, numTuples);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
}



void vtkDataObject::SetPointDataActiveScalarInfo(vtkInformation^ info, int arrayType, int numComponents)
{
  ::vtkInformation* infoWrap = vtk::ConvertManagedToNative<::vtkInformation>(info->GetNativePointer());
  ::vtkDataObject::SetPointDataActiveScalarInfo(infoWrap, arrayType, numComponents);
}



void vtkDataObject::DataHasBeenGenerated()
{
  vtk::ConvertManagedToNative<::vtkDataObject>(m_instance)->DataHasBeenGenerated();
}



void vtkDataObject::PrepareForNewData()
{
  vtk::ConvertManagedToNative<::vtkDataObject>(m_instance)->PrepareForNewData();
}



void vtkDataObject::ShallowCopy(vtkDataObject^ src)
{
  ::vtkDataObject* srcWrap = vtk::ConvertManagedToNative<::vtkDataObject>(src->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkDataObject>(m_instance)->ShallowCopy(srcWrap);
}



void vtkDataObject::DeepCopy(vtkDataObject^ src)
{
  ::vtkDataObject* srcWrap = vtk::ConvertManagedToNative<::vtkDataObject>(src->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkDataObject>(m_instance)->DeepCopy(srcWrap);
}



void vtkDataObject::SetExtentTranslator(vtkExtentTranslator^ translator)
{
  ::vtkExtentTranslator* translatorWrap = vtk::ConvertManagedToNative<::vtkExtentTranslator>(translator->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkDataObject>(m_instance)->SetExtentTranslator(translatorWrap);
}



vtkExtentTranslator^ vtkDataObject::GetExtentTranslator()
{
  ::vtkExtentTranslator* retVal = static_cast<::vtkExtentTranslator*>(vtk::ConvertManagedToNative<::vtkDataObject>(m_instance)->GetExtentTranslator());
  return gcnew vtkExtentTranslator(IntPtr(retVal), false);
}



int vtkDataObject::GetExtentType()
{
  int retVal = vtk::ConvertManagedToNative<::vtkDataObject>(m_instance)->GetExtentType();
  return retVal;
}



void vtkDataObject::Crop()
{
  vtk::ConvertManagedToNative<::vtkDataObject>(m_instance)->Crop();
}



System::String^ vtkDataObject::GetAssociationTypeAsString(int associationType)
{
  const char* retVal = ::vtkDataObject::GetAssociationTypeAsString(associationType);
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



vtkInformationStringKey^ vtkDataObject::DATA_TYPE_NAME()
{
  ::vtkInformationStringKey* retVal = static_cast<::vtkInformationStringKey*>(::vtkDataObject::DATA_TYPE_NAME());
  return gcnew vtkInformationStringKey(IntPtr(retVal), false);
}



vtkInformationDataObjectKey^ vtkDataObject::DATA_OBJECT()
{
  ::vtkInformationDataObjectKey* retVal = static_cast<::vtkInformationDataObjectKey*>(::vtkDataObject::DATA_OBJECT());
  return gcnew vtkInformationDataObjectKey(IntPtr(retVal), false);
}



vtkInformationIntegerKey^ vtkDataObject::DATA_EXTENT_TYPE()
{
  ::vtkInformationIntegerKey* retVal = static_cast<::vtkInformationIntegerKey*>(::vtkDataObject::DATA_EXTENT_TYPE());
  return gcnew vtkInformationIntegerKey(IntPtr(retVal), false);
}



vtkInformationIntegerPointerKey^ vtkDataObject::DATA_EXTENT()
{
  ::vtkInformationIntegerPointerKey* retVal = static_cast<::vtkInformationIntegerPointerKey*>(::vtkDataObject::DATA_EXTENT());
  return gcnew vtkInformationIntegerPointerKey(IntPtr(retVal), false);
}



vtkInformationIntegerKey^ vtkDataObject::DATA_PIECE_NUMBER()
{
  ::vtkInformationIntegerKey* retVal = static_cast<::vtkInformationIntegerKey*>(::vtkDataObject::DATA_PIECE_NUMBER());
  return gcnew vtkInformationIntegerKey(IntPtr(retVal), false);
}



vtkInformationIntegerKey^ vtkDataObject::DATA_NUMBER_OF_PIECES()
{
  ::vtkInformationIntegerKey* retVal = static_cast<::vtkInformationIntegerKey*>(::vtkDataObject::DATA_NUMBER_OF_PIECES());
  return gcnew vtkInformationIntegerKey(IntPtr(retVal), false);
}



vtkInformationIntegerKey^ vtkDataObject::DATA_NUMBER_OF_GHOST_LEVELS()
{
  ::vtkInformationIntegerKey* retVal = static_cast<::vtkInformationIntegerKey*>(::vtkDataObject::DATA_NUMBER_OF_GHOST_LEVELS());
  return gcnew vtkInformationIntegerKey(IntPtr(retVal), false);
}



vtkInformationIntegerKey^ vtkDataObject::DATA_TIME_INDEX()
{
  ::vtkInformationIntegerKey* retVal = static_cast<::vtkInformationIntegerKey*>(::vtkDataObject::DATA_TIME_INDEX());
  return gcnew vtkInformationIntegerKey(IntPtr(retVal), false);
}



vtkInformationDoubleKey^ vtkDataObject::DATA_TIME()
{
  ::vtkInformationDoubleKey* retVal = static_cast<::vtkInformationDoubleKey*>(::vtkDataObject::DATA_TIME());
  return gcnew vtkInformationDoubleKey(IntPtr(retVal), false);
}



vtkInformationInformationVectorKey^ vtkDataObject::POINT_DATA_VECTOR()
{
  ::vtkInformationInformationVectorKey* retVal = static_cast<::vtkInformationInformationVectorKey*>(::vtkDataObject::POINT_DATA_VECTOR());
  return gcnew vtkInformationInformationVectorKey(IntPtr(retVal), false);
}



vtkInformationInformationVectorKey^ vtkDataObject::CELL_DATA_VECTOR()
{
  ::vtkInformationInformationVectorKey* retVal = static_cast<::vtkInformationInformationVectorKey*>(::vtkDataObject::CELL_DATA_VECTOR());
  return gcnew vtkInformationInformationVectorKey(IntPtr(retVal), false);
}



vtkInformationIntegerKey^ vtkDataObject::FIELD_ARRAY_TYPE()
{
  ::vtkInformationIntegerKey* retVal = static_cast<::vtkInformationIntegerKey*>(::vtkDataObject::FIELD_ARRAY_TYPE());
  return gcnew vtkInformationIntegerKey(IntPtr(retVal), false);
}



vtkInformationIntegerKey^ vtkDataObject::FIELD_ASSOCIATION()
{
  ::vtkInformationIntegerKey* retVal = static_cast<::vtkInformationIntegerKey*>(::vtkDataObject::FIELD_ASSOCIATION());
  return gcnew vtkInformationIntegerKey(IntPtr(retVal), false);
}



vtkInformationIntegerKey^ vtkDataObject::FIELD_ATTRIBUTE_TYPE()
{
  ::vtkInformationIntegerKey* retVal = static_cast<::vtkInformationIntegerKey*>(::vtkDataObject::FIELD_ATTRIBUTE_TYPE());
  return gcnew vtkInformationIntegerKey(IntPtr(retVal), false);
}



vtkInformationIntegerKey^ vtkDataObject::FIELD_ACTIVE_ATTRIBUTE()
{
  ::vtkInformationIntegerKey* retVal = static_cast<::vtkInformationIntegerKey*>(::vtkDataObject::FIELD_ACTIVE_ATTRIBUTE());
  return gcnew vtkInformationIntegerKey(IntPtr(retVal), false);
}



vtkInformationIntegerKey^ vtkDataObject::FIELD_NUMBER_OF_COMPONENTS()
{
  ::vtkInformationIntegerKey* retVal = static_cast<::vtkInformationIntegerKey*>(::vtkDataObject::FIELD_NUMBER_OF_COMPONENTS());
  return gcnew vtkInformationIntegerKey(IntPtr(retVal), false);
}



vtkInformationIntegerKey^ vtkDataObject::FIELD_NUMBER_OF_TUPLES()
{
  ::vtkInformationIntegerKey* retVal = static_cast<::vtkInformationIntegerKey*>(::vtkDataObject::FIELD_NUMBER_OF_TUPLES());
  return gcnew vtkInformationIntegerKey(IntPtr(retVal), false);
}



vtkInformationIntegerKey^ vtkDataObject::FIELD_OPERATION()
{
  ::vtkInformationIntegerKey* retVal = static_cast<::vtkInformationIntegerKey*>(::vtkDataObject::FIELD_OPERATION());
  return gcnew vtkInformationIntegerKey(IntPtr(retVal), false);
}



vtkInformationStringKey^ vtkDataObject::FIELD_NAME()
{
  ::vtkInformationStringKey* retVal = static_cast<::vtkInformationStringKey*>(::vtkDataObject::FIELD_NAME());
  return gcnew vtkInformationStringKey(IntPtr(retVal), false);
}



vtkInformationDoubleVectorKey^ vtkDataObject::ORIGIN()
{
  ::vtkInformationDoubleVectorKey* retVal = static_cast<::vtkInformationDoubleVectorKey*>(::vtkDataObject::ORIGIN());
  return gcnew vtkInformationDoubleVectorKey(IntPtr(retVal), false);
}



vtkInformationDoubleVectorKey^ vtkDataObject::SPACING()
{
  ::vtkInformationDoubleVectorKey* retVal = static_cast<::vtkInformationDoubleVectorKey*>(::vtkDataObject::SPACING());
  return gcnew vtkInformationDoubleVectorKey(IntPtr(retVal), false);
}



  vtkDataObject::vtkDataObject(System::IntPtr native, bool bConst) : vtkObject(native, bConst) {}



  vtkDataObject::vtkDataObject(bool donothing) : vtkObject(donothing) {}



  vtkDataObject::vtkDataObject() : vtkObject(false) {
  this->SetNativePointer(IntPtr(::vtkDataObject::New()));
}



  vtkDataObject::~vtkDataObject() { }





} // end namespace vtkFiltering
