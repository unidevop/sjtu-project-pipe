

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkQuantizePolyDataPointsDotNet.h"

// native includes
#include "strstream"
#include "vtkQuantizePolyDataPoints.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkQuantizePolyDataPoints::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkQuantizePolyDataPoints>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkQuantizePolyDataPoints::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkQuantizePolyDataPoints>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkQuantizePolyDataPoints^ vtkQuantizePolyDataPoints::NewInstance()
{
  ::vtkQuantizePolyDataPoints* retVal = static_cast<::vtkQuantizePolyDataPoints*>(vtk::ConvertManagedToNative<::vtkQuantizePolyDataPoints>(m_instance)->NewInstance());
  return gcnew vtkQuantizePolyDataPoints(IntPtr(retVal), false);
}



vtkQuantizePolyDataPoints^ vtkQuantizePolyDataPoints::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkQuantizePolyDataPoints* retVal = static_cast<::vtkQuantizePolyDataPoints*>(::vtkQuantizePolyDataPoints::SafeDownCast(oWrap));
  return gcnew vtkQuantizePolyDataPoints(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkQuantizePolyDataPoints::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkQuantizePolyDataPoints>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkQuantizePolyDataPoints::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkQuantizePolyDataPoints>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkQuantizePolyDataPoints::SetQFactor(double arg0)
{
  vtk::ConvertManagedToNative<::vtkQuantizePolyDataPoints>(m_instance)->SetQFactor(arg0);
}



double vtkQuantizePolyDataPoints::GetQFactorMinValue()
{
  double retVal = vtk::ConvertManagedToNative<::vtkQuantizePolyDataPoints>(m_instance)->GetQFactorMinValue();
  return retVal;
}



double vtkQuantizePolyDataPoints::GetQFactorMaxValue()
{
  double retVal = vtk::ConvertManagedToNative<::vtkQuantizePolyDataPoints>(m_instance)->GetQFactorMaxValue();
  return retVal;
}



double vtkQuantizePolyDataPoints::GetQFactor()
{
  double retVal = vtk::ConvertManagedToNative<::vtkQuantizePolyDataPoints>(m_instance)->GetQFactor();
  return retVal;
}



void vtkQuantizePolyDataPoints::OperateOnPoint(array<double>^ in, array<double>^ out)
{
  pin_ptr<double> inPin = &in[0];
  double* nativeinPin = inPin;
  pin_ptr<double> outPin = &out[0];
  double* nativeoutPin = outPin;
  vtk::ConvertManagedToNative<::vtkQuantizePolyDataPoints>(m_instance)->OperateOnPoint(nativeinPin, nativeoutPin);
}



void vtkQuantizePolyDataPoints::OperateOnBounds(array<double>^ in, array<double>^ out)
{
  pin_ptr<double> inPin = &in[0];
  double* nativeinPin = inPin;
  pin_ptr<double> outPin = &out[0];
  double* nativeoutPin = outPin;
  vtk::ConvertManagedToNative<::vtkQuantizePolyDataPoints>(m_instance)->OperateOnBounds(nativeinPin, nativeoutPin);
}



  vtkQuantizePolyDataPoints::vtkQuantizePolyDataPoints(System::IntPtr native, bool bConst) : vtkCleanPolyData(native, bConst) {}



  vtkQuantizePolyDataPoints::vtkQuantizePolyDataPoints(bool donothing) : vtkCleanPolyData(donothing) {}



  vtkQuantizePolyDataPoints::vtkQuantizePolyDataPoints() : vtkCleanPolyData(false) {
  this->SetNativePointer(IntPtr(::vtkQuantizePolyDataPoints::New()));
}



  vtkQuantizePolyDataPoints::~vtkQuantizePolyDataPoints() { }





} // end namespace vtkGraphics
