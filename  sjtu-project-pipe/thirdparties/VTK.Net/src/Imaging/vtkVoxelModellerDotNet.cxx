

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkVoxelModellerDotNet.h"

// native includes
#include "strstream"
#include "vtkVoxelModeller.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkVoxelModeller::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkVoxelModeller>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkVoxelModeller::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkVoxelModeller>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkVoxelModeller^ vtkVoxelModeller::NewInstance()
{
  ::vtkVoxelModeller* retVal = static_cast<::vtkVoxelModeller*>(vtk::ConvertManagedToNative<::vtkVoxelModeller>(m_instance)->NewInstance());
  return gcnew vtkVoxelModeller(IntPtr(retVal), false);
}



vtkVoxelModeller^ vtkVoxelModeller::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkVoxelModeller* retVal = static_cast<::vtkVoxelModeller*>(::vtkVoxelModeller::SafeDownCast(oWrap));
  return gcnew vtkVoxelModeller(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkVoxelModeller::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkVoxelModeller>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkVoxelModeller::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkVoxelModeller>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




double vtkVoxelModeller::ComputeModelBounds(array<double>^ origin, array<double>^ ar)
{
  pin_ptr<double> originPin = &origin[0];
  double* nativeoriginPin = originPin;
  pin_ptr<double> arPin = &ar[0];
  double* nativearPin = arPin;
  double retVal = vtk::ConvertManagedToNative<::vtkVoxelModeller>(m_instance)->ComputeModelBounds(nativeoriginPin, nativearPin);
  return retVal;
}



void vtkVoxelModeller::SetSampleDimensions(int i, int j, int k)
{
  vtk::ConvertManagedToNative<::vtkVoxelModeller>(m_instance)->SetSampleDimensions(i, j, k);
}



void vtkVoxelModeller::SetSampleDimensions(array<int>^ dim)
{
  pin_ptr<int> dimPin = &dim[0];
  int* nativedimPin = dimPin;
  vtk::ConvertManagedToNative<::vtkVoxelModeller>(m_instance)->SetSampleDimensions(nativedimPin);
}



array<int>^ vtkVoxelModeller::GetSampleDimensions()
{
  const int* retVal = vtk::ConvertManagedToNative<::vtkVoxelModeller>(m_instance)->GetSampleDimensions();
  array<int>^ mRetVal = gcnew array<int>(3);
  for (size_t cprIdx=0; cprIdx<3; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



void vtkVoxelModeller::SetMaximumDistance(double arg0)
{
  vtk::ConvertManagedToNative<::vtkVoxelModeller>(m_instance)->SetMaximumDistance(arg0);
}



double vtkVoxelModeller::GetMaximumDistanceMinValue()
{
  double retVal = vtk::ConvertManagedToNative<::vtkVoxelModeller>(m_instance)->GetMaximumDistanceMinValue();
  return retVal;
}



double vtkVoxelModeller::GetMaximumDistanceMaxValue()
{
  double retVal = vtk::ConvertManagedToNative<::vtkVoxelModeller>(m_instance)->GetMaximumDistanceMaxValue();
  return retVal;
}



double vtkVoxelModeller::GetMaximumDistance()
{
  double retVal = vtk::ConvertManagedToNative<::vtkVoxelModeller>(m_instance)->GetMaximumDistance();
  return retVal;
}



void vtkVoxelModeller::SetModelBounds(array<double>^ bounds)
{
  pin_ptr<double> boundsPin = &bounds[0];
  double* nativeboundsPin = boundsPin;
  vtk::ConvertManagedToNative<::vtkVoxelModeller>(m_instance)->SetModelBounds(nativeboundsPin);
}



void vtkVoxelModeller::SetModelBounds(double xmin, double xmax, double ymin, double ymax, double zmin, double zmax)
{
  vtk::ConvertManagedToNative<::vtkVoxelModeller>(m_instance)->SetModelBounds(xmin, xmax, ymin, ymax, zmin, zmax);
}



array<double>^ vtkVoxelModeller::GetModelBounds()
{
  const double* retVal = vtk::ConvertManagedToNative<::vtkVoxelModeller>(m_instance)->GetModelBounds();
  array<double>^ mRetVal = gcnew array<double>(6);
  for (size_t cprIdx=0; cprIdx<6; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



  vtkVoxelModeller::vtkVoxelModeller(System::IntPtr native, bool bConst) : vtkImageAlgorithm(native, bConst) {}



  vtkVoxelModeller::vtkVoxelModeller(bool donothing) : vtkImageAlgorithm(donothing) {}



  vtkVoxelModeller::vtkVoxelModeller() : vtkImageAlgorithm(false) {
  this->SetNativePointer(IntPtr(::vtkVoxelModeller::New()));
}



  vtkVoxelModeller::~vtkVoxelModeller() { }





} // end namespace vtkImaging
