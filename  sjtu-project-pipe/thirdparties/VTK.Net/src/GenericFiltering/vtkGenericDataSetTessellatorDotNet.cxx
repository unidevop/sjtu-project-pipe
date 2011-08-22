

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkGenericDataSetTessellatorDotNet.h"

// native includes
#include "strstream"
#include "vtkGenericDataSetTessellator.h"
#include "vtkObject.h"
#include "vtkPointLocator.h"

using namespace System;

namespace vtk {

System::String^ vtkGenericDataSetTessellator::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkGenericDataSetTessellator>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkGenericDataSetTessellator::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkGenericDataSetTessellator>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkGenericDataSetTessellator^ vtkGenericDataSetTessellator::NewInstance()
{
  ::vtkGenericDataSetTessellator* retVal = static_cast<::vtkGenericDataSetTessellator*>(vtk::ConvertManagedToNative<::vtkGenericDataSetTessellator>(m_instance)->NewInstance());
  return gcnew vtkGenericDataSetTessellator(IntPtr(retVal), false);
}



vtkGenericDataSetTessellator^ vtkGenericDataSetTessellator::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkGenericDataSetTessellator* retVal = static_cast<::vtkGenericDataSetTessellator*>(::vtkGenericDataSetTessellator::SafeDownCast(oWrap));
  return gcnew vtkGenericDataSetTessellator(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkGenericDataSetTessellator::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkGenericDataSetTessellator>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkGenericDataSetTessellator::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkGenericDataSetTessellator>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkGenericDataSetTessellator::SetKeepCellIds(int arg0)
{
  vtk::ConvertManagedToNative<::vtkGenericDataSetTessellator>(m_instance)->SetKeepCellIds(arg0);
}



int vtkGenericDataSetTessellator::GetKeepCellIds()
{
  int retVal = vtk::ConvertManagedToNative<::vtkGenericDataSetTessellator>(m_instance)->GetKeepCellIds();
  return retVal;
}



void vtkGenericDataSetTessellator::KeepCellIdsOn()
{
  vtk::ConvertManagedToNative<::vtkGenericDataSetTessellator>(m_instance)->KeepCellIdsOn();
}



void vtkGenericDataSetTessellator::KeepCellIdsOff()
{
  vtk::ConvertManagedToNative<::vtkGenericDataSetTessellator>(m_instance)->KeepCellIdsOff();
}



void vtkGenericDataSetTessellator::SetMerging(int arg0)
{
  vtk::ConvertManagedToNative<::vtkGenericDataSetTessellator>(m_instance)->SetMerging(arg0);
}



int vtkGenericDataSetTessellator::GetMerging()
{
  int retVal = vtk::ConvertManagedToNative<::vtkGenericDataSetTessellator>(m_instance)->GetMerging();
  return retVal;
}



void vtkGenericDataSetTessellator::MergingOn()
{
  vtk::ConvertManagedToNative<::vtkGenericDataSetTessellator>(m_instance)->MergingOn();
}



void vtkGenericDataSetTessellator::MergingOff()
{
  vtk::ConvertManagedToNative<::vtkGenericDataSetTessellator>(m_instance)->MergingOff();
}



void vtkGenericDataSetTessellator::SetLocator(vtkPointLocator^ locator)
{
  ::vtkPointLocator* locatorWrap = vtk::ConvertManagedToNative<::vtkPointLocator>(locator->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkGenericDataSetTessellator>(m_instance)->SetLocator(locatorWrap);
}



vtkPointLocator^ vtkGenericDataSetTessellator::GetLocator()
{
  ::vtkPointLocator* retVal = static_cast<::vtkPointLocator*>(vtk::ConvertManagedToNative<::vtkGenericDataSetTessellator>(m_instance)->GetLocator());
  return gcnew vtkPointLocator(IntPtr(retVal), false);
}



void vtkGenericDataSetTessellator::CreateDefaultLocator()
{
  vtk::ConvertManagedToNative<::vtkGenericDataSetTessellator>(m_instance)->CreateDefaultLocator();
}



unsigned long vtkGenericDataSetTessellator::GetMTime()
{
  unsigned long retVal = vtk::ConvertManagedToNative<::vtkGenericDataSetTessellator>(m_instance)->GetMTime();
  return retVal;
}



  vtkGenericDataSetTessellator::vtkGenericDataSetTessellator(System::IntPtr native, bool bConst) : vtkUnstructuredGridAlgorithm(native, bConst) {}



  vtkGenericDataSetTessellator::vtkGenericDataSetTessellator(bool donothing) : vtkUnstructuredGridAlgorithm(donothing) {}



  vtkGenericDataSetTessellator::vtkGenericDataSetTessellator() : vtkUnstructuredGridAlgorithm(false) {
  this->SetNativePointer(IntPtr(::vtkGenericDataSetTessellator::New()));
}



  vtkGenericDataSetTessellator::~vtkGenericDataSetTessellator() { }





} // end namespace vtkGenericFiltering
