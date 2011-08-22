

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkAssemblyDotNet.h"
#include "vtkProp3DCollectionDotNet.h"

// native includes
#include "strstream"
#include "vtkAssembly.h"
#include "vtkAssemblyPath.h"
#include "vtkObject.h"
#include "vtkProp.h"
#include "vtkProp3DCollection.h"
#include "vtkPropCollection.h"
#include "vtkViewport.h"
#include "vtkWindow.h"

using namespace System;

namespace vtk {

System::String^ vtkAssembly::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkAssembly>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkAssembly::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkAssembly>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkAssembly^ vtkAssembly::NewInstance()
{
  ::vtkAssembly* retVal = static_cast<::vtkAssembly*>(vtk::ConvertManagedToNative<::vtkAssembly>(m_instance)->NewInstance());
  return gcnew vtkAssembly(IntPtr(retVal), false);
}



vtkAssembly^ vtkAssembly::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkAssembly* retVal = static_cast<::vtkAssembly*>(::vtkAssembly::SafeDownCast(oWrap));
  return gcnew vtkAssembly(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkAssembly::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkAssembly>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkAssembly::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkAssembly>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkAssembly::AddPart(vtkProp3D^ arg0)
{
  ::vtkProp3D* arg0Wrap = vtk::ConvertManagedToNative<::vtkProp3D>(arg0->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkAssembly>(m_instance)->AddPart(arg0Wrap);
}



void vtkAssembly::RemovePart(vtkProp3D^ arg0)
{
  ::vtkProp3D* arg0Wrap = vtk::ConvertManagedToNative<::vtkProp3D>(arg0->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkAssembly>(m_instance)->RemovePart(arg0Wrap);
}



vtkProp3DCollection^ vtkAssembly::GetParts()
{
  ::vtkProp3DCollection* retVal = static_cast<::vtkProp3DCollection*>(vtk::ConvertManagedToNative<::vtkAssembly>(m_instance)->GetParts());
  return gcnew vtkProp3DCollection(IntPtr(retVal), false);
}



void vtkAssembly::GetActors(vtkPropCollection^ arg0)
{
  ::vtkPropCollection* arg0Wrap = vtk::ConvertManagedToNative<::vtkPropCollection>(arg0->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkAssembly>(m_instance)->GetActors(arg0Wrap);
}



void vtkAssembly::GetVolumes(vtkPropCollection^ arg0)
{
  ::vtkPropCollection* arg0Wrap = vtk::ConvertManagedToNative<::vtkPropCollection>(arg0->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkAssembly>(m_instance)->GetVolumes(arg0Wrap);
}



int vtkAssembly::RenderOpaqueGeometry(vtkViewport^ ren)
{
  ::vtkViewport* renWrap = vtk::ConvertManagedToNative<::vtkViewport>(ren->GetNativePointer());
  int retVal = vtk::ConvertManagedToNative<::vtkAssembly>(m_instance)->RenderOpaqueGeometry(renWrap);
  return retVal;
}



int vtkAssembly::RenderTranslucentGeometry(vtkViewport^ ren)
{
  ::vtkViewport* renWrap = vtk::ConvertManagedToNative<::vtkViewport>(ren->GetNativePointer());
  int retVal = vtk::ConvertManagedToNative<::vtkAssembly>(m_instance)->RenderTranslucentGeometry(renWrap);
  return retVal;
}



void vtkAssembly::ReleaseGraphicsResources(vtkWindow^ arg0)
{
  ::vtkWindow* arg0Wrap = vtk::ConvertManagedToNative<::vtkWindow>(arg0->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkAssembly>(m_instance)->ReleaseGraphicsResources(arg0Wrap);
}



void vtkAssembly::InitPathTraversal()
{
  vtk::ConvertManagedToNative<::vtkAssembly>(m_instance)->InitPathTraversal();
}



vtkAssemblyPath^ vtkAssembly::GetNextPath()
{
  ::vtkAssemblyPath* retVal = static_cast<::vtkAssemblyPath*>(vtk::ConvertManagedToNative<::vtkAssembly>(m_instance)->GetNextPath());
  return gcnew vtkAssemblyPath(IntPtr(retVal), false);
}



int vtkAssembly::GetNumberOfPaths()
{
  int retVal = vtk::ConvertManagedToNative<::vtkAssembly>(m_instance)->GetNumberOfPaths();
  return retVal;
}



void vtkAssembly::GetBounds(array<double>^ bounds)
{
  pin_ptr<double> boundsPin = &bounds[0];
  double* nativeboundsPin = boundsPin;
  vtk::ConvertManagedToNative<::vtkAssembly>(m_instance)->GetBounds(nativeboundsPin);
}



array<double>^ vtkAssembly::GetBounds()
{
  const double* retVal = vtk::ConvertManagedToNative<::vtkAssembly>(m_instance)->GetBounds();
  array<double>^ mRetVal = gcnew array<double>(6);
  for (size_t cprIdx=0; cprIdx<6; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



unsigned long vtkAssembly::GetMTime()
{
  unsigned long retVal = vtk::ConvertManagedToNative<::vtkAssembly>(m_instance)->GetMTime();
  return retVal;
}



void vtkAssembly::ShallowCopy(vtkProp^ prop)
{
  ::vtkProp* propWrap = vtk::ConvertManagedToNative<::vtkProp>(prop->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkAssembly>(m_instance)->ShallowCopy(propWrap);
}



  vtkAssembly::vtkAssembly(System::IntPtr native, bool bConst) : vtkProp3D(native, bConst) {}



  vtkAssembly::vtkAssembly(bool donothing) : vtkProp3D(donothing) {}



  vtkAssembly::vtkAssembly() : vtkProp3D(false) {
  this->SetNativePointer(IntPtr(::vtkAssembly::New()));
}



  vtkAssembly::~vtkAssembly() { }





} // end namespace vtkRendering
