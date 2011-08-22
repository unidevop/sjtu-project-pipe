

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkMarchingSquaresDotNet.h"

// native includes
#include "strstream"
#include "vtkMarchingSquares.h"
#include "vtkObject.h"
#include "vtkPointLocator.h"

using namespace System;

namespace vtk {

System::String^ vtkMarchingSquares::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkMarchingSquares>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkMarchingSquares::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkMarchingSquares>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkMarchingSquares^ vtkMarchingSquares::NewInstance()
{
  ::vtkMarchingSquares* retVal = static_cast<::vtkMarchingSquares*>(vtk::ConvertManagedToNative<::vtkMarchingSquares>(m_instance)->NewInstance());
  return gcnew vtkMarchingSquares(IntPtr(retVal), false);
}



vtkMarchingSquares^ vtkMarchingSquares::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkMarchingSquares* retVal = static_cast<::vtkMarchingSquares*>(::vtkMarchingSquares::SafeDownCast(oWrap));
  return gcnew vtkMarchingSquares(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkMarchingSquares::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkMarchingSquares>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkMarchingSquares::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkMarchingSquares>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkMarchingSquares::SetImageRange(array<int>^ arg0)
{
  pin_ptr<int> arg0Pin = &arg0[0];
  int* nativearg0Pin = arg0Pin;
  vtk::ConvertManagedToNative<::vtkMarchingSquares>(m_instance)->SetImageRange(nativearg0Pin);
}



array<int>^ vtkMarchingSquares::GetImageRange()
{
  const int* retVal = vtk::ConvertManagedToNative<::vtkMarchingSquares>(m_instance)->GetImageRange();
  array<int>^ mRetVal = gcnew array<int>(6);
  for (size_t cprIdx=0; cprIdx<6; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



void vtkMarchingSquares::SetImageRange(int imin, int imax, int jmin, int jmax, int kmin, int kmax)
{
  vtk::ConvertManagedToNative<::vtkMarchingSquares>(m_instance)->SetImageRange(imin, imax, jmin, jmax, kmin, kmax);
}



void vtkMarchingSquares::SetValue(int i, double value)
{
  vtk::ConvertManagedToNative<::vtkMarchingSquares>(m_instance)->SetValue(i, value);
}



double vtkMarchingSquares::GetValue(int i)
{
  double retVal = vtk::ConvertManagedToNative<::vtkMarchingSquares>(m_instance)->GetValue(i);
  return retVal;
}



void vtkMarchingSquares::GetValues(array<double>^ contourValues)
{
  pin_ptr<double> contourValuesPin = &contourValues[0];
  double* nativecontourValuesPin = contourValuesPin;
  vtk::ConvertManagedToNative<::vtkMarchingSquares>(m_instance)->GetValues(nativecontourValuesPin);
}



void vtkMarchingSquares::SetNumberOfContours(int number)
{
  vtk::ConvertManagedToNative<::vtkMarchingSquares>(m_instance)->SetNumberOfContours(number);
}



int vtkMarchingSquares::GetNumberOfContours()
{
  int retVal = vtk::ConvertManagedToNative<::vtkMarchingSquares>(m_instance)->GetNumberOfContours();
  return retVal;
}



void vtkMarchingSquares::GenerateValues(int numContours, array<double>^ range)
{
  pin_ptr<double> rangePin = &range[0];
  double* nativerangePin = rangePin;
  vtk::ConvertManagedToNative<::vtkMarchingSquares>(m_instance)->GenerateValues(numContours, nativerangePin);
}



void vtkMarchingSquares::GenerateValues(int numContours, double rangeStart, double rangeEnd)
{
  vtk::ConvertManagedToNative<::vtkMarchingSquares>(m_instance)->GenerateValues(numContours, rangeStart, rangeEnd);
}



unsigned long vtkMarchingSquares::GetMTime()
{
  unsigned long retVal = vtk::ConvertManagedToNative<::vtkMarchingSquares>(m_instance)->GetMTime();
  return retVal;
}



void vtkMarchingSquares::SetLocator(vtkPointLocator^ locator)
{
  ::vtkPointLocator* locatorWrap = vtk::ConvertManagedToNative<::vtkPointLocator>(locator->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkMarchingSquares>(m_instance)->SetLocator(locatorWrap);
}



vtkPointLocator^ vtkMarchingSquares::GetLocator()
{
  ::vtkPointLocator* retVal = static_cast<::vtkPointLocator*>(vtk::ConvertManagedToNative<::vtkMarchingSquares>(m_instance)->GetLocator());
  return gcnew vtkPointLocator(IntPtr(retVal), false);
}



void vtkMarchingSquares::CreateDefaultLocator()
{
  vtk::ConvertManagedToNative<::vtkMarchingSquares>(m_instance)->CreateDefaultLocator();
}



  vtkMarchingSquares::vtkMarchingSquares(System::IntPtr native, bool bConst) : vtkPolyDataAlgorithm(native, bConst) {}



  vtkMarchingSquares::vtkMarchingSquares(bool donothing) : vtkPolyDataAlgorithm(donothing) {}



  vtkMarchingSquares::vtkMarchingSquares() : vtkPolyDataAlgorithm(false) {
  this->SetNativePointer(IntPtr(::vtkMarchingSquares::New()));
}



  vtkMarchingSquares::~vtkMarchingSquares() { }





} // end namespace vtkGraphics
