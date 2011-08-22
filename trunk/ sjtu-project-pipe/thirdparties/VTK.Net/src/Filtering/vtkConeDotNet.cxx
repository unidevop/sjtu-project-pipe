

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkConeDotNet.h"

// native includes
#include "strstream"
#include "vtkCone.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkCone::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkCone>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkCone::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkCone>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkCone^ vtkCone::NewInstance()
{
  ::vtkCone* retVal = static_cast<::vtkCone*>(vtk::ConvertManagedToNative<::vtkCone>(m_instance)->NewInstance());
  return gcnew vtkCone(IntPtr(retVal), false);
}



vtkCone^ vtkCone::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkCone* retVal = static_cast<::vtkCone*>(::vtkCone::SafeDownCast(oWrap));
  return gcnew vtkCone(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkCone::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkCone>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkCone::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkCone>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




double vtkCone::EvaluateFunction(array<double>^ x)
{
  pin_ptr<double> xPin = &x[0];
  double* nativexPin = xPin;
  double retVal = vtk::ConvertManagedToNative<::vtkCone>(m_instance)->EvaluateFunction(nativexPin);
  return retVal;
}



double vtkCone::EvaluateFunction(double x, double y, double z)
{
  double retVal = vtk::ConvertManagedToNative<::vtkCone>(m_instance)->EvaluateFunction(x, y, z);
  return retVal;
}



void vtkCone::EvaluateGradient(array<double>^ x, array<double>^ g)
{
  pin_ptr<double> xPin = &x[0];
  double* nativexPin = xPin;
  pin_ptr<double> gPin = &g[0];
  double* nativegPin = gPin;
  vtk::ConvertManagedToNative<::vtkCone>(m_instance)->EvaluateGradient(nativexPin, nativegPin);
}



void vtkCone::SetAngle(double arg0)
{
  vtk::ConvertManagedToNative<::vtkCone>(m_instance)->SetAngle(arg0);
}



double vtkCone::GetAngleMinValue()
{
  double retVal = vtk::ConvertManagedToNative<::vtkCone>(m_instance)->GetAngleMinValue();
  return retVal;
}



double vtkCone::GetAngleMaxValue()
{
  double retVal = vtk::ConvertManagedToNative<::vtkCone>(m_instance)->GetAngleMaxValue();
  return retVal;
}



double vtkCone::GetAngle()
{
  double retVal = vtk::ConvertManagedToNative<::vtkCone>(m_instance)->GetAngle();
  return retVal;
}



  vtkCone::vtkCone(System::IntPtr native, bool bConst) : vtkImplicitFunction(native, bConst) {}



  vtkCone::vtkCone(bool donothing) : vtkImplicitFunction(donothing) {}



  vtkCone::vtkCone() : vtkImplicitFunction(false) {
  this->SetNativePointer(IntPtr(::vtkCone::New()));
}



  vtkCone::~vtkCone() { }





} // end namespace vtkFiltering
