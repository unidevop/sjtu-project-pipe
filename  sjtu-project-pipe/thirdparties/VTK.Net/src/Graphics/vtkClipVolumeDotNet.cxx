

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkClipVolumeDotNet.h"

// native includes
#include "strstream"
#include "vtkClipVolume.h"
#include "vtkImplicitFunction.h"
#include "vtkObject.h"
#include "vtkPointLocator.h"
#include "vtkUnstructuredGrid.h"

using namespace System;

namespace vtk {

System::String^ vtkClipVolume::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkClipVolume>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkClipVolume::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkClipVolume>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkClipVolume^ vtkClipVolume::NewInstance()
{
  ::vtkClipVolume* retVal = static_cast<::vtkClipVolume*>(vtk::ConvertManagedToNative<::vtkClipVolume>(m_instance)->NewInstance());
  return gcnew vtkClipVolume(IntPtr(retVal), false);
}



vtkClipVolume^ vtkClipVolume::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkClipVolume* retVal = static_cast<::vtkClipVolume*>(::vtkClipVolume::SafeDownCast(oWrap));
  return gcnew vtkClipVolume(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkClipVolume::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkClipVolume>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkClipVolume::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkClipVolume>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkClipVolume::SetValue(double arg0)
{
  vtk::ConvertManagedToNative<::vtkClipVolume>(m_instance)->SetValue(arg0);
}



double vtkClipVolume::GetValue()
{
  double retVal = vtk::ConvertManagedToNative<::vtkClipVolume>(m_instance)->GetValue();
  return retVal;
}



void vtkClipVolume::SetInsideOut(int arg0)
{
  vtk::ConvertManagedToNative<::vtkClipVolume>(m_instance)->SetInsideOut(arg0);
}



int vtkClipVolume::GetInsideOut()
{
  int retVal = vtk::ConvertManagedToNative<::vtkClipVolume>(m_instance)->GetInsideOut();
  return retVal;
}



void vtkClipVolume::InsideOutOn()
{
  vtk::ConvertManagedToNative<::vtkClipVolume>(m_instance)->InsideOutOn();
}



void vtkClipVolume::InsideOutOff()
{
  vtk::ConvertManagedToNative<::vtkClipVolume>(m_instance)->InsideOutOff();
}



void vtkClipVolume::SetClipFunction(vtkImplicitFunction^ arg0)
{
  ::vtkImplicitFunction* arg0Wrap = vtk::ConvertManagedToNative<::vtkImplicitFunction>(arg0->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkClipVolume>(m_instance)->SetClipFunction(arg0Wrap);
}



vtkImplicitFunction^ vtkClipVolume::GetClipFunction()
{
  ::vtkImplicitFunction* retVal = static_cast<::vtkImplicitFunction*>(vtk::ConvertManagedToNative<::vtkClipVolume>(m_instance)->GetClipFunction());
  return gcnew vtkImplicitFunction(IntPtr(retVal), false);
}



void vtkClipVolume::SetGenerateClipScalars(int arg0)
{
  vtk::ConvertManagedToNative<::vtkClipVolume>(m_instance)->SetGenerateClipScalars(arg0);
}



int vtkClipVolume::GetGenerateClipScalars()
{
  int retVal = vtk::ConvertManagedToNative<::vtkClipVolume>(m_instance)->GetGenerateClipScalars();
  return retVal;
}



void vtkClipVolume::GenerateClipScalarsOn()
{
  vtk::ConvertManagedToNative<::vtkClipVolume>(m_instance)->GenerateClipScalarsOn();
}



void vtkClipVolume::GenerateClipScalarsOff()
{
  vtk::ConvertManagedToNative<::vtkClipVolume>(m_instance)->GenerateClipScalarsOff();
}



void vtkClipVolume::SetGenerateClippedOutput(int arg0)
{
  vtk::ConvertManagedToNative<::vtkClipVolume>(m_instance)->SetGenerateClippedOutput(arg0);
}



int vtkClipVolume::GetGenerateClippedOutput()
{
  int retVal = vtk::ConvertManagedToNative<::vtkClipVolume>(m_instance)->GetGenerateClippedOutput();
  return retVal;
}



void vtkClipVolume::GenerateClippedOutputOn()
{
  vtk::ConvertManagedToNative<::vtkClipVolume>(m_instance)->GenerateClippedOutputOn();
}



void vtkClipVolume::GenerateClippedOutputOff()
{
  vtk::ConvertManagedToNative<::vtkClipVolume>(m_instance)->GenerateClippedOutputOff();
}



vtkUnstructuredGrid^ vtkClipVolume::GetClippedOutput()
{
  ::vtkUnstructuredGrid* retVal = static_cast<::vtkUnstructuredGrid*>(vtk::ConvertManagedToNative<::vtkClipVolume>(m_instance)->GetClippedOutput());
  return gcnew vtkUnstructuredGrid(IntPtr(retVal), false);
}



void vtkClipVolume::SetMixed3DCellGeneration(int arg0)
{
  vtk::ConvertManagedToNative<::vtkClipVolume>(m_instance)->SetMixed3DCellGeneration(arg0);
}



int vtkClipVolume::GetMixed3DCellGeneration()
{
  int retVal = vtk::ConvertManagedToNative<::vtkClipVolume>(m_instance)->GetMixed3DCellGeneration();
  return retVal;
}



void vtkClipVolume::Mixed3DCellGenerationOn()
{
  vtk::ConvertManagedToNative<::vtkClipVolume>(m_instance)->Mixed3DCellGenerationOn();
}



void vtkClipVolume::Mixed3DCellGenerationOff()
{
  vtk::ConvertManagedToNative<::vtkClipVolume>(m_instance)->Mixed3DCellGenerationOff();
}



void vtkClipVolume::SetMergeTolerance(double arg0)
{
  vtk::ConvertManagedToNative<::vtkClipVolume>(m_instance)->SetMergeTolerance(arg0);
}



double vtkClipVolume::GetMergeToleranceMinValue()
{
  double retVal = vtk::ConvertManagedToNative<::vtkClipVolume>(m_instance)->GetMergeToleranceMinValue();
  return retVal;
}



double vtkClipVolume::GetMergeToleranceMaxValue()
{
  double retVal = vtk::ConvertManagedToNative<::vtkClipVolume>(m_instance)->GetMergeToleranceMaxValue();
  return retVal;
}



double vtkClipVolume::GetMergeTolerance()
{
  double retVal = vtk::ConvertManagedToNative<::vtkClipVolume>(m_instance)->GetMergeTolerance();
  return retVal;
}



void vtkClipVolume::SetLocator(vtkPointLocator^ locator)
{
  ::vtkPointLocator* locatorWrap = vtk::ConvertManagedToNative<::vtkPointLocator>(locator->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkClipVolume>(m_instance)->SetLocator(locatorWrap);
}



vtkPointLocator^ vtkClipVolume::GetLocator()
{
  ::vtkPointLocator* retVal = static_cast<::vtkPointLocator*>(vtk::ConvertManagedToNative<::vtkClipVolume>(m_instance)->GetLocator());
  return gcnew vtkPointLocator(IntPtr(retVal), false);
}



void vtkClipVolume::CreateDefaultLocator()
{
  vtk::ConvertManagedToNative<::vtkClipVolume>(m_instance)->CreateDefaultLocator();
}



unsigned long vtkClipVolume::GetMTime()
{
  unsigned long retVal = vtk::ConvertManagedToNative<::vtkClipVolume>(m_instance)->GetMTime();
  return retVal;
}



  vtkClipVolume::vtkClipVolume(System::IntPtr native, bool bConst) : vtkUnstructuredGridAlgorithm(native, bConst) {}



  vtkClipVolume::vtkClipVolume(bool donothing) : vtkUnstructuredGridAlgorithm(donothing) {}



  vtkClipVolume::vtkClipVolume() : vtkUnstructuredGridAlgorithm(false) {
  this->SetNativePointer(IntPtr(::vtkClipVolume::New()));
}



  vtkClipVolume::~vtkClipVolume() { }





} // end namespace vtkGraphics
