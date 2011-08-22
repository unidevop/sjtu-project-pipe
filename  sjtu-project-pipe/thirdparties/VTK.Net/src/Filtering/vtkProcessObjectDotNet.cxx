

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkProcessObjectDotNet.h"
#include "vtkAlgorithmOutputDotNet.h"

// native includes
#include "strstream"
#include "vtkProcessObject.h"
#include "vtkAlgorithmOutput.h"

using namespace System;

namespace vtk {

System::String^ vtkProcessObject::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkProcessObject>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkProcessObject::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkProcessObject>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkProcessObject^ vtkProcessObject::NewInstance()
{
  ::vtkProcessObject* retVal = static_cast<::vtkProcessObject*>(vtk::ConvertManagedToNative<::vtkProcessObject>(m_instance)->NewInstance());
  return gcnew vtkProcessObject(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkProcessObject::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkProcessObject>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkProcessObject::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkProcessObject>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




int vtkProcessObject::GetNumberOfInputs()
{
  int retVal = vtk::ConvertManagedToNative<::vtkProcessObject>(m_instance)->GetNumberOfInputs();
  return retVal;
}



void vtkProcessObject::SqueezeInputArray()
{
  vtk::ConvertManagedToNative<::vtkProcessObject>(m_instance)->SqueezeInputArray();
}



void vtkProcessObject::RemoveAllInputs()
{
  vtk::ConvertManagedToNative<::vtkProcessObject>(m_instance)->RemoveAllInputs();
}



void vtkProcessObject::SetInputConnection(vtkAlgorithmOutput^ input)
{
  ::vtkAlgorithmOutput* inputWrap = vtk::ConvertManagedToNative<::vtkAlgorithmOutput>(input->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkProcessObject>(m_instance)->SetInputConnection(inputWrap);
}



void vtkProcessObject::SetInputConnection(int port, vtkAlgorithmOutput^ input)
{
  ::vtkAlgorithmOutput* inputWrap = vtk::ConvertManagedToNative<::vtkAlgorithmOutput>(input->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkProcessObject>(m_instance)->SetInputConnection(port, inputWrap);
}



void vtkProcessObject::AddInputConnection(int port, vtkAlgorithmOutput^ input)
{
  ::vtkAlgorithmOutput* inputWrap = vtk::ConvertManagedToNative<::vtkAlgorithmOutput>(input->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkProcessObject>(m_instance)->AddInputConnection(port, inputWrap);
}



void vtkProcessObject::AddInputConnection(vtkAlgorithmOutput^ input)
{
  ::vtkAlgorithmOutput* inputWrap = vtk::ConvertManagedToNative<::vtkAlgorithmOutput>(input->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkProcessObject>(m_instance)->AddInputConnection(inputWrap);
}



void vtkProcessObject::RemoveInputConnection(int port, vtkAlgorithmOutput^ input)
{
  ::vtkAlgorithmOutput* inputWrap = vtk::ConvertManagedToNative<::vtkAlgorithmOutput>(input->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkProcessObject>(m_instance)->RemoveInputConnection(port, inputWrap);
}



void vtkProcessObject::SetNthInputConnection(int port, int index, vtkAlgorithmOutput^ input)
{
  ::vtkAlgorithmOutput* inputWrap = vtk::ConvertManagedToNative<::vtkAlgorithmOutput>(input->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkProcessObject>(m_instance)->SetNthInputConnection(port, index, inputWrap);
}



void vtkProcessObject::SetNumberOfInputConnections(int port, int n)
{
  vtk::ConvertManagedToNative<::vtkProcessObject>(m_instance)->SetNumberOfInputConnections(port, n);
}



  vtkProcessObject::vtkProcessObject(System::IntPtr native, bool bConst) : vtkAlgorithm(native, bConst) {}



  vtkProcessObject::vtkProcessObject(bool donothing) : vtkAlgorithm(donothing) {}



  vtkProcessObject::vtkProcessObject() : vtkAlgorithm(false) {
  this->SetNativePointer(IntPtr(::vtkProcessObject::New()));
}



  vtkProcessObject::~vtkProcessObject() { }





} // end namespace vtkFiltering
