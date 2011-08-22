

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkClipDataSetDotNet.h"

// native includes
#include "strstream"
#include "vtkClipDataSet.h"
#include "vtkImplicitFunction.h"
#include "vtkObject.h"
#include "vtkPointLocator.h"
#include "vtkUnstructuredGrid.h"

using namespace System;

namespace vtk {

System::String^ vtkClipDataSet::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkClipDataSet>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkClipDataSet::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkClipDataSet>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkClipDataSet^ vtkClipDataSet::NewInstance()
{
  ::vtkClipDataSet* retVal = static_cast<::vtkClipDataSet*>(vtk::ConvertManagedToNative<::vtkClipDataSet>(m_instance)->NewInstance());
  return gcnew vtkClipDataSet(IntPtr(retVal), false);
}



vtkClipDataSet^ vtkClipDataSet::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkClipDataSet* retVal = static_cast<::vtkClipDataSet*>(::vtkClipDataSet::SafeDownCast(oWrap));
  return gcnew vtkClipDataSet(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkClipDataSet::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkClipDataSet>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkClipDataSet::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkClipDataSet>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkClipDataSet::SetValue(double arg0)
{
  vtk::ConvertManagedToNative<::vtkClipDataSet>(m_instance)->SetValue(arg0);
}



double vtkClipDataSet::GetValue()
{
  double retVal = vtk::ConvertManagedToNative<::vtkClipDataSet>(m_instance)->GetValue();
  return retVal;
}



void vtkClipDataSet::SetInsideOut(int arg0)
{
  vtk::ConvertManagedToNative<::vtkClipDataSet>(m_instance)->SetInsideOut(arg0);
}



int vtkClipDataSet::GetInsideOut()
{
  int retVal = vtk::ConvertManagedToNative<::vtkClipDataSet>(m_instance)->GetInsideOut();
  return retVal;
}



void vtkClipDataSet::InsideOutOn()
{
  vtk::ConvertManagedToNative<::vtkClipDataSet>(m_instance)->InsideOutOn();
}



void vtkClipDataSet::InsideOutOff()
{
  vtk::ConvertManagedToNative<::vtkClipDataSet>(m_instance)->InsideOutOff();
}



void vtkClipDataSet::SetClipFunction(vtkImplicitFunction^ arg0)
{
  ::vtkImplicitFunction* arg0Wrap = vtk::ConvertManagedToNative<::vtkImplicitFunction>(arg0->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkClipDataSet>(m_instance)->SetClipFunction(arg0Wrap);
}



vtkImplicitFunction^ vtkClipDataSet::GetClipFunction()
{
  ::vtkImplicitFunction* retVal = static_cast<::vtkImplicitFunction*>(vtk::ConvertManagedToNative<::vtkClipDataSet>(m_instance)->GetClipFunction());
  return gcnew vtkImplicitFunction(IntPtr(retVal), false);
}



void vtkClipDataSet::SetGenerateClipScalars(int arg0)
{
  vtk::ConvertManagedToNative<::vtkClipDataSet>(m_instance)->SetGenerateClipScalars(arg0);
}



int vtkClipDataSet::GetGenerateClipScalars()
{
  int retVal = vtk::ConvertManagedToNative<::vtkClipDataSet>(m_instance)->GetGenerateClipScalars();
  return retVal;
}



void vtkClipDataSet::GenerateClipScalarsOn()
{
  vtk::ConvertManagedToNative<::vtkClipDataSet>(m_instance)->GenerateClipScalarsOn();
}



void vtkClipDataSet::GenerateClipScalarsOff()
{
  vtk::ConvertManagedToNative<::vtkClipDataSet>(m_instance)->GenerateClipScalarsOff();
}



void vtkClipDataSet::SetGenerateClippedOutput(int arg0)
{
  vtk::ConvertManagedToNative<::vtkClipDataSet>(m_instance)->SetGenerateClippedOutput(arg0);
}



int vtkClipDataSet::GetGenerateClippedOutput()
{
  int retVal = vtk::ConvertManagedToNative<::vtkClipDataSet>(m_instance)->GetGenerateClippedOutput();
  return retVal;
}



void vtkClipDataSet::GenerateClippedOutputOn()
{
  vtk::ConvertManagedToNative<::vtkClipDataSet>(m_instance)->GenerateClippedOutputOn();
}



void vtkClipDataSet::GenerateClippedOutputOff()
{
  vtk::ConvertManagedToNative<::vtkClipDataSet>(m_instance)->GenerateClippedOutputOff();
}



void vtkClipDataSet::SetMergeTolerance(double arg0)
{
  vtk::ConvertManagedToNative<::vtkClipDataSet>(m_instance)->SetMergeTolerance(arg0);
}



double vtkClipDataSet::GetMergeToleranceMinValue()
{
  double retVal = vtk::ConvertManagedToNative<::vtkClipDataSet>(m_instance)->GetMergeToleranceMinValue();
  return retVal;
}



double vtkClipDataSet::GetMergeToleranceMaxValue()
{
  double retVal = vtk::ConvertManagedToNative<::vtkClipDataSet>(m_instance)->GetMergeToleranceMaxValue();
  return retVal;
}



double vtkClipDataSet::GetMergeTolerance()
{
  double retVal = vtk::ConvertManagedToNative<::vtkClipDataSet>(m_instance)->GetMergeTolerance();
  return retVal;
}



vtkUnstructuredGrid^ vtkClipDataSet::GetClippedOutput()
{
  ::vtkUnstructuredGrid* retVal = static_cast<::vtkUnstructuredGrid*>(vtk::ConvertManagedToNative<::vtkClipDataSet>(m_instance)->GetClippedOutput());
  return gcnew vtkUnstructuredGrid(IntPtr(retVal), false);
}



void vtkClipDataSet::SetLocator(vtkPointLocator^ locator)
{
  ::vtkPointLocator* locatorWrap = vtk::ConvertManagedToNative<::vtkPointLocator>(locator->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkClipDataSet>(m_instance)->SetLocator(locatorWrap);
}



vtkPointLocator^ vtkClipDataSet::GetLocator()
{
  ::vtkPointLocator* retVal = static_cast<::vtkPointLocator*>(vtk::ConvertManagedToNative<::vtkClipDataSet>(m_instance)->GetLocator());
  return gcnew vtkPointLocator(IntPtr(retVal), false);
}



void vtkClipDataSet::CreateDefaultLocator()
{
  vtk::ConvertManagedToNative<::vtkClipDataSet>(m_instance)->CreateDefaultLocator();
}



unsigned long vtkClipDataSet::GetMTime()
{
  unsigned long retVal = vtk::ConvertManagedToNative<::vtkClipDataSet>(m_instance)->GetMTime();
  return retVal;
}



  vtkClipDataSet::vtkClipDataSet(System::IntPtr native, bool bConst) : vtkUnstructuredGridAlgorithm(native, bConst) {}



  vtkClipDataSet::vtkClipDataSet(bool donothing) : vtkUnstructuredGridAlgorithm(donothing) {}



  vtkClipDataSet::vtkClipDataSet() : vtkUnstructuredGridAlgorithm(false) {
  this->SetNativePointer(IntPtr(::vtkClipDataSet::New()));
}



  vtkClipDataSet::~vtkClipDataSet() { }





} // end namespace vtkGraphics
