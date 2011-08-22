

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkCollectionDotNet.h"
#include "vtkCollectionIteratorDotNet.h"
#include "vtkObjectBaseDotNet.h"

// native includes
#include "strstream"
#include "vtkCollection.h"
#include "vtkCollectionIterator.h"
#include "vtkObjectBase.h"

using namespace System;

namespace vtk {

System::String^ vtkCollection::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkCollection>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkCollection::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkCollection>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkCollection^ vtkCollection::NewInstance()
{
  ::vtkCollection* retVal = static_cast<::vtkCollection*>(vtk::ConvertManagedToNative<::vtkCollection>(m_instance)->NewInstance());
  return gcnew vtkCollection(IntPtr(retVal), false);
}



vtkCollection^ vtkCollection::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkCollection* retVal = static_cast<::vtkCollection*>(::vtkCollection::SafeDownCast(oWrap));
  return gcnew vtkCollection(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkCollection::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkCollection>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkCollection::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkCollection>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkCollection::AddItem(vtkObject^ arg0)
{
  ::vtkObject* arg0Wrap = vtk::ConvertManagedToNative<::vtkObject>(arg0->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkCollection>(m_instance)->AddItem(arg0Wrap);
}



void vtkCollection::ReplaceItem(int i, vtkObject^ arg1)
{
  ::vtkObject* arg1Wrap = vtk::ConvertManagedToNative<::vtkObject>(arg1->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkCollection>(m_instance)->ReplaceItem(i, arg1Wrap);
}



void vtkCollection::RemoveItem(int i)
{
  vtk::ConvertManagedToNative<::vtkCollection>(m_instance)->RemoveItem(i);
}



void vtkCollection::RemoveItem(vtkObject^ arg0)
{
  ::vtkObject* arg0Wrap = vtk::ConvertManagedToNative<::vtkObject>(arg0->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkCollection>(m_instance)->RemoveItem(arg0Wrap);
}



void vtkCollection::RemoveAllItems()
{
  vtk::ConvertManagedToNative<::vtkCollection>(m_instance)->RemoveAllItems();
}



int vtkCollection::IsItemPresent(vtkObject^ arg0)
{
  ::vtkObject* arg0Wrap = vtk::ConvertManagedToNative<::vtkObject>(arg0->GetNativePointer());
  int retVal = vtk::ConvertManagedToNative<::vtkCollection>(m_instance)->IsItemPresent(arg0Wrap);
  return retVal;
}



int vtkCollection::GetNumberOfItems()
{
  int retVal = vtk::ConvertManagedToNative<::vtkCollection>(m_instance)->GetNumberOfItems();
  return retVal;
}



void vtkCollection::InitTraversal()
{
  vtk::ConvertManagedToNative<::vtkCollection>(m_instance)->InitTraversal();
}



vtkObject^ vtkCollection::GetNextItemAsObject()
{
  ::vtkObject* retVal = static_cast<::vtkObject*>(vtk::ConvertManagedToNative<::vtkCollection>(m_instance)->GetNextItemAsObject());
  return gcnew vtkObject(IntPtr(retVal), false);
}



vtkObject^ vtkCollection::GetItemAsObject(int i)
{
  ::vtkObject* retVal = static_cast<::vtkObject*>(vtk::ConvertManagedToNative<::vtkCollection>(m_instance)->GetItemAsObject(i));
  return gcnew vtkObject(IntPtr(retVal), false);
}



vtkCollectionIterator^ vtkCollection::NewIterator()
{
  ::vtkCollectionIterator* retVal = static_cast<::vtkCollectionIterator*>(vtk::ConvertManagedToNative<::vtkCollection>(m_instance)->NewIterator());
  return gcnew vtkCollectionIterator(IntPtr(retVal), false);
}



void vtkCollection::Register(vtkObjectBase^ o)
{
  ::vtkObjectBase* oWrap = static_cast<::vtkObjectBase*>(o->GetNativePointer().ToPointer());
  vtk::ConvertManagedToNative<::vtkCollection>(m_instance)->Register(oWrap);
}



void vtkCollection::UnRegister(vtkObjectBase^ o)
{
  ::vtkObjectBase* oWrap = static_cast<::vtkObjectBase*>(o->GetNativePointer().ToPointer());
  vtk::ConvertManagedToNative<::vtkCollection>(m_instance)->UnRegister(oWrap);
}



  vtkCollection::vtkCollection(System::IntPtr native, bool bConst) : vtkObject(native, bConst) {}



  vtkCollection::vtkCollection(bool donothing) : vtkObject(donothing) {}



  vtkCollection::vtkCollection() : vtkObject(false) {
  this->SetNativePointer(IntPtr(::vtkCollection::New()));
}



  vtkCollection::~vtkCollection() { }





} // end namespace vtkCommon
