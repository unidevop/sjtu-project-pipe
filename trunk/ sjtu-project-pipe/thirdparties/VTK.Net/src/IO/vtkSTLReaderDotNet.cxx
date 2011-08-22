

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkSTLReaderDotNet.h"

// native includes
#include "strstream"
#include "vtkSTLReader.h"
#include "vtkObject.h"
#include "vtkPointLocator.h"

using namespace System;

namespace vtk {

System::String^ vtkSTLReader::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkSTLReader>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkSTLReader::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkSTLReader>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkSTLReader^ vtkSTLReader::NewInstance()
{
  ::vtkSTLReader* retVal = static_cast<::vtkSTLReader*>(vtk::ConvertManagedToNative<::vtkSTLReader>(m_instance)->NewInstance());
  return gcnew vtkSTLReader(IntPtr(retVal), false);
}



vtkSTLReader^ vtkSTLReader::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkSTLReader* retVal = static_cast<::vtkSTLReader*>(::vtkSTLReader::SafeDownCast(oWrap));
  return gcnew vtkSTLReader(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkSTLReader::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkSTLReader>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkSTLReader::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkSTLReader>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




unsigned long vtkSTLReader::GetMTime()
{
  unsigned long retVal = vtk::ConvertManagedToNative<::vtkSTLReader>(m_instance)->GetMTime();
  return retVal;
}



void vtkSTLReader::SetFileName(System::String^ arg0)
{
  char* arg0Wrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(arg0).ToPointer());
  vtk::ConvertManagedToNative<::vtkSTLReader>(m_instance)->SetFileName(arg0Wrap);
  arg0->Remove(0,arg0->Length);
  arg0->Insert(0,System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(arg0Wrap)));
System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(arg0Wrap));
}



System::String^ vtkSTLReader::GetFileName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkSTLReader>(m_instance)->GetFileName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



void vtkSTLReader::SetMerging(int arg0)
{
  vtk::ConvertManagedToNative<::vtkSTLReader>(m_instance)->SetMerging(arg0);
}



int vtkSTLReader::GetMerging()
{
  int retVal = vtk::ConvertManagedToNative<::vtkSTLReader>(m_instance)->GetMerging();
  return retVal;
}



void vtkSTLReader::MergingOn()
{
  vtk::ConvertManagedToNative<::vtkSTLReader>(m_instance)->MergingOn();
}



void vtkSTLReader::MergingOff()
{
  vtk::ConvertManagedToNative<::vtkSTLReader>(m_instance)->MergingOff();
}



void vtkSTLReader::SetScalarTags(int arg0)
{
  vtk::ConvertManagedToNative<::vtkSTLReader>(m_instance)->SetScalarTags(arg0);
}



int vtkSTLReader::GetScalarTags()
{
  int retVal = vtk::ConvertManagedToNative<::vtkSTLReader>(m_instance)->GetScalarTags();
  return retVal;
}



void vtkSTLReader::ScalarTagsOn()
{
  vtk::ConvertManagedToNative<::vtkSTLReader>(m_instance)->ScalarTagsOn();
}



void vtkSTLReader::ScalarTagsOff()
{
  vtk::ConvertManagedToNative<::vtkSTLReader>(m_instance)->ScalarTagsOff();
}



void vtkSTLReader::SetLocator(vtkPointLocator^ locator)
{
  ::vtkPointLocator* locatorWrap = vtk::ConvertManagedToNative<::vtkPointLocator>(locator->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkSTLReader>(m_instance)->SetLocator(locatorWrap);
}



vtkPointLocator^ vtkSTLReader::GetLocator()
{
  ::vtkPointLocator* retVal = static_cast<::vtkPointLocator*>(vtk::ConvertManagedToNative<::vtkSTLReader>(m_instance)->GetLocator());
  return gcnew vtkPointLocator(IntPtr(retVal), false);
}



void vtkSTLReader::CreateDefaultLocator()
{
  vtk::ConvertManagedToNative<::vtkSTLReader>(m_instance)->CreateDefaultLocator();
}



  vtkSTLReader::vtkSTLReader(System::IntPtr native, bool bConst) : vtkPolyDataAlgorithm(native, bConst) {}



  vtkSTLReader::vtkSTLReader(bool donothing) : vtkPolyDataAlgorithm(donothing) {}



  vtkSTLReader::vtkSTLReader() : vtkPolyDataAlgorithm(false) {
  this->SetNativePointer(IntPtr(::vtkSTLReader::New()));
}



  vtkSTLReader::~vtkSTLReader() { }





} // end namespace vtkIO
