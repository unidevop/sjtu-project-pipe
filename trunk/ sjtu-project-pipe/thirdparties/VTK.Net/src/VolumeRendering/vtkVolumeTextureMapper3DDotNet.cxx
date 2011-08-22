

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkVolumeTextureMapper3DDotNet.h"

// native includes
#include "strstream"
#include "vtkVolumeTextureMapper3D.h"
#include "vtkObject.h"
#include "vtkVolumeProperty.h"

using namespace System;

namespace vtk {

System::String^ vtkVolumeTextureMapper3D::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkVolumeTextureMapper3D>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkVolumeTextureMapper3D::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkVolumeTextureMapper3D>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkVolumeTextureMapper3D^ vtkVolumeTextureMapper3D::NewInstance()
{
  ::vtkVolumeTextureMapper3D* retVal = static_cast<::vtkVolumeTextureMapper3D*>(vtk::ConvertManagedToNative<::vtkVolumeTextureMapper3D>(m_instance)->NewInstance());
  return gcnew vtkVolumeTextureMapper3D(IntPtr(retVal), false);
}



vtkVolumeTextureMapper3D^ vtkVolumeTextureMapper3D::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkVolumeTextureMapper3D* retVal = static_cast<::vtkVolumeTextureMapper3D*>(::vtkVolumeTextureMapper3D::SafeDownCast(oWrap));
  return gcnew vtkVolumeTextureMapper3D(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkVolumeTextureMapper3D::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkVolumeTextureMapper3D>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkVolumeTextureMapper3D::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkVolumeTextureMapper3D>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkVolumeTextureMapper3D::SetSampleDistance(float arg0)
{
  vtk::ConvertManagedToNative<::vtkVolumeTextureMapper3D>(m_instance)->SetSampleDistance(arg0);
}



float vtkVolumeTextureMapper3D::GetSampleDistance()
{
  float retVal = vtk::ConvertManagedToNative<::vtkVolumeTextureMapper3D>(m_instance)->GetSampleDistance();
  return retVal;
}



array<int>^ vtkVolumeTextureMapper3D::GetVolumeDimensions()
{
  const int* retVal = vtk::ConvertManagedToNative<::vtkVolumeTextureMapper3D>(m_instance)->GetVolumeDimensions();
  array<int>^ mRetVal = gcnew array<int>(3);
  for (size_t cprIdx=0; cprIdx<3; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



array<float>^ vtkVolumeTextureMapper3D::GetVolumeSpacing()
{
  const float* retVal = vtk::ConvertManagedToNative<::vtkVolumeTextureMapper3D>(m_instance)->GetVolumeSpacing();
  array<float>^ mRetVal = gcnew array<float>(3);
  for (size_t cprIdx=0; cprIdx<3; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



int vtkVolumeTextureMapper3D::IsRenderSupported(vtkVolumeProperty^ arg0)
{
  ::vtkVolumeProperty* arg0Wrap = vtk::ConvertManagedToNative<::vtkVolumeProperty>(arg0->GetNativePointer());
  int retVal = vtk::ConvertManagedToNative<::vtkVolumeTextureMapper3D>(m_instance)->IsRenderSupported(arg0Wrap);
  return retVal;
}



int vtkVolumeTextureMapper3D::GetNumberOfPolygons()
{
  int retVal = vtk::ConvertManagedToNative<::vtkVolumeTextureMapper3D>(m_instance)->GetNumberOfPolygons();
  return retVal;
}



float vtkVolumeTextureMapper3D::GetActualSampleDistance()
{
  float retVal = vtk::ConvertManagedToNative<::vtkVolumeTextureMapper3D>(m_instance)->GetActualSampleDistance();
  return retVal;
}



void vtkVolumeTextureMapper3D::SetPreferredRenderMethod(int arg0)
{
  vtk::ConvertManagedToNative<::vtkVolumeTextureMapper3D>(m_instance)->SetPreferredRenderMethod(arg0);
}



int vtkVolumeTextureMapper3D::GetPreferredRenderMethodMinValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkVolumeTextureMapper3D>(m_instance)->GetPreferredRenderMethodMinValue();
  return retVal;
}



int vtkVolumeTextureMapper3D::GetPreferredRenderMethodMaxValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkVolumeTextureMapper3D>(m_instance)->GetPreferredRenderMethodMaxValue();
  return retVal;
}



void vtkVolumeTextureMapper3D::SetPreferredMethodToFragmentProgram()
{
  vtk::ConvertManagedToNative<::vtkVolumeTextureMapper3D>(m_instance)->SetPreferredMethodToFragmentProgram();
}



void vtkVolumeTextureMapper3D::SetPreferredMethodToNVidia()
{
  vtk::ConvertManagedToNative<::vtkVolumeTextureMapper3D>(m_instance)->SetPreferredMethodToNVidia();
}



  vtkVolumeTextureMapper3D::vtkVolumeTextureMapper3D(System::IntPtr native, bool bConst) : vtkVolumeMapper(native, bConst) {}



  vtkVolumeTextureMapper3D::vtkVolumeTextureMapper3D(bool donothing) : vtkVolumeMapper(donothing) {}



  vtkVolumeTextureMapper3D::vtkVolumeTextureMapper3D() : vtkVolumeMapper(false) {
  this->SetNativePointer(IntPtr(::vtkVolumeTextureMapper3D::New()));
}



  vtkVolumeTextureMapper3D::~vtkVolumeTextureMapper3D() { }





} // end namespace vtkVolumeRendering
