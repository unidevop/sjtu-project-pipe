

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkCameraDotNet.h"
#include "vtkRendererDotNet.h"

// native includes
#include "strstream"
#include "vtkCamera.h"
#include "vtkHomogeneousTransform.h"
#include "vtkMatrix4x4.h"
#include "vtkRenderer.h"
#include "vtkTransform.h"

using namespace System;

namespace vtk {

  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkCamera::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkCamera>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkCamera::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkCamera>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




System::String^ vtkCamera::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkCamera>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkCamera::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkCamera>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkCamera^ vtkCamera::NewInstance()
{
  ::vtkCamera* retVal = static_cast<::vtkCamera*>(vtk::ConvertManagedToNative<::vtkCamera>(m_instance)->NewInstance());
  return gcnew vtkCamera(IntPtr(retVal), false);
}



vtkCamera^ vtkCamera::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkCamera* retVal = static_cast<::vtkCamera*>(::vtkCamera::SafeDownCast(oWrap));
  return gcnew vtkCamera(IntPtr(retVal), false);
}



void vtkCamera::SetPosition(double x, double y, double z)
{
  vtk::ConvertManagedToNative<::vtkCamera>(m_instance)->SetPosition(x, y, z);
}



void vtkCamera::SetPosition(array<double>^ a)
{
  pin_ptr<double> aPin = &a[0];
  double* nativeaPin = aPin;
  vtk::ConvertManagedToNative<::vtkCamera>(m_instance)->SetPosition(nativeaPin);
}



array<double>^ vtkCamera::GetPosition()
{
  const double* retVal = vtk::ConvertManagedToNative<::vtkCamera>(m_instance)->GetPosition();
  array<double>^ mRetVal = gcnew array<double>(3);
  for (size_t cprIdx=0; cprIdx<3; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



void vtkCamera::SetFocalPoint(double x, double y, double z)
{
  vtk::ConvertManagedToNative<::vtkCamera>(m_instance)->SetFocalPoint(x, y, z);
}



void vtkCamera::SetFocalPoint(array<double>^ a)
{
  pin_ptr<double> aPin = &a[0];
  double* nativeaPin = aPin;
  vtk::ConvertManagedToNative<::vtkCamera>(m_instance)->SetFocalPoint(nativeaPin);
}



array<double>^ vtkCamera::GetFocalPoint()
{
  const double* retVal = vtk::ConvertManagedToNative<::vtkCamera>(m_instance)->GetFocalPoint();
  array<double>^ mRetVal = gcnew array<double>(3);
  for (size_t cprIdx=0; cprIdx<3; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



void vtkCamera::SetViewUp(double vx, double vy, double vz)
{
  vtk::ConvertManagedToNative<::vtkCamera>(m_instance)->SetViewUp(vx, vy, vz);
}



void vtkCamera::SetViewUp(array<double>^ a)
{
  pin_ptr<double> aPin = &a[0];
  double* nativeaPin = aPin;
  vtk::ConvertManagedToNative<::vtkCamera>(m_instance)->SetViewUp(nativeaPin);
}



array<double>^ vtkCamera::GetViewUp()
{
  const double* retVal = vtk::ConvertManagedToNative<::vtkCamera>(m_instance)->GetViewUp();
  array<double>^ mRetVal = gcnew array<double>(3);
  for (size_t cprIdx=0; cprIdx<3; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



void vtkCamera::OrthogonalizeViewUp()
{
  vtk::ConvertManagedToNative<::vtkCamera>(m_instance)->OrthogonalizeViewUp();
}



void vtkCamera::SetDistance(double arg0)
{
  vtk::ConvertManagedToNative<::vtkCamera>(m_instance)->SetDistance(arg0);
}



double vtkCamera::GetDistance()
{
  double retVal = vtk::ConvertManagedToNative<::vtkCamera>(m_instance)->GetDistance();
  return retVal;
}



array<double>^ vtkCamera::GetDirectionOfProjection()
{
  const double* retVal = vtk::ConvertManagedToNative<::vtkCamera>(m_instance)->GetDirectionOfProjection();
  array<double>^ mRetVal = gcnew array<double>(3);
  for (size_t cprIdx=0; cprIdx<3; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



void vtkCamera::Dolly(double distance)
{
  vtk::ConvertManagedToNative<::vtkCamera>(m_instance)->Dolly(distance);
}



void vtkCamera::SetRoll(double angle)
{
  vtk::ConvertManagedToNative<::vtkCamera>(m_instance)->SetRoll(angle);
}



double vtkCamera::GetRoll()
{
  double retVal = vtk::ConvertManagedToNative<::vtkCamera>(m_instance)->GetRoll();
  return retVal;
}



void vtkCamera::Roll(double angle)
{
  vtk::ConvertManagedToNative<::vtkCamera>(m_instance)->Roll(angle);
}



void vtkCamera::Azimuth(double angle)
{
  vtk::ConvertManagedToNative<::vtkCamera>(m_instance)->Azimuth(angle);
}



void vtkCamera::Yaw(double angle)
{
  vtk::ConvertManagedToNative<::vtkCamera>(m_instance)->Yaw(angle);
}



void vtkCamera::Elevation(double angle)
{
  vtk::ConvertManagedToNative<::vtkCamera>(m_instance)->Elevation(angle);
}



void vtkCamera::Pitch(double angle)
{
  vtk::ConvertManagedToNative<::vtkCamera>(m_instance)->Pitch(angle);
}



void vtkCamera::SetParallelProjection(int flag)
{
  vtk::ConvertManagedToNative<::vtkCamera>(m_instance)->SetParallelProjection(flag);
}



int vtkCamera::GetParallelProjection()
{
  int retVal = vtk::ConvertManagedToNative<::vtkCamera>(m_instance)->GetParallelProjection();
  return retVal;
}



void vtkCamera::ParallelProjectionOn()
{
  vtk::ConvertManagedToNative<::vtkCamera>(m_instance)->ParallelProjectionOn();
}



void vtkCamera::ParallelProjectionOff()
{
  vtk::ConvertManagedToNative<::vtkCamera>(m_instance)->ParallelProjectionOff();
}



void vtkCamera::SetUseHorizontalViewAngle(int flag)
{
  vtk::ConvertManagedToNative<::vtkCamera>(m_instance)->SetUseHorizontalViewAngle(flag);
}



int vtkCamera::GetUseHorizontalViewAngle()
{
  int retVal = vtk::ConvertManagedToNative<::vtkCamera>(m_instance)->GetUseHorizontalViewAngle();
  return retVal;
}



void vtkCamera::UseHorizontalViewAngleOn()
{
  vtk::ConvertManagedToNative<::vtkCamera>(m_instance)->UseHorizontalViewAngleOn();
}



void vtkCamera::UseHorizontalViewAngleOff()
{
  vtk::ConvertManagedToNative<::vtkCamera>(m_instance)->UseHorizontalViewAngleOff();
}



void vtkCamera::SetViewAngle(double angle)
{
  vtk::ConvertManagedToNative<::vtkCamera>(m_instance)->SetViewAngle(angle);
}



double vtkCamera::GetViewAngle()
{
  double retVal = vtk::ConvertManagedToNative<::vtkCamera>(m_instance)->GetViewAngle();
  return retVal;
}



void vtkCamera::SetParallelScale(double scale)
{
  vtk::ConvertManagedToNative<::vtkCamera>(m_instance)->SetParallelScale(scale);
}



double vtkCamera::GetParallelScale()
{
  double retVal = vtk::ConvertManagedToNative<::vtkCamera>(m_instance)->GetParallelScale();
  return retVal;
}



void vtkCamera::Zoom(double factor)
{
  vtk::ConvertManagedToNative<::vtkCamera>(m_instance)->Zoom(factor);
}



void vtkCamera::SetClippingRange(double dNear, double dFar)
{
  vtk::ConvertManagedToNative<::vtkCamera>(m_instance)->SetClippingRange(dNear, dFar);
}



void vtkCamera::SetClippingRange(array<double>^ a)
{
  pin_ptr<double> aPin = &a[0];
  double* nativeaPin = aPin;
  vtk::ConvertManagedToNative<::vtkCamera>(m_instance)->SetClippingRange(nativeaPin);
}



array<double>^ vtkCamera::GetClippingRange()
{
  const double* retVal = vtk::ConvertManagedToNative<::vtkCamera>(m_instance)->GetClippingRange();
  array<double>^ mRetVal = gcnew array<double>(2);
  for (size_t cprIdx=0; cprIdx<2; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



void vtkCamera::SetThickness(double arg0)
{
  vtk::ConvertManagedToNative<::vtkCamera>(m_instance)->SetThickness(arg0);
}



double vtkCamera::GetThickness()
{
  double retVal = vtk::ConvertManagedToNative<::vtkCamera>(m_instance)->GetThickness();
  return retVal;
}



void vtkCamera::SetWindowCenter(double x, double y)
{
  vtk::ConvertManagedToNative<::vtkCamera>(m_instance)->SetWindowCenter(x, y);
}



array<double>^ vtkCamera::GetWindowCenter()
{
  const double* retVal = vtk::ConvertManagedToNative<::vtkCamera>(m_instance)->GetWindowCenter();
  array<double>^ mRetVal = gcnew array<double>(2);
  for (size_t cprIdx=0; cprIdx<2; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



void vtkCamera::SetObliqueAngles(double alpha, double beta)
{
  vtk::ConvertManagedToNative<::vtkCamera>(m_instance)->SetObliqueAngles(alpha, beta);
}



void vtkCamera::ApplyTransform(vtkTransform^ t)
{
  ::vtkTransform* tWrap = vtk::ConvertManagedToNative<::vtkTransform>(t->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkCamera>(m_instance)->ApplyTransform(tWrap);
}



array<double>^ vtkCamera::GetViewPlaneNormal()
{
  const double* retVal = vtk::ConvertManagedToNative<::vtkCamera>(m_instance)->GetViewPlaneNormal();
  array<double>^ mRetVal = gcnew array<double>(3);
  for (size_t cprIdx=0; cprIdx<3; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



void vtkCamera::SetViewShear(double dxdz, double dydz, double center)
{
  vtk::ConvertManagedToNative<::vtkCamera>(m_instance)->SetViewShear(dxdz, dydz, center);
}



void vtkCamera::SetViewShear(array<double>^ d)
{
  pin_ptr<double> dPin = &d[0];
  double* nativedPin = dPin;
  vtk::ConvertManagedToNative<::vtkCamera>(m_instance)->SetViewShear(nativedPin);
}



array<double>^ vtkCamera::GetViewShear()
{
  const double* retVal = vtk::ConvertManagedToNative<::vtkCamera>(m_instance)->GetViewShear();
  array<double>^ mRetVal = gcnew array<double>(3);
  for (size_t cprIdx=0; cprIdx<3; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



void vtkCamera::SetEyeAngle(double arg0)
{
  vtk::ConvertManagedToNative<::vtkCamera>(m_instance)->SetEyeAngle(arg0);
}



double vtkCamera::GetEyeAngle()
{
  double retVal = vtk::ConvertManagedToNative<::vtkCamera>(m_instance)->GetEyeAngle();
  return retVal;
}



void vtkCamera::SetFocalDisk(double arg0)
{
  vtk::ConvertManagedToNative<::vtkCamera>(m_instance)->SetFocalDisk(arg0);
}



double vtkCamera::GetFocalDisk()
{
  double retVal = vtk::ConvertManagedToNative<::vtkCamera>(m_instance)->GetFocalDisk();
  return retVal;
}



vtkMatrix4x4^ vtkCamera::GetViewTransformMatrix()
{
  ::vtkMatrix4x4* retVal = static_cast<::vtkMatrix4x4*>(vtk::ConvertManagedToNative<::vtkCamera>(m_instance)->GetViewTransformMatrix());
  return gcnew vtkMatrix4x4(IntPtr(retVal), false);
}



vtkMatrix4x4^ vtkCamera::GetPerspectiveTransformMatrix(double aspect, double nearz, double farz)
{
  ::vtkMatrix4x4* retVal = static_cast<::vtkMatrix4x4*>(vtk::ConvertManagedToNative<::vtkCamera>(m_instance)->GetPerspectiveTransformMatrix(aspect, nearz, farz));
  return gcnew vtkMatrix4x4(IntPtr(retVal), false);
}



vtkMatrix4x4^ vtkCamera::GetCompositePerspectiveTransformMatrix(double aspect, double nearz, double farz)
{
  ::vtkMatrix4x4* retVal = static_cast<::vtkMatrix4x4*>(vtk::ConvertManagedToNative<::vtkCamera>(m_instance)->GetCompositePerspectiveTransformMatrix(aspect, nearz, farz));
  return gcnew vtkMatrix4x4(IntPtr(retVal), false);
}



void vtkCamera::SetUserTransform(vtkHomogeneousTransform^ transform)
{
  ::vtkHomogeneousTransform* transformWrap = vtk::ConvertManagedToNative<::vtkHomogeneousTransform>(transform->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkCamera>(m_instance)->SetUserTransform(transformWrap);
}



vtkHomogeneousTransform^ vtkCamera::GetUserTransform()
{
  ::vtkHomogeneousTransform* retVal = static_cast<::vtkHomogeneousTransform*>(vtk::ConvertManagedToNative<::vtkCamera>(m_instance)->GetUserTransform());
  return gcnew vtkHomogeneousTransform(IntPtr(retVal), false);
}



void vtkCamera::Render(vtkRenderer^ arg0)
{
  ::vtkRenderer* arg0Wrap = vtk::ConvertManagedToNative<::vtkRenderer>(arg0->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkCamera>(m_instance)->Render(arg0Wrap);
}



unsigned long vtkCamera::GetViewingRaysMTime()
{
  unsigned long retVal = vtk::ConvertManagedToNative<::vtkCamera>(m_instance)->GetViewingRaysMTime();
  return retVal;
}



void vtkCamera::ViewingRaysModified()
{
  vtk::ConvertManagedToNative<::vtkCamera>(m_instance)->ViewingRaysModified();
}



void vtkCamera::GetFrustumPlanes(double aspect, array<double>^ planes)
{
  pin_ptr<double> planesPin = &planes[0];
  double* nativeplanesPin = planesPin;
  vtk::ConvertManagedToNative<::vtkCamera>(m_instance)->GetFrustumPlanes(aspect, nativeplanesPin);
}



array<double>^ vtkCamera::GetOrientation()
{
  const double* retVal = vtk::ConvertManagedToNative<::vtkCamera>(m_instance)->GetOrientation();
  array<double>^ mRetVal = gcnew array<double>(3);
  for (size_t cprIdx=0; cprIdx<3; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



array<double>^ vtkCamera::GetOrientationWXYZ()
{
  const double* retVal = vtk::ConvertManagedToNative<::vtkCamera>(m_instance)->GetOrientationWXYZ();
  array<double>^ mRetVal = gcnew array<double>(4);
  for (size_t cprIdx=0; cprIdx<4; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



void vtkCamera::SetViewPlaneNormal(double x, double y, double z)
{
  vtk::ConvertManagedToNative<::vtkCamera>(m_instance)->SetViewPlaneNormal(x, y, z);
}



void vtkCamera::SetViewPlaneNormal(array<double>^ a)
{
  pin_ptr<double> aPin = &a[0];
  double* nativeaPin = aPin;
  vtk::ConvertManagedToNative<::vtkCamera>(m_instance)->SetViewPlaneNormal(nativeaPin);
}



void vtkCamera::ComputeViewPlaneNormal()
{
  vtk::ConvertManagedToNative<::vtkCamera>(m_instance)->ComputeViewPlaneNormal();
}



vtkMatrix4x4^ vtkCamera::GetCameraLightTransformMatrix()
{
  ::vtkMatrix4x4* retVal = static_cast<::vtkMatrix4x4*>(vtk::ConvertManagedToNative<::vtkCamera>(m_instance)->GetCameraLightTransformMatrix());
  return gcnew vtkMatrix4x4(IntPtr(retVal), false);
}



void vtkCamera::UpdateViewport(vtkRenderer^ arg0)
{
  ::vtkRenderer* arg0Wrap = vtk::ConvertManagedToNative<::vtkRenderer>(arg0->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkCamera>(m_instance)->UpdateViewport(arg0Wrap);
}



vtkTransform^ vtkCamera::GetViewTransformObject()
{
  ::vtkTransform* retVal = static_cast<::vtkTransform*>(vtk::ConvertManagedToNative<::vtkCamera>(m_instance)->GetViewTransformObject());
  return gcnew vtkTransform(IntPtr(retVal), false);
}



  vtkCamera::vtkCamera(System::IntPtr native, bool bConst) : vtkObject(native, bConst) {}



  vtkCamera::vtkCamera(bool donothing) : vtkObject(donothing) {}



  vtkCamera::vtkCamera() : vtkObject(false) {
  this->SetNativePointer(IntPtr(::vtkCamera::New()));
}



  vtkCamera::~vtkCamera() { }





} // end namespace vtkRendering
