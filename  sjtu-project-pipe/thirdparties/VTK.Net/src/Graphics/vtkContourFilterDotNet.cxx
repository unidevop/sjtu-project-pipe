

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkContourFilterDotNet.h"

// native includes
#include "strstream"
#include "vtkContourFilter.h"
#include "vtkObject.h"
#include "vtkPointLocator.h"
#include "vtkScalarTree.h"

using namespace System;

namespace vtk {

System::String^ vtkContourFilter::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkContourFilter>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkContourFilter::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkContourFilter>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkContourFilter^ vtkContourFilter::NewInstance()
{
  ::vtkContourFilter* retVal = static_cast<::vtkContourFilter*>(vtk::ConvertManagedToNative<::vtkContourFilter>(m_instance)->NewInstance());
  return gcnew vtkContourFilter(IntPtr(retVal), false);
}



vtkContourFilter^ vtkContourFilter::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkContourFilter* retVal = static_cast<::vtkContourFilter*>(::vtkContourFilter::SafeDownCast(oWrap));
  return gcnew vtkContourFilter(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkContourFilter::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkContourFilter>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkContourFilter::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkContourFilter>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkContourFilter::SetValue(int i, double value)
{
  vtk::ConvertManagedToNative<::vtkContourFilter>(m_instance)->SetValue(i, value);
}



double vtkContourFilter::GetValue(int i)
{
  double retVal = vtk::ConvertManagedToNative<::vtkContourFilter>(m_instance)->GetValue(i);
  return retVal;
}



void vtkContourFilter::GetValues(array<double>^ contourValues)
{
  pin_ptr<double> contourValuesPin = &contourValues[0];
  double* nativecontourValuesPin = contourValuesPin;
  vtk::ConvertManagedToNative<::vtkContourFilter>(m_instance)->GetValues(nativecontourValuesPin);
}



void vtkContourFilter::SetNumberOfContours(int number)
{
  vtk::ConvertManagedToNative<::vtkContourFilter>(m_instance)->SetNumberOfContours(number);
}



int vtkContourFilter::GetNumberOfContours()
{
  int retVal = vtk::ConvertManagedToNative<::vtkContourFilter>(m_instance)->GetNumberOfContours();
  return retVal;
}



void vtkContourFilter::GenerateValues(int numContours, array<double>^ range)
{
  pin_ptr<double> rangePin = &range[0];
  double* nativerangePin = rangePin;
  vtk::ConvertManagedToNative<::vtkContourFilter>(m_instance)->GenerateValues(numContours, nativerangePin);
}



void vtkContourFilter::GenerateValues(int numContours, double rangeStart, double rangeEnd)
{
  vtk::ConvertManagedToNative<::vtkContourFilter>(m_instance)->GenerateValues(numContours, rangeStart, rangeEnd);
}



unsigned long vtkContourFilter::GetMTime()
{
  unsigned long retVal = vtk::ConvertManagedToNative<::vtkContourFilter>(m_instance)->GetMTime();
  return retVal;
}



void vtkContourFilter::SetComputeNormals(int arg0)
{
  vtk::ConvertManagedToNative<::vtkContourFilter>(m_instance)->SetComputeNormals(arg0);
}



int vtkContourFilter::GetComputeNormals()
{
  int retVal = vtk::ConvertManagedToNative<::vtkContourFilter>(m_instance)->GetComputeNormals();
  return retVal;
}



void vtkContourFilter::ComputeNormalsOn()
{
  vtk::ConvertManagedToNative<::vtkContourFilter>(m_instance)->ComputeNormalsOn();
}



void vtkContourFilter::ComputeNormalsOff()
{
  vtk::ConvertManagedToNative<::vtkContourFilter>(m_instance)->ComputeNormalsOff();
}



void vtkContourFilter::SetComputeGradients(int arg0)
{
  vtk::ConvertManagedToNative<::vtkContourFilter>(m_instance)->SetComputeGradients(arg0);
}



int vtkContourFilter::GetComputeGradients()
{
  int retVal = vtk::ConvertManagedToNative<::vtkContourFilter>(m_instance)->GetComputeGradients();
  return retVal;
}



void vtkContourFilter::ComputeGradientsOn()
{
  vtk::ConvertManagedToNative<::vtkContourFilter>(m_instance)->ComputeGradientsOn();
}



void vtkContourFilter::ComputeGradientsOff()
{
  vtk::ConvertManagedToNative<::vtkContourFilter>(m_instance)->ComputeGradientsOff();
}



void vtkContourFilter::SetComputeScalars(int arg0)
{
  vtk::ConvertManagedToNative<::vtkContourFilter>(m_instance)->SetComputeScalars(arg0);
}



int vtkContourFilter::GetComputeScalars()
{
  int retVal = vtk::ConvertManagedToNative<::vtkContourFilter>(m_instance)->GetComputeScalars();
  return retVal;
}



void vtkContourFilter::ComputeScalarsOn()
{
  vtk::ConvertManagedToNative<::vtkContourFilter>(m_instance)->ComputeScalarsOn();
}



void vtkContourFilter::ComputeScalarsOff()
{
  vtk::ConvertManagedToNative<::vtkContourFilter>(m_instance)->ComputeScalarsOff();
}



void vtkContourFilter::SetUseScalarTree(int arg0)
{
  vtk::ConvertManagedToNative<::vtkContourFilter>(m_instance)->SetUseScalarTree(arg0);
}



int vtkContourFilter::GetUseScalarTree()
{
  int retVal = vtk::ConvertManagedToNative<::vtkContourFilter>(m_instance)->GetUseScalarTree();
  return retVal;
}



void vtkContourFilter::UseScalarTreeOn()
{
  vtk::ConvertManagedToNative<::vtkContourFilter>(m_instance)->UseScalarTreeOn();
}



void vtkContourFilter::UseScalarTreeOff()
{
  vtk::ConvertManagedToNative<::vtkContourFilter>(m_instance)->UseScalarTreeOff();
}



void vtkContourFilter::SetScalarTree(vtkScalarTree^ arg0)
{
  ::vtkScalarTree* arg0Wrap = vtk::ConvertManagedToNative<::vtkScalarTree>(arg0->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkContourFilter>(m_instance)->SetScalarTree(arg0Wrap);
}



vtkScalarTree^ vtkContourFilter::GetScalarTree()
{
  ::vtkScalarTree* retVal = static_cast<::vtkScalarTree*>(vtk::ConvertManagedToNative<::vtkContourFilter>(m_instance)->GetScalarTree());
  return gcnew vtkScalarTree(IntPtr(retVal), false);
}



void vtkContourFilter::SetLocator(vtkPointLocator^ locator)
{
  ::vtkPointLocator* locatorWrap = vtk::ConvertManagedToNative<::vtkPointLocator>(locator->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkContourFilter>(m_instance)->SetLocator(locatorWrap);
}



vtkPointLocator^ vtkContourFilter::GetLocator()
{
  ::vtkPointLocator* retVal = static_cast<::vtkPointLocator*>(vtk::ConvertManagedToNative<::vtkContourFilter>(m_instance)->GetLocator());
  return gcnew vtkPointLocator(IntPtr(retVal), false);
}



void vtkContourFilter::CreateDefaultLocator()
{
  vtk::ConvertManagedToNative<::vtkContourFilter>(m_instance)->CreateDefaultLocator();
}



void vtkContourFilter::SetArrayComponent(int arg0)
{
  vtk::ConvertManagedToNative<::vtkContourFilter>(m_instance)->SetArrayComponent(arg0);
}



int vtkContourFilter::GetArrayComponent()
{
  int retVal = vtk::ConvertManagedToNative<::vtkContourFilter>(m_instance)->GetArrayComponent();
  return retVal;
}



  vtkContourFilter::vtkContourFilter(System::IntPtr native, bool bConst) : vtkPolyDataAlgorithm(native, bConst) {}



  vtkContourFilter::vtkContourFilter(bool donothing) : vtkPolyDataAlgorithm(donothing) {}



  vtkContourFilter::vtkContourFilter() : vtkPolyDataAlgorithm(false) {
  this->SetNativePointer(IntPtr(::vtkContourFilter::New()));
}



  vtkContourFilter::~vtkContourFilter() { }





} // end namespace vtkGraphics
