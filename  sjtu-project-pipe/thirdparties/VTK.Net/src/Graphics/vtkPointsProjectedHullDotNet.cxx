

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkPointsProjectedHullDotNet.h"

// native includes
#include "strstream"
#include "vtkPointsProjectedHull.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkPointsProjectedHull::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkPointsProjectedHull>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkPointsProjectedHull::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkPointsProjectedHull>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkPointsProjectedHull^ vtkPointsProjectedHull::NewInstance()
{
  ::vtkPointsProjectedHull* retVal = static_cast<::vtkPointsProjectedHull*>(vtk::ConvertManagedToNative<::vtkPointsProjectedHull>(m_instance)->NewInstance());
  return gcnew vtkPointsProjectedHull(IntPtr(retVal), false);
}



vtkPointsProjectedHull^ vtkPointsProjectedHull::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkPointsProjectedHull* retVal = static_cast<::vtkPointsProjectedHull*>(::vtkPointsProjectedHull::SafeDownCast(oWrap));
  return gcnew vtkPointsProjectedHull(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkPointsProjectedHull::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkPointsProjectedHull>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkPointsProjectedHull::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkPointsProjectedHull>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




int vtkPointsProjectedHull::RectangleIntersectionX(vtkPoints^ R)
{
  ::vtkPoints* RWrap = vtk::ConvertManagedToNative<::vtkPoints>(R->GetNativePointer());
  int retVal = vtk::ConvertManagedToNative<::vtkPointsProjectedHull>(m_instance)->RectangleIntersectionX(RWrap);
  return retVal;
}



int vtkPointsProjectedHull::RectangleIntersectionX(float ymin, float ymax, float zmin, float zmax)
{
  int retVal = vtk::ConvertManagedToNative<::vtkPointsProjectedHull>(m_instance)->RectangleIntersectionX(ymin, ymax, zmin, zmax);
  return retVal;
}



int vtkPointsProjectedHull::RectangleIntersectionX(double ymin, double ymax, double zmin, double zmax)
{
  int retVal = vtk::ConvertManagedToNative<::vtkPointsProjectedHull>(m_instance)->RectangleIntersectionX(ymin, ymax, zmin, zmax);
  return retVal;
}



int vtkPointsProjectedHull::RectangleIntersectionY(vtkPoints^ R)
{
  ::vtkPoints* RWrap = vtk::ConvertManagedToNative<::vtkPoints>(R->GetNativePointer());
  int retVal = vtk::ConvertManagedToNative<::vtkPointsProjectedHull>(m_instance)->RectangleIntersectionY(RWrap);
  return retVal;
}



int vtkPointsProjectedHull::RectangleIntersectionY(float zmin, float zmax, float xmin, float xmax)
{
  int retVal = vtk::ConvertManagedToNative<::vtkPointsProjectedHull>(m_instance)->RectangleIntersectionY(zmin, zmax, xmin, xmax);
  return retVal;
}



int vtkPointsProjectedHull::RectangleIntersectionY(double zmin, double zmax, double xmin, double xmax)
{
  int retVal = vtk::ConvertManagedToNative<::vtkPointsProjectedHull>(m_instance)->RectangleIntersectionY(zmin, zmax, xmin, xmax);
  return retVal;
}



int vtkPointsProjectedHull::RectangleIntersectionZ(vtkPoints^ R)
{
  ::vtkPoints* RWrap = vtk::ConvertManagedToNative<::vtkPoints>(R->GetNativePointer());
  int retVal = vtk::ConvertManagedToNative<::vtkPointsProjectedHull>(m_instance)->RectangleIntersectionZ(RWrap);
  return retVal;
}



int vtkPointsProjectedHull::RectangleIntersectionZ(float xmin, float xmax, float ymin, float ymax)
{
  int retVal = vtk::ConvertManagedToNative<::vtkPointsProjectedHull>(m_instance)->RectangleIntersectionZ(xmin, xmax, ymin, ymax);
  return retVal;
}



int vtkPointsProjectedHull::RectangleIntersectionZ(double xmin, double xmax, double ymin, double ymax)
{
  int retVal = vtk::ConvertManagedToNative<::vtkPointsProjectedHull>(m_instance)->RectangleIntersectionZ(xmin, xmax, ymin, ymax);
  return retVal;
}



int vtkPointsProjectedHull::GetCCWHullX(array<float>^ pts, int len)
{
  pin_ptr<float> ptsPin = &pts[0];
  float* nativeptsPin = ptsPin;
  int retVal = vtk::ConvertManagedToNative<::vtkPointsProjectedHull>(m_instance)->GetCCWHullX(nativeptsPin, len);
  return retVal;
}



int vtkPointsProjectedHull::GetCCWHullX(array<double>^ pts, int len)
{
  pin_ptr<double> ptsPin = &pts[0];
  double* nativeptsPin = ptsPin;
  int retVal = vtk::ConvertManagedToNative<::vtkPointsProjectedHull>(m_instance)->GetCCWHullX(nativeptsPin, len);
  return retVal;
}



int vtkPointsProjectedHull::GetCCWHullY(array<float>^ pts, int len)
{
  pin_ptr<float> ptsPin = &pts[0];
  float* nativeptsPin = ptsPin;
  int retVal = vtk::ConvertManagedToNative<::vtkPointsProjectedHull>(m_instance)->GetCCWHullY(nativeptsPin, len);
  return retVal;
}



int vtkPointsProjectedHull::GetCCWHullY(array<double>^ pts, int len)
{
  pin_ptr<double> ptsPin = &pts[0];
  double* nativeptsPin = ptsPin;
  int retVal = vtk::ConvertManagedToNative<::vtkPointsProjectedHull>(m_instance)->GetCCWHullY(nativeptsPin, len);
  return retVal;
}



int vtkPointsProjectedHull::GetCCWHullZ(array<float>^ pts, int len)
{
  pin_ptr<float> ptsPin = &pts[0];
  float* nativeptsPin = ptsPin;
  int retVal = vtk::ConvertManagedToNative<::vtkPointsProjectedHull>(m_instance)->GetCCWHullZ(nativeptsPin, len);
  return retVal;
}



int vtkPointsProjectedHull::GetCCWHullZ(array<double>^ pts, int len)
{
  pin_ptr<double> ptsPin = &pts[0];
  double* nativeptsPin = ptsPin;
  int retVal = vtk::ConvertManagedToNative<::vtkPointsProjectedHull>(m_instance)->GetCCWHullZ(nativeptsPin, len);
  return retVal;
}



int vtkPointsProjectedHull::GetSizeCCWHullX()
{
  int retVal = vtk::ConvertManagedToNative<::vtkPointsProjectedHull>(m_instance)->GetSizeCCWHullX();
  return retVal;
}



int vtkPointsProjectedHull::GetSizeCCWHullY()
{
  int retVal = vtk::ConvertManagedToNative<::vtkPointsProjectedHull>(m_instance)->GetSizeCCWHullY();
  return retVal;
}



int vtkPointsProjectedHull::GetSizeCCWHullZ()
{
  int retVal = vtk::ConvertManagedToNative<::vtkPointsProjectedHull>(m_instance)->GetSizeCCWHullZ();
  return retVal;
}



void vtkPointsProjectedHull::Initialize()
{
  vtk::ConvertManagedToNative<::vtkPointsProjectedHull>(m_instance)->Initialize();
}



void vtkPointsProjectedHull::Reset()
{
  vtk::ConvertManagedToNative<::vtkPointsProjectedHull>(m_instance)->Reset();
}



void vtkPointsProjectedHull::Update()
{
  vtk::ConvertManagedToNative<::vtkPointsProjectedHull>(m_instance)->Update();
}



  vtkPointsProjectedHull::vtkPointsProjectedHull(System::IntPtr native, bool bConst) : vtkPoints(native, bConst) {}



  vtkPointsProjectedHull::vtkPointsProjectedHull(bool donothing) : vtkPoints(donothing) {}



  vtkPointsProjectedHull::vtkPointsProjectedHull() : vtkPoints(false) {
  this->SetNativePointer(IntPtr(::vtkPointsProjectedHull::New()));
}



  vtkPointsProjectedHull::~vtkPointsProjectedHull() { }





} // end namespace vtkGraphics
