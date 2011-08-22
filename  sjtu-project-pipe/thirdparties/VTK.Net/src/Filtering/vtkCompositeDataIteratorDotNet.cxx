

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkCompositeDataIteratorDotNet.h"
#include "vtkDataObjectDotNet.h"

// native includes
#include "strstream"
#include "vtkCompositeDataIterator.h"
#include "vtkDataObject.h"

using namespace System;

namespace vtk {

System::String^ vtkCompositeDataIterator::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkCompositeDataIterator>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkCompositeDataIterator::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkCompositeDataIterator>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkCompositeDataIterator^ vtkCompositeDataIterator::NewInstance()
{
  ::vtkCompositeDataIterator* retVal = static_cast<::vtkCompositeDataIterator*>(vtk::ConvertManagedToNative<::vtkCompositeDataIterator>(m_instance)->NewInstance());
  return gcnew vtkCompositeDataIterator(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkCompositeDataIterator::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkCompositeDataIterator>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkCompositeDataIterator::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkCompositeDataIterator>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkCompositeDataIterator::InitTraversal()
{
  vtk::ConvertManagedToNative<::vtkCompositeDataIterator>(m_instance)->InitTraversal();
}



void vtkCompositeDataIterator::GoToFirstItem()
{
  vtk::ConvertManagedToNative<::vtkCompositeDataIterator>(m_instance)->GoToFirstItem();
}



void vtkCompositeDataIterator::GoToNextItem()
{
  vtk::ConvertManagedToNative<::vtkCompositeDataIterator>(m_instance)->GoToNextItem();
}



int vtkCompositeDataIterator::IsDoneWithTraversal()
{
  int retVal = vtk::ConvertManagedToNative<::vtkCompositeDataIterator>(m_instance)->IsDoneWithTraversal();
  return retVal;
}



vtkDataObject^ vtkCompositeDataIterator::GetCurrentDataObject()
{
  ::vtkDataObject* retVal = static_cast<::vtkDataObject*>(vtk::ConvertManagedToNative<::vtkCompositeDataIterator>(m_instance)->GetCurrentDataObject());
  return gcnew vtkDataObject(IntPtr(retVal), false);
}



  vtkCompositeDataIterator::vtkCompositeDataIterator(System::IntPtr native, bool bConst) : vtkObject(native, bConst) {}



  vtkCompositeDataIterator::vtkCompositeDataIterator(bool donothing) : vtkObject(donothing) {}



  vtkCompositeDataIterator::vtkCompositeDataIterator() : vtkObject(false) {
  this->SetNativePointer(IntPtr(::vtkCompositeDataIterator::New()));
}



  vtkCompositeDataIterator::~vtkCompositeDataIterator() { }





} // end namespace vtkFiltering
