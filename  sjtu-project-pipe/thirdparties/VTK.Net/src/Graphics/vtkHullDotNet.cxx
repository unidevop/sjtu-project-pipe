

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkHullDotNet.h"

// native includes
#include "strstream"
#include "vtkHull.h"
#include "vtkObject.h"
#include "vtkPlanes.h"
#include "vtkPolyData.h"

using namespace System;

namespace vtk {

System::String^ vtkHull::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkHull>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkHull::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkHull>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkHull^ vtkHull::NewInstance()
{
  ::vtkHull* retVal = static_cast<::vtkHull*>(vtk::ConvertManagedToNative<::vtkHull>(m_instance)->NewInstance());
  return gcnew vtkHull(IntPtr(retVal), false);
}



vtkHull^ vtkHull::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkHull* retVal = static_cast<::vtkHull*>(::vtkHull::SafeDownCast(oWrap));
  return gcnew vtkHull(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkHull::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkHull>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkHull::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkHull>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkHull::RemoveAllPlanes()
{
  vtk::ConvertManagedToNative<::vtkHull>(m_instance)->RemoveAllPlanes();
}



int vtkHull::AddPlane(double A, double B, double C)
{
  int retVal = vtk::ConvertManagedToNative<::vtkHull>(m_instance)->AddPlane(A, B, C);
  return retVal;
}



int vtkHull::AddPlane(array<double>^ plane)
{
  pin_ptr<double> planePin = &plane[0];
  double* nativeplanePin = planePin;
  int retVal = vtk::ConvertManagedToNative<::vtkHull>(m_instance)->AddPlane(nativeplanePin);
  return retVal;
}



void vtkHull::SetPlane(int i, double A, double B, double C)
{
  vtk::ConvertManagedToNative<::vtkHull>(m_instance)->SetPlane(i, A, B, C);
}



void vtkHull::SetPlane(int i, array<double>^ plane)
{
  pin_ptr<double> planePin = &plane[0];
  double* nativeplanePin = planePin;
  vtk::ConvertManagedToNative<::vtkHull>(m_instance)->SetPlane(i, nativeplanePin);
}



int vtkHull::AddPlane(double A, double B, double C, double D)
{
  int retVal = vtk::ConvertManagedToNative<::vtkHull>(m_instance)->AddPlane(A, B, C, D);
  return retVal;
}



int vtkHull::AddPlane(array<double>^ plane, double D)
{
  pin_ptr<double> planePin = &plane[0];
  double* nativeplanePin = planePin;
  int retVal = vtk::ConvertManagedToNative<::vtkHull>(m_instance)->AddPlane(nativeplanePin, D);
  return retVal;
}



void vtkHull::SetPlane(int i, double A, double B, double C, double D)
{
  vtk::ConvertManagedToNative<::vtkHull>(m_instance)->SetPlane(i, A, B, C, D);
}



void vtkHull::SetPlane(int i, array<double>^ plane, double D)
{
  pin_ptr<double> planePin = &plane[0];
  double* nativeplanePin = planePin;
  vtk::ConvertManagedToNative<::vtkHull>(m_instance)->SetPlane(i, nativeplanePin, D);
}



void vtkHull::SetPlanes(vtkPlanes^ planes)
{
  ::vtkPlanes* planesWrap = vtk::ConvertManagedToNative<::vtkPlanes>(planes->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkHull>(m_instance)->SetPlanes(planesWrap);
}



int vtkHull::GetNumberOfPlanes()
{
  int retVal = vtk::ConvertManagedToNative<::vtkHull>(m_instance)->GetNumberOfPlanes();
  return retVal;
}



void vtkHull::AddCubeVertexPlanes()
{
  vtk::ConvertManagedToNative<::vtkHull>(m_instance)->AddCubeVertexPlanes();
}



void vtkHull::AddCubeEdgePlanes()
{
  vtk::ConvertManagedToNative<::vtkHull>(m_instance)->AddCubeEdgePlanes();
}



void vtkHull::AddCubeFacePlanes()
{
  vtk::ConvertManagedToNative<::vtkHull>(m_instance)->AddCubeFacePlanes();
}



void vtkHull::AddRecursiveSpherePlanes(int level)
{
  vtk::ConvertManagedToNative<::vtkHull>(m_instance)->AddRecursiveSpherePlanes(level);
}



void vtkHull::GenerateHull(vtkPolyData^ pd, array<double>^ bounds)
{
  ::vtkPolyData* pdWrap = vtk::ConvertManagedToNative<::vtkPolyData>(pd->GetNativePointer());
  pin_ptr<double> boundsPin = &bounds[0];
  double* nativeboundsPin = boundsPin;
  vtk::ConvertManagedToNative<::vtkHull>(m_instance)->GenerateHull(pdWrap, nativeboundsPin);
}



void vtkHull::GenerateHull(vtkPolyData^ pd, double xmin, double xmax, double ymin, double ymax, double zmin, double zmax)
{
  ::vtkPolyData* pdWrap = vtk::ConvertManagedToNative<::vtkPolyData>(pd->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkHull>(m_instance)->GenerateHull(pdWrap, xmin, xmax, ymin, ymax, zmin, zmax);
}



  vtkHull::vtkHull(System::IntPtr native, bool bConst) : vtkPolyDataAlgorithm(native, bConst) {}



  vtkHull::vtkHull(bool donothing) : vtkPolyDataAlgorithm(donothing) {}



  vtkHull::vtkHull() : vtkPolyDataAlgorithm(false) {
  this->SetNativePointer(IntPtr(::vtkHull::New()));
}



  vtkHull::~vtkHull() { }





} // end namespace vtkGraphics
