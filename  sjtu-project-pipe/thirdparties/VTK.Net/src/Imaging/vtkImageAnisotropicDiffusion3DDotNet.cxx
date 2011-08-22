

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkImageAnisotropicDiffusion3DDotNet.h"

// native includes
#include "strstream"
#include "vtkImageAnisotropicDiffusion3D.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkImageAnisotropicDiffusion3D::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkImageAnisotropicDiffusion3D>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkImageAnisotropicDiffusion3D::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkImageAnisotropicDiffusion3D>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkImageAnisotropicDiffusion3D^ vtkImageAnisotropicDiffusion3D::NewInstance()
{
  ::vtkImageAnisotropicDiffusion3D* retVal = static_cast<::vtkImageAnisotropicDiffusion3D*>(vtk::ConvertManagedToNative<::vtkImageAnisotropicDiffusion3D>(m_instance)->NewInstance());
  return gcnew vtkImageAnisotropicDiffusion3D(IntPtr(retVal), false);
}



vtkImageAnisotropicDiffusion3D^ vtkImageAnisotropicDiffusion3D::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkImageAnisotropicDiffusion3D* retVal = static_cast<::vtkImageAnisotropicDiffusion3D*>(::vtkImageAnisotropicDiffusion3D::SafeDownCast(oWrap));
  return gcnew vtkImageAnisotropicDiffusion3D(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkImageAnisotropicDiffusion3D::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkImageAnisotropicDiffusion3D>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkImageAnisotropicDiffusion3D::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkImageAnisotropicDiffusion3D>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkImageAnisotropicDiffusion3D::SetNumberOfIterations(int num)
{
  vtk::ConvertManagedToNative<::vtkImageAnisotropicDiffusion3D>(m_instance)->SetNumberOfIterations(num);
}



int vtkImageAnisotropicDiffusion3D::GetNumberOfIterations()
{
  int retVal = vtk::ConvertManagedToNative<::vtkImageAnisotropicDiffusion3D>(m_instance)->GetNumberOfIterations();
  return retVal;
}



void vtkImageAnisotropicDiffusion3D::SetDiffusionThreshold(double arg0)
{
  vtk::ConvertManagedToNative<::vtkImageAnisotropicDiffusion3D>(m_instance)->SetDiffusionThreshold(arg0);
}



double vtkImageAnisotropicDiffusion3D::GetDiffusionThreshold()
{
  double retVal = vtk::ConvertManagedToNative<::vtkImageAnisotropicDiffusion3D>(m_instance)->GetDiffusionThreshold();
  return retVal;
}



void vtkImageAnisotropicDiffusion3D::SetDiffusionFactor(double arg0)
{
  vtk::ConvertManagedToNative<::vtkImageAnisotropicDiffusion3D>(m_instance)->SetDiffusionFactor(arg0);
}



double vtkImageAnisotropicDiffusion3D::GetDiffusionFactor()
{
  double retVal = vtk::ConvertManagedToNative<::vtkImageAnisotropicDiffusion3D>(m_instance)->GetDiffusionFactor();
  return retVal;
}



void vtkImageAnisotropicDiffusion3D::SetFaces(int arg0)
{
  vtk::ConvertManagedToNative<::vtkImageAnisotropicDiffusion3D>(m_instance)->SetFaces(arg0);
}



int vtkImageAnisotropicDiffusion3D::GetFaces()
{
  int retVal = vtk::ConvertManagedToNative<::vtkImageAnisotropicDiffusion3D>(m_instance)->GetFaces();
  return retVal;
}



void vtkImageAnisotropicDiffusion3D::FacesOn()
{
  vtk::ConvertManagedToNative<::vtkImageAnisotropicDiffusion3D>(m_instance)->FacesOn();
}



void vtkImageAnisotropicDiffusion3D::FacesOff()
{
  vtk::ConvertManagedToNative<::vtkImageAnisotropicDiffusion3D>(m_instance)->FacesOff();
}



void vtkImageAnisotropicDiffusion3D::SetEdges(int arg0)
{
  vtk::ConvertManagedToNative<::vtkImageAnisotropicDiffusion3D>(m_instance)->SetEdges(arg0);
}



int vtkImageAnisotropicDiffusion3D::GetEdges()
{
  int retVal = vtk::ConvertManagedToNative<::vtkImageAnisotropicDiffusion3D>(m_instance)->GetEdges();
  return retVal;
}



void vtkImageAnisotropicDiffusion3D::EdgesOn()
{
  vtk::ConvertManagedToNative<::vtkImageAnisotropicDiffusion3D>(m_instance)->EdgesOn();
}



void vtkImageAnisotropicDiffusion3D::EdgesOff()
{
  vtk::ConvertManagedToNative<::vtkImageAnisotropicDiffusion3D>(m_instance)->EdgesOff();
}



void vtkImageAnisotropicDiffusion3D::SetCorners(int arg0)
{
  vtk::ConvertManagedToNative<::vtkImageAnisotropicDiffusion3D>(m_instance)->SetCorners(arg0);
}



int vtkImageAnisotropicDiffusion3D::GetCorners()
{
  int retVal = vtk::ConvertManagedToNative<::vtkImageAnisotropicDiffusion3D>(m_instance)->GetCorners();
  return retVal;
}



void vtkImageAnisotropicDiffusion3D::CornersOn()
{
  vtk::ConvertManagedToNative<::vtkImageAnisotropicDiffusion3D>(m_instance)->CornersOn();
}



void vtkImageAnisotropicDiffusion3D::CornersOff()
{
  vtk::ConvertManagedToNative<::vtkImageAnisotropicDiffusion3D>(m_instance)->CornersOff();
}



void vtkImageAnisotropicDiffusion3D::SetGradientMagnitudeThreshold(int arg0)
{
  vtk::ConvertManagedToNative<::vtkImageAnisotropicDiffusion3D>(m_instance)->SetGradientMagnitudeThreshold(arg0);
}



int vtkImageAnisotropicDiffusion3D::GetGradientMagnitudeThreshold()
{
  int retVal = vtk::ConvertManagedToNative<::vtkImageAnisotropicDiffusion3D>(m_instance)->GetGradientMagnitudeThreshold();
  return retVal;
}



void vtkImageAnisotropicDiffusion3D::GradientMagnitudeThresholdOn()
{
  vtk::ConvertManagedToNative<::vtkImageAnisotropicDiffusion3D>(m_instance)->GradientMagnitudeThresholdOn();
}



void vtkImageAnisotropicDiffusion3D::GradientMagnitudeThresholdOff()
{
  vtk::ConvertManagedToNative<::vtkImageAnisotropicDiffusion3D>(m_instance)->GradientMagnitudeThresholdOff();
}



  vtkImageAnisotropicDiffusion3D::vtkImageAnisotropicDiffusion3D(System::IntPtr native, bool bConst) : vtkImageSpatialAlgorithm(native, bConst) {}



  vtkImageAnisotropicDiffusion3D::vtkImageAnisotropicDiffusion3D(bool donothing) : vtkImageSpatialAlgorithm(donothing) {}



  vtkImageAnisotropicDiffusion3D::vtkImageAnisotropicDiffusion3D() : vtkImageSpatialAlgorithm(false) {
  this->SetNativePointer(IntPtr(::vtkImageAnisotropicDiffusion3D::New()));
}



  vtkImageAnisotropicDiffusion3D::~vtkImageAnisotropicDiffusion3D() { }





} // end namespace vtkImaging
