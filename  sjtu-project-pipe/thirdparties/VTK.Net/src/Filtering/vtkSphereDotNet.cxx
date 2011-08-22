

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkSphereDotNet.h"

// native includes
#include "strstream"
#include "vtkSphere.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkSphere::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkSphere>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkSphere::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkSphere>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkSphere^ vtkSphere::NewInstance()
{
  ::vtkSphere* retVal = static_cast<::vtkSphere*>(vtk::ConvertManagedToNative<::vtkSphere>(m_instance)->NewInstance());
  return gcnew vtkSphere(IntPtr(retVal), false);
}



vtkSphere^ vtkSphere::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkSphere* retVal = static_cast<::vtkSphere*>(::vtkSphere::SafeDownCast(oWrap));
  return gcnew vtkSphere(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkSphere::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkSphere>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkSphere::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkSphere>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




double vtkSphere::EvaluateFunction(array<double>^ x)
{
  pin_ptr<double> xPin = &x[0];
  double* nativexPin = xPin;
  double retVal = vtk::ConvertManagedToNative<::vtkSphere>(m_instance)->EvaluateFunction(nativexPin);
  return retVal;
}



double vtkSphere::EvaluateFunction(double x, double y, double z)
{
  double retVal = vtk::ConvertManagedToNative<::vtkSphere>(m_instance)->EvaluateFunction(x, y, z);
  return retVal;
}



void vtkSphere::EvaluateGradient(array<double>^ x, array<double>^ n)
{
  pin_ptr<double> xPin = &x[0];
  double* nativexPin = xPin;
  pin_ptr<double> nPin = &n[0];
  double* nativenPin = nPin;
  vtk::ConvertManagedToNative<::vtkSphere>(m_instance)->EvaluateGradient(nativexPin, nativenPin);
}



void vtkSphere::SetRadius(double arg0)
{
  vtk::ConvertManagedToNative<::vtkSphere>(m_instance)->SetRadius(arg0);
}



double vtkSphere::GetRadius()
{
  double retVal = vtk::ConvertManagedToNative<::vtkSphere>(m_instance)->GetRadius();
  return retVal;
}



void vtkSphere::SetCenter(double arg0, double arg1, double arg2)
{
  vtk::ConvertManagedToNative<::vtkSphere>(m_instance)->SetCenter(arg0, arg1, arg2);
}



void vtkSphere::SetCenter(array<double>^ a)
{
  pin_ptr<double> aPin = &a[0];
  double* nativeaPin = aPin;
  vtk::ConvertManagedToNative<::vtkSphere>(m_instance)->SetCenter(nativeaPin);
}



array<double>^ vtkSphere::GetCenter()
{
  const double* retVal = vtk::ConvertManagedToNative<::vtkSphere>(m_instance)->GetCenter();
  array<double>^ mRetVal = gcnew array<double>(3);
  for (size_t cprIdx=0; cprIdx<3; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



  vtkSphere::vtkSphere(System::IntPtr native, bool bConst) : vtkImplicitFunction(native, bConst) {}



  vtkSphere::vtkSphere(bool donothing) : vtkImplicitFunction(donothing) {}



  vtkSphere::vtkSphere() : vtkImplicitFunction(false) {
  this->SetNativePointer(IntPtr(::vtkSphere::New()));
}



  vtkSphere::~vtkSphere() { }





} // end namespace vtkFiltering
