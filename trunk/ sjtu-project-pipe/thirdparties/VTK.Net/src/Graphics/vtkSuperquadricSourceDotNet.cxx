

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkSuperquadricSourceDotNet.h"

// native includes
#include "strstream"
#include "vtkSuperquadricSource.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkSuperquadricSource::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkSuperquadricSource>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkSuperquadricSource::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkSuperquadricSource>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkSuperquadricSource^ vtkSuperquadricSource::NewInstance()
{
  ::vtkSuperquadricSource* retVal = static_cast<::vtkSuperquadricSource*>(vtk::ConvertManagedToNative<::vtkSuperquadricSource>(m_instance)->NewInstance());
  return gcnew vtkSuperquadricSource(IntPtr(retVal), false);
}



vtkSuperquadricSource^ vtkSuperquadricSource::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkSuperquadricSource* retVal = static_cast<::vtkSuperquadricSource*>(::vtkSuperquadricSource::SafeDownCast(oWrap));
  return gcnew vtkSuperquadricSource(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkSuperquadricSource::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkSuperquadricSource>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkSuperquadricSource::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkSuperquadricSource>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkSuperquadricSource::SetCenter(double arg0, double arg1, double arg2)
{
  vtk::ConvertManagedToNative<::vtkSuperquadricSource>(m_instance)->SetCenter(arg0, arg1, arg2);
}



void vtkSuperquadricSource::SetCenter(array<double>^ a)
{
  pin_ptr<double> aPin = &a[0];
  double* nativeaPin = aPin;
  vtk::ConvertManagedToNative<::vtkSuperquadricSource>(m_instance)->SetCenter(nativeaPin);
}



array<double>^ vtkSuperquadricSource::GetCenter()
{
  const double* retVal = vtk::ConvertManagedToNative<::vtkSuperquadricSource>(m_instance)->GetCenter();
  array<double>^ mRetVal = gcnew array<double>(3);
  for (size_t cprIdx=0; cprIdx<3; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



void vtkSuperquadricSource::SetScale(double arg0, double arg1, double arg2)
{
  vtk::ConvertManagedToNative<::vtkSuperquadricSource>(m_instance)->SetScale(arg0, arg1, arg2);
}



void vtkSuperquadricSource::SetScale(array<double>^ a)
{
  pin_ptr<double> aPin = &a[0];
  double* nativeaPin = aPin;
  vtk::ConvertManagedToNative<::vtkSuperquadricSource>(m_instance)->SetScale(nativeaPin);
}



array<double>^ vtkSuperquadricSource::GetScale()
{
  const double* retVal = vtk::ConvertManagedToNative<::vtkSuperquadricSource>(m_instance)->GetScale();
  array<double>^ mRetVal = gcnew array<double>(3);
  for (size_t cprIdx=0; cprIdx<3; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



int vtkSuperquadricSource::GetThetaResolution()
{
  int retVal = vtk::ConvertManagedToNative<::vtkSuperquadricSource>(m_instance)->GetThetaResolution();
  return retVal;
}



void vtkSuperquadricSource::SetThetaResolution(int i)
{
  vtk::ConvertManagedToNative<::vtkSuperquadricSource>(m_instance)->SetThetaResolution(i);
}



int vtkSuperquadricSource::GetPhiResolution()
{
  int retVal = vtk::ConvertManagedToNative<::vtkSuperquadricSource>(m_instance)->GetPhiResolution();
  return retVal;
}



void vtkSuperquadricSource::SetPhiResolution(int i)
{
  vtk::ConvertManagedToNative<::vtkSuperquadricSource>(m_instance)->SetPhiResolution(i);
}



double vtkSuperquadricSource::GetThickness()
{
  double retVal = vtk::ConvertManagedToNative<::vtkSuperquadricSource>(m_instance)->GetThickness();
  return retVal;
}



void vtkSuperquadricSource::SetThickness(double arg0)
{
  vtk::ConvertManagedToNative<::vtkSuperquadricSource>(m_instance)->SetThickness(arg0);
}



double vtkSuperquadricSource::GetThicknessMinValue()
{
  double retVal = vtk::ConvertManagedToNative<::vtkSuperquadricSource>(m_instance)->GetThicknessMinValue();
  return retVal;
}



double vtkSuperquadricSource::GetThicknessMaxValue()
{
  double retVal = vtk::ConvertManagedToNative<::vtkSuperquadricSource>(m_instance)->GetThicknessMaxValue();
  return retVal;
}



double vtkSuperquadricSource::GetPhiRoundness()
{
  double retVal = vtk::ConvertManagedToNative<::vtkSuperquadricSource>(m_instance)->GetPhiRoundness();
  return retVal;
}



void vtkSuperquadricSource::SetPhiRoundness(double e)
{
  vtk::ConvertManagedToNative<::vtkSuperquadricSource>(m_instance)->SetPhiRoundness(e);
}



double vtkSuperquadricSource::GetThetaRoundness()
{
  double retVal = vtk::ConvertManagedToNative<::vtkSuperquadricSource>(m_instance)->GetThetaRoundness();
  return retVal;
}



void vtkSuperquadricSource::SetThetaRoundness(double e)
{
  vtk::ConvertManagedToNative<::vtkSuperquadricSource>(m_instance)->SetThetaRoundness(e);
}



void vtkSuperquadricSource::SetSize(double arg0)
{
  vtk::ConvertManagedToNative<::vtkSuperquadricSource>(m_instance)->SetSize(arg0);
}



double vtkSuperquadricSource::GetSize()
{
  double retVal = vtk::ConvertManagedToNative<::vtkSuperquadricSource>(m_instance)->GetSize();
  return retVal;
}



void vtkSuperquadricSource::ToroidalOn()
{
  vtk::ConvertManagedToNative<::vtkSuperquadricSource>(m_instance)->ToroidalOn();
}



void vtkSuperquadricSource::ToroidalOff()
{
  vtk::ConvertManagedToNative<::vtkSuperquadricSource>(m_instance)->ToroidalOff();
}



int vtkSuperquadricSource::GetToroidal()
{
  int retVal = vtk::ConvertManagedToNative<::vtkSuperquadricSource>(m_instance)->GetToroidal();
  return retVal;
}



void vtkSuperquadricSource::SetToroidal(int arg0)
{
  vtk::ConvertManagedToNative<::vtkSuperquadricSource>(m_instance)->SetToroidal(arg0);
}



  vtkSuperquadricSource::vtkSuperquadricSource(System::IntPtr native, bool bConst) : vtkPolyDataAlgorithm(native, bConst) {}



  vtkSuperquadricSource::vtkSuperquadricSource(bool donothing) : vtkPolyDataAlgorithm(donothing) {}



  vtkSuperquadricSource::vtkSuperquadricSource() : vtkPolyDataAlgorithm(false) {
  this->SetNativePointer(IntPtr(::vtkSuperquadricSource::New()));
}



  vtkSuperquadricSource::~vtkSuperquadricSource() { }





} // end namespace vtkGraphics
