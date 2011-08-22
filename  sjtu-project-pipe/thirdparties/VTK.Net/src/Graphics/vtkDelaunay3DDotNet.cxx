

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkDelaunay3DDotNet.h"

// native includes
#include "strstream"
#include "vtkDelaunay3D.h"
#include "vtkIdList.h"
#include "vtkObject.h"
#include "vtkPointLocator.h"
#include "vtkPoints.h"
#include "vtkUnstructuredGrid.h"

using namespace System;

namespace vtk {

System::String^ vtkDelaunay3D::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkDelaunay3D>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkDelaunay3D::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkDelaunay3D>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkDelaunay3D^ vtkDelaunay3D::NewInstance()
{
  ::vtkDelaunay3D* retVal = static_cast<::vtkDelaunay3D*>(vtk::ConvertManagedToNative<::vtkDelaunay3D>(m_instance)->NewInstance());
  return gcnew vtkDelaunay3D(IntPtr(retVal), false);
}



vtkDelaunay3D^ vtkDelaunay3D::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkDelaunay3D* retVal = static_cast<::vtkDelaunay3D*>(::vtkDelaunay3D::SafeDownCast(oWrap));
  return gcnew vtkDelaunay3D(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkDelaunay3D::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkDelaunay3D>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkDelaunay3D::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkDelaunay3D>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkDelaunay3D::SetAlpha(double arg0)
{
  vtk::ConvertManagedToNative<::vtkDelaunay3D>(m_instance)->SetAlpha(arg0);
}



double vtkDelaunay3D::GetAlphaMinValue()
{
  double retVal = vtk::ConvertManagedToNative<::vtkDelaunay3D>(m_instance)->GetAlphaMinValue();
  return retVal;
}



double vtkDelaunay3D::GetAlphaMaxValue()
{
  double retVal = vtk::ConvertManagedToNative<::vtkDelaunay3D>(m_instance)->GetAlphaMaxValue();
  return retVal;
}



double vtkDelaunay3D::GetAlpha()
{
  double retVal = vtk::ConvertManagedToNative<::vtkDelaunay3D>(m_instance)->GetAlpha();
  return retVal;
}



void vtkDelaunay3D::SetTolerance(double arg0)
{
  vtk::ConvertManagedToNative<::vtkDelaunay3D>(m_instance)->SetTolerance(arg0);
}



double vtkDelaunay3D::GetToleranceMinValue()
{
  double retVal = vtk::ConvertManagedToNative<::vtkDelaunay3D>(m_instance)->GetToleranceMinValue();
  return retVal;
}



double vtkDelaunay3D::GetToleranceMaxValue()
{
  double retVal = vtk::ConvertManagedToNative<::vtkDelaunay3D>(m_instance)->GetToleranceMaxValue();
  return retVal;
}



double vtkDelaunay3D::GetTolerance()
{
  double retVal = vtk::ConvertManagedToNative<::vtkDelaunay3D>(m_instance)->GetTolerance();
  return retVal;
}



void vtkDelaunay3D::SetOffset(double arg0)
{
  vtk::ConvertManagedToNative<::vtkDelaunay3D>(m_instance)->SetOffset(arg0);
}



double vtkDelaunay3D::GetOffsetMinValue()
{
  double retVal = vtk::ConvertManagedToNative<::vtkDelaunay3D>(m_instance)->GetOffsetMinValue();
  return retVal;
}



double vtkDelaunay3D::GetOffsetMaxValue()
{
  double retVal = vtk::ConvertManagedToNative<::vtkDelaunay3D>(m_instance)->GetOffsetMaxValue();
  return retVal;
}



double vtkDelaunay3D::GetOffset()
{
  double retVal = vtk::ConvertManagedToNative<::vtkDelaunay3D>(m_instance)->GetOffset();
  return retVal;
}



void vtkDelaunay3D::SetBoundingTriangulation(int arg0)
{
  vtk::ConvertManagedToNative<::vtkDelaunay3D>(m_instance)->SetBoundingTriangulation(arg0);
}



int vtkDelaunay3D::GetBoundingTriangulation()
{
  int retVal = vtk::ConvertManagedToNative<::vtkDelaunay3D>(m_instance)->GetBoundingTriangulation();
  return retVal;
}



void vtkDelaunay3D::BoundingTriangulationOn()
{
  vtk::ConvertManagedToNative<::vtkDelaunay3D>(m_instance)->BoundingTriangulationOn();
}



void vtkDelaunay3D::BoundingTriangulationOff()
{
  vtk::ConvertManagedToNative<::vtkDelaunay3D>(m_instance)->BoundingTriangulationOff();
}



void vtkDelaunay3D::SetLocator(vtkPointLocator^ locator)
{
  ::vtkPointLocator* locatorWrap = vtk::ConvertManagedToNative<::vtkPointLocator>(locator->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkDelaunay3D>(m_instance)->SetLocator(locatorWrap);
}



vtkPointLocator^ vtkDelaunay3D::GetLocator()
{
  ::vtkPointLocator* retVal = static_cast<::vtkPointLocator*>(vtk::ConvertManagedToNative<::vtkDelaunay3D>(m_instance)->GetLocator());
  return gcnew vtkPointLocator(IntPtr(retVal), false);
}



void vtkDelaunay3D::CreateDefaultLocator()
{
  vtk::ConvertManagedToNative<::vtkDelaunay3D>(m_instance)->CreateDefaultLocator();
}



void vtkDelaunay3D::InsertPoint(vtkUnstructuredGrid^ Mesh, vtkPoints^ points, int id, array<double>^ x, vtkIdList^ holeTetras)
{
  ::vtkUnstructuredGrid* MeshWrap = vtk::ConvertManagedToNative<::vtkUnstructuredGrid>(Mesh->GetNativePointer());
  ::vtkPoints* pointsWrap = vtk::ConvertManagedToNative<::vtkPoints>(points->GetNativePointer());
  pin_ptr<double> xPin = &x[0];
  double* nativexPin = xPin;
  ::vtkIdList* holeTetrasWrap = vtk::ConvertManagedToNative<::vtkIdList>(holeTetras->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkDelaunay3D>(m_instance)->InsertPoint(MeshWrap, pointsWrap, id, nativexPin, holeTetrasWrap);
}



void vtkDelaunay3D::EndPointInsertion()
{
  vtk::ConvertManagedToNative<::vtkDelaunay3D>(m_instance)->EndPointInsertion();
}



unsigned long vtkDelaunay3D::GetMTime()
{
  unsigned long retVal = vtk::ConvertManagedToNative<::vtkDelaunay3D>(m_instance)->GetMTime();
  return retVal;
}



  vtkDelaunay3D::vtkDelaunay3D(System::IntPtr native, bool bConst) : vtkUnstructuredGridAlgorithm(native, bConst) {}



  vtkDelaunay3D::vtkDelaunay3D(bool donothing) : vtkUnstructuredGridAlgorithm(donothing) {}



  vtkDelaunay3D::vtkDelaunay3D() : vtkUnstructuredGridAlgorithm(false) {
  this->SetNativePointer(IntPtr(::vtkDelaunay3D::New()));
}



  vtkDelaunay3D::~vtkDelaunay3D() { }





} // end namespace vtkGraphics
