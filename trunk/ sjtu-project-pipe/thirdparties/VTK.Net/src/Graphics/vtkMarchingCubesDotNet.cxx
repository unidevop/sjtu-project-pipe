

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkMarchingCubesDotNet.h"

// native includes
#include "strstream"
#include "vtkMarchingCubes.h"
#include "vtkObject.h"
#include "vtkPointLocator.h"

using namespace System;

namespace vtk {

System::String^ vtkMarchingCubes::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkMarchingCubes>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkMarchingCubes::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkMarchingCubes>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkMarchingCubes^ vtkMarchingCubes::NewInstance()
{
  ::vtkMarchingCubes* retVal = static_cast<::vtkMarchingCubes*>(vtk::ConvertManagedToNative<::vtkMarchingCubes>(m_instance)->NewInstance());
  return gcnew vtkMarchingCubes(IntPtr(retVal), false);
}



vtkMarchingCubes^ vtkMarchingCubes::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkMarchingCubes* retVal = static_cast<::vtkMarchingCubes*>(::vtkMarchingCubes::SafeDownCast(oWrap));
  return gcnew vtkMarchingCubes(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkMarchingCubes::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkMarchingCubes>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkMarchingCubes::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkMarchingCubes>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkMarchingCubes::SetValue(int i, double value)
{
  vtk::ConvertManagedToNative<::vtkMarchingCubes>(m_instance)->SetValue(i, value);
}



double vtkMarchingCubes::GetValue(int i)
{
  double retVal = vtk::ConvertManagedToNative<::vtkMarchingCubes>(m_instance)->GetValue(i);
  return retVal;
}



void vtkMarchingCubes::GetValues(array<double>^ contourValues)
{
  pin_ptr<double> contourValuesPin = &contourValues[0];
  double* nativecontourValuesPin = contourValuesPin;
  vtk::ConvertManagedToNative<::vtkMarchingCubes>(m_instance)->GetValues(nativecontourValuesPin);
}



void vtkMarchingCubes::SetNumberOfContours(int number)
{
  vtk::ConvertManagedToNative<::vtkMarchingCubes>(m_instance)->SetNumberOfContours(number);
}



int vtkMarchingCubes::GetNumberOfContours()
{
  int retVal = vtk::ConvertManagedToNative<::vtkMarchingCubes>(m_instance)->GetNumberOfContours();
  return retVal;
}



void vtkMarchingCubes::GenerateValues(int numContours, array<double>^ range)
{
  pin_ptr<double> rangePin = &range[0];
  double* nativerangePin = rangePin;
  vtk::ConvertManagedToNative<::vtkMarchingCubes>(m_instance)->GenerateValues(numContours, nativerangePin);
}



void vtkMarchingCubes::GenerateValues(int numContours, double rangeStart, double rangeEnd)
{
  vtk::ConvertManagedToNative<::vtkMarchingCubes>(m_instance)->GenerateValues(numContours, rangeStart, rangeEnd);
}



unsigned long vtkMarchingCubes::GetMTime()
{
  unsigned long retVal = vtk::ConvertManagedToNative<::vtkMarchingCubes>(m_instance)->GetMTime();
  return retVal;
}



void vtkMarchingCubes::SetComputeNormals(int arg0)
{
  vtk::ConvertManagedToNative<::vtkMarchingCubes>(m_instance)->SetComputeNormals(arg0);
}



int vtkMarchingCubes::GetComputeNormals()
{
  int retVal = vtk::ConvertManagedToNative<::vtkMarchingCubes>(m_instance)->GetComputeNormals();
  return retVal;
}



void vtkMarchingCubes::ComputeNormalsOn()
{
  vtk::ConvertManagedToNative<::vtkMarchingCubes>(m_instance)->ComputeNormalsOn();
}



void vtkMarchingCubes::ComputeNormalsOff()
{
  vtk::ConvertManagedToNative<::vtkMarchingCubes>(m_instance)->ComputeNormalsOff();
}



void vtkMarchingCubes::SetComputeGradients(int arg0)
{
  vtk::ConvertManagedToNative<::vtkMarchingCubes>(m_instance)->SetComputeGradients(arg0);
}



int vtkMarchingCubes::GetComputeGradients()
{
  int retVal = vtk::ConvertManagedToNative<::vtkMarchingCubes>(m_instance)->GetComputeGradients();
  return retVal;
}



void vtkMarchingCubes::ComputeGradientsOn()
{
  vtk::ConvertManagedToNative<::vtkMarchingCubes>(m_instance)->ComputeGradientsOn();
}



void vtkMarchingCubes::ComputeGradientsOff()
{
  vtk::ConvertManagedToNative<::vtkMarchingCubes>(m_instance)->ComputeGradientsOff();
}



void vtkMarchingCubes::SetComputeScalars(int arg0)
{
  vtk::ConvertManagedToNative<::vtkMarchingCubes>(m_instance)->SetComputeScalars(arg0);
}



int vtkMarchingCubes::GetComputeScalars()
{
  int retVal = vtk::ConvertManagedToNative<::vtkMarchingCubes>(m_instance)->GetComputeScalars();
  return retVal;
}



void vtkMarchingCubes::ComputeScalarsOn()
{
  vtk::ConvertManagedToNative<::vtkMarchingCubes>(m_instance)->ComputeScalarsOn();
}



void vtkMarchingCubes::ComputeScalarsOff()
{
  vtk::ConvertManagedToNative<::vtkMarchingCubes>(m_instance)->ComputeScalarsOff();
}



void vtkMarchingCubes::SetLocator(vtkPointLocator^ locator)
{
  ::vtkPointLocator* locatorWrap = vtk::ConvertManagedToNative<::vtkPointLocator>(locator->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkMarchingCubes>(m_instance)->SetLocator(locatorWrap);
}



vtkPointLocator^ vtkMarchingCubes::GetLocator()
{
  ::vtkPointLocator* retVal = static_cast<::vtkPointLocator*>(vtk::ConvertManagedToNative<::vtkMarchingCubes>(m_instance)->GetLocator());
  return gcnew vtkPointLocator(IntPtr(retVal), false);
}



void vtkMarchingCubes::CreateDefaultLocator()
{
  vtk::ConvertManagedToNative<::vtkMarchingCubes>(m_instance)->CreateDefaultLocator();
}



  vtkMarchingCubes::vtkMarchingCubes(System::IntPtr native, bool bConst) : vtkPolyDataAlgorithm(native, bConst) {}



  vtkMarchingCubes::vtkMarchingCubes(bool donothing) : vtkPolyDataAlgorithm(donothing) {}



  vtkMarchingCubes::vtkMarchingCubes() : vtkPolyDataAlgorithm(false) {
  this->SetNativePointer(IntPtr(::vtkMarchingCubes::New()));
}



  vtkMarchingCubes::~vtkMarchingCubes() { }





} // end namespace vtkGraphics
