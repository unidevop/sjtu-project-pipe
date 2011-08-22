

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkCleanPolyDataDotNet.h"

// native includes
#include "strstream"
#include "vtkCleanPolyData.h"
#include "vtkObject.h"
#include "vtkPointLocator.h"
#include "vtkPolyData.h"

using namespace System;

namespace vtk {

  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkCleanPolyData::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkCleanPolyData>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkCleanPolyData::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkCleanPolyData>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




System::String^ vtkCleanPolyData::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkCleanPolyData>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkCleanPolyData::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkCleanPolyData>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkCleanPolyData^ vtkCleanPolyData::NewInstance()
{
  ::vtkCleanPolyData* retVal = static_cast<::vtkCleanPolyData*>(vtk::ConvertManagedToNative<::vtkCleanPolyData>(m_instance)->NewInstance());
  return gcnew vtkCleanPolyData(IntPtr(retVal), false);
}



vtkCleanPolyData^ vtkCleanPolyData::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkCleanPolyData* retVal = static_cast<::vtkCleanPolyData*>(::vtkCleanPolyData::SafeDownCast(oWrap));
  return gcnew vtkCleanPolyData(IntPtr(retVal), false);
}



void vtkCleanPolyData::SetToleranceIsAbsolute(int arg0)
{
  vtk::ConvertManagedToNative<::vtkCleanPolyData>(m_instance)->SetToleranceIsAbsolute(arg0);
}



void vtkCleanPolyData::ToleranceIsAbsoluteOn()
{
  vtk::ConvertManagedToNative<::vtkCleanPolyData>(m_instance)->ToleranceIsAbsoluteOn();
}



void vtkCleanPolyData::ToleranceIsAbsoluteOff()
{
  vtk::ConvertManagedToNative<::vtkCleanPolyData>(m_instance)->ToleranceIsAbsoluteOff();
}



int vtkCleanPolyData::GetToleranceIsAbsolute()
{
  int retVal = vtk::ConvertManagedToNative<::vtkCleanPolyData>(m_instance)->GetToleranceIsAbsolute();
  return retVal;
}



void vtkCleanPolyData::SetTolerance(double arg0)
{
  vtk::ConvertManagedToNative<::vtkCleanPolyData>(m_instance)->SetTolerance(arg0);
}



double vtkCleanPolyData::GetToleranceMinValue()
{
  double retVal = vtk::ConvertManagedToNative<::vtkCleanPolyData>(m_instance)->GetToleranceMinValue();
  return retVal;
}



double vtkCleanPolyData::GetToleranceMaxValue()
{
  double retVal = vtk::ConvertManagedToNative<::vtkCleanPolyData>(m_instance)->GetToleranceMaxValue();
  return retVal;
}



double vtkCleanPolyData::GetTolerance()
{
  double retVal = vtk::ConvertManagedToNative<::vtkCleanPolyData>(m_instance)->GetTolerance();
  return retVal;
}



void vtkCleanPolyData::SetAbsoluteTolerance(double arg0)
{
  vtk::ConvertManagedToNative<::vtkCleanPolyData>(m_instance)->SetAbsoluteTolerance(arg0);
}



double vtkCleanPolyData::GetAbsoluteToleranceMinValue()
{
  double retVal = vtk::ConvertManagedToNative<::vtkCleanPolyData>(m_instance)->GetAbsoluteToleranceMinValue();
  return retVal;
}



double vtkCleanPolyData::GetAbsoluteToleranceMaxValue()
{
  double retVal = vtk::ConvertManagedToNative<::vtkCleanPolyData>(m_instance)->GetAbsoluteToleranceMaxValue();
  return retVal;
}



double vtkCleanPolyData::GetAbsoluteTolerance()
{
  double retVal = vtk::ConvertManagedToNative<::vtkCleanPolyData>(m_instance)->GetAbsoluteTolerance();
  return retVal;
}



void vtkCleanPolyData::SetConvertLinesToPoints(int arg0)
{
  vtk::ConvertManagedToNative<::vtkCleanPolyData>(m_instance)->SetConvertLinesToPoints(arg0);
}



void vtkCleanPolyData::ConvertLinesToPointsOn()
{
  vtk::ConvertManagedToNative<::vtkCleanPolyData>(m_instance)->ConvertLinesToPointsOn();
}



void vtkCleanPolyData::ConvertLinesToPointsOff()
{
  vtk::ConvertManagedToNative<::vtkCleanPolyData>(m_instance)->ConvertLinesToPointsOff();
}



int vtkCleanPolyData::GetConvertLinesToPoints()
{
  int retVal = vtk::ConvertManagedToNative<::vtkCleanPolyData>(m_instance)->GetConvertLinesToPoints();
  return retVal;
}



void vtkCleanPolyData::SetConvertPolysToLines(int arg0)
{
  vtk::ConvertManagedToNative<::vtkCleanPolyData>(m_instance)->SetConvertPolysToLines(arg0);
}



void vtkCleanPolyData::ConvertPolysToLinesOn()
{
  vtk::ConvertManagedToNative<::vtkCleanPolyData>(m_instance)->ConvertPolysToLinesOn();
}



void vtkCleanPolyData::ConvertPolysToLinesOff()
{
  vtk::ConvertManagedToNative<::vtkCleanPolyData>(m_instance)->ConvertPolysToLinesOff();
}



int vtkCleanPolyData::GetConvertPolysToLines()
{
  int retVal = vtk::ConvertManagedToNative<::vtkCleanPolyData>(m_instance)->GetConvertPolysToLines();
  return retVal;
}



void vtkCleanPolyData::SetConvertStripsToPolys(int arg0)
{
  vtk::ConvertManagedToNative<::vtkCleanPolyData>(m_instance)->SetConvertStripsToPolys(arg0);
}



void vtkCleanPolyData::ConvertStripsToPolysOn()
{
  vtk::ConvertManagedToNative<::vtkCleanPolyData>(m_instance)->ConvertStripsToPolysOn();
}



void vtkCleanPolyData::ConvertStripsToPolysOff()
{
  vtk::ConvertManagedToNative<::vtkCleanPolyData>(m_instance)->ConvertStripsToPolysOff();
}



int vtkCleanPolyData::GetConvertStripsToPolys()
{
  int retVal = vtk::ConvertManagedToNative<::vtkCleanPolyData>(m_instance)->GetConvertStripsToPolys();
  return retVal;
}



void vtkCleanPolyData::SetPointMerging(int arg0)
{
  vtk::ConvertManagedToNative<::vtkCleanPolyData>(m_instance)->SetPointMerging(arg0);
}



int vtkCleanPolyData::GetPointMerging()
{
  int retVal = vtk::ConvertManagedToNative<::vtkCleanPolyData>(m_instance)->GetPointMerging();
  return retVal;
}



void vtkCleanPolyData::PointMergingOn()
{
  vtk::ConvertManagedToNative<::vtkCleanPolyData>(m_instance)->PointMergingOn();
}



void vtkCleanPolyData::PointMergingOff()
{
  vtk::ConvertManagedToNative<::vtkCleanPolyData>(m_instance)->PointMergingOff();
}



void vtkCleanPolyData::SetLocator(vtkPointLocator^ locator)
{
  ::vtkPointLocator* locatorWrap = vtk::ConvertManagedToNative<::vtkPointLocator>(locator->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkCleanPolyData>(m_instance)->SetLocator(locatorWrap);
}



vtkPointLocator^ vtkCleanPolyData::GetLocator()
{
  ::vtkPointLocator* retVal = static_cast<::vtkPointLocator*>(vtk::ConvertManagedToNative<::vtkCleanPolyData>(m_instance)->GetLocator());
  return gcnew vtkPointLocator(IntPtr(retVal), false);
}



void vtkCleanPolyData::CreateDefaultLocator(vtkPolyData^ input)
{
  ::vtkPolyData* inputWrap = vtk::ConvertManagedToNative<::vtkPolyData>(input->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkCleanPolyData>(m_instance)->CreateDefaultLocator(inputWrap);
}



void vtkCleanPolyData::ReleaseLocator()
{
  vtk::ConvertManagedToNative<::vtkCleanPolyData>(m_instance)->ReleaseLocator();
}



unsigned long vtkCleanPolyData::GetMTime()
{
  unsigned long retVal = vtk::ConvertManagedToNative<::vtkCleanPolyData>(m_instance)->GetMTime();
  return retVal;
}



void vtkCleanPolyData::OperateOnPoint(array<double>^ in, array<double>^ out)
{
  pin_ptr<double> inPin = &in[0];
  double* nativeinPin = inPin;
  pin_ptr<double> outPin = &out[0];
  double* nativeoutPin = outPin;
  vtk::ConvertManagedToNative<::vtkCleanPolyData>(m_instance)->OperateOnPoint(nativeinPin, nativeoutPin);
}



void vtkCleanPolyData::OperateOnBounds(array<double>^ in, array<double>^ out)
{
  pin_ptr<double> inPin = &in[0];
  double* nativeinPin = inPin;
  pin_ptr<double> outPin = &out[0];
  double* nativeoutPin = outPin;
  vtk::ConvertManagedToNative<::vtkCleanPolyData>(m_instance)->OperateOnBounds(nativeinPin, nativeoutPin);
}



void vtkCleanPolyData::SetPieceInvariant(int arg0)
{
  vtk::ConvertManagedToNative<::vtkCleanPolyData>(m_instance)->SetPieceInvariant(arg0);
}



int vtkCleanPolyData::GetPieceInvariant()
{
  int retVal = vtk::ConvertManagedToNative<::vtkCleanPolyData>(m_instance)->GetPieceInvariant();
  return retVal;
}



void vtkCleanPolyData::PieceInvariantOn()
{
  vtk::ConvertManagedToNative<::vtkCleanPolyData>(m_instance)->PieceInvariantOn();
}



void vtkCleanPolyData::PieceInvariantOff()
{
  vtk::ConvertManagedToNative<::vtkCleanPolyData>(m_instance)->PieceInvariantOff();
}



  vtkCleanPolyData::vtkCleanPolyData(System::IntPtr native, bool bConst) : vtkPolyDataAlgorithm(native, bConst) {}



  vtkCleanPolyData::vtkCleanPolyData(bool donothing) : vtkPolyDataAlgorithm(donothing) {}



  vtkCleanPolyData::vtkCleanPolyData() : vtkPolyDataAlgorithm(false) {
  this->SetNativePointer(IntPtr(::vtkCleanPolyData::New()));
}



  vtkCleanPolyData::~vtkCleanPolyData() { }





} // end namespace vtkGraphics
