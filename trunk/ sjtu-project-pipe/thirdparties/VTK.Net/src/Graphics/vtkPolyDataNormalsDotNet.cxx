

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkPolyDataNormalsDotNet.h"

// native includes
#include "strstream"
#include "vtkPolyDataNormals.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkPolyDataNormals::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkPolyDataNormals>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkPolyDataNormals::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkPolyDataNormals>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkPolyDataNormals^ vtkPolyDataNormals::NewInstance()
{
  ::vtkPolyDataNormals* retVal = static_cast<::vtkPolyDataNormals*>(vtk::ConvertManagedToNative<::vtkPolyDataNormals>(m_instance)->NewInstance());
  return gcnew vtkPolyDataNormals(IntPtr(retVal), false);
}



vtkPolyDataNormals^ vtkPolyDataNormals::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkPolyDataNormals* retVal = static_cast<::vtkPolyDataNormals*>(::vtkPolyDataNormals::SafeDownCast(oWrap));
  return gcnew vtkPolyDataNormals(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkPolyDataNormals::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkPolyDataNormals>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkPolyDataNormals::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkPolyDataNormals>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkPolyDataNormals::SetFeatureAngle(double arg0)
{
  vtk::ConvertManagedToNative<::vtkPolyDataNormals>(m_instance)->SetFeatureAngle(arg0);
}



double vtkPolyDataNormals::GetFeatureAngleMinValue()
{
  double retVal = vtk::ConvertManagedToNative<::vtkPolyDataNormals>(m_instance)->GetFeatureAngleMinValue();
  return retVal;
}



double vtkPolyDataNormals::GetFeatureAngleMaxValue()
{
  double retVal = vtk::ConvertManagedToNative<::vtkPolyDataNormals>(m_instance)->GetFeatureAngleMaxValue();
  return retVal;
}



double vtkPolyDataNormals::GetFeatureAngle()
{
  double retVal = vtk::ConvertManagedToNative<::vtkPolyDataNormals>(m_instance)->GetFeatureAngle();
  return retVal;
}



void vtkPolyDataNormals::SetSplitting(int arg0)
{
  vtk::ConvertManagedToNative<::vtkPolyDataNormals>(m_instance)->SetSplitting(arg0);
}



int vtkPolyDataNormals::GetSplitting()
{
  int retVal = vtk::ConvertManagedToNative<::vtkPolyDataNormals>(m_instance)->GetSplitting();
  return retVal;
}



void vtkPolyDataNormals::SplittingOn()
{
  vtk::ConvertManagedToNative<::vtkPolyDataNormals>(m_instance)->SplittingOn();
}



void vtkPolyDataNormals::SplittingOff()
{
  vtk::ConvertManagedToNative<::vtkPolyDataNormals>(m_instance)->SplittingOff();
}



void vtkPolyDataNormals::SetConsistency(int arg0)
{
  vtk::ConvertManagedToNative<::vtkPolyDataNormals>(m_instance)->SetConsistency(arg0);
}



int vtkPolyDataNormals::GetConsistency()
{
  int retVal = vtk::ConvertManagedToNative<::vtkPolyDataNormals>(m_instance)->GetConsistency();
  return retVal;
}



void vtkPolyDataNormals::ConsistencyOn()
{
  vtk::ConvertManagedToNative<::vtkPolyDataNormals>(m_instance)->ConsistencyOn();
}



void vtkPolyDataNormals::ConsistencyOff()
{
  vtk::ConvertManagedToNative<::vtkPolyDataNormals>(m_instance)->ConsistencyOff();
}



void vtkPolyDataNormals::SetAutoOrientNormals(int arg0)
{
  vtk::ConvertManagedToNative<::vtkPolyDataNormals>(m_instance)->SetAutoOrientNormals(arg0);
}



int vtkPolyDataNormals::GetAutoOrientNormals()
{
  int retVal = vtk::ConvertManagedToNative<::vtkPolyDataNormals>(m_instance)->GetAutoOrientNormals();
  return retVal;
}



void vtkPolyDataNormals::AutoOrientNormalsOn()
{
  vtk::ConvertManagedToNative<::vtkPolyDataNormals>(m_instance)->AutoOrientNormalsOn();
}



void vtkPolyDataNormals::AutoOrientNormalsOff()
{
  vtk::ConvertManagedToNative<::vtkPolyDataNormals>(m_instance)->AutoOrientNormalsOff();
}



void vtkPolyDataNormals::SetComputePointNormals(int arg0)
{
  vtk::ConvertManagedToNative<::vtkPolyDataNormals>(m_instance)->SetComputePointNormals(arg0);
}



int vtkPolyDataNormals::GetComputePointNormals()
{
  int retVal = vtk::ConvertManagedToNative<::vtkPolyDataNormals>(m_instance)->GetComputePointNormals();
  return retVal;
}



void vtkPolyDataNormals::ComputePointNormalsOn()
{
  vtk::ConvertManagedToNative<::vtkPolyDataNormals>(m_instance)->ComputePointNormalsOn();
}



void vtkPolyDataNormals::ComputePointNormalsOff()
{
  vtk::ConvertManagedToNative<::vtkPolyDataNormals>(m_instance)->ComputePointNormalsOff();
}



void vtkPolyDataNormals::SetComputeCellNormals(int arg0)
{
  vtk::ConvertManagedToNative<::vtkPolyDataNormals>(m_instance)->SetComputeCellNormals(arg0);
}



int vtkPolyDataNormals::GetComputeCellNormals()
{
  int retVal = vtk::ConvertManagedToNative<::vtkPolyDataNormals>(m_instance)->GetComputeCellNormals();
  return retVal;
}



void vtkPolyDataNormals::ComputeCellNormalsOn()
{
  vtk::ConvertManagedToNative<::vtkPolyDataNormals>(m_instance)->ComputeCellNormalsOn();
}



void vtkPolyDataNormals::ComputeCellNormalsOff()
{
  vtk::ConvertManagedToNative<::vtkPolyDataNormals>(m_instance)->ComputeCellNormalsOff();
}



void vtkPolyDataNormals::SetFlipNormals(int arg0)
{
  vtk::ConvertManagedToNative<::vtkPolyDataNormals>(m_instance)->SetFlipNormals(arg0);
}



int vtkPolyDataNormals::GetFlipNormals()
{
  int retVal = vtk::ConvertManagedToNative<::vtkPolyDataNormals>(m_instance)->GetFlipNormals();
  return retVal;
}



void vtkPolyDataNormals::FlipNormalsOn()
{
  vtk::ConvertManagedToNative<::vtkPolyDataNormals>(m_instance)->FlipNormalsOn();
}



void vtkPolyDataNormals::FlipNormalsOff()
{
  vtk::ConvertManagedToNative<::vtkPolyDataNormals>(m_instance)->FlipNormalsOff();
}



void vtkPolyDataNormals::SetNonManifoldTraversal(int arg0)
{
  vtk::ConvertManagedToNative<::vtkPolyDataNormals>(m_instance)->SetNonManifoldTraversal(arg0);
}



int vtkPolyDataNormals::GetNonManifoldTraversal()
{
  int retVal = vtk::ConvertManagedToNative<::vtkPolyDataNormals>(m_instance)->GetNonManifoldTraversal();
  return retVal;
}



void vtkPolyDataNormals::NonManifoldTraversalOn()
{
  vtk::ConvertManagedToNative<::vtkPolyDataNormals>(m_instance)->NonManifoldTraversalOn();
}



void vtkPolyDataNormals::NonManifoldTraversalOff()
{
  vtk::ConvertManagedToNative<::vtkPolyDataNormals>(m_instance)->NonManifoldTraversalOff();
}



  vtkPolyDataNormals::vtkPolyDataNormals(System::IntPtr native, bool bConst) : vtkPolyDataAlgorithm(native, bConst) {}



  vtkPolyDataNormals::vtkPolyDataNormals(bool donothing) : vtkPolyDataAlgorithm(donothing) {}



  vtkPolyDataNormals::vtkPolyDataNormals() : vtkPolyDataAlgorithm(false) {
  this->SetNativePointer(IntPtr(::vtkPolyDataNormals::New()));
}



  vtkPolyDataNormals::~vtkPolyDataNormals() { }





} // end namespace vtkGraphics
