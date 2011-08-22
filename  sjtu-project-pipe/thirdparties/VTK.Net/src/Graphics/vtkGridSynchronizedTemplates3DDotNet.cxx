

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkGridSynchronizedTemplates3DDotNet.h"

// native includes
#include "strstream"
#include "vtkGridSynchronizedTemplates3D.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkGridSynchronizedTemplates3D::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkGridSynchronizedTemplates3D>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkGridSynchronizedTemplates3D::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkGridSynchronizedTemplates3D>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkGridSynchronizedTemplates3D^ vtkGridSynchronizedTemplates3D::NewInstance()
{
  ::vtkGridSynchronizedTemplates3D* retVal = static_cast<::vtkGridSynchronizedTemplates3D*>(vtk::ConvertManagedToNative<::vtkGridSynchronizedTemplates3D>(m_instance)->NewInstance());
  return gcnew vtkGridSynchronizedTemplates3D(IntPtr(retVal), false);
}



vtkGridSynchronizedTemplates3D^ vtkGridSynchronizedTemplates3D::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkGridSynchronizedTemplates3D* retVal = static_cast<::vtkGridSynchronizedTemplates3D*>(::vtkGridSynchronizedTemplates3D::SafeDownCast(oWrap));
  return gcnew vtkGridSynchronizedTemplates3D(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkGridSynchronizedTemplates3D::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkGridSynchronizedTemplates3D>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkGridSynchronizedTemplates3D::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkGridSynchronizedTemplates3D>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




unsigned long vtkGridSynchronizedTemplates3D::GetMTime()
{
  unsigned long retVal = vtk::ConvertManagedToNative<::vtkGridSynchronizedTemplates3D>(m_instance)->GetMTime();
  return retVal;
}



void vtkGridSynchronizedTemplates3D::SetComputeNormals(int arg0)
{
  vtk::ConvertManagedToNative<::vtkGridSynchronizedTemplates3D>(m_instance)->SetComputeNormals(arg0);
}



int vtkGridSynchronizedTemplates3D::GetComputeNormals()
{
  int retVal = vtk::ConvertManagedToNative<::vtkGridSynchronizedTemplates3D>(m_instance)->GetComputeNormals();
  return retVal;
}



void vtkGridSynchronizedTemplates3D::ComputeNormalsOn()
{
  vtk::ConvertManagedToNative<::vtkGridSynchronizedTemplates3D>(m_instance)->ComputeNormalsOn();
}



void vtkGridSynchronizedTemplates3D::ComputeNormalsOff()
{
  vtk::ConvertManagedToNative<::vtkGridSynchronizedTemplates3D>(m_instance)->ComputeNormalsOff();
}



void vtkGridSynchronizedTemplates3D::SetComputeGradients(int arg0)
{
  vtk::ConvertManagedToNative<::vtkGridSynchronizedTemplates3D>(m_instance)->SetComputeGradients(arg0);
}



int vtkGridSynchronizedTemplates3D::GetComputeGradients()
{
  int retVal = vtk::ConvertManagedToNative<::vtkGridSynchronizedTemplates3D>(m_instance)->GetComputeGradients();
  return retVal;
}



void vtkGridSynchronizedTemplates3D::ComputeGradientsOn()
{
  vtk::ConvertManagedToNative<::vtkGridSynchronizedTemplates3D>(m_instance)->ComputeGradientsOn();
}



void vtkGridSynchronizedTemplates3D::ComputeGradientsOff()
{
  vtk::ConvertManagedToNative<::vtkGridSynchronizedTemplates3D>(m_instance)->ComputeGradientsOff();
}



void vtkGridSynchronizedTemplates3D::SetComputeScalars(int arg0)
{
  vtk::ConvertManagedToNative<::vtkGridSynchronizedTemplates3D>(m_instance)->SetComputeScalars(arg0);
}



int vtkGridSynchronizedTemplates3D::GetComputeScalars()
{
  int retVal = vtk::ConvertManagedToNative<::vtkGridSynchronizedTemplates3D>(m_instance)->GetComputeScalars();
  return retVal;
}



void vtkGridSynchronizedTemplates3D::ComputeScalarsOn()
{
  vtk::ConvertManagedToNative<::vtkGridSynchronizedTemplates3D>(m_instance)->ComputeScalarsOn();
}



void vtkGridSynchronizedTemplates3D::ComputeScalarsOff()
{
  vtk::ConvertManagedToNative<::vtkGridSynchronizedTemplates3D>(m_instance)->ComputeScalarsOff();
}



void vtkGridSynchronizedTemplates3D::SetValue(int i, double value)
{
  vtk::ConvertManagedToNative<::vtkGridSynchronizedTemplates3D>(m_instance)->SetValue(i, value);
}



double vtkGridSynchronizedTemplates3D::GetValue(int i)
{
  double retVal = vtk::ConvertManagedToNative<::vtkGridSynchronizedTemplates3D>(m_instance)->GetValue(i);
  return retVal;
}



void vtkGridSynchronizedTemplates3D::GetValues(array<double>^ contourValues)
{
  pin_ptr<double> contourValuesPin = &contourValues[0];
  double* nativecontourValuesPin = contourValuesPin;
  vtk::ConvertManagedToNative<::vtkGridSynchronizedTemplates3D>(m_instance)->GetValues(nativecontourValuesPin);
}



void vtkGridSynchronizedTemplates3D::SetNumberOfContours(int number)
{
  vtk::ConvertManagedToNative<::vtkGridSynchronizedTemplates3D>(m_instance)->SetNumberOfContours(number);
}



int vtkGridSynchronizedTemplates3D::GetNumberOfContours()
{
  int retVal = vtk::ConvertManagedToNative<::vtkGridSynchronizedTemplates3D>(m_instance)->GetNumberOfContours();
  return retVal;
}



void vtkGridSynchronizedTemplates3D::GenerateValues(int numContours, array<double>^ range)
{
  pin_ptr<double> rangePin = &range[0];
  double* nativerangePin = rangePin;
  vtk::ConvertManagedToNative<::vtkGridSynchronizedTemplates3D>(m_instance)->GenerateValues(numContours, nativerangePin);
}



void vtkGridSynchronizedTemplates3D::GenerateValues(int numContours, double rangeStart, double rangeEnd)
{
  vtk::ConvertManagedToNative<::vtkGridSynchronizedTemplates3D>(m_instance)->GenerateValues(numContours, rangeStart, rangeEnd);
}



array<int>^ vtkGridSynchronizedTemplates3D::GetExecuteExtent()
{
  const int* retVal = vtk::ConvertManagedToNative<::vtkGridSynchronizedTemplates3D>(m_instance)->GetExecuteExtent();
  array<int>^ mRetVal = gcnew array<int>(6);
  for (size_t cprIdx=0; cprIdx<6; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



void vtkGridSynchronizedTemplates3D::SetInputMemoryLimit(long limit)
{
  vtk::ConvertManagedToNative<::vtkGridSynchronizedTemplates3D>(m_instance)->SetInputMemoryLimit(limit);
}



  vtkGridSynchronizedTemplates3D::vtkGridSynchronizedTemplates3D(System::IntPtr native, bool bConst) : vtkPolyDataAlgorithm(native, bConst) {}



  vtkGridSynchronizedTemplates3D::vtkGridSynchronizedTemplates3D(bool donothing) : vtkPolyDataAlgorithm(donothing) {}



  vtkGridSynchronizedTemplates3D::vtkGridSynchronizedTemplates3D() : vtkPolyDataAlgorithm(false) {
  this->SetNativePointer(IntPtr(::vtkGridSynchronizedTemplates3D::New()));
}



  vtkGridSynchronizedTemplates3D::~vtkGridSynchronizedTemplates3D() { }





} // end namespace vtkGraphics
