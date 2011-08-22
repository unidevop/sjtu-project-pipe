

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkQuaternionInterpolatorDotNet.h"

// native includes
#include "strstream"
#include "vtkQuaternionInterpolator.h"

using namespace System;

namespace vtk {

System::String^ vtkQuaternionInterpolator::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkQuaternionInterpolator>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkQuaternionInterpolator::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkQuaternionInterpolator>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkQuaternionInterpolator^ vtkQuaternionInterpolator::NewInstance()
{
  ::vtkQuaternionInterpolator* retVal = static_cast<::vtkQuaternionInterpolator*>(vtk::ConvertManagedToNative<::vtkQuaternionInterpolator>(m_instance)->NewInstance());
  return gcnew vtkQuaternionInterpolator(IntPtr(retVal), false);
}



vtkQuaternionInterpolator^ vtkQuaternionInterpolator::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkQuaternionInterpolator* retVal = static_cast<::vtkQuaternionInterpolator*>(::vtkQuaternionInterpolator::SafeDownCast(oWrap));
  return gcnew vtkQuaternionInterpolator(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkQuaternionInterpolator::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkQuaternionInterpolator>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkQuaternionInterpolator::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkQuaternionInterpolator>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




int vtkQuaternionInterpolator::GetNumberOfQuaternions()
{
  int retVal = vtk::ConvertManagedToNative<::vtkQuaternionInterpolator>(m_instance)->GetNumberOfQuaternions();
  return retVal;
}



double vtkQuaternionInterpolator::GetMinimumT()
{
  double retVal = vtk::ConvertManagedToNative<::vtkQuaternionInterpolator>(m_instance)->GetMinimumT();
  return retVal;
}



double vtkQuaternionInterpolator::GetMaximumT()
{
  double retVal = vtk::ConvertManagedToNative<::vtkQuaternionInterpolator>(m_instance)->GetMaximumT();
  return retVal;
}



void vtkQuaternionInterpolator::Initialize()
{
  vtk::ConvertManagedToNative<::vtkQuaternionInterpolator>(m_instance)->Initialize();
}



void vtkQuaternionInterpolator::AddQuaternion(double t, array<double>^ q)
{
  pin_ptr<double> qPin = &q[0];
  double* nativeqPin = qPin;
  vtk::ConvertManagedToNative<::vtkQuaternionInterpolator>(m_instance)->AddQuaternion(t, nativeqPin);
}



void vtkQuaternionInterpolator::RemoveQuaternion(double t)
{
  vtk::ConvertManagedToNative<::vtkQuaternionInterpolator>(m_instance)->RemoveQuaternion(t);
}



void vtkQuaternionInterpolator::InterpolateQuaternion(double t, array<double>^ q)
{
  pin_ptr<double> qPin = &q[0];
  double* nativeqPin = qPin;
  vtk::ConvertManagedToNative<::vtkQuaternionInterpolator>(m_instance)->InterpolateQuaternion(t, nativeqPin);
}



void vtkQuaternionInterpolator::SetInterpolationType(int arg0)
{
  vtk::ConvertManagedToNative<::vtkQuaternionInterpolator>(m_instance)->SetInterpolationType(arg0);
}



int vtkQuaternionInterpolator::GetInterpolationTypeMinValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkQuaternionInterpolator>(m_instance)->GetInterpolationTypeMinValue();
  return retVal;
}



int vtkQuaternionInterpolator::GetInterpolationTypeMaxValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkQuaternionInterpolator>(m_instance)->GetInterpolationTypeMaxValue();
  return retVal;
}



int vtkQuaternionInterpolator::GetInterpolationType()
{
  int retVal = vtk::ConvertManagedToNative<::vtkQuaternionInterpolator>(m_instance)->GetInterpolationType();
  return retVal;
}



void vtkQuaternionInterpolator::SetInterpolationTypeToLinear()
{
  vtk::ConvertManagedToNative<::vtkQuaternionInterpolator>(m_instance)->SetInterpolationTypeToLinear();
}



void vtkQuaternionInterpolator::SetInterpolationTypeToSpline()
{
  vtk::ConvertManagedToNative<::vtkQuaternionInterpolator>(m_instance)->SetInterpolationTypeToSpline();
}



  vtkQuaternionInterpolator::vtkQuaternionInterpolator(System::IntPtr native, bool bConst) : vtkObject(native, bConst) {}



  vtkQuaternionInterpolator::vtkQuaternionInterpolator(bool donothing) : vtkObject(donothing) {}



  vtkQuaternionInterpolator::vtkQuaternionInterpolator() : vtkObject(false) {
  this->SetNativePointer(IntPtr(::vtkQuaternionInterpolator::New()));
}



  vtkQuaternionInterpolator::~vtkQuaternionInterpolator() { }





} // end namespace vtkRendering
