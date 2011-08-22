

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkWarpTransformDotNet.h"

// native includes
#include "strstream"
#include "vtkWarpTransform.h"

using namespace System;

namespace vtk {

System::String^ vtkWarpTransform::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkWarpTransform>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkWarpTransform::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkWarpTransform>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkWarpTransform^ vtkWarpTransform::NewInstance()
{
  ::vtkWarpTransform* retVal = static_cast<::vtkWarpTransform*>(vtk::ConvertManagedToNative<::vtkWarpTransform>(m_instance)->NewInstance());
  return gcnew vtkWarpTransform(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkWarpTransform::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkWarpTransform>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkWarpTransform::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkWarpTransform>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkWarpTransform::Inverse()
{
  vtk::ConvertManagedToNative<::vtkWarpTransform>(m_instance)->Inverse();
}



int vtkWarpTransform::GetInverseFlag()
{
  int retVal = vtk::ConvertManagedToNative<::vtkWarpTransform>(m_instance)->GetInverseFlag();
  return retVal;
}



void vtkWarpTransform::SetInverseTolerance(double arg0)
{
  vtk::ConvertManagedToNative<::vtkWarpTransform>(m_instance)->SetInverseTolerance(arg0);
}



double vtkWarpTransform::GetInverseTolerance()
{
  double retVal = vtk::ConvertManagedToNative<::vtkWarpTransform>(m_instance)->GetInverseTolerance();
  return retVal;
}



void vtkWarpTransform::SetInverseIterations(int arg0)
{
  vtk::ConvertManagedToNative<::vtkWarpTransform>(m_instance)->SetInverseIterations(arg0);
}



int vtkWarpTransform::GetInverseIterations()
{
  int retVal = vtk::ConvertManagedToNative<::vtkWarpTransform>(m_instance)->GetInverseIterations();
  return retVal;
}



void vtkWarpTransform::InternalTransformPoint(array<float>^ in, array<float>^ out)
{
  pin_ptr<float> inPin = &in[0];
  float* nativeinPin = inPin;
  pin_ptr<float> outPin = &out[0];
  float* nativeoutPin = outPin;
  vtk::ConvertManagedToNative<::vtkWarpTransform>(m_instance)->InternalTransformPoint(nativeinPin, nativeoutPin);
}



void vtkWarpTransform::InternalTransformPoint(array<double>^ in, array<double>^ out)
{
  pin_ptr<double> inPin = &in[0];
  double* nativeinPin = inPin;
  pin_ptr<double> outPin = &out[0];
  double* nativeoutPin = outPin;
  vtk::ConvertManagedToNative<::vtkWarpTransform>(m_instance)->InternalTransformPoint(nativeinPin, nativeoutPin);
}



void vtkWarpTransform::InternalTransformDerivative(array<float>^ in, array<float>^ out, array<float,2>^ derivative)
{
  pin_ptr<float> inPin = &in[0];
  float* nativeinPin = inPin;
  pin_ptr<float> outPin = &out[0];
  float* nativeoutPin = outPin;
  float nativederivative[3][3];
  for (size_t iderivative=0; iderivative<3; iderivative++)
    for (size_t jderivative=0; jderivative<3; jderivative++)
      nativederivative[iderivative][jderivative] = derivative[iderivative,jderivative];
  vtk::ConvertManagedToNative<::vtkWarpTransform>(m_instance)->InternalTransformDerivative(nativeinPin, nativeoutPin, nativederivative);
  for (size_t iderivative=0; iderivative<3; iderivative++)
    for (size_t jderivative=0; jderivative<3; jderivative++)
      derivative[iderivative,jderivative] = nativederivative[iderivative][jderivative];
}



void vtkWarpTransform::InternalTransformDerivative(array<double>^ in, array<double>^ out, array<double,2>^ derivative)
{
  pin_ptr<double> inPin = &in[0];
  double* nativeinPin = inPin;
  pin_ptr<double> outPin = &out[0];
  double* nativeoutPin = outPin;
  double nativederivative[3][3];
  for (size_t iderivative=0; iderivative<3; iderivative++)
    for (size_t jderivative=0; jderivative<3; jderivative++)
      nativederivative[iderivative][jderivative] = derivative[iderivative,jderivative];
  vtk::ConvertManagedToNative<::vtkWarpTransform>(m_instance)->InternalTransformDerivative(nativeinPin, nativeoutPin, nativederivative);
  for (size_t iderivative=0; iderivative<3; iderivative++)
    for (size_t jderivative=0; jderivative<3; jderivative++)
      derivative[iderivative,jderivative] = nativederivative[iderivative][jderivative];
}



void vtkWarpTransform::TemplateTransformPoint(array<float>^ in, array<float>^ out)
{
  pin_ptr<float> inPin = &in[0];
  float* nativeinPin = inPin;
  pin_ptr<float> outPin = &out[0];
  float* nativeoutPin = outPin;
  vtk::ConvertManagedToNative<::vtkWarpTransform>(m_instance)->TemplateTransformPoint(nativeinPin, nativeoutPin);
}



void vtkWarpTransform::TemplateTransformPoint(array<double>^ in, array<double>^ out)
{
  pin_ptr<double> inPin = &in[0];
  double* nativeinPin = inPin;
  pin_ptr<double> outPin = &out[0];
  double* nativeoutPin = outPin;
  vtk::ConvertManagedToNative<::vtkWarpTransform>(m_instance)->TemplateTransformPoint(nativeinPin, nativeoutPin);
}



void vtkWarpTransform::TemplateTransformPoint(array<float>^ in, array<float>^ out, array<float,2>^ derivative)
{
  pin_ptr<float> inPin = &in[0];
  float* nativeinPin = inPin;
  pin_ptr<float> outPin = &out[0];
  float* nativeoutPin = outPin;
  float nativederivative[3][3];
  for (size_t iderivative=0; iderivative<3; iderivative++)
    for (size_t jderivative=0; jderivative<3; jderivative++)
      nativederivative[iderivative][jderivative] = derivative[iderivative,jderivative];
  vtk::ConvertManagedToNative<::vtkWarpTransform>(m_instance)->TemplateTransformPoint(nativeinPin, nativeoutPin, nativederivative);
  for (size_t iderivative=0; iderivative<3; iderivative++)
    for (size_t jderivative=0; jderivative<3; jderivative++)
      derivative[iderivative,jderivative] = nativederivative[iderivative][jderivative];
}



void vtkWarpTransform::TemplateTransformPoint(array<double>^ in, array<double>^ out, array<double,2>^ derivative)
{
  pin_ptr<double> inPin = &in[0];
  double* nativeinPin = inPin;
  pin_ptr<double> outPin = &out[0];
  double* nativeoutPin = outPin;
  double nativederivative[3][3];
  for (size_t iderivative=0; iderivative<3; iderivative++)
    for (size_t jderivative=0; jderivative<3; jderivative++)
      nativederivative[iderivative][jderivative] = derivative[iderivative,jderivative];
  vtk::ConvertManagedToNative<::vtkWarpTransform>(m_instance)->TemplateTransformPoint(nativeinPin, nativeoutPin, nativederivative);
  for (size_t iderivative=0; iderivative<3; iderivative++)
    for (size_t jderivative=0; jderivative<3; jderivative++)
      derivative[iderivative,jderivative] = nativederivative[iderivative][jderivative];
}



void vtkWarpTransform::TemplateTransformInverse(array<float>^ in, array<float>^ out)
{
  pin_ptr<float> inPin = &in[0];
  float* nativeinPin = inPin;
  pin_ptr<float> outPin = &out[0];
  float* nativeoutPin = outPin;
  vtk::ConvertManagedToNative<::vtkWarpTransform>(m_instance)->TemplateTransformInverse(nativeinPin, nativeoutPin);
}



void vtkWarpTransform::TemplateTransformInverse(array<double>^ in, array<double>^ out)
{
  pin_ptr<double> inPin = &in[0];
  double* nativeinPin = inPin;
  pin_ptr<double> outPin = &out[0];
  double* nativeoutPin = outPin;
  vtk::ConvertManagedToNative<::vtkWarpTransform>(m_instance)->TemplateTransformInverse(nativeinPin, nativeoutPin);
}



void vtkWarpTransform::TemplateTransformInverse(array<float>^ in, array<float>^ out, array<float,2>^ derivative)
{
  pin_ptr<float> inPin = &in[0];
  float* nativeinPin = inPin;
  pin_ptr<float> outPin = &out[0];
  float* nativeoutPin = outPin;
  float nativederivative[3][3];
  for (size_t iderivative=0; iderivative<3; iderivative++)
    for (size_t jderivative=0; jderivative<3; jderivative++)
      nativederivative[iderivative][jderivative] = derivative[iderivative,jderivative];
  vtk::ConvertManagedToNative<::vtkWarpTransform>(m_instance)->TemplateTransformInverse(nativeinPin, nativeoutPin, nativederivative);
  for (size_t iderivative=0; iderivative<3; iderivative++)
    for (size_t jderivative=0; jderivative<3; jderivative++)
      derivative[iderivative,jderivative] = nativederivative[iderivative][jderivative];
}



void vtkWarpTransform::TemplateTransformInverse(array<double>^ in, array<double>^ out, array<double,2>^ derivative)
{
  pin_ptr<double> inPin = &in[0];
  double* nativeinPin = inPin;
  pin_ptr<double> outPin = &out[0];
  double* nativeoutPin = outPin;
  double nativederivative[3][3];
  for (size_t iderivative=0; iderivative<3; iderivative++)
    for (size_t jderivative=0; jderivative<3; jderivative++)
      nativederivative[iderivative][jderivative] = derivative[iderivative,jderivative];
  vtk::ConvertManagedToNative<::vtkWarpTransform>(m_instance)->TemplateTransformInverse(nativeinPin, nativeoutPin, nativederivative);
  for (size_t iderivative=0; iderivative<3; iderivative++)
    for (size_t jderivative=0; jderivative<3; jderivative++)
      derivative[iderivative,jderivative] = nativederivative[iderivative][jderivative];
}



  vtkWarpTransform::vtkWarpTransform(System::IntPtr native, bool bConst) : vtkAbstractTransform(native, bConst) {}



  vtkWarpTransform::vtkWarpTransform(bool donothing) : vtkAbstractTransform(donothing) {}



  vtkWarpTransform::vtkWarpTransform() : vtkAbstractTransform(false) {
  this->SetNativePointer(IntPtr(::vtkWarpTransform::New()));
}



  vtkWarpTransform::~vtkWarpTransform() { }





} // end namespace vtkCommon
