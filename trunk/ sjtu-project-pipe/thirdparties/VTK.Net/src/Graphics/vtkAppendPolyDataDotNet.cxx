

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkAppendPolyDataDotNet.h"

// native includes
#include "strstream"
#include "vtkAppendPolyData.h"
#include "vtkObject.h"
#include "vtkPolyData.h"

using namespace System;

namespace vtk {

System::String^ vtkAppendPolyData::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkAppendPolyData>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkAppendPolyData::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkAppendPolyData>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkAppendPolyData^ vtkAppendPolyData::NewInstance()
{
  ::vtkAppendPolyData* retVal = static_cast<::vtkAppendPolyData*>(vtk::ConvertManagedToNative<::vtkAppendPolyData>(m_instance)->NewInstance());
  return gcnew vtkAppendPolyData(IntPtr(retVal), false);
}



vtkAppendPolyData^ vtkAppendPolyData::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkAppendPolyData* retVal = static_cast<::vtkAppendPolyData*>(::vtkAppendPolyData::SafeDownCast(oWrap));
  return gcnew vtkAppendPolyData(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkAppendPolyData::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkAppendPolyData>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkAppendPolyData::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkAppendPolyData>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkAppendPolyData::SetUserManagedInputs(int arg0)
{
  vtk::ConvertManagedToNative<::vtkAppendPolyData>(m_instance)->SetUserManagedInputs(arg0);
}



int vtkAppendPolyData::GetUserManagedInputs()
{
  int retVal = vtk::ConvertManagedToNative<::vtkAppendPolyData>(m_instance)->GetUserManagedInputs();
  return retVal;
}



void vtkAppendPolyData::UserManagedInputsOn()
{
  vtk::ConvertManagedToNative<::vtkAppendPolyData>(m_instance)->UserManagedInputsOn();
}



void vtkAppendPolyData::UserManagedInputsOff()
{
  vtk::ConvertManagedToNative<::vtkAppendPolyData>(m_instance)->UserManagedInputsOff();
}



void vtkAppendPolyData::AddInput(vtkPolyData^ arg0)
{
  ::vtkPolyData* arg0Wrap = vtk::ConvertManagedToNative<::vtkPolyData>(arg0->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkAppendPolyData>(m_instance)->AddInput(arg0Wrap);
}



void vtkAppendPolyData::RemoveInput(vtkPolyData^ arg0)
{
  ::vtkPolyData* arg0Wrap = vtk::ConvertManagedToNative<::vtkPolyData>(arg0->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkAppendPolyData>(m_instance)->RemoveInput(arg0Wrap);
}



void vtkAppendPolyData::SetNumberOfInputs(int num)
{
  vtk::ConvertManagedToNative<::vtkAppendPolyData>(m_instance)->SetNumberOfInputs(num);
}



void vtkAppendPolyData::SetInputByNumber(int num, vtkPolyData^ input)
{
  ::vtkPolyData* inputWrap = vtk::ConvertManagedToNative<::vtkPolyData>(input->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkAppendPolyData>(m_instance)->SetInputByNumber(num, inputWrap);
}



void vtkAppendPolyData::SetParallelStreaming(int arg0)
{
  vtk::ConvertManagedToNative<::vtkAppendPolyData>(m_instance)->SetParallelStreaming(arg0);
}



int vtkAppendPolyData::GetParallelStreaming()
{
  int retVal = vtk::ConvertManagedToNative<::vtkAppendPolyData>(m_instance)->GetParallelStreaming();
  return retVal;
}



void vtkAppendPolyData::ParallelStreamingOn()
{
  vtk::ConvertManagedToNative<::vtkAppendPolyData>(m_instance)->ParallelStreamingOn();
}



void vtkAppendPolyData::ParallelStreamingOff()
{
  vtk::ConvertManagedToNative<::vtkAppendPolyData>(m_instance)->ParallelStreamingOff();
}



  vtkAppendPolyData::vtkAppendPolyData(System::IntPtr native, bool bConst) : vtkPolyDataAlgorithm(native, bConst) {}



  vtkAppendPolyData::vtkAppendPolyData(bool donothing) : vtkPolyDataAlgorithm(donothing) {}



  vtkAppendPolyData::vtkAppendPolyData() : vtkPolyDataAlgorithm(false) {
  this->SetNativePointer(IntPtr(::vtkAppendPolyData::New()));
}



  vtkAppendPolyData::~vtkAppendPolyData() { }





} // end namespace vtkGraphics
