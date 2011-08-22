

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkProjectedTerrainPathDotNet.h"

// native includes
#include "strstream"
#include "vtkProjectedTerrainPath.h"
#include "vtkImageData.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkProjectedTerrainPath::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkProjectedTerrainPath>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkProjectedTerrainPath::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkProjectedTerrainPath>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkProjectedTerrainPath^ vtkProjectedTerrainPath::NewInstance()
{
  ::vtkProjectedTerrainPath* retVal = static_cast<::vtkProjectedTerrainPath*>(vtk::ConvertManagedToNative<::vtkProjectedTerrainPath>(m_instance)->NewInstance());
  return gcnew vtkProjectedTerrainPath(IntPtr(retVal), false);
}



vtkProjectedTerrainPath^ vtkProjectedTerrainPath::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkProjectedTerrainPath* retVal = static_cast<::vtkProjectedTerrainPath*>(::vtkProjectedTerrainPath::SafeDownCast(oWrap));
  return gcnew vtkProjectedTerrainPath(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkProjectedTerrainPath::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkProjectedTerrainPath>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkProjectedTerrainPath::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkProjectedTerrainPath>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkProjectedTerrainPath::SetSource(vtkImageData^ source)
{
  ::vtkImageData* sourceWrap = vtk::ConvertManagedToNative<::vtkImageData>(source->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkProjectedTerrainPath>(m_instance)->SetSource(sourceWrap);
}



vtkImageData^ vtkProjectedTerrainPath::GetSource()
{
  ::vtkImageData* retVal = static_cast<::vtkImageData*>(vtk::ConvertManagedToNative<::vtkProjectedTerrainPath>(m_instance)->GetSource());
  return gcnew vtkImageData(IntPtr(retVal), false);
}



void vtkProjectedTerrainPath::SetProjectionMode(int arg0)
{
  vtk::ConvertManagedToNative<::vtkProjectedTerrainPath>(m_instance)->SetProjectionMode(arg0);
}



int vtkProjectedTerrainPath::GetProjectionModeMinValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkProjectedTerrainPath>(m_instance)->GetProjectionModeMinValue();
  return retVal;
}



int vtkProjectedTerrainPath::GetProjectionModeMaxValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkProjectedTerrainPath>(m_instance)->GetProjectionModeMaxValue();
  return retVal;
}



int vtkProjectedTerrainPath::GetProjectionMode()
{
  int retVal = vtk::ConvertManagedToNative<::vtkProjectedTerrainPath>(m_instance)->GetProjectionMode();
  return retVal;
}



void vtkProjectedTerrainPath::SetProjectionModeToSimple()
{
  vtk::ConvertManagedToNative<::vtkProjectedTerrainPath>(m_instance)->SetProjectionModeToSimple();
}



void vtkProjectedTerrainPath::SetProjectionModeToNonOccluded()
{
  vtk::ConvertManagedToNative<::vtkProjectedTerrainPath>(m_instance)->SetProjectionModeToNonOccluded();
}



void vtkProjectedTerrainPath::SetProjectionModeToHug()
{
  vtk::ConvertManagedToNative<::vtkProjectedTerrainPath>(m_instance)->SetProjectionModeToHug();
}



void vtkProjectedTerrainPath::SetHeightOffset(double arg0)
{
  vtk::ConvertManagedToNative<::vtkProjectedTerrainPath>(m_instance)->SetHeightOffset(arg0);
}



double vtkProjectedTerrainPath::GetHeightOffset()
{
  double retVal = vtk::ConvertManagedToNative<::vtkProjectedTerrainPath>(m_instance)->GetHeightOffset();
  return retVal;
}



void vtkProjectedTerrainPath::SetHeightTolerance(double arg0)
{
  vtk::ConvertManagedToNative<::vtkProjectedTerrainPath>(m_instance)->SetHeightTolerance(arg0);
}



double vtkProjectedTerrainPath::GetHeightToleranceMinValue()
{
  double retVal = vtk::ConvertManagedToNative<::vtkProjectedTerrainPath>(m_instance)->GetHeightToleranceMinValue();
  return retVal;
}



double vtkProjectedTerrainPath::GetHeightToleranceMaxValue()
{
  double retVal = vtk::ConvertManagedToNative<::vtkProjectedTerrainPath>(m_instance)->GetHeightToleranceMaxValue();
  return retVal;
}



double vtkProjectedTerrainPath::GetHeightTolerance()
{
  double retVal = vtk::ConvertManagedToNative<::vtkProjectedTerrainPath>(m_instance)->GetHeightTolerance();
  return retVal;
}



void vtkProjectedTerrainPath::SetMaximumNumberOfLines(int arg0)
{
  vtk::ConvertManagedToNative<::vtkProjectedTerrainPath>(m_instance)->SetMaximumNumberOfLines(arg0);
}



int vtkProjectedTerrainPath::GetMaximumNumberOfLinesMinValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkProjectedTerrainPath>(m_instance)->GetMaximumNumberOfLinesMinValue();
  return retVal;
}



int vtkProjectedTerrainPath::GetMaximumNumberOfLinesMaxValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkProjectedTerrainPath>(m_instance)->GetMaximumNumberOfLinesMaxValue();
  return retVal;
}



int vtkProjectedTerrainPath::GetMaximumNumberOfLines()
{
  int retVal = vtk::ConvertManagedToNative<::vtkProjectedTerrainPath>(m_instance)->GetMaximumNumberOfLines();
  return retVal;
}



  vtkProjectedTerrainPath::vtkProjectedTerrainPath(System::IntPtr native, bool bConst) : vtkPolyDataAlgorithm(native, bConst) {}



  vtkProjectedTerrainPath::vtkProjectedTerrainPath(bool donothing) : vtkPolyDataAlgorithm(donothing) {}



  vtkProjectedTerrainPath::vtkProjectedTerrainPath() : vtkPolyDataAlgorithm(false) {
  this->SetNativePointer(IntPtr(::vtkProjectedTerrainPath::New()));
}



  vtkProjectedTerrainPath::~vtkProjectedTerrainPath() { }





} // end namespace vtkHybrid
