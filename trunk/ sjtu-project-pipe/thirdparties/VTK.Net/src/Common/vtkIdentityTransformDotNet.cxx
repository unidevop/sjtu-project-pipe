

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkIdentityTransformDotNet.h"
#include "vtkAbstractTransformDotNet.h"
#include "vtkDataArrayDotNet.h"
#include "vtkObjectDotNet.h"
#include "vtkPointsDotNet.h"

// native includes
#include "strstream"
#include "vtkIdentityTransform.h"
#include "vtkAbstractTransform.h"
#include "vtkDataArray.h"
#include "vtkObject.h"
#include "vtkPoints.h"

using namespace System;

namespace vtk {

System::String^ vtkIdentityTransform::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkIdentityTransform>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkIdentityTransform::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkIdentityTransform>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkIdentityTransform^ vtkIdentityTransform::NewInstance()
{
  ::vtkIdentityTransform* retVal = static_cast<::vtkIdentityTransform*>(vtk::ConvertManagedToNative<::vtkIdentityTransform>(m_instance)->NewInstance());
  return gcnew vtkIdentityTransform(IntPtr(retVal), false);
}



vtkIdentityTransform^ vtkIdentityTransform::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkIdentityTransform* retVal = static_cast<::vtkIdentityTransform*>(::vtkIdentityTransform::SafeDownCast(oWrap));
  return gcnew vtkIdentityTransform(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkIdentityTransform::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkIdentityTransform>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkIdentityTransform::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkIdentityTransform>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkIdentityTransform::TransformPoints(vtkPoints^ inPts, vtkPoints^ outPts)
{
  ::vtkPoints* inPtsWrap = vtk::ConvertManagedToNative<::vtkPoints>(inPts->GetNativePointer());
  ::vtkPoints* outPtsWrap = vtk::ConvertManagedToNative<::vtkPoints>(outPts->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkIdentityTransform>(m_instance)->TransformPoints(inPtsWrap, outPtsWrap);
}



void vtkIdentityTransform::TransformNormals(vtkDataArray^ inNms, vtkDataArray^ outNms)
{
  ::vtkDataArray* inNmsWrap = vtk::ConvertManagedToNative<::vtkDataArray>(inNms->GetNativePointer());
  ::vtkDataArray* outNmsWrap = vtk::ConvertManagedToNative<::vtkDataArray>(outNms->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkIdentityTransform>(m_instance)->TransformNormals(inNmsWrap, outNmsWrap);
}



void vtkIdentityTransform::TransformVectors(vtkDataArray^ inVrs, vtkDataArray^ outVrs)
{
  ::vtkDataArray* inVrsWrap = vtk::ConvertManagedToNative<::vtkDataArray>(inVrs->GetNativePointer());
  ::vtkDataArray* outVrsWrap = vtk::ConvertManagedToNative<::vtkDataArray>(outVrs->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkIdentityTransform>(m_instance)->TransformVectors(inVrsWrap, outVrsWrap);
}



void vtkIdentityTransform::TransformPointsNormalsVectors(vtkPoints^ inPts, vtkPoints^ outPts, vtkDataArray^ inNms, vtkDataArray^ outNms, vtkDataArray^ inVrs, vtkDataArray^ outVrs)
{
  ::vtkPoints* inPtsWrap = vtk::ConvertManagedToNative<::vtkPoints>(inPts->GetNativePointer());
  ::vtkPoints* outPtsWrap = vtk::ConvertManagedToNative<::vtkPoints>(outPts->GetNativePointer());
  ::vtkDataArray* inNmsWrap = vtk::ConvertManagedToNative<::vtkDataArray>(inNms->GetNativePointer());
  ::vtkDataArray* outNmsWrap = vtk::ConvertManagedToNative<::vtkDataArray>(outNms->GetNativePointer());
  ::vtkDataArray* inVrsWrap = vtk::ConvertManagedToNative<::vtkDataArray>(inVrs->GetNativePointer());
  ::vtkDataArray* outVrsWrap = vtk::ConvertManagedToNative<::vtkDataArray>(outVrs->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkIdentityTransform>(m_instance)->TransformPointsNormalsVectors(inPtsWrap, outPtsWrap, inNmsWrap, outNmsWrap, inVrsWrap, outVrsWrap);
}



void vtkIdentityTransform::Inverse()
{
  vtk::ConvertManagedToNative<::vtkIdentityTransform>(m_instance)->Inverse();
}



void vtkIdentityTransform::InternalTransformPoint(array<float>^ in, array<float>^ out)
{
  pin_ptr<float> inPin = &in[0];
  float* nativeinPin = inPin;
  pin_ptr<float> outPin = &out[0];
  float* nativeoutPin = outPin;
  vtk::ConvertManagedToNative<::vtkIdentityTransform>(m_instance)->InternalTransformPoint(nativeinPin, nativeoutPin);
}



void vtkIdentityTransform::InternalTransformPoint(array<double>^ in, array<double>^ out)
{
  pin_ptr<double> inPin = &in[0];
  double* nativeinPin = inPin;
  pin_ptr<double> outPin = &out[0];
  double* nativeoutPin = outPin;
  vtk::ConvertManagedToNative<::vtkIdentityTransform>(m_instance)->InternalTransformPoint(nativeinPin, nativeoutPin);
}



void vtkIdentityTransform::InternalTransformNormal(array<float>^ in, array<float>^ out)
{
  pin_ptr<float> inPin = &in[0];
  float* nativeinPin = inPin;
  pin_ptr<float> outPin = &out[0];
  float* nativeoutPin = outPin;
  vtk::ConvertManagedToNative<::vtkIdentityTransform>(m_instance)->InternalTransformNormal(nativeinPin, nativeoutPin);
}



void vtkIdentityTransform::InternalTransformNormal(array<double>^ in, array<double>^ out)
{
  pin_ptr<double> inPin = &in[0];
  double* nativeinPin = inPin;
  pin_ptr<double> outPin = &out[0];
  double* nativeoutPin = outPin;
  vtk::ConvertManagedToNative<::vtkIdentityTransform>(m_instance)->InternalTransformNormal(nativeinPin, nativeoutPin);
}



void vtkIdentityTransform::InternalTransformVector(array<float>^ in, array<float>^ out)
{
  pin_ptr<float> inPin = &in[0];
  float* nativeinPin = inPin;
  pin_ptr<float> outPin = &out[0];
  float* nativeoutPin = outPin;
  vtk::ConvertManagedToNative<::vtkIdentityTransform>(m_instance)->InternalTransformVector(nativeinPin, nativeoutPin);
}



void vtkIdentityTransform::InternalTransformVector(array<double>^ in, array<double>^ out)
{
  pin_ptr<double> inPin = &in[0];
  double* nativeinPin = inPin;
  pin_ptr<double> outPin = &out[0];
  double* nativeoutPin = outPin;
  vtk::ConvertManagedToNative<::vtkIdentityTransform>(m_instance)->InternalTransformVector(nativeinPin, nativeoutPin);
}



void vtkIdentityTransform::InternalTransformDerivative(array<float>^ in, array<float>^ out, array<float,2>^ derivative)
{
  pin_ptr<float> inPin = &in[0];
  float* nativeinPin = inPin;
  pin_ptr<float> outPin = &out[0];
  float* nativeoutPin = outPin;
  float nativederivative[3][3];
  for (size_t iderivative=0; iderivative<3; iderivative++)
    for (size_t jderivative=0; jderivative<3; jderivative++)
      nativederivative[iderivative][jderivative] = derivative[iderivative,jderivative];
  vtk::ConvertManagedToNative<::vtkIdentityTransform>(m_instance)->InternalTransformDerivative(nativeinPin, nativeoutPin, nativederivative);
  for (size_t iderivative=0; iderivative<3; iderivative++)
    for (size_t jderivative=0; jderivative<3; jderivative++)
      derivative[iderivative,jderivative] = nativederivative[iderivative][jderivative];
}



void vtkIdentityTransform::InternalTransformDerivative(array<double>^ in, array<double>^ out, array<double,2>^ derivative)
{
  pin_ptr<double> inPin = &in[0];
  double* nativeinPin = inPin;
  pin_ptr<double> outPin = &out[0];
  double* nativeoutPin = outPin;
  double nativederivative[3][3];
  for (size_t iderivative=0; iderivative<3; iderivative++)
    for (size_t jderivative=0; jderivative<3; jderivative++)
      nativederivative[iderivative][jderivative] = derivative[iderivative,jderivative];
  vtk::ConvertManagedToNative<::vtkIdentityTransform>(m_instance)->InternalTransformDerivative(nativeinPin, nativeoutPin, nativederivative);
  for (size_t iderivative=0; iderivative<3; iderivative++)
    for (size_t jderivative=0; jderivative<3; jderivative++)
      derivative[iderivative,jderivative] = nativederivative[iderivative][jderivative];
}



vtkAbstractTransform^ vtkIdentityTransform::MakeTransform()
{
  ::vtkAbstractTransform* retVal = static_cast<::vtkAbstractTransform*>(vtk::ConvertManagedToNative<::vtkIdentityTransform>(m_instance)->MakeTransform());
  return gcnew vtkAbstractTransform(IntPtr(retVal), false);
}



  vtkIdentityTransform::vtkIdentityTransform(System::IntPtr native, bool bConst) : vtkLinearTransform(native, bConst) {}



  vtkIdentityTransform::vtkIdentityTransform(bool donothing) : vtkLinearTransform(donothing) {}



  vtkIdentityTransform::vtkIdentityTransform() : vtkLinearTransform(false) {
  this->SetNativePointer(IntPtr(::vtkIdentityTransform::New()));
}



  vtkIdentityTransform::~vtkIdentityTransform() { }





} // end namespace vtkCommon
