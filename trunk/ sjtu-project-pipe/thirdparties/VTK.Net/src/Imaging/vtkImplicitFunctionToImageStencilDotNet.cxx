

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkImplicitFunctionToImageStencilDotNet.h"

// native includes
#include "strstream"
#include "vtkImplicitFunctionToImageStencil.h"
#include "vtkImplicitFunction.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkImplicitFunctionToImageStencil::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkImplicitFunctionToImageStencil>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkImplicitFunctionToImageStencil::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkImplicitFunctionToImageStencil>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkImplicitFunctionToImageStencil^ vtkImplicitFunctionToImageStencil::NewInstance()
{
  ::vtkImplicitFunctionToImageStencil* retVal = static_cast<::vtkImplicitFunctionToImageStencil*>(vtk::ConvertManagedToNative<::vtkImplicitFunctionToImageStencil>(m_instance)->NewInstance());
  return gcnew vtkImplicitFunctionToImageStencil(IntPtr(retVal), false);
}



vtkImplicitFunctionToImageStencil^ vtkImplicitFunctionToImageStencil::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkImplicitFunctionToImageStencil* retVal = static_cast<::vtkImplicitFunctionToImageStencil*>(::vtkImplicitFunctionToImageStencil::SafeDownCast(oWrap));
  return gcnew vtkImplicitFunctionToImageStencil(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkImplicitFunctionToImageStencil::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkImplicitFunctionToImageStencil>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkImplicitFunctionToImageStencil::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkImplicitFunctionToImageStencil>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkImplicitFunctionToImageStencil::SetInput(vtkImplicitFunction^ arg0)
{
  ::vtkImplicitFunction* arg0Wrap = vtk::ConvertManagedToNative<::vtkImplicitFunction>(arg0->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkImplicitFunctionToImageStencil>(m_instance)->SetInput(arg0Wrap);
}



vtkImplicitFunction^ vtkImplicitFunctionToImageStencil::GetInput()
{
  ::vtkImplicitFunction* retVal = static_cast<::vtkImplicitFunction*>(vtk::ConvertManagedToNative<::vtkImplicitFunctionToImageStencil>(m_instance)->GetInput());
  return gcnew vtkImplicitFunction(IntPtr(retVal), false);
}



void vtkImplicitFunctionToImageStencil::SetThreshold(double arg0)
{
  vtk::ConvertManagedToNative<::vtkImplicitFunctionToImageStencil>(m_instance)->SetThreshold(arg0);
}



double vtkImplicitFunctionToImageStencil::GetThreshold()
{
  double retVal = vtk::ConvertManagedToNative<::vtkImplicitFunctionToImageStencil>(m_instance)->GetThreshold();
  return retVal;
}



  vtkImplicitFunctionToImageStencil::vtkImplicitFunctionToImageStencil(System::IntPtr native, bool bConst) : vtkImageStencilSource(native, bConst) {}



  vtkImplicitFunctionToImageStencil::vtkImplicitFunctionToImageStencil(bool donothing) : vtkImageStencilSource(donothing) {}



  vtkImplicitFunctionToImageStencil::vtkImplicitFunctionToImageStencil() : vtkImageStencilSource(false) {
  this->SetNativePointer(IntPtr(::vtkImplicitFunctionToImageStencil::New()));
}



  vtkImplicitFunctionToImageStencil::~vtkImplicitFunctionToImageStencil() { }





} // end namespace vtkImaging
