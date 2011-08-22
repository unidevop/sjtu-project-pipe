

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkSynchronizedTemplates3DDotNet.h"

// native includes
#include "strstream"
#include "vtkSynchronizedTemplates3D.h"
#include "vtkDataArray.h"
#include "vtkImageData.h"
#include "vtkInformation.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkSynchronizedTemplates3D::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkSynchronizedTemplates3D>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkSynchronizedTemplates3D::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkSynchronizedTemplates3D>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkSynchronizedTemplates3D^ vtkSynchronizedTemplates3D::NewInstance()
{
  ::vtkSynchronizedTemplates3D* retVal = static_cast<::vtkSynchronizedTemplates3D*>(vtk::ConvertManagedToNative<::vtkSynchronizedTemplates3D>(m_instance)->NewInstance());
  return gcnew vtkSynchronizedTemplates3D(IntPtr(retVal), false);
}



vtkSynchronizedTemplates3D^ vtkSynchronizedTemplates3D::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkSynchronizedTemplates3D* retVal = static_cast<::vtkSynchronizedTemplates3D*>(::vtkSynchronizedTemplates3D::SafeDownCast(oWrap));
  return gcnew vtkSynchronizedTemplates3D(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkSynchronizedTemplates3D::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkSynchronizedTemplates3D>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkSynchronizedTemplates3D::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkSynchronizedTemplates3D>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




unsigned long vtkSynchronizedTemplates3D::GetMTime()
{
  unsigned long retVal = vtk::ConvertManagedToNative<::vtkSynchronizedTemplates3D>(m_instance)->GetMTime();
  return retVal;
}



void vtkSynchronizedTemplates3D::SetComputeNormals(int arg0)
{
  vtk::ConvertManagedToNative<::vtkSynchronizedTemplates3D>(m_instance)->SetComputeNormals(arg0);
}



int vtkSynchronizedTemplates3D::GetComputeNormals()
{
  int retVal = vtk::ConvertManagedToNative<::vtkSynchronizedTemplates3D>(m_instance)->GetComputeNormals();
  return retVal;
}



void vtkSynchronizedTemplates3D::ComputeNormalsOn()
{
  vtk::ConvertManagedToNative<::vtkSynchronizedTemplates3D>(m_instance)->ComputeNormalsOn();
}



void vtkSynchronizedTemplates3D::ComputeNormalsOff()
{
  vtk::ConvertManagedToNative<::vtkSynchronizedTemplates3D>(m_instance)->ComputeNormalsOff();
}



void vtkSynchronizedTemplates3D::SetComputeGradients(int arg0)
{
  vtk::ConvertManagedToNative<::vtkSynchronizedTemplates3D>(m_instance)->SetComputeGradients(arg0);
}



int vtkSynchronizedTemplates3D::GetComputeGradients()
{
  int retVal = vtk::ConvertManagedToNative<::vtkSynchronizedTemplates3D>(m_instance)->GetComputeGradients();
  return retVal;
}



void vtkSynchronizedTemplates3D::ComputeGradientsOn()
{
  vtk::ConvertManagedToNative<::vtkSynchronizedTemplates3D>(m_instance)->ComputeGradientsOn();
}



void vtkSynchronizedTemplates3D::ComputeGradientsOff()
{
  vtk::ConvertManagedToNative<::vtkSynchronizedTemplates3D>(m_instance)->ComputeGradientsOff();
}



void vtkSynchronizedTemplates3D::SetComputeScalars(int arg0)
{
  vtk::ConvertManagedToNative<::vtkSynchronizedTemplates3D>(m_instance)->SetComputeScalars(arg0);
}



int vtkSynchronizedTemplates3D::GetComputeScalars()
{
  int retVal = vtk::ConvertManagedToNative<::vtkSynchronizedTemplates3D>(m_instance)->GetComputeScalars();
  return retVal;
}



void vtkSynchronizedTemplates3D::ComputeScalarsOn()
{
  vtk::ConvertManagedToNative<::vtkSynchronizedTemplates3D>(m_instance)->ComputeScalarsOn();
}



void vtkSynchronizedTemplates3D::ComputeScalarsOff()
{
  vtk::ConvertManagedToNative<::vtkSynchronizedTemplates3D>(m_instance)->ComputeScalarsOff();
}



void vtkSynchronizedTemplates3D::SetValue(int i, double value)
{
  vtk::ConvertManagedToNative<::vtkSynchronizedTemplates3D>(m_instance)->SetValue(i, value);
}



double vtkSynchronizedTemplates3D::GetValue(int i)
{
  double retVal = vtk::ConvertManagedToNative<::vtkSynchronizedTemplates3D>(m_instance)->GetValue(i);
  return retVal;
}



void vtkSynchronizedTemplates3D::GetValues(array<double>^ contourValues)
{
  pin_ptr<double> contourValuesPin = &contourValues[0];
  double* nativecontourValuesPin = contourValuesPin;
  vtk::ConvertManagedToNative<::vtkSynchronizedTemplates3D>(m_instance)->GetValues(nativecontourValuesPin);
}



void vtkSynchronizedTemplates3D::SetNumberOfContours(int number)
{
  vtk::ConvertManagedToNative<::vtkSynchronizedTemplates3D>(m_instance)->SetNumberOfContours(number);
}



int vtkSynchronizedTemplates3D::GetNumberOfContours()
{
  int retVal = vtk::ConvertManagedToNative<::vtkSynchronizedTemplates3D>(m_instance)->GetNumberOfContours();
  return retVal;
}



void vtkSynchronizedTemplates3D::GenerateValues(int numContours, array<double>^ range)
{
  pin_ptr<double> rangePin = &range[0];
  double* nativerangePin = rangePin;
  vtk::ConvertManagedToNative<::vtkSynchronizedTemplates3D>(m_instance)->GenerateValues(numContours, nativerangePin);
}



void vtkSynchronizedTemplates3D::GenerateValues(int numContours, double rangeStart, double rangeEnd)
{
  vtk::ConvertManagedToNative<::vtkSynchronizedTemplates3D>(m_instance)->GenerateValues(numContours, rangeStart, rangeEnd);
}



array<int>^ vtkSynchronizedTemplates3D::GetExecuteExtent()
{
  const int* retVal = vtk::ConvertManagedToNative<::vtkSynchronizedTemplates3D>(m_instance)->GetExecuteExtent();
  array<int>^ mRetVal = gcnew array<int>(6);
  for (size_t cprIdx=0; cprIdx<6; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



void vtkSynchronizedTemplates3D::ThreadedExecute(vtkImageData^ data, vtkInformation^ inInfo, vtkInformation^ outInfo, array<int>^ exExt, vtkDataArray^ inScalars)
{
  ::vtkImageData* dataWrap = vtk::ConvertManagedToNative<::vtkImageData>(data->GetNativePointer());
  ::vtkInformation* inInfoWrap = vtk::ConvertManagedToNative<::vtkInformation>(inInfo->GetNativePointer());
  ::vtkInformation* outInfoWrap = vtk::ConvertManagedToNative<::vtkInformation>(outInfo->GetNativePointer());
  pin_ptr<int> exExtPin = &exExt[0];
  int* nativeexExtPin = exExtPin;
  ::vtkDataArray* inScalarsWrap = vtk::ConvertManagedToNative<::vtkDataArray>(inScalars->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkSynchronizedTemplates3D>(m_instance)->ThreadedExecute(dataWrap, inInfoWrap, outInfoWrap, nativeexExtPin, inScalarsWrap);
}



void vtkSynchronizedTemplates3D::SetInputMemoryLimit(unsigned long limit)
{
  vtk::ConvertManagedToNative<::vtkSynchronizedTemplates3D>(m_instance)->SetInputMemoryLimit(limit);
}



unsigned long vtkSynchronizedTemplates3D::GetInputMemoryLimit()
{
  unsigned long retVal = vtk::ConvertManagedToNative<::vtkSynchronizedTemplates3D>(m_instance)->GetInputMemoryLimit();
  return retVal;
}



void vtkSynchronizedTemplates3D::SetArrayComponent(int arg0)
{
  vtk::ConvertManagedToNative<::vtkSynchronizedTemplates3D>(m_instance)->SetArrayComponent(arg0);
}



int vtkSynchronizedTemplates3D::GetArrayComponent()
{
  int retVal = vtk::ConvertManagedToNative<::vtkSynchronizedTemplates3D>(m_instance)->GetArrayComponent();
  return retVal;
}



  vtkSynchronizedTemplates3D::vtkSynchronizedTemplates3D(System::IntPtr native, bool bConst) : vtkPolyDataAlgorithm(native, bConst) {}



  vtkSynchronizedTemplates3D::vtkSynchronizedTemplates3D(bool donothing) : vtkPolyDataAlgorithm(donothing) {}



  vtkSynchronizedTemplates3D::vtkSynchronizedTemplates3D() : vtkPolyDataAlgorithm(false) {
  this->SetNativePointer(IntPtr(::vtkSynchronizedTemplates3D::New()));
}



  vtkSynchronizedTemplates3D::~vtkSynchronizedTemplates3D() { }





} // end namespace vtkGraphics
