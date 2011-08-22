

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkPlanesIntersectionDotNet.h"

// native includes
#include "strstream"
#include "vtkPlanesIntersection.h"
#include "vtkCell.h"
#include "vtkObject.h"
#include "vtkPoints.h"

using namespace System;

namespace vtk {

System::String^ vtkPlanesIntersection::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkPlanesIntersection>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkPlanesIntersection::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkPlanesIntersection>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkPlanesIntersection^ vtkPlanesIntersection::NewInstance()
{
  ::vtkPlanesIntersection* retVal = static_cast<::vtkPlanesIntersection*>(vtk::ConvertManagedToNative<::vtkPlanesIntersection>(m_instance)->NewInstance());
  return gcnew vtkPlanesIntersection(IntPtr(retVal), false);
}



vtkPlanesIntersection^ vtkPlanesIntersection::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkPlanesIntersection* retVal = static_cast<::vtkPlanesIntersection*>(::vtkPlanesIntersection::SafeDownCast(oWrap));
  return gcnew vtkPlanesIntersection(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkPlanesIntersection::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkPlanesIntersection>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkPlanesIntersection::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkPlanesIntersection>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkPlanesIntersection::SetRegionVertices(vtkPoints^ pts)
{
  ::vtkPoints* ptsWrap = vtk::ConvertManagedToNative<::vtkPoints>(pts->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkPlanesIntersection>(m_instance)->SetRegionVertices(ptsWrap);
}



void vtkPlanesIntersection::SetRegionVertices(array<double>^ v, int nvertices)
{
  pin_ptr<double> vPin = &v[0];
  double* nativevPin = vPin;
  vtk::ConvertManagedToNative<::vtkPlanesIntersection>(m_instance)->SetRegionVertices(nativevPin, nvertices);
}



int vtkPlanesIntersection::GetNumRegionVertices()
{
  int retVal = vtk::ConvertManagedToNative<::vtkPlanesIntersection>(m_instance)->GetNumRegionVertices();
  return retVal;
}



int vtkPlanesIntersection::GetRegionVertices(array<double>^ v, int nvertices)
{
  pin_ptr<double> vPin = &v[0];
  double* nativevPin = vPin;
  int retVal = vtk::ConvertManagedToNative<::vtkPlanesIntersection>(m_instance)->GetRegionVertices(nativevPin, nvertices);
  return retVal;
}



int vtkPlanesIntersection::IntersectsRegion(vtkPoints^ R)
{
  ::vtkPoints* RWrap = vtk::ConvertManagedToNative<::vtkPoints>(R->GetNativePointer());
  int retVal = vtk::ConvertManagedToNative<::vtkPlanesIntersection>(m_instance)->IntersectsRegion(RWrap);
  return retVal;
}



int vtkPlanesIntersection::PolygonIntersectsBBox(array<double>^ bounds, vtkPoints^ pts)
{
  pin_ptr<double> boundsPin = &bounds[0];
  double* nativeboundsPin = boundsPin;
  ::vtkPoints* ptsWrap = vtk::ConvertManagedToNative<::vtkPoints>(pts->GetNativePointer());
  int retVal = ::vtkPlanesIntersection::PolygonIntersectsBBox(nativeboundsPin, ptsWrap);
  return retVal;
}



vtkPlanesIntersection^ vtkPlanesIntersection::Convert3DCell(vtkCell^ cell)
{
  ::vtkCell* cellWrap = vtk::ConvertManagedToNative<::vtkCell>(cell->GetNativePointer());
  ::vtkPlanesIntersection* retVal = static_cast<::vtkPlanesIntersection*>(::vtkPlanesIntersection::Convert3DCell(cellWrap));
  return gcnew vtkPlanesIntersection(IntPtr(retVal), false);
}



  vtkPlanesIntersection::vtkPlanesIntersection(System::IntPtr native, bool bConst) : vtkPlanes(native, bConst) {}



  vtkPlanesIntersection::vtkPlanesIntersection(bool donothing) : vtkPlanes(donothing) {}



  vtkPlanesIntersection::vtkPlanesIntersection() : vtkPlanes(false) {
  this->SetNativePointer(IntPtr(::vtkPlanesIntersection::New()));
}



  vtkPlanesIntersection::~vtkPlanesIntersection() { }





} // end namespace vtkGraphics
