

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkMathDotNet.h"
#include "vtkDataArrayDotNet.h"

// native includes
#include "strstream"
#include "vtkMath.h"
#include "vtkDataArray.h"

using namespace System;

namespace vtk {

System::String^ vtkMath::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkMath>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkMath::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkMath>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkMath^ vtkMath::NewInstance()
{
  ::vtkMath* retVal = static_cast<::vtkMath*>(vtk::ConvertManagedToNative<::vtkMath>(m_instance)->NewInstance());
  return gcnew vtkMath(IntPtr(retVal), false);
}



vtkMath^ vtkMath::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkMath* retVal = static_cast<::vtkMath*>(::vtkMath::SafeDownCast(oWrap));
  return gcnew vtkMath(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkMath::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkMath>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkMath::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkMath>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




float vtkMath::Pi()
{
  float retVal = ::vtkMath::Pi();
  return retVal;
}



float vtkMath::DegreesToRadians()
{
  float retVal = ::vtkMath::DegreesToRadians();
  return retVal;
}



float vtkMath::RadiansToDegrees()
{
  float retVal = ::vtkMath::RadiansToDegrees();
  return retVal;
}



double vtkMath::DoubleDegreesToRadians()
{
  double retVal = ::vtkMath::DoubleDegreesToRadians();
  return retVal;
}



double vtkMath::DoublePi()
{
  double retVal = ::vtkMath::DoublePi();
  return retVal;
}



double vtkMath::DoubleRadiansToDegrees()
{
  double retVal = ::vtkMath::DoubleRadiansToDegrees();
  return retVal;
}



double vtkMath::DoubleTwoPi()
{
  double retVal = ::vtkMath::DoubleTwoPi();
  return retVal;
}



int vtkMath::Round(float f)
{
  int retVal = ::vtkMath::Round(f);
  return retVal;
}



int vtkMath::Round(double f)
{
  int retVal = ::vtkMath::Round(f);
  return retVal;
}



int vtkMath::Floor(double x)
{
  int retVal = ::vtkMath::Floor(x);
  return retVal;
}



float vtkMath::Dot(array<float>^ x, array<float>^ y)
{
  pin_ptr<float> xPin = &x[0];
  float* nativexPin = xPin;
  pin_ptr<float> yPin = &y[0];
  float* nativeyPin = yPin;
  float retVal = ::vtkMath::Dot(nativexPin, nativeyPin);
  return retVal;
}



double vtkMath::Dot(array<double>^ x, array<double>^ y)
{
  pin_ptr<double> xPin = &x[0];
  double* nativexPin = xPin;
  pin_ptr<double> yPin = &y[0];
  double* nativeyPin = yPin;
  double retVal = ::vtkMath::Dot(nativexPin, nativeyPin);
  return retVal;
}



void vtkMath::Cross(array<float>^ x, array<float>^ y, array<float>^ z)
{
  pin_ptr<float> xPin = &x[0];
  float* nativexPin = xPin;
  pin_ptr<float> yPin = &y[0];
  float* nativeyPin = yPin;
  pin_ptr<float> zPin = &z[0];
  float* nativezPin = zPin;
  ::vtkMath::Cross(nativexPin, nativeyPin, nativezPin);
}



void vtkMath::Cross(array<double>^ x, array<double>^ y, array<double>^ z)
{
  pin_ptr<double> xPin = &x[0];
  double* nativexPin = xPin;
  pin_ptr<double> yPin = &y[0];
  double* nativeyPin = yPin;
  pin_ptr<double> zPin = &z[0];
  double* nativezPin = zPin;
  ::vtkMath::Cross(nativexPin, nativeyPin, nativezPin);
}



float vtkMath::Norm(array<float>^ x, int n)
{
  pin_ptr<float> xPin = &x[0];
  float* nativexPin = xPin;
  float retVal = ::vtkMath::Norm(nativexPin, n);
  return retVal;
}



double vtkMath::Norm(array<double>^ x, int n)
{
  pin_ptr<double> xPin = &x[0];
  double* nativexPin = xPin;
  double retVal = ::vtkMath::Norm(nativexPin, n);
  return retVal;
}



float vtkMath::Norm(array<float>^ x)
{
  pin_ptr<float> xPin = &x[0];
  float* nativexPin = xPin;
  float retVal = ::vtkMath::Norm(nativexPin);
  return retVal;
}



double vtkMath::Norm(array<double>^ x)
{
  pin_ptr<double> xPin = &x[0];
  double* nativexPin = xPin;
  double retVal = ::vtkMath::Norm(nativexPin);
  return retVal;
}



float vtkMath::Normalize(array<float>^ x)
{
  pin_ptr<float> xPin = &x[0];
  float* nativexPin = xPin;
  float retVal = ::vtkMath::Normalize(nativexPin);
  return retVal;
}



double vtkMath::Normalize(array<double>^ x)
{
  pin_ptr<double> xPin = &x[0];
  double* nativexPin = xPin;
  double retVal = ::vtkMath::Normalize(nativexPin);
  return retVal;
}



void vtkMath::Perpendiculars(array<double>^ x, array<double>^ y, array<double>^ z, double theta)
{
  pin_ptr<double> xPin = &x[0];
  double* nativexPin = xPin;
  pin_ptr<double> yPin = &y[0];
  double* nativeyPin = yPin;
  pin_ptr<double> zPin = &z[0];
  double* nativezPin = zPin;
  ::vtkMath::Perpendiculars(nativexPin, nativeyPin, nativezPin, theta);
}



void vtkMath::Perpendiculars(array<float>^ x, array<float>^ y, array<float>^ z, double theta)
{
  pin_ptr<float> xPin = &x[0];
  float* nativexPin = xPin;
  pin_ptr<float> yPin = &y[0];
  float* nativeyPin = yPin;
  pin_ptr<float> zPin = &z[0];
  float* nativezPin = zPin;
  ::vtkMath::Perpendiculars(nativexPin, nativeyPin, nativezPin, theta);
}



float vtkMath::Distance2BetweenPoints(array<float>^ x, array<float>^ y)
{
  pin_ptr<float> xPin = &x[0];
  float* nativexPin = xPin;
  pin_ptr<float> yPin = &y[0];
  float* nativeyPin = yPin;
  float retVal = ::vtkMath::Distance2BetweenPoints(nativexPin, nativeyPin);
  return retVal;
}



double vtkMath::Distance2BetweenPoints(array<double>^ x, array<double>^ y)
{
  pin_ptr<double> xPin = &x[0];
  double* nativexPin = xPin;
  pin_ptr<double> yPin = &y[0];
  double* nativeyPin = yPin;
  double retVal = ::vtkMath::Distance2BetweenPoints(nativexPin, nativeyPin);
  return retVal;
}



float vtkMath::Dot2D(array<float>^ x, array<float>^ y)
{
  pin_ptr<float> xPin = &x[0];
  float* nativexPin = xPin;
  pin_ptr<float> yPin = &y[0];
  float* nativeyPin = yPin;
  float retVal = ::vtkMath::Dot2D(nativexPin, nativeyPin);
  return retVal;
}



double vtkMath::Dot2D(array<double>^ x, array<double>^ y)
{
  pin_ptr<double> xPin = &x[0];
  double* nativexPin = xPin;
  pin_ptr<double> yPin = &y[0];
  double* nativeyPin = yPin;
  double retVal = ::vtkMath::Dot2D(nativexPin, nativeyPin);
  return retVal;
}



float vtkMath::Norm2D(array<float>^ x)
{
  pin_ptr<float> xPin = &x[0];
  float* nativexPin = xPin;
  float retVal = ::vtkMath::Norm2D(nativexPin);
  return retVal;
}



double vtkMath::Norm2D(array<double>^ x)
{
  pin_ptr<double> xPin = &x[0];
  double* nativexPin = xPin;
  double retVal = ::vtkMath::Norm2D(nativexPin);
  return retVal;
}



float vtkMath::Normalize2D(array<float>^ x)
{
  pin_ptr<float> xPin = &x[0];
  float* nativexPin = xPin;
  float retVal = ::vtkMath::Normalize2D(nativexPin);
  return retVal;
}



double vtkMath::Normalize2D(array<double>^ x)
{
  pin_ptr<double> xPin = &x[0];
  double* nativexPin = xPin;
  double retVal = ::vtkMath::Normalize2D(nativexPin);
  return retVal;
}



float vtkMath::Determinant2x2(array<float>^ c1, array<float>^ c2)
{
  pin_ptr<float> c1Pin = &c1[0];
  float* nativec1Pin = c1Pin;
  pin_ptr<float> c2Pin = &c2[0];
  float* nativec2Pin = c2Pin;
  float retVal = ::vtkMath::Determinant2x2(nativec1Pin, nativec2Pin);
  return retVal;
}



double vtkMath::Determinant2x2(double a, double b, double c, double d)
{
  double retVal = ::vtkMath::Determinant2x2(a, b, c, d);
  return retVal;
}



double vtkMath::Determinant2x2(array<double>^ c1, array<double>^ c2)
{
  pin_ptr<double> c1Pin = &c1[0];
  double* nativec1Pin = c1Pin;
  pin_ptr<double> c2Pin = &c2[0];
  double* nativec2Pin = c2Pin;
  double retVal = ::vtkMath::Determinant2x2(nativec1Pin, nativec2Pin);
  return retVal;
}



void vtkMath::LUFactor3x3(array<float,2>^ A, array<int>^ index)
{
  float nativeA[3][3];
  for (size_t iA=0; iA<3; iA++)
    for (size_t jA=0; jA<3; jA++)
      nativeA[iA][jA] = A[iA,jA];
  pin_ptr<int> indexPin = &index[0];
  int* nativeindexPin = indexPin;
  ::vtkMath::LUFactor3x3(nativeA, nativeindexPin);
  for (size_t iA=0; iA<3; iA++)
    for (size_t jA=0; jA<3; jA++)
      A[iA,jA] = nativeA[iA][jA];
}



void vtkMath::LUFactor3x3(array<double,2>^ A, array<int>^ index)
{
  double nativeA[3][3];
  for (size_t iA=0; iA<3; iA++)
    for (size_t jA=0; jA<3; jA++)
      nativeA[iA][jA] = A[iA,jA];
  pin_ptr<int> indexPin = &index[0];
  int* nativeindexPin = indexPin;
  ::vtkMath::LUFactor3x3(nativeA, nativeindexPin);
  for (size_t iA=0; iA<3; iA++)
    for (size_t jA=0; jA<3; jA++)
      A[iA,jA] = nativeA[iA][jA];
}



void vtkMath::LUSolve3x3(array<float,2>^ A, array<int>^ arg1, array<float>^ x)
{
  float nativeA[3][3];
  for (size_t iA=0; iA<3; iA++)
    for (size_t jA=0; jA<3; jA++)
      nativeA[iA][jA] = A[iA,jA];
  pin_ptr<int> arg1Pin = &arg1[0];
  int* nativearg1Pin = arg1Pin;
  pin_ptr<float> xPin = &x[0];
  float* nativexPin = xPin;
  ::vtkMath::LUSolve3x3(nativeA, nativearg1Pin, nativexPin);
}



void vtkMath::LUSolve3x3(array<double,2>^ A, array<int>^ arg1, array<double>^ x)
{
  double nativeA[3][3];
  for (size_t iA=0; iA<3; iA++)
    for (size_t jA=0; jA<3; jA++)
      nativeA[iA][jA] = A[iA,jA];
  pin_ptr<int> arg1Pin = &arg1[0];
  int* nativearg1Pin = arg1Pin;
  pin_ptr<double> xPin = &x[0];
  double* nativexPin = xPin;
  ::vtkMath::LUSolve3x3(nativeA, nativearg1Pin, nativexPin);
}



void vtkMath::LinearSolve3x3(array<float,2>^ A, array<float>^ x, array<float>^ y)
{
  float nativeA[3][3];
  for (size_t iA=0; iA<3; iA++)
    for (size_t jA=0; jA<3; jA++)
      nativeA[iA][jA] = A[iA,jA];
  pin_ptr<float> xPin = &x[0];
  float* nativexPin = xPin;
  pin_ptr<float> yPin = &y[0];
  float* nativeyPin = yPin;
  ::vtkMath::LinearSolve3x3(nativeA, nativexPin, nativeyPin);
}



void vtkMath::LinearSolve3x3(array<double,2>^ A, array<double>^ x, array<double>^ y)
{
  double nativeA[3][3];
  for (size_t iA=0; iA<3; iA++)
    for (size_t jA=0; jA<3; jA++)
      nativeA[iA][jA] = A[iA,jA];
  pin_ptr<double> xPin = &x[0];
  double* nativexPin = xPin;
  pin_ptr<double> yPin = &y[0];
  double* nativeyPin = yPin;
  ::vtkMath::LinearSolve3x3(nativeA, nativexPin, nativeyPin);
}



void vtkMath::Multiply3x3(array<float,2>^ A, array<float>^ in, array<float>^ out)
{
  float nativeA[3][3];
  for (size_t iA=0; iA<3; iA++)
    for (size_t jA=0; jA<3; jA++)
      nativeA[iA][jA] = A[iA,jA];
  pin_ptr<float> inPin = &in[0];
  float* nativeinPin = inPin;
  pin_ptr<float> outPin = &out[0];
  float* nativeoutPin = outPin;
  ::vtkMath::Multiply3x3(nativeA, nativeinPin, nativeoutPin);
}



void vtkMath::Multiply3x3(array<double,2>^ A, array<double>^ in, array<double>^ out)
{
  double nativeA[3][3];
  for (size_t iA=0; iA<3; iA++)
    for (size_t jA=0; jA<3; jA++)
      nativeA[iA][jA] = A[iA,jA];
  pin_ptr<double> inPin = &in[0];
  double* nativeinPin = inPin;
  pin_ptr<double> outPin = &out[0];
  double* nativeoutPin = outPin;
  ::vtkMath::Multiply3x3(nativeA, nativeinPin, nativeoutPin);
}



void vtkMath::Multiply3x3(array<float,2>^ A, array<float,2>^ B, array<float,2>^ C)
{
  float nativeA[3][3];
  for (size_t iA=0; iA<3; iA++)
    for (size_t jA=0; jA<3; jA++)
      nativeA[iA][jA] = A[iA,jA];
  float nativeB[3][3];
  for (size_t iB=0; iB<3; iB++)
    for (size_t jB=0; jB<3; jB++)
      nativeB[iB][jB] = B[iB,jB];
  float nativeC[3][3];
  for (size_t iC=0; iC<3; iC++)
    for (size_t jC=0; jC<3; jC++)
      nativeC[iC][jC] = C[iC,jC];
  ::vtkMath::Multiply3x3(nativeA, nativeB, nativeC);
  for (size_t iC=0; iC<3; iC++)
    for (size_t jC=0; jC<3; jC++)
      C[iC,jC] = nativeC[iC][jC];
}



void vtkMath::Multiply3x3(array<double,2>^ A, array<double,2>^ B, array<double,2>^ C)
{
  double nativeA[3][3];
  for (size_t iA=0; iA<3; iA++)
    for (size_t jA=0; jA<3; jA++)
      nativeA[iA][jA] = A[iA,jA];
  double nativeB[3][3];
  for (size_t iB=0; iB<3; iB++)
    for (size_t jB=0; jB<3; jB++)
      nativeB[iB][jB] = B[iB,jB];
  double nativeC[3][3];
  for (size_t iC=0; iC<3; iC++)
    for (size_t jC=0; jC<3; jC++)
      nativeC[iC][jC] = C[iC,jC];
  ::vtkMath::Multiply3x3(nativeA, nativeB, nativeC);
  for (size_t iC=0; iC<3; iC++)
    for (size_t jC=0; jC<3; jC++)
      C[iC,jC] = nativeC[iC][jC];
}



void vtkMath::Transpose3x3(array<float,2>^ A, array<float,2>^ AT)
{
  float nativeA[3][3];
  for (size_t iA=0; iA<3; iA++)
    for (size_t jA=0; jA<3; jA++)
      nativeA[iA][jA] = A[iA,jA];
  float nativeAT[3][3];
  for (size_t iAT=0; iAT<3; iAT++)
    for (size_t jAT=0; jAT<3; jAT++)
      nativeAT[iAT][jAT] = AT[iAT,jAT];
  ::vtkMath::Transpose3x3(nativeA, nativeAT);
  for (size_t iAT=0; iAT<3; iAT++)
    for (size_t jAT=0; jAT<3; jAT++)
      AT[iAT,jAT] = nativeAT[iAT][jAT];
}



void vtkMath::Transpose3x3(array<double,2>^ A, array<double,2>^ AT)
{
  double nativeA[3][3];
  for (size_t iA=0; iA<3; iA++)
    for (size_t jA=0; jA<3; jA++)
      nativeA[iA][jA] = A[iA,jA];
  double nativeAT[3][3];
  for (size_t iAT=0; iAT<3; iAT++)
    for (size_t jAT=0; jAT<3; jAT++)
      nativeAT[iAT][jAT] = AT[iAT,jAT];
  ::vtkMath::Transpose3x3(nativeA, nativeAT);
  for (size_t iAT=0; iAT<3; iAT++)
    for (size_t jAT=0; jAT<3; jAT++)
      AT[iAT,jAT] = nativeAT[iAT][jAT];
}



void vtkMath::Invert3x3(array<float,2>^ A, array<float,2>^ AI)
{
  float nativeA[3][3];
  for (size_t iA=0; iA<3; iA++)
    for (size_t jA=0; jA<3; jA++)
      nativeA[iA][jA] = A[iA,jA];
  float nativeAI[3][3];
  for (size_t iAI=0; iAI<3; iAI++)
    for (size_t jAI=0; jAI<3; jAI++)
      nativeAI[iAI][jAI] = AI[iAI,jAI];
  ::vtkMath::Invert3x3(nativeA, nativeAI);
  for (size_t iAI=0; iAI<3; iAI++)
    for (size_t jAI=0; jAI<3; jAI++)
      AI[iAI,jAI] = nativeAI[iAI][jAI];
}



void vtkMath::Invert3x3(array<double,2>^ A, array<double,2>^ AI)
{
  double nativeA[3][3];
  for (size_t iA=0; iA<3; iA++)
    for (size_t jA=0; jA<3; jA++)
      nativeA[iA][jA] = A[iA,jA];
  double nativeAI[3][3];
  for (size_t iAI=0; iAI<3; iAI++)
    for (size_t jAI=0; jAI<3; jAI++)
      nativeAI[iAI][jAI] = AI[iAI,jAI];
  ::vtkMath::Invert3x3(nativeA, nativeAI);
  for (size_t iAI=0; iAI<3; iAI++)
    for (size_t jAI=0; jAI<3; jAI++)
      AI[iAI,jAI] = nativeAI[iAI][jAI];
}



void vtkMath::Identity3x3(array<float,2>^ A)
{
  float nativeA[3][3];
  for (size_t iA=0; iA<3; iA++)
    for (size_t jA=0; jA<3; jA++)
      nativeA[iA][jA] = A[iA,jA];
  ::vtkMath::Identity3x3(nativeA);
  for (size_t iA=0; iA<3; iA++)
    for (size_t jA=0; jA<3; jA++)
      A[iA,jA] = nativeA[iA][jA];
}



void vtkMath::Identity3x3(array<double,2>^ A)
{
  double nativeA[3][3];
  for (size_t iA=0; iA<3; iA++)
    for (size_t jA=0; jA<3; jA++)
      nativeA[iA][jA] = A[iA,jA];
  ::vtkMath::Identity3x3(nativeA);
  for (size_t iA=0; iA<3; iA++)
    for (size_t jA=0; jA<3; jA++)
      A[iA,jA] = nativeA[iA][jA];
}



double vtkMath::Determinant3x3(array<float,2>^ A)
{
  float nativeA[3][3];
  for (size_t iA=0; iA<3; iA++)
    for (size_t jA=0; jA<3; jA++)
      nativeA[iA][jA] = A[iA,jA];
  double retVal = ::vtkMath::Determinant3x3(nativeA);
  for (size_t iA=0; iA<3; iA++)
    for (size_t jA=0; jA<3; jA++)
      A[iA,jA] = nativeA[iA][jA];
  return retVal;
}



double vtkMath::Determinant3x3(array<double,2>^ A)
{
  double nativeA[3][3];
  for (size_t iA=0; iA<3; iA++)
    for (size_t jA=0; jA<3; jA++)
      nativeA[iA][jA] = A[iA,jA];
  double retVal = ::vtkMath::Determinant3x3(nativeA);
  for (size_t iA=0; iA<3; iA++)
    for (size_t jA=0; jA<3; jA++)
      A[iA,jA] = nativeA[iA][jA];
  return retVal;
}



float vtkMath::Determinant3x3(array<float>^ c1, array<float>^ c2, array<float>^ c3)
{
  pin_ptr<float> c1Pin = &c1[0];
  float* nativec1Pin = c1Pin;
  pin_ptr<float> c2Pin = &c2[0];
  float* nativec2Pin = c2Pin;
  pin_ptr<float> c3Pin = &c3[0];
  float* nativec3Pin = c3Pin;
  float retVal = ::vtkMath::Determinant3x3(nativec1Pin, nativec2Pin, nativec3Pin);
  return retVal;
}



double vtkMath::Determinant3x3(array<double>^ c1, array<double>^ c2, array<double>^ c3)
{
  pin_ptr<double> c1Pin = &c1[0];
  double* nativec1Pin = c1Pin;
  pin_ptr<double> c2Pin = &c2[0];
  double* nativec2Pin = c2Pin;
  pin_ptr<double> c3Pin = &c3[0];
  double* nativec3Pin = c3Pin;
  double retVal = ::vtkMath::Determinant3x3(nativec1Pin, nativec2Pin, nativec3Pin);
  return retVal;
}



double vtkMath::Determinant3x3(double a1, double a2, double a3, double b1, double b2, double b3, double c1, double c2, double c3)
{
  double retVal = ::vtkMath::Determinant3x3(a1, a2, a3, b1, b2, b3, c1, c2, c3);
  return retVal;
}



void vtkMath::QuaternionToMatrix3x3(array<float>^ quat, array<float,2>^ A)
{
  pin_ptr<float> quatPin = &quat[0];
  float* nativequatPin = quatPin;
  float nativeA[3][3];
  for (size_t iA=0; iA<3; iA++)
    for (size_t jA=0; jA<3; jA++)
      nativeA[iA][jA] = A[iA,jA];
  ::vtkMath::QuaternionToMatrix3x3(nativequatPin, nativeA);
  for (size_t iA=0; iA<3; iA++)
    for (size_t jA=0; jA<3; jA++)
      A[iA,jA] = nativeA[iA][jA];
}



void vtkMath::QuaternionToMatrix3x3(array<double>^ quat, array<double,2>^ A)
{
  pin_ptr<double> quatPin = &quat[0];
  double* nativequatPin = quatPin;
  double nativeA[3][3];
  for (size_t iA=0; iA<3; iA++)
    for (size_t jA=0; jA<3; jA++)
      nativeA[iA][jA] = A[iA,jA];
  ::vtkMath::QuaternionToMatrix3x3(nativequatPin, nativeA);
  for (size_t iA=0; iA<3; iA++)
    for (size_t jA=0; jA<3; jA++)
      A[iA,jA] = nativeA[iA][jA];
}



void vtkMath::Matrix3x3ToQuaternion(array<float,2>^ A, array<float>^ quat)
{
  float nativeA[3][3];
  for (size_t iA=0; iA<3; iA++)
    for (size_t jA=0; jA<3; jA++)
      nativeA[iA][jA] = A[iA,jA];
  pin_ptr<float> quatPin = &quat[0];
  float* nativequatPin = quatPin;
  ::vtkMath::Matrix3x3ToQuaternion(nativeA, nativequatPin);
}



void vtkMath::Matrix3x3ToQuaternion(array<double,2>^ A, array<double>^ quat)
{
  double nativeA[3][3];
  for (size_t iA=0; iA<3; iA++)
    for (size_t jA=0; jA<3; jA++)
      nativeA[iA][jA] = A[iA,jA];
  pin_ptr<double> quatPin = &quat[0];
  double* nativequatPin = quatPin;
  ::vtkMath::Matrix3x3ToQuaternion(nativeA, nativequatPin);
}



void vtkMath::Orthogonalize3x3(array<float,2>^ A, array<float,2>^ B)
{
  float nativeA[3][3];
  for (size_t iA=0; iA<3; iA++)
    for (size_t jA=0; jA<3; jA++)
      nativeA[iA][jA] = A[iA,jA];
  float nativeB[3][3];
  for (size_t iB=0; iB<3; iB++)
    for (size_t jB=0; jB<3; jB++)
      nativeB[iB][jB] = B[iB,jB];
  ::vtkMath::Orthogonalize3x3(nativeA, nativeB);
  for (size_t iB=0; iB<3; iB++)
    for (size_t jB=0; jB<3; jB++)
      B[iB,jB] = nativeB[iB][jB];
}



void vtkMath::Orthogonalize3x3(array<double,2>^ A, array<double,2>^ B)
{
  double nativeA[3][3];
  for (size_t iA=0; iA<3; iA++)
    for (size_t jA=0; jA<3; jA++)
      nativeA[iA][jA] = A[iA,jA];
  double nativeB[3][3];
  for (size_t iB=0; iB<3; iB++)
    for (size_t jB=0; jB<3; jB++)
      nativeB[iB][jB] = B[iB,jB];
  ::vtkMath::Orthogonalize3x3(nativeA, nativeB);
  for (size_t iB=0; iB<3; iB++)
    for (size_t jB=0; jB<3; jB++)
      B[iB,jB] = nativeB[iB][jB];
}



void vtkMath::Diagonalize3x3(array<float,2>^ A, array<float>^ w, array<float,2>^ V)
{
  float nativeA[3][3];
  for (size_t iA=0; iA<3; iA++)
    for (size_t jA=0; jA<3; jA++)
      nativeA[iA][jA] = A[iA,jA];
  pin_ptr<float> wPin = &w[0];
  float* nativewPin = wPin;
  float nativeV[3][3];
  for (size_t iV=0; iV<3; iV++)
    for (size_t jV=0; jV<3; jV++)
      nativeV[iV][jV] = V[iV,jV];
  ::vtkMath::Diagonalize3x3(nativeA, nativewPin, nativeV);
  for (size_t iV=0; iV<3; iV++)
    for (size_t jV=0; jV<3; jV++)
      V[iV,jV] = nativeV[iV][jV];
}



void vtkMath::Diagonalize3x3(array<double,2>^ A, array<double>^ w, array<double,2>^ V)
{
  double nativeA[3][3];
  for (size_t iA=0; iA<3; iA++)
    for (size_t jA=0; jA<3; jA++)
      nativeA[iA][jA] = A[iA,jA];
  pin_ptr<double> wPin = &w[0];
  double* nativewPin = wPin;
  double nativeV[3][3];
  for (size_t iV=0; iV<3; iV++)
    for (size_t jV=0; jV<3; jV++)
      nativeV[iV][jV] = V[iV,jV];
  ::vtkMath::Diagonalize3x3(nativeA, nativewPin, nativeV);
  for (size_t iV=0; iV<3; iV++)
    for (size_t jV=0; jV<3; jV++)
      V[iV,jV] = nativeV[iV][jV];
}



void vtkMath::SingularValueDecomposition3x3(array<float,2>^ A, array<float,2>^ U, array<float>^ w, array<float,2>^ VT)
{
  float nativeA[3][3];
  for (size_t iA=0; iA<3; iA++)
    for (size_t jA=0; jA<3; jA++)
      nativeA[iA][jA] = A[iA,jA];
  float nativeU[3][3];
  for (size_t iU=0; iU<3; iU++)
    for (size_t jU=0; jU<3; jU++)
      nativeU[iU][jU] = U[iU,jU];
  pin_ptr<float> wPin = &w[0];
  float* nativewPin = wPin;
  float nativeVT[3][3];
  for (size_t iVT=0; iVT<3; iVT++)
    for (size_t jVT=0; jVT<3; jVT++)
      nativeVT[iVT][jVT] = VT[iVT,jVT];
  ::vtkMath::SingularValueDecomposition3x3(nativeA, nativeU, nativewPin, nativeVT);
  for (size_t iU=0; iU<3; iU++)
    for (size_t jU=0; jU<3; jU++)
      U[iU,jU] = nativeU[iU][jU];
  for (size_t iVT=0; iVT<3; iVT++)
    for (size_t jVT=0; jVT<3; jVT++)
      VT[iVT,jVT] = nativeVT[iVT][jVT];
}



void vtkMath::SingularValueDecomposition3x3(array<double,2>^ A, array<double,2>^ U, array<double>^ w, array<double,2>^ VT)
{
  double nativeA[3][3];
  for (size_t iA=0; iA<3; iA++)
    for (size_t jA=0; jA<3; jA++)
      nativeA[iA][jA] = A[iA,jA];
  double nativeU[3][3];
  for (size_t iU=0; iU<3; iU++)
    for (size_t jU=0; jU<3; jU++)
      nativeU[iU][jU] = U[iU,jU];
  pin_ptr<double> wPin = &w[0];
  double* nativewPin = wPin;
  double nativeVT[3][3];
  for (size_t iVT=0; iVT<3; iVT++)
    for (size_t jVT=0; jVT<3; jVT++)
      nativeVT[iVT][jVT] = VT[iVT,jVT];
  ::vtkMath::SingularValueDecomposition3x3(nativeA, nativeU, nativewPin, nativeVT);
  for (size_t iU=0; iU<3; iU++)
    for (size_t jU=0; jU<3; jU++)
      U[iU,jU] = nativeU[iU][jU];
  for (size_t iVT=0; iVT<3; iVT++)
    for (size_t jVT=0; jVT<3; jVT++)
      VT[iVT,jVT] = nativeVT[iVT][jVT];
}



void vtkMath::RandomSeed(long s)
{
  ::vtkMath::RandomSeed(s);
}



double vtkMath::Random()
{
  double retVal = ::vtkMath::Random();
  return retVal;
}



double vtkMath::Random(double min, double max)
{
  double retVal = ::vtkMath::Random(min, max);
  return retVal;
}



array<double>^ vtkMath::SolveCubic(double c0, double c1, double c2, double c3)
{
  const double* retVal = ::vtkMath::SolveCubic(c0, c1, c2, c3);
  array<double>^ mRetVal = gcnew array<double>(3);
  for (size_t cprIdx=0; cprIdx<3; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



array<double>^ vtkMath::SolveQuadratic(double c0, double c1, double c2)
{
  const double* retVal = ::vtkMath::SolveQuadratic(c0, c1, c2);
  array<double>^ mRetVal = gcnew array<double>(2);
  for (size_t cprIdx=0; cprIdx<2; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



array<double>^ vtkMath::SolveLinear(double c0, double c1)
{
  const double* retVal = ::vtkMath::SolveLinear(c0, c1);
  array<double>^ mRetVal = gcnew array<double>(1);
  for (size_t cprIdx=0; cprIdx<1; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



int vtkMath::SolveCubic(double c0, double c1, double c2, double c3, array<double>^ r1, array<double>^ r2, array<double>^ r3, array<int>^ num_roots)
{
  pin_ptr<double> r1Pin = &r1[0];
  double* nativer1Pin = r1Pin;
  pin_ptr<double> r2Pin = &r2[0];
  double* nativer2Pin = r2Pin;
  pin_ptr<double> r3Pin = &r3[0];
  double* nativer3Pin = r3Pin;
  pin_ptr<int> num_rootsPin = &num_roots[0];
  int* nativenum_rootsPin = num_rootsPin;
  int retVal = ::vtkMath::SolveCubic(c0, c1, c2, c3, nativer1Pin, nativer2Pin, nativer3Pin, nativenum_rootsPin);
  return retVal;
}



int vtkMath::SolveQuadratic(double c0, double c1, double c2, array<double>^ r1, array<double>^ r2, array<int>^ num_roots)
{
  pin_ptr<double> r1Pin = &r1[0];
  double* nativer1Pin = r1Pin;
  pin_ptr<double> r2Pin = &r2[0];
  double* nativer2Pin = r2Pin;
  pin_ptr<int> num_rootsPin = &num_roots[0];
  int* nativenum_rootsPin = num_rootsPin;
  int retVal = ::vtkMath::SolveQuadratic(c0, c1, c2, nativer1Pin, nativer2Pin, nativenum_rootsPin);
  return retVal;
}



int vtkMath::SolveLinear(double c0, double c1, array<double>^ r1, array<int>^ num_roots)
{
  pin_ptr<double> r1Pin = &r1[0];
  double* nativer1Pin = r1Pin;
  pin_ptr<int> num_rootsPin = &num_roots[0];
  int* nativenum_rootsPin = num_rootsPin;
  int retVal = ::vtkMath::SolveLinear(c0, c1, nativer1Pin, nativenum_rootsPin);
  return retVal;
}



void vtkMath::RGBToHSV(array<float>^ rgb, array<float>^ hsv)
{
  pin_ptr<float> rgbPin = &rgb[0];
  float* nativergbPin = rgbPin;
  pin_ptr<float> hsvPin = &hsv[0];
  float* nativehsvPin = hsvPin;
  ::vtkMath::RGBToHSV(nativergbPin, nativehsvPin);
}



void vtkMath::RGBToHSV(float r, float g, float b, array<float>^ h, array<float>^ s, array<float>^ v)
{
  pin_ptr<float> hPin = &h[0];
  float* nativehPin = hPin;
  pin_ptr<float> sPin = &s[0];
  float* nativesPin = sPin;
  pin_ptr<float> vPin = &v[0];
  float* nativevPin = vPin;
  ::vtkMath::RGBToHSV(r, g, b, nativehPin, nativesPin, nativevPin);
}



array<double>^ vtkMath::RGBToHSV(array<double>^ rgb)
{
  pin_ptr<double> rgbPin = &rgb[0];
  double* nativergbPin = rgbPin;
  const double* retVal = ::vtkMath::RGBToHSV(nativergbPin);
  array<double>^ mRetVal = gcnew array<double>(3);
  for (size_t cprIdx=0; cprIdx<3; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



array<double>^ vtkMath::RGBToHSV(double r, double g, double b)
{
  const double* retVal = ::vtkMath::RGBToHSV(r, g, b);
  array<double>^ mRetVal = gcnew array<double>(3);
  for (size_t cprIdx=0; cprIdx<3; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



void vtkMath::RGBToHSV(array<double>^ rgb, array<double>^ hsv)
{
  pin_ptr<double> rgbPin = &rgb[0];
  double* nativergbPin = rgbPin;
  pin_ptr<double> hsvPin = &hsv[0];
  double* nativehsvPin = hsvPin;
  ::vtkMath::RGBToHSV(nativergbPin, nativehsvPin);
}



void vtkMath::RGBToHSV(double r, double g, double b, array<double>^ h, array<double>^ s, array<double>^ v)
{
  pin_ptr<double> hPin = &h[0];
  double* nativehPin = hPin;
  pin_ptr<double> sPin = &s[0];
  double* nativesPin = sPin;
  pin_ptr<double> vPin = &v[0];
  double* nativevPin = vPin;
  ::vtkMath::RGBToHSV(r, g, b, nativehPin, nativesPin, nativevPin);
}



void vtkMath::HSVToRGB(array<float>^ hsv, array<float>^ rgb)
{
  pin_ptr<float> hsvPin = &hsv[0];
  float* nativehsvPin = hsvPin;
  pin_ptr<float> rgbPin = &rgb[0];
  float* nativergbPin = rgbPin;
  ::vtkMath::HSVToRGB(nativehsvPin, nativergbPin);
}



void vtkMath::HSVToRGB(float h, float s, float v, array<float>^ r, array<float>^ g, array<float>^ b)
{
  pin_ptr<float> rPin = &r[0];
  float* nativerPin = rPin;
  pin_ptr<float> gPin = &g[0];
  float* nativegPin = gPin;
  pin_ptr<float> bPin = &b[0];
  float* nativebPin = bPin;
  ::vtkMath::HSVToRGB(h, s, v, nativerPin, nativegPin, nativebPin);
}



array<double>^ vtkMath::HSVToRGB(array<double>^ hsv)
{
  pin_ptr<double> hsvPin = &hsv[0];
  double* nativehsvPin = hsvPin;
  const double* retVal = ::vtkMath::HSVToRGB(nativehsvPin);
  array<double>^ mRetVal = gcnew array<double>(3);
  for (size_t cprIdx=0; cprIdx<3; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



array<double>^ vtkMath::HSVToRGB(double h, double s, double v)
{
  const double* retVal = ::vtkMath::HSVToRGB(h, s, v);
  array<double>^ mRetVal = gcnew array<double>(3);
  for (size_t cprIdx=0; cprIdx<3; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



void vtkMath::HSVToRGB(array<double>^ hsv, array<double>^ rgb)
{
  pin_ptr<double> hsvPin = &hsv[0];
  double* nativehsvPin = hsvPin;
  pin_ptr<double> rgbPin = &rgb[0];
  double* nativergbPin = rgbPin;
  ::vtkMath::HSVToRGB(nativehsvPin, nativergbPin);
}



void vtkMath::HSVToRGB(double h, double s, double v, array<double>^ r, array<double>^ g, array<double>^ b)
{
  pin_ptr<double> rPin = &r[0];
  double* nativerPin = rPin;
  pin_ptr<double> gPin = &g[0];
  double* nativegPin = gPin;
  pin_ptr<double> bPin = &b[0];
  double* nativebPin = bPin;
  ::vtkMath::HSVToRGB(h, s, v, nativerPin, nativegPin, nativebPin);
}



void vtkMath::LabToXYZ(array<double>^ lab, array<double>^ xyz)
{
  pin_ptr<double> labPin = &lab[0];
  double* nativelabPin = labPin;
  pin_ptr<double> xyzPin = &xyz[0];
  double* nativexyzPin = xyzPin;
  ::vtkMath::LabToXYZ(nativelabPin, nativexyzPin);
}



void vtkMath::XYZToRGB(array<double>^ xyz, array<double>^ rgb)
{
  pin_ptr<double> xyzPin = &xyz[0];
  double* nativexyzPin = xyzPin;
  pin_ptr<double> rgbPin = &rgb[0];
  double* nativergbPin = rgbPin;
  ::vtkMath::XYZToRGB(nativexyzPin, nativergbPin);
}



void vtkMath::UninitializeBounds(array<double>^ bounds)
{
  pin_ptr<double> boundsPin = &bounds[0];
  double* nativeboundsPin = boundsPin;
  ::vtkMath::UninitializeBounds(nativeboundsPin);
}



int vtkMath::AreBoundsInitialized(array<double>^ bounds)
{
  pin_ptr<double> boundsPin = &bounds[0];
  double* nativeboundsPin = boundsPin;
  int retVal = ::vtkMath::AreBoundsInitialized(nativeboundsPin);
  return retVal;
}



void vtkMath::ClampValue(array<double>^ value, array<double>^ range)
{
  pin_ptr<double> valuePin = &value[0];
  double* nativevaluePin = valuePin;
  pin_ptr<double> rangePin = &range[0];
  double* nativerangePin = rangePin;
  ::vtkMath::ClampValue(nativevaluePin, nativerangePin);
}



void vtkMath::ClampValue(double value, array<double>^ range, array<double>^ clamped_value)
{
  pin_ptr<double> rangePin = &range[0];
  double* nativerangePin = rangePin;
  pin_ptr<double> clamped_valuePin = &clamped_value[0];
  double* nativeclamped_valuePin = clamped_valuePin;
  ::vtkMath::ClampValue(value, nativerangePin, nativeclamped_valuePin);
}



void vtkMath::ClampValues(array<double>^ values, int nb_values, array<double>^ range)
{
  pin_ptr<double> valuesPin = &values[0];
  double* nativevaluesPin = valuesPin;
  pin_ptr<double> rangePin = &range[0];
  double* nativerangePin = rangePin;
  ::vtkMath::ClampValues(nativevaluesPin, nb_values, nativerangePin);
}



void vtkMath::ClampValues(array<double>^ values, int nb_values, array<double>^ range, array<double>^ clamped_values)
{
  pin_ptr<double> valuesPin = &values[0];
  double* nativevaluesPin = valuesPin;
  pin_ptr<double> rangePin = &range[0];
  double* nativerangePin = rangePin;
  pin_ptr<double> clamped_valuesPin = &clamped_values[0];
  double* nativeclamped_valuesPin = clamped_valuesPin;
  ::vtkMath::ClampValues(nativevaluesPin, nb_values, nativerangePin, nativeclamped_valuesPin);
}



int vtkMath::GetScalarTypeFittingRange(double range_min, double range_max, double scale, double shift)
{
  int retVal = ::vtkMath::GetScalarTypeFittingRange(range_min, range_max, scale, shift);
  return retVal;
}



int vtkMath::GetAdjustedScalarRange(vtkDataArray^ arg0, int comp, array<double>^ range)
{
  ::vtkDataArray* arg0Wrap = vtk::ConvertManagedToNative<::vtkDataArray>(arg0->GetNativePointer());
  pin_ptr<double> rangePin = &range[0];
  double* nativerangePin = rangePin;
  int retVal = ::vtkMath::GetAdjustedScalarRange(arg0Wrap, comp, nativerangePin);
  return retVal;
}



int vtkMath::ExtentIsWithinOtherExtent(array<int>^ extent1, array<int>^ extent2)
{
  pin_ptr<int> extent1Pin = &extent1[0];
  int* nativeextent1Pin = extent1Pin;
  pin_ptr<int> extent2Pin = &extent2[0];
  int* nativeextent2Pin = extent2Pin;
  int retVal = ::vtkMath::ExtentIsWithinOtherExtent(nativeextent1Pin, nativeextent2Pin);
  return retVal;
}



int vtkMath::BoundsIsWithinOtherBounds(array<double>^ bounds1, array<double>^ bounds2, array<double>^ delta)
{
  pin_ptr<double> bounds1Pin = &bounds1[0];
  double* nativebounds1Pin = bounds1Pin;
  pin_ptr<double> bounds2Pin = &bounds2[0];
  double* nativebounds2Pin = bounds2Pin;
  pin_ptr<double> deltaPin = &delta[0];
  double* nativedeltaPin = deltaPin;
  int retVal = ::vtkMath::BoundsIsWithinOtherBounds(nativebounds1Pin, nativebounds2Pin, nativedeltaPin);
  return retVal;
}



int vtkMath::PointIsWithinBounds(array<double>^ point, array<double>^ bounds, array<double>^ delta)
{
  pin_ptr<double> pointPin = &point[0];
  double* nativepointPin = pointPin;
  pin_ptr<double> boundsPin = &bounds[0];
  double* nativeboundsPin = boundsPin;
  pin_ptr<double> deltaPin = &delta[0];
  double* nativedeltaPin = deltaPin;
  int retVal = ::vtkMath::PointIsWithinBounds(nativepointPin, nativeboundsPin, nativedeltaPin);
  return retVal;
}



  vtkMath::vtkMath(System::IntPtr native, bool bConst) : vtkObject(native, bConst) {}



  vtkMath::vtkMath(bool donothing) : vtkObject(donothing) {}



  vtkMath::vtkMath() : vtkObject(false) {
  this->SetNativePointer(IntPtr(::vtkMath::New()));
}



  vtkMath::~vtkMath() { }





} // end namespace vtkCommon
