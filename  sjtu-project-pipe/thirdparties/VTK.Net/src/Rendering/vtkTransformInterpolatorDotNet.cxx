

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkTransformInterpolatorDotNet.h"
#include "vtkProp3DDotNet.h"
#include "vtkQuaternionInterpolatorDotNet.h"
#include "vtkTupleInterpolatorDotNet.h"

// native includes
#include "strstream"
#include "vtkTransformInterpolator.h"
#include "vtkMatrix4x4.h"
#include "vtkProp3D.h"
#include "vtkQuaternionInterpolator.h"
#include "vtkTransform.h"
#include "vtkTupleInterpolator.h"

using namespace System;

namespace vtk {

System::String^ vtkTransformInterpolator::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkTransformInterpolator>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkTransformInterpolator::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkTransformInterpolator>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkTransformInterpolator^ vtkTransformInterpolator::NewInstance()
{
  ::vtkTransformInterpolator* retVal = static_cast<::vtkTransformInterpolator*>(vtk::ConvertManagedToNative<::vtkTransformInterpolator>(m_instance)->NewInstance());
  return gcnew vtkTransformInterpolator(IntPtr(retVal), false);
}



vtkTransformInterpolator^ vtkTransformInterpolator::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkTransformInterpolator* retVal = static_cast<::vtkTransformInterpolator*>(::vtkTransformInterpolator::SafeDownCast(oWrap));
  return gcnew vtkTransformInterpolator(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkTransformInterpolator::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkTransformInterpolator>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkTransformInterpolator::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkTransformInterpolator>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




int vtkTransformInterpolator::GetNumberOfTransforms()
{
  int retVal = vtk::ConvertManagedToNative<::vtkTransformInterpolator>(m_instance)->GetNumberOfTransforms();
  return retVal;
}



double vtkTransformInterpolator::GetMinimumT()
{
  double retVal = vtk::ConvertManagedToNative<::vtkTransformInterpolator>(m_instance)->GetMinimumT();
  return retVal;
}



double vtkTransformInterpolator::GetMaximumT()
{
  double retVal = vtk::ConvertManagedToNative<::vtkTransformInterpolator>(m_instance)->GetMaximumT();
  return retVal;
}



void vtkTransformInterpolator::Initialize()
{
  vtk::ConvertManagedToNative<::vtkTransformInterpolator>(m_instance)->Initialize();
}



void vtkTransformInterpolator::AddTransform(double t, vtkTransform^ xform)
{
  ::vtkTransform* xformWrap = vtk::ConvertManagedToNative<::vtkTransform>(xform->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkTransformInterpolator>(m_instance)->AddTransform(t, xformWrap);
}



void vtkTransformInterpolator::AddTransform(double t, vtkMatrix4x4^ matrix)
{
  ::vtkMatrix4x4* matrixWrap = vtk::ConvertManagedToNative<::vtkMatrix4x4>(matrix->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkTransformInterpolator>(m_instance)->AddTransform(t, matrixWrap);
}



void vtkTransformInterpolator::AddTransform(double t, vtkProp3D^ prop3D)
{
  ::vtkProp3D* prop3DWrap = vtk::ConvertManagedToNative<::vtkProp3D>(prop3D->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkTransformInterpolator>(m_instance)->AddTransform(t, prop3DWrap);
}



void vtkTransformInterpolator::RemoveTransform(double t)
{
  vtk::ConvertManagedToNative<::vtkTransformInterpolator>(m_instance)->RemoveTransform(t);
}



void vtkTransformInterpolator::InterpolateTransform(double t, vtkTransform^ xform)
{
  ::vtkTransform* xformWrap = vtk::ConvertManagedToNative<::vtkTransform>(xform->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkTransformInterpolator>(m_instance)->InterpolateTransform(t, xformWrap);
}



void vtkTransformInterpolator::SetInterpolationType(int arg0)
{
  vtk::ConvertManagedToNative<::vtkTransformInterpolator>(m_instance)->SetInterpolationType(arg0);
}



int vtkTransformInterpolator::GetInterpolationTypeMinValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkTransformInterpolator>(m_instance)->GetInterpolationTypeMinValue();
  return retVal;
}



int vtkTransformInterpolator::GetInterpolationTypeMaxValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkTransformInterpolator>(m_instance)->GetInterpolationTypeMaxValue();
  return retVal;
}



int vtkTransformInterpolator::GetInterpolationType()
{
  int retVal = vtk::ConvertManagedToNative<::vtkTransformInterpolator>(m_instance)->GetInterpolationType();
  return retVal;
}



void vtkTransformInterpolator::SetInterpolationTypeToLinear()
{
  vtk::ConvertManagedToNative<::vtkTransformInterpolator>(m_instance)->SetInterpolationTypeToLinear();
}



void vtkTransformInterpolator::SetInterpolationTypeToSpline()
{
  vtk::ConvertManagedToNative<::vtkTransformInterpolator>(m_instance)->SetInterpolationTypeToSpline();
}



void vtkTransformInterpolator::SetInterpolationTypeToManual()
{
  vtk::ConvertManagedToNative<::vtkTransformInterpolator>(m_instance)->SetInterpolationTypeToManual();
}



void vtkTransformInterpolator::SetPositionInterpolator(vtkTupleInterpolator^ arg0)
{
  ::vtkTupleInterpolator* arg0Wrap = vtk::ConvertManagedToNative<::vtkTupleInterpolator>(arg0->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkTransformInterpolator>(m_instance)->SetPositionInterpolator(arg0Wrap);
}



vtkTupleInterpolator^ vtkTransformInterpolator::GetPositionInterpolator()
{
  ::vtkTupleInterpolator* retVal = static_cast<::vtkTupleInterpolator*>(vtk::ConvertManagedToNative<::vtkTransformInterpolator>(m_instance)->GetPositionInterpolator());
  return gcnew vtkTupleInterpolator(IntPtr(retVal), false);
}



void vtkTransformInterpolator::SetScaleInterpolator(vtkTupleInterpolator^ arg0)
{
  ::vtkTupleInterpolator* arg0Wrap = vtk::ConvertManagedToNative<::vtkTupleInterpolator>(arg0->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkTransformInterpolator>(m_instance)->SetScaleInterpolator(arg0Wrap);
}



vtkTupleInterpolator^ vtkTransformInterpolator::GetScaleInterpolator()
{
  ::vtkTupleInterpolator* retVal = static_cast<::vtkTupleInterpolator*>(vtk::ConvertManagedToNative<::vtkTransformInterpolator>(m_instance)->GetScaleInterpolator());
  return gcnew vtkTupleInterpolator(IntPtr(retVal), false);
}



void vtkTransformInterpolator::SetRotationInterpolator(vtkQuaternionInterpolator^ arg0)
{
  ::vtkQuaternionInterpolator* arg0Wrap = vtk::ConvertManagedToNative<::vtkQuaternionInterpolator>(arg0->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkTransformInterpolator>(m_instance)->SetRotationInterpolator(arg0Wrap);
}



vtkQuaternionInterpolator^ vtkTransformInterpolator::GetRotationInterpolator()
{
  ::vtkQuaternionInterpolator* retVal = static_cast<::vtkQuaternionInterpolator*>(vtk::ConvertManagedToNative<::vtkTransformInterpolator>(m_instance)->GetRotationInterpolator());
  return gcnew vtkQuaternionInterpolator(IntPtr(retVal), false);
}



unsigned long vtkTransformInterpolator::GetMTime()
{
  unsigned long retVal = vtk::ConvertManagedToNative<::vtkTransformInterpolator>(m_instance)->GetMTime();
  return retVal;
}



  vtkTransformInterpolator::vtkTransformInterpolator(System::IntPtr native, bool bConst) : vtkObject(native, bConst) {}



  vtkTransformInterpolator::vtkTransformInterpolator(bool donothing) : vtkObject(donothing) {}



  vtkTransformInterpolator::vtkTransformInterpolator() : vtkObject(false) {
  this->SetNativePointer(IntPtr(::vtkTransformInterpolator::New()));
}



  vtkTransformInterpolator::~vtkTransformInterpolator() { }





} // end namespace vtkRendering
