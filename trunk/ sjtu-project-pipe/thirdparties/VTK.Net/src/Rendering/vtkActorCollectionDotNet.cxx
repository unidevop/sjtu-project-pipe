

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkActorCollectionDotNet.h"
#include "vtkActorDotNet.h"
#include "vtkPropertyDotNet.h"

// native includes
#include "strstream"
#include "vtkActorCollection.h"
#include "vtkActor.h"
#include "vtkObject.h"
#include "vtkProperty.h"

using namespace System;

namespace vtk {

System::String^ vtkActorCollection::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkActorCollection>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkActorCollection::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkActorCollection>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkActorCollection^ vtkActorCollection::NewInstance()
{
  ::vtkActorCollection* retVal = static_cast<::vtkActorCollection*>(vtk::ConvertManagedToNative<::vtkActorCollection>(m_instance)->NewInstance());
  return gcnew vtkActorCollection(IntPtr(retVal), false);
}



vtkActorCollection^ vtkActorCollection::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkActorCollection* retVal = static_cast<::vtkActorCollection*>(::vtkActorCollection::SafeDownCast(oWrap));
  return gcnew vtkActorCollection(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkActorCollection::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkActorCollection>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkActorCollection::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkActorCollection>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkActorCollection::AddItem(vtkActor^ a)
{
  ::vtkActor* aWrap = vtk::ConvertManagedToNative<::vtkActor>(a->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkActorCollection>(m_instance)->AddItem(aWrap);
}



vtkActor^ vtkActorCollection::GetNextActor()
{
  ::vtkActor* retVal = static_cast<::vtkActor*>(vtk::ConvertManagedToNative<::vtkActorCollection>(m_instance)->GetNextActor());
  return gcnew vtkActor(IntPtr(retVal), false);
}



vtkActor^ vtkActorCollection::GetLastActor()
{
  ::vtkActor* retVal = static_cast<::vtkActor*>(vtk::ConvertManagedToNative<::vtkActorCollection>(m_instance)->GetLastActor());
  return gcnew vtkActor(IntPtr(retVal), false);
}



vtkActor^ vtkActorCollection::GetNextItem()
{
  ::vtkActor* retVal = static_cast<::vtkActor*>(vtk::ConvertManagedToNative<::vtkActorCollection>(m_instance)->GetNextItem());
  return gcnew vtkActor(IntPtr(retVal), false);
}



vtkActor^ vtkActorCollection::GetLastItem()
{
  ::vtkActor* retVal = static_cast<::vtkActor*>(vtk::ConvertManagedToNative<::vtkActorCollection>(m_instance)->GetLastItem());
  return gcnew vtkActor(IntPtr(retVal), false);
}



void vtkActorCollection::ApplyProperties(vtkProperty^ p)
{
  ::vtkProperty* pWrap = vtk::ConvertManagedToNative<::vtkProperty>(p->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkActorCollection>(m_instance)->ApplyProperties(pWrap);
}



  vtkActorCollection::vtkActorCollection(System::IntPtr native, bool bConst) : vtkPropCollection(native, bConst) {}



  vtkActorCollection::vtkActorCollection(bool donothing) : vtkPropCollection(donothing) {}



  vtkActorCollection::vtkActorCollection() : vtkPropCollection(false) {
  this->SetNativePointer(IntPtr(::vtkActorCollection::New()));
}



  vtkActorCollection::~vtkActorCollection() { }





} // end namespace vtkRendering
