

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkAbstractTransformDotNet.h"
#include "vtkDataArrayDotNet.h"
#include "vtkObjectBaseDotNet.h"
#include "vtkPointsDotNet.h"

// native includes
#include "strstream"
#include "vtkAbstractTransform.h"
#include "vtkDataArray.h"
#include "vtkObjectBase.h"
#include "vtkPoints.h"

using namespace System;

namespace vtk {

System::String^ vtkAbstractTransform::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkAbstractTransform>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkAbstractTransform::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkAbstractTransform>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkAbstractTransform^ vtkAbstractTransform::NewInstance()
{
  ::vtkAbstractTransform* retVal = static_cast<::vtkAbstractTransform*>(vtk::ConvertManagedToNative<::vtkAbstractTransform>(m_instance)->NewInstance());
  return gcnew vtkAbstractTransform(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkAbstractTransform::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkAbstractTransform>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkAbstractTransform::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkAbstractTransform>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkAbstractTransform::TransformPoint(array<float>^ in, array<float>^ out)
{
  pin_ptr<float> inPin = &in[0];
  float* nativeinPin = inPin;
  pin_ptr<float> outPin = &out[0];
  float* nativeoutPin = outPin;
  vtk::ConvertManagedToNative<::vtkAbstractTransform>(m_instance)->TransformPoint(nativeinPin, nativeoutPin);
}



void vtkAbstractTransform::TransformPoint(array<double>^ in, array<double>^ out)
{
  pin_ptr<double> inPin = &in[0];
  double* nativeinPin = inPin;
  pin_ptr<double> outPin = &out[0];
  double* nativeoutPin = outPin;
  vtk::ConvertManagedToNative<::vtkAbstractTransform>(m_instance)->TransformPoint(nativeinPin, nativeoutPin);
}



array<double>^ vtkAbstractTransform::TransformPoint(double x, double y, double z)
{
  const double* retVal = vtk::ConvertManagedToNative<::vtkAbstractTransform>(m_instance)->TransformPoint(x, y, z);
  array<double>^ mRetVal = gcnew array<double>(3);
  for (size_t cprIdx=0; cprIdx<3; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



array<double>^ vtkAbstractTransform::TransformPoint(array<double>^ point)
{
  pin_ptr<double> pointPin = &point[0];
  double* nativepointPin = pointPin;
  const double* retVal = vtk::ConvertManagedToNative<::vtkAbstractTransform>(m_instance)->TransformPoint(nativepointPin);
  array<double>^ mRetVal = gcnew array<double>(3);
  for (size_t cprIdx=0; cprIdx<3; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



array<float>^ vtkAbstractTransform::TransformFloatPoint(float x, float y, float z)
{
  const float* retVal = vtk::ConvertManagedToNative<::vtkAbstractTransform>(m_instance)->TransformFloatPoint(x, y, z);
  array<float>^ mRetVal = gcnew array<float>(3);
  for (size_t cprIdx=0; cprIdx<3; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



array<float>^ vtkAbstractTransform::TransformFloatPoint(array<float>^ point)
{
  pin_ptr<float> pointPin = &point[0];
  float* nativepointPin = pointPin;
  const float* retVal = vtk::ConvertManagedToNative<::vtkAbstractTransform>(m_instance)->TransformFloatPoint(nativepointPin);
  array<float>^ mRetVal = gcnew array<float>(3);
  for (size_t cprIdx=0; cprIdx<3; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



array<double>^ vtkAbstractTransform::TransformDoublePoint(double x, double y, double z)
{
  const double* retVal = vtk::ConvertManagedToNative<::vtkAbstractTransform>(m_instance)->TransformDoublePoint(x, y, z);
  array<double>^ mRetVal = gcnew array<double>(3);
  for (size_t cprIdx=0; cprIdx<3; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



array<double>^ vtkAbstractTransform::TransformDoublePoint(array<double>^ point)
{
  pin_ptr<double> pointPin = &point[0];
  double* nativepointPin = pointPin;
  const double* retVal = vtk::ConvertManagedToNative<::vtkAbstractTransform>(m_instance)->TransformDoublePoint(nativepointPin);
  array<double>^ mRetVal = gcnew array<double>(3);
  for (size_t cprIdx=0; cprIdx<3; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



void vtkAbstractTransform::TransformNormalAtPoint(array<float>^ point, array<float>^ in, array<float>^ out)
{
  pin_ptr<float> pointPin = &point[0];
  float* nativepointPin = pointPin;
  pin_ptr<float> inPin = &in[0];
  float* nativeinPin = inPin;
  pin_ptr<float> outPin = &out[0];
  float* nativeoutPin = outPin;
  vtk::ConvertManagedToNative<::vtkAbstractTransform>(m_instance)->TransformNormalAtPoint(nativepointPin, nativeinPin, nativeoutPin);
}



void vtkAbstractTransform::TransformNormalAtPoint(array<double>^ point, array<double>^ in, array<double>^ out)
{
  pin_ptr<double> pointPin = &point[0];
  double* nativepointPin = pointPin;
  pin_ptr<double> inPin = &in[0];
  double* nativeinPin = inPin;
  pin_ptr<double> outPin = &out[0];
  double* nativeoutPin = outPin;
  vtk::ConvertManagedToNative<::vtkAbstractTransform>(m_instance)->TransformNormalAtPoint(nativepointPin, nativeinPin, nativeoutPin);
}



array<double>^ vtkAbstractTransform::TransformNormalAtPoint(array<double>^ point, array<double>^ normal)
{
  pin_ptr<double> pointPin = &point[0];
  double* nativepointPin = pointPin;
  pin_ptr<double> normalPin = &normal[0];
  double* nativenormalPin = normalPin;
  const double* retVal = vtk::ConvertManagedToNative<::vtkAbstractTransform>(m_instance)->TransformNormalAtPoint(nativepointPin, nativenormalPin);
  array<double>^ mRetVal = gcnew array<double>(3);
  for (size_t cprIdx=0; cprIdx<3; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



array<double>^ vtkAbstractTransform::TransformDoubleNormalAtPoint(array<double>^ point, array<double>^ normal)
{
  pin_ptr<double> pointPin = &point[0];
  double* nativepointPin = pointPin;
  pin_ptr<double> normalPin = &normal[0];
  double* nativenormalPin = normalPin;
  const double* retVal = vtk::ConvertManagedToNative<::vtkAbstractTransform>(m_instance)->TransformDoubleNormalAtPoint(nativepointPin, nativenormalPin);
  array<double>^ mRetVal = gcnew array<double>(3);
  for (size_t cprIdx=0; cprIdx<3; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



array<float>^ vtkAbstractTransform::TransformFloatNormalAtPoint(array<float>^ point, array<float>^ normal)
{
  pin_ptr<float> pointPin = &point[0];
  float* nativepointPin = pointPin;
  pin_ptr<float> normalPin = &normal[0];
  float* nativenormalPin = normalPin;
  const float* retVal = vtk::ConvertManagedToNative<::vtkAbstractTransform>(m_instance)->TransformFloatNormalAtPoint(nativepointPin, nativenormalPin);
  array<float>^ mRetVal = gcnew array<float>(3);
  for (size_t cprIdx=0; cprIdx<3; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



void vtkAbstractTransform::TransformVectorAtPoint(array<float>^ point, array<float>^ in, array<float>^ out)
{
  pin_ptr<float> pointPin = &point[0];
  float* nativepointPin = pointPin;
  pin_ptr<float> inPin = &in[0];
  float* nativeinPin = inPin;
  pin_ptr<float> outPin = &out[0];
  float* nativeoutPin = outPin;
  vtk::ConvertManagedToNative<::vtkAbstractTransform>(m_instance)->TransformVectorAtPoint(nativepointPin, nativeinPin, nativeoutPin);
}



void vtkAbstractTransform::TransformVectorAtPoint(array<double>^ point, array<double>^ in, array<double>^ out)
{
  pin_ptr<double> pointPin = &point[0];
  double* nativepointPin = pointPin;
  pin_ptr<double> inPin = &in[0];
  double* nativeinPin = inPin;
  pin_ptr<double> outPin = &out[0];
  double* nativeoutPin = outPin;
  vtk::ConvertManagedToNative<::vtkAbstractTransform>(m_instance)->TransformVectorAtPoint(nativepointPin, nativeinPin, nativeoutPin);
}



array<double>^ vtkAbstractTransform::TransformVectorAtPoint(array<double>^ point, array<double>^ vector)
{
  pin_ptr<double> pointPin = &point[0];
  double* nativepointPin = pointPin;
  pin_ptr<double> vectorPin = &vector[0];
  double* nativevectorPin = vectorPin;
  const double* retVal = vtk::ConvertManagedToNative<::vtkAbstractTransform>(m_instance)->TransformVectorAtPoint(nativepointPin, nativevectorPin);
  array<double>^ mRetVal = gcnew array<double>(3);
  for (size_t cprIdx=0; cprIdx<3; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



array<double>^ vtkAbstractTransform::TransformDoubleVectorAtPoint(array<double>^ point, array<double>^ vector)
{
  pin_ptr<double> pointPin = &point[0];
  double* nativepointPin = pointPin;
  pin_ptr<double> vectorPin = &vector[0];
  double* nativevectorPin = vectorPin;
  const double* retVal = vtk::ConvertManagedToNative<::vtkAbstractTransform>(m_instance)->TransformDoubleVectorAtPoint(nativepointPin, nativevectorPin);
  array<double>^ mRetVal = gcnew array<double>(3);
  for (size_t cprIdx=0; cprIdx<3; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



array<float>^ vtkAbstractTransform::TransformFloatVectorAtPoint(array<float>^ point, array<float>^ vector)
{
  pin_ptr<float> pointPin = &point[0];
  float* nativepointPin = pointPin;
  pin_ptr<float> vectorPin = &vector[0];
  float* nativevectorPin = vectorPin;
  const float* retVal = vtk::ConvertManagedToNative<::vtkAbstractTransform>(m_instance)->TransformFloatVectorAtPoint(nativepointPin, nativevectorPin);
  array<float>^ mRetVal = gcnew array<float>(3);
  for (size_t cprIdx=0; cprIdx<3; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



void vtkAbstractTransform::TransformPoints(vtkPoints^ inPts, vtkPoints^ outPts)
{
  ::vtkPoints* inPtsWrap = vtk::ConvertManagedToNative<::vtkPoints>(inPts->GetNativePointer());
  ::vtkPoints* outPtsWrap = vtk::ConvertManagedToNative<::vtkPoints>(outPts->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkAbstractTransform>(m_instance)->TransformPoints(inPtsWrap, outPtsWrap);
}



void vtkAbstractTransform::TransformPointsNormalsVectors(vtkPoints^ inPts, vtkPoints^ outPts, vtkDataArray^ inNms, vtkDataArray^ outNms, vtkDataArray^ inVrs, vtkDataArray^ outVrs)
{
  ::vtkPoints* inPtsWrap = vtk::ConvertManagedToNative<::vtkPoints>(inPts->GetNativePointer());
  ::vtkPoints* outPtsWrap = vtk::ConvertManagedToNative<::vtkPoints>(outPts->GetNativePointer());
  ::vtkDataArray* inNmsWrap = vtk::ConvertManagedToNative<::vtkDataArray>(inNms->GetNativePointer());
  ::vtkDataArray* outNmsWrap = vtk::ConvertManagedToNative<::vtkDataArray>(outNms->GetNativePointer());
  ::vtkDataArray* inVrsWrap = vtk::ConvertManagedToNative<::vtkDataArray>(inVrs->GetNativePointer());
  ::vtkDataArray* outVrsWrap = vtk::ConvertManagedToNative<::vtkDataArray>(outVrs->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkAbstractTransform>(m_instance)->TransformPointsNormalsVectors(inPtsWrap, outPtsWrap, inNmsWrap, outNmsWrap, inVrsWrap, outVrsWrap);
}



vtkAbstractTransform^ vtkAbstractTransform::GetInverse()
{
  ::vtkAbstractTransform* retVal = static_cast<::vtkAbstractTransform*>(vtk::ConvertManagedToNative<::vtkAbstractTransform>(m_instance)->GetInverse());
  return gcnew vtkAbstractTransform(IntPtr(retVal), false);
}



void vtkAbstractTransform::SetInverse(vtkAbstractTransform^ transform)
{
  ::vtkAbstractTransform* transformWrap = vtk::ConvertManagedToNative<::vtkAbstractTransform>(transform->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkAbstractTransform>(m_instance)->SetInverse(transformWrap);
}



void vtkAbstractTransform::Inverse()
{
  vtk::ConvertManagedToNative<::vtkAbstractTransform>(m_instance)->Inverse();
}



void vtkAbstractTransform::DeepCopy(vtkAbstractTransform^ arg0)
{
  ::vtkAbstractTransform* arg0Wrap = vtk::ConvertManagedToNative<::vtkAbstractTransform>(arg0->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkAbstractTransform>(m_instance)->DeepCopy(arg0Wrap);
}



void vtkAbstractTransform::Update()
{
  vtk::ConvertManagedToNative<::vtkAbstractTransform>(m_instance)->Update();
}



void vtkAbstractTransform::InternalTransformPoint(array<float>^ in, array<float>^ out)
{
  pin_ptr<float> inPin = &in[0];
  float* nativeinPin = inPin;
  pin_ptr<float> outPin = &out[0];
  float* nativeoutPin = outPin;
  vtk::ConvertManagedToNative<::vtkAbstractTransform>(m_instance)->InternalTransformPoint(nativeinPin, nativeoutPin);
}



void vtkAbstractTransform::InternalTransformPoint(array<double>^ in, array<double>^ out)
{
  pin_ptr<double> inPin = &in[0];
  double* nativeinPin = inPin;
  pin_ptr<double> outPin = &out[0];
  double* nativeoutPin = outPin;
  vtk::ConvertManagedToNative<::vtkAbstractTransform>(m_instance)->InternalTransformPoint(nativeinPin, nativeoutPin);
}



void vtkAbstractTransform::InternalTransformDerivative(array<float>^ in, array<float>^ out, array<float,2>^ derivative)
{
  pin_ptr<float> inPin = &in[0];
  float* nativeinPin = inPin;
  pin_ptr<float> outPin = &out[0];
  float* nativeoutPin = outPin;
  float nativederivative[3][3];
  for (size_t iderivative=0; iderivative<3; iderivative++)
    for (size_t jderivative=0; jderivative<3; jderivative++)
      nativederivative[iderivative][jderivative] = derivative[iderivative,jderivative];
  vtk::ConvertManagedToNative<::vtkAbstractTransform>(m_instance)->InternalTransformDerivative(nativeinPin, nativeoutPin, nativederivative);
  for (size_t iderivative=0; iderivative<3; iderivative++)
    for (size_t jderivative=0; jderivative<3; jderivative++)
      derivative[iderivative,jderivative] = nativederivative[iderivative][jderivative];
}



void vtkAbstractTransform::InternalTransformDerivative(array<double>^ in, array<double>^ out, array<double,2>^ derivative)
{
  pin_ptr<double> inPin = &in[0];
  double* nativeinPin = inPin;
  pin_ptr<double> outPin = &out[0];
  double* nativeoutPin = outPin;
  double nativederivative[3][3];
  for (size_t iderivative=0; iderivative<3; iderivative++)
    for (size_t jderivative=0; jderivative<3; jderivative++)
      nativederivative[iderivative][jderivative] = derivative[iderivative,jderivative];
  vtk::ConvertManagedToNative<::vtkAbstractTransform>(m_instance)->InternalTransformDerivative(nativeinPin, nativeoutPin, nativederivative);
  for (size_t iderivative=0; iderivative<3; iderivative++)
    for (size_t jderivative=0; jderivative<3; jderivative++)
      derivative[iderivative,jderivative] = nativederivative[iderivative][jderivative];
}



vtkAbstractTransform^ vtkAbstractTransform::MakeTransform()
{
  ::vtkAbstractTransform* retVal = static_cast<::vtkAbstractTransform*>(vtk::ConvertManagedToNative<::vtkAbstractTransform>(m_instance)->MakeTransform());
  return gcnew vtkAbstractTransform(IntPtr(retVal), false);
}



int vtkAbstractTransform::CircuitCheck(vtkAbstractTransform^ transform)
{
  ::vtkAbstractTransform* transformWrap = vtk::ConvertManagedToNative<::vtkAbstractTransform>(transform->GetNativePointer());
  int retVal = vtk::ConvertManagedToNative<::vtkAbstractTransform>(m_instance)->CircuitCheck(transformWrap);
  return retVal;
}



unsigned long vtkAbstractTransform::GetMTime()
{
  unsigned long retVal = vtk::ConvertManagedToNative<::vtkAbstractTransform>(m_instance)->GetMTime();
  return retVal;
}



void vtkAbstractTransform::UnRegister(vtkObjectBase^ O)
{
  ::vtkObjectBase* OWrap = static_cast<::vtkObjectBase*>(O->GetNativePointer().ToPointer());
  vtk::ConvertManagedToNative<::vtkAbstractTransform>(m_instance)->UnRegister(OWrap);
}



void vtkAbstractTransform::Identity()
{
  vtk::ConvertManagedToNative<::vtkAbstractTransform>(m_instance)->Identity();
}



  vtkAbstractTransform::vtkAbstractTransform(System::IntPtr native, bool bConst) : vtkObject(native, bConst) {}



  vtkAbstractTransform::vtkAbstractTransform(bool donothing) : vtkObject(donothing) {}



  vtkAbstractTransform::vtkAbstractTransform() : vtkObject(false) {
  this->SetNativePointer(IntPtr(::vtkAbstractTransform::New()));
}



  vtkAbstractTransform::~vtkAbstractTransform() { }





} // end namespace vtkCommon
