

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkProp3DDotNet.h"

// native includes
#include "strstream"
#include "vtkProp3D.h"
#include "vtkLinearTransform.h"
#include "vtkMatrix4x4.h"

using namespace System;

namespace vtk {

System::String^ vtkProp3D::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkProp3D>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkProp3D::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkProp3D>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkProp3D^ vtkProp3D::NewInstance()
{
  ::vtkProp3D* retVal = static_cast<::vtkProp3D*>(vtk::ConvertManagedToNative<::vtkProp3D>(m_instance)->NewInstance());
  return gcnew vtkProp3D(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkProp3D::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkProp3D>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkProp3D::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkProp3D>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkProp3D::ShallowCopy(vtkProp^ prop)
{
  ::vtkProp* propWrap = vtk::ConvertManagedToNative<::vtkProp>(prop->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkProp3D>(m_instance)->ShallowCopy(propWrap);
}



void vtkProp3D::SetPosition(double _arg1, double _arg2, double _arg3)
{
  vtk::ConvertManagedToNative<::vtkProp3D>(m_instance)->SetPosition(_arg1, _arg2, _arg3);
}



void vtkProp3D::SetPosition(array<double>^ _arg)
{
  pin_ptr<double> _argPin = &_arg[0];
  double* native_argPin = _argPin;
  vtk::ConvertManagedToNative<::vtkProp3D>(m_instance)->SetPosition(native_argPin);
}



array<double>^ vtkProp3D::GetPosition()
{
  const double* retVal = vtk::ConvertManagedToNative<::vtkProp3D>(m_instance)->GetPosition();
  array<double>^ mRetVal = gcnew array<double>(3);
  for (size_t cprIdx=0; cprIdx<3; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



void vtkProp3D::AddPosition(array<double>^ deltaPosition)
{
  pin_ptr<double> deltaPositionPin = &deltaPosition[0];
  double* nativedeltaPositionPin = deltaPositionPin;
  vtk::ConvertManagedToNative<::vtkProp3D>(m_instance)->AddPosition(nativedeltaPositionPin);
}



void vtkProp3D::AddPosition(double deltaX, double deltaY, double deltaZ)
{
  vtk::ConvertManagedToNative<::vtkProp3D>(m_instance)->AddPosition(deltaX, deltaY, deltaZ);
}



void vtkProp3D::SetOrigin(double _arg1, double _arg2, double _arg3)
{
  vtk::ConvertManagedToNative<::vtkProp3D>(m_instance)->SetOrigin(_arg1, _arg2, _arg3);
}



void vtkProp3D::SetOrigin(array<double>^ _arg)
{
  pin_ptr<double> _argPin = &_arg[0];
  double* native_argPin = _argPin;
  vtk::ConvertManagedToNative<::vtkProp3D>(m_instance)->SetOrigin(native_argPin);
}



array<double>^ vtkProp3D::GetOrigin()
{
  const double* retVal = vtk::ConvertManagedToNative<::vtkProp3D>(m_instance)->GetOrigin();
  array<double>^ mRetVal = gcnew array<double>(3);
  for (size_t cprIdx=0; cprIdx<3; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



void vtkProp3D::SetScale(double _arg1, double _arg2, double _arg3)
{
  vtk::ConvertManagedToNative<::vtkProp3D>(m_instance)->SetScale(_arg1, _arg2, _arg3);
}



void vtkProp3D::SetScale(array<double>^ _arg)
{
  pin_ptr<double> _argPin = &_arg[0];
  double* native_argPin = _argPin;
  vtk::ConvertManagedToNative<::vtkProp3D>(m_instance)->SetScale(native_argPin);
}



array<double>^ vtkProp3D::GetScale()
{
  const double* retVal = vtk::ConvertManagedToNative<::vtkProp3D>(m_instance)->GetScale();
  array<double>^ mRetVal = gcnew array<double>(3);
  for (size_t cprIdx=0; cprIdx<3; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



void vtkProp3D::SetScale(double s)
{
  vtk::ConvertManagedToNative<::vtkProp3D>(m_instance)->SetScale(s);
}



void vtkProp3D::SetUserTransform(vtkLinearTransform^ transform)
{
  ::vtkLinearTransform* transformWrap = vtk::ConvertManagedToNative<::vtkLinearTransform>(transform->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkProp3D>(m_instance)->SetUserTransform(transformWrap);
}



vtkLinearTransform^ vtkProp3D::GetUserTransform()
{
  ::vtkLinearTransform* retVal = static_cast<::vtkLinearTransform*>(vtk::ConvertManagedToNative<::vtkProp3D>(m_instance)->GetUserTransform());
  return gcnew vtkLinearTransform(IntPtr(retVal), false);
}



void vtkProp3D::SetUserMatrix(vtkMatrix4x4^ matrix)
{
  ::vtkMatrix4x4* matrixWrap = vtk::ConvertManagedToNative<::vtkMatrix4x4>(matrix->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkProp3D>(m_instance)->SetUserMatrix(matrixWrap);
}



vtkMatrix4x4^ vtkProp3D::GetUserMatrix()
{
  ::vtkMatrix4x4* retVal = static_cast<::vtkMatrix4x4*>(vtk::ConvertManagedToNative<::vtkProp3D>(m_instance)->GetUserMatrix());
  return gcnew vtkMatrix4x4(IntPtr(retVal), false);
}



void vtkProp3D::GetMatrix(vtkMatrix4x4^ m)
{
  ::vtkMatrix4x4* mWrap = vtk::ConvertManagedToNative<::vtkMatrix4x4>(m->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkProp3D>(m_instance)->GetMatrix(mWrap);
}



void vtkProp3D::GetMatrix(array<double>^ m)
{
  pin_ptr<double> mPin = &m[0];
  double* nativemPin = mPin;
  vtk::ConvertManagedToNative<::vtkProp3D>(m_instance)->GetMatrix(nativemPin);
}



void vtkProp3D::GetBounds(array<double>^ bounds)
{
  pin_ptr<double> boundsPin = &bounds[0];
  double* nativeboundsPin = boundsPin;
  vtk::ConvertManagedToNative<::vtkProp3D>(m_instance)->GetBounds(nativeboundsPin);
}



array<double>^ vtkProp3D::GetBounds()
{
  const double* retVal = vtk::ConvertManagedToNative<::vtkProp3D>(m_instance)->GetBounds();
  array<double>^ mRetVal = gcnew array<double>(6);
  for (size_t cprIdx=0; cprIdx<6; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



array<double>^ vtkProp3D::GetCenter()
{
  const double* retVal = vtk::ConvertManagedToNative<::vtkProp3D>(m_instance)->GetCenter();
  array<double>^ mRetVal = gcnew array<double>(3);
  for (size_t cprIdx=0; cprIdx<3; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



array<double>^ vtkProp3D::GetXRange()
{
  const double* retVal = vtk::ConvertManagedToNative<::vtkProp3D>(m_instance)->GetXRange();
  array<double>^ mRetVal = gcnew array<double>(2);
  for (size_t cprIdx=0; cprIdx<2; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



array<double>^ vtkProp3D::GetYRange()
{
  const double* retVal = vtk::ConvertManagedToNative<::vtkProp3D>(m_instance)->GetYRange();
  array<double>^ mRetVal = gcnew array<double>(2);
  for (size_t cprIdx=0; cprIdx<2; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



array<double>^ vtkProp3D::GetZRange()
{
  const double* retVal = vtk::ConvertManagedToNative<::vtkProp3D>(m_instance)->GetZRange();
  array<double>^ mRetVal = gcnew array<double>(2);
  for (size_t cprIdx=0; cprIdx<2; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



double vtkProp3D::GetLength()
{
  double retVal = vtk::ConvertManagedToNative<::vtkProp3D>(m_instance)->GetLength();
  return retVal;
}



void vtkProp3D::RotateX(double arg0)
{
  vtk::ConvertManagedToNative<::vtkProp3D>(m_instance)->RotateX(arg0);
}



void vtkProp3D::RotateY(double arg0)
{
  vtk::ConvertManagedToNative<::vtkProp3D>(m_instance)->RotateY(arg0);
}



void vtkProp3D::RotateZ(double arg0)
{
  vtk::ConvertManagedToNative<::vtkProp3D>(m_instance)->RotateZ(arg0);
}



void vtkProp3D::RotateWXYZ(double arg0, double arg1, double arg2, double arg3)
{
  vtk::ConvertManagedToNative<::vtkProp3D>(m_instance)->RotateWXYZ(arg0, arg1, arg2, arg3);
}



void vtkProp3D::SetOrientation(double arg0, double arg1, double arg2)
{
  vtk::ConvertManagedToNative<::vtkProp3D>(m_instance)->SetOrientation(arg0, arg1, arg2);
}



void vtkProp3D::SetOrientation(array<double>^ a)
{
  pin_ptr<double> aPin = &a[0];
  double* nativeaPin = aPin;
  vtk::ConvertManagedToNative<::vtkProp3D>(m_instance)->SetOrientation(nativeaPin);
}



array<double>^ vtkProp3D::GetOrientation()
{
  const double* retVal = vtk::ConvertManagedToNative<::vtkProp3D>(m_instance)->GetOrientation();
  array<double>^ mRetVal = gcnew array<double>(3);
  for (size_t cprIdx=0; cprIdx<3; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



void vtkProp3D::GetOrientation(array<double>^ o)
{
  pin_ptr<double> oPin = &o[0];
  double* nativeoPin = oPin;
  vtk::ConvertManagedToNative<::vtkProp3D>(m_instance)->GetOrientation(nativeoPin);
}



array<double>^ vtkProp3D::GetOrientationWXYZ()
{
  const double* retVal = vtk::ConvertManagedToNative<::vtkProp3D>(m_instance)->GetOrientationWXYZ();
  array<double>^ mRetVal = gcnew array<double>(4);
  for (size_t cprIdx=0; cprIdx<4; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



void vtkProp3D::AddOrientation(double arg0, double arg1, double arg2)
{
  vtk::ConvertManagedToNative<::vtkProp3D>(m_instance)->AddOrientation(arg0, arg1, arg2);
}



void vtkProp3D::AddOrientation(array<double>^ a)
{
  pin_ptr<double> aPin = &a[0];
  double* nativeaPin = aPin;
  vtk::ConvertManagedToNative<::vtkProp3D>(m_instance)->AddOrientation(nativeaPin);
}



void vtkProp3D::PokeMatrix(vtkMatrix4x4^ matrix)
{
  ::vtkMatrix4x4* matrixWrap = vtk::ConvertManagedToNative<::vtkMatrix4x4>(matrix->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkProp3D>(m_instance)->PokeMatrix(matrixWrap);
}



void vtkProp3D::InitPathTraversal()
{
  vtk::ConvertManagedToNative<::vtkProp3D>(m_instance)->InitPathTraversal();
}



unsigned long vtkProp3D::GetMTime()
{
  unsigned long retVal = vtk::ConvertManagedToNative<::vtkProp3D>(m_instance)->GetMTime();
  return retVal;
}



unsigned long vtkProp3D::GetUserTransformMatrixMTime()
{
  unsigned long retVal = vtk::ConvertManagedToNative<::vtkProp3D>(m_instance)->GetUserTransformMatrixMTime();
  return retVal;
}



void vtkProp3D::ComputeMatrix()
{
  vtk::ConvertManagedToNative<::vtkProp3D>(m_instance)->ComputeMatrix();
}



vtkMatrix4x4^ vtkProp3D::GetMatrix()
{
  ::vtkMatrix4x4* retVal = static_cast<::vtkMatrix4x4*>(vtk::ConvertManagedToNative<::vtkProp3D>(m_instance)->GetMatrix());
  return gcnew vtkMatrix4x4(IntPtr(retVal), false);
}



int vtkProp3D::GetIsIdentity()
{
  int retVal = vtk::ConvertManagedToNative<::vtkProp3D>(m_instance)->GetIsIdentity();
  return retVal;
}



  vtkProp3D::vtkProp3D(System::IntPtr native, bool bConst) : vtkProp(native, bConst) {}



  vtkProp3D::vtkProp3D(bool donothing) : vtkProp(donothing) {}



  vtkProp3D::vtkProp3D() : vtkProp(false) {
  this->SetNativePointer(IntPtr(::vtkProp3D::New()));
}



  vtkProp3D::~vtkProp3D() { }





} // end namespace vtkRendering
