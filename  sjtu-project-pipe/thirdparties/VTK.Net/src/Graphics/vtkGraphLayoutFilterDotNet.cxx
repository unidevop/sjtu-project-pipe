

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkGraphLayoutFilterDotNet.h"

// native includes
#include "strstream"
#include "vtkGraphLayoutFilter.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkGraphLayoutFilter::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkGraphLayoutFilter>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkGraphLayoutFilter::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkGraphLayoutFilter>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkGraphLayoutFilter^ vtkGraphLayoutFilter::NewInstance()
{
  ::vtkGraphLayoutFilter* retVal = static_cast<::vtkGraphLayoutFilter*>(vtk::ConvertManagedToNative<::vtkGraphLayoutFilter>(m_instance)->NewInstance());
  return gcnew vtkGraphLayoutFilter(IntPtr(retVal), false);
}



vtkGraphLayoutFilter^ vtkGraphLayoutFilter::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkGraphLayoutFilter* retVal = static_cast<::vtkGraphLayoutFilter*>(::vtkGraphLayoutFilter::SafeDownCast(oWrap));
  return gcnew vtkGraphLayoutFilter(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkGraphLayoutFilter::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkGraphLayoutFilter>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkGraphLayoutFilter::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkGraphLayoutFilter>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkGraphLayoutFilter::SetGraphBounds(double arg0, double arg1, double arg2, double arg3, double arg4, double arg5)
{
  vtk::ConvertManagedToNative<::vtkGraphLayoutFilter>(m_instance)->SetGraphBounds(arg0, arg1, arg2, arg3, arg4, arg5);
}



void vtkGraphLayoutFilter::SetGraphBounds(array<double>^ a)
{
  pin_ptr<double> aPin = &a[0];
  double* nativeaPin = aPin;
  vtk::ConvertManagedToNative<::vtkGraphLayoutFilter>(m_instance)->SetGraphBounds(nativeaPin);
}



array<double>^ vtkGraphLayoutFilter::GetGraphBounds()
{
  const double* retVal = vtk::ConvertManagedToNative<::vtkGraphLayoutFilter>(m_instance)->GetGraphBounds();
  array<double>^ mRetVal = gcnew array<double>(6);
  for (size_t cprIdx=0; cprIdx<6; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



void vtkGraphLayoutFilter::SetAutomaticBoundsComputation(int arg0)
{
  vtk::ConvertManagedToNative<::vtkGraphLayoutFilter>(m_instance)->SetAutomaticBoundsComputation(arg0);
}



int vtkGraphLayoutFilter::GetAutomaticBoundsComputation()
{
  int retVal = vtk::ConvertManagedToNative<::vtkGraphLayoutFilter>(m_instance)->GetAutomaticBoundsComputation();
  return retVal;
}



void vtkGraphLayoutFilter::AutomaticBoundsComputationOn()
{
  vtk::ConvertManagedToNative<::vtkGraphLayoutFilter>(m_instance)->AutomaticBoundsComputationOn();
}



void vtkGraphLayoutFilter::AutomaticBoundsComputationOff()
{
  vtk::ConvertManagedToNative<::vtkGraphLayoutFilter>(m_instance)->AutomaticBoundsComputationOff();
}



void vtkGraphLayoutFilter::SetMaxNumberOfIterations(int arg0)
{
  vtk::ConvertManagedToNative<::vtkGraphLayoutFilter>(m_instance)->SetMaxNumberOfIterations(arg0);
}



int vtkGraphLayoutFilter::GetMaxNumberOfIterationsMinValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkGraphLayoutFilter>(m_instance)->GetMaxNumberOfIterationsMinValue();
  return retVal;
}



int vtkGraphLayoutFilter::GetMaxNumberOfIterationsMaxValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkGraphLayoutFilter>(m_instance)->GetMaxNumberOfIterationsMaxValue();
  return retVal;
}



int vtkGraphLayoutFilter::GetMaxNumberOfIterations()
{
  int retVal = vtk::ConvertManagedToNative<::vtkGraphLayoutFilter>(m_instance)->GetMaxNumberOfIterations();
  return retVal;
}



void vtkGraphLayoutFilter::SetCoolDownRate(double arg0)
{
  vtk::ConvertManagedToNative<::vtkGraphLayoutFilter>(m_instance)->SetCoolDownRate(arg0);
}



double vtkGraphLayoutFilter::GetCoolDownRateMinValue()
{
  double retVal = vtk::ConvertManagedToNative<::vtkGraphLayoutFilter>(m_instance)->GetCoolDownRateMinValue();
  return retVal;
}



double vtkGraphLayoutFilter::GetCoolDownRateMaxValue()
{
  double retVal = vtk::ConvertManagedToNative<::vtkGraphLayoutFilter>(m_instance)->GetCoolDownRateMaxValue();
  return retVal;
}



double vtkGraphLayoutFilter::GetCoolDownRate()
{
  double retVal = vtk::ConvertManagedToNative<::vtkGraphLayoutFilter>(m_instance)->GetCoolDownRate();
  return retVal;
}



void vtkGraphLayoutFilter::SetThreeDimensionalLayout(int arg0)
{
  vtk::ConvertManagedToNative<::vtkGraphLayoutFilter>(m_instance)->SetThreeDimensionalLayout(arg0);
}



int vtkGraphLayoutFilter::GetThreeDimensionalLayout()
{
  int retVal = vtk::ConvertManagedToNative<::vtkGraphLayoutFilter>(m_instance)->GetThreeDimensionalLayout();
  return retVal;
}



void vtkGraphLayoutFilter::ThreeDimensionalLayoutOn()
{
  vtk::ConvertManagedToNative<::vtkGraphLayoutFilter>(m_instance)->ThreeDimensionalLayoutOn();
}



void vtkGraphLayoutFilter::ThreeDimensionalLayoutOff()
{
  vtk::ConvertManagedToNative<::vtkGraphLayoutFilter>(m_instance)->ThreeDimensionalLayoutOff();
}



  vtkGraphLayoutFilter::vtkGraphLayoutFilter(System::IntPtr native, bool bConst) : vtkPolyDataAlgorithm(native, bConst) {}



  vtkGraphLayoutFilter::vtkGraphLayoutFilter(bool donothing) : vtkPolyDataAlgorithm(donothing) {}



  vtkGraphLayoutFilter::vtkGraphLayoutFilter() : vtkPolyDataAlgorithm(false) {
  this->SetNativePointer(IntPtr(::vtkGraphLayoutFilter::New()));
}



  vtkGraphLayoutFilter::~vtkGraphLayoutFilter() { }





} // end namespace vtkGraphics
