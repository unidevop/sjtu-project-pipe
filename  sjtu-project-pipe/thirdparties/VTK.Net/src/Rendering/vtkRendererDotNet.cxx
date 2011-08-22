

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkRendererDotNet.h"
#include "vtkActorCollectionDotNet.h"
#include "vtkCameraDotNet.h"
#include "vtkCullerDotNet.h"
#include "vtkCullerCollectionDotNet.h"
#include "vtkLightDotNet.h"
#include "vtkLightCollectionDotNet.h"
#include "vtkRenderWindowDotNet.h"
#include "vtkVolumeCollectionDotNet.h"

// native includes
#include "strstream"
#include "vtkRenderer.h"
#include "vtkActorCollection.h"
#include "vtkAssemblyPath.h"
#include "vtkCamera.h"
#include "vtkCuller.h"
#include "vtkCullerCollection.h"
#include "vtkLight.h"
#include "vtkLightCollection.h"
#include "vtkObject.h"
#include "vtkProp.h"
#include "vtkRenderWindow.h"
#include "vtkVolumeCollection.h"
#include "vtkWindow.h"

using namespace System;

namespace vtk {

System::String^ vtkRenderer::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkRenderer>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkRenderer::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkRenderer>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkRenderer^ vtkRenderer::NewInstance()
{
  ::vtkRenderer* retVal = static_cast<::vtkRenderer*>(vtk::ConvertManagedToNative<::vtkRenderer>(m_instance)->NewInstance());
  return gcnew vtkRenderer(IntPtr(retVal), false);
}



vtkRenderer^ vtkRenderer::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkRenderer* retVal = static_cast<::vtkRenderer*>(::vtkRenderer::SafeDownCast(oWrap));
  return gcnew vtkRenderer(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkRenderer::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkRenderer>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkRenderer::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkRenderer>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkRenderer::AddActor(vtkProp^ p)
{
  ::vtkProp* pWrap = vtk::ConvertManagedToNative<::vtkProp>(p->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkRenderer>(m_instance)->AddActor(pWrap);
}



void vtkRenderer::AddVolume(vtkProp^ p)
{
  ::vtkProp* pWrap = vtk::ConvertManagedToNative<::vtkProp>(p->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkRenderer>(m_instance)->AddVolume(pWrap);
}



void vtkRenderer::RemoveActor(vtkProp^ p)
{
  ::vtkProp* pWrap = vtk::ConvertManagedToNative<::vtkProp>(p->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkRenderer>(m_instance)->RemoveActor(pWrap);
}



void vtkRenderer::RemoveVolume(vtkProp^ p)
{
  ::vtkProp* pWrap = vtk::ConvertManagedToNative<::vtkProp>(p->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkRenderer>(m_instance)->RemoveVolume(pWrap);
}



void vtkRenderer::AddLight(vtkLight^ arg0)
{
  ::vtkLight* arg0Wrap = vtk::ConvertManagedToNative<::vtkLight>(arg0->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkRenderer>(m_instance)->AddLight(arg0Wrap);
}



void vtkRenderer::RemoveLight(vtkLight^ arg0)
{
  ::vtkLight* arg0Wrap = vtk::ConvertManagedToNative<::vtkLight>(arg0->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkRenderer>(m_instance)->RemoveLight(arg0Wrap);
}



vtkLightCollection^ vtkRenderer::GetLights()
{
  ::vtkLightCollection* retVal = static_cast<::vtkLightCollection*>(vtk::ConvertManagedToNative<::vtkRenderer>(m_instance)->GetLights());
  return gcnew vtkLightCollection(IntPtr(retVal), false);
}



void vtkRenderer::CreateLight()
{
  vtk::ConvertManagedToNative<::vtkRenderer>(m_instance)->CreateLight();
}



vtkLight^ vtkRenderer::MakeLight()
{
  ::vtkLight* retVal = static_cast<::vtkLight*>(vtk::ConvertManagedToNative<::vtkRenderer>(m_instance)->MakeLight());
  return gcnew vtkLight(IntPtr(retVal), false);
}



int vtkRenderer::GetTwoSidedLighting()
{
  int retVal = vtk::ConvertManagedToNative<::vtkRenderer>(m_instance)->GetTwoSidedLighting();
  return retVal;
}



void vtkRenderer::SetTwoSidedLighting(int arg0)
{
  vtk::ConvertManagedToNative<::vtkRenderer>(m_instance)->SetTwoSidedLighting(arg0);
}



void vtkRenderer::TwoSidedLightingOn()
{
  vtk::ConvertManagedToNative<::vtkRenderer>(m_instance)->TwoSidedLightingOn();
}



void vtkRenderer::TwoSidedLightingOff()
{
  vtk::ConvertManagedToNative<::vtkRenderer>(m_instance)->TwoSidedLightingOff();
}



void vtkRenderer::SetLightFollowCamera(int arg0)
{
  vtk::ConvertManagedToNative<::vtkRenderer>(m_instance)->SetLightFollowCamera(arg0);
}



int vtkRenderer::GetLightFollowCamera()
{
  int retVal = vtk::ConvertManagedToNative<::vtkRenderer>(m_instance)->GetLightFollowCamera();
  return retVal;
}



void vtkRenderer::LightFollowCameraOn()
{
  vtk::ConvertManagedToNative<::vtkRenderer>(m_instance)->LightFollowCameraOn();
}



void vtkRenderer::LightFollowCameraOff()
{
  vtk::ConvertManagedToNative<::vtkRenderer>(m_instance)->LightFollowCameraOff();
}



int vtkRenderer::GetAutomaticLightCreation()
{
  int retVal = vtk::ConvertManagedToNative<::vtkRenderer>(m_instance)->GetAutomaticLightCreation();
  return retVal;
}



void vtkRenderer::SetAutomaticLightCreation(int arg0)
{
  vtk::ConvertManagedToNative<::vtkRenderer>(m_instance)->SetAutomaticLightCreation(arg0);
}



void vtkRenderer::AutomaticLightCreationOn()
{
  vtk::ConvertManagedToNative<::vtkRenderer>(m_instance)->AutomaticLightCreationOn();
}



void vtkRenderer::AutomaticLightCreationOff()
{
  vtk::ConvertManagedToNative<::vtkRenderer>(m_instance)->AutomaticLightCreationOff();
}



int vtkRenderer::UpdateLightsGeometryToFollowCamera()
{
  int retVal = vtk::ConvertManagedToNative<::vtkRenderer>(m_instance)->UpdateLightsGeometryToFollowCamera();
  return retVal;
}



vtkVolumeCollection^ vtkRenderer::GetVolumes()
{
  ::vtkVolumeCollection* retVal = static_cast<::vtkVolumeCollection*>(vtk::ConvertManagedToNative<::vtkRenderer>(m_instance)->GetVolumes());
  return gcnew vtkVolumeCollection(IntPtr(retVal), false);
}



vtkActorCollection^ vtkRenderer::GetActors()
{
  ::vtkActorCollection* retVal = static_cast<::vtkActorCollection*>(vtk::ConvertManagedToNative<::vtkRenderer>(m_instance)->GetActors());
  return gcnew vtkActorCollection(IntPtr(retVal), false);
}



void vtkRenderer::SetActiveCamera(vtkCamera^ arg0)
{
  ::vtkCamera* arg0Wrap = vtk::ConvertManagedToNative<::vtkCamera>(arg0->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkRenderer>(m_instance)->SetActiveCamera(arg0Wrap);
}



vtkCamera^ vtkRenderer::GetActiveCamera()
{
  ::vtkCamera* retVal = static_cast<::vtkCamera*>(vtk::ConvertManagedToNative<::vtkRenderer>(m_instance)->GetActiveCamera());
  return gcnew vtkCamera(IntPtr(retVal), false);
}



vtkCamera^ vtkRenderer::MakeCamera()
{
  ::vtkCamera* retVal = static_cast<::vtkCamera*>(vtk::ConvertManagedToNative<::vtkRenderer>(m_instance)->MakeCamera());
  return gcnew vtkCamera(IntPtr(retVal), false);
}



void vtkRenderer::SetErase(int arg0)
{
  vtk::ConvertManagedToNative<::vtkRenderer>(m_instance)->SetErase(arg0);
}



int vtkRenderer::GetErase()
{
  int retVal = vtk::ConvertManagedToNative<::vtkRenderer>(m_instance)->GetErase();
  return retVal;
}



void vtkRenderer::EraseOn()
{
  vtk::ConvertManagedToNative<::vtkRenderer>(m_instance)->EraseOn();
}



void vtkRenderer::EraseOff()
{
  vtk::ConvertManagedToNative<::vtkRenderer>(m_instance)->EraseOff();
}



void vtkRenderer::AddCuller(vtkCuller^ arg0)
{
  ::vtkCuller* arg0Wrap = vtk::ConvertManagedToNative<::vtkCuller>(arg0->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkRenderer>(m_instance)->AddCuller(arg0Wrap);
}



void vtkRenderer::RemoveCuller(vtkCuller^ arg0)
{
  ::vtkCuller* arg0Wrap = vtk::ConvertManagedToNative<::vtkCuller>(arg0->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkRenderer>(m_instance)->RemoveCuller(arg0Wrap);
}



vtkCullerCollection^ vtkRenderer::GetCullers()
{
  ::vtkCullerCollection* retVal = static_cast<::vtkCullerCollection*>(vtk::ConvertManagedToNative<::vtkRenderer>(m_instance)->GetCullers());
  return gcnew vtkCullerCollection(IntPtr(retVal), false);
}



void vtkRenderer::SetAmbient(double arg0, double arg1, double arg2)
{
  vtk::ConvertManagedToNative<::vtkRenderer>(m_instance)->SetAmbient(arg0, arg1, arg2);
}



void vtkRenderer::SetAmbient(array<double>^ a)
{
  pin_ptr<double> aPin = &a[0];
  double* nativeaPin = aPin;
  vtk::ConvertManagedToNative<::vtkRenderer>(m_instance)->SetAmbient(nativeaPin);
}



array<double>^ vtkRenderer::GetAmbient()
{
  const double* retVal = vtk::ConvertManagedToNative<::vtkRenderer>(m_instance)->GetAmbient();
  array<double>^ mRetVal = gcnew array<double>(3);
  for (size_t cprIdx=0; cprIdx<3; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



void vtkRenderer::SetAllocatedRenderTime(double arg0)
{
  vtk::ConvertManagedToNative<::vtkRenderer>(m_instance)->SetAllocatedRenderTime(arg0);
}



double vtkRenderer::GetAllocatedRenderTime()
{
  double retVal = vtk::ConvertManagedToNative<::vtkRenderer>(m_instance)->GetAllocatedRenderTime();
  return retVal;
}



double vtkRenderer::GetTimeFactor()
{
  double retVal = vtk::ConvertManagedToNative<::vtkRenderer>(m_instance)->GetTimeFactor();
  return retVal;
}



void vtkRenderer::Render()
{
  vtk::ConvertManagedToNative<::vtkRenderer>(m_instance)->Render();
}



void vtkRenderer::DeviceRender()
{
  vtk::ConvertManagedToNative<::vtkRenderer>(m_instance)->DeviceRender();
}



void vtkRenderer::Clear()
{
  vtk::ConvertManagedToNative<::vtkRenderer>(m_instance)->Clear();
}



int vtkRenderer::VisibleActorCount()
{
  int retVal = vtk::ConvertManagedToNative<::vtkRenderer>(m_instance)->VisibleActorCount();
  return retVal;
}



int vtkRenderer::VisibleVolumeCount()
{
  int retVal = vtk::ConvertManagedToNative<::vtkRenderer>(m_instance)->VisibleVolumeCount();
  return retVal;
}



void vtkRenderer::ComputeVisiblePropBounds(array<double>^ bounds)
{
  pin_ptr<double> boundsPin = &bounds[0];
  double* nativeboundsPin = boundsPin;
  vtk::ConvertManagedToNative<::vtkRenderer>(m_instance)->ComputeVisiblePropBounds(nativeboundsPin);
}



array<double>^ vtkRenderer::ComputeVisiblePropBounds()
{
  const double* retVal = vtk::ConvertManagedToNative<::vtkRenderer>(m_instance)->ComputeVisiblePropBounds();
  array<double>^ mRetVal = gcnew array<double>(6);
  for (size_t cprIdx=0; cprIdx<6; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



void vtkRenderer::ResetCameraClippingRange()
{
  vtk::ConvertManagedToNative<::vtkRenderer>(m_instance)->ResetCameraClippingRange();
}



void vtkRenderer::ResetCameraClippingRange(array<double>^ bounds)
{
  pin_ptr<double> boundsPin = &bounds[0];
  double* nativeboundsPin = boundsPin;
  vtk::ConvertManagedToNative<::vtkRenderer>(m_instance)->ResetCameraClippingRange(nativeboundsPin);
}



void vtkRenderer::ResetCameraClippingRange(double xmin, double xmax, double ymin, double ymax, double zmin, double zmax)
{
  vtk::ConvertManagedToNative<::vtkRenderer>(m_instance)->ResetCameraClippingRange(xmin, xmax, ymin, ymax, zmin, zmax);
}



void vtkRenderer::SetNearClippingPlaneTolerance(double arg0)
{
  vtk::ConvertManagedToNative<::vtkRenderer>(m_instance)->SetNearClippingPlaneTolerance(arg0);
}



double vtkRenderer::GetNearClippingPlaneToleranceMinValue()
{
  double retVal = vtk::ConvertManagedToNative<::vtkRenderer>(m_instance)->GetNearClippingPlaneToleranceMinValue();
  return retVal;
}



double vtkRenderer::GetNearClippingPlaneToleranceMaxValue()
{
  double retVal = vtk::ConvertManagedToNative<::vtkRenderer>(m_instance)->GetNearClippingPlaneToleranceMaxValue();
  return retVal;
}



double vtkRenderer::GetNearClippingPlaneTolerance()
{
  double retVal = vtk::ConvertManagedToNative<::vtkRenderer>(m_instance)->GetNearClippingPlaneTolerance();
  return retVal;
}



void vtkRenderer::ResetCamera()
{
  vtk::ConvertManagedToNative<::vtkRenderer>(m_instance)->ResetCamera();
}



void vtkRenderer::ResetCamera(array<double>^ bounds)
{
  pin_ptr<double> boundsPin = &bounds[0];
  double* nativeboundsPin = boundsPin;
  vtk::ConvertManagedToNative<::vtkRenderer>(m_instance)->ResetCamera(nativeboundsPin);
}



void vtkRenderer::ResetCamera(double xmin, double xmax, double ymin, double ymax, double zmin, double zmax)
{
  vtk::ConvertManagedToNative<::vtkRenderer>(m_instance)->ResetCamera(xmin, xmax, ymin, ymax, zmin, zmax);
}



void vtkRenderer::SetRenderWindow(vtkRenderWindow^ arg0)
{
  ::vtkRenderWindow* arg0Wrap = vtk::ConvertManagedToNative<::vtkRenderWindow>(arg0->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkRenderer>(m_instance)->SetRenderWindow(arg0Wrap);
}



vtkRenderWindow^ vtkRenderer::GetRenderWindow()
{
  ::vtkRenderWindow* retVal = static_cast<::vtkRenderWindow*>(vtk::ConvertManagedToNative<::vtkRenderer>(m_instance)->GetRenderWindow());
  return gcnew vtkRenderWindow(IntPtr(retVal), false);
}



vtkWindow^ vtkRenderer::GetVTKWindow()
{
  ::vtkWindow* retVal = static_cast<::vtkWindow*>(vtk::ConvertManagedToNative<::vtkRenderer>(m_instance)->GetVTKWindow());
  return gcnew vtkWindow(IntPtr(retVal), false);
}



void vtkRenderer::SetBackingStore(int arg0)
{
  vtk::ConvertManagedToNative<::vtkRenderer>(m_instance)->SetBackingStore(arg0);
}



int vtkRenderer::GetBackingStore()
{
  int retVal = vtk::ConvertManagedToNative<::vtkRenderer>(m_instance)->GetBackingStore();
  return retVal;
}



void vtkRenderer::BackingStoreOn()
{
  vtk::ConvertManagedToNative<::vtkRenderer>(m_instance)->BackingStoreOn();
}



void vtkRenderer::BackingStoreOff()
{
  vtk::ConvertManagedToNative<::vtkRenderer>(m_instance)->BackingStoreOff();
}



void vtkRenderer::SetInteractive(int arg0)
{
  vtk::ConvertManagedToNative<::vtkRenderer>(m_instance)->SetInteractive(arg0);
}



int vtkRenderer::GetInteractive()
{
  int retVal = vtk::ConvertManagedToNative<::vtkRenderer>(m_instance)->GetInteractive();
  return retVal;
}



void vtkRenderer::InteractiveOn()
{
  vtk::ConvertManagedToNative<::vtkRenderer>(m_instance)->InteractiveOn();
}



void vtkRenderer::InteractiveOff()
{
  vtk::ConvertManagedToNative<::vtkRenderer>(m_instance)->InteractiveOff();
}



void vtkRenderer::SetLayer(int arg0)
{
  vtk::ConvertManagedToNative<::vtkRenderer>(m_instance)->SetLayer(arg0);
}



int vtkRenderer::GetLayer()
{
  int retVal = vtk::ConvertManagedToNative<::vtkRenderer>(m_instance)->GetLayer();
  return retVal;
}



int vtkRenderer::Transparent()
{
  int retVal = vtk::ConvertManagedToNative<::vtkRenderer>(m_instance)->Transparent();
  return retVal;
}



void vtkRenderer::WorldToView()
{
  vtk::ConvertManagedToNative<::vtkRenderer>(m_instance)->WorldToView();
}



void vtkRenderer::ViewToWorld()
{
  vtk::ConvertManagedToNative<::vtkRenderer>(m_instance)->ViewToWorld();
}



void vtkRenderer::ViewToWorld(double% wx, double% wy, double% wz)
{
  pin_ptr<double> wxPin = &wx;
  pin_ptr<double> wyPin = &wy;
  pin_ptr<double> wzPin = &wz;
  vtk::ConvertManagedToNative<::vtkRenderer>(m_instance)->ViewToWorld(*wxPin, *wyPin, *wzPin);
}



void vtkRenderer::WorldToView(double% wx, double% wy, double% wz)
{
  pin_ptr<double> wxPin = &wx;
  pin_ptr<double> wyPin = &wy;
  pin_ptr<double> wzPin = &wz;
  vtk::ConvertManagedToNative<::vtkRenderer>(m_instance)->WorldToView(*wxPin, *wyPin, *wzPin);
}



double vtkRenderer::GetZ(int x, int y)
{
  double retVal = vtk::ConvertManagedToNative<::vtkRenderer>(m_instance)->GetZ(x, y);
  return retVal;
}



unsigned long vtkRenderer::GetMTime()
{
  unsigned long retVal = vtk::ConvertManagedToNative<::vtkRenderer>(m_instance)->GetMTime();
  return retVal;
}



double vtkRenderer::GetLastRenderTimeInSeconds()
{
  double retVal = vtk::ConvertManagedToNative<::vtkRenderer>(m_instance)->GetLastRenderTimeInSeconds();
  return retVal;
}



int vtkRenderer::GetNumberOfPropsRendered()
{
  int retVal = vtk::ConvertManagedToNative<::vtkRenderer>(m_instance)->GetNumberOfPropsRendered();
  return retVal;
}



vtkAssemblyPath^ vtkRenderer::PickProp(double selectionX, double selectionY)
{
  ::vtkAssemblyPath* retVal = static_cast<::vtkAssemblyPath*>(vtk::ConvertManagedToNative<::vtkRenderer>(m_instance)->PickProp(selectionX, selectionY));
  return gcnew vtkAssemblyPath(IntPtr(retVal), false);
}



void vtkRenderer::StereoMidpoint()
{
  vtk::ConvertManagedToNative<::vtkRenderer>(m_instance)->StereoMidpoint();
}



double vtkRenderer::GetTiledAspectRatio()
{
  double retVal = vtk::ConvertManagedToNative<::vtkRenderer>(m_instance)->GetTiledAspectRatio();
  return retVal;
}



  vtkRenderer::vtkRenderer(System::IntPtr native, bool bConst) : vtkViewport(native, bConst) {}



  vtkRenderer::vtkRenderer(bool donothing) : vtkViewport(donothing) {}



  vtkRenderer::vtkRenderer() : vtkViewport(false) {
  this->SetNativePointer(IntPtr(::vtkRenderer::New()));
}



  vtkRenderer::~vtkRenderer() { }





} // end namespace vtkRendering
