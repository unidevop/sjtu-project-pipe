

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkContourGridDotNet.h"

// native includes
#include "strstream"
#include "vtkContourGrid.h"
#include "vtkObject.h"
#include "vtkPointLocator.h"

using namespace System;

namespace vtk {

System::String^ vtkContourGrid::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkContourGrid>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkContourGrid::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkContourGrid>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkContourGrid^ vtkContourGrid::NewInstance()
{
  ::vtkContourGrid* retVal = static_cast<::vtkContourGrid*>(vtk::ConvertManagedToNative<::vtkContourGrid>(m_instance)->NewInstance());
  return gcnew vtkContourGrid(IntPtr(retVal), false);
}



vtkContourGrid^ vtkContourGrid::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkContourGrid* retVal = static_cast<::vtkContourGrid*>(::vtkContourGrid::SafeDownCast(oWrap));
  return gcnew vtkContourGrid(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkContourGrid::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkContourGrid>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkContourGrid::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkContourGrid>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkContourGrid::SetValue(int i, double value)
{
  vtk::ConvertManagedToNative<::vtkContourGrid>(m_instance)->SetValue(i, value);
}



double vtkContourGrid::GetValue(int i)
{
  double retVal = vtk::ConvertManagedToNative<::vtkContourGrid>(m_instance)->GetValue(i);
  return retVal;
}



void vtkContourGrid::GetValues(array<double>^ contourValues)
{
  pin_ptr<double> contourValuesPin = &contourValues[0];
  double* nativecontourValuesPin = contourValuesPin;
  vtk::ConvertManagedToNative<::vtkContourGrid>(m_instance)->GetValues(nativecontourValuesPin);
}



void vtkContourGrid::SetNumberOfContours(int number)
{
  vtk::ConvertManagedToNative<::vtkContourGrid>(m_instance)->SetNumberOfContours(number);
}



int vtkContourGrid::GetNumberOfContours()
{
  int retVal = vtk::ConvertManagedToNative<::vtkContourGrid>(m_instance)->GetNumberOfContours();
  return retVal;
}



void vtkContourGrid::GenerateValues(int numContours, array<double>^ range)
{
  pin_ptr<double> rangePin = &range[0];
  double* nativerangePin = rangePin;
  vtk::ConvertManagedToNative<::vtkContourGrid>(m_instance)->GenerateValues(numContours, nativerangePin);
}



void vtkContourGrid::GenerateValues(int numContours, double rangeStart, double rangeEnd)
{
  vtk::ConvertManagedToNative<::vtkContourGrid>(m_instance)->GenerateValues(numContours, rangeStart, rangeEnd);
}



unsigned long vtkContourGrid::GetMTime()
{
  unsigned long retVal = vtk::ConvertManagedToNative<::vtkContourGrid>(m_instance)->GetMTime();
  return retVal;
}



void vtkContourGrid::SetComputeNormals(int arg0)
{
  vtk::ConvertManagedToNative<::vtkContourGrid>(m_instance)->SetComputeNormals(arg0);
}



int vtkContourGrid::GetComputeNormals()
{
  int retVal = vtk::ConvertManagedToNative<::vtkContourGrid>(m_instance)->GetComputeNormals();
  return retVal;
}



void vtkContourGrid::ComputeNormalsOn()
{
  vtk::ConvertManagedToNative<::vtkContourGrid>(m_instance)->ComputeNormalsOn();
}



void vtkContourGrid::ComputeNormalsOff()
{
  vtk::ConvertManagedToNative<::vtkContourGrid>(m_instance)->ComputeNormalsOff();
}



void vtkContourGrid::SetComputeGradients(int arg0)
{
  vtk::ConvertManagedToNative<::vtkContourGrid>(m_instance)->SetComputeGradients(arg0);
}



int vtkContourGrid::GetComputeGradients()
{
  int retVal = vtk::ConvertManagedToNative<::vtkContourGrid>(m_instance)->GetComputeGradients();
  return retVal;
}



void vtkContourGrid::ComputeGradientsOn()
{
  vtk::ConvertManagedToNative<::vtkContourGrid>(m_instance)->ComputeGradientsOn();
}



void vtkContourGrid::ComputeGradientsOff()
{
  vtk::ConvertManagedToNative<::vtkContourGrid>(m_instance)->ComputeGradientsOff();
}



void vtkContourGrid::SetComputeScalars(int arg0)
{
  vtk::ConvertManagedToNative<::vtkContourGrid>(m_instance)->SetComputeScalars(arg0);
}



int vtkContourGrid::GetComputeScalars()
{
  int retVal = vtk::ConvertManagedToNative<::vtkContourGrid>(m_instance)->GetComputeScalars();
  return retVal;
}



void vtkContourGrid::ComputeScalarsOn()
{
  vtk::ConvertManagedToNative<::vtkContourGrid>(m_instance)->ComputeScalarsOn();
}



void vtkContourGrid::ComputeScalarsOff()
{
  vtk::ConvertManagedToNative<::vtkContourGrid>(m_instance)->ComputeScalarsOff();
}



void vtkContourGrid::SetUseScalarTree(int arg0)
{
  vtk::ConvertManagedToNative<::vtkContourGrid>(m_instance)->SetUseScalarTree(arg0);
}



int vtkContourGrid::GetUseScalarTree()
{
  int retVal = vtk::ConvertManagedToNative<::vtkContourGrid>(m_instance)->GetUseScalarTree();
  return retVal;
}



void vtkContourGrid::UseScalarTreeOn()
{
  vtk::ConvertManagedToNative<::vtkContourGrid>(m_instance)->UseScalarTreeOn();
}



void vtkContourGrid::UseScalarTreeOff()
{
  vtk::ConvertManagedToNative<::vtkContourGrid>(m_instance)->UseScalarTreeOff();
}



void vtkContourGrid::SetLocator(vtkPointLocator^ locator)
{
  ::vtkPointLocator* locatorWrap = vtk::ConvertManagedToNative<::vtkPointLocator>(locator->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkContourGrid>(m_instance)->SetLocator(locatorWrap);
}



vtkPointLocator^ vtkContourGrid::GetLocator()
{
  ::vtkPointLocator* retVal = static_cast<::vtkPointLocator*>(vtk::ConvertManagedToNative<::vtkContourGrid>(m_instance)->GetLocator());
  return gcnew vtkPointLocator(IntPtr(retVal), false);
}



void vtkContourGrid::CreateDefaultLocator()
{
  vtk::ConvertManagedToNative<::vtkContourGrid>(m_instance)->CreateDefaultLocator();
}



  vtkContourGrid::vtkContourGrid(System::IntPtr native, bool bConst) : vtkPolyDataAlgorithm(native, bConst) {}



  vtkContourGrid::vtkContourGrid(bool donothing) : vtkPolyDataAlgorithm(donothing) {}



  vtkContourGrid::vtkContourGrid() : vtkPolyDataAlgorithm(false) {
  this->SetNativePointer(IntPtr(::vtkContourGrid::New()));
}



  vtkContourGrid::~vtkContourGrid() { }





} // end namespace vtkGraphics
