

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkImageMarchingCubesDotNet.h"

// native includes
#include "strstream"
#include "vtkImageMarchingCubes.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkImageMarchingCubes::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkImageMarchingCubes>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkImageMarchingCubes::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkImageMarchingCubes>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkImageMarchingCubes^ vtkImageMarchingCubes::NewInstance()
{
  ::vtkImageMarchingCubes* retVal = static_cast<::vtkImageMarchingCubes*>(vtk::ConvertManagedToNative<::vtkImageMarchingCubes>(m_instance)->NewInstance());
  return gcnew vtkImageMarchingCubes(IntPtr(retVal), false);
}



vtkImageMarchingCubes^ vtkImageMarchingCubes::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkImageMarchingCubes* retVal = static_cast<::vtkImageMarchingCubes*>(::vtkImageMarchingCubes::SafeDownCast(oWrap));
  return gcnew vtkImageMarchingCubes(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkImageMarchingCubes::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkImageMarchingCubes>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkImageMarchingCubes::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkImageMarchingCubes>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkImageMarchingCubes::SetValue(int i, double value)
{
  vtk::ConvertManagedToNative<::vtkImageMarchingCubes>(m_instance)->SetValue(i, value);
}



double vtkImageMarchingCubes::GetValue(int i)
{
  double retVal = vtk::ConvertManagedToNative<::vtkImageMarchingCubes>(m_instance)->GetValue(i);
  return retVal;
}



void vtkImageMarchingCubes::GetValues(array<double>^ contourValues)
{
  pin_ptr<double> contourValuesPin = &contourValues[0];
  double* nativecontourValuesPin = contourValuesPin;
  vtk::ConvertManagedToNative<::vtkImageMarchingCubes>(m_instance)->GetValues(nativecontourValuesPin);
}



void vtkImageMarchingCubes::SetNumberOfContours(int number)
{
  vtk::ConvertManagedToNative<::vtkImageMarchingCubes>(m_instance)->SetNumberOfContours(number);
}



int vtkImageMarchingCubes::GetNumberOfContours()
{
  int retVal = vtk::ConvertManagedToNative<::vtkImageMarchingCubes>(m_instance)->GetNumberOfContours();
  return retVal;
}



void vtkImageMarchingCubes::GenerateValues(int numContours, array<double>^ range)
{
  pin_ptr<double> rangePin = &range[0];
  double* nativerangePin = rangePin;
  vtk::ConvertManagedToNative<::vtkImageMarchingCubes>(m_instance)->GenerateValues(numContours, nativerangePin);
}



void vtkImageMarchingCubes::GenerateValues(int numContours, double rangeStart, double rangeEnd)
{
  vtk::ConvertManagedToNative<::vtkImageMarchingCubes>(m_instance)->GenerateValues(numContours, rangeStart, rangeEnd);
}



unsigned long vtkImageMarchingCubes::GetMTime()
{
  unsigned long retVal = vtk::ConvertManagedToNative<::vtkImageMarchingCubes>(m_instance)->GetMTime();
  return retVal;
}



void vtkImageMarchingCubes::SetComputeScalars(int arg0)
{
  vtk::ConvertManagedToNative<::vtkImageMarchingCubes>(m_instance)->SetComputeScalars(arg0);
}



int vtkImageMarchingCubes::GetComputeScalars()
{
  int retVal = vtk::ConvertManagedToNative<::vtkImageMarchingCubes>(m_instance)->GetComputeScalars();
  return retVal;
}



void vtkImageMarchingCubes::ComputeScalarsOn()
{
  vtk::ConvertManagedToNative<::vtkImageMarchingCubes>(m_instance)->ComputeScalarsOn();
}



void vtkImageMarchingCubes::ComputeScalarsOff()
{
  vtk::ConvertManagedToNative<::vtkImageMarchingCubes>(m_instance)->ComputeScalarsOff();
}



void vtkImageMarchingCubes::SetComputeNormals(int arg0)
{
  vtk::ConvertManagedToNative<::vtkImageMarchingCubes>(m_instance)->SetComputeNormals(arg0);
}



int vtkImageMarchingCubes::GetComputeNormals()
{
  int retVal = vtk::ConvertManagedToNative<::vtkImageMarchingCubes>(m_instance)->GetComputeNormals();
  return retVal;
}



void vtkImageMarchingCubes::ComputeNormalsOn()
{
  vtk::ConvertManagedToNative<::vtkImageMarchingCubes>(m_instance)->ComputeNormalsOn();
}



void vtkImageMarchingCubes::ComputeNormalsOff()
{
  vtk::ConvertManagedToNative<::vtkImageMarchingCubes>(m_instance)->ComputeNormalsOff();
}



void vtkImageMarchingCubes::SetComputeGradients(int arg0)
{
  vtk::ConvertManagedToNative<::vtkImageMarchingCubes>(m_instance)->SetComputeGradients(arg0);
}



int vtkImageMarchingCubes::GetComputeGradients()
{
  int retVal = vtk::ConvertManagedToNative<::vtkImageMarchingCubes>(m_instance)->GetComputeGradients();
  return retVal;
}



void vtkImageMarchingCubes::ComputeGradientsOn()
{
  vtk::ConvertManagedToNative<::vtkImageMarchingCubes>(m_instance)->ComputeGradientsOn();
}



void vtkImageMarchingCubes::ComputeGradientsOff()
{
  vtk::ConvertManagedToNative<::vtkImageMarchingCubes>(m_instance)->ComputeGradientsOff();
}



int vtkImageMarchingCubes::GetLocatorPoint(int cellX, int cellY, int edge)
{
  int retVal = vtk::ConvertManagedToNative<::vtkImageMarchingCubes>(m_instance)->GetLocatorPoint(cellX, cellY, edge);
  return retVal;
}



void vtkImageMarchingCubes::AddLocatorPoint(int cellX, int cellY, int edge, int ptId)
{
  vtk::ConvertManagedToNative<::vtkImageMarchingCubes>(m_instance)->AddLocatorPoint(cellX, cellY, edge, ptId);
}



void vtkImageMarchingCubes::IncrementLocatorZ()
{
  vtk::ConvertManagedToNative<::vtkImageMarchingCubes>(m_instance)->IncrementLocatorZ();
}



void vtkImageMarchingCubes::SetInputMemoryLimit(int arg0)
{
  vtk::ConvertManagedToNative<::vtkImageMarchingCubes>(m_instance)->SetInputMemoryLimit(arg0);
}



int vtkImageMarchingCubes::GetInputMemoryLimit()
{
  int retVal = vtk::ConvertManagedToNative<::vtkImageMarchingCubes>(m_instance)->GetInputMemoryLimit();
  return retVal;
}



  vtkImageMarchingCubes::vtkImageMarchingCubes(System::IntPtr native, bool bConst) : vtkPolyDataAlgorithm(native, bConst) {}



  vtkImageMarchingCubes::vtkImageMarchingCubes(bool donothing) : vtkPolyDataAlgorithm(donothing) {}



  vtkImageMarchingCubes::vtkImageMarchingCubes() : vtkPolyDataAlgorithm(false) {
  this->SetNativePointer(IntPtr(::vtkImageMarchingCubes::New()));
}



  vtkImageMarchingCubes::~vtkImageMarchingCubes() { }





} // end namespace vtkGraphics
