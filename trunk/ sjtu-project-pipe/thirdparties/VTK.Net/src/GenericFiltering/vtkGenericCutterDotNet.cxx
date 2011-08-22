

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkGenericCutterDotNet.h"

// native includes
#include "strstream"
#include "vtkGenericCutter.h"
#include "vtkImplicitFunction.h"
#include "vtkObject.h"
#include "vtkPointLocator.h"

using namespace System;

namespace vtk {

System::String^ vtkGenericCutter::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkGenericCutter>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkGenericCutter::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkGenericCutter>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkGenericCutter^ vtkGenericCutter::NewInstance()
{
  ::vtkGenericCutter* retVal = static_cast<::vtkGenericCutter*>(vtk::ConvertManagedToNative<::vtkGenericCutter>(m_instance)->NewInstance());
  return gcnew vtkGenericCutter(IntPtr(retVal), false);
}



vtkGenericCutter^ vtkGenericCutter::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkGenericCutter* retVal = static_cast<::vtkGenericCutter*>(::vtkGenericCutter::SafeDownCast(oWrap));
  return gcnew vtkGenericCutter(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkGenericCutter::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkGenericCutter>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkGenericCutter::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkGenericCutter>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkGenericCutter::SetValue(int i, double value)
{
  vtk::ConvertManagedToNative<::vtkGenericCutter>(m_instance)->SetValue(i, value);
}



double vtkGenericCutter::GetValue(int i)
{
  double retVal = vtk::ConvertManagedToNative<::vtkGenericCutter>(m_instance)->GetValue(i);
  return retVal;
}



void vtkGenericCutter::GetValues(array<double>^ contourValues)
{
  pin_ptr<double> contourValuesPin = &contourValues[0];
  double* nativecontourValuesPin = contourValuesPin;
  vtk::ConvertManagedToNative<::vtkGenericCutter>(m_instance)->GetValues(nativecontourValuesPin);
}



void vtkGenericCutter::SetNumberOfContours(int number)
{
  vtk::ConvertManagedToNative<::vtkGenericCutter>(m_instance)->SetNumberOfContours(number);
}



int vtkGenericCutter::GetNumberOfContours()
{
  int retVal = vtk::ConvertManagedToNative<::vtkGenericCutter>(m_instance)->GetNumberOfContours();
  return retVal;
}



void vtkGenericCutter::GenerateValues(int numContours, array<double>^ range)
{
  pin_ptr<double> rangePin = &range[0];
  double* nativerangePin = rangePin;
  vtk::ConvertManagedToNative<::vtkGenericCutter>(m_instance)->GenerateValues(numContours, nativerangePin);
}



void vtkGenericCutter::GenerateValues(int numContours, double rangeStart, double rangeEnd)
{
  vtk::ConvertManagedToNative<::vtkGenericCutter>(m_instance)->GenerateValues(numContours, rangeStart, rangeEnd);
}



unsigned long vtkGenericCutter::GetMTime()
{
  unsigned long retVal = vtk::ConvertManagedToNative<::vtkGenericCutter>(m_instance)->GetMTime();
  return retVal;
}



void vtkGenericCutter::SetCutFunction(vtkImplicitFunction^ arg0)
{
  ::vtkImplicitFunction* arg0Wrap = vtk::ConvertManagedToNative<::vtkImplicitFunction>(arg0->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkGenericCutter>(m_instance)->SetCutFunction(arg0Wrap);
}



vtkImplicitFunction^ vtkGenericCutter::GetCutFunction()
{
  ::vtkImplicitFunction* retVal = static_cast<::vtkImplicitFunction*>(vtk::ConvertManagedToNative<::vtkGenericCutter>(m_instance)->GetCutFunction());
  return gcnew vtkImplicitFunction(IntPtr(retVal), false);
}



void vtkGenericCutter::SetGenerateCutScalars(int arg0)
{
  vtk::ConvertManagedToNative<::vtkGenericCutter>(m_instance)->SetGenerateCutScalars(arg0);
}



int vtkGenericCutter::GetGenerateCutScalars()
{
  int retVal = vtk::ConvertManagedToNative<::vtkGenericCutter>(m_instance)->GetGenerateCutScalars();
  return retVal;
}



void vtkGenericCutter::GenerateCutScalarsOn()
{
  vtk::ConvertManagedToNative<::vtkGenericCutter>(m_instance)->GenerateCutScalarsOn();
}



void vtkGenericCutter::GenerateCutScalarsOff()
{
  vtk::ConvertManagedToNative<::vtkGenericCutter>(m_instance)->GenerateCutScalarsOff();
}



void vtkGenericCutter::SetLocator(vtkPointLocator^ locator)
{
  ::vtkPointLocator* locatorWrap = vtk::ConvertManagedToNative<::vtkPointLocator>(locator->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkGenericCutter>(m_instance)->SetLocator(locatorWrap);
}



vtkPointLocator^ vtkGenericCutter::GetLocator()
{
  ::vtkPointLocator* retVal = static_cast<::vtkPointLocator*>(vtk::ConvertManagedToNative<::vtkGenericCutter>(m_instance)->GetLocator());
  return gcnew vtkPointLocator(IntPtr(retVal), false);
}



void vtkGenericCutter::CreateDefaultLocator()
{
  vtk::ConvertManagedToNative<::vtkGenericCutter>(m_instance)->CreateDefaultLocator();
}



  vtkGenericCutter::vtkGenericCutter(System::IntPtr native, bool bConst) : vtkPolyDataAlgorithm(native, bConst) {}



  vtkGenericCutter::vtkGenericCutter(bool donothing) : vtkPolyDataAlgorithm(donothing) {}



  vtkGenericCutter::vtkGenericCutter() : vtkPolyDataAlgorithm(false) {
  this->SetNativePointer(IntPtr(::vtkGenericCutter::New()));
}



  vtkGenericCutter::~vtkGenericCutter() { }





} // end namespace vtkGenericFiltering
