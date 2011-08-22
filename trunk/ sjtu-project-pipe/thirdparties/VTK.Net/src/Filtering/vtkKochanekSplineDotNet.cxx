

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkKochanekSplineDotNet.h"

// native includes
#include "strstream"
#include "vtkKochanekSpline.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkKochanekSpline::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkKochanekSpline>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkKochanekSpline::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkKochanekSpline>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkKochanekSpline^ vtkKochanekSpline::NewInstance()
{
  ::vtkKochanekSpline* retVal = static_cast<::vtkKochanekSpline*>(vtk::ConvertManagedToNative<::vtkKochanekSpline>(m_instance)->NewInstance());
  return gcnew vtkKochanekSpline(IntPtr(retVal), false);
}



vtkKochanekSpline^ vtkKochanekSpline::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkKochanekSpline* retVal = static_cast<::vtkKochanekSpline*>(::vtkKochanekSpline::SafeDownCast(oWrap));
  return gcnew vtkKochanekSpline(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkKochanekSpline::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkKochanekSpline>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkKochanekSpline::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkKochanekSpline>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkKochanekSpline::Compute()
{
  vtk::ConvertManagedToNative<::vtkKochanekSpline>(m_instance)->Compute();
}



double vtkKochanekSpline::Evaluate(double t)
{
  double retVal = vtk::ConvertManagedToNative<::vtkKochanekSpline>(m_instance)->Evaluate(t);
  return retVal;
}



void vtkKochanekSpline::SetDefaultBias(double arg0)
{
  vtk::ConvertManagedToNative<::vtkKochanekSpline>(m_instance)->SetDefaultBias(arg0);
}



double vtkKochanekSpline::GetDefaultBias()
{
  double retVal = vtk::ConvertManagedToNative<::vtkKochanekSpline>(m_instance)->GetDefaultBias();
  return retVal;
}



void vtkKochanekSpline::SetDefaultTension(double arg0)
{
  vtk::ConvertManagedToNative<::vtkKochanekSpline>(m_instance)->SetDefaultTension(arg0);
}



double vtkKochanekSpline::GetDefaultTension()
{
  double retVal = vtk::ConvertManagedToNative<::vtkKochanekSpline>(m_instance)->GetDefaultTension();
  return retVal;
}



void vtkKochanekSpline::SetDefaultContinuity(double arg0)
{
  vtk::ConvertManagedToNative<::vtkKochanekSpline>(m_instance)->SetDefaultContinuity(arg0);
}



double vtkKochanekSpline::GetDefaultContinuity()
{
  double retVal = vtk::ConvertManagedToNative<::vtkKochanekSpline>(m_instance)->GetDefaultContinuity();
  return retVal;
}



void vtkKochanekSpline::DeepCopy(vtkSpline^ s)
{
  ::vtkSpline* sWrap = vtk::ConvertManagedToNative<::vtkSpline>(s->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkKochanekSpline>(m_instance)->DeepCopy(sWrap);
}



  vtkKochanekSpline::vtkKochanekSpline(System::IntPtr native, bool bConst) : vtkSpline(native, bConst) {}



  vtkKochanekSpline::vtkKochanekSpline(bool donothing) : vtkSpline(donothing) {}



  vtkKochanekSpline::vtkKochanekSpline() : vtkSpline(false) {
  this->SetNativePointer(IntPtr(::vtkKochanekSpline::New()));
}



  vtkKochanekSpline::~vtkKochanekSpline() { }





} // end namespace vtkFiltering
