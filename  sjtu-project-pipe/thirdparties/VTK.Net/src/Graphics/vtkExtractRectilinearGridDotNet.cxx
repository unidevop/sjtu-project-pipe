

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkExtractRectilinearGridDotNet.h"

// native includes
#include "strstream"
#include "vtkExtractRectilinearGrid.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkExtractRectilinearGrid::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkExtractRectilinearGrid>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkExtractRectilinearGrid::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkExtractRectilinearGrid>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkExtractRectilinearGrid^ vtkExtractRectilinearGrid::NewInstance()
{
  ::vtkExtractRectilinearGrid* retVal = static_cast<::vtkExtractRectilinearGrid*>(vtk::ConvertManagedToNative<::vtkExtractRectilinearGrid>(m_instance)->NewInstance());
  return gcnew vtkExtractRectilinearGrid(IntPtr(retVal), false);
}



vtkExtractRectilinearGrid^ vtkExtractRectilinearGrid::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkExtractRectilinearGrid* retVal = static_cast<::vtkExtractRectilinearGrid*>(::vtkExtractRectilinearGrid::SafeDownCast(oWrap));
  return gcnew vtkExtractRectilinearGrid(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkExtractRectilinearGrid::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkExtractRectilinearGrid>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkExtractRectilinearGrid::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkExtractRectilinearGrid>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkExtractRectilinearGrid::SetVOI(int arg0, int arg1, int arg2, int arg3, int arg4, int arg5)
{
  vtk::ConvertManagedToNative<::vtkExtractRectilinearGrid>(m_instance)->SetVOI(arg0, arg1, arg2, arg3, arg4, arg5);
}



void vtkExtractRectilinearGrid::SetVOI(array<int>^ a)
{
  pin_ptr<int> aPin = &a[0];
  int* nativeaPin = aPin;
  vtk::ConvertManagedToNative<::vtkExtractRectilinearGrid>(m_instance)->SetVOI(nativeaPin);
}



array<int>^ vtkExtractRectilinearGrid::GetVOI()
{
  const int* retVal = vtk::ConvertManagedToNative<::vtkExtractRectilinearGrid>(m_instance)->GetVOI();
  array<int>^ mRetVal = gcnew array<int>(6);
  for (size_t cprIdx=0; cprIdx<6; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



void vtkExtractRectilinearGrid::SetSampleRate(int arg0, int arg1, int arg2)
{
  vtk::ConvertManagedToNative<::vtkExtractRectilinearGrid>(m_instance)->SetSampleRate(arg0, arg1, arg2);
}



void vtkExtractRectilinearGrid::SetSampleRate(array<int>^ a)
{
  pin_ptr<int> aPin = &a[0];
  int* nativeaPin = aPin;
  vtk::ConvertManagedToNative<::vtkExtractRectilinearGrid>(m_instance)->SetSampleRate(nativeaPin);
}



array<int>^ vtkExtractRectilinearGrid::GetSampleRate()
{
  const int* retVal = vtk::ConvertManagedToNative<::vtkExtractRectilinearGrid>(m_instance)->GetSampleRate();
  array<int>^ mRetVal = gcnew array<int>(3);
  for (size_t cprIdx=0; cprIdx<3; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



void vtkExtractRectilinearGrid::SetIncludeBoundary(int arg0)
{
  vtk::ConvertManagedToNative<::vtkExtractRectilinearGrid>(m_instance)->SetIncludeBoundary(arg0);
}



int vtkExtractRectilinearGrid::GetIncludeBoundary()
{
  int retVal = vtk::ConvertManagedToNative<::vtkExtractRectilinearGrid>(m_instance)->GetIncludeBoundary();
  return retVal;
}



void vtkExtractRectilinearGrid::IncludeBoundaryOn()
{
  vtk::ConvertManagedToNative<::vtkExtractRectilinearGrid>(m_instance)->IncludeBoundaryOn();
}



void vtkExtractRectilinearGrid::IncludeBoundaryOff()
{
  vtk::ConvertManagedToNative<::vtkExtractRectilinearGrid>(m_instance)->IncludeBoundaryOff();
}



  vtkExtractRectilinearGrid::vtkExtractRectilinearGrid(System::IntPtr native, bool bConst) : vtkRectilinearGridAlgorithm(native, bConst) {}



  vtkExtractRectilinearGrid::vtkExtractRectilinearGrid(bool donothing) : vtkRectilinearGridAlgorithm(donothing) {}



  vtkExtractRectilinearGrid::vtkExtractRectilinearGrid() : vtkRectilinearGridAlgorithm(false) {
  this->SetNativePointer(IntPtr(::vtkExtractRectilinearGrid::New()));
}



  vtkExtractRectilinearGrid::~vtkExtractRectilinearGrid() { }





} // end namespace vtkGraphics
