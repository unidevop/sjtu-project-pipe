

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkExecutiveDotNet.h"
#include "vtkAlgorithmDotNet.h"
#include "vtkAlgorithmOutputDotNet.h"
#include "vtkDataObjectDotNet.h"
#include "vtkInformationDotNet.h"
#include "vtkInformationExecutivePortKeyDotNet.h"
#include "vtkInformationExecutivePortVectorKeyDotNet.h"
#include "vtkInformationIntegerKeyDotNet.h"
#include "vtkInformationKeyVectorKeyDotNet.h"
#include "vtkInformationVectorDotNet.h"

// native includes
#include "strstream"
#include "vtkExecutive.h"
#include "vtkAlgorithm.h"
#include "vtkAlgorithmOutput.h"
#include "vtkDataObject.h"
#include "vtkInformation.h"
#include "vtkInformationExecutivePortKey.h"
#include "vtkInformationExecutivePortVectorKey.h"
#include "vtkInformationIntegerKey.h"
#include "vtkInformationKeyVectorKey.h"
#include "vtkInformationVector.h"
#include "vtkObjectBase.h"

using namespace System;

namespace vtk {

System::String^ vtkExecutive::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkExecutive>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkExecutive::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkExecutive>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkExecutive^ vtkExecutive::NewInstance()
{
  ::vtkExecutive* retVal = static_cast<::vtkExecutive*>(vtk::ConvertManagedToNative<::vtkExecutive>(m_instance)->NewInstance());
  return gcnew vtkExecutive(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkExecutive::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkExecutive>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkExecutive::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkExecutive>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




vtkAlgorithm^ vtkExecutive::GetAlgorithm()
{
  ::vtkAlgorithm* retVal = static_cast<::vtkAlgorithm*>(vtk::ConvertManagedToNative<::vtkExecutive>(m_instance)->GetAlgorithm());
  return gcnew vtkAlgorithm(IntPtr(retVal), false);
}



int vtkExecutive::Update()
{
  int retVal = vtk::ConvertManagedToNative<::vtkExecutive>(m_instance)->Update();
  return retVal;
}



int vtkExecutive::Update(int port)
{
  int retVal = vtk::ConvertManagedToNative<::vtkExecutive>(m_instance)->Update(port);
  return retVal;
}



int vtkExecutive::GetNumberOfInputPorts()
{
  int retVal = vtk::ConvertManagedToNative<::vtkExecutive>(m_instance)->GetNumberOfInputPorts();
  return retVal;
}



int vtkExecutive::GetNumberOfOutputPorts()
{
  int retVal = vtk::ConvertManagedToNative<::vtkExecutive>(m_instance)->GetNumberOfOutputPorts();
  return retVal;
}



int vtkExecutive::GetNumberOfInputConnections(int port)
{
  int retVal = vtk::ConvertManagedToNative<::vtkExecutive>(m_instance)->GetNumberOfInputConnections(port);
  return retVal;
}



vtkInformation^ vtkExecutive::GetOutputInformation(int port)
{
  ::vtkInformation* retVal = static_cast<::vtkInformation*>(vtk::ConvertManagedToNative<::vtkExecutive>(m_instance)->GetOutputInformation(port));
  return gcnew vtkInformation(IntPtr(retVal), false);
}



vtkInformationVector^ vtkExecutive::GetOutputInformation()
{
  ::vtkInformationVector* retVal = static_cast<::vtkInformationVector*>(vtk::ConvertManagedToNative<::vtkExecutive>(m_instance)->GetOutputInformation());
  return gcnew vtkInformationVector(IntPtr(retVal), false);
}



vtkInformation^ vtkExecutive::GetInputInformation(int port, int connection)
{
  ::vtkInformation* retVal = static_cast<::vtkInformation*>(vtk::ConvertManagedToNative<::vtkExecutive>(m_instance)->GetInputInformation(port, connection));
  return gcnew vtkInformation(IntPtr(retVal), false);
}



vtkInformationVector^ vtkExecutive::GetInputInformation(int port)
{
  ::vtkInformationVector* retVal = static_cast<::vtkInformationVector*>(vtk::ConvertManagedToNative<::vtkExecutive>(m_instance)->GetInputInformation(port));
  return gcnew vtkInformationVector(IntPtr(retVal), false);
}



vtkExecutive^ vtkExecutive::GetInputExecutive(int port, int connection)
{
  ::vtkExecutive* retVal = static_cast<::vtkExecutive*>(vtk::ConvertManagedToNative<::vtkExecutive>(m_instance)->GetInputExecutive(port, connection));
  return gcnew vtkExecutive(IntPtr(retVal), false);
}



vtkDataObject^ vtkExecutive::GetOutputData(int port)
{
  ::vtkDataObject* retVal = static_cast<::vtkDataObject*>(vtk::ConvertManagedToNative<::vtkExecutive>(m_instance)->GetOutputData(port));
  return gcnew vtkDataObject(IntPtr(retVal), false);
}



void vtkExecutive::SetOutputData(int port, vtkDataObject^ arg1, vtkInformation^ info)
{
  ::vtkDataObject* arg1Wrap = vtk::ConvertManagedToNative<::vtkDataObject>(arg1->GetNativePointer());
  ::vtkInformation* infoWrap = vtk::ConvertManagedToNative<::vtkInformation>(info->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkExecutive>(m_instance)->SetOutputData(port, arg1Wrap, infoWrap);
}



void vtkExecutive::SetOutputData(int port, vtkDataObject^ arg1)
{
  ::vtkDataObject* arg1Wrap = vtk::ConvertManagedToNative<::vtkDataObject>(arg1->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkExecutive>(m_instance)->SetOutputData(port, arg1Wrap);
}



vtkDataObject^ vtkExecutive::GetInputData(int port, int connection)
{
  ::vtkDataObject* retVal = static_cast<::vtkDataObject*>(vtk::ConvertManagedToNative<::vtkExecutive>(m_instance)->GetInputData(port, connection));
  return gcnew vtkDataObject(IntPtr(retVal), false);
}



vtkAlgorithmOutput^ vtkExecutive::GetProducerPort(vtkDataObject^ arg0)
{
  ::vtkDataObject* arg0Wrap = vtk::ConvertManagedToNative<::vtkDataObject>(arg0->GetNativePointer());
  ::vtkAlgorithmOutput* retVal = static_cast<::vtkAlgorithmOutput*>(vtk::ConvertManagedToNative<::vtkExecutive>(m_instance)->GetProducerPort(arg0Wrap));
  return gcnew vtkAlgorithmOutput(IntPtr(retVal), false);
}



void vtkExecutive::SetSharedOutputInformation(vtkInformationVector^ outInfoVec)
{
  ::vtkInformationVector* outInfoVecWrap = vtk::ConvertManagedToNative<::vtkInformationVector>(outInfoVec->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkExecutive>(m_instance)->SetSharedOutputInformation(outInfoVecWrap);
}



void vtkExecutive::Register(vtkObjectBase^ o)
{
  ::vtkObjectBase* oWrap = static_cast<::vtkObjectBase*>(o->GetNativePointer().ToPointer());
  vtk::ConvertManagedToNative<::vtkExecutive>(m_instance)->Register(oWrap);
}



void vtkExecutive::UnRegister(vtkObjectBase^ o)
{
  ::vtkObjectBase* oWrap = static_cast<::vtkObjectBase*>(o->GetNativePointer().ToPointer());
  vtk::ConvertManagedToNative<::vtkExecutive>(m_instance)->UnRegister(oWrap);
}



vtkInformationExecutivePortKey^ vtkExecutive::PRODUCER()
{
  ::vtkInformationExecutivePortKey* retVal = static_cast<::vtkInformationExecutivePortKey*>(::vtkExecutive::PRODUCER());
  return gcnew vtkInformationExecutivePortKey(IntPtr(retVal), false);
}



vtkInformationExecutivePortVectorKey^ vtkExecutive::CONSUMERS()
{
  ::vtkInformationExecutivePortVectorKey* retVal = static_cast<::vtkInformationExecutivePortVectorKey*>(::vtkExecutive::CONSUMERS());
  return gcnew vtkInformationExecutivePortVectorKey(IntPtr(retVal), false);
}



vtkInformationIntegerKey^ vtkExecutive::FROM_OUTPUT_PORT()
{
  ::vtkInformationIntegerKey* retVal = static_cast<::vtkInformationIntegerKey*>(::vtkExecutive::FROM_OUTPUT_PORT());
  return gcnew vtkInformationIntegerKey(IntPtr(retVal), false);
}



vtkInformationIntegerKey^ vtkExecutive::ALGORITHM_BEFORE_FORWARD()
{
  ::vtkInformationIntegerKey* retVal = static_cast<::vtkInformationIntegerKey*>(::vtkExecutive::ALGORITHM_BEFORE_FORWARD());
  return gcnew vtkInformationIntegerKey(IntPtr(retVal), false);
}



vtkInformationIntegerKey^ vtkExecutive::ALGORITHM_AFTER_FORWARD()
{
  ::vtkInformationIntegerKey* retVal = static_cast<::vtkInformationIntegerKey*>(::vtkExecutive::ALGORITHM_AFTER_FORWARD());
  return gcnew vtkInformationIntegerKey(IntPtr(retVal), false);
}



vtkInformationIntegerKey^ vtkExecutive::ALGORITHM_DIRECTION()
{
  ::vtkInformationIntegerKey* retVal = static_cast<::vtkInformationIntegerKey*>(::vtkExecutive::ALGORITHM_DIRECTION());
  return gcnew vtkInformationIntegerKey(IntPtr(retVal), false);
}



vtkInformationIntegerKey^ vtkExecutive::FORWARD_DIRECTION()
{
  ::vtkInformationIntegerKey* retVal = static_cast<::vtkInformationIntegerKey*>(::vtkExecutive::FORWARD_DIRECTION());
  return gcnew vtkInformationIntegerKey(IntPtr(retVal), false);
}



vtkInformationKeyVectorKey^ vtkExecutive::KEYS_TO_COPY()
{
  ::vtkInformationKeyVectorKey* retVal = static_cast<::vtkInformationKeyVectorKey*>(::vtkExecutive::KEYS_TO_COPY());
  return gcnew vtkInformationKeyVectorKey(IntPtr(retVal), false);
}



  vtkExecutive::vtkExecutive(System::IntPtr native, bool bConst) : vtkObject(native, bConst) {}



  vtkExecutive::vtkExecutive(bool donothing) : vtkObject(donothing) {}



  vtkExecutive::vtkExecutive() : vtkObject(false) {
  this->SetNativePointer(IntPtr(::vtkExecutive::New()));
}



  vtkExecutive::~vtkExecutive() { }





} // end namespace vtkFiltering
