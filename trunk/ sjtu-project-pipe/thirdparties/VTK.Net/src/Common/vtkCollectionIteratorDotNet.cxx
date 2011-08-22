

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkCollectionIteratorDotNet.h"
#include "vtkCollectionDotNet.h"

// native includes
#include "strstream"
#include "vtkCollectionIterator.h"
#include "vtkCollection.h"

using namespace System;

namespace vtk {

System::String^ vtkCollectionIterator::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkCollectionIterator>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkCollectionIterator::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkCollectionIterator>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkCollectionIterator^ vtkCollectionIterator::NewInstance()
{
  ::vtkCollectionIterator* retVal = static_cast<::vtkCollectionIterator*>(vtk::ConvertManagedToNative<::vtkCollectionIterator>(m_instance)->NewInstance());
  return gcnew vtkCollectionIterator(IntPtr(retVal), false);
}



vtkCollectionIterator^ vtkCollectionIterator::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkCollectionIterator* retVal = static_cast<::vtkCollectionIterator*>(::vtkCollectionIterator::SafeDownCast(oWrap));
  return gcnew vtkCollectionIterator(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkCollectionIterator::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkCollectionIterator>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkCollectionIterator::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkCollectionIterator>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkCollectionIterator::SetCollection(vtkCollection^ arg0)
{
  ::vtkCollection* arg0Wrap = vtk::ConvertManagedToNative<::vtkCollection>(arg0->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkCollectionIterator>(m_instance)->SetCollection(arg0Wrap);
}



vtkCollection^ vtkCollectionIterator::GetCollection()
{
  ::vtkCollection* retVal = static_cast<::vtkCollection*>(vtk::ConvertManagedToNative<::vtkCollectionIterator>(m_instance)->GetCollection());
  return gcnew vtkCollection(IntPtr(retVal), false);
}



void vtkCollectionIterator::InitTraversal()
{
  vtk::ConvertManagedToNative<::vtkCollectionIterator>(m_instance)->InitTraversal();
}



void vtkCollectionIterator::GoToFirstItem()
{
  vtk::ConvertManagedToNative<::vtkCollectionIterator>(m_instance)->GoToFirstItem();
}



void vtkCollectionIterator::GoToNextItem()
{
  vtk::ConvertManagedToNative<::vtkCollectionIterator>(m_instance)->GoToNextItem();
}



int vtkCollectionIterator::IsDoneWithTraversal()
{
  int retVal = vtk::ConvertManagedToNative<::vtkCollectionIterator>(m_instance)->IsDoneWithTraversal();
  return retVal;
}



vtkObject^ vtkCollectionIterator::GetCurrentObject()
{
  ::vtkObject* retVal = static_cast<::vtkObject*>(vtk::ConvertManagedToNative<::vtkCollectionIterator>(m_instance)->GetCurrentObject());
  return gcnew vtkObject(IntPtr(retVal), false);
}



vtkObject^ vtkCollectionIterator::GetObject()
{
  ::vtkObject* retVal = static_cast<::vtkObject*>(vtk::ConvertManagedToNative<::vtkCollectionIterator>(m_instance)->GetObject());
  return gcnew vtkObject(IntPtr(retVal), false);
}



  vtkCollectionIterator::vtkCollectionIterator(System::IntPtr native, bool bConst) : vtkObject(native, bConst) {}



  vtkCollectionIterator::vtkCollectionIterator(bool donothing) : vtkObject(donothing) {}



  vtkCollectionIterator::vtkCollectionIterator() : vtkObject(false) {
  this->SetNativePointer(IntPtr(::vtkCollectionIterator::New()));
}



  vtkCollectionIterator::~vtkCollectionIterator() { }





} // end namespace vtkCommon
