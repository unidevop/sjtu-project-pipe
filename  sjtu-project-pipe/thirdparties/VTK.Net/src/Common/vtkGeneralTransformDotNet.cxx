

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkGeneralTransformDotNet.h"
#include "vtkMatrix4x4DotNet.h"
#include "vtkObjectDotNet.h"

// native includes
#include "strstream"
#include "vtkGeneralTransform.h"
#include "vtkMatrix4x4.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkGeneralTransform::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkGeneralTransform>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkGeneralTransform::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkGeneralTransform>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkGeneralTransform^ vtkGeneralTransform::NewInstance()
{
  ::vtkGeneralTransform* retVal = static_cast<::vtkGeneralTransform*>(vtk::ConvertManagedToNative<::vtkGeneralTransform>(m_instance)->NewInstance());
  return gcnew vtkGeneralTransform(IntPtr(retVal), false);
}



vtkGeneralTransform^ vtkGeneralTransform::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkGeneralTransform* retVal = static_cast<::vtkGeneralTransform*>(::vtkGeneralTransform::SafeDownCast(oWrap));
  return gcnew vtkGeneralTransform(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkGeneralTransform::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkGeneralTransform>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkGeneralTransform::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkGeneralTransform>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkGeneralTransform::Identity()
{
  vtk::ConvertManagedToNative<::vtkGeneralTransform>(m_instance)->Identity();
}



void vtkGeneralTransform::Inverse()
{
  vtk::ConvertManagedToNative<::vtkGeneralTransform>(m_instance)->Inverse();
}



void vtkGeneralTransform::Translate(double x, double y, double z)
{
  vtk::ConvertManagedToNative<::vtkGeneralTransform>(m_instance)->Translate(x, y, z);
}



void vtkGeneralTransform::Translate(array<double>^ x)
{
  pin_ptr<double> xPin = &x[0];
  double* nativexPin = xPin;
  vtk::ConvertManagedToNative<::vtkGeneralTransform>(m_instance)->Translate(nativexPin);
}



void vtkGeneralTransform::Translate(array<float>^ x)
{
  pin_ptr<float> xPin = &x[0];
  float* nativexPin = xPin;
  vtk::ConvertManagedToNative<::vtkGeneralTransform>(m_instance)->Translate(nativexPin);
}



void vtkGeneralTransform::RotateWXYZ(double angle, double x, double y, double z)
{
  vtk::ConvertManagedToNative<::vtkGeneralTransform>(m_instance)->RotateWXYZ(angle, x, y, z);
}



void vtkGeneralTransform::RotateWXYZ(double angle, array<double>^ axis)
{
  pin_ptr<double> axisPin = &axis[0];
  double* nativeaxisPin = axisPin;
  vtk::ConvertManagedToNative<::vtkGeneralTransform>(m_instance)->RotateWXYZ(angle, nativeaxisPin);
}



void vtkGeneralTransform::RotateWXYZ(double angle, array<float>^ axis)
{
  pin_ptr<float> axisPin = &axis[0];
  float* nativeaxisPin = axisPin;
  vtk::ConvertManagedToNative<::vtkGeneralTransform>(m_instance)->RotateWXYZ(angle, nativeaxisPin);
}



void vtkGeneralTransform::RotateX(double angle)
{
  vtk::ConvertManagedToNative<::vtkGeneralTransform>(m_instance)->RotateX(angle);
}



void vtkGeneralTransform::RotateY(double angle)
{
  vtk::ConvertManagedToNative<::vtkGeneralTransform>(m_instance)->RotateY(angle);
}



void vtkGeneralTransform::RotateZ(double angle)
{
  vtk::ConvertManagedToNative<::vtkGeneralTransform>(m_instance)->RotateZ(angle);
}



void vtkGeneralTransform::Scale(double x, double y, double z)
{
  vtk::ConvertManagedToNative<::vtkGeneralTransform>(m_instance)->Scale(x, y, z);
}



void vtkGeneralTransform::Scale(array<double>^ s)
{
  pin_ptr<double> sPin = &s[0];
  double* nativesPin = sPin;
  vtk::ConvertManagedToNative<::vtkGeneralTransform>(m_instance)->Scale(nativesPin);
}



void vtkGeneralTransform::Scale(array<float>^ s)
{
  pin_ptr<float> sPin = &s[0];
  float* nativesPin = sPin;
  vtk::ConvertManagedToNative<::vtkGeneralTransform>(m_instance)->Scale(nativesPin);
}



void vtkGeneralTransform::Concatenate(vtkMatrix4x4^ matrix)
{
  ::vtkMatrix4x4* matrixWrap = vtk::ConvertManagedToNative<::vtkMatrix4x4>(matrix->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkGeneralTransform>(m_instance)->Concatenate(matrixWrap);
}



void vtkGeneralTransform::Concatenate(array<double>^ elements)
{
  pin_ptr<double> elementsPin = &elements[0];
  double* nativeelementsPin = elementsPin;
  vtk::ConvertManagedToNative<::vtkGeneralTransform>(m_instance)->Concatenate(nativeelementsPin);
}



void vtkGeneralTransform::Concatenate(vtkAbstractTransform^ transform)
{
  ::vtkAbstractTransform* transformWrap = vtk::ConvertManagedToNative<::vtkAbstractTransform>(transform->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkGeneralTransform>(m_instance)->Concatenate(transformWrap);
}



void vtkGeneralTransform::PreMultiply()
{
  vtk::ConvertManagedToNative<::vtkGeneralTransform>(m_instance)->PreMultiply();
}



void vtkGeneralTransform::PostMultiply()
{
  vtk::ConvertManagedToNative<::vtkGeneralTransform>(m_instance)->PostMultiply();
}



int vtkGeneralTransform::GetNumberOfConcatenatedTransforms()
{
  int retVal = vtk::ConvertManagedToNative<::vtkGeneralTransform>(m_instance)->GetNumberOfConcatenatedTransforms();
  return retVal;
}



vtkAbstractTransform^ vtkGeneralTransform::GetConcatenatedTransform(int i)
{
  ::vtkAbstractTransform* retVal = static_cast<::vtkAbstractTransform*>(vtk::ConvertManagedToNative<::vtkGeneralTransform>(m_instance)->GetConcatenatedTransform(i));
  return gcnew vtkAbstractTransform(IntPtr(retVal), false);
}



void vtkGeneralTransform::SetInput(vtkAbstractTransform^ input)
{
  ::vtkAbstractTransform* inputWrap = vtk::ConvertManagedToNative<::vtkAbstractTransform>(input->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkGeneralTransform>(m_instance)->SetInput(inputWrap);
}



vtkAbstractTransform^ vtkGeneralTransform::GetInput()
{
  ::vtkAbstractTransform* retVal = static_cast<::vtkAbstractTransform*>(vtk::ConvertManagedToNative<::vtkGeneralTransform>(m_instance)->GetInput());
  return gcnew vtkAbstractTransform(IntPtr(retVal), false);
}



int vtkGeneralTransform::GetInverseFlag()
{
  int retVal = vtk::ConvertManagedToNative<::vtkGeneralTransform>(m_instance)->GetInverseFlag();
  return retVal;
}



void vtkGeneralTransform::Push()
{
  vtk::ConvertManagedToNative<::vtkGeneralTransform>(m_instance)->Push();
}



void vtkGeneralTransform::Pop()
{
  vtk::ConvertManagedToNative<::vtkGeneralTransform>(m_instance)->Pop();
}



void vtkGeneralTransform::InternalTransformPoint(array<float>^ in, array<float>^ out)
{
  pin_ptr<float> inPin = &in[0];
  float* nativeinPin = inPin;
  pin_ptr<float> outPin = &out[0];
  float* nativeoutPin = outPin;
  vtk::ConvertManagedToNative<::vtkGeneralTransform>(m_instance)->InternalTransformPoint(nativeinPin, nativeoutPin);
}



void vtkGeneralTransform::InternalTransformPoint(array<double>^ in, array<double>^ out)
{
  pin_ptr<double> inPin = &in[0];
  double* nativeinPin = inPin;
  pin_ptr<double> outPin = &out[0];
  double* nativeoutPin = outPin;
  vtk::ConvertManagedToNative<::vtkGeneralTransform>(m_instance)->InternalTransformPoint(nativeinPin, nativeoutPin);
}



void vtkGeneralTransform::InternalTransformDerivative(array<float>^ in, array<float>^ out, array<float,2>^ derivative)
{
  pin_ptr<float> inPin = &in[0];
  float* nativeinPin = inPin;
  pin_ptr<float> outPin = &out[0];
  float* nativeoutPin = outPin;
  float nativederivative[3][3];
  for (size_t iderivative=0; iderivative<3; iderivative++)
    for (size_t jderivative=0; jderivative<3; jderivative++)
      nativederivative[iderivative][jderivative] = derivative[iderivative,jderivative];
  vtk::ConvertManagedToNative<::vtkGeneralTransform>(m_instance)->InternalTransformDerivative(nativeinPin, nativeoutPin, nativederivative);
  for (size_t iderivative=0; iderivative<3; iderivative++)
    for (size_t jderivative=0; jderivative<3; jderivative++)
      derivative[iderivative,jderivative] = nativederivative[iderivative][jderivative];
}



void vtkGeneralTransform::InternalTransformDerivative(array<double>^ in, array<double>^ out, array<double,2>^ derivative)
{
  pin_ptr<double> inPin = &in[0];
  double* nativeinPin = inPin;
  pin_ptr<double> outPin = &out[0];
  double* nativeoutPin = outPin;
  double nativederivative[3][3];
  for (size_t iderivative=0; iderivative<3; iderivative++)
    for (size_t jderivative=0; jderivative<3; jderivative++)
      nativederivative[iderivative][jderivative] = derivative[iderivative,jderivative];
  vtk::ConvertManagedToNative<::vtkGeneralTransform>(m_instance)->InternalTransformDerivative(nativeinPin, nativeoutPin, nativederivative);
  for (size_t iderivative=0; iderivative<3; iderivative++)
    for (size_t jderivative=0; jderivative<3; jderivative++)
      derivative[iderivative,jderivative] = nativederivative[iderivative][jderivative];
}



int vtkGeneralTransform::CircuitCheck(vtkAbstractTransform^ transform)
{
  ::vtkAbstractTransform* transformWrap = vtk::ConvertManagedToNative<::vtkAbstractTransform>(transform->GetNativePointer());
  int retVal = vtk::ConvertManagedToNative<::vtkGeneralTransform>(m_instance)->CircuitCheck(transformWrap);
  return retVal;
}



vtkAbstractTransform^ vtkGeneralTransform::MakeTransform()
{
  ::vtkAbstractTransform* retVal = static_cast<::vtkAbstractTransform*>(vtk::ConvertManagedToNative<::vtkGeneralTransform>(m_instance)->MakeTransform());
  return gcnew vtkAbstractTransform(IntPtr(retVal), false);
}



unsigned long vtkGeneralTransform::GetMTime()
{
  unsigned long retVal = vtk::ConvertManagedToNative<::vtkGeneralTransform>(m_instance)->GetMTime();
  return retVal;
}



  vtkGeneralTransform::vtkGeneralTransform(System::IntPtr native, bool bConst) : vtkAbstractTransform(native, bConst) {}



  vtkGeneralTransform::vtkGeneralTransform(bool donothing) : vtkAbstractTransform(donothing) {}



  vtkGeneralTransform::vtkGeneralTransform() : vtkAbstractTransform(false) {
  this->SetNativePointer(IntPtr(::vtkGeneralTransform::New()));
}



  vtkGeneralTransform::~vtkGeneralTransform() { }





} // end namespace vtkCommon
