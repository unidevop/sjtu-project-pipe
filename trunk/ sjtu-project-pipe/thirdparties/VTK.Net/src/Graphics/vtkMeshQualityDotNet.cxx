

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkMeshQualityDotNet.h"

// native includes
#include "strstream"
#include "vtkMeshQuality.h"
#include "vtkCell.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkMeshQuality::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkMeshQuality>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkMeshQuality::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkMeshQuality>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




System::String^ vtkMeshQuality::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkMeshQuality>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkMeshQuality::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkMeshQuality>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkMeshQuality^ vtkMeshQuality::NewInstance()
{
  ::vtkMeshQuality* retVal = static_cast<::vtkMeshQuality*>(vtk::ConvertManagedToNative<::vtkMeshQuality>(m_instance)->NewInstance());
  return gcnew vtkMeshQuality(IntPtr(retVal), false);
}



vtkMeshQuality^ vtkMeshQuality::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkMeshQuality* retVal = static_cast<::vtkMeshQuality*>(::vtkMeshQuality::SafeDownCast(oWrap));
  return gcnew vtkMeshQuality(IntPtr(retVal), false);
}



void vtkMeshQuality::SetSaveCellQuality(int arg0)
{
  vtk::ConvertManagedToNative<::vtkMeshQuality>(m_instance)->SetSaveCellQuality(arg0);
}



int vtkMeshQuality::GetSaveCellQuality()
{
  int retVal = vtk::ConvertManagedToNative<::vtkMeshQuality>(m_instance)->GetSaveCellQuality();
  return retVal;
}



void vtkMeshQuality::SaveCellQualityOn()
{
  vtk::ConvertManagedToNative<::vtkMeshQuality>(m_instance)->SaveCellQualityOn();
}



void vtkMeshQuality::SaveCellQualityOff()
{
  vtk::ConvertManagedToNative<::vtkMeshQuality>(m_instance)->SaveCellQualityOff();
}



void vtkMeshQuality::SetTriangleQualityMeasure(int arg0)
{
  vtk::ConvertManagedToNative<::vtkMeshQuality>(m_instance)->SetTriangleQualityMeasure(arg0);
}



int vtkMeshQuality::GetTriangleQualityMeasure()
{
  int retVal = vtk::ConvertManagedToNative<::vtkMeshQuality>(m_instance)->GetTriangleQualityMeasure();
  return retVal;
}



void vtkMeshQuality::SetTriangleQualityMeasureToEdgeRatio()
{
  vtk::ConvertManagedToNative<::vtkMeshQuality>(m_instance)->SetTriangleQualityMeasureToEdgeRatio();
}



void vtkMeshQuality::SetTriangleQualityMeasureToAspectRatio()
{
  vtk::ConvertManagedToNative<::vtkMeshQuality>(m_instance)->SetTriangleQualityMeasureToAspectRatio();
}



void vtkMeshQuality::SetTriangleQualityMeasureToRadiusRatio()
{
  vtk::ConvertManagedToNative<::vtkMeshQuality>(m_instance)->SetTriangleQualityMeasureToRadiusRatio();
}



void vtkMeshQuality::SetTriangleQualityMeasureToFrobeniusNorm()
{
  vtk::ConvertManagedToNative<::vtkMeshQuality>(m_instance)->SetTriangleQualityMeasureToFrobeniusNorm();
}



void vtkMeshQuality::SetTriangleQualityMeasureToMinAngle()
{
  vtk::ConvertManagedToNative<::vtkMeshQuality>(m_instance)->SetTriangleQualityMeasureToMinAngle();
}



void vtkMeshQuality::SetQuadQualityMeasure(int arg0)
{
  vtk::ConvertManagedToNative<::vtkMeshQuality>(m_instance)->SetQuadQualityMeasure(arg0);
}



int vtkMeshQuality::GetQuadQualityMeasure()
{
  int retVal = vtk::ConvertManagedToNative<::vtkMeshQuality>(m_instance)->GetQuadQualityMeasure();
  return retVal;
}



void vtkMeshQuality::SetQuadQualityMeasureToEdgeRatio()
{
  vtk::ConvertManagedToNative<::vtkMeshQuality>(m_instance)->SetQuadQualityMeasureToEdgeRatio();
}



void vtkMeshQuality::SetQuadQualityMeasureToAspectRatio()
{
  vtk::ConvertManagedToNative<::vtkMeshQuality>(m_instance)->SetQuadQualityMeasureToAspectRatio();
}



void vtkMeshQuality::SetQuadQualityMeasureToRadiusRatio()
{
  vtk::ConvertManagedToNative<::vtkMeshQuality>(m_instance)->SetQuadQualityMeasureToRadiusRatio();
}



void vtkMeshQuality::SetQuadQualityMeasureToMedFrobeniusNorm()
{
  vtk::ConvertManagedToNative<::vtkMeshQuality>(m_instance)->SetQuadQualityMeasureToMedFrobeniusNorm();
}



void vtkMeshQuality::SetQuadQualityMeasureToMaxFrobeniusNorm()
{
  vtk::ConvertManagedToNative<::vtkMeshQuality>(m_instance)->SetQuadQualityMeasureToMaxFrobeniusNorm();
}



void vtkMeshQuality::SetQuadQualityMeasureToMinAngle()
{
  vtk::ConvertManagedToNative<::vtkMeshQuality>(m_instance)->SetQuadQualityMeasureToMinAngle();
}



void vtkMeshQuality::SetTetQualityMeasure(int arg0)
{
  vtk::ConvertManagedToNative<::vtkMeshQuality>(m_instance)->SetTetQualityMeasure(arg0);
}



int vtkMeshQuality::GetTetQualityMeasure()
{
  int retVal = vtk::ConvertManagedToNative<::vtkMeshQuality>(m_instance)->GetTetQualityMeasure();
  return retVal;
}



void vtkMeshQuality::SetTetQualityMeasureToEdgeRatio()
{
  vtk::ConvertManagedToNative<::vtkMeshQuality>(m_instance)->SetTetQualityMeasureToEdgeRatio();
}



void vtkMeshQuality::SetTetQualityMeasureToAspectRatio()
{
  vtk::ConvertManagedToNative<::vtkMeshQuality>(m_instance)->SetTetQualityMeasureToAspectRatio();
}



void vtkMeshQuality::SetTetQualityMeasureToRadiusRatio()
{
  vtk::ConvertManagedToNative<::vtkMeshQuality>(m_instance)->SetTetQualityMeasureToRadiusRatio();
}



void vtkMeshQuality::SetTetQualityMeasureToFrobeniusNorm()
{
  vtk::ConvertManagedToNative<::vtkMeshQuality>(m_instance)->SetTetQualityMeasureToFrobeniusNorm();
}



void vtkMeshQuality::SetTetQualityMeasureToMinAngle()
{
  vtk::ConvertManagedToNative<::vtkMeshQuality>(m_instance)->SetTetQualityMeasureToMinAngle();
}



void vtkMeshQuality::SetHexQualityMeasure(int arg0)
{
  vtk::ConvertManagedToNative<::vtkMeshQuality>(m_instance)->SetHexQualityMeasure(arg0);
}



int vtkMeshQuality::GetHexQualityMeasure()
{
  int retVal = vtk::ConvertManagedToNative<::vtkMeshQuality>(m_instance)->GetHexQualityMeasure();
  return retVal;
}



void vtkMeshQuality::SetHexQualityMeasureToEdgeRatio()
{
  vtk::ConvertManagedToNative<::vtkMeshQuality>(m_instance)->SetHexQualityMeasureToEdgeRatio();
}



double vtkMeshQuality::TriangleEdgeRatio(vtkCell^ cell)
{
  ::vtkCell* cellWrap = vtk::ConvertManagedToNative<::vtkCell>(cell->GetNativePointer());
  double retVal = ::vtkMeshQuality::TriangleEdgeRatio(cellWrap);
  return retVal;
}



double vtkMeshQuality::TriangleAspectRatio(vtkCell^ cell)
{
  ::vtkCell* cellWrap = vtk::ConvertManagedToNative<::vtkCell>(cell->GetNativePointer());
  double retVal = ::vtkMeshQuality::TriangleAspectRatio(cellWrap);
  return retVal;
}



double vtkMeshQuality::TriangleRadiusRatio(vtkCell^ cell)
{
  ::vtkCell* cellWrap = vtk::ConvertManagedToNative<::vtkCell>(cell->GetNativePointer());
  double retVal = ::vtkMeshQuality::TriangleRadiusRatio(cellWrap);
  return retVal;
}



double vtkMeshQuality::TriangleFrobeniusNorm(vtkCell^ cell)
{
  ::vtkCell* cellWrap = vtk::ConvertManagedToNative<::vtkCell>(cell->GetNativePointer());
  double retVal = ::vtkMeshQuality::TriangleFrobeniusNorm(cellWrap);
  return retVal;
}



double vtkMeshQuality::TriangleMinAngle(vtkCell^ cell)
{
  ::vtkCell* cellWrap = vtk::ConvertManagedToNative<::vtkCell>(cell->GetNativePointer());
  double retVal = ::vtkMeshQuality::TriangleMinAngle(cellWrap);
  return retVal;
}



double vtkMeshQuality::QuadEdgeRatio(vtkCell^ cell)
{
  ::vtkCell* cellWrap = vtk::ConvertManagedToNative<::vtkCell>(cell->GetNativePointer());
  double retVal = ::vtkMeshQuality::QuadEdgeRatio(cellWrap);
  return retVal;
}



double vtkMeshQuality::QuadAspectRatio(vtkCell^ cell)
{
  ::vtkCell* cellWrap = vtk::ConvertManagedToNative<::vtkCell>(cell->GetNativePointer());
  double retVal = ::vtkMeshQuality::QuadAspectRatio(cellWrap);
  return retVal;
}



double vtkMeshQuality::QuadRadiusRatio(vtkCell^ cell)
{
  ::vtkCell* cellWrap = vtk::ConvertManagedToNative<::vtkCell>(cell->GetNativePointer());
  double retVal = ::vtkMeshQuality::QuadRadiusRatio(cellWrap);
  return retVal;
}



double vtkMeshQuality::QuadMedFrobeniusNorm(vtkCell^ cell)
{
  ::vtkCell* cellWrap = vtk::ConvertManagedToNative<::vtkCell>(cell->GetNativePointer());
  double retVal = ::vtkMeshQuality::QuadMedFrobeniusNorm(cellWrap);
  return retVal;
}



double vtkMeshQuality::QuadMaxFrobeniusNorm(vtkCell^ cell)
{
  ::vtkCell* cellWrap = vtk::ConvertManagedToNative<::vtkCell>(cell->GetNativePointer());
  double retVal = ::vtkMeshQuality::QuadMaxFrobeniusNorm(cellWrap);
  return retVal;
}



double vtkMeshQuality::QuadMinAngle(vtkCell^ cell)
{
  ::vtkCell* cellWrap = vtk::ConvertManagedToNative<::vtkCell>(cell->GetNativePointer());
  double retVal = ::vtkMeshQuality::QuadMinAngle(cellWrap);
  return retVal;
}



double vtkMeshQuality::TetEdgeRatio(vtkCell^ cell)
{
  ::vtkCell* cellWrap = vtk::ConvertManagedToNative<::vtkCell>(cell->GetNativePointer());
  double retVal = ::vtkMeshQuality::TetEdgeRatio(cellWrap);
  return retVal;
}



double vtkMeshQuality::TetAspectRatio(vtkCell^ cell)
{
  ::vtkCell* cellWrap = vtk::ConvertManagedToNative<::vtkCell>(cell->GetNativePointer());
  double retVal = ::vtkMeshQuality::TetAspectRatio(cellWrap);
  return retVal;
}



double vtkMeshQuality::TetRadiusRatio(vtkCell^ cell)
{
  ::vtkCell* cellWrap = vtk::ConvertManagedToNative<::vtkCell>(cell->GetNativePointer());
  double retVal = ::vtkMeshQuality::TetRadiusRatio(cellWrap);
  return retVal;
}



double vtkMeshQuality::TetFrobeniusNorm(vtkCell^ cell)
{
  ::vtkCell* cellWrap = vtk::ConvertManagedToNative<::vtkCell>(cell->GetNativePointer());
  double retVal = ::vtkMeshQuality::TetFrobeniusNorm(cellWrap);
  return retVal;
}



double vtkMeshQuality::TetMinAngle(vtkCell^ cell)
{
  ::vtkCell* cellWrap = vtk::ConvertManagedToNative<::vtkCell>(cell->GetNativePointer());
  double retVal = ::vtkMeshQuality::TetMinAngle(cellWrap);
  return retVal;
}



double vtkMeshQuality::HexEdgeRatio(vtkCell^ cell)
{
  ::vtkCell* cellWrap = vtk::ConvertManagedToNative<::vtkCell>(cell->GetNativePointer());
  double retVal = ::vtkMeshQuality::HexEdgeRatio(cellWrap);
  return retVal;
}



void vtkMeshQuality::SetRatio(int r)
{
  vtk::ConvertManagedToNative<::vtkMeshQuality>(m_instance)->SetRatio(r);
}



int vtkMeshQuality::GetRatio()
{
  int retVal = vtk::ConvertManagedToNative<::vtkMeshQuality>(m_instance)->GetRatio();
  return retVal;
}



void vtkMeshQuality::RatioOn()
{
  vtk::ConvertManagedToNative<::vtkMeshQuality>(m_instance)->RatioOn();
}



void vtkMeshQuality::RatioOff()
{
  vtk::ConvertManagedToNative<::vtkMeshQuality>(m_instance)->RatioOff();
}



void vtkMeshQuality::SetVolume(int cv)
{
  vtk::ConvertManagedToNative<::vtkMeshQuality>(m_instance)->SetVolume(cv);
}



int vtkMeshQuality::GetVolume()
{
  int retVal = vtk::ConvertManagedToNative<::vtkMeshQuality>(m_instance)->GetVolume();
  return retVal;
}



void vtkMeshQuality::VolumeOn()
{
  vtk::ConvertManagedToNative<::vtkMeshQuality>(m_instance)->VolumeOn();
}



void vtkMeshQuality::VolumeOff()
{
  vtk::ConvertManagedToNative<::vtkMeshQuality>(m_instance)->VolumeOff();
}



void vtkMeshQuality::SetCompatibilityMode(int cm)
{
  vtk::ConvertManagedToNative<::vtkMeshQuality>(m_instance)->SetCompatibilityMode(cm);
}



int vtkMeshQuality::GetCompatibilityMode()
{
  int retVal = vtk::ConvertManagedToNative<::vtkMeshQuality>(m_instance)->GetCompatibilityMode();
  return retVal;
}



void vtkMeshQuality::CompatibilityModeOn()
{
  vtk::ConvertManagedToNative<::vtkMeshQuality>(m_instance)->CompatibilityModeOn();
}



void vtkMeshQuality::CompatibilityModeOff()
{
  vtk::ConvertManagedToNative<::vtkMeshQuality>(m_instance)->CompatibilityModeOff();
}



  vtkMeshQuality::vtkMeshQuality(System::IntPtr native, bool bConst) : vtkDataSetAlgorithm(native, bConst) {}



  vtkMeshQuality::vtkMeshQuality(bool donothing) : vtkDataSetAlgorithm(donothing) {}



  vtkMeshQuality::vtkMeshQuality() : vtkDataSetAlgorithm(false) {
  this->SetNativePointer(IntPtr(::vtkMeshQuality::New()));
}



  vtkMeshQuality::~vtkMeshQuality() { }





} // end namespace vtkGraphics
