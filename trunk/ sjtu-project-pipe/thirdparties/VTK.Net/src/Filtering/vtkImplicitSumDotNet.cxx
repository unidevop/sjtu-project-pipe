

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkImplicitSumDotNet.h"

// native includes
#include "strstream"
#include "vtkImplicitSum.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkImplicitSum::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkImplicitSum>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkImplicitSum::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkImplicitSum>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkImplicitSum^ vtkImplicitSum::NewInstance()
{
  ::vtkImplicitSum* retVal = static_cast<::vtkImplicitSum*>(vtk::ConvertManagedToNative<::vtkImplicitSum>(m_instance)->NewInstance());
  return gcnew vtkImplicitSum(IntPtr(retVal), false);
}



vtkImplicitSum^ vtkImplicitSum::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkImplicitSum* retVal = static_cast<::vtkImplicitSum*>(::vtkImplicitSum::SafeDownCast(oWrap));
  return gcnew vtkImplicitSum(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkImplicitSum::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkImplicitSum>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkImplicitSum::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkImplicitSum>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




double vtkImplicitSum::EvaluateFunction(array<double>^ x)
{
  pin_ptr<double> xPin = &x[0];
  double* nativexPin = xPin;
  double retVal = vtk::ConvertManagedToNative<::vtkImplicitSum>(m_instance)->EvaluateFunction(nativexPin);
  return retVal;
}



double vtkImplicitSum::EvaluateFunction(double x, double y, double z)
{
  double retVal = vtk::ConvertManagedToNative<::vtkImplicitSum>(m_instance)->EvaluateFunction(x, y, z);
  return retVal;
}



void vtkImplicitSum::EvaluateGradient(array<double>^ x, array<double>^ g)
{
  pin_ptr<double> xPin = &x[0];
  double* nativexPin = xPin;
  pin_ptr<double> gPin = &g[0];
  double* nativegPin = gPin;
  vtk::ConvertManagedToNative<::vtkImplicitSum>(m_instance)->EvaluateGradient(nativexPin, nativegPin);
}



unsigned long vtkImplicitSum::GetMTime()
{
  unsigned long retVal = vtk::ConvertManagedToNative<::vtkImplicitSum>(m_instance)->GetMTime();
  return retVal;
}



void vtkImplicitSum::AddFunction(vtkImplicitFunction^ in, double weight)
{
  ::vtkImplicitFunction* inWrap = vtk::ConvertManagedToNative<::vtkImplicitFunction>(in->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkImplicitSum>(m_instance)->AddFunction(inWrap, weight);
}



void vtkImplicitSum::AddFunction(vtkImplicitFunction^ in)
{
  ::vtkImplicitFunction* inWrap = vtk::ConvertManagedToNative<::vtkImplicitFunction>(in->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkImplicitSum>(m_instance)->AddFunction(inWrap);
}



void vtkImplicitSum::RemoveAllFunctions()
{
  vtk::ConvertManagedToNative<::vtkImplicitSum>(m_instance)->RemoveAllFunctions();
}



void vtkImplicitSum::SetFunctionWeight(vtkImplicitFunction^ f, double weight)
{
  ::vtkImplicitFunction* fWrap = vtk::ConvertManagedToNative<::vtkImplicitFunction>(f->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkImplicitSum>(m_instance)->SetFunctionWeight(fWrap, weight);
}



void vtkImplicitSum::SetNormalizeByWeight(int arg0)
{
  vtk::ConvertManagedToNative<::vtkImplicitSum>(m_instance)->SetNormalizeByWeight(arg0);
}



int vtkImplicitSum::GetNormalizeByWeight()
{
  int retVal = vtk::ConvertManagedToNative<::vtkImplicitSum>(m_instance)->GetNormalizeByWeight();
  return retVal;
}



void vtkImplicitSum::NormalizeByWeightOn()
{
  vtk::ConvertManagedToNative<::vtkImplicitSum>(m_instance)->NormalizeByWeightOn();
}



void vtkImplicitSum::NormalizeByWeightOff()
{
  vtk::ConvertManagedToNative<::vtkImplicitSum>(m_instance)->NormalizeByWeightOff();
}



  vtkImplicitSum::vtkImplicitSum(System::IntPtr native, bool bConst) : vtkImplicitFunction(native, bConst) {}



  vtkImplicitSum::vtkImplicitSum(bool donothing) : vtkImplicitFunction(donothing) {}



  vtkImplicitSum::vtkImplicitSum() : vtkImplicitFunction(false) {
  this->SetNativePointer(IntPtr(::vtkImplicitSum::New()));
}



  vtkImplicitSum::~vtkImplicitSum() { }





} // end namespace vtkFiltering
