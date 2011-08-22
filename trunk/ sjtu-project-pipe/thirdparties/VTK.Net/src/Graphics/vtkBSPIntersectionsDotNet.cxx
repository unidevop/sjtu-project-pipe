

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkBSPIntersectionsDotNet.h"
#include "vtkBSPCutsDotNet.h"

// native includes
#include "strstream"
#include "vtkBSPIntersections.h"
#include "vtkBSPCuts.h"
#include "vtkCell.h"

using namespace System;

namespace vtk {

System::String^ vtkBSPIntersections::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkBSPIntersections>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkBSPIntersections::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkBSPIntersections>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkBSPIntersections^ vtkBSPIntersections::NewInstance()
{
  ::vtkBSPIntersections* retVal = static_cast<::vtkBSPIntersections*>(vtk::ConvertManagedToNative<::vtkBSPIntersections>(m_instance)->NewInstance());
  return gcnew vtkBSPIntersections(IntPtr(retVal), false);
}



vtkBSPIntersections^ vtkBSPIntersections::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkBSPIntersections* retVal = static_cast<::vtkBSPIntersections*>(::vtkBSPIntersections::SafeDownCast(oWrap));
  return gcnew vtkBSPIntersections(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkBSPIntersections::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkBSPIntersections>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkBSPIntersections::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkBSPIntersections>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkBSPIntersections::SetCuts(vtkBSPCuts^ cuts)
{
  ::vtkBSPCuts* cutsWrap = vtk::ConvertManagedToNative<::vtkBSPCuts>(cuts->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkBSPIntersections>(m_instance)->SetCuts(cutsWrap);
}



vtkBSPCuts^ vtkBSPIntersections::GetCuts()
{
  ::vtkBSPCuts* retVal = static_cast<::vtkBSPCuts*>(vtk::ConvertManagedToNative<::vtkBSPIntersections>(m_instance)->GetCuts());
  return gcnew vtkBSPCuts(IntPtr(retVal), false);
}



int vtkBSPIntersections::GetBounds(array<double>^ bounds)
{
  pin_ptr<double> boundsPin = &bounds[0];
  double* nativeboundsPin = boundsPin;
  int retVal = vtk::ConvertManagedToNative<::vtkBSPIntersections>(m_instance)->GetBounds(nativeboundsPin);
  return retVal;
}



int vtkBSPIntersections::GetNumberOfRegions()
{
  int retVal = vtk::ConvertManagedToNative<::vtkBSPIntersections>(m_instance)->GetNumberOfRegions();
  return retVal;
}



int vtkBSPIntersections::GetRegionBounds(int regionID, array<double>^ bounds)
{
  pin_ptr<double> boundsPin = &bounds[0];
  double* nativeboundsPin = boundsPin;
  int retVal = vtk::ConvertManagedToNative<::vtkBSPIntersections>(m_instance)->GetRegionBounds(regionID, nativeboundsPin);
  return retVal;
}



int vtkBSPIntersections::GetRegionDataBounds(int regionID, array<double>^ bounds)
{
  pin_ptr<double> boundsPin = &bounds[0];
  double* nativeboundsPin = boundsPin;
  int retVal = vtk::ConvertManagedToNative<::vtkBSPIntersections>(m_instance)->GetRegionDataBounds(regionID, nativeboundsPin);
  return retVal;
}



int vtkBSPIntersections::IntersectsBox(int regionId, array<double>^ x)
{
  pin_ptr<double> xPin = &x[0];
  double* nativexPin = xPin;
  int retVal = vtk::ConvertManagedToNative<::vtkBSPIntersections>(m_instance)->IntersectsBox(regionId, nativexPin);
  return retVal;
}



int vtkBSPIntersections::IntersectsBox(int regionId, double xmin, double xmax, double ymin, double ymax, double zmin, double zmax)
{
  int retVal = vtk::ConvertManagedToNative<::vtkBSPIntersections>(m_instance)->IntersectsBox(regionId, xmin, xmax, ymin, ymax, zmin, zmax);
  return retVal;
}



int vtkBSPIntersections::IntersectsBox(array<int>^ ids, int len, array<double>^ x)
{
  pin_ptr<int> idsPin = &ids[0];
  int* nativeidsPin = idsPin;
  pin_ptr<double> xPin = &x[0];
  double* nativexPin = xPin;
  int retVal = vtk::ConvertManagedToNative<::vtkBSPIntersections>(m_instance)->IntersectsBox(nativeidsPin, len, nativexPin);
  return retVal;
}



int vtkBSPIntersections::IntersectsBox(array<int>^ ids, int len, double x0, double x1, double y0, double y1, double z0, double z1)
{
  pin_ptr<int> idsPin = &ids[0];
  int* nativeidsPin = idsPin;
  int retVal = vtk::ConvertManagedToNative<::vtkBSPIntersections>(m_instance)->IntersectsBox(nativeidsPin, len, x0, x1, y0, y1, z0, z1);
  return retVal;
}



int vtkBSPIntersections::IntersectsSphere2(int regionId, double x, double y, double z, double rSquared)
{
  int retVal = vtk::ConvertManagedToNative<::vtkBSPIntersections>(m_instance)->IntersectsSphere2(regionId, x, y, z, rSquared);
  return retVal;
}



int vtkBSPIntersections::IntersectsSphere2(array<int>^ ids, int len, double x, double y, double z, double rSquared)
{
  pin_ptr<int> idsPin = &ids[0];
  int* nativeidsPin = idsPin;
  int retVal = vtk::ConvertManagedToNative<::vtkBSPIntersections>(m_instance)->IntersectsSphere2(nativeidsPin, len, x, y, z, rSquared);
  return retVal;
}



int vtkBSPIntersections::IntersectsCell(int regionId, vtkCell^ cell, int cellRegion)
{
  ::vtkCell* cellWrap = vtk::ConvertManagedToNative<::vtkCell>(cell->GetNativePointer());
  int retVal = vtk::ConvertManagedToNative<::vtkBSPIntersections>(m_instance)->IntersectsCell(regionId, cellWrap, cellRegion);
  return retVal;
}



int vtkBSPIntersections::IntersectsCell(array<int>^ ids, int len, vtkCell^ cell, int cellRegion)
{
  pin_ptr<int> idsPin = &ids[0];
  int* nativeidsPin = idsPin;
  ::vtkCell* cellWrap = vtk::ConvertManagedToNative<::vtkCell>(cell->GetNativePointer());
  int retVal = vtk::ConvertManagedToNative<::vtkBSPIntersections>(m_instance)->IntersectsCell(nativeidsPin, len, cellWrap, cellRegion);
  return retVal;
}



int vtkBSPIntersections::GetComputeIntersectionsUsingDataBounds()
{
  int retVal = vtk::ConvertManagedToNative<::vtkBSPIntersections>(m_instance)->GetComputeIntersectionsUsingDataBounds();
  return retVal;
}



void vtkBSPIntersections::SetComputeIntersectionsUsingDataBounds(int c)
{
  vtk::ConvertManagedToNative<::vtkBSPIntersections>(m_instance)->SetComputeIntersectionsUsingDataBounds(c);
}



void vtkBSPIntersections::ComputeIntersectionsUsingDataBoundsOn()
{
  vtk::ConvertManagedToNative<::vtkBSPIntersections>(m_instance)->ComputeIntersectionsUsingDataBoundsOn();
}



void vtkBSPIntersections::ComputeIntersectionsUsingDataBoundsOff()
{
  vtk::ConvertManagedToNative<::vtkBSPIntersections>(m_instance)->ComputeIntersectionsUsingDataBoundsOff();
}



  vtkBSPIntersections::vtkBSPIntersections(System::IntPtr native, bool bConst) : vtkObject(native, bConst) {}



  vtkBSPIntersections::vtkBSPIntersections(bool donothing) : vtkObject(donothing) {}



  vtkBSPIntersections::vtkBSPIntersections() : vtkObject(false) {
  this->SetNativePointer(IntPtr(::vtkBSPIntersections::New()));
}



  vtkBSPIntersections::~vtkBSPIntersections() { }





} // end namespace vtkGraphics
