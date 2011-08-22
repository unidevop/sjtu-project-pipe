

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkTransformDotNet.h"
#include "vtkAbstractTransformDotNet.h"
#include "vtkMatrix4x4DotNet.h"
#include "vtkObjectDotNet.h"

// native includes
#include "strstream"
#include "vtkTransform.h"
#include "vtkAbstractTransform.h"
#include "vtkMatrix4x4.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkTransform::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkTransform>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkTransform::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkTransform>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkTransform^ vtkTransform::NewInstance()
{
  ::vtkTransform* retVal = static_cast<::vtkTransform*>(vtk::ConvertManagedToNative<::vtkTransform>(m_instance)->NewInstance());
  return gcnew vtkTransform(IntPtr(retVal), false);
}



vtkTransform^ vtkTransform::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkTransform* retVal = static_cast<::vtkTransform*>(::vtkTransform::SafeDownCast(oWrap));
  return gcnew vtkTransform(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkTransform::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkTransform>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkTransform::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkTransform>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkTransform::Identity()
{
  vtk::ConvertManagedToNative<::vtkTransform>(m_instance)->Identity();
}



void vtkTransform::Inverse()
{
  vtk::ConvertManagedToNative<::vtkTransform>(m_instance)->Inverse();
}



void vtkTransform::Translate(double x, double y, double z)
{
  vtk::ConvertManagedToNative<::vtkTransform>(m_instance)->Translate(x, y, z);
}



void vtkTransform::Translate(array<double>^ x)
{
  pin_ptr<double> xPin = &x[0];
  double* nativexPin = xPin;
  vtk::ConvertManagedToNative<::vtkTransform>(m_instance)->Translate(nativexPin);
}



void vtkTransform::Translate(array<float>^ x)
{
  pin_ptr<float> xPin = &x[0];
  float* nativexPin = xPin;
  vtk::ConvertManagedToNative<::vtkTransform>(m_instance)->Translate(nativexPin);
}



void vtkTransform::RotateWXYZ(double angle, double x, double y, double z)
{
  vtk::ConvertManagedToNative<::vtkTransform>(m_instance)->RotateWXYZ(angle, x, y, z);
}



void vtkTransform::RotateWXYZ(double angle, array<double>^ axis)
{
  pin_ptr<double> axisPin = &axis[0];
  double* nativeaxisPin = axisPin;
  vtk::ConvertManagedToNative<::vtkTransform>(m_instance)->RotateWXYZ(angle, nativeaxisPin);
}



void vtkTransform::RotateWXYZ(double angle, array<float>^ axis)
{
  pin_ptr<float> axisPin = &axis[0];
  float* nativeaxisPin = axisPin;
  vtk::ConvertManagedToNative<::vtkTransform>(m_instance)->RotateWXYZ(angle, nativeaxisPin);
}



void vtkTransform::RotateX(double angle)
{
  vtk::ConvertManagedToNative<::vtkTransform>(m_instance)->RotateX(angle);
}



void vtkTransform::RotateY(double angle)
{
  vtk::ConvertManagedToNative<::vtkTransform>(m_instance)->RotateY(angle);
}



void vtkTransform::RotateZ(double angle)
{
  vtk::ConvertManagedToNative<::vtkTransform>(m_instance)->RotateZ(angle);
}



void vtkTransform::Scale(double x, double y, double z)
{
  vtk::ConvertManagedToNative<::vtkTransform>(m_instance)->Scale(x, y, z);
}



void vtkTransform::Scale(array<double>^ s)
{
  pin_ptr<double> sPin = &s[0];
  double* nativesPin = sPin;
  vtk::ConvertManagedToNative<::vtkTransform>(m_instance)->Scale(nativesPin);
}



void vtkTransform::Scale(array<float>^ s)
{
  pin_ptr<float> sPin = &s[0];
  float* nativesPin = sPin;
  vtk::ConvertManagedToNative<::vtkTransform>(m_instance)->Scale(nativesPin);
}



void vtkTransform::SetMatrix(vtkMatrix4x4^ matrix)
{
  ::vtkMatrix4x4* matrixWrap = vtk::ConvertManagedToNative<::vtkMatrix4x4>(matrix->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkTransform>(m_instance)->SetMatrix(matrixWrap);
}



void vtkTransform::SetMatrix(array<double>^ elements)
{
  pin_ptr<double> elementsPin = &elements[0];
  double* nativeelementsPin = elementsPin;
  vtk::ConvertManagedToNative<::vtkTransform>(m_instance)->SetMatrix(nativeelementsPin);
}



void vtkTransform::Concatenate(vtkMatrix4x4^ matrix)
{
  ::vtkMatrix4x4* matrixWrap = vtk::ConvertManagedToNative<::vtkMatrix4x4>(matrix->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkTransform>(m_instance)->Concatenate(matrixWrap);
}



void vtkTransform::Concatenate(array<double>^ elements)
{
  pin_ptr<double> elementsPin = &elements[0];
  double* nativeelementsPin = elementsPin;
  vtk::ConvertManagedToNative<::vtkTransform>(m_instance)->Concatenate(nativeelementsPin);
}



void vtkTransform::Concatenate(vtkLinearTransform^ transform)
{
  ::vtkLinearTransform* transformWrap = vtk::ConvertManagedToNative<::vtkLinearTransform>(transform->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkTransform>(m_instance)->Concatenate(transformWrap);
}



void vtkTransform::PreMultiply()
{
  vtk::ConvertManagedToNative<::vtkTransform>(m_instance)->PreMultiply();
}



void vtkTransform::PostMultiply()
{
  vtk::ConvertManagedToNative<::vtkTransform>(m_instance)->PostMultiply();
}



int vtkTransform::GetNumberOfConcatenatedTransforms()
{
  int retVal = vtk::ConvertManagedToNative<::vtkTransform>(m_instance)->GetNumberOfConcatenatedTransforms();
  return retVal;
}



vtkLinearTransform^ vtkTransform::GetConcatenatedTransform(int i)
{
  ::vtkLinearTransform* retVal = static_cast<::vtkLinearTransform*>(vtk::ConvertManagedToNative<::vtkTransform>(m_instance)->GetConcatenatedTransform(i));
  return gcnew vtkLinearTransform(IntPtr(retVal), false);
}



void vtkTransform::GetOrientation(array<double>^ orient)
{
  pin_ptr<double> orientPin = &orient[0];
  double* nativeorientPin = orientPin;
  vtk::ConvertManagedToNative<::vtkTransform>(m_instance)->GetOrientation(nativeorientPin);
}



void vtkTransform::GetOrientation(array<float>^ orient)
{
  pin_ptr<float> orientPin = &orient[0];
  float* nativeorientPin = orientPin;
  vtk::ConvertManagedToNative<::vtkTransform>(m_instance)->GetOrientation(nativeorientPin);
}



array<double>^ vtkTransform::GetOrientation()
{
  const double* retVal = vtk::ConvertManagedToNative<::vtkTransform>(m_instance)->GetOrientation();
  array<double>^ mRetVal = gcnew array<double>(3);
  for (size_t cprIdx=0; cprIdx<3; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



void vtkTransform::GetOrientation(array<double>^ orient, vtkMatrix4x4^ matrix)
{
  pin_ptr<double> orientPin = &orient[0];
  double* nativeorientPin = orientPin;
  ::vtkMatrix4x4* matrixWrap = vtk::ConvertManagedToNative<::vtkMatrix4x4>(matrix->GetNativePointer());
  ::vtkTransform::GetOrientation(nativeorientPin, matrixWrap);
}



void vtkTransform::GetOrientationWXYZ(array<double>^ wxyz)
{
  pin_ptr<double> wxyzPin = &wxyz[0];
  double* nativewxyzPin = wxyzPin;
  vtk::ConvertManagedToNative<::vtkTransform>(m_instance)->GetOrientationWXYZ(nativewxyzPin);
}



void vtkTransform::GetOrientationWXYZ(array<float>^ wxyz)
{
  pin_ptr<float> wxyzPin = &wxyz[0];
  float* nativewxyzPin = wxyzPin;
  vtk::ConvertManagedToNative<::vtkTransform>(m_instance)->GetOrientationWXYZ(nativewxyzPin);
}



array<double>^ vtkTransform::GetOrientationWXYZ()
{
  const double* retVal = vtk::ConvertManagedToNative<::vtkTransform>(m_instance)->GetOrientationWXYZ();
  array<double>^ mRetVal = gcnew array<double>(4);
  for (size_t cprIdx=0; cprIdx<4; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



void vtkTransform::GetPosition(array<double>^ pos)
{
  pin_ptr<double> posPin = &pos[0];
  double* nativeposPin = posPin;
  vtk::ConvertManagedToNative<::vtkTransform>(m_instance)->GetPosition(nativeposPin);
}



void vtkTransform::GetPosition(array<float>^ pos)
{
  pin_ptr<float> posPin = &pos[0];
  float* nativeposPin = posPin;
  vtk::ConvertManagedToNative<::vtkTransform>(m_instance)->GetPosition(nativeposPin);
}



array<double>^ vtkTransform::GetPosition()
{
  const double* retVal = vtk::ConvertManagedToNative<::vtkTransform>(m_instance)->GetPosition();
  array<double>^ mRetVal = gcnew array<double>(3);
  for (size_t cprIdx=0; cprIdx<3; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



void vtkTransform::GetScale(array<double>^ scale)
{
  pin_ptr<double> scalePin = &scale[0];
  double* nativescalePin = scalePin;
  vtk::ConvertManagedToNative<::vtkTransform>(m_instance)->GetScale(nativescalePin);
}



void vtkTransform::GetScale(array<float>^ scale)
{
  pin_ptr<float> scalePin = &scale[0];
  float* nativescalePin = scalePin;
  vtk::ConvertManagedToNative<::vtkTransform>(m_instance)->GetScale(nativescalePin);
}



array<double>^ vtkTransform::GetScale()
{
  const double* retVal = vtk::ConvertManagedToNative<::vtkTransform>(m_instance)->GetScale();
  array<double>^ mRetVal = gcnew array<double>(3);
  for (size_t cprIdx=0; cprIdx<3; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



void vtkTransform::GetInverse(vtkMatrix4x4^ inverse)
{
  ::vtkMatrix4x4* inverseWrap = vtk::ConvertManagedToNative<::vtkMatrix4x4>(inverse->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkTransform>(m_instance)->GetInverse(inverseWrap);
}



void vtkTransform::GetTranspose(vtkMatrix4x4^ transpose)
{
  ::vtkMatrix4x4* transposeWrap = vtk::ConvertManagedToNative<::vtkMatrix4x4>(transpose->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkTransform>(m_instance)->GetTranspose(transposeWrap);
}



void vtkTransform::SetInput(vtkLinearTransform^ input)
{
  ::vtkLinearTransform* inputWrap = vtk::ConvertManagedToNative<::vtkLinearTransform>(input->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkTransform>(m_instance)->SetInput(inputWrap);
}



vtkLinearTransform^ vtkTransform::GetInput()
{
  ::vtkLinearTransform* retVal = static_cast<::vtkLinearTransform*>(vtk::ConvertManagedToNative<::vtkTransform>(m_instance)->GetInput());
  return gcnew vtkLinearTransform(IntPtr(retVal), false);
}



int vtkTransform::GetInverseFlag()
{
  int retVal = vtk::ConvertManagedToNative<::vtkTransform>(m_instance)->GetInverseFlag();
  return retVal;
}



void vtkTransform::Push()
{
  vtk::ConvertManagedToNative<::vtkTransform>(m_instance)->Push();
}



void vtkTransform::Pop()
{
  vtk::ConvertManagedToNative<::vtkTransform>(m_instance)->Pop();
}



int vtkTransform::CircuitCheck(vtkAbstractTransform^ transform)
{
  ::vtkAbstractTransform* transformWrap = vtk::ConvertManagedToNative<::vtkAbstractTransform>(transform->GetNativePointer());
  int retVal = vtk::ConvertManagedToNative<::vtkTransform>(m_instance)->CircuitCheck(transformWrap);
  return retVal;
}



vtkAbstractTransform^ vtkTransform::GetInverse()
{
  ::vtkAbstractTransform* retVal = static_cast<::vtkAbstractTransform*>(vtk::ConvertManagedToNative<::vtkTransform>(m_instance)->GetInverse());
  return gcnew vtkAbstractTransform(IntPtr(retVal), false);
}



vtkAbstractTransform^ vtkTransform::MakeTransform()
{
  ::vtkAbstractTransform* retVal = static_cast<::vtkAbstractTransform*>(vtk::ConvertManagedToNative<::vtkTransform>(m_instance)->MakeTransform());
  return gcnew vtkAbstractTransform(IntPtr(retVal), false);
}



unsigned long vtkTransform::GetMTime()
{
  unsigned long retVal = vtk::ConvertManagedToNative<::vtkTransform>(m_instance)->GetMTime();
  return retVal;
}



void vtkTransform::MultiplyPoint(array<float>^ in, array<float>^ out)
{
  pin_ptr<float> inPin = &in[0];
  float* nativeinPin = inPin;
  pin_ptr<float> outPin = &out[0];
  float* nativeoutPin = outPin;
  vtk::ConvertManagedToNative<::vtkTransform>(m_instance)->MultiplyPoint(nativeinPin, nativeoutPin);
}



void vtkTransform::MultiplyPoint(array<double>^ in, array<double>^ out)
{
  pin_ptr<double> inPin = &in[0];
  double* nativeinPin = inPin;
  pin_ptr<double> outPin = &out[0];
  double* nativeoutPin = outPin;
  vtk::ConvertManagedToNative<::vtkTransform>(m_instance)->MultiplyPoint(nativeinPin, nativeoutPin);
}



  vtkTransform::vtkTransform(System::IntPtr native, bool bConst) : vtkLinearTransform(native, bConst) {}



  vtkTransform::vtkTransform(bool donothing) : vtkLinearTransform(donothing) {}



  vtkTransform::vtkTransform() : vtkLinearTransform(false) {
  this->SetNativePointer(IntPtr(::vtkTransform::New()));
}



  vtkTransform::~vtkTransform() { }





} // end namespace vtkCommon
