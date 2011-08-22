

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkFeatureEdgesDotNet.h"

// native includes
#include "strstream"
#include "vtkFeatureEdges.h"
#include "vtkObject.h"
#include "vtkPointLocator.h"

using namespace System;

namespace vtk {

System::String^ vtkFeatureEdges::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkFeatureEdges>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkFeatureEdges::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkFeatureEdges>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkFeatureEdges^ vtkFeatureEdges::NewInstance()
{
  ::vtkFeatureEdges* retVal = static_cast<::vtkFeatureEdges*>(vtk::ConvertManagedToNative<::vtkFeatureEdges>(m_instance)->NewInstance());
  return gcnew vtkFeatureEdges(IntPtr(retVal), false);
}



vtkFeatureEdges^ vtkFeatureEdges::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkFeatureEdges* retVal = static_cast<::vtkFeatureEdges*>(::vtkFeatureEdges::SafeDownCast(oWrap));
  return gcnew vtkFeatureEdges(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkFeatureEdges::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkFeatureEdges>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkFeatureEdges::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkFeatureEdges>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkFeatureEdges::SetBoundaryEdges(int arg0)
{
  vtk::ConvertManagedToNative<::vtkFeatureEdges>(m_instance)->SetBoundaryEdges(arg0);
}



int vtkFeatureEdges::GetBoundaryEdges()
{
  int retVal = vtk::ConvertManagedToNative<::vtkFeatureEdges>(m_instance)->GetBoundaryEdges();
  return retVal;
}



void vtkFeatureEdges::BoundaryEdgesOn()
{
  vtk::ConvertManagedToNative<::vtkFeatureEdges>(m_instance)->BoundaryEdgesOn();
}



void vtkFeatureEdges::BoundaryEdgesOff()
{
  vtk::ConvertManagedToNative<::vtkFeatureEdges>(m_instance)->BoundaryEdgesOff();
}



void vtkFeatureEdges::SetFeatureEdges(int arg0)
{
  vtk::ConvertManagedToNative<::vtkFeatureEdges>(m_instance)->SetFeatureEdges(arg0);
}



int vtkFeatureEdges::GetFeatureEdges()
{
  int retVal = vtk::ConvertManagedToNative<::vtkFeatureEdges>(m_instance)->GetFeatureEdges();
  return retVal;
}



void vtkFeatureEdges::FeatureEdgesOn()
{
  vtk::ConvertManagedToNative<::vtkFeatureEdges>(m_instance)->FeatureEdgesOn();
}



void vtkFeatureEdges::FeatureEdgesOff()
{
  vtk::ConvertManagedToNative<::vtkFeatureEdges>(m_instance)->FeatureEdgesOff();
}



void vtkFeatureEdges::SetFeatureAngle(double arg0)
{
  vtk::ConvertManagedToNative<::vtkFeatureEdges>(m_instance)->SetFeatureAngle(arg0);
}



double vtkFeatureEdges::GetFeatureAngleMinValue()
{
  double retVal = vtk::ConvertManagedToNative<::vtkFeatureEdges>(m_instance)->GetFeatureAngleMinValue();
  return retVal;
}



double vtkFeatureEdges::GetFeatureAngleMaxValue()
{
  double retVal = vtk::ConvertManagedToNative<::vtkFeatureEdges>(m_instance)->GetFeatureAngleMaxValue();
  return retVal;
}



double vtkFeatureEdges::GetFeatureAngle()
{
  double retVal = vtk::ConvertManagedToNative<::vtkFeatureEdges>(m_instance)->GetFeatureAngle();
  return retVal;
}



void vtkFeatureEdges::SetNonManifoldEdges(int arg0)
{
  vtk::ConvertManagedToNative<::vtkFeatureEdges>(m_instance)->SetNonManifoldEdges(arg0);
}



int vtkFeatureEdges::GetNonManifoldEdges()
{
  int retVal = vtk::ConvertManagedToNative<::vtkFeatureEdges>(m_instance)->GetNonManifoldEdges();
  return retVal;
}



void vtkFeatureEdges::NonManifoldEdgesOn()
{
  vtk::ConvertManagedToNative<::vtkFeatureEdges>(m_instance)->NonManifoldEdgesOn();
}



void vtkFeatureEdges::NonManifoldEdgesOff()
{
  vtk::ConvertManagedToNative<::vtkFeatureEdges>(m_instance)->NonManifoldEdgesOff();
}



void vtkFeatureEdges::SetManifoldEdges(int arg0)
{
  vtk::ConvertManagedToNative<::vtkFeatureEdges>(m_instance)->SetManifoldEdges(arg0);
}



int vtkFeatureEdges::GetManifoldEdges()
{
  int retVal = vtk::ConvertManagedToNative<::vtkFeatureEdges>(m_instance)->GetManifoldEdges();
  return retVal;
}



void vtkFeatureEdges::ManifoldEdgesOn()
{
  vtk::ConvertManagedToNative<::vtkFeatureEdges>(m_instance)->ManifoldEdgesOn();
}



void vtkFeatureEdges::ManifoldEdgesOff()
{
  vtk::ConvertManagedToNative<::vtkFeatureEdges>(m_instance)->ManifoldEdgesOff();
}



void vtkFeatureEdges::SetColoring(int arg0)
{
  vtk::ConvertManagedToNative<::vtkFeatureEdges>(m_instance)->SetColoring(arg0);
}



int vtkFeatureEdges::GetColoring()
{
  int retVal = vtk::ConvertManagedToNative<::vtkFeatureEdges>(m_instance)->GetColoring();
  return retVal;
}



void vtkFeatureEdges::ColoringOn()
{
  vtk::ConvertManagedToNative<::vtkFeatureEdges>(m_instance)->ColoringOn();
}



void vtkFeatureEdges::ColoringOff()
{
  vtk::ConvertManagedToNative<::vtkFeatureEdges>(m_instance)->ColoringOff();
}



void vtkFeatureEdges::SetLocator(vtkPointLocator^ locator)
{
  ::vtkPointLocator* locatorWrap = vtk::ConvertManagedToNative<::vtkPointLocator>(locator->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkFeatureEdges>(m_instance)->SetLocator(locatorWrap);
}



vtkPointLocator^ vtkFeatureEdges::GetLocator()
{
  ::vtkPointLocator* retVal = static_cast<::vtkPointLocator*>(vtk::ConvertManagedToNative<::vtkFeatureEdges>(m_instance)->GetLocator());
  return gcnew vtkPointLocator(IntPtr(retVal), false);
}



void vtkFeatureEdges::CreateDefaultLocator()
{
  vtk::ConvertManagedToNative<::vtkFeatureEdges>(m_instance)->CreateDefaultLocator();
}



unsigned long vtkFeatureEdges::GetMTime()
{
  unsigned long retVal = vtk::ConvertManagedToNative<::vtkFeatureEdges>(m_instance)->GetMTime();
  return retVal;
}



  vtkFeatureEdges::vtkFeatureEdges(System::IntPtr native, bool bConst) : vtkPolyDataAlgorithm(native, bConst) {}



  vtkFeatureEdges::vtkFeatureEdges(bool donothing) : vtkPolyDataAlgorithm(donothing) {}



  vtkFeatureEdges::vtkFeatureEdges() : vtkPolyDataAlgorithm(false) {
  this->SetNativePointer(IntPtr(::vtkFeatureEdges::New()));
}



  vtkFeatureEdges::~vtkFeatureEdges() { }





} // end namespace vtkGraphics
