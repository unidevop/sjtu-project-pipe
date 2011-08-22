

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkThresholdDotNet.h"

// native includes
#include "strstream"
#include "vtkThreshold.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkThreshold::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkThreshold>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkThreshold::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkThreshold>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkThreshold^ vtkThreshold::NewInstance()
{
  ::vtkThreshold* retVal = static_cast<::vtkThreshold*>(vtk::ConvertManagedToNative<::vtkThreshold>(m_instance)->NewInstance());
  return gcnew vtkThreshold(IntPtr(retVal), false);
}



vtkThreshold^ vtkThreshold::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkThreshold* retVal = static_cast<::vtkThreshold*>(::vtkThreshold::SafeDownCast(oWrap));
  return gcnew vtkThreshold(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkThreshold::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkThreshold>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkThreshold::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkThreshold>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkThreshold::ThresholdByLower(double lower)
{
  vtk::ConvertManagedToNative<::vtkThreshold>(m_instance)->ThresholdByLower(lower);
}



void vtkThreshold::ThresholdByUpper(double upper)
{
  vtk::ConvertManagedToNative<::vtkThreshold>(m_instance)->ThresholdByUpper(upper);
}



void vtkThreshold::ThresholdBetween(double lower, double upper)
{
  vtk::ConvertManagedToNative<::vtkThreshold>(m_instance)->ThresholdBetween(lower, upper);
}



double vtkThreshold::GetUpperThreshold()
{
  double retVal = vtk::ConvertManagedToNative<::vtkThreshold>(m_instance)->GetUpperThreshold();
  return retVal;
}



double vtkThreshold::GetLowerThreshold()
{
  double retVal = vtk::ConvertManagedToNative<::vtkThreshold>(m_instance)->GetLowerThreshold();
  return retVal;
}



void vtkThreshold::SetAttributeMode(int arg0)
{
  vtk::ConvertManagedToNative<::vtkThreshold>(m_instance)->SetAttributeMode(arg0);
}



int vtkThreshold::GetAttributeMode()
{
  int retVal = vtk::ConvertManagedToNative<::vtkThreshold>(m_instance)->GetAttributeMode();
  return retVal;
}



void vtkThreshold::SetAttributeModeToDefault()
{
  vtk::ConvertManagedToNative<::vtkThreshold>(m_instance)->SetAttributeModeToDefault();
}



void vtkThreshold::SetAttributeModeToUsePointData()
{
  vtk::ConvertManagedToNative<::vtkThreshold>(m_instance)->SetAttributeModeToUsePointData();
}



void vtkThreshold::SetAttributeModeToUseCellData()
{
  vtk::ConvertManagedToNative<::vtkThreshold>(m_instance)->SetAttributeModeToUseCellData();
}



System::String^ vtkThreshold::GetAttributeModeAsString()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkThreshold>(m_instance)->GetAttributeModeAsString();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



void vtkThreshold::SetComponentMode(int arg0)
{
  vtk::ConvertManagedToNative<::vtkThreshold>(m_instance)->SetComponentMode(arg0);
}



int vtkThreshold::GetComponentModeMinValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkThreshold>(m_instance)->GetComponentModeMinValue();
  return retVal;
}



int vtkThreshold::GetComponentModeMaxValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkThreshold>(m_instance)->GetComponentModeMaxValue();
  return retVal;
}



int vtkThreshold::GetComponentMode()
{
  int retVal = vtk::ConvertManagedToNative<::vtkThreshold>(m_instance)->GetComponentMode();
  return retVal;
}



void vtkThreshold::SetComponentModeToUseSelected()
{
  vtk::ConvertManagedToNative<::vtkThreshold>(m_instance)->SetComponentModeToUseSelected();
}



void vtkThreshold::SetComponentModeToUseAll()
{
  vtk::ConvertManagedToNative<::vtkThreshold>(m_instance)->SetComponentModeToUseAll();
}



void vtkThreshold::SetComponentModeToUseAny()
{
  vtk::ConvertManagedToNative<::vtkThreshold>(m_instance)->SetComponentModeToUseAny();
}



System::String^ vtkThreshold::GetComponentModeAsString()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkThreshold>(m_instance)->GetComponentModeAsString();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



void vtkThreshold::SetSelectedComponent(int arg0)
{
  vtk::ConvertManagedToNative<::vtkThreshold>(m_instance)->SetSelectedComponent(arg0);
}



int vtkThreshold::GetSelectedComponentMinValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkThreshold>(m_instance)->GetSelectedComponentMinValue();
  return retVal;
}



int vtkThreshold::GetSelectedComponentMaxValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkThreshold>(m_instance)->GetSelectedComponentMaxValue();
  return retVal;
}



int vtkThreshold::GetSelectedComponent()
{
  int retVal = vtk::ConvertManagedToNative<::vtkThreshold>(m_instance)->GetSelectedComponent();
  return retVal;
}



void vtkThreshold::SetAllScalars(int arg0)
{
  vtk::ConvertManagedToNative<::vtkThreshold>(m_instance)->SetAllScalars(arg0);
}



int vtkThreshold::GetAllScalars()
{
  int retVal = vtk::ConvertManagedToNative<::vtkThreshold>(m_instance)->GetAllScalars();
  return retVal;
}



void vtkThreshold::AllScalarsOn()
{
  vtk::ConvertManagedToNative<::vtkThreshold>(m_instance)->AllScalarsOn();
}



void vtkThreshold::AllScalarsOff()
{
  vtk::ConvertManagedToNative<::vtkThreshold>(m_instance)->AllScalarsOff();
}



  vtkThreshold::vtkThreshold(System::IntPtr native, bool bConst) : vtkUnstructuredGridAlgorithm(native, bConst) {}



  vtkThreshold::vtkThreshold(bool donothing) : vtkUnstructuredGridAlgorithm(donothing) {}



  vtkThreshold::vtkThreshold() : vtkUnstructuredGridAlgorithm(false) {
  this->SetNativePointer(IntPtr(::vtkThreshold::New()));
}



  vtkThreshold::~vtkThreshold() { }





} // end namespace vtkGraphics
