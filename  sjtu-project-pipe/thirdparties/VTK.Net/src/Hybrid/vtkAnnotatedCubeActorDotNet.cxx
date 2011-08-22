

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkAnnotatedCubeActorDotNet.h"

// native includes
#include "strstream"
#include "vtkAnnotatedCubeActor.h"
#include "vtkObject.h"
#include "vtkProp.h"
#include "vtkPropCollection.h"
#include "vtkProperty.h"
#include "vtkViewport.h"
#include "vtkWindow.h"

using namespace System;

namespace vtk {

System::String^ vtkAnnotatedCubeActor::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkAnnotatedCubeActor>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkAnnotatedCubeActor::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkAnnotatedCubeActor>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkAnnotatedCubeActor^ vtkAnnotatedCubeActor::NewInstance()
{
  ::vtkAnnotatedCubeActor* retVal = static_cast<::vtkAnnotatedCubeActor*>(vtk::ConvertManagedToNative<::vtkAnnotatedCubeActor>(m_instance)->NewInstance());
  return gcnew vtkAnnotatedCubeActor(IntPtr(retVal), false);
}



vtkAnnotatedCubeActor^ vtkAnnotatedCubeActor::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkAnnotatedCubeActor* retVal = static_cast<::vtkAnnotatedCubeActor*>(::vtkAnnotatedCubeActor::SafeDownCast(oWrap));
  return gcnew vtkAnnotatedCubeActor(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkAnnotatedCubeActor::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkAnnotatedCubeActor>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkAnnotatedCubeActor::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkAnnotatedCubeActor>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkAnnotatedCubeActor::GetActors(vtkPropCollection^ arg0)
{
  ::vtkPropCollection* arg0Wrap = vtk::ConvertManagedToNative<::vtkPropCollection>(arg0->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkAnnotatedCubeActor>(m_instance)->GetActors(arg0Wrap);
}



int vtkAnnotatedCubeActor::RenderOpaqueGeometry(vtkViewport^ viewport)
{
  ::vtkViewport* viewportWrap = vtk::ConvertManagedToNative<::vtkViewport>(viewport->GetNativePointer());
  int retVal = vtk::ConvertManagedToNative<::vtkAnnotatedCubeActor>(m_instance)->RenderOpaqueGeometry(viewportWrap);
  return retVal;
}



int vtkAnnotatedCubeActor::RenderTranslucentGeometry(vtkViewport^ viewport)
{
  ::vtkViewport* viewportWrap = vtk::ConvertManagedToNative<::vtkViewport>(viewport->GetNativePointer());
  int retVal = vtk::ConvertManagedToNative<::vtkAnnotatedCubeActor>(m_instance)->RenderTranslucentGeometry(viewportWrap);
  return retVal;
}



void vtkAnnotatedCubeActor::ShallowCopy(vtkProp^ prop)
{
  ::vtkProp* propWrap = vtk::ConvertManagedToNative<::vtkProp>(prop->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkAnnotatedCubeActor>(m_instance)->ShallowCopy(propWrap);
}



void vtkAnnotatedCubeActor::ReleaseGraphicsResources(vtkWindow^ arg0)
{
  ::vtkWindow* arg0Wrap = vtk::ConvertManagedToNative<::vtkWindow>(arg0->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkAnnotatedCubeActor>(m_instance)->ReleaseGraphicsResources(arg0Wrap);
}



void vtkAnnotatedCubeActor::GetBounds(array<double>^ bounds)
{
  pin_ptr<double> boundsPin = &bounds[0];
  double* nativeboundsPin = boundsPin;
  vtk::ConvertManagedToNative<::vtkAnnotatedCubeActor>(m_instance)->GetBounds(nativeboundsPin);
}



unsigned long vtkAnnotatedCubeActor::GetMTime()
{
  unsigned long retVal = vtk::ConvertManagedToNative<::vtkAnnotatedCubeActor>(m_instance)->GetMTime();
  return retVal;
}



unsigned long vtkAnnotatedCubeActor::GetRedrawMTime()
{
  unsigned long retVal = vtk::ConvertManagedToNative<::vtkAnnotatedCubeActor>(m_instance)->GetRedrawMTime();
  return retVal;
}



void vtkAnnotatedCubeActor::SetFaceTextScale(double arg0)
{
  vtk::ConvertManagedToNative<::vtkAnnotatedCubeActor>(m_instance)->SetFaceTextScale(arg0);
}



double vtkAnnotatedCubeActor::GetFaceTextScale()
{
  double retVal = vtk::ConvertManagedToNative<::vtkAnnotatedCubeActor>(m_instance)->GetFaceTextScale();
  return retVal;
}



vtkProperty^ vtkAnnotatedCubeActor::GetXPlusFaceProperty()
{
  ::vtkProperty* retVal = static_cast<::vtkProperty*>(vtk::ConvertManagedToNative<::vtkAnnotatedCubeActor>(m_instance)->GetXPlusFaceProperty());
  return gcnew vtkProperty(IntPtr(retVal), false);
}



vtkProperty^ vtkAnnotatedCubeActor::GetXMinusFaceProperty()
{
  ::vtkProperty* retVal = static_cast<::vtkProperty*>(vtk::ConvertManagedToNative<::vtkAnnotatedCubeActor>(m_instance)->GetXMinusFaceProperty());
  return gcnew vtkProperty(IntPtr(retVal), false);
}



vtkProperty^ vtkAnnotatedCubeActor::GetYPlusFaceProperty()
{
  ::vtkProperty* retVal = static_cast<::vtkProperty*>(vtk::ConvertManagedToNative<::vtkAnnotatedCubeActor>(m_instance)->GetYPlusFaceProperty());
  return gcnew vtkProperty(IntPtr(retVal), false);
}



vtkProperty^ vtkAnnotatedCubeActor::GetYMinusFaceProperty()
{
  ::vtkProperty* retVal = static_cast<::vtkProperty*>(vtk::ConvertManagedToNative<::vtkAnnotatedCubeActor>(m_instance)->GetYMinusFaceProperty());
  return gcnew vtkProperty(IntPtr(retVal), false);
}



vtkProperty^ vtkAnnotatedCubeActor::GetZPlusFaceProperty()
{
  ::vtkProperty* retVal = static_cast<::vtkProperty*>(vtk::ConvertManagedToNative<::vtkAnnotatedCubeActor>(m_instance)->GetZPlusFaceProperty());
  return gcnew vtkProperty(IntPtr(retVal), false);
}



vtkProperty^ vtkAnnotatedCubeActor::GetZMinusFaceProperty()
{
  ::vtkProperty* retVal = static_cast<::vtkProperty*>(vtk::ConvertManagedToNative<::vtkAnnotatedCubeActor>(m_instance)->GetZMinusFaceProperty());
  return gcnew vtkProperty(IntPtr(retVal), false);
}



vtkProperty^ vtkAnnotatedCubeActor::GetCubeProperty()
{
  ::vtkProperty* retVal = static_cast<::vtkProperty*>(vtk::ConvertManagedToNative<::vtkAnnotatedCubeActor>(m_instance)->GetCubeProperty());
  return gcnew vtkProperty(IntPtr(retVal), false);
}



vtkProperty^ vtkAnnotatedCubeActor::GetTextEdgesProperty()
{
  ::vtkProperty* retVal = static_cast<::vtkProperty*>(vtk::ConvertManagedToNative<::vtkAnnotatedCubeActor>(m_instance)->GetTextEdgesProperty());
  return gcnew vtkProperty(IntPtr(retVal), false);
}



void vtkAnnotatedCubeActor::SetXPlusFaceText(System::String^ arg0)
{
  char* arg0Wrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(arg0).ToPointer());
  vtk::ConvertManagedToNative<::vtkAnnotatedCubeActor>(m_instance)->SetXPlusFaceText(arg0Wrap);
  arg0->Remove(0,arg0->Length);
  arg0->Insert(0,System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(arg0Wrap)));
System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(arg0Wrap));
}



System::String^ vtkAnnotatedCubeActor::GetXPlusFaceText()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkAnnotatedCubeActor>(m_instance)->GetXPlusFaceText();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



void vtkAnnotatedCubeActor::SetXMinusFaceText(System::String^ arg0)
{
  char* arg0Wrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(arg0).ToPointer());
  vtk::ConvertManagedToNative<::vtkAnnotatedCubeActor>(m_instance)->SetXMinusFaceText(arg0Wrap);
  arg0->Remove(0,arg0->Length);
  arg0->Insert(0,System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(arg0Wrap)));
System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(arg0Wrap));
}



System::String^ vtkAnnotatedCubeActor::GetXMinusFaceText()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkAnnotatedCubeActor>(m_instance)->GetXMinusFaceText();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



void vtkAnnotatedCubeActor::SetYPlusFaceText(System::String^ arg0)
{
  char* arg0Wrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(arg0).ToPointer());
  vtk::ConvertManagedToNative<::vtkAnnotatedCubeActor>(m_instance)->SetYPlusFaceText(arg0Wrap);
  arg0->Remove(0,arg0->Length);
  arg0->Insert(0,System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(arg0Wrap)));
System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(arg0Wrap));
}



System::String^ vtkAnnotatedCubeActor::GetYPlusFaceText()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkAnnotatedCubeActor>(m_instance)->GetYPlusFaceText();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



void vtkAnnotatedCubeActor::SetYMinusFaceText(System::String^ arg0)
{
  char* arg0Wrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(arg0).ToPointer());
  vtk::ConvertManagedToNative<::vtkAnnotatedCubeActor>(m_instance)->SetYMinusFaceText(arg0Wrap);
  arg0->Remove(0,arg0->Length);
  arg0->Insert(0,System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(arg0Wrap)));
System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(arg0Wrap));
}



System::String^ vtkAnnotatedCubeActor::GetYMinusFaceText()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkAnnotatedCubeActor>(m_instance)->GetYMinusFaceText();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



void vtkAnnotatedCubeActor::SetZPlusFaceText(System::String^ arg0)
{
  char* arg0Wrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(arg0).ToPointer());
  vtk::ConvertManagedToNative<::vtkAnnotatedCubeActor>(m_instance)->SetZPlusFaceText(arg0Wrap);
  arg0->Remove(0,arg0->Length);
  arg0->Insert(0,System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(arg0Wrap)));
System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(arg0Wrap));
}



System::String^ vtkAnnotatedCubeActor::GetZPlusFaceText()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkAnnotatedCubeActor>(m_instance)->GetZPlusFaceText();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



void vtkAnnotatedCubeActor::SetZMinusFaceText(System::String^ arg0)
{
  char* arg0Wrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(arg0).ToPointer());
  vtk::ConvertManagedToNative<::vtkAnnotatedCubeActor>(m_instance)->SetZMinusFaceText(arg0Wrap);
  arg0->Remove(0,arg0->Length);
  arg0->Insert(0,System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(arg0Wrap)));
System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(arg0Wrap));
}



System::String^ vtkAnnotatedCubeActor::GetZMinusFaceText()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkAnnotatedCubeActor>(m_instance)->GetZMinusFaceText();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



void vtkAnnotatedCubeActor::SetTextEdges(int arg0)
{
  vtk::ConvertManagedToNative<::vtkAnnotatedCubeActor>(m_instance)->SetTextEdges(arg0);
}



int vtkAnnotatedCubeActor::GetTextEdges()
{
  int retVal = vtk::ConvertManagedToNative<::vtkAnnotatedCubeActor>(m_instance)->GetTextEdges();
  return retVal;
}



void vtkAnnotatedCubeActor::TextEdgesOn()
{
  vtk::ConvertManagedToNative<::vtkAnnotatedCubeActor>(m_instance)->TextEdgesOn();
}



void vtkAnnotatedCubeActor::TextEdgesOff()
{
  vtk::ConvertManagedToNative<::vtkAnnotatedCubeActor>(m_instance)->TextEdgesOff();
}



void vtkAnnotatedCubeActor::SetCube(int arg0)
{
  vtk::ConvertManagedToNative<::vtkAnnotatedCubeActor>(m_instance)->SetCube(arg0);
}



int vtkAnnotatedCubeActor::GetCube()
{
  int retVal = vtk::ConvertManagedToNative<::vtkAnnotatedCubeActor>(m_instance)->GetCube();
  return retVal;
}



void vtkAnnotatedCubeActor::CubeOn()
{
  vtk::ConvertManagedToNative<::vtkAnnotatedCubeActor>(m_instance)->CubeOn();
}



void vtkAnnotatedCubeActor::CubeOff()
{
  vtk::ConvertManagedToNative<::vtkAnnotatedCubeActor>(m_instance)->CubeOff();
}



void vtkAnnotatedCubeActor::SetFaceText(int arg0)
{
  vtk::ConvertManagedToNative<::vtkAnnotatedCubeActor>(m_instance)->SetFaceText(arg0);
}



int vtkAnnotatedCubeActor::GetFaceText()
{
  int retVal = vtk::ConvertManagedToNative<::vtkAnnotatedCubeActor>(m_instance)->GetFaceText();
  return retVal;
}



void vtkAnnotatedCubeActor::FaceTextOn()
{
  vtk::ConvertManagedToNative<::vtkAnnotatedCubeActor>(m_instance)->FaceTextOn();
}



void vtkAnnotatedCubeActor::FaceTextOff()
{
  vtk::ConvertManagedToNative<::vtkAnnotatedCubeActor>(m_instance)->FaceTextOff();
}



void vtkAnnotatedCubeActor::SetXFaceTextRotation(double arg0)
{
  vtk::ConvertManagedToNative<::vtkAnnotatedCubeActor>(m_instance)->SetXFaceTextRotation(arg0);
}



double vtkAnnotatedCubeActor::GetXFaceTextRotation()
{
  double retVal = vtk::ConvertManagedToNative<::vtkAnnotatedCubeActor>(m_instance)->GetXFaceTextRotation();
  return retVal;
}



void vtkAnnotatedCubeActor::SetYFaceTextRotation(double arg0)
{
  vtk::ConvertManagedToNative<::vtkAnnotatedCubeActor>(m_instance)->SetYFaceTextRotation(arg0);
}



double vtkAnnotatedCubeActor::GetYFaceTextRotation()
{
  double retVal = vtk::ConvertManagedToNative<::vtkAnnotatedCubeActor>(m_instance)->GetYFaceTextRotation();
  return retVal;
}



void vtkAnnotatedCubeActor::SetZFaceTextRotation(double arg0)
{
  vtk::ConvertManagedToNative<::vtkAnnotatedCubeActor>(m_instance)->SetZFaceTextRotation(arg0);
}



double vtkAnnotatedCubeActor::GetZFaceTextRotation()
{
  double retVal = vtk::ConvertManagedToNative<::vtkAnnotatedCubeActor>(m_instance)->GetZFaceTextRotation();
  return retVal;
}



  vtkAnnotatedCubeActor::vtkAnnotatedCubeActor(System::IntPtr native, bool bConst) : vtkProp3D(native, bConst) {}



  vtkAnnotatedCubeActor::vtkAnnotatedCubeActor(bool donothing) : vtkProp3D(donothing) {}



  vtkAnnotatedCubeActor::vtkAnnotatedCubeActor() : vtkProp3D(false) {
  this->SetNativePointer(IntPtr(::vtkAnnotatedCubeActor::New()));
}



  vtkAnnotatedCubeActor::~vtkAnnotatedCubeActor() { }





} // end namespace vtkHybrid
