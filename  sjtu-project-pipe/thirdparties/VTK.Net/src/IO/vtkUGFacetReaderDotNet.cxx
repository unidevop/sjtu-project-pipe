

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkUGFacetReaderDotNet.h"

// native includes
#include "strstream"
#include "vtkUGFacetReader.h"
#include "vtkObject.h"
#include "vtkPointLocator.h"

using namespace System;

namespace vtk {

System::String^ vtkUGFacetReader::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkUGFacetReader>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkUGFacetReader::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkUGFacetReader>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkUGFacetReader^ vtkUGFacetReader::NewInstance()
{
  ::vtkUGFacetReader* retVal = static_cast<::vtkUGFacetReader*>(vtk::ConvertManagedToNative<::vtkUGFacetReader>(m_instance)->NewInstance());
  return gcnew vtkUGFacetReader(IntPtr(retVal), false);
}



vtkUGFacetReader^ vtkUGFacetReader::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkUGFacetReader* retVal = static_cast<::vtkUGFacetReader*>(::vtkUGFacetReader::SafeDownCast(oWrap));
  return gcnew vtkUGFacetReader(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkUGFacetReader::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkUGFacetReader>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkUGFacetReader::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkUGFacetReader>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




unsigned long vtkUGFacetReader::GetMTime()
{
  unsigned long retVal = vtk::ConvertManagedToNative<::vtkUGFacetReader>(m_instance)->GetMTime();
  return retVal;
}



void vtkUGFacetReader::SetFileName(System::String^ arg0)
{
  char* arg0Wrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(arg0).ToPointer());
  vtk::ConvertManagedToNative<::vtkUGFacetReader>(m_instance)->SetFileName(arg0Wrap);
  arg0->Remove(0,arg0->Length);
  arg0->Insert(0,System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(arg0Wrap)));
System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(arg0Wrap));
}



System::String^ vtkUGFacetReader::GetFileName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkUGFacetReader>(m_instance)->GetFileName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkUGFacetReader::GetNumberOfParts()
{
  int retVal = vtk::ConvertManagedToNative<::vtkUGFacetReader>(m_instance)->GetNumberOfParts();
  return retVal;
}



short vtkUGFacetReader::GetPartColorIndex(int partId)
{
  short retVal = vtk::ConvertManagedToNative<::vtkUGFacetReader>(m_instance)->GetPartColorIndex(partId);
  return retVal;
}



void vtkUGFacetReader::SetPartNumber(int arg0)
{
  vtk::ConvertManagedToNative<::vtkUGFacetReader>(m_instance)->SetPartNumber(arg0);
}



int vtkUGFacetReader::GetPartNumber()
{
  int retVal = vtk::ConvertManagedToNative<::vtkUGFacetReader>(m_instance)->GetPartNumber();
  return retVal;
}



void vtkUGFacetReader::SetMerging(int arg0)
{
  vtk::ConvertManagedToNative<::vtkUGFacetReader>(m_instance)->SetMerging(arg0);
}



int vtkUGFacetReader::GetMerging()
{
  int retVal = vtk::ConvertManagedToNative<::vtkUGFacetReader>(m_instance)->GetMerging();
  return retVal;
}



void vtkUGFacetReader::MergingOn()
{
  vtk::ConvertManagedToNative<::vtkUGFacetReader>(m_instance)->MergingOn();
}



void vtkUGFacetReader::MergingOff()
{
  vtk::ConvertManagedToNative<::vtkUGFacetReader>(m_instance)->MergingOff();
}



void vtkUGFacetReader::SetLocator(vtkPointLocator^ locator)
{
  ::vtkPointLocator* locatorWrap = vtk::ConvertManagedToNative<::vtkPointLocator>(locator->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkUGFacetReader>(m_instance)->SetLocator(locatorWrap);
}



vtkPointLocator^ vtkUGFacetReader::GetLocator()
{
  ::vtkPointLocator* retVal = static_cast<::vtkPointLocator*>(vtk::ConvertManagedToNative<::vtkUGFacetReader>(m_instance)->GetLocator());
  return gcnew vtkPointLocator(IntPtr(retVal), false);
}



void vtkUGFacetReader::CreateDefaultLocator()
{
  vtk::ConvertManagedToNative<::vtkUGFacetReader>(m_instance)->CreateDefaultLocator();
}



  vtkUGFacetReader::vtkUGFacetReader(System::IntPtr native, bool bConst) : vtkPolyDataAlgorithm(native, bConst) {}



  vtkUGFacetReader::vtkUGFacetReader(bool donothing) : vtkPolyDataAlgorithm(donothing) {}



  vtkUGFacetReader::vtkUGFacetReader() : vtkPolyDataAlgorithm(false) {
  this->SetNativePointer(IntPtr(::vtkUGFacetReader::New()));
}



  vtkUGFacetReader::~vtkUGFacetReader() { }





} // end namespace vtkIO
