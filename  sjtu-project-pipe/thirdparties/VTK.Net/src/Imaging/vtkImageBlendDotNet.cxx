

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkImageBlendDotNet.h"
#include "vtkImageStencilDataDotNet.h"

// native includes
#include "strstream"
#include "vtkImageBlend.h"
#include "vtkDataObject.h"
#include "vtkImageStencilData.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkImageBlend::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkImageBlend>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkImageBlend::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkImageBlend>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkImageBlend^ vtkImageBlend::NewInstance()
{
  ::vtkImageBlend* retVal = static_cast<::vtkImageBlend*>(vtk::ConvertManagedToNative<::vtkImageBlend>(m_instance)->NewInstance());
  return gcnew vtkImageBlend(IntPtr(retVal), false);
}



vtkImageBlend^ vtkImageBlend::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkImageBlend* retVal = static_cast<::vtkImageBlend*>(::vtkImageBlend::SafeDownCast(oWrap));
  return gcnew vtkImageBlend(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkImageBlend::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkImageBlend>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkImageBlend::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkImageBlend>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkImageBlend::SetInput(int num, vtkDataObject^ input)
{
  ::vtkDataObject* inputWrap = vtk::ConvertManagedToNative<::vtkDataObject>(input->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkImageBlend>(m_instance)->SetInput(num, inputWrap);
}



void vtkImageBlend::SetInput(vtkDataObject^ input)
{
  ::vtkDataObject* inputWrap = vtk::ConvertManagedToNative<::vtkDataObject>(input->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkImageBlend>(m_instance)->SetInput(inputWrap);
}



vtkDataObject^ vtkImageBlend::GetInput(int num)
{
  ::vtkDataObject* retVal = static_cast<::vtkDataObject*>(vtk::ConvertManagedToNative<::vtkImageBlend>(m_instance)->GetInput(num));
  return gcnew vtkDataObject(IntPtr(retVal), false);
}



vtkDataObject^ vtkImageBlend::GetInput()
{
  ::vtkDataObject* retVal = static_cast<::vtkDataObject*>(vtk::ConvertManagedToNative<::vtkImageBlend>(m_instance)->GetInput());
  return gcnew vtkDataObject(IntPtr(retVal), false);
}



int vtkImageBlend::GetNumberOfInputs()
{
  int retVal = vtk::ConvertManagedToNative<::vtkImageBlend>(m_instance)->GetNumberOfInputs();
  return retVal;
}



void vtkImageBlend::SetOpacity(int idx, double opacity)
{
  vtk::ConvertManagedToNative<::vtkImageBlend>(m_instance)->SetOpacity(idx, opacity);
}



double vtkImageBlend::GetOpacity(int idx)
{
  double retVal = vtk::ConvertManagedToNative<::vtkImageBlend>(m_instance)->GetOpacity(idx);
  return retVal;
}



void vtkImageBlend::SetStencil(vtkImageStencilData^ stencil)
{
  ::vtkImageStencilData* stencilWrap = vtk::ConvertManagedToNative<::vtkImageStencilData>(stencil->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkImageBlend>(m_instance)->SetStencil(stencilWrap);
}



vtkImageStencilData^ vtkImageBlend::GetStencil()
{
  ::vtkImageStencilData* retVal = static_cast<::vtkImageStencilData*>(vtk::ConvertManagedToNative<::vtkImageBlend>(m_instance)->GetStencil());
  return gcnew vtkImageStencilData(IntPtr(retVal), false);
}



void vtkImageBlend::SetBlendMode(int arg0)
{
  vtk::ConvertManagedToNative<::vtkImageBlend>(m_instance)->SetBlendMode(arg0);
}



int vtkImageBlend::GetBlendModeMinValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkImageBlend>(m_instance)->GetBlendModeMinValue();
  return retVal;
}



int vtkImageBlend::GetBlendModeMaxValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkImageBlend>(m_instance)->GetBlendModeMaxValue();
  return retVal;
}



int vtkImageBlend::GetBlendMode()
{
  int retVal = vtk::ConvertManagedToNative<::vtkImageBlend>(m_instance)->GetBlendMode();
  return retVal;
}



void vtkImageBlend::SetBlendModeToNormal()
{
  vtk::ConvertManagedToNative<::vtkImageBlend>(m_instance)->SetBlendModeToNormal();
}



void vtkImageBlend::SetBlendModeToCompound()
{
  vtk::ConvertManagedToNative<::vtkImageBlend>(m_instance)->SetBlendModeToCompound();
}



System::String^ vtkImageBlend::GetBlendModeAsString()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkImageBlend>(m_instance)->GetBlendModeAsString();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



void vtkImageBlend::SetCompoundThreshold(double arg0)
{
  vtk::ConvertManagedToNative<::vtkImageBlend>(m_instance)->SetCompoundThreshold(arg0);
}



double vtkImageBlend::GetCompoundThreshold()
{
  double retVal = vtk::ConvertManagedToNative<::vtkImageBlend>(m_instance)->GetCompoundThreshold();
  return retVal;
}



  vtkImageBlend::vtkImageBlend(System::IntPtr native, bool bConst) : vtkThreadedImageAlgorithm(native, bConst) {}



  vtkImageBlend::vtkImageBlend(bool donothing) : vtkThreadedImageAlgorithm(donothing) {}



  vtkImageBlend::vtkImageBlend() : vtkThreadedImageAlgorithm(false) {
  this->SetNativePointer(IntPtr(::vtkImageBlend::New()));
}



  vtkImageBlend::~vtkImageBlend() { }





} // end namespace vtkImaging
