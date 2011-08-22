

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkGreedyTerrainDecimationDotNet.h"

// native includes
#include "strstream"
#include "vtkGreedyTerrainDecimation.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkGreedyTerrainDecimation::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkGreedyTerrainDecimation>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkGreedyTerrainDecimation::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkGreedyTerrainDecimation>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkGreedyTerrainDecimation^ vtkGreedyTerrainDecimation::NewInstance()
{
  ::vtkGreedyTerrainDecimation* retVal = static_cast<::vtkGreedyTerrainDecimation*>(vtk::ConvertManagedToNative<::vtkGreedyTerrainDecimation>(m_instance)->NewInstance());
  return gcnew vtkGreedyTerrainDecimation(IntPtr(retVal), false);
}



vtkGreedyTerrainDecimation^ vtkGreedyTerrainDecimation::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkGreedyTerrainDecimation* retVal = static_cast<::vtkGreedyTerrainDecimation*>(::vtkGreedyTerrainDecimation::SafeDownCast(oWrap));
  return gcnew vtkGreedyTerrainDecimation(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkGreedyTerrainDecimation::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkGreedyTerrainDecimation>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkGreedyTerrainDecimation::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkGreedyTerrainDecimation>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkGreedyTerrainDecimation::SetErrorMeasure(int arg0)
{
  vtk::ConvertManagedToNative<::vtkGreedyTerrainDecimation>(m_instance)->SetErrorMeasure(arg0);
}



int vtkGreedyTerrainDecimation::GetErrorMeasureMinValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkGreedyTerrainDecimation>(m_instance)->GetErrorMeasureMinValue();
  return retVal;
}



int vtkGreedyTerrainDecimation::GetErrorMeasureMaxValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkGreedyTerrainDecimation>(m_instance)->GetErrorMeasureMaxValue();
  return retVal;
}



int vtkGreedyTerrainDecimation::GetErrorMeasure()
{
  int retVal = vtk::ConvertManagedToNative<::vtkGreedyTerrainDecimation>(m_instance)->GetErrorMeasure();
  return retVal;
}



void vtkGreedyTerrainDecimation::SetErrorMeasureToNumberOfTriangles()
{
  vtk::ConvertManagedToNative<::vtkGreedyTerrainDecimation>(m_instance)->SetErrorMeasureToNumberOfTriangles();
}



void vtkGreedyTerrainDecimation::SetErrorMeasureToSpecifiedReduction()
{
  vtk::ConvertManagedToNative<::vtkGreedyTerrainDecimation>(m_instance)->SetErrorMeasureToSpecifiedReduction();
}



void vtkGreedyTerrainDecimation::SetErrorMeasureToAbsoluteError()
{
  vtk::ConvertManagedToNative<::vtkGreedyTerrainDecimation>(m_instance)->SetErrorMeasureToAbsoluteError();
}



void vtkGreedyTerrainDecimation::SetErrorMeasureToRelativeError()
{
  vtk::ConvertManagedToNative<::vtkGreedyTerrainDecimation>(m_instance)->SetErrorMeasureToRelativeError();
}



void vtkGreedyTerrainDecimation::SetNumberOfTriangles(int arg0)
{
  vtk::ConvertManagedToNative<::vtkGreedyTerrainDecimation>(m_instance)->SetNumberOfTriangles(arg0);
}



int vtkGreedyTerrainDecimation::GetNumberOfTrianglesMinValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkGreedyTerrainDecimation>(m_instance)->GetNumberOfTrianglesMinValue();
  return retVal;
}



int vtkGreedyTerrainDecimation::GetNumberOfTrianglesMaxValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkGreedyTerrainDecimation>(m_instance)->GetNumberOfTrianglesMaxValue();
  return retVal;
}



int vtkGreedyTerrainDecimation::GetNumberOfTriangles()
{
  int retVal = vtk::ConvertManagedToNative<::vtkGreedyTerrainDecimation>(m_instance)->GetNumberOfTriangles();
  return retVal;
}



void vtkGreedyTerrainDecimation::SetReduction(double arg0)
{
  vtk::ConvertManagedToNative<::vtkGreedyTerrainDecimation>(m_instance)->SetReduction(arg0);
}



double vtkGreedyTerrainDecimation::GetReductionMinValue()
{
  double retVal = vtk::ConvertManagedToNative<::vtkGreedyTerrainDecimation>(m_instance)->GetReductionMinValue();
  return retVal;
}



double vtkGreedyTerrainDecimation::GetReductionMaxValue()
{
  double retVal = vtk::ConvertManagedToNative<::vtkGreedyTerrainDecimation>(m_instance)->GetReductionMaxValue();
  return retVal;
}



double vtkGreedyTerrainDecimation::GetReduction()
{
  double retVal = vtk::ConvertManagedToNative<::vtkGreedyTerrainDecimation>(m_instance)->GetReduction();
  return retVal;
}



void vtkGreedyTerrainDecimation::SetAbsoluteError(double arg0)
{
  vtk::ConvertManagedToNative<::vtkGreedyTerrainDecimation>(m_instance)->SetAbsoluteError(arg0);
}



double vtkGreedyTerrainDecimation::GetAbsoluteErrorMinValue()
{
  double retVal = vtk::ConvertManagedToNative<::vtkGreedyTerrainDecimation>(m_instance)->GetAbsoluteErrorMinValue();
  return retVal;
}



double vtkGreedyTerrainDecimation::GetAbsoluteErrorMaxValue()
{
  double retVal = vtk::ConvertManagedToNative<::vtkGreedyTerrainDecimation>(m_instance)->GetAbsoluteErrorMaxValue();
  return retVal;
}



double vtkGreedyTerrainDecimation::GetAbsoluteError()
{
  double retVal = vtk::ConvertManagedToNative<::vtkGreedyTerrainDecimation>(m_instance)->GetAbsoluteError();
  return retVal;
}



void vtkGreedyTerrainDecimation::SetRelativeError(double arg0)
{
  vtk::ConvertManagedToNative<::vtkGreedyTerrainDecimation>(m_instance)->SetRelativeError(arg0);
}



double vtkGreedyTerrainDecimation::GetRelativeErrorMinValue()
{
  double retVal = vtk::ConvertManagedToNative<::vtkGreedyTerrainDecimation>(m_instance)->GetRelativeErrorMinValue();
  return retVal;
}



double vtkGreedyTerrainDecimation::GetRelativeErrorMaxValue()
{
  double retVal = vtk::ConvertManagedToNative<::vtkGreedyTerrainDecimation>(m_instance)->GetRelativeErrorMaxValue();
  return retVal;
}



double vtkGreedyTerrainDecimation::GetRelativeError()
{
  double retVal = vtk::ConvertManagedToNative<::vtkGreedyTerrainDecimation>(m_instance)->GetRelativeError();
  return retVal;
}



void vtkGreedyTerrainDecimation::SetBoundaryVertexDeletion(int arg0)
{
  vtk::ConvertManagedToNative<::vtkGreedyTerrainDecimation>(m_instance)->SetBoundaryVertexDeletion(arg0);
}



int vtkGreedyTerrainDecimation::GetBoundaryVertexDeletion()
{
  int retVal = vtk::ConvertManagedToNative<::vtkGreedyTerrainDecimation>(m_instance)->GetBoundaryVertexDeletion();
  return retVal;
}



void vtkGreedyTerrainDecimation::BoundaryVertexDeletionOn()
{
  vtk::ConvertManagedToNative<::vtkGreedyTerrainDecimation>(m_instance)->BoundaryVertexDeletionOn();
}



void vtkGreedyTerrainDecimation::BoundaryVertexDeletionOff()
{
  vtk::ConvertManagedToNative<::vtkGreedyTerrainDecimation>(m_instance)->BoundaryVertexDeletionOff();
}



void vtkGreedyTerrainDecimation::SetComputeNormals(int arg0)
{
  vtk::ConvertManagedToNative<::vtkGreedyTerrainDecimation>(m_instance)->SetComputeNormals(arg0);
}



int vtkGreedyTerrainDecimation::GetComputeNormals()
{
  int retVal = vtk::ConvertManagedToNative<::vtkGreedyTerrainDecimation>(m_instance)->GetComputeNormals();
  return retVal;
}



void vtkGreedyTerrainDecimation::ComputeNormalsOn()
{
  vtk::ConvertManagedToNative<::vtkGreedyTerrainDecimation>(m_instance)->ComputeNormalsOn();
}



void vtkGreedyTerrainDecimation::ComputeNormalsOff()
{
  vtk::ConvertManagedToNative<::vtkGreedyTerrainDecimation>(m_instance)->ComputeNormalsOff();
}



  vtkGreedyTerrainDecimation::vtkGreedyTerrainDecimation(System::IntPtr native, bool bConst) : vtkPolyDataAlgorithm(native, bConst) {}



  vtkGreedyTerrainDecimation::vtkGreedyTerrainDecimation(bool donothing) : vtkPolyDataAlgorithm(donothing) {}



  vtkGreedyTerrainDecimation::vtkGreedyTerrainDecimation() : vtkPolyDataAlgorithm(false) {
  this->SetNativePointer(IntPtr(::vtkGreedyTerrainDecimation::New()));
}



  vtkGreedyTerrainDecimation::~vtkGreedyTerrainDecimation() { }





} // end namespace vtkHybrid
