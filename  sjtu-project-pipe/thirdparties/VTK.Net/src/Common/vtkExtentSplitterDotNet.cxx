

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkExtentSplitterDotNet.h"

// native includes
#include "strstream"
#include "vtkExtentSplitter.h"

using namespace System;

namespace vtk {

System::String^ vtkExtentSplitter::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkExtentSplitter>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkExtentSplitter::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkExtentSplitter>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkExtentSplitter^ vtkExtentSplitter::NewInstance()
{
  ::vtkExtentSplitter* retVal = static_cast<::vtkExtentSplitter*>(vtk::ConvertManagedToNative<::vtkExtentSplitter>(m_instance)->NewInstance());
  return gcnew vtkExtentSplitter(IntPtr(retVal), false);
}



vtkExtentSplitter^ vtkExtentSplitter::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkExtentSplitter* retVal = static_cast<::vtkExtentSplitter*>(::vtkExtentSplitter::SafeDownCast(oWrap));
  return gcnew vtkExtentSplitter(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkExtentSplitter::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkExtentSplitter>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkExtentSplitter::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkExtentSplitter>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkExtentSplitter::AddExtentSource(int id, int priority, int x0, int x1, int y0, int y1, int z0, int z1)
{
  vtk::ConvertManagedToNative<::vtkExtentSplitter>(m_instance)->AddExtentSource(id, priority, x0, x1, y0, y1, z0, z1);
}



void vtkExtentSplitter::AddExtentSource(int id, int priority, array<int>^ extent)
{
  pin_ptr<int> extentPin = &extent[0];
  int* nativeextentPin = extentPin;
  vtk::ConvertManagedToNative<::vtkExtentSplitter>(m_instance)->AddExtentSource(id, priority, nativeextentPin);
}



void vtkExtentSplitter::RemoveExtentSource(int id)
{
  vtk::ConvertManagedToNative<::vtkExtentSplitter>(m_instance)->RemoveExtentSource(id);
}



void vtkExtentSplitter::RemoveAllExtentSources()
{
  vtk::ConvertManagedToNative<::vtkExtentSplitter>(m_instance)->RemoveAllExtentSources();
}



void vtkExtentSplitter::AddExtent(int x0, int x1, int y0, int y1, int z0, int z1)
{
  vtk::ConvertManagedToNative<::vtkExtentSplitter>(m_instance)->AddExtent(x0, x1, y0, y1, z0, z1);
}



void vtkExtentSplitter::AddExtent(array<int>^ extent)
{
  pin_ptr<int> extentPin = &extent[0];
  int* nativeextentPin = extentPin;
  vtk::ConvertManagedToNative<::vtkExtentSplitter>(m_instance)->AddExtent(nativeextentPin);
}



int vtkExtentSplitter::ComputeSubExtents()
{
  int retVal = vtk::ConvertManagedToNative<::vtkExtentSplitter>(m_instance)->ComputeSubExtents();
  return retVal;
}



int vtkExtentSplitter::GetNumberOfSubExtents()
{
  int retVal = vtk::ConvertManagedToNative<::vtkExtentSplitter>(m_instance)->GetNumberOfSubExtents();
  return retVal;
}



array<int>^ vtkExtentSplitter::GetSubExtent(int index)
{
  const int* retVal = vtk::ConvertManagedToNative<::vtkExtentSplitter>(m_instance)->GetSubExtent(index);
  array<int>^ mRetVal = gcnew array<int>(6);
  for (size_t cprIdx=0; cprIdx<6; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



void vtkExtentSplitter::GetSubExtent(int index, array<int>^ extent)
{
  pin_ptr<int> extentPin = &extent[0];
  int* nativeextentPin = extentPin;
  vtk::ConvertManagedToNative<::vtkExtentSplitter>(m_instance)->GetSubExtent(index, nativeextentPin);
}



int vtkExtentSplitter::GetSubExtentSource(int index)
{
  int retVal = vtk::ConvertManagedToNative<::vtkExtentSplitter>(m_instance)->GetSubExtentSource(index);
  return retVal;
}



int vtkExtentSplitter::GetPointMode()
{
  int retVal = vtk::ConvertManagedToNative<::vtkExtentSplitter>(m_instance)->GetPointMode();
  return retVal;
}



void vtkExtentSplitter::SetPointMode(int arg0)
{
  vtk::ConvertManagedToNative<::vtkExtentSplitter>(m_instance)->SetPointMode(arg0);
}



void vtkExtentSplitter::PointModeOn()
{
  vtk::ConvertManagedToNative<::vtkExtentSplitter>(m_instance)->PointModeOn();
}



void vtkExtentSplitter::PointModeOff()
{
  vtk::ConvertManagedToNative<::vtkExtentSplitter>(m_instance)->PointModeOff();
}



  vtkExtentSplitter::vtkExtentSplitter(System::IntPtr native, bool bConst) : vtkObject(native, bConst) {}



  vtkExtentSplitter::vtkExtentSplitter(bool donothing) : vtkObject(donothing) {}



  vtkExtentSplitter::vtkExtentSplitter() : vtkObject(false) {
  this->SetNativePointer(IntPtr(::vtkExtentSplitter::New()));
}



  vtkExtentSplitter::~vtkExtentSplitter() { }





} // end namespace vtkCommon
