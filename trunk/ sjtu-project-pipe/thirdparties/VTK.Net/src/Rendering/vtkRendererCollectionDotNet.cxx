

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkRendererCollectionDotNet.h"
#include "vtkRendererDotNet.h"

// native includes
#include "strstream"
#include "vtkRendererCollection.h"
#include "vtkObject.h"
#include "vtkRenderer.h"

using namespace System;

namespace vtk {

System::String^ vtkRendererCollection::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkRendererCollection>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkRendererCollection::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkRendererCollection>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkRendererCollection^ vtkRendererCollection::NewInstance()
{
  ::vtkRendererCollection* retVal = static_cast<::vtkRendererCollection*>(vtk::ConvertManagedToNative<::vtkRendererCollection>(m_instance)->NewInstance());
  return gcnew vtkRendererCollection(IntPtr(retVal), false);
}



vtkRendererCollection^ vtkRendererCollection::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkRendererCollection* retVal = static_cast<::vtkRendererCollection*>(::vtkRendererCollection::SafeDownCast(oWrap));
  return gcnew vtkRendererCollection(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkRendererCollection::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkRendererCollection>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkRendererCollection::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkRendererCollection>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkRendererCollection::AddItem(vtkRenderer^ a)
{
  ::vtkRenderer* aWrap = vtk::ConvertManagedToNative<::vtkRenderer>(a->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkRendererCollection>(m_instance)->AddItem(aWrap);
}



vtkRenderer^ vtkRendererCollection::GetNextItem()
{
  ::vtkRenderer* retVal = static_cast<::vtkRenderer*>(vtk::ConvertManagedToNative<::vtkRendererCollection>(m_instance)->GetNextItem());
  return gcnew vtkRenderer(IntPtr(retVal), false);
}



void vtkRendererCollection::Render()
{
  vtk::ConvertManagedToNative<::vtkRendererCollection>(m_instance)->Render();
}



vtkRenderer^ vtkRendererCollection::GetFirstRenderer()
{
  ::vtkRenderer* retVal = static_cast<::vtkRenderer*>(vtk::ConvertManagedToNative<::vtkRendererCollection>(m_instance)->GetFirstRenderer());
  return gcnew vtkRenderer(IntPtr(retVal), false);
}



  vtkRendererCollection::vtkRendererCollection(System::IntPtr native, bool bConst) : vtkCollection(native, bConst) {}



  vtkRendererCollection::vtkRendererCollection(bool donothing) : vtkCollection(donothing) {}



  vtkRendererCollection::vtkRendererCollection() : vtkCollection(false) {
  this->SetNativePointer(IntPtr(::vtkRendererCollection::New()));
}



  vtkRendererCollection::~vtkRendererCollection() { }





} // end namespace vtkRendering
