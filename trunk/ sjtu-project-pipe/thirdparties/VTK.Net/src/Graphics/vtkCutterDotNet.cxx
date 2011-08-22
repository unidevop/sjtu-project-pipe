

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkCutterDotNet.h"

// native includes
#include "strstream"
#include "vtkCutter.h"
#include "vtkImplicitFunction.h"
#include "vtkObject.h"
#include "vtkPointLocator.h"

using namespace System;

namespace vtk {

System::String^ vtkCutter::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkCutter>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkCutter::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkCutter>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkCutter^ vtkCutter::NewInstance()
{
  ::vtkCutter* retVal = static_cast<::vtkCutter*>(vtk::ConvertManagedToNative<::vtkCutter>(m_instance)->NewInstance());
  return gcnew vtkCutter(IntPtr(retVal), false);
}



vtkCutter^ vtkCutter::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkCutter* retVal = static_cast<::vtkCutter*>(::vtkCutter::SafeDownCast(oWrap));
  return gcnew vtkCutter(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkCutter::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkCutter>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkCutter::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkCutter>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkCutter::SetValue(int i, double value)
{
  vtk::ConvertManagedToNative<::vtkCutter>(m_instance)->SetValue(i, value);
}



double vtkCutter::GetValue(int i)
{
  double retVal = vtk::ConvertManagedToNative<::vtkCutter>(m_instance)->GetValue(i);
  return retVal;
}



void vtkCutter::GetValues(array<double>^ contourValues)
{
  pin_ptr<double> contourValuesPin = &contourValues[0];
  double* nativecontourValuesPin = contourValuesPin;
  vtk::ConvertManagedToNative<::vtkCutter>(m_instance)->GetValues(nativecontourValuesPin);
}



void vtkCutter::SetNumberOfContours(int number)
{
  vtk::ConvertManagedToNative<::vtkCutter>(m_instance)->SetNumberOfContours(number);
}



int vtkCutter::GetNumberOfContours()
{
  int retVal = vtk::ConvertManagedToNative<::vtkCutter>(m_instance)->GetNumberOfContours();
  return retVal;
}



void vtkCutter::GenerateValues(int numContours, array<double>^ range)
{
  pin_ptr<double> rangePin = &range[0];
  double* nativerangePin = rangePin;
  vtk::ConvertManagedToNative<::vtkCutter>(m_instance)->GenerateValues(numContours, nativerangePin);
}



void vtkCutter::GenerateValues(int numContours, double rangeStart, double rangeEnd)
{
  vtk::ConvertManagedToNative<::vtkCutter>(m_instance)->GenerateValues(numContours, rangeStart, rangeEnd);
}



unsigned long vtkCutter::GetMTime()
{
  unsigned long retVal = vtk::ConvertManagedToNative<::vtkCutter>(m_instance)->GetMTime();
  return retVal;
}



void vtkCutter::SetCutFunction(vtkImplicitFunction^ arg0)
{
  ::vtkImplicitFunction* arg0Wrap = vtk::ConvertManagedToNative<::vtkImplicitFunction>(arg0->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkCutter>(m_instance)->SetCutFunction(arg0Wrap);
}



vtkImplicitFunction^ vtkCutter::GetCutFunction()
{
  ::vtkImplicitFunction* retVal = static_cast<::vtkImplicitFunction*>(vtk::ConvertManagedToNative<::vtkCutter>(m_instance)->GetCutFunction());
  return gcnew vtkImplicitFunction(IntPtr(retVal), false);
}



void vtkCutter::SetGenerateCutScalars(int arg0)
{
  vtk::ConvertManagedToNative<::vtkCutter>(m_instance)->SetGenerateCutScalars(arg0);
}



int vtkCutter::GetGenerateCutScalars()
{
  int retVal = vtk::ConvertManagedToNative<::vtkCutter>(m_instance)->GetGenerateCutScalars();
  return retVal;
}



void vtkCutter::GenerateCutScalarsOn()
{
  vtk::ConvertManagedToNative<::vtkCutter>(m_instance)->GenerateCutScalarsOn();
}



void vtkCutter::GenerateCutScalarsOff()
{
  vtk::ConvertManagedToNative<::vtkCutter>(m_instance)->GenerateCutScalarsOff();
}



void vtkCutter::SetLocator(vtkPointLocator^ locator)
{
  ::vtkPointLocator* locatorWrap = vtk::ConvertManagedToNative<::vtkPointLocator>(locator->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkCutter>(m_instance)->SetLocator(locatorWrap);
}



vtkPointLocator^ vtkCutter::GetLocator()
{
  ::vtkPointLocator* retVal = static_cast<::vtkPointLocator*>(vtk::ConvertManagedToNative<::vtkCutter>(m_instance)->GetLocator());
  return gcnew vtkPointLocator(IntPtr(retVal), false);
}



void vtkCutter::SetSortBy(int arg0)
{
  vtk::ConvertManagedToNative<::vtkCutter>(m_instance)->SetSortBy(arg0);
}



int vtkCutter::GetSortByMinValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkCutter>(m_instance)->GetSortByMinValue();
  return retVal;
}



int vtkCutter::GetSortByMaxValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkCutter>(m_instance)->GetSortByMaxValue();
  return retVal;
}



int vtkCutter::GetSortBy()
{
  int retVal = vtk::ConvertManagedToNative<::vtkCutter>(m_instance)->GetSortBy();
  return retVal;
}



void vtkCutter::SetSortByToSortByValue()
{
  vtk::ConvertManagedToNative<::vtkCutter>(m_instance)->SetSortByToSortByValue();
}



void vtkCutter::SetSortByToSortByCell()
{
  vtk::ConvertManagedToNative<::vtkCutter>(m_instance)->SetSortByToSortByCell();
}



System::String^ vtkCutter::GetSortByAsString()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkCutter>(m_instance)->GetSortByAsString();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



void vtkCutter::CreateDefaultLocator()
{
  vtk::ConvertManagedToNative<::vtkCutter>(m_instance)->CreateDefaultLocator();
}



void vtkCutter::GetCellTypeDimensions(array<unsigned char>^ cellTypeDimensions)
{
  pin_ptr<unsigned char> cellTypeDimensionsPin = &cellTypeDimensions[0];
  unsigned char* nativecellTypeDimensionsPin = cellTypeDimensionsPin;
  ::vtkCutter::GetCellTypeDimensions(nativecellTypeDimensionsPin);
}



  vtkCutter::vtkCutter(System::IntPtr native, bool bConst) : vtkPolyDataAlgorithm(native, bConst) {}



  vtkCutter::vtkCutter(bool donothing) : vtkPolyDataAlgorithm(donothing) {}



  vtkCutter::vtkCutter() : vtkPolyDataAlgorithm(false) {
  this->SetNativePointer(IntPtr(::vtkCutter::New()));
}



  vtkCutter::~vtkCutter() { }





} // end namespace vtkGraphics
