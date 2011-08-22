

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkVolumeTextureMapperDotNet.h"
#include "vtkEncodedGradientEstimatorDotNet.h"
#include "vtkEncodedGradientShaderDotNet.h"

// native includes
#include "strstream"
#include "vtkVolumeTextureMapper.h"
#include "vtkEncodedGradientEstimator.h"
#include "vtkEncodedGradientShader.h"

using namespace System;

namespace vtk {

System::String^ vtkVolumeTextureMapper::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkVolumeTextureMapper>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkVolumeTextureMapper::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkVolumeTextureMapper>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkVolumeTextureMapper^ vtkVolumeTextureMapper::NewInstance()
{
  ::vtkVolumeTextureMapper* retVal = static_cast<::vtkVolumeTextureMapper*>(vtk::ConvertManagedToNative<::vtkVolumeTextureMapper>(m_instance)->NewInstance());
  return gcnew vtkVolumeTextureMapper(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkVolumeTextureMapper::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkVolumeTextureMapper>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkVolumeTextureMapper::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkVolumeTextureMapper>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkVolumeTextureMapper::Update()
{
  vtk::ConvertManagedToNative<::vtkVolumeTextureMapper>(m_instance)->Update();
}



void vtkVolumeTextureMapper::SetGradientEstimator(vtkEncodedGradientEstimator^ gradest)
{
  ::vtkEncodedGradientEstimator* gradestWrap = vtk::ConvertManagedToNative<::vtkEncodedGradientEstimator>(gradest->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkVolumeTextureMapper>(m_instance)->SetGradientEstimator(gradestWrap);
}



vtkEncodedGradientEstimator^ vtkVolumeTextureMapper::GetGradientEstimator()
{
  ::vtkEncodedGradientEstimator* retVal = static_cast<::vtkEncodedGradientEstimator*>(vtk::ConvertManagedToNative<::vtkVolumeTextureMapper>(m_instance)->GetGradientEstimator());
  return gcnew vtkEncodedGradientEstimator(IntPtr(retVal), false);
}



vtkEncodedGradientShader^ vtkVolumeTextureMapper::GetGradientShader()
{
  ::vtkEncodedGradientShader* retVal = static_cast<::vtkEncodedGradientShader*>(vtk::ConvertManagedToNative<::vtkVolumeTextureMapper>(m_instance)->GetGradientShader());
  return gcnew vtkEncodedGradientShader(IntPtr(retVal), false);
}



  vtkVolumeTextureMapper::vtkVolumeTextureMapper(System::IntPtr native, bool bConst) : vtkVolumeMapper(native, bConst) {}



  vtkVolumeTextureMapper::vtkVolumeTextureMapper(bool donothing) : vtkVolumeMapper(donothing) {}



  vtkVolumeTextureMapper::vtkVolumeTextureMapper() : vtkVolumeMapper(false) {
  this->SetNativePointer(IntPtr(::vtkVolumeTextureMapper::New()));
}



  vtkVolumeTextureMapper::~vtkVolumeTextureMapper() { }





} // end namespace vtkVolumeRendering
