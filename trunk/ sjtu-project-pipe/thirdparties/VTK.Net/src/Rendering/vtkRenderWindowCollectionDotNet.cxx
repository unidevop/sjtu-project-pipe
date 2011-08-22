

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkRenderWindowCollectionDotNet.h"
#include "vtkRenderWindowDotNet.h"

// native includes
#include "strstream"
#include "vtkRenderWindowCollection.h"
#include "vtkObject.h"
#include "vtkRenderWindow.h"

using namespace System;

namespace vtk {

System::String^ vtkRenderWindowCollection::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkRenderWindowCollection>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkRenderWindowCollection::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkRenderWindowCollection>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkRenderWindowCollection^ vtkRenderWindowCollection::NewInstance()
{
  ::vtkRenderWindowCollection* retVal = static_cast<::vtkRenderWindowCollection*>(vtk::ConvertManagedToNative<::vtkRenderWindowCollection>(m_instance)->NewInstance());
  return gcnew vtkRenderWindowCollection(IntPtr(retVal), false);
}



vtkRenderWindowCollection^ vtkRenderWindowCollection::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkRenderWindowCollection* retVal = static_cast<::vtkRenderWindowCollection*>(::vtkRenderWindowCollection::SafeDownCast(oWrap));
  return gcnew vtkRenderWindowCollection(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkRenderWindowCollection::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkRenderWindowCollection>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkRenderWindowCollection::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkRenderWindowCollection>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkRenderWindowCollection::AddItem(vtkRenderWindow^ a)
{
  ::vtkRenderWindow* aWrap = vtk::ConvertManagedToNative<::vtkRenderWindow>(a->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkRenderWindowCollection>(m_instance)->AddItem(aWrap);
}



vtkRenderWindow^ vtkRenderWindowCollection::GetNextItem()
{
  ::vtkRenderWindow* retVal = static_cast<::vtkRenderWindow*>(vtk::ConvertManagedToNative<::vtkRenderWindowCollection>(m_instance)->GetNextItem());
  return gcnew vtkRenderWindow(IntPtr(retVal), false);
}



  vtkRenderWindowCollection::vtkRenderWindowCollection(System::IntPtr native, bool bConst) : vtkCollection(native, bConst) {}



  vtkRenderWindowCollection::vtkRenderWindowCollection(bool donothing) : vtkCollection(donothing) {}



  vtkRenderWindowCollection::vtkRenderWindowCollection() : vtkCollection(false) {
  this->SetNativePointer(IntPtr(::vtkRenderWindowCollection::New()));
}



  vtkRenderWindowCollection::~vtkRenderWindowCollection() { }





} // end namespace vtkRendering
