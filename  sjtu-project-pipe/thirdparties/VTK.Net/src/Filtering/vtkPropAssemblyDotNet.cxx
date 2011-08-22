

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkPropAssemblyDotNet.h"
#include "vtkViewportDotNet.h"

// native includes
#include "strstream"
#include "vtkPropAssembly.h"
#include "vtkAssemblyPath.h"
#include "vtkObject.h"
#include "vtkPropCollection.h"
#include "vtkViewport.h"
#include "vtkWindow.h"

using namespace System;

namespace vtk {

System::String^ vtkPropAssembly::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkPropAssembly>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkPropAssembly::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkPropAssembly>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkPropAssembly^ vtkPropAssembly::NewInstance()
{
  ::vtkPropAssembly* retVal = static_cast<::vtkPropAssembly*>(vtk::ConvertManagedToNative<::vtkPropAssembly>(m_instance)->NewInstance());
  return gcnew vtkPropAssembly(IntPtr(retVal), false);
}



vtkPropAssembly^ vtkPropAssembly::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkPropAssembly* retVal = static_cast<::vtkPropAssembly*>(::vtkPropAssembly::SafeDownCast(oWrap));
  return gcnew vtkPropAssembly(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkPropAssembly::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkPropAssembly>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkPropAssembly::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkPropAssembly>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkPropAssembly::AddPart(vtkProp^ arg0)
{
  ::vtkProp* arg0Wrap = vtk::ConvertManagedToNative<::vtkProp>(arg0->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkPropAssembly>(m_instance)->AddPart(arg0Wrap);
}



void vtkPropAssembly::RemovePart(vtkProp^ arg0)
{
  ::vtkProp* arg0Wrap = vtk::ConvertManagedToNative<::vtkProp>(arg0->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkPropAssembly>(m_instance)->RemovePart(arg0Wrap);
}



vtkPropCollection^ vtkPropAssembly::GetParts()
{
  ::vtkPropCollection* retVal = static_cast<::vtkPropCollection*>(vtk::ConvertManagedToNative<::vtkPropAssembly>(m_instance)->GetParts());
  return gcnew vtkPropCollection(IntPtr(retVal), false);
}



int vtkPropAssembly::RenderOpaqueGeometry(vtkViewport^ ren)
{
  ::vtkViewport* renWrap = vtk::ConvertManagedToNative<::vtkViewport>(ren->GetNativePointer());
  int retVal = vtk::ConvertManagedToNative<::vtkPropAssembly>(m_instance)->RenderOpaqueGeometry(renWrap);
  return retVal;
}



int vtkPropAssembly::RenderTranslucentGeometry(vtkViewport^ ren)
{
  ::vtkViewport* renWrap = vtk::ConvertManagedToNative<::vtkViewport>(ren->GetNativePointer());
  int retVal = vtk::ConvertManagedToNative<::vtkPropAssembly>(m_instance)->RenderTranslucentGeometry(renWrap);
  return retVal;
}



int vtkPropAssembly::RenderOverlay(vtkViewport^ arg0)
{
  ::vtkViewport* arg0Wrap = vtk::ConvertManagedToNative<::vtkViewport>(arg0->GetNativePointer());
  int retVal = vtk::ConvertManagedToNative<::vtkPropAssembly>(m_instance)->RenderOverlay(arg0Wrap);
  return retVal;
}



void vtkPropAssembly::ReleaseGraphicsResources(vtkWindow^ arg0)
{
  ::vtkWindow* arg0Wrap = vtk::ConvertManagedToNative<::vtkWindow>(arg0->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkPropAssembly>(m_instance)->ReleaseGraphicsResources(arg0Wrap);
}



array<double>^ vtkPropAssembly::GetBounds()
{
  const double* retVal = vtk::ConvertManagedToNative<::vtkPropAssembly>(m_instance)->GetBounds();
  array<double>^ mRetVal = gcnew array<double>(6);
  for (size_t cprIdx=0; cprIdx<6; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



void vtkPropAssembly::ShallowCopy(vtkProp^ Prop)
{
  ::vtkProp* PropWrap = vtk::ConvertManagedToNative<::vtkProp>(Prop->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkPropAssembly>(m_instance)->ShallowCopy(PropWrap);
}



unsigned long vtkPropAssembly::GetMTime()
{
  unsigned long retVal = vtk::ConvertManagedToNative<::vtkPropAssembly>(m_instance)->GetMTime();
  return retVal;
}



void vtkPropAssembly::InitPathTraversal()
{
  vtk::ConvertManagedToNative<::vtkPropAssembly>(m_instance)->InitPathTraversal();
}



vtkAssemblyPath^ vtkPropAssembly::GetNextPath()
{
  ::vtkAssemblyPath* retVal = static_cast<::vtkAssemblyPath*>(vtk::ConvertManagedToNative<::vtkPropAssembly>(m_instance)->GetNextPath());
  return gcnew vtkAssemblyPath(IntPtr(retVal), false);
}



int vtkPropAssembly::GetNumberOfPaths()
{
  int retVal = vtk::ConvertManagedToNative<::vtkPropAssembly>(m_instance)->GetNumberOfPaths();
  return retVal;
}



  vtkPropAssembly::vtkPropAssembly(System::IntPtr native, bool bConst) : vtkProp(native, bConst) {}



  vtkPropAssembly::vtkPropAssembly(bool donothing) : vtkProp(donothing) {}



  vtkPropAssembly::vtkPropAssembly() : vtkProp(false) {
  this->SetNativePointer(IntPtr(::vtkPropAssembly::New()));
}



  vtkPropAssembly::~vtkPropAssembly() { }





} // end namespace vtkFiltering
