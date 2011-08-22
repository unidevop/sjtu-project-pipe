

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkLODActorDotNet.h"
#include "vtkMapperDotNet.h"
#include "vtkMapperCollectionDotNet.h"
#include "vtkRendererDotNet.h"

// native includes
#include "strstream"
#include "vtkLODActor.h"
#include "vtkMapper.h"
#include "vtkMapperCollection.h"
#include "vtkObject.h"
#include "vtkProp.h"
#include "vtkRenderer.h"
#include "vtkViewport.h"
#include "vtkWindow.h"

using namespace System;

namespace vtk {

System::String^ vtkLODActor::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkLODActor>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkLODActor::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkLODActor>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkLODActor^ vtkLODActor::NewInstance()
{
  ::vtkLODActor* retVal = static_cast<::vtkLODActor*>(vtk::ConvertManagedToNative<::vtkLODActor>(m_instance)->NewInstance());
  return gcnew vtkLODActor(IntPtr(retVal), false);
}



vtkLODActor^ vtkLODActor::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkLODActor* retVal = static_cast<::vtkLODActor*>(::vtkLODActor::SafeDownCast(oWrap));
  return gcnew vtkLODActor(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkLODActor::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkLODActor>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkLODActor::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkLODActor>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkLODActor::Render(vtkRenderer^ arg0, vtkMapper^ arg1)
{
  ::vtkRenderer* arg0Wrap = vtk::ConvertManagedToNative<::vtkRenderer>(arg0->GetNativePointer());
  ::vtkMapper* arg1Wrap = vtk::ConvertManagedToNative<::vtkMapper>(arg1->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkLODActor>(m_instance)->Render(arg0Wrap, arg1Wrap);
}



int vtkLODActor::RenderOpaqueGeometry(vtkViewport^ viewport)
{
  ::vtkViewport* viewportWrap = vtk::ConvertManagedToNative<::vtkViewport>(viewport->GetNativePointer());
  int retVal = vtk::ConvertManagedToNative<::vtkLODActor>(m_instance)->RenderOpaqueGeometry(viewportWrap);
  return retVal;
}



void vtkLODActor::ReleaseGraphicsResources(vtkWindow^ arg0)
{
  ::vtkWindow* arg0Wrap = vtk::ConvertManagedToNative<::vtkWindow>(arg0->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkLODActor>(m_instance)->ReleaseGraphicsResources(arg0Wrap);
}



void vtkLODActor::AddLODMapper(vtkMapper^ mapper)
{
  ::vtkMapper* mapperWrap = vtk::ConvertManagedToNative<::vtkMapper>(mapper->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkLODActor>(m_instance)->AddLODMapper(mapperWrap);
}



int vtkLODActor::GetNumberOfCloudPoints()
{
  int retVal = vtk::ConvertManagedToNative<::vtkLODActor>(m_instance)->GetNumberOfCloudPoints();
  return retVal;
}



void vtkLODActor::SetNumberOfCloudPoints(int arg0)
{
  vtk::ConvertManagedToNative<::vtkLODActor>(m_instance)->SetNumberOfCloudPoints(arg0);
}



vtkMapperCollection^ vtkLODActor::GetLODMappers()
{
  ::vtkMapperCollection* retVal = static_cast<::vtkMapperCollection*>(vtk::ConvertManagedToNative<::vtkLODActor>(m_instance)->GetLODMappers());
  return gcnew vtkMapperCollection(IntPtr(retVal), false);
}



void vtkLODActor::Modified()
{
  vtk::ConvertManagedToNative<::vtkLODActor>(m_instance)->Modified();
}



void vtkLODActor::ShallowCopy(vtkProp^ prop)
{
  ::vtkProp* propWrap = vtk::ConvertManagedToNative<::vtkProp>(prop->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkLODActor>(m_instance)->ShallowCopy(propWrap);
}



  vtkLODActor::vtkLODActor(System::IntPtr native, bool bConst) : vtkActor(native, bConst) {}



  vtkLODActor::vtkLODActor(bool donothing) : vtkActor(donothing) {}



  vtkLODActor::vtkLODActor() : vtkActor(false) {
  this->SetNativePointer(IntPtr(::vtkLODActor::New()));
}



  vtkLODActor::~vtkLODActor() { }





} // end namespace vtkRendering
