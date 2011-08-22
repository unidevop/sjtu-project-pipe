

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkLinearTransformDotNet.h"
#include "vtkDataArrayDotNet.h"
#include "vtkPointsDotNet.h"

// native includes
#include "strstream"
#include "vtkLinearTransform.h"
#include "vtkDataArray.h"
#include "vtkPoints.h"

using namespace System;

namespace vtk {

System::String^ vtkLinearTransform::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkLinearTransform>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkLinearTransform::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkLinearTransform>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkLinearTransform^ vtkLinearTransform::NewInstance()
{
  ::vtkLinearTransform* retVal = static_cast<::vtkLinearTransform*>(vtk::ConvertManagedToNative<::vtkLinearTransform>(m_instance)->NewInstance());
  return gcnew vtkLinearTransform(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkLinearTransform::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkLinearTransform>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkLinearTransform::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkLinearTransform>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkLinearTransform::TransformNormal(array<float>^ in, array<float>^ out)
{
  pin_ptr<float> inPin = &in[0];
  float* nativeinPin = inPin;
  pin_ptr<float> outPin = &out[0];
  float* nativeoutPin = outPin;
  vtk::ConvertManagedToNative<::vtkLinearTransform>(m_instance)->TransformNormal(nativeinPin, nativeoutPin);
}



void vtkLinearTransform::TransformNormal(array<double>^ in, array<double>^ out)
{
  pin_ptr<double> inPin = &in[0];
  double* nativeinPin = inPin;
  pin_ptr<double> outPin = &out[0];
  double* nativeoutPin = outPin;
  vtk::ConvertManagedToNative<::vtkLinearTransform>(m_instance)->TransformNormal(nativeinPin, nativeoutPin);
}



array<double>^ vtkLinearTransform::TransformNormal(double x, double y, double z)
{
  const double* retVal = vtk::ConvertManagedToNative<::vtkLinearTransform>(m_instance)->TransformNormal(x, y, z);
  array<double>^ mRetVal = gcnew array<double>(3);
  for (size_t cprIdx=0; cprIdx<3; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



array<double>^ vtkLinearTransform::TransformNormal(array<double>^ normal)
{
  pin_ptr<double> normalPin = &normal[0];
  double* nativenormalPin = normalPin;
  const double* retVal = vtk::ConvertManagedToNative<::vtkLinearTransform>(m_instance)->TransformNormal(nativenormalPin);
  array<double>^ mRetVal = gcnew array<double>(3);
  for (size_t cprIdx=0; cprIdx<3; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



array<float>^ vtkLinearTransform::TransformFloatNormal(float x, float y, float z)
{
  const float* retVal = vtk::ConvertManagedToNative<::vtkLinearTransform>(m_instance)->TransformFloatNormal(x, y, z);
  array<float>^ mRetVal = gcnew array<float>(3);
  for (size_t cprIdx=0; cprIdx<3; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



array<float>^ vtkLinearTransform::TransformFloatNormal(array<float>^ normal)
{
  pin_ptr<float> normalPin = &normal[0];
  float* nativenormalPin = normalPin;
  const float* retVal = vtk::ConvertManagedToNative<::vtkLinearTransform>(m_instance)->TransformFloatNormal(nativenormalPin);
  array<float>^ mRetVal = gcnew array<float>(3);
  for (size_t cprIdx=0; cprIdx<3; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



array<double>^ vtkLinearTransform::TransformDoubleNormal(double x, double y, double z)
{
  const double* retVal = vtk::ConvertManagedToNative<::vtkLinearTransform>(m_instance)->TransformDoubleNormal(x, y, z);
  array<double>^ mRetVal = gcnew array<double>(3);
  for (size_t cprIdx=0; cprIdx<3; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



array<double>^ vtkLinearTransform::TransformDoubleNormal(array<double>^ normal)
{
  pin_ptr<double> normalPin = &normal[0];
  double* nativenormalPin = normalPin;
  const double* retVal = vtk::ConvertManagedToNative<::vtkLinearTransform>(m_instance)->TransformDoubleNormal(nativenormalPin);
  array<double>^ mRetVal = gcnew array<double>(3);
  for (size_t cprIdx=0; cprIdx<3; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



array<double>^ vtkLinearTransform::TransformVector(double x, double y, double z)
{
  const double* retVal = vtk::ConvertManagedToNative<::vtkLinearTransform>(m_instance)->TransformVector(x, y, z);
  array<double>^ mRetVal = gcnew array<double>(3);
  for (size_t cprIdx=0; cprIdx<3; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



array<double>^ vtkLinearTransform::TransformVector(array<double>^ normal)
{
  pin_ptr<double> normalPin = &normal[0];
  double* nativenormalPin = normalPin;
  const double* retVal = vtk::ConvertManagedToNative<::vtkLinearTransform>(m_instance)->TransformVector(nativenormalPin);
  array<double>^ mRetVal = gcnew array<double>(3);
  for (size_t cprIdx=0; cprIdx<3; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



void vtkLinearTransform::TransformVector(array<float>^ in, array<float>^ out)
{
  pin_ptr<float> inPin = &in[0];
  float* nativeinPin = inPin;
  pin_ptr<float> outPin = &out[0];
  float* nativeoutPin = outPin;
  vtk::ConvertManagedToNative<::vtkLinearTransform>(m_instance)->TransformVector(nativeinPin, nativeoutPin);
}



void vtkLinearTransform::TransformVector(array<double>^ in, array<double>^ out)
{
  pin_ptr<double> inPin = &in[0];
  double* nativeinPin = inPin;
  pin_ptr<double> outPin = &out[0];
  double* nativeoutPin = outPin;
  vtk::ConvertManagedToNative<::vtkLinearTransform>(m_instance)->TransformVector(nativeinPin, nativeoutPin);
}



array<float>^ vtkLinearTransform::TransformFloatVector(float x, float y, float z)
{
  const float* retVal = vtk::ConvertManagedToNative<::vtkLinearTransform>(m_instance)->TransformFloatVector(x, y, z);
  array<float>^ mRetVal = gcnew array<float>(3);
  for (size_t cprIdx=0; cprIdx<3; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



array<float>^ vtkLinearTransform::TransformFloatVector(array<float>^ vec)
{
  pin_ptr<float> vecPin = &vec[0];
  float* nativevecPin = vecPin;
  const float* retVal = vtk::ConvertManagedToNative<::vtkLinearTransform>(m_instance)->TransformFloatVector(nativevecPin);
  array<float>^ mRetVal = gcnew array<float>(3);
  for (size_t cprIdx=0; cprIdx<3; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



array<double>^ vtkLinearTransform::TransformDoubleVector(double x, double y, double z)
{
  const double* retVal = vtk::ConvertManagedToNative<::vtkLinearTransform>(m_instance)->TransformDoubleVector(x, y, z);
  array<double>^ mRetVal = gcnew array<double>(3);
  for (size_t cprIdx=0; cprIdx<3; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



array<double>^ vtkLinearTransform::TransformDoubleVector(array<double>^ vec)
{
  pin_ptr<double> vecPin = &vec[0];
  double* nativevecPin = vecPin;
  const double* retVal = vtk::ConvertManagedToNative<::vtkLinearTransform>(m_instance)->TransformDoubleVector(nativevecPin);
  array<double>^ mRetVal = gcnew array<double>(3);
  for (size_t cprIdx=0; cprIdx<3; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



void vtkLinearTransform::TransformPoints(vtkPoints^ inPts, vtkPoints^ outPts)
{
  ::vtkPoints* inPtsWrap = vtk::ConvertManagedToNative<::vtkPoints>(inPts->GetNativePointer());
  ::vtkPoints* outPtsWrap = vtk::ConvertManagedToNative<::vtkPoints>(outPts->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkLinearTransform>(m_instance)->TransformPoints(inPtsWrap, outPtsWrap);
}



void vtkLinearTransform::TransformNormals(vtkDataArray^ inNms, vtkDataArray^ outNms)
{
  ::vtkDataArray* inNmsWrap = vtk::ConvertManagedToNative<::vtkDataArray>(inNms->GetNativePointer());
  ::vtkDataArray* outNmsWrap = vtk::ConvertManagedToNative<::vtkDataArray>(outNms->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkLinearTransform>(m_instance)->TransformNormals(inNmsWrap, outNmsWrap);
}



void vtkLinearTransform::TransformVectors(vtkDataArray^ inVrs, vtkDataArray^ outVrs)
{
  ::vtkDataArray* inVrsWrap = vtk::ConvertManagedToNative<::vtkDataArray>(inVrs->GetNativePointer());
  ::vtkDataArray* outVrsWrap = vtk::ConvertManagedToNative<::vtkDataArray>(outVrs->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkLinearTransform>(m_instance)->TransformVectors(inVrsWrap, outVrsWrap);
}



void vtkLinearTransform::TransformPointsNormalsVectors(vtkPoints^ inPts, vtkPoints^ outPts, vtkDataArray^ inNms, vtkDataArray^ outNms, vtkDataArray^ inVrs, vtkDataArray^ outVrs)
{
  ::vtkPoints* inPtsWrap = vtk::ConvertManagedToNative<::vtkPoints>(inPts->GetNativePointer());
  ::vtkPoints* outPtsWrap = vtk::ConvertManagedToNative<::vtkPoints>(outPts->GetNativePointer());
  ::vtkDataArray* inNmsWrap = vtk::ConvertManagedToNative<::vtkDataArray>(inNms->GetNativePointer());
  ::vtkDataArray* outNmsWrap = vtk::ConvertManagedToNative<::vtkDataArray>(outNms->GetNativePointer());
  ::vtkDataArray* inVrsWrap = vtk::ConvertManagedToNative<::vtkDataArray>(inVrs->GetNativePointer());
  ::vtkDataArray* outVrsWrap = vtk::ConvertManagedToNative<::vtkDataArray>(outVrs->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkLinearTransform>(m_instance)->TransformPointsNormalsVectors(inPtsWrap, outPtsWrap, inNmsWrap, outNmsWrap, inVrsWrap, outVrsWrap);
}



vtkLinearTransform^ vtkLinearTransform::GetLinearInverse()
{
  ::vtkLinearTransform* retVal = static_cast<::vtkLinearTransform*>(vtk::ConvertManagedToNative<::vtkLinearTransform>(m_instance)->GetLinearInverse());
  return gcnew vtkLinearTransform(IntPtr(retVal), false);
}



void vtkLinearTransform::InternalTransformPoint(array<float>^ in, array<float>^ out)
{
  pin_ptr<float> inPin = &in[0];
  float* nativeinPin = inPin;
  pin_ptr<float> outPin = &out[0];
  float* nativeoutPin = outPin;
  vtk::ConvertManagedToNative<::vtkLinearTransform>(m_instance)->InternalTransformPoint(nativeinPin, nativeoutPin);
}



void vtkLinearTransform::InternalTransformPoint(array<double>^ in, array<double>^ out)
{
  pin_ptr<double> inPin = &in[0];
  double* nativeinPin = inPin;
  pin_ptr<double> outPin = &out[0];
  double* nativeoutPin = outPin;
  vtk::ConvertManagedToNative<::vtkLinearTransform>(m_instance)->InternalTransformPoint(nativeinPin, nativeoutPin);
}



void vtkLinearTransform::InternalTransformNormal(array<float>^ in, array<float>^ out)
{
  pin_ptr<float> inPin = &in[0];
  float* nativeinPin = inPin;
  pin_ptr<float> outPin = &out[0];
  float* nativeoutPin = outPin;
  vtk::ConvertManagedToNative<::vtkLinearTransform>(m_instance)->InternalTransformNormal(nativeinPin, nativeoutPin);
}



void vtkLinearTransform::InternalTransformNormal(array<double>^ in, array<double>^ out)
{
  pin_ptr<double> inPin = &in[0];
  double* nativeinPin = inPin;
  pin_ptr<double> outPin = &out[0];
  double* nativeoutPin = outPin;
  vtk::ConvertManagedToNative<::vtkLinearTransform>(m_instance)->InternalTransformNormal(nativeinPin, nativeoutPin);
}



void vtkLinearTransform::InternalTransformVector(array<float>^ in, array<float>^ out)
{
  pin_ptr<float> inPin = &in[0];
  float* nativeinPin = inPin;
  pin_ptr<float> outPin = &out[0];
  float* nativeoutPin = outPin;
  vtk::ConvertManagedToNative<::vtkLinearTransform>(m_instance)->InternalTransformVector(nativeinPin, nativeoutPin);
}



void vtkLinearTransform::InternalTransformVector(array<double>^ in, array<double>^ out)
{
  pin_ptr<double> inPin = &in[0];
  double* nativeinPin = inPin;
  pin_ptr<double> outPin = &out[0];
  double* nativeoutPin = outPin;
  vtk::ConvertManagedToNative<::vtkLinearTransform>(m_instance)->InternalTransformVector(nativeinPin, nativeoutPin);
}



void vtkLinearTransform::InternalTransformDerivative(array<float>^ in, array<float>^ out, array<float,2>^ derivative)
{
  pin_ptr<float> inPin = &in[0];
  float* nativeinPin = inPin;
  pin_ptr<float> outPin = &out[0];
  float* nativeoutPin = outPin;
  float nativederivative[3][3];
  for (size_t iderivative=0; iderivative<3; iderivative++)
    for (size_t jderivative=0; jderivative<3; jderivative++)
      nativederivative[iderivative][jderivative] = derivative[iderivative,jderivative];
  vtk::ConvertManagedToNative<::vtkLinearTransform>(m_instance)->InternalTransformDerivative(nativeinPin, nativeoutPin, nativederivative);
  for (size_t iderivative=0; iderivative<3; iderivative++)
    for (size_t jderivative=0; jderivative<3; jderivative++)
      derivative[iderivative,jderivative] = nativederivative[iderivative][jderivative];
}



void vtkLinearTransform::InternalTransformDerivative(array<double>^ in, array<double>^ out, array<double,2>^ derivative)
{
  pin_ptr<double> inPin = &in[0];
  double* nativeinPin = inPin;
  pin_ptr<double> outPin = &out[0];
  double* nativeoutPin = outPin;
  double nativederivative[3][3];
  for (size_t iderivative=0; iderivative<3; iderivative++)
    for (size_t jderivative=0; jderivative<3; jderivative++)
      nativederivative[iderivative][jderivative] = derivative[iderivative,jderivative];
  vtk::ConvertManagedToNative<::vtkLinearTransform>(m_instance)->InternalTransformDerivative(nativeinPin, nativeoutPin, nativederivative);
  for (size_t iderivative=0; iderivative<3; iderivative++)
    for (size_t jderivative=0; jderivative<3; jderivative++)
      derivative[iderivative,jderivative] = nativederivative[iderivative][jderivative];
}



  vtkLinearTransform::vtkLinearTransform(System::IntPtr native, bool bConst) : vtkHomogeneousTransform(native, bConst) {}



  vtkLinearTransform::vtkLinearTransform(bool donothing) : vtkHomogeneousTransform(donothing) {}



  vtkLinearTransform::vtkLinearTransform() : vtkHomogeneousTransform(false) {
  this->SetNativePointer(IntPtr(::vtkLinearTransform::New()));
}



  vtkLinearTransform::~vtkLinearTransform() { }





} // end namespace vtkCommon
