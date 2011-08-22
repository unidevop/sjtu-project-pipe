

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkEncodedGradientShaderDotNet.h"
#include "vtkEncodedGradientEstimatorDotNet.h"

// native includes
#include "strstream"
#include "vtkEncodedGradientShader.h"
#include "vtkEncodedGradientEstimator.h"
#include "vtkRenderer.h"
#include "vtkVolume.h"

using namespace System;

namespace vtk {

System::String^ vtkEncodedGradientShader::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkEncodedGradientShader>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkEncodedGradientShader::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkEncodedGradientShader>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkEncodedGradientShader^ vtkEncodedGradientShader::NewInstance()
{
  ::vtkEncodedGradientShader* retVal = static_cast<::vtkEncodedGradientShader*>(vtk::ConvertManagedToNative<::vtkEncodedGradientShader>(m_instance)->NewInstance());
  return gcnew vtkEncodedGradientShader(IntPtr(retVal), false);
}



vtkEncodedGradientShader^ vtkEncodedGradientShader::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkEncodedGradientShader* retVal = static_cast<::vtkEncodedGradientShader*>(::vtkEncodedGradientShader::SafeDownCast(oWrap));
  return gcnew vtkEncodedGradientShader(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkEncodedGradientShader::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkEncodedGradientShader>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkEncodedGradientShader::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkEncodedGradientShader>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkEncodedGradientShader::SetZeroNormalDiffuseIntensity(float arg0)
{
  vtk::ConvertManagedToNative<::vtkEncodedGradientShader>(m_instance)->SetZeroNormalDiffuseIntensity(arg0);
}



float vtkEncodedGradientShader::GetZeroNormalDiffuseIntensityMinValue()
{
  float retVal = vtk::ConvertManagedToNative<::vtkEncodedGradientShader>(m_instance)->GetZeroNormalDiffuseIntensityMinValue();
  return retVal;
}



float vtkEncodedGradientShader::GetZeroNormalDiffuseIntensityMaxValue()
{
  float retVal = vtk::ConvertManagedToNative<::vtkEncodedGradientShader>(m_instance)->GetZeroNormalDiffuseIntensityMaxValue();
  return retVal;
}



float vtkEncodedGradientShader::GetZeroNormalDiffuseIntensity()
{
  float retVal = vtk::ConvertManagedToNative<::vtkEncodedGradientShader>(m_instance)->GetZeroNormalDiffuseIntensity();
  return retVal;
}



void vtkEncodedGradientShader::SetZeroNormalSpecularIntensity(float arg0)
{
  vtk::ConvertManagedToNative<::vtkEncodedGradientShader>(m_instance)->SetZeroNormalSpecularIntensity(arg0);
}



float vtkEncodedGradientShader::GetZeroNormalSpecularIntensityMinValue()
{
  float retVal = vtk::ConvertManagedToNative<::vtkEncodedGradientShader>(m_instance)->GetZeroNormalSpecularIntensityMinValue();
  return retVal;
}



float vtkEncodedGradientShader::GetZeroNormalSpecularIntensityMaxValue()
{
  float retVal = vtk::ConvertManagedToNative<::vtkEncodedGradientShader>(m_instance)->GetZeroNormalSpecularIntensityMaxValue();
  return retVal;
}



float vtkEncodedGradientShader::GetZeroNormalSpecularIntensity()
{
  float retVal = vtk::ConvertManagedToNative<::vtkEncodedGradientShader>(m_instance)->GetZeroNormalSpecularIntensity();
  return retVal;
}



void vtkEncodedGradientShader::UpdateShadingTable(vtkRenderer^ ren, vtkVolume^ vol, vtkEncodedGradientEstimator^ gradest)
{
  ::vtkRenderer* renWrap = vtk::ConvertManagedToNative<::vtkRenderer>(ren->GetNativePointer());
  ::vtkVolume* volWrap = vtk::ConvertManagedToNative<::vtkVolume>(vol->GetNativePointer());
  ::vtkEncodedGradientEstimator* gradestWrap = vtk::ConvertManagedToNative<::vtkEncodedGradientEstimator>(gradest->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkEncodedGradientShader>(m_instance)->UpdateShadingTable(renWrap, volWrap, gradestWrap);
}



void vtkEncodedGradientShader::SetActiveComponent(int arg0)
{
  vtk::ConvertManagedToNative<::vtkEncodedGradientShader>(m_instance)->SetActiveComponent(arg0);
}



int vtkEncodedGradientShader::GetActiveComponentMinValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkEncodedGradientShader>(m_instance)->GetActiveComponentMinValue();
  return retVal;
}



int vtkEncodedGradientShader::GetActiveComponentMaxValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkEncodedGradientShader>(m_instance)->GetActiveComponentMaxValue();
  return retVal;
}



int vtkEncodedGradientShader::GetActiveComponent()
{
  int retVal = vtk::ConvertManagedToNative<::vtkEncodedGradientShader>(m_instance)->GetActiveComponent();
  return retVal;
}



  vtkEncodedGradientShader::vtkEncodedGradientShader(System::IntPtr native, bool bConst) : vtkObject(native, bConst) {}



  vtkEncodedGradientShader::vtkEncodedGradientShader(bool donothing) : vtkObject(donothing) {}



  vtkEncodedGradientShader::vtkEncodedGradientShader() : vtkObject(false) {
  this->SetNativePointer(IntPtr(::vtkEncodedGradientShader::New()));
}



  vtkEncodedGradientShader::~vtkEncodedGradientShader() { }





} // end namespace vtkVolumeRendering
