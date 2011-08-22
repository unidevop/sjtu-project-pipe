

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkCursor3DDotNet.h"

// native includes
#include "strstream"
#include "vtkCursor3D.h"
#include "vtkObject.h"
#include "vtkPolyData.h"

using namespace System;

namespace vtk {

System::String^ vtkCursor3D::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkCursor3D>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkCursor3D::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkCursor3D>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkCursor3D^ vtkCursor3D::NewInstance()
{
  ::vtkCursor3D* retVal = static_cast<::vtkCursor3D*>(vtk::ConvertManagedToNative<::vtkCursor3D>(m_instance)->NewInstance());
  return gcnew vtkCursor3D(IntPtr(retVal), false);
}



vtkCursor3D^ vtkCursor3D::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkCursor3D* retVal = static_cast<::vtkCursor3D*>(::vtkCursor3D::SafeDownCast(oWrap));
  return gcnew vtkCursor3D(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkCursor3D::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkCursor3D>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkCursor3D::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkCursor3D>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkCursor3D::SetModelBounds(double xmin, double xmax, double ymin, double ymax, double zmin, double zmax)
{
  vtk::ConvertManagedToNative<::vtkCursor3D>(m_instance)->SetModelBounds(xmin, xmax, ymin, ymax, zmin, zmax);
}



void vtkCursor3D::SetModelBounds(array<double>^ bounds)
{
  pin_ptr<double> boundsPin = &bounds[0];
  double* nativeboundsPin = boundsPin;
  vtk::ConvertManagedToNative<::vtkCursor3D>(m_instance)->SetModelBounds(nativeboundsPin);
}



array<double>^ vtkCursor3D::GetModelBounds()
{
  const double* retVal = vtk::ConvertManagedToNative<::vtkCursor3D>(m_instance)->GetModelBounds();
  array<double>^ mRetVal = gcnew array<double>(6);
  for (size_t cprIdx=0; cprIdx<6; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



void vtkCursor3D::SetFocalPoint(array<double>^ x)
{
  pin_ptr<double> xPin = &x[0];
  double* nativexPin = xPin;
  vtk::ConvertManagedToNative<::vtkCursor3D>(m_instance)->SetFocalPoint(nativexPin);
}



void vtkCursor3D::SetFocalPoint(double x, double y, double z)
{
  vtk::ConvertManagedToNative<::vtkCursor3D>(m_instance)->SetFocalPoint(x, y, z);
}



array<double>^ vtkCursor3D::GetFocalPoint()
{
  const double* retVal = vtk::ConvertManagedToNative<::vtkCursor3D>(m_instance)->GetFocalPoint();
  array<double>^ mRetVal = gcnew array<double>(3);
  for (size_t cprIdx=0; cprIdx<3; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



void vtkCursor3D::SetOutline(int arg0)
{
  vtk::ConvertManagedToNative<::vtkCursor3D>(m_instance)->SetOutline(arg0);
}



int vtkCursor3D::GetOutline()
{
  int retVal = vtk::ConvertManagedToNative<::vtkCursor3D>(m_instance)->GetOutline();
  return retVal;
}



void vtkCursor3D::OutlineOn()
{
  vtk::ConvertManagedToNative<::vtkCursor3D>(m_instance)->OutlineOn();
}



void vtkCursor3D::OutlineOff()
{
  vtk::ConvertManagedToNative<::vtkCursor3D>(m_instance)->OutlineOff();
}



void vtkCursor3D::SetAxes(int arg0)
{
  vtk::ConvertManagedToNative<::vtkCursor3D>(m_instance)->SetAxes(arg0);
}



int vtkCursor3D::GetAxes()
{
  int retVal = vtk::ConvertManagedToNative<::vtkCursor3D>(m_instance)->GetAxes();
  return retVal;
}



void vtkCursor3D::AxesOn()
{
  vtk::ConvertManagedToNative<::vtkCursor3D>(m_instance)->AxesOn();
}



void vtkCursor3D::AxesOff()
{
  vtk::ConvertManagedToNative<::vtkCursor3D>(m_instance)->AxesOff();
}



void vtkCursor3D::SetXShadows(int arg0)
{
  vtk::ConvertManagedToNative<::vtkCursor3D>(m_instance)->SetXShadows(arg0);
}



int vtkCursor3D::GetXShadows()
{
  int retVal = vtk::ConvertManagedToNative<::vtkCursor3D>(m_instance)->GetXShadows();
  return retVal;
}



void vtkCursor3D::XShadowsOn()
{
  vtk::ConvertManagedToNative<::vtkCursor3D>(m_instance)->XShadowsOn();
}



void vtkCursor3D::XShadowsOff()
{
  vtk::ConvertManagedToNative<::vtkCursor3D>(m_instance)->XShadowsOff();
}



void vtkCursor3D::SetYShadows(int arg0)
{
  vtk::ConvertManagedToNative<::vtkCursor3D>(m_instance)->SetYShadows(arg0);
}



int vtkCursor3D::GetYShadows()
{
  int retVal = vtk::ConvertManagedToNative<::vtkCursor3D>(m_instance)->GetYShadows();
  return retVal;
}



void vtkCursor3D::YShadowsOn()
{
  vtk::ConvertManagedToNative<::vtkCursor3D>(m_instance)->YShadowsOn();
}



void vtkCursor3D::YShadowsOff()
{
  vtk::ConvertManagedToNative<::vtkCursor3D>(m_instance)->YShadowsOff();
}



void vtkCursor3D::SetZShadows(int arg0)
{
  vtk::ConvertManagedToNative<::vtkCursor3D>(m_instance)->SetZShadows(arg0);
}



int vtkCursor3D::GetZShadows()
{
  int retVal = vtk::ConvertManagedToNative<::vtkCursor3D>(m_instance)->GetZShadows();
  return retVal;
}



void vtkCursor3D::ZShadowsOn()
{
  vtk::ConvertManagedToNative<::vtkCursor3D>(m_instance)->ZShadowsOn();
}



void vtkCursor3D::ZShadowsOff()
{
  vtk::ConvertManagedToNative<::vtkCursor3D>(m_instance)->ZShadowsOff();
}



void vtkCursor3D::SetTranslationMode(int arg0)
{
  vtk::ConvertManagedToNative<::vtkCursor3D>(m_instance)->SetTranslationMode(arg0);
}



int vtkCursor3D::GetTranslationMode()
{
  int retVal = vtk::ConvertManagedToNative<::vtkCursor3D>(m_instance)->GetTranslationMode();
  return retVal;
}



void vtkCursor3D::TranslationModeOn()
{
  vtk::ConvertManagedToNative<::vtkCursor3D>(m_instance)->TranslationModeOn();
}



void vtkCursor3D::TranslationModeOff()
{
  vtk::ConvertManagedToNative<::vtkCursor3D>(m_instance)->TranslationModeOff();
}



void vtkCursor3D::SetWrap(int arg0)
{
  vtk::ConvertManagedToNative<::vtkCursor3D>(m_instance)->SetWrap(arg0);
}



int vtkCursor3D::GetWrap()
{
  int retVal = vtk::ConvertManagedToNative<::vtkCursor3D>(m_instance)->GetWrap();
  return retVal;
}



void vtkCursor3D::WrapOn()
{
  vtk::ConvertManagedToNative<::vtkCursor3D>(m_instance)->WrapOn();
}



void vtkCursor3D::WrapOff()
{
  vtk::ConvertManagedToNative<::vtkCursor3D>(m_instance)->WrapOff();
}



vtkPolyData^ vtkCursor3D::GetFocus()
{
  ::vtkPolyData* retVal = static_cast<::vtkPolyData*>(vtk::ConvertManagedToNative<::vtkCursor3D>(m_instance)->GetFocus());
  return gcnew vtkPolyData(IntPtr(retVal), false);
}



void vtkCursor3D::AllOn()
{
  vtk::ConvertManagedToNative<::vtkCursor3D>(m_instance)->AllOn();
}



void vtkCursor3D::AllOff()
{
  vtk::ConvertManagedToNative<::vtkCursor3D>(m_instance)->AllOff();
}



  vtkCursor3D::vtkCursor3D(System::IntPtr native, bool bConst) : vtkPolyDataAlgorithm(native, bConst) {}



  vtkCursor3D::vtkCursor3D(bool donothing) : vtkPolyDataAlgorithm(donothing) {}



  vtkCursor3D::vtkCursor3D() : vtkPolyDataAlgorithm(false) {
  this->SetNativePointer(IntPtr(::vtkCursor3D::New()));
}



  vtkCursor3D::~vtkCursor3D() { }





} // end namespace vtkGraphics
