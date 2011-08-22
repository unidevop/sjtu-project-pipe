

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkSelectPolyDataDotNet.h"

// native includes
#include "strstream"
#include "vtkSelectPolyData.h"
#include "vtkObject.h"
#include "vtkPoints.h"
#include "vtkPolyData.h"

using namespace System;

namespace vtk {

System::String^ vtkSelectPolyData::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkSelectPolyData>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkSelectPolyData::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkSelectPolyData>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkSelectPolyData^ vtkSelectPolyData::NewInstance()
{
  ::vtkSelectPolyData* retVal = static_cast<::vtkSelectPolyData*>(vtk::ConvertManagedToNative<::vtkSelectPolyData>(m_instance)->NewInstance());
  return gcnew vtkSelectPolyData(IntPtr(retVal), false);
}



vtkSelectPolyData^ vtkSelectPolyData::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkSelectPolyData* retVal = static_cast<::vtkSelectPolyData*>(::vtkSelectPolyData::SafeDownCast(oWrap));
  return gcnew vtkSelectPolyData(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkSelectPolyData::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkSelectPolyData>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkSelectPolyData::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkSelectPolyData>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkSelectPolyData::SetGenerateSelectionScalars(int arg0)
{
  vtk::ConvertManagedToNative<::vtkSelectPolyData>(m_instance)->SetGenerateSelectionScalars(arg0);
}



int vtkSelectPolyData::GetGenerateSelectionScalars()
{
  int retVal = vtk::ConvertManagedToNative<::vtkSelectPolyData>(m_instance)->GetGenerateSelectionScalars();
  return retVal;
}



void vtkSelectPolyData::GenerateSelectionScalarsOn()
{
  vtk::ConvertManagedToNative<::vtkSelectPolyData>(m_instance)->GenerateSelectionScalarsOn();
}



void vtkSelectPolyData::GenerateSelectionScalarsOff()
{
  vtk::ConvertManagedToNative<::vtkSelectPolyData>(m_instance)->GenerateSelectionScalarsOff();
}



void vtkSelectPolyData::SetInsideOut(int arg0)
{
  vtk::ConvertManagedToNative<::vtkSelectPolyData>(m_instance)->SetInsideOut(arg0);
}



int vtkSelectPolyData::GetInsideOut()
{
  int retVal = vtk::ConvertManagedToNative<::vtkSelectPolyData>(m_instance)->GetInsideOut();
  return retVal;
}



void vtkSelectPolyData::InsideOutOn()
{
  vtk::ConvertManagedToNative<::vtkSelectPolyData>(m_instance)->InsideOutOn();
}



void vtkSelectPolyData::InsideOutOff()
{
  vtk::ConvertManagedToNative<::vtkSelectPolyData>(m_instance)->InsideOutOff();
}



void vtkSelectPolyData::SetLoop(vtkPoints^ arg0)
{
  ::vtkPoints* arg0Wrap = vtk::ConvertManagedToNative<::vtkPoints>(arg0->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkSelectPolyData>(m_instance)->SetLoop(arg0Wrap);
}



vtkPoints^ vtkSelectPolyData::GetLoop()
{
  ::vtkPoints* retVal = static_cast<::vtkPoints*>(vtk::ConvertManagedToNative<::vtkSelectPolyData>(m_instance)->GetLoop());
  return gcnew vtkPoints(IntPtr(retVal), false);
}



void vtkSelectPolyData::SetSelectionMode(int arg0)
{
  vtk::ConvertManagedToNative<::vtkSelectPolyData>(m_instance)->SetSelectionMode(arg0);
}



int vtkSelectPolyData::GetSelectionModeMinValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkSelectPolyData>(m_instance)->GetSelectionModeMinValue();
  return retVal;
}



int vtkSelectPolyData::GetSelectionModeMaxValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkSelectPolyData>(m_instance)->GetSelectionModeMaxValue();
  return retVal;
}



int vtkSelectPolyData::GetSelectionMode()
{
  int retVal = vtk::ConvertManagedToNative<::vtkSelectPolyData>(m_instance)->GetSelectionMode();
  return retVal;
}



void vtkSelectPolyData::SetSelectionModeToSmallestRegion()
{
  vtk::ConvertManagedToNative<::vtkSelectPolyData>(m_instance)->SetSelectionModeToSmallestRegion();
}



void vtkSelectPolyData::SetSelectionModeToLargestRegion()
{
  vtk::ConvertManagedToNative<::vtkSelectPolyData>(m_instance)->SetSelectionModeToLargestRegion();
}



void vtkSelectPolyData::SetSelectionModeToClosestPointRegion()
{
  vtk::ConvertManagedToNative<::vtkSelectPolyData>(m_instance)->SetSelectionModeToClosestPointRegion();
}



System::String^ vtkSelectPolyData::GetSelectionModeAsString()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkSelectPolyData>(m_instance)->GetSelectionModeAsString();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



void vtkSelectPolyData::SetGenerateUnselectedOutput(int arg0)
{
  vtk::ConvertManagedToNative<::vtkSelectPolyData>(m_instance)->SetGenerateUnselectedOutput(arg0);
}



int vtkSelectPolyData::GetGenerateUnselectedOutput()
{
  int retVal = vtk::ConvertManagedToNative<::vtkSelectPolyData>(m_instance)->GetGenerateUnselectedOutput();
  return retVal;
}



void vtkSelectPolyData::GenerateUnselectedOutputOn()
{
  vtk::ConvertManagedToNative<::vtkSelectPolyData>(m_instance)->GenerateUnselectedOutputOn();
}



void vtkSelectPolyData::GenerateUnselectedOutputOff()
{
  vtk::ConvertManagedToNative<::vtkSelectPolyData>(m_instance)->GenerateUnselectedOutputOff();
}



vtkPolyData^ vtkSelectPolyData::GetUnselectedOutput()
{
  ::vtkPolyData* retVal = static_cast<::vtkPolyData*>(vtk::ConvertManagedToNative<::vtkSelectPolyData>(m_instance)->GetUnselectedOutput());
  return gcnew vtkPolyData(IntPtr(retVal), false);
}



vtkPolyData^ vtkSelectPolyData::GetSelectionEdges()
{
  ::vtkPolyData* retVal = static_cast<::vtkPolyData*>(vtk::ConvertManagedToNative<::vtkSelectPolyData>(m_instance)->GetSelectionEdges());
  return gcnew vtkPolyData(IntPtr(retVal), false);
}



unsigned long vtkSelectPolyData::GetMTime()
{
  unsigned long retVal = vtk::ConvertManagedToNative<::vtkSelectPolyData>(m_instance)->GetMTime();
  return retVal;
}



  vtkSelectPolyData::vtkSelectPolyData(System::IntPtr native, bool bConst) : vtkPolyDataAlgorithm(native, bConst) {}



  vtkSelectPolyData::vtkSelectPolyData(bool donothing) : vtkPolyDataAlgorithm(donothing) {}



  vtkSelectPolyData::vtkSelectPolyData() : vtkPolyDataAlgorithm(false) {
  this->SetNativePointer(IntPtr(::vtkSelectPolyData::New()));
}



  vtkSelectPolyData::~vtkSelectPolyData() { }





} // end namespace vtkGraphics
