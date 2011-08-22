

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkGenericClipDotNet.h"

// native includes
#include "strstream"
#include "vtkGenericClip.h"
#include "vtkImplicitFunction.h"
#include "vtkObject.h"
#include "vtkPointLocator.h"
#include "vtkUnstructuredGrid.h"

using namespace System;

namespace vtk {

System::String^ vtkGenericClip::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkGenericClip>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkGenericClip::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkGenericClip>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkGenericClip^ vtkGenericClip::NewInstance()
{
  ::vtkGenericClip* retVal = static_cast<::vtkGenericClip*>(vtk::ConvertManagedToNative<::vtkGenericClip>(m_instance)->NewInstance());
  return gcnew vtkGenericClip(IntPtr(retVal), false);
}



vtkGenericClip^ vtkGenericClip::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkGenericClip* retVal = static_cast<::vtkGenericClip*>(::vtkGenericClip::SafeDownCast(oWrap));
  return gcnew vtkGenericClip(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkGenericClip::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkGenericClip>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkGenericClip::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkGenericClip>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkGenericClip::SetValue(double arg0)
{
  vtk::ConvertManagedToNative<::vtkGenericClip>(m_instance)->SetValue(arg0);
}



double vtkGenericClip::GetValue()
{
  double retVal = vtk::ConvertManagedToNative<::vtkGenericClip>(m_instance)->GetValue();
  return retVal;
}



void vtkGenericClip::SetInsideOut(int arg0)
{
  vtk::ConvertManagedToNative<::vtkGenericClip>(m_instance)->SetInsideOut(arg0);
}



int vtkGenericClip::GetInsideOut()
{
  int retVal = vtk::ConvertManagedToNative<::vtkGenericClip>(m_instance)->GetInsideOut();
  return retVal;
}



void vtkGenericClip::InsideOutOn()
{
  vtk::ConvertManagedToNative<::vtkGenericClip>(m_instance)->InsideOutOn();
}



void vtkGenericClip::InsideOutOff()
{
  vtk::ConvertManagedToNative<::vtkGenericClip>(m_instance)->InsideOutOff();
}



void vtkGenericClip::SetClipFunction(vtkImplicitFunction^ arg0)
{
  ::vtkImplicitFunction* arg0Wrap = vtk::ConvertManagedToNative<::vtkImplicitFunction>(arg0->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkGenericClip>(m_instance)->SetClipFunction(arg0Wrap);
}



vtkImplicitFunction^ vtkGenericClip::GetClipFunction()
{
  ::vtkImplicitFunction* retVal = static_cast<::vtkImplicitFunction*>(vtk::ConvertManagedToNative<::vtkGenericClip>(m_instance)->GetClipFunction());
  return gcnew vtkImplicitFunction(IntPtr(retVal), false);
}



void vtkGenericClip::SetGenerateClipScalars(int arg0)
{
  vtk::ConvertManagedToNative<::vtkGenericClip>(m_instance)->SetGenerateClipScalars(arg0);
}



int vtkGenericClip::GetGenerateClipScalars()
{
  int retVal = vtk::ConvertManagedToNative<::vtkGenericClip>(m_instance)->GetGenerateClipScalars();
  return retVal;
}



void vtkGenericClip::GenerateClipScalarsOn()
{
  vtk::ConvertManagedToNative<::vtkGenericClip>(m_instance)->GenerateClipScalarsOn();
}



void vtkGenericClip::GenerateClipScalarsOff()
{
  vtk::ConvertManagedToNative<::vtkGenericClip>(m_instance)->GenerateClipScalarsOff();
}



void vtkGenericClip::SetGenerateClippedOutput(int arg0)
{
  vtk::ConvertManagedToNative<::vtkGenericClip>(m_instance)->SetGenerateClippedOutput(arg0);
}



int vtkGenericClip::GetGenerateClippedOutput()
{
  int retVal = vtk::ConvertManagedToNative<::vtkGenericClip>(m_instance)->GetGenerateClippedOutput();
  return retVal;
}



void vtkGenericClip::GenerateClippedOutputOn()
{
  vtk::ConvertManagedToNative<::vtkGenericClip>(m_instance)->GenerateClippedOutputOn();
}



void vtkGenericClip::GenerateClippedOutputOff()
{
  vtk::ConvertManagedToNative<::vtkGenericClip>(m_instance)->GenerateClippedOutputOff();
}



void vtkGenericClip::SetMergeTolerance(double arg0)
{
  vtk::ConvertManagedToNative<::vtkGenericClip>(m_instance)->SetMergeTolerance(arg0);
}



double vtkGenericClip::GetMergeToleranceMinValue()
{
  double retVal = vtk::ConvertManagedToNative<::vtkGenericClip>(m_instance)->GetMergeToleranceMinValue();
  return retVal;
}



double vtkGenericClip::GetMergeToleranceMaxValue()
{
  double retVal = vtk::ConvertManagedToNative<::vtkGenericClip>(m_instance)->GetMergeToleranceMaxValue();
  return retVal;
}



double vtkGenericClip::GetMergeTolerance()
{
  double retVal = vtk::ConvertManagedToNative<::vtkGenericClip>(m_instance)->GetMergeTolerance();
  return retVal;
}



vtkUnstructuredGrid^ vtkGenericClip::GetClippedOutput()
{
  ::vtkUnstructuredGrid* retVal = static_cast<::vtkUnstructuredGrid*>(vtk::ConvertManagedToNative<::vtkGenericClip>(m_instance)->GetClippedOutput());
  return gcnew vtkUnstructuredGrid(IntPtr(retVal), false);
}



int vtkGenericClip::GetNumberOfOutputs()
{
  int retVal = vtk::ConvertManagedToNative<::vtkGenericClip>(m_instance)->GetNumberOfOutputs();
  return retVal;
}



void vtkGenericClip::SetLocator(vtkPointLocator^ locator)
{
  ::vtkPointLocator* locatorWrap = vtk::ConvertManagedToNative<::vtkPointLocator>(locator->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkGenericClip>(m_instance)->SetLocator(locatorWrap);
}



vtkPointLocator^ vtkGenericClip::GetLocator()
{
  ::vtkPointLocator* retVal = static_cast<::vtkPointLocator*>(vtk::ConvertManagedToNative<::vtkGenericClip>(m_instance)->GetLocator());
  return gcnew vtkPointLocator(IntPtr(retVal), false);
}



void vtkGenericClip::CreateDefaultLocator()
{
  vtk::ConvertManagedToNative<::vtkGenericClip>(m_instance)->CreateDefaultLocator();
}



unsigned long vtkGenericClip::GetMTime()
{
  unsigned long retVal = vtk::ConvertManagedToNative<::vtkGenericClip>(m_instance)->GetMTime();
  return retVal;
}



System::String^ vtkGenericClip::GetInputScalarsSelection()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkGenericClip>(m_instance)->GetInputScalarsSelection();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



void vtkGenericClip::SelectInputScalars(System::String^ fieldName)
{
  char* fieldNameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(fieldName).ToPointer());
  vtk::ConvertManagedToNative<::vtkGenericClip>(m_instance)->SelectInputScalars(fieldNameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(fieldNameWrap));
}



  vtkGenericClip::vtkGenericClip(System::IntPtr native, bool bConst) : vtkUnstructuredGridAlgorithm(native, bConst) {}



  vtkGenericClip::vtkGenericClip(bool donothing) : vtkUnstructuredGridAlgorithm(donothing) {}



  vtkGenericClip::vtkGenericClip() : vtkUnstructuredGridAlgorithm(false) {
  this->SetNativePointer(IntPtr(::vtkGenericClip::New()));
}



  vtkGenericClip::~vtkGenericClip() { }





} // end namespace vtkGenericFiltering
