

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkMapper2DDotNet.h"
#include "vtkActor2DDotNet.h"
#include "vtkViewportDotNet.h"

// native includes
#include "strstream"
#include "vtkMapper2D.h"
#include "vtkActor2D.h"
#include "vtkViewport.h"

using namespace System;

namespace vtk {

System::String^ vtkMapper2D::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkMapper2D>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkMapper2D::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkMapper2D>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkMapper2D^ vtkMapper2D::NewInstance()
{
  ::vtkMapper2D* retVal = static_cast<::vtkMapper2D*>(vtk::ConvertManagedToNative<::vtkMapper2D>(m_instance)->NewInstance());
  return gcnew vtkMapper2D(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkMapper2D::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkMapper2D>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkMapper2D::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkMapper2D>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkMapper2D::RenderOverlay(vtkViewport^ arg0, vtkActor2D^ arg1)
{
  ::vtkViewport* arg0Wrap = vtk::ConvertManagedToNative<::vtkViewport>(arg0->GetNativePointer());
  ::vtkActor2D* arg1Wrap = vtk::ConvertManagedToNative<::vtkActor2D>(arg1->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkMapper2D>(m_instance)->RenderOverlay(arg0Wrap, arg1Wrap);
}



void vtkMapper2D::RenderOpaqueGeometry(vtkViewport^ arg0, vtkActor2D^ arg1)
{
  ::vtkViewport* arg0Wrap = vtk::ConvertManagedToNative<::vtkViewport>(arg0->GetNativePointer());
  ::vtkActor2D* arg1Wrap = vtk::ConvertManagedToNative<::vtkActor2D>(arg1->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkMapper2D>(m_instance)->RenderOpaqueGeometry(arg0Wrap, arg1Wrap);
}



void vtkMapper2D::RenderTranslucentGeometry(vtkViewport^ arg0, vtkActor2D^ arg1)
{
  ::vtkViewport* arg0Wrap = vtk::ConvertManagedToNative<::vtkViewport>(arg0->GetNativePointer());
  ::vtkActor2D* arg1Wrap = vtk::ConvertManagedToNative<::vtkActor2D>(arg1->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkMapper2D>(m_instance)->RenderTranslucentGeometry(arg0Wrap, arg1Wrap);
}



  vtkMapper2D::vtkMapper2D(System::IntPtr native, bool bConst) : vtkAbstractMapper(native, bConst) {}



  vtkMapper2D::vtkMapper2D(bool donothing) : vtkAbstractMapper(donothing) {}



  vtkMapper2D::vtkMapper2D() : vtkAbstractMapper(false) {
  this->SetNativePointer(IntPtr(::vtkMapper2D::New()));
}



  vtkMapper2D::~vtkMapper2D() { }





} // end namespace vtkFiltering
