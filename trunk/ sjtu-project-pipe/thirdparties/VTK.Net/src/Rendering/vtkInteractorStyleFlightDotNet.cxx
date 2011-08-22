

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkInteractorStyleFlightDotNet.h"

// native includes
#include "strstream"
#include "vtkInteractorStyleFlight.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkInteractorStyleFlight::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkInteractorStyleFlight>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkInteractorStyleFlight::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkInteractorStyleFlight>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkInteractorStyleFlight^ vtkInteractorStyleFlight::NewInstance()
{
  ::vtkInteractorStyleFlight* retVal = static_cast<::vtkInteractorStyleFlight*>(vtk::ConvertManagedToNative<::vtkInteractorStyleFlight>(m_instance)->NewInstance());
  return gcnew vtkInteractorStyleFlight(IntPtr(retVal), false);
}



vtkInteractorStyleFlight^ vtkInteractorStyleFlight::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkInteractorStyleFlight* retVal = static_cast<::vtkInteractorStyleFlight*>(::vtkInteractorStyleFlight::SafeDownCast(oWrap));
  return gcnew vtkInteractorStyleFlight(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkInteractorStyleFlight::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkInteractorStyleFlight>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkInteractorStyleFlight::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkInteractorStyleFlight>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkInteractorStyleFlight::JumpTo(array<double>^ campos, array<double>^ focpos)
{
  pin_ptr<double> camposPin = &campos[0];
  double* nativecamposPin = camposPin;
  pin_ptr<double> focposPin = &focpos[0];
  double* nativefocposPin = focposPin;
  vtk::ConvertManagedToNative<::vtkInteractorStyleFlight>(m_instance)->JumpTo(nativecamposPin, nativefocposPin);
}



void vtkInteractorStyleFlight::SetMotionStepSize(double arg0)
{
  vtk::ConvertManagedToNative<::vtkInteractorStyleFlight>(m_instance)->SetMotionStepSize(arg0);
}



double vtkInteractorStyleFlight::GetMotionStepSize()
{
  double retVal = vtk::ConvertManagedToNative<::vtkInteractorStyleFlight>(m_instance)->GetMotionStepSize();
  return retVal;
}



void vtkInteractorStyleFlight::SetMotionAccelerationFactor(double arg0)
{
  vtk::ConvertManagedToNative<::vtkInteractorStyleFlight>(m_instance)->SetMotionAccelerationFactor(arg0);
}



double vtkInteractorStyleFlight::GetMotionAccelerationFactor()
{
  double retVal = vtk::ConvertManagedToNative<::vtkInteractorStyleFlight>(m_instance)->GetMotionAccelerationFactor();
  return retVal;
}



void vtkInteractorStyleFlight::SetAngleStepSize(double arg0)
{
  vtk::ConvertManagedToNative<::vtkInteractorStyleFlight>(m_instance)->SetAngleStepSize(arg0);
}



double vtkInteractorStyleFlight::GetAngleStepSize()
{
  double retVal = vtk::ConvertManagedToNative<::vtkInteractorStyleFlight>(m_instance)->GetAngleStepSize();
  return retVal;
}



void vtkInteractorStyleFlight::SetAngleAccelerationFactor(double arg0)
{
  vtk::ConvertManagedToNative<::vtkInteractorStyleFlight>(m_instance)->SetAngleAccelerationFactor(arg0);
}



double vtkInteractorStyleFlight::GetAngleAccelerationFactor()
{
  double retVal = vtk::ConvertManagedToNative<::vtkInteractorStyleFlight>(m_instance)->GetAngleAccelerationFactor();
  return retVal;
}



void vtkInteractorStyleFlight::SetDisableMotion(int arg0)
{
  vtk::ConvertManagedToNative<::vtkInteractorStyleFlight>(m_instance)->SetDisableMotion(arg0);
}



int vtkInteractorStyleFlight::GetDisableMotion()
{
  int retVal = vtk::ConvertManagedToNative<::vtkInteractorStyleFlight>(m_instance)->GetDisableMotion();
  return retVal;
}



void vtkInteractorStyleFlight::DisableMotionOn()
{
  vtk::ConvertManagedToNative<::vtkInteractorStyleFlight>(m_instance)->DisableMotionOn();
}



void vtkInteractorStyleFlight::DisableMotionOff()
{
  vtk::ConvertManagedToNative<::vtkInteractorStyleFlight>(m_instance)->DisableMotionOff();
}



void vtkInteractorStyleFlight::SetRestoreUpVector(int arg0)
{
  vtk::ConvertManagedToNative<::vtkInteractorStyleFlight>(m_instance)->SetRestoreUpVector(arg0);
}



int vtkInteractorStyleFlight::GetRestoreUpVector()
{
  int retVal = vtk::ConvertManagedToNative<::vtkInteractorStyleFlight>(m_instance)->GetRestoreUpVector();
  return retVal;
}



void vtkInteractorStyleFlight::RestoreUpVectorOn()
{
  vtk::ConvertManagedToNative<::vtkInteractorStyleFlight>(m_instance)->RestoreUpVectorOn();
}



void vtkInteractorStyleFlight::RestoreUpVectorOff()
{
  vtk::ConvertManagedToNative<::vtkInteractorStyleFlight>(m_instance)->RestoreUpVectorOff();
}



array<double>^ vtkInteractorStyleFlight::GetDefaultUpVector()
{
  const double* retVal = vtk::ConvertManagedToNative<::vtkInteractorStyleFlight>(m_instance)->GetDefaultUpVector();
  array<double>^ mRetVal = gcnew array<double>(3);
  for (size_t cprIdx=0; cprIdx<3; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



void vtkInteractorStyleFlight::SetDefaultUpVector(array<double>^ arg0)
{
  pin_ptr<double> arg0Pin = &arg0[0];
  double* nativearg0Pin = arg0Pin;
  vtk::ConvertManagedToNative<::vtkInteractorStyleFlight>(m_instance)->SetDefaultUpVector(nativearg0Pin);
}



void vtkInteractorStyleFlight::OnMouseMove()
{
  vtk::ConvertManagedToNative<::vtkInteractorStyleFlight>(m_instance)->OnMouseMove();
}



void vtkInteractorStyleFlight::OnLeftButtonDown()
{
  vtk::ConvertManagedToNative<::vtkInteractorStyleFlight>(m_instance)->OnLeftButtonDown();
}



void vtkInteractorStyleFlight::OnLeftButtonUp()
{
  vtk::ConvertManagedToNative<::vtkInteractorStyleFlight>(m_instance)->OnLeftButtonUp();
}



void vtkInteractorStyleFlight::OnMiddleButtonDown()
{
  vtk::ConvertManagedToNative<::vtkInteractorStyleFlight>(m_instance)->OnMiddleButtonDown();
}



void vtkInteractorStyleFlight::OnMiddleButtonUp()
{
  vtk::ConvertManagedToNative<::vtkInteractorStyleFlight>(m_instance)->OnMiddleButtonUp();
}



void vtkInteractorStyleFlight::OnRightButtonDown()
{
  vtk::ConvertManagedToNative<::vtkInteractorStyleFlight>(m_instance)->OnRightButtonDown();
}



void vtkInteractorStyleFlight::OnRightButtonUp()
{
  vtk::ConvertManagedToNative<::vtkInteractorStyleFlight>(m_instance)->OnRightButtonUp();
}



void vtkInteractorStyleFlight::OnChar()
{
  vtk::ConvertManagedToNative<::vtkInteractorStyleFlight>(m_instance)->OnChar();
}



void vtkInteractorStyleFlight::OnKeyDown()
{
  vtk::ConvertManagedToNative<::vtkInteractorStyleFlight>(m_instance)->OnKeyDown();
}



void vtkInteractorStyleFlight::OnKeyUp()
{
  vtk::ConvertManagedToNative<::vtkInteractorStyleFlight>(m_instance)->OnKeyUp();
}



void vtkInteractorStyleFlight::OnTimer()
{
  vtk::ConvertManagedToNative<::vtkInteractorStyleFlight>(m_instance)->OnTimer();
}



void vtkInteractorStyleFlight::ForwardFly()
{
  vtk::ConvertManagedToNative<::vtkInteractorStyleFlight>(m_instance)->ForwardFly();
}



void vtkInteractorStyleFlight::ReverseFly()
{
  vtk::ConvertManagedToNative<::vtkInteractorStyleFlight>(m_instance)->ReverseFly();
}



void vtkInteractorStyleFlight::StartForwardFly()
{
  vtk::ConvertManagedToNative<::vtkInteractorStyleFlight>(m_instance)->StartForwardFly();
}



void vtkInteractorStyleFlight::EndForwardFly()
{
  vtk::ConvertManagedToNative<::vtkInteractorStyleFlight>(m_instance)->EndForwardFly();
}



void vtkInteractorStyleFlight::StartReverseFly()
{
  vtk::ConvertManagedToNative<::vtkInteractorStyleFlight>(m_instance)->StartReverseFly();
}



void vtkInteractorStyleFlight::EndReverseFly()
{
  vtk::ConvertManagedToNative<::vtkInteractorStyleFlight>(m_instance)->EndReverseFly();
}



  vtkInteractorStyleFlight::vtkInteractorStyleFlight(System::IntPtr native, bool bConst) : vtkInteractorStyle(native, bConst) {}



  vtkInteractorStyleFlight::vtkInteractorStyleFlight(bool donothing) : vtkInteractorStyle(donothing) {}



  vtkInteractorStyleFlight::vtkInteractorStyleFlight() : vtkInteractorStyle(false) {
  this->SetNativePointer(IntPtr(::vtkInteractorStyleFlight::New()));
}



  vtkInteractorStyleFlight::~vtkInteractorStyleFlight() { }





} // end namespace vtkRendering
