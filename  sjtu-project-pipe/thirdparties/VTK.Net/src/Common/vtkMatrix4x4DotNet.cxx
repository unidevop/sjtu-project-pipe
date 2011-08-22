

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkMatrix4x4DotNet.h"

// native includes
#include "strstream"
#include "vtkMatrix4x4.h"

using namespace System;

namespace vtk {

System::String^ vtkMatrix4x4::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkMatrix4x4>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkMatrix4x4::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkMatrix4x4>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkMatrix4x4^ vtkMatrix4x4::NewInstance()
{
  ::vtkMatrix4x4* retVal = static_cast<::vtkMatrix4x4*>(vtk::ConvertManagedToNative<::vtkMatrix4x4>(m_instance)->NewInstance());
  return gcnew vtkMatrix4x4(IntPtr(retVal), false);
}



vtkMatrix4x4^ vtkMatrix4x4::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkMatrix4x4* retVal = static_cast<::vtkMatrix4x4*>(::vtkMatrix4x4::SafeDownCast(oWrap));
  return gcnew vtkMatrix4x4(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkMatrix4x4::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkMatrix4x4>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkMatrix4x4::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkMatrix4x4>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkMatrix4x4::DeepCopy(vtkMatrix4x4^ source)
{
  ::vtkMatrix4x4* sourceWrap = vtk::ConvertManagedToNative<::vtkMatrix4x4>(source->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkMatrix4x4>(m_instance)->DeepCopy(sourceWrap);
}



void vtkMatrix4x4::DeepCopy(array<double>^ Elements)
{
  pin_ptr<double> ElementsPin = &Elements[0];
  double* nativeElementsPin = ElementsPin;
  vtk::ConvertManagedToNative<::vtkMatrix4x4>(m_instance)->DeepCopy(nativeElementsPin);
}



void vtkMatrix4x4::Zero()
{
  vtk::ConvertManagedToNative<::vtkMatrix4x4>(m_instance)->Zero();
}



void vtkMatrix4x4::Identity()
{
  vtk::ConvertManagedToNative<::vtkMatrix4x4>(m_instance)->Identity();
}



void vtkMatrix4x4::Invert(vtkMatrix4x4^ in, vtkMatrix4x4^ out)
{
  ::vtkMatrix4x4* inWrap = vtk::ConvertManagedToNative<::vtkMatrix4x4>(in->GetNativePointer());
  ::vtkMatrix4x4* outWrap = vtk::ConvertManagedToNative<::vtkMatrix4x4>(out->GetNativePointer());
  ::vtkMatrix4x4::Invert(inWrap, outWrap);
}



void vtkMatrix4x4::Invert()
{
  vtk::ConvertManagedToNative<::vtkMatrix4x4>(m_instance)->Invert();
}



void vtkMatrix4x4::Transpose(vtkMatrix4x4^ in, vtkMatrix4x4^ out)
{
  ::vtkMatrix4x4* inWrap = vtk::ConvertManagedToNative<::vtkMatrix4x4>(in->GetNativePointer());
  ::vtkMatrix4x4* outWrap = vtk::ConvertManagedToNative<::vtkMatrix4x4>(out->GetNativePointer());
  ::vtkMatrix4x4::Transpose(inWrap, outWrap);
}



void vtkMatrix4x4::Transpose()
{
  vtk::ConvertManagedToNative<::vtkMatrix4x4>(m_instance)->Transpose();
}



void vtkMatrix4x4::MultiplyPoint(array<float>^ in, array<float>^ out)
{
  pin_ptr<float> inPin = &in[0];
  float* nativeinPin = inPin;
  pin_ptr<float> outPin = &out[0];
  float* nativeoutPin = outPin;
  vtk::ConvertManagedToNative<::vtkMatrix4x4>(m_instance)->MultiplyPoint(nativeinPin, nativeoutPin);
}



void vtkMatrix4x4::MultiplyPoint(array<double>^ in, array<double>^ out)
{
  pin_ptr<double> inPin = &in[0];
  double* nativeinPin = inPin;
  pin_ptr<double> outPin = &out[0];
  double* nativeoutPin = outPin;
  vtk::ConvertManagedToNative<::vtkMatrix4x4>(m_instance)->MultiplyPoint(nativeinPin, nativeoutPin);
}



array<float>^ vtkMatrix4x4::MultiplyPoint(array<float>^ in)
{
  pin_ptr<float> inPin = &in[0];
  float* nativeinPin = inPin;
  const float* retVal = vtk::ConvertManagedToNative<::vtkMatrix4x4>(m_instance)->MultiplyPoint(nativeinPin);
  array<float>^ mRetVal = gcnew array<float>(4);
  for (size_t cprIdx=0; cprIdx<4; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



array<float>^ vtkMatrix4x4::MultiplyFloatPoint(array<float>^ in)
{
  pin_ptr<float> inPin = &in[0];
  float* nativeinPin = inPin;
  const float* retVal = vtk::ConvertManagedToNative<::vtkMatrix4x4>(m_instance)->MultiplyFloatPoint(nativeinPin);
  array<float>^ mRetVal = gcnew array<float>(4);
  for (size_t cprIdx=0; cprIdx<4; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



array<double>^ vtkMatrix4x4::MultiplyDoublePoint(array<double>^ in)
{
  pin_ptr<double> inPin = &in[0];
  double* nativeinPin = inPin;
  const double* retVal = vtk::ConvertManagedToNative<::vtkMatrix4x4>(m_instance)->MultiplyDoublePoint(nativeinPin);
  array<double>^ mRetVal = gcnew array<double>(4);
  for (size_t cprIdx=0; cprIdx<4; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



void vtkMatrix4x4::Multiply4x4(vtkMatrix4x4^ a, vtkMatrix4x4^ b, vtkMatrix4x4^ c)
{
  ::vtkMatrix4x4* aWrap = vtk::ConvertManagedToNative<::vtkMatrix4x4>(a->GetNativePointer());
  ::vtkMatrix4x4* bWrap = vtk::ConvertManagedToNative<::vtkMatrix4x4>(b->GetNativePointer());
  ::vtkMatrix4x4* cWrap = vtk::ConvertManagedToNative<::vtkMatrix4x4>(c->GetNativePointer());
  ::vtkMatrix4x4::Multiply4x4(aWrap, bWrap, cWrap);
}



void vtkMatrix4x4::Adjoint(vtkMatrix4x4^ in, vtkMatrix4x4^ out)
{
  ::vtkMatrix4x4* inWrap = vtk::ConvertManagedToNative<::vtkMatrix4x4>(in->GetNativePointer());
  ::vtkMatrix4x4* outWrap = vtk::ConvertManagedToNative<::vtkMatrix4x4>(out->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkMatrix4x4>(m_instance)->Adjoint(inWrap, outWrap);
}



double vtkMatrix4x4::Determinant()
{
  double retVal = vtk::ConvertManagedToNative<::vtkMatrix4x4>(m_instance)->Determinant();
  return retVal;
}



void vtkMatrix4x4::SetElement(int i, int j, double value)
{
  vtk::ConvertManagedToNative<::vtkMatrix4x4>(m_instance)->SetElement(i, j, value);
}



double vtkMatrix4x4::GetElement(int i, int j)
{
  double retVal = vtk::ConvertManagedToNative<::vtkMatrix4x4>(m_instance)->GetElement(i, j);
  return retVal;
}



  vtkMatrix4x4::vtkMatrix4x4(System::IntPtr native, bool bConst) : vtkObject(native, bConst) {}



  vtkMatrix4x4::vtkMatrix4x4(bool donothing) : vtkObject(donothing) {}



  vtkMatrix4x4::vtkMatrix4x4() : vtkObject(false) {
  this->SetNativePointer(IntPtr(::vtkMatrix4x4::New()));
}



  vtkMatrix4x4::~vtkMatrix4x4() { }





} // end namespace vtkCommon
