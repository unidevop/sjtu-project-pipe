

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkRectilinearSynchronizedTemplatesDotNet.h"

// native includes
#include "strstream"
#include "vtkRectilinearSynchronizedTemplates.h"
#include "vtkObject.h"
#include "vtkRectilinearGrid.h"

using namespace System;

namespace vtk {

System::String^ vtkRectilinearSynchronizedTemplates::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkRectilinearSynchronizedTemplates>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkRectilinearSynchronizedTemplates::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkRectilinearSynchronizedTemplates>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkRectilinearSynchronizedTemplates^ vtkRectilinearSynchronizedTemplates::NewInstance()
{
  ::vtkRectilinearSynchronizedTemplates* retVal = static_cast<::vtkRectilinearSynchronizedTemplates*>(vtk::ConvertManagedToNative<::vtkRectilinearSynchronizedTemplates>(m_instance)->NewInstance());
  return gcnew vtkRectilinearSynchronizedTemplates(IntPtr(retVal), false);
}



vtkRectilinearSynchronizedTemplates^ vtkRectilinearSynchronizedTemplates::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkRectilinearSynchronizedTemplates* retVal = static_cast<::vtkRectilinearSynchronizedTemplates*>(::vtkRectilinearSynchronizedTemplates::SafeDownCast(oWrap));
  return gcnew vtkRectilinearSynchronizedTemplates(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkRectilinearSynchronizedTemplates::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkRectilinearSynchronizedTemplates>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkRectilinearSynchronizedTemplates::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkRectilinearSynchronizedTemplates>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




unsigned long vtkRectilinearSynchronizedTemplates::GetMTime()
{
  unsigned long retVal = vtk::ConvertManagedToNative<::vtkRectilinearSynchronizedTemplates>(m_instance)->GetMTime();
  return retVal;
}



void vtkRectilinearSynchronizedTemplates::SetComputeNormals(int arg0)
{
  vtk::ConvertManagedToNative<::vtkRectilinearSynchronizedTemplates>(m_instance)->SetComputeNormals(arg0);
}



int vtkRectilinearSynchronizedTemplates::GetComputeNormals()
{
  int retVal = vtk::ConvertManagedToNative<::vtkRectilinearSynchronizedTemplates>(m_instance)->GetComputeNormals();
  return retVal;
}



void vtkRectilinearSynchronizedTemplates::ComputeNormalsOn()
{
  vtk::ConvertManagedToNative<::vtkRectilinearSynchronizedTemplates>(m_instance)->ComputeNormalsOn();
}



void vtkRectilinearSynchronizedTemplates::ComputeNormalsOff()
{
  vtk::ConvertManagedToNative<::vtkRectilinearSynchronizedTemplates>(m_instance)->ComputeNormalsOff();
}



void vtkRectilinearSynchronizedTemplates::SetComputeGradients(int arg0)
{
  vtk::ConvertManagedToNative<::vtkRectilinearSynchronizedTemplates>(m_instance)->SetComputeGradients(arg0);
}



int vtkRectilinearSynchronizedTemplates::GetComputeGradients()
{
  int retVal = vtk::ConvertManagedToNative<::vtkRectilinearSynchronizedTemplates>(m_instance)->GetComputeGradients();
  return retVal;
}



void vtkRectilinearSynchronizedTemplates::ComputeGradientsOn()
{
  vtk::ConvertManagedToNative<::vtkRectilinearSynchronizedTemplates>(m_instance)->ComputeGradientsOn();
}



void vtkRectilinearSynchronizedTemplates::ComputeGradientsOff()
{
  vtk::ConvertManagedToNative<::vtkRectilinearSynchronizedTemplates>(m_instance)->ComputeGradientsOff();
}



void vtkRectilinearSynchronizedTemplates::SetComputeScalars(int arg0)
{
  vtk::ConvertManagedToNative<::vtkRectilinearSynchronizedTemplates>(m_instance)->SetComputeScalars(arg0);
}



int vtkRectilinearSynchronizedTemplates::GetComputeScalars()
{
  int retVal = vtk::ConvertManagedToNative<::vtkRectilinearSynchronizedTemplates>(m_instance)->GetComputeScalars();
  return retVal;
}



void vtkRectilinearSynchronizedTemplates::ComputeScalarsOn()
{
  vtk::ConvertManagedToNative<::vtkRectilinearSynchronizedTemplates>(m_instance)->ComputeScalarsOn();
}



void vtkRectilinearSynchronizedTemplates::ComputeScalarsOff()
{
  vtk::ConvertManagedToNative<::vtkRectilinearSynchronizedTemplates>(m_instance)->ComputeScalarsOff();
}



void vtkRectilinearSynchronizedTemplates::SetValue(int i, double value)
{
  vtk::ConvertManagedToNative<::vtkRectilinearSynchronizedTemplates>(m_instance)->SetValue(i, value);
}



double vtkRectilinearSynchronizedTemplates::GetValue(int i)
{
  double retVal = vtk::ConvertManagedToNative<::vtkRectilinearSynchronizedTemplates>(m_instance)->GetValue(i);
  return retVal;
}



void vtkRectilinearSynchronizedTemplates::GetValues(array<double>^ contourValues)
{
  pin_ptr<double> contourValuesPin = &contourValues[0];
  double* nativecontourValuesPin = contourValuesPin;
  vtk::ConvertManagedToNative<::vtkRectilinearSynchronizedTemplates>(m_instance)->GetValues(nativecontourValuesPin);
}



void vtkRectilinearSynchronizedTemplates::SetNumberOfContours(int number)
{
  vtk::ConvertManagedToNative<::vtkRectilinearSynchronizedTemplates>(m_instance)->SetNumberOfContours(number);
}



int vtkRectilinearSynchronizedTemplates::GetNumberOfContours()
{
  int retVal = vtk::ConvertManagedToNative<::vtkRectilinearSynchronizedTemplates>(m_instance)->GetNumberOfContours();
  return retVal;
}



void vtkRectilinearSynchronizedTemplates::GenerateValues(int numContours, array<double>^ range)
{
  pin_ptr<double> rangePin = &range[0];
  double* nativerangePin = rangePin;
  vtk::ConvertManagedToNative<::vtkRectilinearSynchronizedTemplates>(m_instance)->GenerateValues(numContours, nativerangePin);
}



void vtkRectilinearSynchronizedTemplates::GenerateValues(int numContours, double rangeStart, double rangeEnd)
{
  vtk::ConvertManagedToNative<::vtkRectilinearSynchronizedTemplates>(m_instance)->GenerateValues(numContours, rangeStart, rangeEnd);
}



void vtkRectilinearSynchronizedTemplates::SetArrayComponent(int arg0)
{
  vtk::ConvertManagedToNative<::vtkRectilinearSynchronizedTemplates>(m_instance)->SetArrayComponent(arg0);
}



int vtkRectilinearSynchronizedTemplates::GetArrayComponent()
{
  int retVal = vtk::ConvertManagedToNative<::vtkRectilinearSynchronizedTemplates>(m_instance)->GetArrayComponent();
  return retVal;
}



void vtkRectilinearSynchronizedTemplates::ComputeSpacing(vtkRectilinearGrid^ data, int i, int j, int k, array<int>^ extent, array<double>^ spacing)
{
  ::vtkRectilinearGrid* dataWrap = vtk::ConvertManagedToNative<::vtkRectilinearGrid>(data->GetNativePointer());
  pin_ptr<int> extentPin = &extent[0];
  int* nativeextentPin = extentPin;
  pin_ptr<double> spacingPin = &spacing[0];
  double* nativespacingPin = spacingPin;
  vtk::ConvertManagedToNative<::vtkRectilinearSynchronizedTemplates>(m_instance)->ComputeSpacing(dataWrap, i, j, k, nativeextentPin, nativespacingPin);
}



  vtkRectilinearSynchronizedTemplates::vtkRectilinearSynchronizedTemplates(System::IntPtr native, bool bConst) : vtkPolyDataAlgorithm(native, bConst) {}



  vtkRectilinearSynchronizedTemplates::vtkRectilinearSynchronizedTemplates(bool donothing) : vtkPolyDataAlgorithm(donothing) {}



  vtkRectilinearSynchronizedTemplates::vtkRectilinearSynchronizedTemplates() : vtkPolyDataAlgorithm(false) {
  this->SetNativePointer(IntPtr(::vtkRectilinearSynchronizedTemplates::New()));
}



  vtkRectilinearSynchronizedTemplates::~vtkRectilinearSynchronizedTemplates() { }





} // end namespace vtkGraphics
