

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkImageStencilDotNet.h"
#include "vtkImageStencilDataDotNet.h"

// native includes
#include "strstream"
#include "vtkImageStencil.h"
#include "vtkImageData.h"
#include "vtkImageStencilData.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkImageStencil::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkImageStencil>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkImageStencil::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkImageStencil>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkImageStencil^ vtkImageStencil::NewInstance()
{
  ::vtkImageStencil* retVal = static_cast<::vtkImageStencil*>(vtk::ConvertManagedToNative<::vtkImageStencil>(m_instance)->NewInstance());
  return gcnew vtkImageStencil(IntPtr(retVal), false);
}



vtkImageStencil^ vtkImageStencil::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkImageStencil* retVal = static_cast<::vtkImageStencil*>(::vtkImageStencil::SafeDownCast(oWrap));
  return gcnew vtkImageStencil(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkImageStencil::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkImageStencil>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkImageStencil::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkImageStencil>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkImageStencil::SetStencil(vtkImageStencilData^ stencil)
{
  ::vtkImageStencilData* stencilWrap = vtk::ConvertManagedToNative<::vtkImageStencilData>(stencil->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkImageStencil>(m_instance)->SetStencil(stencilWrap);
}



vtkImageStencilData^ vtkImageStencil::GetStencil()
{
  ::vtkImageStencilData* retVal = static_cast<::vtkImageStencilData*>(vtk::ConvertManagedToNative<::vtkImageStencil>(m_instance)->GetStencil());
  return gcnew vtkImageStencilData(IntPtr(retVal), false);
}



void vtkImageStencil::SetReverseStencil(int arg0)
{
  vtk::ConvertManagedToNative<::vtkImageStencil>(m_instance)->SetReverseStencil(arg0);
}



void vtkImageStencil::ReverseStencilOn()
{
  vtk::ConvertManagedToNative<::vtkImageStencil>(m_instance)->ReverseStencilOn();
}



void vtkImageStencil::ReverseStencilOff()
{
  vtk::ConvertManagedToNative<::vtkImageStencil>(m_instance)->ReverseStencilOff();
}



int vtkImageStencil::GetReverseStencil()
{
  int retVal = vtk::ConvertManagedToNative<::vtkImageStencil>(m_instance)->GetReverseStencil();
  return retVal;
}



void vtkImageStencil::SetBackgroundInput(vtkImageData^ input)
{
  ::vtkImageData* inputWrap = vtk::ConvertManagedToNative<::vtkImageData>(input->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkImageStencil>(m_instance)->SetBackgroundInput(inputWrap);
}



vtkImageData^ vtkImageStencil::GetBackgroundInput()
{
  ::vtkImageData* retVal = static_cast<::vtkImageData*>(vtk::ConvertManagedToNative<::vtkImageStencil>(m_instance)->GetBackgroundInput());
  return gcnew vtkImageData(IntPtr(retVal), false);
}



void vtkImageStencil::SetBackgroundValue(double val)
{
  vtk::ConvertManagedToNative<::vtkImageStencil>(m_instance)->SetBackgroundValue(val);
}



double vtkImageStencil::GetBackgroundValue()
{
  double retVal = vtk::ConvertManagedToNative<::vtkImageStencil>(m_instance)->GetBackgroundValue();
  return retVal;
}



void vtkImageStencil::SetBackgroundColor(double arg0, double arg1, double arg2, double arg3)
{
  vtk::ConvertManagedToNative<::vtkImageStencil>(m_instance)->SetBackgroundColor(arg0, arg1, arg2, arg3);
}



void vtkImageStencil::SetBackgroundColor(array<double>^ a)
{
  pin_ptr<double> aPin = &a[0];
  double* nativeaPin = aPin;
  vtk::ConvertManagedToNative<::vtkImageStencil>(m_instance)->SetBackgroundColor(nativeaPin);
}



array<double>^ vtkImageStencil::GetBackgroundColor()
{
  const double* retVal = vtk::ConvertManagedToNative<::vtkImageStencil>(m_instance)->GetBackgroundColor();
  array<double>^ mRetVal = gcnew array<double>(4);
  for (size_t cprIdx=0; cprIdx<4; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



  vtkImageStencil::vtkImageStencil(System::IntPtr native, bool bConst) : vtkThreadedImageAlgorithm(native, bConst) {}



  vtkImageStencil::vtkImageStencil(bool donothing) : vtkThreadedImageAlgorithm(donothing) {}



  vtkImageStencil::vtkImageStencil() : vtkThreadedImageAlgorithm(false) {
  this->SetNativePointer(IntPtr(::vtkImageStencil::New()));
}



  vtkImageStencil::~vtkImageStencil() { }





} // end namespace vtkImaging
