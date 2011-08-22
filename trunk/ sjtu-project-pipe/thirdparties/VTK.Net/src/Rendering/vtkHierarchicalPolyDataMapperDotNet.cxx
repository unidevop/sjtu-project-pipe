

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkHierarchicalPolyDataMapperDotNet.h"
#include "vtkActorDotNet.h"
#include "vtkRendererDotNet.h"

// native includes
#include "strstream"
#include "vtkHierarchicalPolyDataMapper.h"
#include "vtkActor.h"
#include "vtkObject.h"
#include "vtkRenderer.h"
#include "vtkWindow.h"

using namespace System;

namespace vtk {

System::String^ vtkHierarchicalPolyDataMapper::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkHierarchicalPolyDataMapper>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkHierarchicalPolyDataMapper::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkHierarchicalPolyDataMapper>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkHierarchicalPolyDataMapper^ vtkHierarchicalPolyDataMapper::NewInstance()
{
  ::vtkHierarchicalPolyDataMapper* retVal = static_cast<::vtkHierarchicalPolyDataMapper*>(vtk::ConvertManagedToNative<::vtkHierarchicalPolyDataMapper>(m_instance)->NewInstance());
  return gcnew vtkHierarchicalPolyDataMapper(IntPtr(retVal), false);
}



vtkHierarchicalPolyDataMapper^ vtkHierarchicalPolyDataMapper::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkHierarchicalPolyDataMapper* retVal = static_cast<::vtkHierarchicalPolyDataMapper*>(::vtkHierarchicalPolyDataMapper::SafeDownCast(oWrap));
  return gcnew vtkHierarchicalPolyDataMapper(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkHierarchicalPolyDataMapper::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkHierarchicalPolyDataMapper>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkHierarchicalPolyDataMapper::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkHierarchicalPolyDataMapper>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkHierarchicalPolyDataMapper::Render(vtkRenderer^ ren, vtkActor^ a)
{
  ::vtkRenderer* renWrap = vtk::ConvertManagedToNative<::vtkRenderer>(ren->GetNativePointer());
  ::vtkActor* aWrap = vtk::ConvertManagedToNative<::vtkActor>(a->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkHierarchicalPolyDataMapper>(m_instance)->Render(renWrap, aWrap);
}



void vtkHierarchicalPolyDataMapper::GetBounds(array<double>^ bounds)
{
  pin_ptr<double> boundsPin = &bounds[0];
  double* nativeboundsPin = boundsPin;
  vtk::ConvertManagedToNative<::vtkHierarchicalPolyDataMapper>(m_instance)->GetBounds(nativeboundsPin);
}



void vtkHierarchicalPolyDataMapper::ReleaseGraphicsResources(vtkWindow^ arg0)
{
  ::vtkWindow* arg0Wrap = vtk::ConvertManagedToNative<::vtkWindow>(arg0->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkHierarchicalPolyDataMapper>(m_instance)->ReleaseGraphicsResources(arg0Wrap);
}



  vtkHierarchicalPolyDataMapper::vtkHierarchicalPolyDataMapper(System::IntPtr native, bool bConst) : vtkMapper(native, bConst) {}



  vtkHierarchicalPolyDataMapper::vtkHierarchicalPolyDataMapper(bool donothing) : vtkMapper(donothing) {}



  vtkHierarchicalPolyDataMapper::vtkHierarchicalPolyDataMapper() : vtkMapper(false) {
  this->SetNativePointer(IntPtr(::vtkHierarchicalPolyDataMapper::New()));
}



  vtkHierarchicalPolyDataMapper::~vtkHierarchicalPolyDataMapper() { }





} // end namespace vtkRendering
