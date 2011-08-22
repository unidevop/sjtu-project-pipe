

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkPerspectiveTransformDotNet.h"
#include "vtkAbstractTransformDotNet.h"
#include "vtkMatrix4x4DotNet.h"
#include "vtkObjectDotNet.h"

// native includes
#include "strstream"
#include "vtkPerspectiveTransform.h"
#include "vtkAbstractTransform.h"
#include "vtkMatrix4x4.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkPerspectiveTransform::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkPerspectiveTransform>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkPerspectiveTransform::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkPerspectiveTransform>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkPerspectiveTransform^ vtkPerspectiveTransform::NewInstance()
{
  ::vtkPerspectiveTransform* retVal = static_cast<::vtkPerspectiveTransform*>(vtk::ConvertManagedToNative<::vtkPerspectiveTransform>(m_instance)->NewInstance());
  return gcnew vtkPerspectiveTransform(IntPtr(retVal), false);
}



vtkPerspectiveTransform^ vtkPerspectiveTransform::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkPerspectiveTransform* retVal = static_cast<::vtkPerspectiveTransform*>(::vtkPerspectiveTransform::SafeDownCast(oWrap));
  return gcnew vtkPerspectiveTransform(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkPerspectiveTransform::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkPerspectiveTransform>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkPerspectiveTransform::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkPerspectiveTransform>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkPerspectiveTransform::Identity()
{
  vtk::ConvertManagedToNative<::vtkPerspectiveTransform>(m_instance)->Identity();
}



void vtkPerspectiveTransform::Inverse()
{
  vtk::ConvertManagedToNative<::vtkPerspectiveTransform>(m_instance)->Inverse();
}



void vtkPerspectiveTransform::AdjustViewport(double oldXMin, double oldXMax, double oldYMin, double oldYMax, double newXMin, double newXMax, double newYMin, double newYMax)
{
  vtk::ConvertManagedToNative<::vtkPerspectiveTransform>(m_instance)->AdjustViewport(oldXMin, oldXMax, oldYMin, oldYMax, newXMin, newXMax, newYMin, newYMax);
}



void vtkPerspectiveTransform::AdjustZBuffer(double oldNearZ, double oldFarZ, double newNearZ, double newFarZ)
{
  vtk::ConvertManagedToNative<::vtkPerspectiveTransform>(m_instance)->AdjustZBuffer(oldNearZ, oldFarZ, newNearZ, newFarZ);
}



void vtkPerspectiveTransform::Ortho(double xmin, double xmax, double ymin, double ymax, double znear, double zfar)
{
  vtk::ConvertManagedToNative<::vtkPerspectiveTransform>(m_instance)->Ortho(xmin, xmax, ymin, ymax, znear, zfar);
}



void vtkPerspectiveTransform::Frustum(double xmin, double xmax, double ymin, double ymax, double znear, double zfar)
{
  vtk::ConvertManagedToNative<::vtkPerspectiveTransform>(m_instance)->Frustum(xmin, xmax, ymin, ymax, znear, zfar);
}



void vtkPerspectiveTransform::Perspective(double angle, double aspect, double znear, double zfar)
{
  vtk::ConvertManagedToNative<::vtkPerspectiveTransform>(m_instance)->Perspective(angle, aspect, znear, zfar);
}



void vtkPerspectiveTransform::Shear(double dxdz, double dydz, double zplane)
{
  vtk::ConvertManagedToNative<::vtkPerspectiveTransform>(m_instance)->Shear(dxdz, dydz, zplane);
}



void vtkPerspectiveTransform::Stereo(double angle, double focaldistance)
{
  vtk::ConvertManagedToNative<::vtkPerspectiveTransform>(m_instance)->Stereo(angle, focaldistance);
}



void vtkPerspectiveTransform::SetupCamera(array<double>^ position, array<double>^ focalpoint, array<double>^ viewup)
{
  pin_ptr<double> positionPin = &position[0];
  double* nativepositionPin = positionPin;
  pin_ptr<double> focalpointPin = &focalpoint[0];
  double* nativefocalpointPin = focalpointPin;
  pin_ptr<double> viewupPin = &viewup[0];
  double* nativeviewupPin = viewupPin;
  vtk::ConvertManagedToNative<::vtkPerspectiveTransform>(m_instance)->SetupCamera(nativepositionPin, nativefocalpointPin, nativeviewupPin);
}



void vtkPerspectiveTransform::SetupCamera(double p0, double p1, double p2, double fp0, double fp1, double fp2, double vup0, double vup1, double vup2)
{
  vtk::ConvertManagedToNative<::vtkPerspectiveTransform>(m_instance)->SetupCamera(p0, p1, p2, fp0, fp1, fp2, vup0, vup1, vup2);
}



void vtkPerspectiveTransform::Translate(double x, double y, double z)
{
  vtk::ConvertManagedToNative<::vtkPerspectiveTransform>(m_instance)->Translate(x, y, z);
}



void vtkPerspectiveTransform::Translate(array<double>^ x)
{
  pin_ptr<double> xPin = &x[0];
  double* nativexPin = xPin;
  vtk::ConvertManagedToNative<::vtkPerspectiveTransform>(m_instance)->Translate(nativexPin);
}



void vtkPerspectiveTransform::Translate(array<float>^ x)
{
  pin_ptr<float> xPin = &x[0];
  float* nativexPin = xPin;
  vtk::ConvertManagedToNative<::vtkPerspectiveTransform>(m_instance)->Translate(nativexPin);
}



void vtkPerspectiveTransform::RotateWXYZ(double angle, double x, double y, double z)
{
  vtk::ConvertManagedToNative<::vtkPerspectiveTransform>(m_instance)->RotateWXYZ(angle, x, y, z);
}



void vtkPerspectiveTransform::RotateWXYZ(double angle, array<double>^ axis)
{
  pin_ptr<double> axisPin = &axis[0];
  double* nativeaxisPin = axisPin;
  vtk::ConvertManagedToNative<::vtkPerspectiveTransform>(m_instance)->RotateWXYZ(angle, nativeaxisPin);
}



void vtkPerspectiveTransform::RotateWXYZ(double angle, array<float>^ axis)
{
  pin_ptr<float> axisPin = &axis[0];
  float* nativeaxisPin = axisPin;
  vtk::ConvertManagedToNative<::vtkPerspectiveTransform>(m_instance)->RotateWXYZ(angle, nativeaxisPin);
}



void vtkPerspectiveTransform::RotateX(double angle)
{
  vtk::ConvertManagedToNative<::vtkPerspectiveTransform>(m_instance)->RotateX(angle);
}



void vtkPerspectiveTransform::RotateY(double angle)
{
  vtk::ConvertManagedToNative<::vtkPerspectiveTransform>(m_instance)->RotateY(angle);
}



void vtkPerspectiveTransform::RotateZ(double angle)
{
  vtk::ConvertManagedToNative<::vtkPerspectiveTransform>(m_instance)->RotateZ(angle);
}



void vtkPerspectiveTransform::Scale(double x, double y, double z)
{
  vtk::ConvertManagedToNative<::vtkPerspectiveTransform>(m_instance)->Scale(x, y, z);
}



void vtkPerspectiveTransform::Scale(array<double>^ s)
{
  pin_ptr<double> sPin = &s[0];
  double* nativesPin = sPin;
  vtk::ConvertManagedToNative<::vtkPerspectiveTransform>(m_instance)->Scale(nativesPin);
}



void vtkPerspectiveTransform::Scale(array<float>^ s)
{
  pin_ptr<float> sPin = &s[0];
  float* nativesPin = sPin;
  vtk::ConvertManagedToNative<::vtkPerspectiveTransform>(m_instance)->Scale(nativesPin);
}



void vtkPerspectiveTransform::SetMatrix(vtkMatrix4x4^ matrix)
{
  ::vtkMatrix4x4* matrixWrap = vtk::ConvertManagedToNative<::vtkMatrix4x4>(matrix->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkPerspectiveTransform>(m_instance)->SetMatrix(matrixWrap);
}



void vtkPerspectiveTransform::SetMatrix(array<double>^ elements)
{
  pin_ptr<double> elementsPin = &elements[0];
  double* nativeelementsPin = elementsPin;
  vtk::ConvertManagedToNative<::vtkPerspectiveTransform>(m_instance)->SetMatrix(nativeelementsPin);
}



void vtkPerspectiveTransform::Concatenate(vtkMatrix4x4^ matrix)
{
  ::vtkMatrix4x4* matrixWrap = vtk::ConvertManagedToNative<::vtkMatrix4x4>(matrix->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkPerspectiveTransform>(m_instance)->Concatenate(matrixWrap);
}



void vtkPerspectiveTransform::Concatenate(array<double>^ elements)
{
  pin_ptr<double> elementsPin = &elements[0];
  double* nativeelementsPin = elementsPin;
  vtk::ConvertManagedToNative<::vtkPerspectiveTransform>(m_instance)->Concatenate(nativeelementsPin);
}



void vtkPerspectiveTransform::Concatenate(vtkHomogeneousTransform^ transform)
{
  ::vtkHomogeneousTransform* transformWrap = vtk::ConvertManagedToNative<::vtkHomogeneousTransform>(transform->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkPerspectiveTransform>(m_instance)->Concatenate(transformWrap);
}



void vtkPerspectiveTransform::PreMultiply()
{
  vtk::ConvertManagedToNative<::vtkPerspectiveTransform>(m_instance)->PreMultiply();
}



void vtkPerspectiveTransform::PostMultiply()
{
  vtk::ConvertManagedToNative<::vtkPerspectiveTransform>(m_instance)->PostMultiply();
}



int vtkPerspectiveTransform::GetNumberOfConcatenatedTransforms()
{
  int retVal = vtk::ConvertManagedToNative<::vtkPerspectiveTransform>(m_instance)->GetNumberOfConcatenatedTransforms();
  return retVal;
}



vtkHomogeneousTransform^ vtkPerspectiveTransform::GetConcatenatedTransform(int i)
{
  ::vtkHomogeneousTransform* retVal = static_cast<::vtkHomogeneousTransform*>(vtk::ConvertManagedToNative<::vtkPerspectiveTransform>(m_instance)->GetConcatenatedTransform(i));
  return gcnew vtkHomogeneousTransform(IntPtr(retVal), false);
}



void vtkPerspectiveTransform::SetInput(vtkHomogeneousTransform^ input)
{
  ::vtkHomogeneousTransform* inputWrap = vtk::ConvertManagedToNative<::vtkHomogeneousTransform>(input->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkPerspectiveTransform>(m_instance)->SetInput(inputWrap);
}



vtkHomogeneousTransform^ vtkPerspectiveTransform::GetInput()
{
  ::vtkHomogeneousTransform* retVal = static_cast<::vtkHomogeneousTransform*>(vtk::ConvertManagedToNative<::vtkPerspectiveTransform>(m_instance)->GetInput());
  return gcnew vtkHomogeneousTransform(IntPtr(retVal), false);
}



int vtkPerspectiveTransform::GetInverseFlag()
{
  int retVal = vtk::ConvertManagedToNative<::vtkPerspectiveTransform>(m_instance)->GetInverseFlag();
  return retVal;
}



void vtkPerspectiveTransform::Push()
{
  vtk::ConvertManagedToNative<::vtkPerspectiveTransform>(m_instance)->Push();
}



void vtkPerspectiveTransform::Pop()
{
  vtk::ConvertManagedToNative<::vtkPerspectiveTransform>(m_instance)->Pop();
}



vtkAbstractTransform^ vtkPerspectiveTransform::MakeTransform()
{
  ::vtkAbstractTransform* retVal = static_cast<::vtkAbstractTransform*>(vtk::ConvertManagedToNative<::vtkPerspectiveTransform>(m_instance)->MakeTransform());
  return gcnew vtkAbstractTransform(IntPtr(retVal), false);
}



int vtkPerspectiveTransform::CircuitCheck(vtkAbstractTransform^ transform)
{
  ::vtkAbstractTransform* transformWrap = vtk::ConvertManagedToNative<::vtkAbstractTransform>(transform->GetNativePointer());
  int retVal = vtk::ConvertManagedToNative<::vtkPerspectiveTransform>(m_instance)->CircuitCheck(transformWrap);
  return retVal;
}



unsigned long vtkPerspectiveTransform::GetMTime()
{
  unsigned long retVal = vtk::ConvertManagedToNative<::vtkPerspectiveTransform>(m_instance)->GetMTime();
  return retVal;
}



  vtkPerspectiveTransform::vtkPerspectiveTransform(System::IntPtr native, bool bConst) : vtkHomogeneousTransform(native, bConst) {}



  vtkPerspectiveTransform::vtkPerspectiveTransform(bool donothing) : vtkHomogeneousTransform(donothing) {}



  vtkPerspectiveTransform::vtkPerspectiveTransform() : vtkHomogeneousTransform(false) {
  this->SetNativePointer(IntPtr(::vtkPerspectiveTransform::New()));
}



  vtkPerspectiveTransform::~vtkPerspectiveTransform() { }





} // end namespace vtkCommon
