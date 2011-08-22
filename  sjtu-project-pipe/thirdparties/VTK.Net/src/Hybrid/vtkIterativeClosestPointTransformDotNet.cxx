

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkIterativeClosestPointTransformDotNet.h"
#include "vtkLandmarkTransformDotNet.h"

// native includes
#include "strstream"
#include "vtkIterativeClosestPointTransform.h"
#include "vtkAbstractTransform.h"
#include "vtkCellLocator.h"
#include "vtkDataSet.h"
#include "vtkLandmarkTransform.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkIterativeClosestPointTransform::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkIterativeClosestPointTransform>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkIterativeClosestPointTransform::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkIterativeClosestPointTransform>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkIterativeClosestPointTransform^ vtkIterativeClosestPointTransform::NewInstance()
{
  ::vtkIterativeClosestPointTransform* retVal = static_cast<::vtkIterativeClosestPointTransform*>(vtk::ConvertManagedToNative<::vtkIterativeClosestPointTransform>(m_instance)->NewInstance());
  return gcnew vtkIterativeClosestPointTransform(IntPtr(retVal), false);
}



vtkIterativeClosestPointTransform^ vtkIterativeClosestPointTransform::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkIterativeClosestPointTransform* retVal = static_cast<::vtkIterativeClosestPointTransform*>(::vtkIterativeClosestPointTransform::SafeDownCast(oWrap));
  return gcnew vtkIterativeClosestPointTransform(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkIterativeClosestPointTransform::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkIterativeClosestPointTransform>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkIterativeClosestPointTransform::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkIterativeClosestPointTransform>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkIterativeClosestPointTransform::SetSource(vtkDataSet^ source)
{
  ::vtkDataSet* sourceWrap = vtk::ConvertManagedToNative<::vtkDataSet>(source->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkIterativeClosestPointTransform>(m_instance)->SetSource(sourceWrap);
}



void vtkIterativeClosestPointTransform::SetTarget(vtkDataSet^ target)
{
  ::vtkDataSet* targetWrap = vtk::ConvertManagedToNative<::vtkDataSet>(target->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkIterativeClosestPointTransform>(m_instance)->SetTarget(targetWrap);
}



vtkDataSet^ vtkIterativeClosestPointTransform::GetSource()
{
  ::vtkDataSet* retVal = static_cast<::vtkDataSet*>(vtk::ConvertManagedToNative<::vtkIterativeClosestPointTransform>(m_instance)->GetSource());
  return gcnew vtkDataSet(IntPtr(retVal), false);
}



vtkDataSet^ vtkIterativeClosestPointTransform::GetTarget()
{
  ::vtkDataSet* retVal = static_cast<::vtkDataSet*>(vtk::ConvertManagedToNative<::vtkIterativeClosestPointTransform>(m_instance)->GetTarget());
  return gcnew vtkDataSet(IntPtr(retVal), false);
}



void vtkIterativeClosestPointTransform::SetLocator(vtkCellLocator^ locator)
{
  ::vtkCellLocator* locatorWrap = vtk::ConvertManagedToNative<::vtkCellLocator>(locator->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkIterativeClosestPointTransform>(m_instance)->SetLocator(locatorWrap);
}



vtkCellLocator^ vtkIterativeClosestPointTransform::GetLocator()
{
  ::vtkCellLocator* retVal = static_cast<::vtkCellLocator*>(vtk::ConvertManagedToNative<::vtkIterativeClosestPointTransform>(m_instance)->GetLocator());
  return gcnew vtkCellLocator(IntPtr(retVal), false);
}



void vtkIterativeClosestPointTransform::SetMaximumNumberOfIterations(int arg0)
{
  vtk::ConvertManagedToNative<::vtkIterativeClosestPointTransform>(m_instance)->SetMaximumNumberOfIterations(arg0);
}



int vtkIterativeClosestPointTransform::GetMaximumNumberOfIterations()
{
  int retVal = vtk::ConvertManagedToNative<::vtkIterativeClosestPointTransform>(m_instance)->GetMaximumNumberOfIterations();
  return retVal;
}



int vtkIterativeClosestPointTransform::GetNumberOfIterations()
{
  int retVal = vtk::ConvertManagedToNative<::vtkIterativeClosestPointTransform>(m_instance)->GetNumberOfIterations();
  return retVal;
}



void vtkIterativeClosestPointTransform::SetCheckMeanDistance(int arg0)
{
  vtk::ConvertManagedToNative<::vtkIterativeClosestPointTransform>(m_instance)->SetCheckMeanDistance(arg0);
}



int vtkIterativeClosestPointTransform::GetCheckMeanDistance()
{
  int retVal = vtk::ConvertManagedToNative<::vtkIterativeClosestPointTransform>(m_instance)->GetCheckMeanDistance();
  return retVal;
}



void vtkIterativeClosestPointTransform::CheckMeanDistanceOn()
{
  vtk::ConvertManagedToNative<::vtkIterativeClosestPointTransform>(m_instance)->CheckMeanDistanceOn();
}



void vtkIterativeClosestPointTransform::CheckMeanDistanceOff()
{
  vtk::ConvertManagedToNative<::vtkIterativeClosestPointTransform>(m_instance)->CheckMeanDistanceOff();
}



void vtkIterativeClosestPointTransform::SetMeanDistanceMode(int arg0)
{
  vtk::ConvertManagedToNative<::vtkIterativeClosestPointTransform>(m_instance)->SetMeanDistanceMode(arg0);
}



int vtkIterativeClosestPointTransform::GetMeanDistanceModeMinValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkIterativeClosestPointTransform>(m_instance)->GetMeanDistanceModeMinValue();
  return retVal;
}



int vtkIterativeClosestPointTransform::GetMeanDistanceModeMaxValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkIterativeClosestPointTransform>(m_instance)->GetMeanDistanceModeMaxValue();
  return retVal;
}



int vtkIterativeClosestPointTransform::GetMeanDistanceMode()
{
  int retVal = vtk::ConvertManagedToNative<::vtkIterativeClosestPointTransform>(m_instance)->GetMeanDistanceMode();
  return retVal;
}



void vtkIterativeClosestPointTransform::SetMeanDistanceModeToRMS()
{
  vtk::ConvertManagedToNative<::vtkIterativeClosestPointTransform>(m_instance)->SetMeanDistanceModeToRMS();
}



void vtkIterativeClosestPointTransform::SetMeanDistanceModeToAbsoluteValue()
{
  vtk::ConvertManagedToNative<::vtkIterativeClosestPointTransform>(m_instance)->SetMeanDistanceModeToAbsoluteValue();
}



System::String^ vtkIterativeClosestPointTransform::GetMeanDistanceModeAsString()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkIterativeClosestPointTransform>(m_instance)->GetMeanDistanceModeAsString();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



void vtkIterativeClosestPointTransform::SetMaximumMeanDistance(double arg0)
{
  vtk::ConvertManagedToNative<::vtkIterativeClosestPointTransform>(m_instance)->SetMaximumMeanDistance(arg0);
}



double vtkIterativeClosestPointTransform::GetMaximumMeanDistance()
{
  double retVal = vtk::ConvertManagedToNative<::vtkIterativeClosestPointTransform>(m_instance)->GetMaximumMeanDistance();
  return retVal;
}



double vtkIterativeClosestPointTransform::GetMeanDistance()
{
  double retVal = vtk::ConvertManagedToNative<::vtkIterativeClosestPointTransform>(m_instance)->GetMeanDistance();
  return retVal;
}



void vtkIterativeClosestPointTransform::SetMaximumNumberOfLandmarks(int arg0)
{
  vtk::ConvertManagedToNative<::vtkIterativeClosestPointTransform>(m_instance)->SetMaximumNumberOfLandmarks(arg0);
}



int vtkIterativeClosestPointTransform::GetMaximumNumberOfLandmarks()
{
  int retVal = vtk::ConvertManagedToNative<::vtkIterativeClosestPointTransform>(m_instance)->GetMaximumNumberOfLandmarks();
  return retVal;
}



void vtkIterativeClosestPointTransform::SetStartByMatchingCentroids(int arg0)
{
  vtk::ConvertManagedToNative<::vtkIterativeClosestPointTransform>(m_instance)->SetStartByMatchingCentroids(arg0);
}



int vtkIterativeClosestPointTransform::GetStartByMatchingCentroids()
{
  int retVal = vtk::ConvertManagedToNative<::vtkIterativeClosestPointTransform>(m_instance)->GetStartByMatchingCentroids();
  return retVal;
}



void vtkIterativeClosestPointTransform::StartByMatchingCentroidsOn()
{
  vtk::ConvertManagedToNative<::vtkIterativeClosestPointTransform>(m_instance)->StartByMatchingCentroidsOn();
}



void vtkIterativeClosestPointTransform::StartByMatchingCentroidsOff()
{
  vtk::ConvertManagedToNative<::vtkIterativeClosestPointTransform>(m_instance)->StartByMatchingCentroidsOff();
}



vtkLandmarkTransform^ vtkIterativeClosestPointTransform::GetLandmarkTransform()
{
  ::vtkLandmarkTransform* retVal = static_cast<::vtkLandmarkTransform*>(vtk::ConvertManagedToNative<::vtkIterativeClosestPointTransform>(m_instance)->GetLandmarkTransform());
  return gcnew vtkLandmarkTransform(IntPtr(retVal), false);
}



void vtkIterativeClosestPointTransform::Inverse()
{
  vtk::ConvertManagedToNative<::vtkIterativeClosestPointTransform>(m_instance)->Inverse();
}



vtkAbstractTransform^ vtkIterativeClosestPointTransform::MakeTransform()
{
  ::vtkAbstractTransform* retVal = static_cast<::vtkAbstractTransform*>(vtk::ConvertManagedToNative<::vtkIterativeClosestPointTransform>(m_instance)->MakeTransform());
  return gcnew vtkAbstractTransform(IntPtr(retVal), false);
}



  vtkIterativeClosestPointTransform::vtkIterativeClosestPointTransform(System::IntPtr native, bool bConst) : vtkLinearTransform(native, bConst) {}



  vtkIterativeClosestPointTransform::vtkIterativeClosestPointTransform(bool donothing) : vtkLinearTransform(donothing) {}



  vtkIterativeClosestPointTransform::vtkIterativeClosestPointTransform() : vtkLinearTransform(false) {
  this->SetNativePointer(IntPtr(::vtkIterativeClosestPointTransform::New()));
}



  vtkIterativeClosestPointTransform::~vtkIterativeClosestPointTransform() { }





} // end namespace vtkHybrid
