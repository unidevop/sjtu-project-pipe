

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkPolyDataToImageStencilDotNet.h"

// native includes
#include "strstream"
#include "vtkPolyDataToImageStencil.h"
#include "vtkObject.h"
#include "vtkPolyData.h"

using namespace System;

namespace vtk {

System::String^ vtkPolyDataToImageStencil::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkPolyDataToImageStencil>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkPolyDataToImageStencil::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkPolyDataToImageStencil>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkPolyDataToImageStencil^ vtkPolyDataToImageStencil::NewInstance()
{
  ::vtkPolyDataToImageStencil* retVal = static_cast<::vtkPolyDataToImageStencil*>(vtk::ConvertManagedToNative<::vtkPolyDataToImageStencil>(m_instance)->NewInstance());
  return gcnew vtkPolyDataToImageStencil(IntPtr(retVal), false);
}



vtkPolyDataToImageStencil^ vtkPolyDataToImageStencil::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkPolyDataToImageStencil* retVal = static_cast<::vtkPolyDataToImageStencil*>(::vtkPolyDataToImageStencil::SafeDownCast(oWrap));
  return gcnew vtkPolyDataToImageStencil(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkPolyDataToImageStencil::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkPolyDataToImageStencil>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkPolyDataToImageStencil::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkPolyDataToImageStencil>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkPolyDataToImageStencil::SetInput(vtkPolyData^ input)
{
  ::vtkPolyData* inputWrap = vtk::ConvertManagedToNative<::vtkPolyData>(input->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkPolyDataToImageStencil>(m_instance)->SetInput(inputWrap);
}



vtkPolyData^ vtkPolyDataToImageStencil::GetInput()
{
  ::vtkPolyData* retVal = static_cast<::vtkPolyData*>(vtk::ConvertManagedToNative<::vtkPolyDataToImageStencil>(m_instance)->GetInput());
  return gcnew vtkPolyData(IntPtr(retVal), false);
}



void vtkPolyDataToImageStencil::SetTolerance(double arg0)
{
  vtk::ConvertManagedToNative<::vtkPolyDataToImageStencil>(m_instance)->SetTolerance(arg0);
}



double vtkPolyDataToImageStencil::GetTolerance()
{
  double retVal = vtk::ConvertManagedToNative<::vtkPolyDataToImageStencil>(m_instance)->GetTolerance();
  return retVal;
}



  vtkPolyDataToImageStencil::vtkPolyDataToImageStencil(System::IntPtr native, bool bConst) : vtkImageStencilSource(native, bConst) {}



  vtkPolyDataToImageStencil::vtkPolyDataToImageStencil(bool donothing) : vtkImageStencilSource(donothing) {}



  vtkPolyDataToImageStencil::vtkPolyDataToImageStencil() : vtkImageStencilSource(false) {
  this->SetNativePointer(IntPtr(::vtkPolyDataToImageStencil::New()));
}



  vtkPolyDataToImageStencil::~vtkPolyDataToImageStencil() { }





} // end namespace vtkHybrid
