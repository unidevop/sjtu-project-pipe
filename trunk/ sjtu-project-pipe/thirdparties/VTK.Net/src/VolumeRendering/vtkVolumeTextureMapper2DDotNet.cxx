

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkVolumeTextureMapper2DDotNet.h"

// native includes
#include "strstream"
#include "vtkVolumeTextureMapper2D.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkVolumeTextureMapper2D::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkVolumeTextureMapper2D>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkVolumeTextureMapper2D::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkVolumeTextureMapper2D>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkVolumeTextureMapper2D^ vtkVolumeTextureMapper2D::NewInstance()
{
  ::vtkVolumeTextureMapper2D* retVal = static_cast<::vtkVolumeTextureMapper2D*>(vtk::ConvertManagedToNative<::vtkVolumeTextureMapper2D>(m_instance)->NewInstance());
  return gcnew vtkVolumeTextureMapper2D(IntPtr(retVal), false);
}



vtkVolumeTextureMapper2D^ vtkVolumeTextureMapper2D::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkVolumeTextureMapper2D* retVal = static_cast<::vtkVolumeTextureMapper2D*>(::vtkVolumeTextureMapper2D::SafeDownCast(oWrap));
  return gcnew vtkVolumeTextureMapper2D(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkVolumeTextureMapper2D::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkVolumeTextureMapper2D>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkVolumeTextureMapper2D::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkVolumeTextureMapper2D>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkVolumeTextureMapper2D::SetTargetTextureSize(int arg0, int arg1)
{
  vtk::ConvertManagedToNative<::vtkVolumeTextureMapper2D>(m_instance)->SetTargetTextureSize(arg0, arg1);
}



void vtkVolumeTextureMapper2D::SetTargetTextureSize(array<int>^ a)
{
  pin_ptr<int> aPin = &a[0];
  int* nativeaPin = aPin;
  vtk::ConvertManagedToNative<::vtkVolumeTextureMapper2D>(m_instance)->SetTargetTextureSize(nativeaPin);
}



array<int>^ vtkVolumeTextureMapper2D::GetTargetTextureSize()
{
  const int* retVal = vtk::ConvertManagedToNative<::vtkVolumeTextureMapper2D>(m_instance)->GetTargetTextureSize();
  array<int>^ mRetVal = gcnew array<int>(2);
  for (size_t cprIdx=0; cprIdx<2; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



void vtkVolumeTextureMapper2D::SetMaximumNumberOfPlanes(int arg0)
{
  vtk::ConvertManagedToNative<::vtkVolumeTextureMapper2D>(m_instance)->SetMaximumNumberOfPlanes(arg0);
}



int vtkVolumeTextureMapper2D::GetMaximumNumberOfPlanes()
{
  int retVal = vtk::ConvertManagedToNative<::vtkVolumeTextureMapper2D>(m_instance)->GetMaximumNumberOfPlanes();
  return retVal;
}



void vtkVolumeTextureMapper2D::SetMaximumStorageSize(int arg0)
{
  vtk::ConvertManagedToNative<::vtkVolumeTextureMapper2D>(m_instance)->SetMaximumStorageSize(arg0);
}



int vtkVolumeTextureMapper2D::GetMaximumStorageSize()
{
  int retVal = vtk::ConvertManagedToNative<::vtkVolumeTextureMapper2D>(m_instance)->GetMaximumStorageSize();
  return retVal;
}



  vtkVolumeTextureMapper2D::vtkVolumeTextureMapper2D(System::IntPtr native, bool bConst) : vtkVolumeTextureMapper(native, bConst) {}



  vtkVolumeTextureMapper2D::vtkVolumeTextureMapper2D(bool donothing) : vtkVolumeTextureMapper(donothing) {}



  vtkVolumeTextureMapper2D::vtkVolumeTextureMapper2D() : vtkVolumeTextureMapper(false) {
  this->SetNativePointer(IntPtr(::vtkVolumeTextureMapper2D::New()));
}



  vtkVolumeTextureMapper2D::~vtkVolumeTextureMapper2D() { }





} // end namespace vtkVolumeRendering
