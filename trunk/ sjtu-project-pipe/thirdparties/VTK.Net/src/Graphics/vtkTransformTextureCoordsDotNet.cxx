

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkTransformTextureCoordsDotNet.h"

// native includes
#include "strstream"
#include "vtkTransformTextureCoords.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkTransformTextureCoords::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkTransformTextureCoords>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkTransformTextureCoords::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkTransformTextureCoords>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkTransformTextureCoords^ vtkTransformTextureCoords::NewInstance()
{
  ::vtkTransformTextureCoords* retVal = static_cast<::vtkTransformTextureCoords*>(vtk::ConvertManagedToNative<::vtkTransformTextureCoords>(m_instance)->NewInstance());
  return gcnew vtkTransformTextureCoords(IntPtr(retVal), false);
}



vtkTransformTextureCoords^ vtkTransformTextureCoords::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkTransformTextureCoords* retVal = static_cast<::vtkTransformTextureCoords*>(::vtkTransformTextureCoords::SafeDownCast(oWrap));
  return gcnew vtkTransformTextureCoords(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkTransformTextureCoords::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkTransformTextureCoords>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkTransformTextureCoords::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkTransformTextureCoords>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkTransformTextureCoords::SetPosition(double arg0, double arg1, double arg2)
{
  vtk::ConvertManagedToNative<::vtkTransformTextureCoords>(m_instance)->SetPosition(arg0, arg1, arg2);
}



void vtkTransformTextureCoords::SetPosition(array<double>^ a)
{
  pin_ptr<double> aPin = &a[0];
  double* nativeaPin = aPin;
  vtk::ConvertManagedToNative<::vtkTransformTextureCoords>(m_instance)->SetPosition(nativeaPin);
}



array<double>^ vtkTransformTextureCoords::GetPosition()
{
  const double* retVal = vtk::ConvertManagedToNative<::vtkTransformTextureCoords>(m_instance)->GetPosition();
  array<double>^ mRetVal = gcnew array<double>(3);
  for (size_t cprIdx=0; cprIdx<3; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



void vtkTransformTextureCoords::AddPosition(double deltaR, double deltaS, double deltaT)
{
  vtk::ConvertManagedToNative<::vtkTransformTextureCoords>(m_instance)->AddPosition(deltaR, deltaS, deltaT);
}



void vtkTransformTextureCoords::AddPosition(array<double>^ deltaPosition)
{
  pin_ptr<double> deltaPositionPin = &deltaPosition[0];
  double* nativedeltaPositionPin = deltaPositionPin;
  vtk::ConvertManagedToNative<::vtkTransformTextureCoords>(m_instance)->AddPosition(nativedeltaPositionPin);
}



void vtkTransformTextureCoords::SetScale(double arg0, double arg1, double arg2)
{
  vtk::ConvertManagedToNative<::vtkTransformTextureCoords>(m_instance)->SetScale(arg0, arg1, arg2);
}



void vtkTransformTextureCoords::SetScale(array<double>^ a)
{
  pin_ptr<double> aPin = &a[0];
  double* nativeaPin = aPin;
  vtk::ConvertManagedToNative<::vtkTransformTextureCoords>(m_instance)->SetScale(nativeaPin);
}



array<double>^ vtkTransformTextureCoords::GetScale()
{
  const double* retVal = vtk::ConvertManagedToNative<::vtkTransformTextureCoords>(m_instance)->GetScale();
  array<double>^ mRetVal = gcnew array<double>(3);
  for (size_t cprIdx=0; cprIdx<3; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



void vtkTransformTextureCoords::SetOrigin(double arg0, double arg1, double arg2)
{
  vtk::ConvertManagedToNative<::vtkTransformTextureCoords>(m_instance)->SetOrigin(arg0, arg1, arg2);
}



void vtkTransformTextureCoords::SetOrigin(array<double>^ a)
{
  pin_ptr<double> aPin = &a[0];
  double* nativeaPin = aPin;
  vtk::ConvertManagedToNative<::vtkTransformTextureCoords>(m_instance)->SetOrigin(nativeaPin);
}



array<double>^ vtkTransformTextureCoords::GetOrigin()
{
  const double* retVal = vtk::ConvertManagedToNative<::vtkTransformTextureCoords>(m_instance)->GetOrigin();
  array<double>^ mRetVal = gcnew array<double>(3);
  for (size_t cprIdx=0; cprIdx<3; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



void vtkTransformTextureCoords::SetFlipR(int arg0)
{
  vtk::ConvertManagedToNative<::vtkTransformTextureCoords>(m_instance)->SetFlipR(arg0);
}



int vtkTransformTextureCoords::GetFlipR()
{
  int retVal = vtk::ConvertManagedToNative<::vtkTransformTextureCoords>(m_instance)->GetFlipR();
  return retVal;
}



void vtkTransformTextureCoords::FlipROn()
{
  vtk::ConvertManagedToNative<::vtkTransformTextureCoords>(m_instance)->FlipROn();
}



void vtkTransformTextureCoords::FlipROff()
{
  vtk::ConvertManagedToNative<::vtkTransformTextureCoords>(m_instance)->FlipROff();
}



void vtkTransformTextureCoords::SetFlipS(int arg0)
{
  vtk::ConvertManagedToNative<::vtkTransformTextureCoords>(m_instance)->SetFlipS(arg0);
}



int vtkTransformTextureCoords::GetFlipS()
{
  int retVal = vtk::ConvertManagedToNative<::vtkTransformTextureCoords>(m_instance)->GetFlipS();
  return retVal;
}



void vtkTransformTextureCoords::FlipSOn()
{
  vtk::ConvertManagedToNative<::vtkTransformTextureCoords>(m_instance)->FlipSOn();
}



void vtkTransformTextureCoords::FlipSOff()
{
  vtk::ConvertManagedToNative<::vtkTransformTextureCoords>(m_instance)->FlipSOff();
}



void vtkTransformTextureCoords::SetFlipT(int arg0)
{
  vtk::ConvertManagedToNative<::vtkTransformTextureCoords>(m_instance)->SetFlipT(arg0);
}



int vtkTransformTextureCoords::GetFlipT()
{
  int retVal = vtk::ConvertManagedToNative<::vtkTransformTextureCoords>(m_instance)->GetFlipT();
  return retVal;
}



void vtkTransformTextureCoords::FlipTOn()
{
  vtk::ConvertManagedToNative<::vtkTransformTextureCoords>(m_instance)->FlipTOn();
}



void vtkTransformTextureCoords::FlipTOff()
{
  vtk::ConvertManagedToNative<::vtkTransformTextureCoords>(m_instance)->FlipTOff();
}



  vtkTransformTextureCoords::vtkTransformTextureCoords(System::IntPtr native, bool bConst) : vtkDataSetAlgorithm(native, bConst) {}



  vtkTransformTextureCoords::vtkTransformTextureCoords(bool donothing) : vtkDataSetAlgorithm(donothing) {}



  vtkTransformTextureCoords::vtkTransformTextureCoords() : vtkDataSetAlgorithm(false) {
  this->SetNativePointer(IntPtr(::vtkTransformTextureCoords::New()));
}



  vtkTransformTextureCoords::~vtkTransformTextureCoords() { }





} // end namespace vtkGraphics
