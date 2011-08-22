

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkDataSetAttributesDotNet.h"

// native includes
#include "strstream"
#include "vtkDataSetAttributes.h"
#include "vtkDataArray.h"
#include "vtkIdList.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkDataSetAttributes::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkDataSetAttributes>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkDataSetAttributes::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkDataSetAttributes>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkDataSetAttributes^ vtkDataSetAttributes::NewInstance()
{
  ::vtkDataSetAttributes* retVal = static_cast<::vtkDataSetAttributes*>(vtk::ConvertManagedToNative<::vtkDataSetAttributes>(m_instance)->NewInstance());
  return gcnew vtkDataSetAttributes(IntPtr(retVal), false);
}



vtkDataSetAttributes^ vtkDataSetAttributes::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkDataSetAttributes* retVal = static_cast<::vtkDataSetAttributes*>(::vtkDataSetAttributes::SafeDownCast(oWrap));
  return gcnew vtkDataSetAttributes(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkDataSetAttributes::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkDataSetAttributes>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkDataSetAttributes::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkDataSetAttributes>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkDataSetAttributes::Initialize()
{
  vtk::ConvertManagedToNative<::vtkDataSetAttributes>(m_instance)->Initialize();
}



void vtkDataSetAttributes::Update()
{
  vtk::ConvertManagedToNative<::vtkDataSetAttributes>(m_instance)->Update();
}



void vtkDataSetAttributes::PassData(vtkFieldData^ fd)
{
  ::vtkFieldData* fdWrap = vtk::ConvertManagedToNative<::vtkFieldData>(fd->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkDataSetAttributes>(m_instance)->PassData(fdWrap);
}



void vtkDataSetAttributes::CopyAllocate(vtkDataSetAttributes^ pd, int sze, int ext)
{
  ::vtkDataSetAttributes* pdWrap = vtk::ConvertManagedToNative<::vtkDataSetAttributes>(pd->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkDataSetAttributes>(m_instance)->CopyAllocate(pdWrap, sze, ext);
}



void vtkDataSetAttributes::CopyData(vtkDataSetAttributes^ fromPd, int fromId, int toId)
{
  ::vtkDataSetAttributes* fromPdWrap = vtk::ConvertManagedToNative<::vtkDataSetAttributes>(fromPd->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkDataSetAttributes>(m_instance)->CopyData(fromPdWrap, fromId, toId);
}



void vtkDataSetAttributes::InterpolateAllocate(vtkDataSetAttributes^ pd, int sze, int ext)
{
  ::vtkDataSetAttributes* pdWrap = vtk::ConvertManagedToNative<::vtkDataSetAttributes>(pd->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkDataSetAttributes>(m_instance)->InterpolateAllocate(pdWrap, sze, ext);
}



void vtkDataSetAttributes::CopyStructuredData(vtkDataSetAttributes^ inDsa, array<int>^ arg1, array<int>^ arg2)
{
  ::vtkDataSetAttributes* inDsaWrap = vtk::ConvertManagedToNative<::vtkDataSetAttributes>(inDsa->GetNativePointer());
  pin_ptr<int> arg1Pin = &arg1[0];
  int* nativearg1Pin = arg1Pin;
  pin_ptr<int> arg2Pin = &arg2[0];
  int* nativearg2Pin = arg2Pin;
  vtk::ConvertManagedToNative<::vtkDataSetAttributes>(m_instance)->CopyStructuredData(inDsaWrap, nativearg1Pin, nativearg2Pin);
}



void vtkDataSetAttributes::InterpolatePoint(vtkDataSetAttributes^ fromPd, int toId, vtkIdList^ ids, array<double>^ weights)
{
  ::vtkDataSetAttributes* fromPdWrap = vtk::ConvertManagedToNative<::vtkDataSetAttributes>(fromPd->GetNativePointer());
  ::vtkIdList* idsWrap = vtk::ConvertManagedToNative<::vtkIdList>(ids->GetNativePointer());
  pin_ptr<double> weightsPin = &weights[0];
  double* nativeweightsPin = weightsPin;
  vtk::ConvertManagedToNative<::vtkDataSetAttributes>(m_instance)->InterpolatePoint(fromPdWrap, toId, idsWrap, nativeweightsPin);
}



void vtkDataSetAttributes::InterpolateEdge(vtkDataSetAttributes^ fromPd, int toId, int p1, int p2, double t)
{
  ::vtkDataSetAttributes* fromPdWrap = vtk::ConvertManagedToNative<::vtkDataSetAttributes>(fromPd->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkDataSetAttributes>(m_instance)->InterpolateEdge(fromPdWrap, toId, p1, p2, t);
}



void vtkDataSetAttributes::InterpolateTime(vtkDataSetAttributes^ from1, vtkDataSetAttributes^ from2, int id, double t)
{
  ::vtkDataSetAttributes* from1Wrap = vtk::ConvertManagedToNative<::vtkDataSetAttributes>(from1->GetNativePointer());
  ::vtkDataSetAttributes* from2Wrap = vtk::ConvertManagedToNative<::vtkDataSetAttributes>(from2->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkDataSetAttributes>(m_instance)->InterpolateTime(from1Wrap, from2Wrap, id, t);
}



void vtkDataSetAttributes::DeepCopy(vtkFieldData^ pd)
{
  ::vtkFieldData* pdWrap = vtk::ConvertManagedToNative<::vtkFieldData>(pd->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkDataSetAttributes>(m_instance)->DeepCopy(pdWrap);
}



void vtkDataSetAttributes::ShallowCopy(vtkFieldData^ pd)
{
  ::vtkFieldData* pdWrap = vtk::ConvertManagedToNative<::vtkFieldData>(pd->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkDataSetAttributes>(m_instance)->ShallowCopy(pdWrap);
}



int vtkDataSetAttributes::SetScalars(vtkDataArray^ da)
{
  ::vtkDataArray* daWrap = vtk::ConvertManagedToNative<::vtkDataArray>(da->GetNativePointer());
  int retVal = vtk::ConvertManagedToNative<::vtkDataSetAttributes>(m_instance)->SetScalars(daWrap);
  return retVal;
}



int vtkDataSetAttributes::SetActiveScalars(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkDataSetAttributes>(m_instance)->SetActiveScalars(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkDataArray^ vtkDataSetAttributes::GetScalars()
{
  ::vtkDataArray* retVal = static_cast<::vtkDataArray*>(vtk::ConvertManagedToNative<::vtkDataSetAttributes>(m_instance)->GetScalars());
  return gcnew vtkDataArray(IntPtr(retVal), false);
}



int vtkDataSetAttributes::SetVectors(vtkDataArray^ da)
{
  ::vtkDataArray* daWrap = vtk::ConvertManagedToNative<::vtkDataArray>(da->GetNativePointer());
  int retVal = vtk::ConvertManagedToNative<::vtkDataSetAttributes>(m_instance)->SetVectors(daWrap);
  return retVal;
}



int vtkDataSetAttributes::SetActiveVectors(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkDataSetAttributes>(m_instance)->SetActiveVectors(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkDataArray^ vtkDataSetAttributes::GetVectors()
{
  ::vtkDataArray* retVal = static_cast<::vtkDataArray*>(vtk::ConvertManagedToNative<::vtkDataSetAttributes>(m_instance)->GetVectors());
  return gcnew vtkDataArray(IntPtr(retVal), false);
}



int vtkDataSetAttributes::SetNormals(vtkDataArray^ da)
{
  ::vtkDataArray* daWrap = vtk::ConvertManagedToNative<::vtkDataArray>(da->GetNativePointer());
  int retVal = vtk::ConvertManagedToNative<::vtkDataSetAttributes>(m_instance)->SetNormals(daWrap);
  return retVal;
}



int vtkDataSetAttributes::SetActiveNormals(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkDataSetAttributes>(m_instance)->SetActiveNormals(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkDataArray^ vtkDataSetAttributes::GetNormals()
{
  ::vtkDataArray* retVal = static_cast<::vtkDataArray*>(vtk::ConvertManagedToNative<::vtkDataSetAttributes>(m_instance)->GetNormals());
  return gcnew vtkDataArray(IntPtr(retVal), false);
}



int vtkDataSetAttributes::SetTCoords(vtkDataArray^ da)
{
  ::vtkDataArray* daWrap = vtk::ConvertManagedToNative<::vtkDataArray>(da->GetNativePointer());
  int retVal = vtk::ConvertManagedToNative<::vtkDataSetAttributes>(m_instance)->SetTCoords(daWrap);
  return retVal;
}



int vtkDataSetAttributes::SetActiveTCoords(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkDataSetAttributes>(m_instance)->SetActiveTCoords(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkDataArray^ vtkDataSetAttributes::GetTCoords()
{
  ::vtkDataArray* retVal = static_cast<::vtkDataArray*>(vtk::ConvertManagedToNative<::vtkDataSetAttributes>(m_instance)->GetTCoords());
  return gcnew vtkDataArray(IntPtr(retVal), false);
}



int vtkDataSetAttributes::SetTensors(vtkDataArray^ da)
{
  ::vtkDataArray* daWrap = vtk::ConvertManagedToNative<::vtkDataArray>(da->GetNativePointer());
  int retVal = vtk::ConvertManagedToNative<::vtkDataSetAttributes>(m_instance)->SetTensors(daWrap);
  return retVal;
}



int vtkDataSetAttributes::SetActiveTensors(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkDataSetAttributes>(m_instance)->SetActiveTensors(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkDataArray^ vtkDataSetAttributes::GetTensors()
{
  ::vtkDataArray* retVal = static_cast<::vtkDataArray*>(vtk::ConvertManagedToNative<::vtkDataSetAttributes>(m_instance)->GetTensors());
  return gcnew vtkDataArray(IntPtr(retVal), false);
}



vtkDataArray^ vtkDataSetAttributes::GetScalars(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  ::vtkDataArray* retVal = static_cast<::vtkDataArray*>(vtk::ConvertManagedToNative<::vtkDataSetAttributes>(m_instance)->GetScalars(nameWrap));
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return gcnew vtkDataArray(IntPtr(retVal), false);
}



vtkDataArray^ vtkDataSetAttributes::GetVectors(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  ::vtkDataArray* retVal = static_cast<::vtkDataArray*>(vtk::ConvertManagedToNative<::vtkDataSetAttributes>(m_instance)->GetVectors(nameWrap));
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return gcnew vtkDataArray(IntPtr(retVal), false);
}



vtkDataArray^ vtkDataSetAttributes::GetNormals(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  ::vtkDataArray* retVal = static_cast<::vtkDataArray*>(vtk::ConvertManagedToNative<::vtkDataSetAttributes>(m_instance)->GetNormals(nameWrap));
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return gcnew vtkDataArray(IntPtr(retVal), false);
}



vtkDataArray^ vtkDataSetAttributes::GetTCoords(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  ::vtkDataArray* retVal = static_cast<::vtkDataArray*>(vtk::ConvertManagedToNative<::vtkDataSetAttributes>(m_instance)->GetTCoords(nameWrap));
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return gcnew vtkDataArray(IntPtr(retVal), false);
}



vtkDataArray^ vtkDataSetAttributes::GetTensors(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  ::vtkDataArray* retVal = static_cast<::vtkDataArray*>(vtk::ConvertManagedToNative<::vtkDataSetAttributes>(m_instance)->GetTensors(nameWrap));
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return gcnew vtkDataArray(IntPtr(retVal), false);
}



int vtkDataSetAttributes::SetActiveAttribute(System::String^ name, int attributeType)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkDataSetAttributes>(m_instance)->SetActiveAttribute(nameWrap, attributeType);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



int vtkDataSetAttributes::SetActiveAttribute(int index, int attributeType)
{
  int retVal = vtk::ConvertManagedToNative<::vtkDataSetAttributes>(m_instance)->SetActiveAttribute(index, attributeType);
  return retVal;
}



void vtkDataSetAttributes::SetCopyAttribute(int index, int value)
{
  vtk::ConvertManagedToNative<::vtkDataSetAttributes>(m_instance)->SetCopyAttribute(index, value);
}



void vtkDataSetAttributes::SetCopyScalars(int i)
{
  vtk::ConvertManagedToNative<::vtkDataSetAttributes>(m_instance)->SetCopyScalars(i);
}



int vtkDataSetAttributes::GetCopyScalars()
{
  int retVal = vtk::ConvertManagedToNative<::vtkDataSetAttributes>(m_instance)->GetCopyScalars();
  return retVal;
}



void vtkDataSetAttributes::CopyScalarsOn()
{
  vtk::ConvertManagedToNative<::vtkDataSetAttributes>(m_instance)->CopyScalarsOn();
}



void vtkDataSetAttributes::CopyScalarsOff()
{
  vtk::ConvertManagedToNative<::vtkDataSetAttributes>(m_instance)->CopyScalarsOff();
}



void vtkDataSetAttributes::SetCopyVectors(int i)
{
  vtk::ConvertManagedToNative<::vtkDataSetAttributes>(m_instance)->SetCopyVectors(i);
}



int vtkDataSetAttributes::GetCopyVectors()
{
  int retVal = vtk::ConvertManagedToNative<::vtkDataSetAttributes>(m_instance)->GetCopyVectors();
  return retVal;
}



void vtkDataSetAttributes::CopyVectorsOn()
{
  vtk::ConvertManagedToNative<::vtkDataSetAttributes>(m_instance)->CopyVectorsOn();
}



void vtkDataSetAttributes::CopyVectorsOff()
{
  vtk::ConvertManagedToNative<::vtkDataSetAttributes>(m_instance)->CopyVectorsOff();
}



void vtkDataSetAttributes::SetCopyNormals(int i)
{
  vtk::ConvertManagedToNative<::vtkDataSetAttributes>(m_instance)->SetCopyNormals(i);
}



int vtkDataSetAttributes::GetCopyNormals()
{
  int retVal = vtk::ConvertManagedToNative<::vtkDataSetAttributes>(m_instance)->GetCopyNormals();
  return retVal;
}



void vtkDataSetAttributes::CopyNormalsOn()
{
  vtk::ConvertManagedToNative<::vtkDataSetAttributes>(m_instance)->CopyNormalsOn();
}



void vtkDataSetAttributes::CopyNormalsOff()
{
  vtk::ConvertManagedToNative<::vtkDataSetAttributes>(m_instance)->CopyNormalsOff();
}



void vtkDataSetAttributes::SetCopyTCoords(int i)
{
  vtk::ConvertManagedToNative<::vtkDataSetAttributes>(m_instance)->SetCopyTCoords(i);
}



int vtkDataSetAttributes::GetCopyTCoords()
{
  int retVal = vtk::ConvertManagedToNative<::vtkDataSetAttributes>(m_instance)->GetCopyTCoords();
  return retVal;
}



void vtkDataSetAttributes::CopyTCoordsOn()
{
  vtk::ConvertManagedToNative<::vtkDataSetAttributes>(m_instance)->CopyTCoordsOn();
}



void vtkDataSetAttributes::CopyTCoordsOff()
{
  vtk::ConvertManagedToNative<::vtkDataSetAttributes>(m_instance)->CopyTCoordsOff();
}



void vtkDataSetAttributes::SetCopyTensors(int i)
{
  vtk::ConvertManagedToNative<::vtkDataSetAttributes>(m_instance)->SetCopyTensors(i);
}



int vtkDataSetAttributes::GetCopyTensors()
{
  int retVal = vtk::ConvertManagedToNative<::vtkDataSetAttributes>(m_instance)->GetCopyTensors();
  return retVal;
}



void vtkDataSetAttributes::CopyTensorsOn()
{
  vtk::ConvertManagedToNative<::vtkDataSetAttributes>(m_instance)->CopyTensorsOn();
}



void vtkDataSetAttributes::CopyTensorsOff()
{
  vtk::ConvertManagedToNative<::vtkDataSetAttributes>(m_instance)->CopyTensorsOff();
}



void vtkDataSetAttributes::CopyAllOn()
{
  vtk::ConvertManagedToNative<::vtkDataSetAttributes>(m_instance)->CopyAllOn();
}



void vtkDataSetAttributes::CopyAllOff()
{
  vtk::ConvertManagedToNative<::vtkDataSetAttributes>(m_instance)->CopyAllOff();
}



void vtkDataSetAttributes::CopyTuple(vtkDataArray^ fromData, vtkDataArray^ toData, int fromId, int toId)
{
  ::vtkDataArray* fromDataWrap = vtk::ConvertManagedToNative<::vtkDataArray>(fromData->GetNativePointer());
  ::vtkDataArray* toDataWrap = vtk::ConvertManagedToNative<::vtkDataArray>(toData->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkDataSetAttributes>(m_instance)->CopyTuple(fromDataWrap, toDataWrap, fromId, toId);
}



void vtkDataSetAttributes::GetAttributeIndices(array<int>^ indexArray)
{
  pin_ptr<int> indexArrayPin = &indexArray[0];
  int* nativeindexArrayPin = indexArrayPin;
  vtk::ConvertManagedToNative<::vtkDataSetAttributes>(m_instance)->GetAttributeIndices(nativeindexArrayPin);
}



int vtkDataSetAttributes::IsArrayAnAttribute(int idx)
{
  int retVal = vtk::ConvertManagedToNative<::vtkDataSetAttributes>(m_instance)->IsArrayAnAttribute(idx);
  return retVal;
}



vtkDataArray^ vtkDataSetAttributes::GetAttribute(int attributeType)
{
  ::vtkDataArray* retVal = static_cast<::vtkDataArray*>(vtk::ConvertManagedToNative<::vtkDataSetAttributes>(m_instance)->GetAttribute(attributeType));
  return gcnew vtkDataArray(IntPtr(retVal), false);
}



void vtkDataSetAttributes::RemoveArray(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  vtk::ConvertManagedToNative<::vtkDataSetAttributes>(m_instance)->RemoveArray(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
}



System::String^ vtkDataSetAttributes::GetAttributeTypeAsString(int attributeType)
{
  const char* retVal = ::vtkDataSetAttributes::GetAttributeTypeAsString(attributeType);
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



System::String^ vtkDataSetAttributes::GetLongAttributeTypeAsString(int attributeType)
{
  const char* retVal = ::vtkDataSetAttributes::GetLongAttributeTypeAsString(attributeType);
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



  vtkDataSetAttributes::vtkDataSetAttributes(System::IntPtr native, bool bConst) : vtkFieldData(native, bConst) {}



  vtkDataSetAttributes::vtkDataSetAttributes(bool donothing) : vtkFieldData(donothing) {}



  vtkDataSetAttributes::vtkDataSetAttributes() : vtkFieldData(false) {
  this->SetNativePointer(IntPtr(::vtkDataSetAttributes::New()));
}



  vtkDataSetAttributes::~vtkDataSetAttributes() { }





} // end namespace vtkFiltering
