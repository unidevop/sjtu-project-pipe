

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkMaskPointsDotNet.h"

// native includes
#include "strstream"
#include "vtkMaskPoints.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkMaskPoints::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkMaskPoints>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkMaskPoints::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkMaskPoints>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkMaskPoints^ vtkMaskPoints::NewInstance()
{
  ::vtkMaskPoints* retVal = static_cast<::vtkMaskPoints*>(vtk::ConvertManagedToNative<::vtkMaskPoints>(m_instance)->NewInstance());
  return gcnew vtkMaskPoints(IntPtr(retVal), false);
}



vtkMaskPoints^ vtkMaskPoints::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkMaskPoints* retVal = static_cast<::vtkMaskPoints*>(::vtkMaskPoints::SafeDownCast(oWrap));
  return gcnew vtkMaskPoints(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkMaskPoints::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkMaskPoints>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkMaskPoints::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkMaskPoints>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkMaskPoints::SetOnRatio(int arg0)
{
  vtk::ConvertManagedToNative<::vtkMaskPoints>(m_instance)->SetOnRatio(arg0);
}



int vtkMaskPoints::GetOnRatioMinValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkMaskPoints>(m_instance)->GetOnRatioMinValue();
  return retVal;
}



int vtkMaskPoints::GetOnRatioMaxValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkMaskPoints>(m_instance)->GetOnRatioMaxValue();
  return retVal;
}



int vtkMaskPoints::GetOnRatio()
{
  int retVal = vtk::ConvertManagedToNative<::vtkMaskPoints>(m_instance)->GetOnRatio();
  return retVal;
}



void vtkMaskPoints::SetMaximumNumberOfPoints(int arg0)
{
  vtk::ConvertManagedToNative<::vtkMaskPoints>(m_instance)->SetMaximumNumberOfPoints(arg0);
}



int vtkMaskPoints::GetMaximumNumberOfPointsMinValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkMaskPoints>(m_instance)->GetMaximumNumberOfPointsMinValue();
  return retVal;
}



int vtkMaskPoints::GetMaximumNumberOfPointsMaxValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkMaskPoints>(m_instance)->GetMaximumNumberOfPointsMaxValue();
  return retVal;
}



int vtkMaskPoints::GetMaximumNumberOfPoints()
{
  int retVal = vtk::ConvertManagedToNative<::vtkMaskPoints>(m_instance)->GetMaximumNumberOfPoints();
  return retVal;
}



void vtkMaskPoints::SetOffset(int arg0)
{
  vtk::ConvertManagedToNative<::vtkMaskPoints>(m_instance)->SetOffset(arg0);
}



int vtkMaskPoints::GetOffsetMinValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkMaskPoints>(m_instance)->GetOffsetMinValue();
  return retVal;
}



int vtkMaskPoints::GetOffsetMaxValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkMaskPoints>(m_instance)->GetOffsetMaxValue();
  return retVal;
}



int vtkMaskPoints::GetOffset()
{
  int retVal = vtk::ConvertManagedToNative<::vtkMaskPoints>(m_instance)->GetOffset();
  return retVal;
}



void vtkMaskPoints::SetRandomMode(int arg0)
{
  vtk::ConvertManagedToNative<::vtkMaskPoints>(m_instance)->SetRandomMode(arg0);
}



int vtkMaskPoints::GetRandomMode()
{
  int retVal = vtk::ConvertManagedToNative<::vtkMaskPoints>(m_instance)->GetRandomMode();
  return retVal;
}



void vtkMaskPoints::RandomModeOn()
{
  vtk::ConvertManagedToNative<::vtkMaskPoints>(m_instance)->RandomModeOn();
}



void vtkMaskPoints::RandomModeOff()
{
  vtk::ConvertManagedToNative<::vtkMaskPoints>(m_instance)->RandomModeOff();
}



void vtkMaskPoints::SetGenerateVertices(int arg0)
{
  vtk::ConvertManagedToNative<::vtkMaskPoints>(m_instance)->SetGenerateVertices(arg0);
}



int vtkMaskPoints::GetGenerateVertices()
{
  int retVal = vtk::ConvertManagedToNative<::vtkMaskPoints>(m_instance)->GetGenerateVertices();
  return retVal;
}



void vtkMaskPoints::GenerateVerticesOn()
{
  vtk::ConvertManagedToNative<::vtkMaskPoints>(m_instance)->GenerateVerticesOn();
}



void vtkMaskPoints::GenerateVerticesOff()
{
  vtk::ConvertManagedToNative<::vtkMaskPoints>(m_instance)->GenerateVerticesOff();
}



  vtkMaskPoints::vtkMaskPoints(System::IntPtr native, bool bConst) : vtkPolyDataAlgorithm(native, bConst) {}



  vtkMaskPoints::vtkMaskPoints(bool donothing) : vtkPolyDataAlgorithm(donothing) {}



  vtkMaskPoints::vtkMaskPoints() : vtkPolyDataAlgorithm(false) {
  this->SetNativePointer(IntPtr(::vtkMaskPoints::New()));
}



  vtkMaskPoints::~vtkMaskPoints() { }





} // end namespace vtkGraphics
