

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkImplicitSelectionLoopDotNet.h"

// native includes
#include "strstream"
#include "vtkImplicitSelectionLoop.h"
#include "vtkObject.h"
#include "vtkPoints.h"

using namespace System;

namespace vtk {

System::String^ vtkImplicitSelectionLoop::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkImplicitSelectionLoop>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkImplicitSelectionLoop::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkImplicitSelectionLoop>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkImplicitSelectionLoop^ vtkImplicitSelectionLoop::NewInstance()
{
  ::vtkImplicitSelectionLoop* retVal = static_cast<::vtkImplicitSelectionLoop*>(vtk::ConvertManagedToNative<::vtkImplicitSelectionLoop>(m_instance)->NewInstance());
  return gcnew vtkImplicitSelectionLoop(IntPtr(retVal), false);
}



vtkImplicitSelectionLoop^ vtkImplicitSelectionLoop::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkImplicitSelectionLoop* retVal = static_cast<::vtkImplicitSelectionLoop*>(::vtkImplicitSelectionLoop::SafeDownCast(oWrap));
  return gcnew vtkImplicitSelectionLoop(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkImplicitSelectionLoop::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkImplicitSelectionLoop>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkImplicitSelectionLoop::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkImplicitSelectionLoop>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




double vtkImplicitSelectionLoop::EvaluateFunction(array<double>^ x)
{
  pin_ptr<double> xPin = &x[0];
  double* nativexPin = xPin;
  double retVal = vtk::ConvertManagedToNative<::vtkImplicitSelectionLoop>(m_instance)->EvaluateFunction(nativexPin);
  return retVal;
}



double vtkImplicitSelectionLoop::EvaluateFunction(double x, double y, double z)
{
  double retVal = vtk::ConvertManagedToNative<::vtkImplicitSelectionLoop>(m_instance)->EvaluateFunction(x, y, z);
  return retVal;
}



void vtkImplicitSelectionLoop::EvaluateGradient(array<double>^ x, array<double>^ n)
{
  pin_ptr<double> xPin = &x[0];
  double* nativexPin = xPin;
  pin_ptr<double> nPin = &n[0];
  double* nativenPin = nPin;
  vtk::ConvertManagedToNative<::vtkImplicitSelectionLoop>(m_instance)->EvaluateGradient(nativexPin, nativenPin);
}



void vtkImplicitSelectionLoop::SetLoop(vtkPoints^ arg0)
{
  ::vtkPoints* arg0Wrap = vtk::ConvertManagedToNative<::vtkPoints>(arg0->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkImplicitSelectionLoop>(m_instance)->SetLoop(arg0Wrap);
}



vtkPoints^ vtkImplicitSelectionLoop::GetLoop()
{
  ::vtkPoints* retVal = static_cast<::vtkPoints*>(vtk::ConvertManagedToNative<::vtkImplicitSelectionLoop>(m_instance)->GetLoop());
  return gcnew vtkPoints(IntPtr(retVal), false);
}



void vtkImplicitSelectionLoop::SetAutomaticNormalGeneration(int arg0)
{
  vtk::ConvertManagedToNative<::vtkImplicitSelectionLoop>(m_instance)->SetAutomaticNormalGeneration(arg0);
}



int vtkImplicitSelectionLoop::GetAutomaticNormalGeneration()
{
  int retVal = vtk::ConvertManagedToNative<::vtkImplicitSelectionLoop>(m_instance)->GetAutomaticNormalGeneration();
  return retVal;
}



void vtkImplicitSelectionLoop::AutomaticNormalGenerationOn()
{
  vtk::ConvertManagedToNative<::vtkImplicitSelectionLoop>(m_instance)->AutomaticNormalGenerationOn();
}



void vtkImplicitSelectionLoop::AutomaticNormalGenerationOff()
{
  vtk::ConvertManagedToNative<::vtkImplicitSelectionLoop>(m_instance)->AutomaticNormalGenerationOff();
}



void vtkImplicitSelectionLoop::SetNormal(double arg0, double arg1, double arg2)
{
  vtk::ConvertManagedToNative<::vtkImplicitSelectionLoop>(m_instance)->SetNormal(arg0, arg1, arg2);
}



void vtkImplicitSelectionLoop::SetNormal(array<double>^ a)
{
  pin_ptr<double> aPin = &a[0];
  double* nativeaPin = aPin;
  vtk::ConvertManagedToNative<::vtkImplicitSelectionLoop>(m_instance)->SetNormal(nativeaPin);
}



array<double>^ vtkImplicitSelectionLoop::GetNormal()
{
  const double* retVal = vtk::ConvertManagedToNative<::vtkImplicitSelectionLoop>(m_instance)->GetNormal();
  array<double>^ mRetVal = gcnew array<double>(3);
  for (size_t cprIdx=0; cprIdx<3; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



unsigned long vtkImplicitSelectionLoop::GetMTime()
{
  unsigned long retVal = vtk::ConvertManagedToNative<::vtkImplicitSelectionLoop>(m_instance)->GetMTime();
  return retVal;
}



  vtkImplicitSelectionLoop::vtkImplicitSelectionLoop(System::IntPtr native, bool bConst) : vtkImplicitFunction(native, bConst) {}



  vtkImplicitSelectionLoop::vtkImplicitSelectionLoop(bool donothing) : vtkImplicitFunction(donothing) {}



  vtkImplicitSelectionLoop::vtkImplicitSelectionLoop() : vtkImplicitFunction(false) {
  this->SetNativePointer(IntPtr(::vtkImplicitSelectionLoop::New()));
}



  vtkImplicitSelectionLoop::~vtkImplicitSelectionLoop() { }





} // end namespace vtkFiltering
