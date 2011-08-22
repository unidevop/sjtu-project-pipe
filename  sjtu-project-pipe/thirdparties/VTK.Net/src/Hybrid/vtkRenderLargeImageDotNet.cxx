

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkRenderLargeImageDotNet.h"

// native includes
#include "strstream"
#include "vtkRenderLargeImage.h"
#include "vtkImageData.h"
#include "vtkObject.h"
#include "vtkRenderer.h"

using namespace System;

namespace vtk {

System::String^ vtkRenderLargeImage::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkRenderLargeImage>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkRenderLargeImage::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkRenderLargeImage>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkRenderLargeImage^ vtkRenderLargeImage::NewInstance()
{
  ::vtkRenderLargeImage* retVal = static_cast<::vtkRenderLargeImage*>(vtk::ConvertManagedToNative<::vtkRenderLargeImage>(m_instance)->NewInstance());
  return gcnew vtkRenderLargeImage(IntPtr(retVal), false);
}



vtkRenderLargeImage^ vtkRenderLargeImage::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkRenderLargeImage* retVal = static_cast<::vtkRenderLargeImage*>(::vtkRenderLargeImage::SafeDownCast(oWrap));
  return gcnew vtkRenderLargeImage(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkRenderLargeImage::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkRenderLargeImage>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkRenderLargeImage::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkRenderLargeImage>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkRenderLargeImage::SetMagnification(int arg0)
{
  vtk::ConvertManagedToNative<::vtkRenderLargeImage>(m_instance)->SetMagnification(arg0);
}



int vtkRenderLargeImage::GetMagnification()
{
  int retVal = vtk::ConvertManagedToNative<::vtkRenderLargeImage>(m_instance)->GetMagnification();
  return retVal;
}



void vtkRenderLargeImage::SetInput(vtkRenderer^ arg0)
{
  ::vtkRenderer* arg0Wrap = vtk::ConvertManagedToNative<::vtkRenderer>(arg0->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkRenderLargeImage>(m_instance)->SetInput(arg0Wrap);
}



vtkRenderer^ vtkRenderLargeImage::GetInput()
{
  ::vtkRenderer* retVal = static_cast<::vtkRenderer*>(vtk::ConvertManagedToNative<::vtkRenderLargeImage>(m_instance)->GetInput());
  return gcnew vtkRenderer(IntPtr(retVal), false);
}



vtkImageData^ vtkRenderLargeImage::GetOutput()
{
  ::vtkImageData* retVal = static_cast<::vtkImageData*>(vtk::ConvertManagedToNative<::vtkRenderLargeImage>(m_instance)->GetOutput());
  return gcnew vtkImageData(IntPtr(retVal), false);
}



  vtkRenderLargeImage::vtkRenderLargeImage(System::IntPtr native, bool bConst) : vtkAlgorithm(native, bConst) {}



  vtkRenderLargeImage::vtkRenderLargeImage(bool donothing) : vtkAlgorithm(donothing) {}



  vtkRenderLargeImage::vtkRenderLargeImage() : vtkAlgorithm(false) {
  this->SetNativePointer(IntPtr(::vtkRenderLargeImage::New()));
}



  vtkRenderLargeImage::~vtkRenderLargeImage() { }





} // end namespace vtkHybrid
