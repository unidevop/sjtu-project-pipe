

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkAlgorithmOutputDotNet.h"
#include "vtkAlgorithmDotNet.h"

// native includes
#include "strstream"
#include "vtkAlgorithmOutput.h"
#include "vtkAlgorithm.h"

using namespace System;

namespace vtk {

System::String^ vtkAlgorithmOutput::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkAlgorithmOutput>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkAlgorithmOutput::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkAlgorithmOutput>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkAlgorithmOutput^ vtkAlgorithmOutput::NewInstance()
{
  ::vtkAlgorithmOutput* retVal = static_cast<::vtkAlgorithmOutput*>(vtk::ConvertManagedToNative<::vtkAlgorithmOutput>(m_instance)->NewInstance());
  return gcnew vtkAlgorithmOutput(IntPtr(retVal), false);
}



vtkAlgorithmOutput^ vtkAlgorithmOutput::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkAlgorithmOutput* retVal = static_cast<::vtkAlgorithmOutput*>(::vtkAlgorithmOutput::SafeDownCast(oWrap));
  return gcnew vtkAlgorithmOutput(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkAlgorithmOutput::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkAlgorithmOutput>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkAlgorithmOutput::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkAlgorithmOutput>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkAlgorithmOutput::SetIndex(int index)
{
  vtk::ConvertManagedToNative<::vtkAlgorithmOutput>(m_instance)->SetIndex(index);
}



int vtkAlgorithmOutput::GetIndex()
{
  int retVal = vtk::ConvertManagedToNative<::vtkAlgorithmOutput>(m_instance)->GetIndex();
  return retVal;
}



vtkAlgorithm^ vtkAlgorithmOutput::GetProducer()
{
  ::vtkAlgorithm* retVal = static_cast<::vtkAlgorithm*>(vtk::ConvertManagedToNative<::vtkAlgorithmOutput>(m_instance)->GetProducer());
  return gcnew vtkAlgorithm(IntPtr(retVal), false);
}



void vtkAlgorithmOutput::SetProducer(vtkAlgorithm^ producer)
{
  ::vtkAlgorithm* producerWrap = vtk::ConvertManagedToNative<::vtkAlgorithm>(producer->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkAlgorithmOutput>(m_instance)->SetProducer(producerWrap);
}



  vtkAlgorithmOutput::vtkAlgorithmOutput(System::IntPtr native, bool bConst) : vtkObject(native, bConst) {}



  vtkAlgorithmOutput::vtkAlgorithmOutput(bool donothing) : vtkObject(donothing) {}



  vtkAlgorithmOutput::vtkAlgorithmOutput() : vtkObject(false) {
  this->SetNativePointer(IntPtr(::vtkAlgorithmOutput::New()));
}



  vtkAlgorithmOutput::~vtkAlgorithmOutput() { }





} // end namespace vtkFiltering
