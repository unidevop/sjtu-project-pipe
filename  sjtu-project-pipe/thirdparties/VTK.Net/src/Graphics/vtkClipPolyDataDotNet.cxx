

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkClipPolyDataDotNet.h"

// native includes
#include "strstream"
#include "vtkClipPolyData.h"
#include "vtkAlgorithmOutput.h"
#include "vtkImplicitFunction.h"
#include "vtkObject.h"
#include "vtkPointLocator.h"
#include "vtkPolyData.h"

using namespace System;

namespace vtk {

System::String^ vtkClipPolyData::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkClipPolyData>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkClipPolyData::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkClipPolyData>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkClipPolyData^ vtkClipPolyData::NewInstance()
{
  ::vtkClipPolyData* retVal = static_cast<::vtkClipPolyData*>(vtk::ConvertManagedToNative<::vtkClipPolyData>(m_instance)->NewInstance());
  return gcnew vtkClipPolyData(IntPtr(retVal), false);
}



vtkClipPolyData^ vtkClipPolyData::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkClipPolyData* retVal = static_cast<::vtkClipPolyData*>(::vtkClipPolyData::SafeDownCast(oWrap));
  return gcnew vtkClipPolyData(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkClipPolyData::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkClipPolyData>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkClipPolyData::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkClipPolyData>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkClipPolyData::SetValue(double arg0)
{
  vtk::ConvertManagedToNative<::vtkClipPolyData>(m_instance)->SetValue(arg0);
}



double vtkClipPolyData::GetValue()
{
  double retVal = vtk::ConvertManagedToNative<::vtkClipPolyData>(m_instance)->GetValue();
  return retVal;
}



void vtkClipPolyData::SetInsideOut(int arg0)
{
  vtk::ConvertManagedToNative<::vtkClipPolyData>(m_instance)->SetInsideOut(arg0);
}



int vtkClipPolyData::GetInsideOut()
{
  int retVal = vtk::ConvertManagedToNative<::vtkClipPolyData>(m_instance)->GetInsideOut();
  return retVal;
}



void vtkClipPolyData::InsideOutOn()
{
  vtk::ConvertManagedToNative<::vtkClipPolyData>(m_instance)->InsideOutOn();
}



void vtkClipPolyData::InsideOutOff()
{
  vtk::ConvertManagedToNative<::vtkClipPolyData>(m_instance)->InsideOutOff();
}



void vtkClipPolyData::SetClipFunction(vtkImplicitFunction^ arg0)
{
  ::vtkImplicitFunction* arg0Wrap = vtk::ConvertManagedToNative<::vtkImplicitFunction>(arg0->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkClipPolyData>(m_instance)->SetClipFunction(arg0Wrap);
}



vtkImplicitFunction^ vtkClipPolyData::GetClipFunction()
{
  ::vtkImplicitFunction* retVal = static_cast<::vtkImplicitFunction*>(vtk::ConvertManagedToNative<::vtkClipPolyData>(m_instance)->GetClipFunction());
  return gcnew vtkImplicitFunction(IntPtr(retVal), false);
}



void vtkClipPolyData::SetGenerateClipScalars(int arg0)
{
  vtk::ConvertManagedToNative<::vtkClipPolyData>(m_instance)->SetGenerateClipScalars(arg0);
}



int vtkClipPolyData::GetGenerateClipScalars()
{
  int retVal = vtk::ConvertManagedToNative<::vtkClipPolyData>(m_instance)->GetGenerateClipScalars();
  return retVal;
}



void vtkClipPolyData::GenerateClipScalarsOn()
{
  vtk::ConvertManagedToNative<::vtkClipPolyData>(m_instance)->GenerateClipScalarsOn();
}



void vtkClipPolyData::GenerateClipScalarsOff()
{
  vtk::ConvertManagedToNative<::vtkClipPolyData>(m_instance)->GenerateClipScalarsOff();
}



void vtkClipPolyData::SetGenerateClippedOutput(int arg0)
{
  vtk::ConvertManagedToNative<::vtkClipPolyData>(m_instance)->SetGenerateClippedOutput(arg0);
}



int vtkClipPolyData::GetGenerateClippedOutput()
{
  int retVal = vtk::ConvertManagedToNative<::vtkClipPolyData>(m_instance)->GetGenerateClippedOutput();
  return retVal;
}



void vtkClipPolyData::GenerateClippedOutputOn()
{
  vtk::ConvertManagedToNative<::vtkClipPolyData>(m_instance)->GenerateClippedOutputOn();
}



void vtkClipPolyData::GenerateClippedOutputOff()
{
  vtk::ConvertManagedToNative<::vtkClipPolyData>(m_instance)->GenerateClippedOutputOff();
}



vtkPolyData^ vtkClipPolyData::GetClippedOutput()
{
  ::vtkPolyData* retVal = static_cast<::vtkPolyData*>(vtk::ConvertManagedToNative<::vtkClipPolyData>(m_instance)->GetClippedOutput());
  return gcnew vtkPolyData(IntPtr(retVal), false);
}



vtkAlgorithmOutput^ vtkClipPolyData::GetClippedOutputPort()
{
  ::vtkAlgorithmOutput* retVal = static_cast<::vtkAlgorithmOutput*>(vtk::ConvertManagedToNative<::vtkClipPolyData>(m_instance)->GetClippedOutputPort());
  return gcnew vtkAlgorithmOutput(IntPtr(retVal), false);
}



void vtkClipPolyData::SetLocator(vtkPointLocator^ locator)
{
  ::vtkPointLocator* locatorWrap = vtk::ConvertManagedToNative<::vtkPointLocator>(locator->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkClipPolyData>(m_instance)->SetLocator(locatorWrap);
}



vtkPointLocator^ vtkClipPolyData::GetLocator()
{
  ::vtkPointLocator* retVal = static_cast<::vtkPointLocator*>(vtk::ConvertManagedToNative<::vtkClipPolyData>(m_instance)->GetLocator());
  return gcnew vtkPointLocator(IntPtr(retVal), false);
}



void vtkClipPolyData::CreateDefaultLocator()
{
  vtk::ConvertManagedToNative<::vtkClipPolyData>(m_instance)->CreateDefaultLocator();
}



unsigned long vtkClipPolyData::GetMTime()
{
  unsigned long retVal = vtk::ConvertManagedToNative<::vtkClipPolyData>(m_instance)->GetMTime();
  return retVal;
}



  vtkClipPolyData::vtkClipPolyData(System::IntPtr native, bool bConst) : vtkPolyDataAlgorithm(native, bConst) {}



  vtkClipPolyData::vtkClipPolyData(bool donothing) : vtkPolyDataAlgorithm(donothing) {}



  vtkClipPolyData::vtkClipPolyData() : vtkPolyDataAlgorithm(false) {
  this->SetNativePointer(IntPtr(::vtkClipPolyData::New()));
}



  vtkClipPolyData::~vtkClipPolyData() { }





} // end namespace vtkGraphics
