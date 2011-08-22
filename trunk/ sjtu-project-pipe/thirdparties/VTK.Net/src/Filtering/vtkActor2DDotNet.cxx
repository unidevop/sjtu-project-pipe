

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkActor2DDotNet.h"
#include "vtkCoordinateDotNet.h"
#include "vtkMapper2DDotNet.h"
#include "vtkViewportDotNet.h"

// native includes
#include "strstream"
#include "vtkActor2D.h"
#include "vtkCoordinate.h"
#include "vtkMapper2D.h"
#include "vtkObject.h"
#include "vtkPropCollection.h"
#include "vtkProperty2D.h"
#include "vtkViewport.h"
#include "vtkWindow.h"

using namespace System;

namespace vtk {

  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkActor2D::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkActor2D>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkActor2D::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkActor2D>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




System::String^ vtkActor2D::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkActor2D>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkActor2D::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkActor2D>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkActor2D^ vtkActor2D::NewInstance()
{
  ::vtkActor2D* retVal = static_cast<::vtkActor2D*>(vtk::ConvertManagedToNative<::vtkActor2D>(m_instance)->NewInstance());
  return gcnew vtkActor2D(IntPtr(retVal), false);
}



vtkActor2D^ vtkActor2D::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkActor2D* retVal = static_cast<::vtkActor2D*>(::vtkActor2D::SafeDownCast(oWrap));
  return gcnew vtkActor2D(IntPtr(retVal), false);
}



int vtkActor2D::RenderOverlay(vtkViewport^ viewport)
{
  ::vtkViewport* viewportWrap = vtk::ConvertManagedToNative<::vtkViewport>(viewport->GetNativePointer());
  int retVal = vtk::ConvertManagedToNative<::vtkActor2D>(m_instance)->RenderOverlay(viewportWrap);
  return retVal;
}



int vtkActor2D::RenderOpaqueGeometry(vtkViewport^ viewport)
{
  ::vtkViewport* viewportWrap = vtk::ConvertManagedToNative<::vtkViewport>(viewport->GetNativePointer());
  int retVal = vtk::ConvertManagedToNative<::vtkActor2D>(m_instance)->RenderOpaqueGeometry(viewportWrap);
  return retVal;
}



int vtkActor2D::RenderTranslucentGeometry(vtkViewport^ viewport)
{
  ::vtkViewport* viewportWrap = vtk::ConvertManagedToNative<::vtkViewport>(viewport->GetNativePointer());
  int retVal = vtk::ConvertManagedToNative<::vtkActor2D>(m_instance)->RenderTranslucentGeometry(viewportWrap);
  return retVal;
}



void vtkActor2D::SetMapper(vtkMapper2D^ mapper)
{
  ::vtkMapper2D* mapperWrap = vtk::ConvertManagedToNative<::vtkMapper2D>(mapper->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkActor2D>(m_instance)->SetMapper(mapperWrap);
}



vtkMapper2D^ vtkActor2D::GetMapper()
{
  ::vtkMapper2D* retVal = static_cast<::vtkMapper2D*>(vtk::ConvertManagedToNative<::vtkActor2D>(m_instance)->GetMapper());
  return gcnew vtkMapper2D(IntPtr(retVal), false);
}



void vtkActor2D::SetLayerNumber(int arg0)
{
  vtk::ConvertManagedToNative<::vtkActor2D>(m_instance)->SetLayerNumber(arg0);
}



int vtkActor2D::GetLayerNumber()
{
  int retVal = vtk::ConvertManagedToNative<::vtkActor2D>(m_instance)->GetLayerNumber();
  return retVal;
}



vtkProperty2D^ vtkActor2D::GetProperty()
{
  ::vtkProperty2D* retVal = static_cast<::vtkProperty2D*>(vtk::ConvertManagedToNative<::vtkActor2D>(m_instance)->GetProperty());
  return gcnew vtkProperty2D(IntPtr(retVal), false);
}



void vtkActor2D::SetProperty(vtkProperty2D^ arg0)
{
  ::vtkProperty2D* arg0Wrap = vtk::ConvertManagedToNative<::vtkProperty2D>(arg0->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkActor2D>(m_instance)->SetProperty(arg0Wrap);
}



vtkCoordinate^ vtkActor2D::GetPositionCoordinate()
{
  ::vtkCoordinate* retVal = static_cast<::vtkCoordinate*>(vtk::ConvertManagedToNative<::vtkActor2D>(m_instance)->GetPositionCoordinate());
  return gcnew vtkCoordinate(IntPtr(retVal), false);
}



void vtkActor2D::SetPosition(double arg0, double arg1)
{
  vtk::ConvertManagedToNative<::vtkActor2D>(m_instance)->SetPosition(arg0, arg1);
}



void vtkActor2D::SetPosition(array<double>^ a)
{
  pin_ptr<double> aPin = &a[0];
  double* nativeaPin = aPin;
  vtk::ConvertManagedToNative<::vtkActor2D>(m_instance)->SetPosition(nativeaPin);
}



array<double>^ vtkActor2D::GetPosition()
{
  const double* retVal = vtk::ConvertManagedToNative<::vtkActor2D>(m_instance)->GetPosition();
  array<double>^ mRetVal = gcnew array<double>(2);
  for (size_t cprIdx=0; cprIdx<2; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



void vtkActor2D::SetDisplayPosition(int arg0, int arg1)
{
  vtk::ConvertManagedToNative<::vtkActor2D>(m_instance)->SetDisplayPosition(arg0, arg1);
}



vtkCoordinate^ vtkActor2D::GetPosition2Coordinate()
{
  ::vtkCoordinate* retVal = static_cast<::vtkCoordinate*>(vtk::ConvertManagedToNative<::vtkActor2D>(m_instance)->GetPosition2Coordinate());
  return gcnew vtkCoordinate(IntPtr(retVal), false);
}



void vtkActor2D::SetPosition2(double arg0, double arg1)
{
  vtk::ConvertManagedToNative<::vtkActor2D>(m_instance)->SetPosition2(arg0, arg1);
}



void vtkActor2D::SetPosition2(array<double>^ a)
{
  pin_ptr<double> aPin = &a[0];
  double* nativeaPin = aPin;
  vtk::ConvertManagedToNative<::vtkActor2D>(m_instance)->SetPosition2(nativeaPin);
}



array<double>^ vtkActor2D::GetPosition2()
{
  const double* retVal = vtk::ConvertManagedToNative<::vtkActor2D>(m_instance)->GetPosition2();
  array<double>^ mRetVal = gcnew array<double>(2);
  for (size_t cprIdx=0; cprIdx<2; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



void vtkActor2D::SetWidth(double w)
{
  vtk::ConvertManagedToNative<::vtkActor2D>(m_instance)->SetWidth(w);
}



double vtkActor2D::GetWidth()
{
  double retVal = vtk::ConvertManagedToNative<::vtkActor2D>(m_instance)->GetWidth();
  return retVal;
}



void vtkActor2D::SetHeight(double h)
{
  vtk::ConvertManagedToNative<::vtkActor2D>(m_instance)->SetHeight(h);
}



double vtkActor2D::GetHeight()
{
  double retVal = vtk::ConvertManagedToNative<::vtkActor2D>(m_instance)->GetHeight();
  return retVal;
}



unsigned long vtkActor2D::GetMTime()
{
  unsigned long retVal = vtk::ConvertManagedToNative<::vtkActor2D>(m_instance)->GetMTime();
  return retVal;
}



void vtkActor2D::GetActors2D(vtkPropCollection^ pc)
{
  ::vtkPropCollection* pcWrap = vtk::ConvertManagedToNative<::vtkPropCollection>(pc->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkActor2D>(m_instance)->GetActors2D(pcWrap);
}



void vtkActor2D::ShallowCopy(vtkProp^ prop)
{
  ::vtkProp* propWrap = vtk::ConvertManagedToNative<::vtkProp>(prop->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkActor2D>(m_instance)->ShallowCopy(propWrap);
}



void vtkActor2D::ReleaseGraphicsResources(vtkWindow^ arg0)
{
  ::vtkWindow* arg0Wrap = vtk::ConvertManagedToNative<::vtkWindow>(arg0->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkActor2D>(m_instance)->ReleaseGraphicsResources(arg0Wrap);
}



vtkCoordinate^ vtkActor2D::GetActualPositionCoordinate()
{
  ::vtkCoordinate* retVal = static_cast<::vtkCoordinate*>(vtk::ConvertManagedToNative<::vtkActor2D>(m_instance)->GetActualPositionCoordinate());
  return gcnew vtkCoordinate(IntPtr(retVal), false);
}



vtkCoordinate^ vtkActor2D::GetActualPosition2Coordinate()
{
  ::vtkCoordinate* retVal = static_cast<::vtkCoordinate*>(vtk::ConvertManagedToNative<::vtkActor2D>(m_instance)->GetActualPosition2Coordinate());
  return gcnew vtkCoordinate(IntPtr(retVal), false);
}



  vtkActor2D::vtkActor2D(System::IntPtr native, bool bConst) : vtkProp(native, bConst) {}



  vtkActor2D::vtkActor2D(bool donothing) : vtkProp(donothing) {}



  vtkActor2D::vtkActor2D() : vtkProp(false) {
  this->SetNativePointer(IntPtr(::vtkActor2D::New()));
}



  vtkActor2D::~vtkActor2D() { }





} // end namespace vtkFiltering
