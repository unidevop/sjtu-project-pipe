

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkCameraInterpolatorDotNet.h"
#include "vtkCameraDotNet.h"
#include "vtkTupleInterpolatorDotNet.h"

// native includes
#include "strstream"
#include "vtkCameraInterpolator.h"
#include "vtkCamera.h"
#include "vtkTupleInterpolator.h"

using namespace System;

namespace vtk {

System::String^ vtkCameraInterpolator::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkCameraInterpolator>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkCameraInterpolator::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkCameraInterpolator>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkCameraInterpolator^ vtkCameraInterpolator::NewInstance()
{
  ::vtkCameraInterpolator* retVal = static_cast<::vtkCameraInterpolator*>(vtk::ConvertManagedToNative<::vtkCameraInterpolator>(m_instance)->NewInstance());
  return gcnew vtkCameraInterpolator(IntPtr(retVal), false);
}



vtkCameraInterpolator^ vtkCameraInterpolator::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkCameraInterpolator* retVal = static_cast<::vtkCameraInterpolator*>(::vtkCameraInterpolator::SafeDownCast(oWrap));
  return gcnew vtkCameraInterpolator(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkCameraInterpolator::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkCameraInterpolator>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkCameraInterpolator::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkCameraInterpolator>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




int vtkCameraInterpolator::GetNumberOfCameras()
{
  int retVal = vtk::ConvertManagedToNative<::vtkCameraInterpolator>(m_instance)->GetNumberOfCameras();
  return retVal;
}



double vtkCameraInterpolator::GetMinimumT()
{
  double retVal = vtk::ConvertManagedToNative<::vtkCameraInterpolator>(m_instance)->GetMinimumT();
  return retVal;
}



double vtkCameraInterpolator::GetMaximumT()
{
  double retVal = vtk::ConvertManagedToNative<::vtkCameraInterpolator>(m_instance)->GetMaximumT();
  return retVal;
}



void vtkCameraInterpolator::Initialize()
{
  vtk::ConvertManagedToNative<::vtkCameraInterpolator>(m_instance)->Initialize();
}



void vtkCameraInterpolator::AddCamera(double t, vtkCamera^ camera)
{
  ::vtkCamera* cameraWrap = vtk::ConvertManagedToNative<::vtkCamera>(camera->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkCameraInterpolator>(m_instance)->AddCamera(t, cameraWrap);
}



void vtkCameraInterpolator::RemoveCamera(double t)
{
  vtk::ConvertManagedToNative<::vtkCameraInterpolator>(m_instance)->RemoveCamera(t);
}



void vtkCameraInterpolator::InterpolateCamera(double t, vtkCamera^ camera)
{
  ::vtkCamera* cameraWrap = vtk::ConvertManagedToNative<::vtkCamera>(camera->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkCameraInterpolator>(m_instance)->InterpolateCamera(t, cameraWrap);
}



void vtkCameraInterpolator::SetInterpolationType(int arg0)
{
  vtk::ConvertManagedToNative<::vtkCameraInterpolator>(m_instance)->SetInterpolationType(arg0);
}



int vtkCameraInterpolator::GetInterpolationTypeMinValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkCameraInterpolator>(m_instance)->GetInterpolationTypeMinValue();
  return retVal;
}



int vtkCameraInterpolator::GetInterpolationTypeMaxValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkCameraInterpolator>(m_instance)->GetInterpolationTypeMaxValue();
  return retVal;
}



int vtkCameraInterpolator::GetInterpolationType()
{
  int retVal = vtk::ConvertManagedToNative<::vtkCameraInterpolator>(m_instance)->GetInterpolationType();
  return retVal;
}



void vtkCameraInterpolator::SetInterpolationTypeToLinear()
{
  vtk::ConvertManagedToNative<::vtkCameraInterpolator>(m_instance)->SetInterpolationTypeToLinear();
}



void vtkCameraInterpolator::SetInterpolationTypeToSpline()
{
  vtk::ConvertManagedToNative<::vtkCameraInterpolator>(m_instance)->SetInterpolationTypeToSpline();
}



void vtkCameraInterpolator::SetInterpolationTypeToManual()
{
  vtk::ConvertManagedToNative<::vtkCameraInterpolator>(m_instance)->SetInterpolationTypeToManual();
}



void vtkCameraInterpolator::SetPositionInterpolator(vtkTupleInterpolator^ arg0)
{
  ::vtkTupleInterpolator* arg0Wrap = vtk::ConvertManagedToNative<::vtkTupleInterpolator>(arg0->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkCameraInterpolator>(m_instance)->SetPositionInterpolator(arg0Wrap);
}



vtkTupleInterpolator^ vtkCameraInterpolator::GetPositionInterpolator()
{
  ::vtkTupleInterpolator* retVal = static_cast<::vtkTupleInterpolator*>(vtk::ConvertManagedToNative<::vtkCameraInterpolator>(m_instance)->GetPositionInterpolator());
  return gcnew vtkTupleInterpolator(IntPtr(retVal), false);
}



void vtkCameraInterpolator::SetFocalPointInterpolator(vtkTupleInterpolator^ arg0)
{
  ::vtkTupleInterpolator* arg0Wrap = vtk::ConvertManagedToNative<::vtkTupleInterpolator>(arg0->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkCameraInterpolator>(m_instance)->SetFocalPointInterpolator(arg0Wrap);
}



vtkTupleInterpolator^ vtkCameraInterpolator::GetFocalPointInterpolator()
{
  ::vtkTupleInterpolator* retVal = static_cast<::vtkTupleInterpolator*>(vtk::ConvertManagedToNative<::vtkCameraInterpolator>(m_instance)->GetFocalPointInterpolator());
  return gcnew vtkTupleInterpolator(IntPtr(retVal), false);
}



void vtkCameraInterpolator::SetViewUpInterpolator(vtkTupleInterpolator^ arg0)
{
  ::vtkTupleInterpolator* arg0Wrap = vtk::ConvertManagedToNative<::vtkTupleInterpolator>(arg0->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkCameraInterpolator>(m_instance)->SetViewUpInterpolator(arg0Wrap);
}



vtkTupleInterpolator^ vtkCameraInterpolator::GetViewUpInterpolator()
{
  ::vtkTupleInterpolator* retVal = static_cast<::vtkTupleInterpolator*>(vtk::ConvertManagedToNative<::vtkCameraInterpolator>(m_instance)->GetViewUpInterpolator());
  return gcnew vtkTupleInterpolator(IntPtr(retVal), false);
}



void vtkCameraInterpolator::SetViewAngleInterpolator(vtkTupleInterpolator^ arg0)
{
  ::vtkTupleInterpolator* arg0Wrap = vtk::ConvertManagedToNative<::vtkTupleInterpolator>(arg0->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkCameraInterpolator>(m_instance)->SetViewAngleInterpolator(arg0Wrap);
}



vtkTupleInterpolator^ vtkCameraInterpolator::GetViewAngleInterpolator()
{
  ::vtkTupleInterpolator* retVal = static_cast<::vtkTupleInterpolator*>(vtk::ConvertManagedToNative<::vtkCameraInterpolator>(m_instance)->GetViewAngleInterpolator());
  return gcnew vtkTupleInterpolator(IntPtr(retVal), false);
}



void vtkCameraInterpolator::SetParallelScaleInterpolator(vtkTupleInterpolator^ arg0)
{
  ::vtkTupleInterpolator* arg0Wrap = vtk::ConvertManagedToNative<::vtkTupleInterpolator>(arg0->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkCameraInterpolator>(m_instance)->SetParallelScaleInterpolator(arg0Wrap);
}



vtkTupleInterpolator^ vtkCameraInterpolator::GetParallelScaleInterpolator()
{
  ::vtkTupleInterpolator* retVal = static_cast<::vtkTupleInterpolator*>(vtk::ConvertManagedToNative<::vtkCameraInterpolator>(m_instance)->GetParallelScaleInterpolator());
  return gcnew vtkTupleInterpolator(IntPtr(retVal), false);
}



void vtkCameraInterpolator::SetClippingRangeInterpolator(vtkTupleInterpolator^ arg0)
{
  ::vtkTupleInterpolator* arg0Wrap = vtk::ConvertManagedToNative<::vtkTupleInterpolator>(arg0->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkCameraInterpolator>(m_instance)->SetClippingRangeInterpolator(arg0Wrap);
}



vtkTupleInterpolator^ vtkCameraInterpolator::GetClippingRangeInterpolator()
{
  ::vtkTupleInterpolator* retVal = static_cast<::vtkTupleInterpolator*>(vtk::ConvertManagedToNative<::vtkCameraInterpolator>(m_instance)->GetClippingRangeInterpolator());
  return gcnew vtkTupleInterpolator(IntPtr(retVal), false);
}



unsigned long vtkCameraInterpolator::GetMTime()
{
  unsigned long retVal = vtk::ConvertManagedToNative<::vtkCameraInterpolator>(m_instance)->GetMTime();
  return retVal;
}



  vtkCameraInterpolator::vtkCameraInterpolator(System::IntPtr native, bool bConst) : vtkObject(native, bConst) {}



  vtkCameraInterpolator::vtkCameraInterpolator(bool donothing) : vtkObject(donothing) {}



  vtkCameraInterpolator::vtkCameraInterpolator() : vtkObject(false) {
  this->SetNativePointer(IntPtr(::vtkCameraInterpolator::New()));
}



  vtkCameraInterpolator::~vtkCameraInterpolator() { }





} // end namespace vtkRendering
