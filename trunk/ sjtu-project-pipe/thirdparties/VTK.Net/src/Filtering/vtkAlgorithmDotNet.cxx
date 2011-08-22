

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkAlgorithmDotNet.h"
#include "vtkAlgorithmOutputDotNet.h"
#include "vtkDataObjectDotNet.h"
#include "vtkExecutiveDotNet.h"
#include "vtkInformationDotNet.h"
#include "vtkInformationInformationVectorKeyDotNet.h"
#include "vtkInformationIntegerKeyDotNet.h"
#include "vtkInformationStringKeyDotNet.h"

// native includes
#include "strstream"
#include "vtkAlgorithm.h"
#include "vtkAlgorithmOutput.h"
#include "vtkDataObject.h"
#include "vtkExecutive.h"
#include "vtkInformation.h"
#include "vtkInformationInformationVectorKey.h"
#include "vtkInformationIntegerKey.h"
#include "vtkInformationStringKey.h"
#include "vtkObjectBase.h"

using namespace System;

namespace vtk {

System::String^ vtkAlgorithm::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkAlgorithm>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkAlgorithm::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkAlgorithm>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkAlgorithm^ vtkAlgorithm::NewInstance()
{
  ::vtkAlgorithm* retVal = static_cast<::vtkAlgorithm*>(vtk::ConvertManagedToNative<::vtkAlgorithm>(m_instance)->NewInstance());
  return gcnew vtkAlgorithm(IntPtr(retVal), false);
}



vtkAlgorithm^ vtkAlgorithm::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkAlgorithm* retVal = static_cast<::vtkAlgorithm*>(::vtkAlgorithm::SafeDownCast(oWrap));
  return gcnew vtkAlgorithm(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkAlgorithm::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkAlgorithm>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkAlgorithm::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkAlgorithm>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




int vtkAlgorithm::HasExecutive()
{
  int retVal = vtk::ConvertManagedToNative<::vtkAlgorithm>(m_instance)->HasExecutive();
  return retVal;
}



vtkExecutive^ vtkAlgorithm::GetExecutive()
{
  ::vtkExecutive* retVal = static_cast<::vtkExecutive*>(vtk::ConvertManagedToNative<::vtkAlgorithm>(m_instance)->GetExecutive());
  return gcnew vtkExecutive(IntPtr(retVal), false);
}



void vtkAlgorithm::SetExecutive(vtkExecutive^ executive)
{
  ::vtkExecutive* executiveWrap = vtk::ConvertManagedToNative<::vtkExecutive>(executive->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkAlgorithm>(m_instance)->SetExecutive(executiveWrap);
}



int vtkAlgorithm::ModifyRequest(vtkInformation^ request, int when)
{
  ::vtkInformation* requestWrap = vtk::ConvertManagedToNative<::vtkInformation>(request->GetNativePointer());
  int retVal = vtk::ConvertManagedToNative<::vtkAlgorithm>(m_instance)->ModifyRequest(requestWrap, when);
  return retVal;
}



vtkInformation^ vtkAlgorithm::GetInputPortInformation(int port)
{
  ::vtkInformation* retVal = static_cast<::vtkInformation*>(vtk::ConvertManagedToNative<::vtkAlgorithm>(m_instance)->GetInputPortInformation(port));
  return gcnew vtkInformation(IntPtr(retVal), false);
}



vtkInformation^ vtkAlgorithm::GetOutputPortInformation(int port)
{
  ::vtkInformation* retVal = static_cast<::vtkInformation*>(vtk::ConvertManagedToNative<::vtkAlgorithm>(m_instance)->GetOutputPortInformation(port));
  return gcnew vtkInformation(IntPtr(retVal), false);
}



vtkInformation^ vtkAlgorithm::GetInformation()
{
  ::vtkInformation* retVal = static_cast<::vtkInformation*>(vtk::ConvertManagedToNative<::vtkAlgorithm>(m_instance)->GetInformation());
  return gcnew vtkInformation(IntPtr(retVal), false);
}



void vtkAlgorithm::SetInformation(vtkInformation^ arg0)
{
  ::vtkInformation* arg0Wrap = vtk::ConvertManagedToNative<::vtkInformation>(arg0->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkAlgorithm>(m_instance)->SetInformation(arg0Wrap);
}



int vtkAlgorithm::GetNumberOfInputPorts()
{
  int retVal = vtk::ConvertManagedToNative<::vtkAlgorithm>(m_instance)->GetNumberOfInputPorts();
  return retVal;
}



int vtkAlgorithm::GetNumberOfOutputPorts()
{
  int retVal = vtk::ConvertManagedToNative<::vtkAlgorithm>(m_instance)->GetNumberOfOutputPorts();
  return retVal;
}



void vtkAlgorithm::Register(vtkObjectBase^ o)
{
  ::vtkObjectBase* oWrap = static_cast<::vtkObjectBase*>(o->GetNativePointer().ToPointer());
  vtk::ConvertManagedToNative<::vtkAlgorithm>(m_instance)->Register(oWrap);
}



void vtkAlgorithm::UnRegister(vtkObjectBase^ o)
{
  ::vtkObjectBase* oWrap = static_cast<::vtkObjectBase*>(o->GetNativePointer().ToPointer());
  vtk::ConvertManagedToNative<::vtkAlgorithm>(m_instance)->UnRegister(oWrap);
}



void vtkAlgorithm::SetAbortExecute(int arg0)
{
  vtk::ConvertManagedToNative<::vtkAlgorithm>(m_instance)->SetAbortExecute(arg0);
}



int vtkAlgorithm::GetAbortExecute()
{
  int retVal = vtk::ConvertManagedToNative<::vtkAlgorithm>(m_instance)->GetAbortExecute();
  return retVal;
}



void vtkAlgorithm::AbortExecuteOn()
{
  vtk::ConvertManagedToNative<::vtkAlgorithm>(m_instance)->AbortExecuteOn();
}



void vtkAlgorithm::AbortExecuteOff()
{
  vtk::ConvertManagedToNative<::vtkAlgorithm>(m_instance)->AbortExecuteOff();
}



void vtkAlgorithm::SetProgress(double arg0)
{
  vtk::ConvertManagedToNative<::vtkAlgorithm>(m_instance)->SetProgress(arg0);
}



double vtkAlgorithm::GetProgressMinValue()
{
  double retVal = vtk::ConvertManagedToNative<::vtkAlgorithm>(m_instance)->GetProgressMinValue();
  return retVal;
}



double vtkAlgorithm::GetProgressMaxValue()
{
  double retVal = vtk::ConvertManagedToNative<::vtkAlgorithm>(m_instance)->GetProgressMaxValue();
  return retVal;
}



double vtkAlgorithm::GetProgress()
{
  double retVal = vtk::ConvertManagedToNative<::vtkAlgorithm>(m_instance)->GetProgress();
  return retVal;
}



void vtkAlgorithm::UpdateProgress(double amount)
{
  vtk::ConvertManagedToNative<::vtkAlgorithm>(m_instance)->UpdateProgress(amount);
}



void vtkAlgorithm::SetProgressText(System::String^ arg0)
{
  char* arg0Wrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(arg0).ToPointer());
  vtk::ConvertManagedToNative<::vtkAlgorithm>(m_instance)->SetProgressText(arg0Wrap);
  arg0->Remove(0,arg0->Length);
  arg0->Insert(0,System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(arg0Wrap)));
System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(arg0Wrap));
}



System::String^ vtkAlgorithm::GetProgressText()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkAlgorithm>(m_instance)->GetProgressText();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



unsigned long vtkAlgorithm::GetErrorCode()
{
  unsigned long retVal = vtk::ConvertManagedToNative<::vtkAlgorithm>(m_instance)->GetErrorCode();
  return retVal;
}



vtkInformationIntegerKey^ vtkAlgorithm::INPUT_IS_OPTIONAL()
{
  ::vtkInformationIntegerKey* retVal = static_cast<::vtkInformationIntegerKey*>(::vtkAlgorithm::INPUT_IS_OPTIONAL());
  return gcnew vtkInformationIntegerKey(IntPtr(retVal), false);
}



vtkInformationIntegerKey^ vtkAlgorithm::INPUT_IS_REPEATABLE()
{
  ::vtkInformationIntegerKey* retVal = static_cast<::vtkInformationIntegerKey*>(::vtkAlgorithm::INPUT_IS_REPEATABLE());
  return gcnew vtkInformationIntegerKey(IntPtr(retVal), false);
}



vtkInformationInformationVectorKey^ vtkAlgorithm::INPUT_REQUIRED_FIELDS()
{
  ::vtkInformationInformationVectorKey* retVal = static_cast<::vtkInformationInformationVectorKey*>(::vtkAlgorithm::INPUT_REQUIRED_FIELDS());
  return gcnew vtkInformationInformationVectorKey(IntPtr(retVal), false);
}



vtkInformationStringKey^ vtkAlgorithm::INPUT_REQUIRED_DATA_TYPE()
{
  ::vtkInformationStringKey* retVal = static_cast<::vtkInformationStringKey*>(::vtkAlgorithm::INPUT_REQUIRED_DATA_TYPE());
  return gcnew vtkInformationStringKey(IntPtr(retVal), false);
}



vtkInformationInformationVectorKey^ vtkAlgorithm::INPUT_ARRAYS_TO_PROCESS()
{
  ::vtkInformationInformationVectorKey* retVal = static_cast<::vtkInformationInformationVectorKey*>(::vtkAlgorithm::INPUT_ARRAYS_TO_PROCESS());
  return gcnew vtkInformationInformationVectorKey(IntPtr(retVal), false);
}



vtkInformationIntegerKey^ vtkAlgorithm::INPUT_PORT()
{
  ::vtkInformationIntegerKey* retVal = static_cast<::vtkInformationIntegerKey*>(::vtkAlgorithm::INPUT_PORT());
  return gcnew vtkInformationIntegerKey(IntPtr(retVal), false);
}



vtkInformationIntegerKey^ vtkAlgorithm::INPUT_CONNECTION()
{
  ::vtkInformationIntegerKey* retVal = static_cast<::vtkInformationIntegerKey*>(::vtkAlgorithm::INPUT_CONNECTION());
  return gcnew vtkInformationIntegerKey(IntPtr(retVal), false);
}



void vtkAlgorithm::SetInputArrayToProcess(int idx, int port, int connection, int fieldAssociation, System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  vtk::ConvertManagedToNative<::vtkAlgorithm>(m_instance)->SetInputArrayToProcess(idx, port, connection, fieldAssociation, nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
}



void vtkAlgorithm::SetInputArrayToProcess(int idx, int port, int connection, int fieldAssociation, int fieldAttributeType)
{
  vtk::ConvertManagedToNative<::vtkAlgorithm>(m_instance)->SetInputArrayToProcess(idx, port, connection, fieldAssociation, fieldAttributeType);
}



void vtkAlgorithm::SetInputArrayToProcess(int idx, vtkInformation^ info)
{
  ::vtkInformation* infoWrap = vtk::ConvertManagedToNative<::vtkInformation>(info->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkAlgorithm>(m_instance)->SetInputArrayToProcess(idx, infoWrap);
}



void vtkAlgorithm::SetInputArrayToProcess(int idx, int port, int connection, System::String^ fieldAssociation, System::String^ attributeTypeorName)
{
  char* fieldAssociationWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(fieldAssociation).ToPointer());
  char* attributeTypeorNameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(attributeTypeorName).ToPointer());
  vtk::ConvertManagedToNative<::vtkAlgorithm>(m_instance)->SetInputArrayToProcess(idx, port, connection, fieldAssociationWrap, attributeTypeorNameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(fieldAssociationWrap));
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(attributeTypeorNameWrap));
}



vtkInformation^ vtkAlgorithm::GetInputArrayInformation(int idx)
{
  ::vtkInformation* retVal = static_cast<::vtkInformation*>(vtk::ConvertManagedToNative<::vtkAlgorithm>(m_instance)->GetInputArrayInformation(idx));
  return gcnew vtkInformation(IntPtr(retVal), false);
}



void vtkAlgorithm::RemoveAllInputs()
{
  vtk::ConvertManagedToNative<::vtkAlgorithm>(m_instance)->RemoveAllInputs();
}



vtkDataObject^ vtkAlgorithm::GetOutputDataObject(int port)
{
  ::vtkDataObject* retVal = static_cast<::vtkDataObject*>(vtk::ConvertManagedToNative<::vtkAlgorithm>(m_instance)->GetOutputDataObject(port));
  return gcnew vtkDataObject(IntPtr(retVal), false);
}



void vtkAlgorithm::SetInputConnection(int port, vtkAlgorithmOutput^ input)
{
  ::vtkAlgorithmOutput* inputWrap = vtk::ConvertManagedToNative<::vtkAlgorithmOutput>(input->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkAlgorithm>(m_instance)->SetInputConnection(port, inputWrap);
}



void vtkAlgorithm::SetInputConnection(vtkAlgorithmOutput^ input)
{
  ::vtkAlgorithmOutput* inputWrap = vtk::ConvertManagedToNative<::vtkAlgorithmOutput>(input->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkAlgorithm>(m_instance)->SetInputConnection(inputWrap);
}



void vtkAlgorithm::AddInputConnection(int port, vtkAlgorithmOutput^ input)
{
  ::vtkAlgorithmOutput* inputWrap = vtk::ConvertManagedToNative<::vtkAlgorithmOutput>(input->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkAlgorithm>(m_instance)->AddInputConnection(port, inputWrap);
}



void vtkAlgorithm::AddInputConnection(vtkAlgorithmOutput^ input)
{
  ::vtkAlgorithmOutput* inputWrap = vtk::ConvertManagedToNative<::vtkAlgorithmOutput>(input->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkAlgorithm>(m_instance)->AddInputConnection(inputWrap);
}



void vtkAlgorithm::RemoveInputConnection(int port, vtkAlgorithmOutput^ input)
{
  ::vtkAlgorithmOutput* inputWrap = vtk::ConvertManagedToNative<::vtkAlgorithmOutput>(input->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkAlgorithm>(m_instance)->RemoveInputConnection(port, inputWrap);
}



vtkAlgorithmOutput^ vtkAlgorithm::GetOutputPort(int index)
{
  ::vtkAlgorithmOutput* retVal = static_cast<::vtkAlgorithmOutput*>(vtk::ConvertManagedToNative<::vtkAlgorithm>(m_instance)->GetOutputPort(index));
  return gcnew vtkAlgorithmOutput(IntPtr(retVal), false);
}



vtkAlgorithmOutput^ vtkAlgorithm::GetOutputPort()
{
  ::vtkAlgorithmOutput* retVal = static_cast<::vtkAlgorithmOutput*>(vtk::ConvertManagedToNative<::vtkAlgorithm>(m_instance)->GetOutputPort());
  return gcnew vtkAlgorithmOutput(IntPtr(retVal), false);
}



int vtkAlgorithm::GetNumberOfInputConnections(int port)
{
  int retVal = vtk::ConvertManagedToNative<::vtkAlgorithm>(m_instance)->GetNumberOfInputConnections(port);
  return retVal;
}



int vtkAlgorithm::GetTotalNumberOfInputConnections()
{
  int retVal = vtk::ConvertManagedToNative<::vtkAlgorithm>(m_instance)->GetTotalNumberOfInputConnections();
  return retVal;
}



vtkAlgorithmOutput^ vtkAlgorithm::GetInputConnection(int port, int index)
{
  ::vtkAlgorithmOutput* retVal = static_cast<::vtkAlgorithmOutput*>(vtk::ConvertManagedToNative<::vtkAlgorithm>(m_instance)->GetInputConnection(port, index));
  return gcnew vtkAlgorithmOutput(IntPtr(retVal), false);
}



void vtkAlgorithm::Update()
{
  vtk::ConvertManagedToNative<::vtkAlgorithm>(m_instance)->Update();
}



void vtkAlgorithm::UpdateInformation()
{
  vtk::ConvertManagedToNative<::vtkAlgorithm>(m_instance)->UpdateInformation();
}



void vtkAlgorithm::UpdateWholeExtent()
{
  vtk::ConvertManagedToNative<::vtkAlgorithm>(m_instance)->UpdateWholeExtent();
}



void vtkAlgorithm::ConvertTotalInputToPortConnection(int ind, int% port, int% conn)
{
  pin_ptr<int> portPin = &port;
  pin_ptr<int> connPin = &conn;
  vtk::ConvertManagedToNative<::vtkAlgorithm>(m_instance)->ConvertTotalInputToPortConnection(ind, *portPin, *connPin);
}



void vtkAlgorithm::SetReleaseDataFlag(int arg0)
{
  vtk::ConvertManagedToNative<::vtkAlgorithm>(m_instance)->SetReleaseDataFlag(arg0);
}



int vtkAlgorithm::GetReleaseDataFlag()
{
  int retVal = vtk::ConvertManagedToNative<::vtkAlgorithm>(m_instance)->GetReleaseDataFlag();
  return retVal;
}



void vtkAlgorithm::ReleaseDataFlagOn()
{
  vtk::ConvertManagedToNative<::vtkAlgorithm>(m_instance)->ReleaseDataFlagOn();
}



void vtkAlgorithm::ReleaseDataFlagOff()
{
  vtk::ConvertManagedToNative<::vtkAlgorithm>(m_instance)->ReleaseDataFlagOff();
}



int vtkAlgorithm::UpdateExtentIsEmpty(vtkDataObject^ output)
{
  ::vtkDataObject* outputWrap = vtk::ConvertManagedToNative<::vtkDataObject>(output->GetNativePointer());
  int retVal = vtk::ConvertManagedToNative<::vtkAlgorithm>(m_instance)->UpdateExtentIsEmpty(outputWrap);
  return retVal;
}



int vtkAlgorithm::UpdateExtentIsEmpty(vtkInformation^ pinfo, int extentType)
{
  ::vtkInformation* pinfoWrap = vtk::ConvertManagedToNative<::vtkInformation>(pinfo->GetNativePointer());
  int retVal = vtk::ConvertManagedToNative<::vtkAlgorithm>(m_instance)->UpdateExtentIsEmpty(pinfoWrap, extentType);
  return retVal;
}



  vtkAlgorithm::vtkAlgorithm(System::IntPtr native, bool bConst) : vtkObject(native, bConst) {}



  vtkAlgorithm::vtkAlgorithm(bool donothing) : vtkObject(donothing) {}



  vtkAlgorithm::vtkAlgorithm() : vtkObject(false) {
  this->SetNativePointer(IntPtr(::vtkAlgorithm::New()));
}



  vtkAlgorithm::~vtkAlgorithm() { }





} // end namespace vtkFiltering
