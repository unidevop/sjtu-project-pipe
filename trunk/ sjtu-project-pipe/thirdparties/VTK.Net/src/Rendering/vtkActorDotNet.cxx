

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkActorDotNet.h"
#include "vtkMapperDotNet.h"
#include "vtkPropertyDotNet.h"
#include "vtkRendererDotNet.h"
#include "vtkTextureDotNet.h"

// native includes
#include "strstream"
#include "vtkActor.h"
#include "vtkMapper.h"
#include "vtkObject.h"
#include "vtkProp.h"
#include "vtkPropCollection.h"
#include "vtkProperty.h"
#include "vtkRenderer.h"
#include "vtkTexture.h"
#include "vtkViewport.h"
#include "vtkWindow.h"

using namespace System;

namespace vtk {

System::String^ vtkActor::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkActor>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkActor::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkActor>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkActor^ vtkActor::NewInstance()
{
  ::vtkActor* retVal = static_cast<::vtkActor*>(vtk::ConvertManagedToNative<::vtkActor>(m_instance)->NewInstance());
  return gcnew vtkActor(IntPtr(retVal), false);
}



vtkActor^ vtkActor::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkActor* retVal = static_cast<::vtkActor*>(::vtkActor::SafeDownCast(oWrap));
  return gcnew vtkActor(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkActor::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkActor>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkActor::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkActor>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkActor::GetActors(vtkPropCollection^ arg0)
{
  ::vtkPropCollection* arg0Wrap = vtk::ConvertManagedToNative<::vtkPropCollection>(arg0->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkActor>(m_instance)->GetActors(arg0Wrap);
}



int vtkActor::RenderOpaqueGeometry(vtkViewport^ viewport)
{
  ::vtkViewport* viewportWrap = vtk::ConvertManagedToNative<::vtkViewport>(viewport->GetNativePointer());
  int retVal = vtk::ConvertManagedToNative<::vtkActor>(m_instance)->RenderOpaqueGeometry(viewportWrap);
  return retVal;
}



int vtkActor::RenderTranslucentGeometry(vtkViewport^ viewport)
{
  ::vtkViewport* viewportWrap = vtk::ConvertManagedToNative<::vtkViewport>(viewport->GetNativePointer());
  int retVal = vtk::ConvertManagedToNative<::vtkActor>(m_instance)->RenderTranslucentGeometry(viewportWrap);
  return retVal;
}



void vtkActor::Render(vtkRenderer^ arg0, vtkMapper^ arg1)
{
  ::vtkRenderer* arg0Wrap = vtk::ConvertManagedToNative<::vtkRenderer>(arg0->GetNativePointer());
  ::vtkMapper* arg1Wrap = vtk::ConvertManagedToNative<::vtkMapper>(arg1->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkActor>(m_instance)->Render(arg0Wrap, arg1Wrap);
}



void vtkActor::ShallowCopy(vtkProp^ prop)
{
  ::vtkProp* propWrap = vtk::ConvertManagedToNative<::vtkProp>(prop->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkActor>(m_instance)->ShallowCopy(propWrap);
}



void vtkActor::ReleaseGraphicsResources(vtkWindow^ arg0)
{
  ::vtkWindow* arg0Wrap = vtk::ConvertManagedToNative<::vtkWindow>(arg0->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkActor>(m_instance)->ReleaseGraphicsResources(arg0Wrap);
}



void vtkActor::SetProperty(vtkProperty^ lut)
{
  ::vtkProperty* lutWrap = vtk::ConvertManagedToNative<::vtkProperty>(lut->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkActor>(m_instance)->SetProperty(lutWrap);
}



vtkProperty^ vtkActor::GetProperty()
{
  ::vtkProperty* retVal = static_cast<::vtkProperty*>(vtk::ConvertManagedToNative<::vtkActor>(m_instance)->GetProperty());
  return gcnew vtkProperty(IntPtr(retVal), false);
}



vtkProperty^ vtkActor::MakeProperty()
{
  ::vtkProperty* retVal = static_cast<::vtkProperty*>(vtk::ConvertManagedToNative<::vtkActor>(m_instance)->MakeProperty());
  return gcnew vtkProperty(IntPtr(retVal), false);
}



void vtkActor::SetBackfaceProperty(vtkProperty^ lut)
{
  ::vtkProperty* lutWrap = vtk::ConvertManagedToNative<::vtkProperty>(lut->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkActor>(m_instance)->SetBackfaceProperty(lutWrap);
}



vtkProperty^ vtkActor::GetBackfaceProperty()
{
  ::vtkProperty* retVal = static_cast<::vtkProperty*>(vtk::ConvertManagedToNative<::vtkActor>(m_instance)->GetBackfaceProperty());
  return gcnew vtkProperty(IntPtr(retVal), false);
}



void vtkActor::SetTexture(vtkTexture^ arg0)
{
  ::vtkTexture* arg0Wrap = vtk::ConvertManagedToNative<::vtkTexture>(arg0->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkActor>(m_instance)->SetTexture(arg0Wrap);
}



vtkTexture^ vtkActor::GetTexture()
{
  ::vtkTexture* retVal = static_cast<::vtkTexture*>(vtk::ConvertManagedToNative<::vtkActor>(m_instance)->GetTexture());
  return gcnew vtkTexture(IntPtr(retVal), false);
}



void vtkActor::SetMapper(vtkMapper^ arg0)
{
  ::vtkMapper* arg0Wrap = vtk::ConvertManagedToNative<::vtkMapper>(arg0->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkActor>(m_instance)->SetMapper(arg0Wrap);
}



vtkMapper^ vtkActor::GetMapper()
{
  ::vtkMapper* retVal = static_cast<::vtkMapper*>(vtk::ConvertManagedToNative<::vtkActor>(m_instance)->GetMapper());
  return gcnew vtkMapper(IntPtr(retVal), false);
}



void vtkActor::GetBounds(array<double>^ bounds)
{
  pin_ptr<double> boundsPin = &bounds[0];
  double* nativeboundsPin = boundsPin;
  vtk::ConvertManagedToNative<::vtkActor>(m_instance)->GetBounds(nativeboundsPin);
}



array<double>^ vtkActor::GetBounds()
{
  const double* retVal = vtk::ConvertManagedToNative<::vtkActor>(m_instance)->GetBounds();
  array<double>^ mRetVal = gcnew array<double>(6);
  for (size_t cprIdx=0; cprIdx<6; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



void vtkActor::ApplyProperties()
{
  vtk::ConvertManagedToNative<::vtkActor>(m_instance)->ApplyProperties();
}



unsigned long vtkActor::GetMTime()
{
  unsigned long retVal = vtk::ConvertManagedToNative<::vtkActor>(m_instance)->GetMTime();
  return retVal;
}



unsigned long vtkActor::GetRedrawMTime()
{
  unsigned long retVal = vtk::ConvertManagedToNative<::vtkActor>(m_instance)->GetRedrawMTime();
  return retVal;
}



void vtkActor::InitPartTraversal()
{
  vtk::ConvertManagedToNative<::vtkActor>(m_instance)->InitPartTraversal();
}



vtkActor^ vtkActor::GetNextPart()
{
  ::vtkActor* retVal = static_cast<::vtkActor*>(vtk::ConvertManagedToNative<::vtkActor>(m_instance)->GetNextPart());
  return gcnew vtkActor(IntPtr(retVal), false);
}



int vtkActor::GetNumberOfParts()
{
  int retVal = vtk::ConvertManagedToNative<::vtkActor>(m_instance)->GetNumberOfParts();
  return retVal;
}



  vtkActor::vtkActor(System::IntPtr native, bool bConst) : vtkProp3D(native, bConst) {}



  vtkActor::vtkActor(bool donothing) : vtkProp3D(donothing) {}



  vtkActor::vtkActor() : vtkProp3D(false) {
  this->SetNativePointer(IntPtr(::vtkActor::New()));
}



  vtkActor::~vtkActor() { }





} // end namespace vtkRendering
