

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkExtractVOIDotNet.h"

// native includes
#include "strstream"
#include "vtkExtractVOI.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkExtractVOI::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkExtractVOI>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkExtractVOI::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkExtractVOI>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkExtractVOI^ vtkExtractVOI::NewInstance()
{
  ::vtkExtractVOI* retVal = static_cast<::vtkExtractVOI*>(vtk::ConvertManagedToNative<::vtkExtractVOI>(m_instance)->NewInstance());
  return gcnew vtkExtractVOI(IntPtr(retVal), false);
}



vtkExtractVOI^ vtkExtractVOI::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkExtractVOI* retVal = static_cast<::vtkExtractVOI*>(::vtkExtractVOI::SafeDownCast(oWrap));
  return gcnew vtkExtractVOI(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkExtractVOI::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkExtractVOI>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkExtractVOI::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkExtractVOI>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkExtractVOI::SetVOI(int arg0, int arg1, int arg2, int arg3, int arg4, int arg5)
{
  vtk::ConvertManagedToNative<::vtkExtractVOI>(m_instance)->SetVOI(arg0, arg1, arg2, arg3, arg4, arg5);
}



void vtkExtractVOI::SetVOI(array<int>^ a)
{
  pin_ptr<int> aPin = &a[0];
  int* nativeaPin = aPin;
  vtk::ConvertManagedToNative<::vtkExtractVOI>(m_instance)->SetVOI(nativeaPin);
}



array<int>^ vtkExtractVOI::GetVOI()
{
  const int* retVal = vtk::ConvertManagedToNative<::vtkExtractVOI>(m_instance)->GetVOI();
  array<int>^ mRetVal = gcnew array<int>(6);
  for (size_t cprIdx=0; cprIdx<6; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



void vtkExtractVOI::SetSampleRate(int arg0, int arg1, int arg2)
{
  vtk::ConvertManagedToNative<::vtkExtractVOI>(m_instance)->SetSampleRate(arg0, arg1, arg2);
}



void vtkExtractVOI::SetSampleRate(array<int>^ a)
{
  pin_ptr<int> aPin = &a[0];
  int* nativeaPin = aPin;
  vtk::ConvertManagedToNative<::vtkExtractVOI>(m_instance)->SetSampleRate(nativeaPin);
}



array<int>^ vtkExtractVOI::GetSampleRate()
{
  const int* retVal = vtk::ConvertManagedToNative<::vtkExtractVOI>(m_instance)->GetSampleRate();
  array<int>^ mRetVal = gcnew array<int>(3);
  for (size_t cprIdx=0; cprIdx<3; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



  vtkExtractVOI::vtkExtractVOI(System::IntPtr native, bool bConst) : vtkImageAlgorithm(native, bConst) {}



  vtkExtractVOI::vtkExtractVOI(bool donothing) : vtkImageAlgorithm(donothing) {}



  vtkExtractVOI::vtkExtractVOI() : vtkImageAlgorithm(false) {
  this->SetNativePointer(IntPtr(::vtkExtractVOI::New()));
}



  vtkExtractVOI::~vtkExtractVOI() { }





} // end namespace vtkImaging
