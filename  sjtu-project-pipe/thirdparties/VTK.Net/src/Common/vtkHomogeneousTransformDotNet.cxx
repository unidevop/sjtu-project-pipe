

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkHomogeneousTransformDotNet.h"
#include "vtkDataArrayDotNet.h"
#include "vtkMatrix4x4DotNet.h"
#include "vtkPointsDotNet.h"

// native includes
#include "strstream"
#include "vtkHomogeneousTransform.h"
#include "vtkDataArray.h"
#include "vtkMatrix4x4.h"
#include "vtkPoints.h"

using namespace System;

namespace vtk {

System::String^ vtkHomogeneousTransform::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkHomogeneousTransform>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkHomogeneousTransform::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkHomogeneousTransform>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkHomogeneousTransform^ vtkHomogeneousTransform::NewInstance()
{
  ::vtkHomogeneousTransform* retVal = static_cast<::vtkHomogeneousTransform*>(vtk::ConvertManagedToNative<::vtkHomogeneousTransform>(m_instance)->NewInstance());
  return gcnew vtkHomogeneousTransform(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkHomogeneousTransform::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkHomogeneousTransform>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkHomogeneousTransform::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkHomogeneousTransform>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkHomogeneousTransform::TransformPoints(vtkPoints^ inPts, vtkPoints^ outPts)
{
  ::vtkPoints* inPtsWrap = vtk::ConvertManagedToNative<::vtkPoints>(inPts->GetNativePointer());
  ::vtkPoints* outPtsWrap = vtk::ConvertManagedToNative<::vtkPoints>(outPts->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkHomogeneousTransform>(m_instance)->TransformPoints(inPtsWrap, outPtsWrap);
}



void vtkHomogeneousTransform::TransformPointsNormalsVectors(vtkPoints^ inPts, vtkPoints^ outPts, vtkDataArray^ inNms, vtkDataArray^ outNms, vtkDataArray^ inVrs, vtkDataArray^ outVrs)
{
  ::vtkPoints* inPtsWrap = vtk::ConvertManagedToNative<::vtkPoints>(inPts->GetNativePointer());
  ::vtkPoints* outPtsWrap = vtk::ConvertManagedToNative<::vtkPoints>(outPts->GetNativePointer());
  ::vtkDataArray* inNmsWrap = vtk::ConvertManagedToNative<::vtkDataArray>(inNms->GetNativePointer());
  ::vtkDataArray* outNmsWrap = vtk::ConvertManagedToNative<::vtkDataArray>(outNms->GetNativePointer());
  ::vtkDataArray* inVrsWrap = vtk::ConvertManagedToNative<::vtkDataArray>(inVrs->GetNativePointer());
  ::vtkDataArray* outVrsWrap = vtk::ConvertManagedToNative<::vtkDataArray>(outVrs->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkHomogeneousTransform>(m_instance)->TransformPointsNormalsVectors(inPtsWrap, outPtsWrap, inNmsWrap, outNmsWrap, inVrsWrap, outVrsWrap);
}



void vtkHomogeneousTransform::GetMatrix(vtkMatrix4x4^ m)
{
  ::vtkMatrix4x4* mWrap = vtk::ConvertManagedToNative<::vtkMatrix4x4>(m->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkHomogeneousTransform>(m_instance)->GetMatrix(mWrap);
}



vtkMatrix4x4^ vtkHomogeneousTransform::GetMatrix()
{
  ::vtkMatrix4x4* retVal = static_cast<::vtkMatrix4x4*>(vtk::ConvertManagedToNative<::vtkHomogeneousTransform>(m_instance)->GetMatrix());
  return gcnew vtkMatrix4x4(IntPtr(retVal), false);
}



vtkHomogeneousTransform^ vtkHomogeneousTransform::GetHomogeneousInverse()
{
  ::vtkHomogeneousTransform* retVal = static_cast<::vtkHomogeneousTransform*>(vtk::ConvertManagedToNative<::vtkHomogeneousTransform>(m_instance)->GetHomogeneousInverse());
  return gcnew vtkHomogeneousTransform(IntPtr(retVal), false);
}



void vtkHomogeneousTransform::InternalTransformPoint(array<float>^ in, array<float>^ out)
{
  pin_ptr<float> inPin = &in[0];
  float* nativeinPin = inPin;
  pin_ptr<float> outPin = &out[0];
  float* nativeoutPin = outPin;
  vtk::ConvertManagedToNative<::vtkHomogeneousTransform>(m_instance)->InternalTransformPoint(nativeinPin, nativeoutPin);
}



void vtkHomogeneousTransform::InternalTransformPoint(array<double>^ in, array<double>^ out)
{
  pin_ptr<double> inPin = &in[0];
  double* nativeinPin = inPin;
  pin_ptr<double> outPin = &out[0];
  double* nativeoutPin = outPin;
  vtk::ConvertManagedToNative<::vtkHomogeneousTransform>(m_instance)->InternalTransformPoint(nativeinPin, nativeoutPin);
}



void vtkHomogeneousTransform::InternalTransformDerivative(array<float>^ in, array<float>^ out, array<float,2>^ derivative)
{
  pin_ptr<float> inPin = &in[0];
  float* nativeinPin = inPin;
  pin_ptr<float> outPin = &out[0];
  float* nativeoutPin = outPin;
  float nativederivative[3][3];
  for (size_t iderivative=0; iderivative<3; iderivative++)
    for (size_t jderivative=0; jderivative<3; jderivative++)
      nativederivative[iderivative][jderivative] = derivative[iderivative,jderivative];
  vtk::ConvertManagedToNative<::vtkHomogeneousTransform>(m_instance)->InternalTransformDerivative(nativeinPin, nativeoutPin, nativederivative);
  for (size_t iderivative=0; iderivative<3; iderivative++)
    for (size_t jderivative=0; jderivative<3; jderivative++)
      derivative[iderivative,jderivative] = nativederivative[iderivative][jderivative];
}



void vtkHomogeneousTransform::InternalTransformDerivative(array<double>^ in, array<double>^ out, array<double,2>^ derivative)
{
  pin_ptr<double> inPin = &in[0];
  double* nativeinPin = inPin;
  pin_ptr<double> outPin = &out[0];
  double* nativeoutPin = outPin;
  double nativederivative[3][3];
  for (size_t iderivative=0; iderivative<3; iderivative++)
    for (size_t jderivative=0; jderivative<3; jderivative++)
      nativederivative[iderivative][jderivative] = derivative[iderivative,jderivative];
  vtk::ConvertManagedToNative<::vtkHomogeneousTransform>(m_instance)->InternalTransformDerivative(nativeinPin, nativeoutPin, nativederivative);
  for (size_t iderivative=0; iderivative<3; iderivative++)
    for (size_t jderivative=0; jderivative<3; jderivative++)
      derivative[iderivative,jderivative] = nativederivative[iderivative][jderivative];
}



  vtkHomogeneousTransform::vtkHomogeneousTransform(System::IntPtr native, bool bConst) : vtkAbstractTransform(native, bConst) {}



  vtkHomogeneousTransform::vtkHomogeneousTransform(bool donothing) : vtkAbstractTransform(donothing) {}



  vtkHomogeneousTransform::vtkHomogeneousTransform() : vtkAbstractTransform(false) {
  this->SetNativePointer(IntPtr(::vtkHomogeneousTransform::New()));
}



  vtkHomogeneousTransform::~vtkHomogeneousTransform() { }





} // end namespace vtkCommon
