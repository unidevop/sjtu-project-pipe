

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkRuledSurfaceFilterDotNet.h"

// native includes
#include "strstream"
#include "vtkRuledSurfaceFilter.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkRuledSurfaceFilter::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkRuledSurfaceFilter>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkRuledSurfaceFilter::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkRuledSurfaceFilter>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkRuledSurfaceFilter^ vtkRuledSurfaceFilter::NewInstance()
{
  ::vtkRuledSurfaceFilter* retVal = static_cast<::vtkRuledSurfaceFilter*>(vtk::ConvertManagedToNative<::vtkRuledSurfaceFilter>(m_instance)->NewInstance());
  return gcnew vtkRuledSurfaceFilter(IntPtr(retVal), false);
}



vtkRuledSurfaceFilter^ vtkRuledSurfaceFilter::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkRuledSurfaceFilter* retVal = static_cast<::vtkRuledSurfaceFilter*>(::vtkRuledSurfaceFilter::SafeDownCast(oWrap));
  return gcnew vtkRuledSurfaceFilter(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkRuledSurfaceFilter::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkRuledSurfaceFilter>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkRuledSurfaceFilter::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkRuledSurfaceFilter>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkRuledSurfaceFilter::SetDistanceFactor(double arg0)
{
  vtk::ConvertManagedToNative<::vtkRuledSurfaceFilter>(m_instance)->SetDistanceFactor(arg0);
}



double vtkRuledSurfaceFilter::GetDistanceFactorMinValue()
{
  double retVal = vtk::ConvertManagedToNative<::vtkRuledSurfaceFilter>(m_instance)->GetDistanceFactorMinValue();
  return retVal;
}



double vtkRuledSurfaceFilter::GetDistanceFactorMaxValue()
{
  double retVal = vtk::ConvertManagedToNative<::vtkRuledSurfaceFilter>(m_instance)->GetDistanceFactorMaxValue();
  return retVal;
}



double vtkRuledSurfaceFilter::GetDistanceFactor()
{
  double retVal = vtk::ConvertManagedToNative<::vtkRuledSurfaceFilter>(m_instance)->GetDistanceFactor();
  return retVal;
}



void vtkRuledSurfaceFilter::SetOnRatio(int arg0)
{
  vtk::ConvertManagedToNative<::vtkRuledSurfaceFilter>(m_instance)->SetOnRatio(arg0);
}



int vtkRuledSurfaceFilter::GetOnRatioMinValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkRuledSurfaceFilter>(m_instance)->GetOnRatioMinValue();
  return retVal;
}



int vtkRuledSurfaceFilter::GetOnRatioMaxValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkRuledSurfaceFilter>(m_instance)->GetOnRatioMaxValue();
  return retVal;
}



int vtkRuledSurfaceFilter::GetOnRatio()
{
  int retVal = vtk::ConvertManagedToNative<::vtkRuledSurfaceFilter>(m_instance)->GetOnRatio();
  return retVal;
}



void vtkRuledSurfaceFilter::SetOffset(int arg0)
{
  vtk::ConvertManagedToNative<::vtkRuledSurfaceFilter>(m_instance)->SetOffset(arg0);
}



int vtkRuledSurfaceFilter::GetOffsetMinValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkRuledSurfaceFilter>(m_instance)->GetOffsetMinValue();
  return retVal;
}



int vtkRuledSurfaceFilter::GetOffsetMaxValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkRuledSurfaceFilter>(m_instance)->GetOffsetMaxValue();
  return retVal;
}



int vtkRuledSurfaceFilter::GetOffset()
{
  int retVal = vtk::ConvertManagedToNative<::vtkRuledSurfaceFilter>(m_instance)->GetOffset();
  return retVal;
}



void vtkRuledSurfaceFilter::SetCloseSurface(int arg0)
{
  vtk::ConvertManagedToNative<::vtkRuledSurfaceFilter>(m_instance)->SetCloseSurface(arg0);
}



int vtkRuledSurfaceFilter::GetCloseSurface()
{
  int retVal = vtk::ConvertManagedToNative<::vtkRuledSurfaceFilter>(m_instance)->GetCloseSurface();
  return retVal;
}



void vtkRuledSurfaceFilter::CloseSurfaceOn()
{
  vtk::ConvertManagedToNative<::vtkRuledSurfaceFilter>(m_instance)->CloseSurfaceOn();
}



void vtkRuledSurfaceFilter::CloseSurfaceOff()
{
  vtk::ConvertManagedToNative<::vtkRuledSurfaceFilter>(m_instance)->CloseSurfaceOff();
}



void vtkRuledSurfaceFilter::SetRuledMode(int arg0)
{
  vtk::ConvertManagedToNative<::vtkRuledSurfaceFilter>(m_instance)->SetRuledMode(arg0);
}



int vtkRuledSurfaceFilter::GetRuledModeMinValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkRuledSurfaceFilter>(m_instance)->GetRuledModeMinValue();
  return retVal;
}



int vtkRuledSurfaceFilter::GetRuledModeMaxValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkRuledSurfaceFilter>(m_instance)->GetRuledModeMaxValue();
  return retVal;
}



int vtkRuledSurfaceFilter::GetRuledMode()
{
  int retVal = vtk::ConvertManagedToNative<::vtkRuledSurfaceFilter>(m_instance)->GetRuledMode();
  return retVal;
}



void vtkRuledSurfaceFilter::SetRuledModeToResample()
{
  vtk::ConvertManagedToNative<::vtkRuledSurfaceFilter>(m_instance)->SetRuledModeToResample();
}



void vtkRuledSurfaceFilter::SetRuledModeToPointWalk()
{
  vtk::ConvertManagedToNative<::vtkRuledSurfaceFilter>(m_instance)->SetRuledModeToPointWalk();
}



System::String^ vtkRuledSurfaceFilter::GetRuledModeAsString()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkRuledSurfaceFilter>(m_instance)->GetRuledModeAsString();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



void vtkRuledSurfaceFilter::SetResolution(int arg0, int arg1)
{
  vtk::ConvertManagedToNative<::vtkRuledSurfaceFilter>(m_instance)->SetResolution(arg0, arg1);
}



void vtkRuledSurfaceFilter::SetResolution(array<int>^ a)
{
  pin_ptr<int> aPin = &a[0];
  int* nativeaPin = aPin;
  vtk::ConvertManagedToNative<::vtkRuledSurfaceFilter>(m_instance)->SetResolution(nativeaPin);
}



array<int>^ vtkRuledSurfaceFilter::GetResolution()
{
  const int* retVal = vtk::ConvertManagedToNative<::vtkRuledSurfaceFilter>(m_instance)->GetResolution();
  array<int>^ mRetVal = gcnew array<int>(2);
  for (size_t cprIdx=0; cprIdx<2; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



void vtkRuledSurfaceFilter::SetPassLines(int arg0)
{
  vtk::ConvertManagedToNative<::vtkRuledSurfaceFilter>(m_instance)->SetPassLines(arg0);
}



int vtkRuledSurfaceFilter::GetPassLines()
{
  int retVal = vtk::ConvertManagedToNative<::vtkRuledSurfaceFilter>(m_instance)->GetPassLines();
  return retVal;
}



void vtkRuledSurfaceFilter::PassLinesOn()
{
  vtk::ConvertManagedToNative<::vtkRuledSurfaceFilter>(m_instance)->PassLinesOn();
}



void vtkRuledSurfaceFilter::PassLinesOff()
{
  vtk::ConvertManagedToNative<::vtkRuledSurfaceFilter>(m_instance)->PassLinesOff();
}



  vtkRuledSurfaceFilter::vtkRuledSurfaceFilter(System::IntPtr native, bool bConst) : vtkPolyDataAlgorithm(native, bConst) {}



  vtkRuledSurfaceFilter::vtkRuledSurfaceFilter(bool donothing) : vtkPolyDataAlgorithm(donothing) {}



  vtkRuledSurfaceFilter::vtkRuledSurfaceFilter() : vtkPolyDataAlgorithm(false) {
  this->SetNativePointer(IntPtr(::vtkRuledSurfaceFilter::New()));
}



  vtkRuledSurfaceFilter::~vtkRuledSurfaceFilter() { }





} // end namespace vtkGraphics
