

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkImageAnisotropicDiffusion2DDotNet.h"

// native includes
#include "strstream"
#include "vtkImageAnisotropicDiffusion2D.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkImageAnisotropicDiffusion2D::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkImageAnisotropicDiffusion2D>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkImageAnisotropicDiffusion2D::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkImageAnisotropicDiffusion2D>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkImageAnisotropicDiffusion2D^ vtkImageAnisotropicDiffusion2D::NewInstance()
{
  ::vtkImageAnisotropicDiffusion2D* retVal = static_cast<::vtkImageAnisotropicDiffusion2D*>(vtk::ConvertManagedToNative<::vtkImageAnisotropicDiffusion2D>(m_instance)->NewInstance());
  return gcnew vtkImageAnisotropicDiffusion2D(IntPtr(retVal), false);
}



vtkImageAnisotropicDiffusion2D^ vtkImageAnisotropicDiffusion2D::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkImageAnisotropicDiffusion2D* retVal = static_cast<::vtkImageAnisotropicDiffusion2D*>(::vtkImageAnisotropicDiffusion2D::SafeDownCast(oWrap));
  return gcnew vtkImageAnisotropicDiffusion2D(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkImageAnisotropicDiffusion2D::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkImageAnisotropicDiffusion2D>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkImageAnisotropicDiffusion2D::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkImageAnisotropicDiffusion2D>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkImageAnisotropicDiffusion2D::SetNumberOfIterations(int num)
{
  vtk::ConvertManagedToNative<::vtkImageAnisotropicDiffusion2D>(m_instance)->SetNumberOfIterations(num);
}



int vtkImageAnisotropicDiffusion2D::GetNumberOfIterations()
{
  int retVal = vtk::ConvertManagedToNative<::vtkImageAnisotropicDiffusion2D>(m_instance)->GetNumberOfIterations();
  return retVal;
}



void vtkImageAnisotropicDiffusion2D::SetDiffusionThreshold(double arg0)
{
  vtk::ConvertManagedToNative<::vtkImageAnisotropicDiffusion2D>(m_instance)->SetDiffusionThreshold(arg0);
}



double vtkImageAnisotropicDiffusion2D::GetDiffusionThreshold()
{
  double retVal = vtk::ConvertManagedToNative<::vtkImageAnisotropicDiffusion2D>(m_instance)->GetDiffusionThreshold();
  return retVal;
}



void vtkImageAnisotropicDiffusion2D::SetDiffusionFactor(double arg0)
{
  vtk::ConvertManagedToNative<::vtkImageAnisotropicDiffusion2D>(m_instance)->SetDiffusionFactor(arg0);
}



double vtkImageAnisotropicDiffusion2D::GetDiffusionFactor()
{
  double retVal = vtk::ConvertManagedToNative<::vtkImageAnisotropicDiffusion2D>(m_instance)->GetDiffusionFactor();
  return retVal;
}



void vtkImageAnisotropicDiffusion2D::SetFaces(int arg0)
{
  vtk::ConvertManagedToNative<::vtkImageAnisotropicDiffusion2D>(m_instance)->SetFaces(arg0);
}



int vtkImageAnisotropicDiffusion2D::GetFaces()
{
  int retVal = vtk::ConvertManagedToNative<::vtkImageAnisotropicDiffusion2D>(m_instance)->GetFaces();
  return retVal;
}



void vtkImageAnisotropicDiffusion2D::FacesOn()
{
  vtk::ConvertManagedToNative<::vtkImageAnisotropicDiffusion2D>(m_instance)->FacesOn();
}



void vtkImageAnisotropicDiffusion2D::FacesOff()
{
  vtk::ConvertManagedToNative<::vtkImageAnisotropicDiffusion2D>(m_instance)->FacesOff();
}



void vtkImageAnisotropicDiffusion2D::SetEdges(int arg0)
{
  vtk::ConvertManagedToNative<::vtkImageAnisotropicDiffusion2D>(m_instance)->SetEdges(arg0);
}



int vtkImageAnisotropicDiffusion2D::GetEdges()
{
  int retVal = vtk::ConvertManagedToNative<::vtkImageAnisotropicDiffusion2D>(m_instance)->GetEdges();
  return retVal;
}



void vtkImageAnisotropicDiffusion2D::EdgesOn()
{
  vtk::ConvertManagedToNative<::vtkImageAnisotropicDiffusion2D>(m_instance)->EdgesOn();
}



void vtkImageAnisotropicDiffusion2D::EdgesOff()
{
  vtk::ConvertManagedToNative<::vtkImageAnisotropicDiffusion2D>(m_instance)->EdgesOff();
}



void vtkImageAnisotropicDiffusion2D::SetCorners(int arg0)
{
  vtk::ConvertManagedToNative<::vtkImageAnisotropicDiffusion2D>(m_instance)->SetCorners(arg0);
}



int vtkImageAnisotropicDiffusion2D::GetCorners()
{
  int retVal = vtk::ConvertManagedToNative<::vtkImageAnisotropicDiffusion2D>(m_instance)->GetCorners();
  return retVal;
}



void vtkImageAnisotropicDiffusion2D::CornersOn()
{
  vtk::ConvertManagedToNative<::vtkImageAnisotropicDiffusion2D>(m_instance)->CornersOn();
}



void vtkImageAnisotropicDiffusion2D::CornersOff()
{
  vtk::ConvertManagedToNative<::vtkImageAnisotropicDiffusion2D>(m_instance)->CornersOff();
}



void vtkImageAnisotropicDiffusion2D::SetGradientMagnitudeThreshold(int arg0)
{
  vtk::ConvertManagedToNative<::vtkImageAnisotropicDiffusion2D>(m_instance)->SetGradientMagnitudeThreshold(arg0);
}



int vtkImageAnisotropicDiffusion2D::GetGradientMagnitudeThreshold()
{
  int retVal = vtk::ConvertManagedToNative<::vtkImageAnisotropicDiffusion2D>(m_instance)->GetGradientMagnitudeThreshold();
  return retVal;
}



void vtkImageAnisotropicDiffusion2D::GradientMagnitudeThresholdOn()
{
  vtk::ConvertManagedToNative<::vtkImageAnisotropicDiffusion2D>(m_instance)->GradientMagnitudeThresholdOn();
}



void vtkImageAnisotropicDiffusion2D::GradientMagnitudeThresholdOff()
{
  vtk::ConvertManagedToNative<::vtkImageAnisotropicDiffusion2D>(m_instance)->GradientMagnitudeThresholdOff();
}



  vtkImageAnisotropicDiffusion2D::vtkImageAnisotropicDiffusion2D(System::IntPtr native, bool bConst) : vtkImageSpatialAlgorithm(native, bConst) {}



  vtkImageAnisotropicDiffusion2D::vtkImageAnisotropicDiffusion2D(bool donothing) : vtkImageSpatialAlgorithm(donothing) {}



  vtkImageAnisotropicDiffusion2D::vtkImageAnisotropicDiffusion2D() : vtkImageSpatialAlgorithm(false) {
  this->SetNativePointer(IntPtr(::vtkImageAnisotropicDiffusion2D::New()));
}



  vtkImageAnisotropicDiffusion2D::~vtkImageAnisotropicDiffusion2D() { }





} // end namespace vtkImaging
