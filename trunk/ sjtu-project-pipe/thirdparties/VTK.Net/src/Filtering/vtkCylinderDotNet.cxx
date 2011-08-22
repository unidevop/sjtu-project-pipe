

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkCylinderDotNet.h"

// native includes
#include "strstream"
#include "vtkCylinder.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkCylinder::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkCylinder>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkCylinder::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkCylinder>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkCylinder^ vtkCylinder::NewInstance()
{
  ::vtkCylinder* retVal = static_cast<::vtkCylinder*>(vtk::ConvertManagedToNative<::vtkCylinder>(m_instance)->NewInstance());
  return gcnew vtkCylinder(IntPtr(retVal), false);
}



vtkCylinder^ vtkCylinder::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkCylinder* retVal = static_cast<::vtkCylinder*>(::vtkCylinder::SafeDownCast(oWrap));
  return gcnew vtkCylinder(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkCylinder::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkCylinder>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkCylinder::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkCylinder>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




double vtkCylinder::EvaluateFunction(array<double>^ x)
{
  pin_ptr<double> xPin = &x[0];
  double* nativexPin = xPin;
  double retVal = vtk::ConvertManagedToNative<::vtkCylinder>(m_instance)->EvaluateFunction(nativexPin);
  return retVal;
}



double vtkCylinder::EvaluateFunction(double x, double y, double z)
{
  double retVal = vtk::ConvertManagedToNative<::vtkCylinder>(m_instance)->EvaluateFunction(x, y, z);
  return retVal;
}



void vtkCylinder::EvaluateGradient(array<double>^ x, array<double>^ g)
{
  pin_ptr<double> xPin = &x[0];
  double* nativexPin = xPin;
  pin_ptr<double> gPin = &g[0];
  double* nativegPin = gPin;
  vtk::ConvertManagedToNative<::vtkCylinder>(m_instance)->EvaluateGradient(nativexPin, nativegPin);
}



void vtkCylinder::SetRadius(double arg0)
{
  vtk::ConvertManagedToNative<::vtkCylinder>(m_instance)->SetRadius(arg0);
}



double vtkCylinder::GetRadius()
{
  double retVal = vtk::ConvertManagedToNative<::vtkCylinder>(m_instance)->GetRadius();
  return retVal;
}



void vtkCylinder::SetCenter(double arg0, double arg1, double arg2)
{
  vtk::ConvertManagedToNative<::vtkCylinder>(m_instance)->SetCenter(arg0, arg1, arg2);
}



void vtkCylinder::SetCenter(array<double>^ a)
{
  pin_ptr<double> aPin = &a[0];
  double* nativeaPin = aPin;
  vtk::ConvertManagedToNative<::vtkCylinder>(m_instance)->SetCenter(nativeaPin);
}



array<double>^ vtkCylinder::GetCenter()
{
  const double* retVal = vtk::ConvertManagedToNative<::vtkCylinder>(m_instance)->GetCenter();
  array<double>^ mRetVal = gcnew array<double>(3);
  for (size_t cprIdx=0; cprIdx<3; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



  vtkCylinder::vtkCylinder(System::IntPtr native, bool bConst) : vtkImplicitFunction(native, bConst) {}



  vtkCylinder::vtkCylinder(bool donothing) : vtkImplicitFunction(donothing) {}



  vtkCylinder::vtkCylinder() : vtkImplicitFunction(false) {
  this->SetNativePointer(IntPtr(::vtkCylinder::New()));
}



  vtkCylinder::~vtkCylinder() { }





} // end namespace vtkFiltering
