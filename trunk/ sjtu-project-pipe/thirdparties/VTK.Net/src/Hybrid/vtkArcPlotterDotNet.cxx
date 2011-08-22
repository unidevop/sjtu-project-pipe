

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkArcPlotterDotNet.h"

// native includes
#include "strstream"
#include "vtkArcPlotter.h"
#include "vtkCamera.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkArcPlotter::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkArcPlotter>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkArcPlotter::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkArcPlotter>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkArcPlotter^ vtkArcPlotter::NewInstance()
{
  ::vtkArcPlotter* retVal = static_cast<::vtkArcPlotter*>(vtk::ConvertManagedToNative<::vtkArcPlotter>(m_instance)->NewInstance());
  return gcnew vtkArcPlotter(IntPtr(retVal), false);
}



vtkArcPlotter^ vtkArcPlotter::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkArcPlotter* retVal = static_cast<::vtkArcPlotter*>(::vtkArcPlotter::SafeDownCast(oWrap));
  return gcnew vtkArcPlotter(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkArcPlotter::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkArcPlotter>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkArcPlotter::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkArcPlotter>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkArcPlotter::SetCamera(vtkCamera^ arg0)
{
  ::vtkCamera* arg0Wrap = vtk::ConvertManagedToNative<::vtkCamera>(arg0->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkArcPlotter>(m_instance)->SetCamera(arg0Wrap);
}



vtkCamera^ vtkArcPlotter::GetCamera()
{
  ::vtkCamera* retVal = static_cast<::vtkCamera*>(vtk::ConvertManagedToNative<::vtkArcPlotter>(m_instance)->GetCamera());
  return gcnew vtkCamera(IntPtr(retVal), false);
}



void vtkArcPlotter::SetPlotMode(int arg0)
{
  vtk::ConvertManagedToNative<::vtkArcPlotter>(m_instance)->SetPlotMode(arg0);
}



int vtkArcPlotter::GetPlotMode()
{
  int retVal = vtk::ConvertManagedToNative<::vtkArcPlotter>(m_instance)->GetPlotMode();
  return retVal;
}



void vtkArcPlotter::SetPlotModeToPlotScalars()
{
  vtk::ConvertManagedToNative<::vtkArcPlotter>(m_instance)->SetPlotModeToPlotScalars();
}



void vtkArcPlotter::SetPlotModeToPlotVectors()
{
  vtk::ConvertManagedToNative<::vtkArcPlotter>(m_instance)->SetPlotModeToPlotVectors();
}



void vtkArcPlotter::SetPlotModeToPlotNormals()
{
  vtk::ConvertManagedToNative<::vtkArcPlotter>(m_instance)->SetPlotModeToPlotNormals();
}



void vtkArcPlotter::SetPlotModeToPlotTCoords()
{
  vtk::ConvertManagedToNative<::vtkArcPlotter>(m_instance)->SetPlotModeToPlotTCoords();
}



void vtkArcPlotter::SetPlotModeToPlotTensors()
{
  vtk::ConvertManagedToNative<::vtkArcPlotter>(m_instance)->SetPlotModeToPlotTensors();
}



void vtkArcPlotter::SetPlotModeToPlotFieldData()
{
  vtk::ConvertManagedToNative<::vtkArcPlotter>(m_instance)->SetPlotModeToPlotFieldData();
}



void vtkArcPlotter::SetPlotComponent(int arg0)
{
  vtk::ConvertManagedToNative<::vtkArcPlotter>(m_instance)->SetPlotComponent(arg0);
}



int vtkArcPlotter::GetPlotComponent()
{
  int retVal = vtk::ConvertManagedToNative<::vtkArcPlotter>(m_instance)->GetPlotComponent();
  return retVal;
}



void vtkArcPlotter::SetRadius(double arg0)
{
  vtk::ConvertManagedToNative<::vtkArcPlotter>(m_instance)->SetRadius(arg0);
}



double vtkArcPlotter::GetRadiusMinValue()
{
  double retVal = vtk::ConvertManagedToNative<::vtkArcPlotter>(m_instance)->GetRadiusMinValue();
  return retVal;
}



double vtkArcPlotter::GetRadiusMaxValue()
{
  double retVal = vtk::ConvertManagedToNative<::vtkArcPlotter>(m_instance)->GetRadiusMaxValue();
  return retVal;
}



double vtkArcPlotter::GetRadius()
{
  double retVal = vtk::ConvertManagedToNative<::vtkArcPlotter>(m_instance)->GetRadius();
  return retVal;
}



void vtkArcPlotter::SetHeight(double arg0)
{
  vtk::ConvertManagedToNative<::vtkArcPlotter>(m_instance)->SetHeight(arg0);
}



double vtkArcPlotter::GetHeightMinValue()
{
  double retVal = vtk::ConvertManagedToNative<::vtkArcPlotter>(m_instance)->GetHeightMinValue();
  return retVal;
}



double vtkArcPlotter::GetHeightMaxValue()
{
  double retVal = vtk::ConvertManagedToNative<::vtkArcPlotter>(m_instance)->GetHeightMaxValue();
  return retVal;
}



double vtkArcPlotter::GetHeight()
{
  double retVal = vtk::ConvertManagedToNative<::vtkArcPlotter>(m_instance)->GetHeight();
  return retVal;
}



void vtkArcPlotter::SetOffset(double arg0)
{
  vtk::ConvertManagedToNative<::vtkArcPlotter>(m_instance)->SetOffset(arg0);
}



double vtkArcPlotter::GetOffsetMinValue()
{
  double retVal = vtk::ConvertManagedToNative<::vtkArcPlotter>(m_instance)->GetOffsetMinValue();
  return retVal;
}



double vtkArcPlotter::GetOffsetMaxValue()
{
  double retVal = vtk::ConvertManagedToNative<::vtkArcPlotter>(m_instance)->GetOffsetMaxValue();
  return retVal;
}



double vtkArcPlotter::GetOffset()
{
  double retVal = vtk::ConvertManagedToNative<::vtkArcPlotter>(m_instance)->GetOffset();
  return retVal;
}



void vtkArcPlotter::SetUseDefaultNormal(int arg0)
{
  vtk::ConvertManagedToNative<::vtkArcPlotter>(m_instance)->SetUseDefaultNormal(arg0);
}



int vtkArcPlotter::GetUseDefaultNormal()
{
  int retVal = vtk::ConvertManagedToNative<::vtkArcPlotter>(m_instance)->GetUseDefaultNormal();
  return retVal;
}



void vtkArcPlotter::UseDefaultNormalOn()
{
  vtk::ConvertManagedToNative<::vtkArcPlotter>(m_instance)->UseDefaultNormalOn();
}



void vtkArcPlotter::UseDefaultNormalOff()
{
  vtk::ConvertManagedToNative<::vtkArcPlotter>(m_instance)->UseDefaultNormalOff();
}



void vtkArcPlotter::SetDefaultNormal(float arg0, float arg1, float arg2)
{
  vtk::ConvertManagedToNative<::vtkArcPlotter>(m_instance)->SetDefaultNormal(arg0, arg1, arg2);
}



void vtkArcPlotter::SetDefaultNormal(array<float>^ a)
{
  pin_ptr<float> aPin = &a[0];
  float* nativeaPin = aPin;
  vtk::ConvertManagedToNative<::vtkArcPlotter>(m_instance)->SetDefaultNormal(nativeaPin);
}



array<float>^ vtkArcPlotter::GetDefaultNormal()
{
  const float* retVal = vtk::ConvertManagedToNative<::vtkArcPlotter>(m_instance)->GetDefaultNormal();
  array<float>^ mRetVal = gcnew array<float>(3);
  for (size_t cprIdx=0; cprIdx<3; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



void vtkArcPlotter::SetFieldDataArray(int arg0)
{
  vtk::ConvertManagedToNative<::vtkArcPlotter>(m_instance)->SetFieldDataArray(arg0);
}



int vtkArcPlotter::GetFieldDataArrayMinValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkArcPlotter>(m_instance)->GetFieldDataArrayMinValue();
  return retVal;
}



int vtkArcPlotter::GetFieldDataArrayMaxValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkArcPlotter>(m_instance)->GetFieldDataArrayMaxValue();
  return retVal;
}



int vtkArcPlotter::GetFieldDataArray()
{
  int retVal = vtk::ConvertManagedToNative<::vtkArcPlotter>(m_instance)->GetFieldDataArray();
  return retVal;
}



unsigned long vtkArcPlotter::GetMTime()
{
  unsigned long retVal = vtk::ConvertManagedToNative<::vtkArcPlotter>(m_instance)->GetMTime();
  return retVal;
}



  vtkArcPlotter::vtkArcPlotter(System::IntPtr native, bool bConst) : vtkPolyDataAlgorithm(native, bConst) {}



  vtkArcPlotter::vtkArcPlotter(bool donothing) : vtkPolyDataAlgorithm(donothing) {}



  vtkArcPlotter::vtkArcPlotter() : vtkPolyDataAlgorithm(false) {
  this->SetNativePointer(IntPtr(::vtkArcPlotter::New()));
}



  vtkArcPlotter::~vtkArcPlotter() { }





} // end namespace vtkHybrid
