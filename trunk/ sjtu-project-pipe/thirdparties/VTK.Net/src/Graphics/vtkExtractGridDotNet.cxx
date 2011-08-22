

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkExtractGridDotNet.h"

// native includes
#include "strstream"
#include "vtkExtractGrid.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkExtractGrid::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkExtractGrid>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkExtractGrid::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkExtractGrid>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkExtractGrid^ vtkExtractGrid::NewInstance()
{
  ::vtkExtractGrid* retVal = static_cast<::vtkExtractGrid*>(vtk::ConvertManagedToNative<::vtkExtractGrid>(m_instance)->NewInstance());
  return gcnew vtkExtractGrid(IntPtr(retVal), false);
}



vtkExtractGrid^ vtkExtractGrid::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkExtractGrid* retVal = static_cast<::vtkExtractGrid*>(::vtkExtractGrid::SafeDownCast(oWrap));
  return gcnew vtkExtractGrid(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkExtractGrid::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkExtractGrid>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkExtractGrid::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkExtractGrid>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkExtractGrid::SetVOI(int arg0, int arg1, int arg2, int arg3, int arg4, int arg5)
{
  vtk::ConvertManagedToNative<::vtkExtractGrid>(m_instance)->SetVOI(arg0, arg1, arg2, arg3, arg4, arg5);
}



void vtkExtractGrid::SetVOI(array<int>^ a)
{
  pin_ptr<int> aPin = &a[0];
  int* nativeaPin = aPin;
  vtk::ConvertManagedToNative<::vtkExtractGrid>(m_instance)->SetVOI(nativeaPin);
}



array<int>^ vtkExtractGrid::GetVOI()
{
  const int* retVal = vtk::ConvertManagedToNative<::vtkExtractGrid>(m_instance)->GetVOI();
  array<int>^ mRetVal = gcnew array<int>(6);
  for (size_t cprIdx=0; cprIdx<6; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



void vtkExtractGrid::SetSampleRate(int arg0, int arg1, int arg2)
{
  vtk::ConvertManagedToNative<::vtkExtractGrid>(m_instance)->SetSampleRate(arg0, arg1, arg2);
}



void vtkExtractGrid::SetSampleRate(array<int>^ a)
{
  pin_ptr<int> aPin = &a[0];
  int* nativeaPin = aPin;
  vtk::ConvertManagedToNative<::vtkExtractGrid>(m_instance)->SetSampleRate(nativeaPin);
}



array<int>^ vtkExtractGrid::GetSampleRate()
{
  const int* retVal = vtk::ConvertManagedToNative<::vtkExtractGrid>(m_instance)->GetSampleRate();
  array<int>^ mRetVal = gcnew array<int>(3);
  for (size_t cprIdx=0; cprIdx<3; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



void vtkExtractGrid::SetIncludeBoundary(int arg0)
{
  vtk::ConvertManagedToNative<::vtkExtractGrid>(m_instance)->SetIncludeBoundary(arg0);
}



int vtkExtractGrid::GetIncludeBoundary()
{
  int retVal = vtk::ConvertManagedToNative<::vtkExtractGrid>(m_instance)->GetIncludeBoundary();
  return retVal;
}



void vtkExtractGrid::IncludeBoundaryOn()
{
  vtk::ConvertManagedToNative<::vtkExtractGrid>(m_instance)->IncludeBoundaryOn();
}



void vtkExtractGrid::IncludeBoundaryOff()
{
  vtk::ConvertManagedToNative<::vtkExtractGrid>(m_instance)->IncludeBoundaryOff();
}



  vtkExtractGrid::vtkExtractGrid(System::IntPtr native, bool bConst) : vtkStructuredGridAlgorithm(native, bConst) {}



  vtkExtractGrid::vtkExtractGrid(bool donothing) : vtkStructuredGridAlgorithm(donothing) {}



  vtkExtractGrid::vtkExtractGrid() : vtkStructuredGridAlgorithm(false) {
  this->SetNativePointer(IntPtr(::vtkExtractGrid::New()));
}



  vtkExtractGrid::~vtkExtractGrid() { }





} // end namespace vtkGraphics
