

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkSynchronizedTemplates2DDotNet.h"

// native includes
#include "strstream"
#include "vtkSynchronizedTemplates2D.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkSynchronizedTemplates2D::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkSynchronizedTemplates2D>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkSynchronizedTemplates2D::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkSynchronizedTemplates2D>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkSynchronizedTemplates2D^ vtkSynchronizedTemplates2D::NewInstance()
{
  ::vtkSynchronizedTemplates2D* retVal = static_cast<::vtkSynchronizedTemplates2D*>(vtk::ConvertManagedToNative<::vtkSynchronizedTemplates2D>(m_instance)->NewInstance());
  return gcnew vtkSynchronizedTemplates2D(IntPtr(retVal), false);
}



vtkSynchronizedTemplates2D^ vtkSynchronizedTemplates2D::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkSynchronizedTemplates2D* retVal = static_cast<::vtkSynchronizedTemplates2D*>(::vtkSynchronizedTemplates2D::SafeDownCast(oWrap));
  return gcnew vtkSynchronizedTemplates2D(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkSynchronizedTemplates2D::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkSynchronizedTemplates2D>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkSynchronizedTemplates2D::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkSynchronizedTemplates2D>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




unsigned long vtkSynchronizedTemplates2D::GetMTime()
{
  unsigned long retVal = vtk::ConvertManagedToNative<::vtkSynchronizedTemplates2D>(m_instance)->GetMTime();
  return retVal;
}



void vtkSynchronizedTemplates2D::SetValue(int i, double value)
{
  vtk::ConvertManagedToNative<::vtkSynchronizedTemplates2D>(m_instance)->SetValue(i, value);
}



double vtkSynchronizedTemplates2D::GetValue(int i)
{
  double retVal = vtk::ConvertManagedToNative<::vtkSynchronizedTemplates2D>(m_instance)->GetValue(i);
  return retVal;
}



void vtkSynchronizedTemplates2D::GetValues(array<double>^ contourValues)
{
  pin_ptr<double> contourValuesPin = &contourValues[0];
  double* nativecontourValuesPin = contourValuesPin;
  vtk::ConvertManagedToNative<::vtkSynchronizedTemplates2D>(m_instance)->GetValues(nativecontourValuesPin);
}



void vtkSynchronizedTemplates2D::SetNumberOfContours(int number)
{
  vtk::ConvertManagedToNative<::vtkSynchronizedTemplates2D>(m_instance)->SetNumberOfContours(number);
}



int vtkSynchronizedTemplates2D::GetNumberOfContours()
{
  int retVal = vtk::ConvertManagedToNative<::vtkSynchronizedTemplates2D>(m_instance)->GetNumberOfContours();
  return retVal;
}



void vtkSynchronizedTemplates2D::GenerateValues(int numContours, array<double>^ range)
{
  pin_ptr<double> rangePin = &range[0];
  double* nativerangePin = rangePin;
  vtk::ConvertManagedToNative<::vtkSynchronizedTemplates2D>(m_instance)->GenerateValues(numContours, nativerangePin);
}



void vtkSynchronizedTemplates2D::GenerateValues(int numContours, double rangeStart, double rangeEnd)
{
  vtk::ConvertManagedToNative<::vtkSynchronizedTemplates2D>(m_instance)->GenerateValues(numContours, rangeStart, rangeEnd);
}



void vtkSynchronizedTemplates2D::SetComputeScalars(int arg0)
{
  vtk::ConvertManagedToNative<::vtkSynchronizedTemplates2D>(m_instance)->SetComputeScalars(arg0);
}



int vtkSynchronizedTemplates2D::GetComputeScalars()
{
  int retVal = vtk::ConvertManagedToNative<::vtkSynchronizedTemplates2D>(m_instance)->GetComputeScalars();
  return retVal;
}



void vtkSynchronizedTemplates2D::ComputeScalarsOn()
{
  vtk::ConvertManagedToNative<::vtkSynchronizedTemplates2D>(m_instance)->ComputeScalarsOn();
}



void vtkSynchronizedTemplates2D::ComputeScalarsOff()
{
  vtk::ConvertManagedToNative<::vtkSynchronizedTemplates2D>(m_instance)->ComputeScalarsOff();
}



void vtkSynchronizedTemplates2D::SetArrayComponent(int arg0)
{
  vtk::ConvertManagedToNative<::vtkSynchronizedTemplates2D>(m_instance)->SetArrayComponent(arg0);
}



int vtkSynchronizedTemplates2D::GetArrayComponent()
{
  int retVal = vtk::ConvertManagedToNative<::vtkSynchronizedTemplates2D>(m_instance)->GetArrayComponent();
  return retVal;
}



  vtkSynchronizedTemplates2D::vtkSynchronizedTemplates2D(System::IntPtr native, bool bConst) : vtkPolyDataAlgorithm(native, bConst) {}



  vtkSynchronizedTemplates2D::vtkSynchronizedTemplates2D(bool donothing) : vtkPolyDataAlgorithm(donothing) {}



  vtkSynchronizedTemplates2D::vtkSynchronizedTemplates2D() : vtkPolyDataAlgorithm(false) {
  this->SetNativePointer(IntPtr(::vtkSynchronizedTemplates2D::New()));
}



  vtkSynchronizedTemplates2D::~vtkSynchronizedTemplates2D() { }





} // end namespace vtkGraphics
