

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkParallelCoordinatesActorDotNet.h"
#include "vtkTextPropertyDotNet.h"

// native includes
#include "strstream"
#include "vtkParallelCoordinatesActor.h"
#include "vtkDataObject.h"
#include "vtkObject.h"
#include "vtkTextProperty.h"
#include "vtkViewport.h"
#include "vtkWindow.h"

using namespace System;

namespace vtk {

System::String^ vtkParallelCoordinatesActor::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkParallelCoordinatesActor>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkParallelCoordinatesActor::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkParallelCoordinatesActor>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkParallelCoordinatesActor^ vtkParallelCoordinatesActor::NewInstance()
{
  ::vtkParallelCoordinatesActor* retVal = static_cast<::vtkParallelCoordinatesActor*>(vtk::ConvertManagedToNative<::vtkParallelCoordinatesActor>(m_instance)->NewInstance());
  return gcnew vtkParallelCoordinatesActor(IntPtr(retVal), false);
}



vtkParallelCoordinatesActor^ vtkParallelCoordinatesActor::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkParallelCoordinatesActor* retVal = static_cast<::vtkParallelCoordinatesActor*>(::vtkParallelCoordinatesActor::SafeDownCast(oWrap));
  return gcnew vtkParallelCoordinatesActor(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkParallelCoordinatesActor::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkParallelCoordinatesActor>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkParallelCoordinatesActor::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkParallelCoordinatesActor>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkParallelCoordinatesActor::SetIndependentVariables(int arg0)
{
  vtk::ConvertManagedToNative<::vtkParallelCoordinatesActor>(m_instance)->SetIndependentVariables(arg0);
}



int vtkParallelCoordinatesActor::GetIndependentVariablesMinValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkParallelCoordinatesActor>(m_instance)->GetIndependentVariablesMinValue();
  return retVal;
}



int vtkParallelCoordinatesActor::GetIndependentVariablesMaxValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkParallelCoordinatesActor>(m_instance)->GetIndependentVariablesMaxValue();
  return retVal;
}



int vtkParallelCoordinatesActor::GetIndependentVariables()
{
  int retVal = vtk::ConvertManagedToNative<::vtkParallelCoordinatesActor>(m_instance)->GetIndependentVariables();
  return retVal;
}



void vtkParallelCoordinatesActor::SetIndependentVariablesToColumns()
{
  vtk::ConvertManagedToNative<::vtkParallelCoordinatesActor>(m_instance)->SetIndependentVariablesToColumns();
}



void vtkParallelCoordinatesActor::SetIndependentVariablesToRows()
{
  vtk::ConvertManagedToNative<::vtkParallelCoordinatesActor>(m_instance)->SetIndependentVariablesToRows();
}



void vtkParallelCoordinatesActor::SetTitle(System::String^ arg0)
{
  char* arg0Wrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(arg0).ToPointer());
  vtk::ConvertManagedToNative<::vtkParallelCoordinatesActor>(m_instance)->SetTitle(arg0Wrap);
  arg0->Remove(0,arg0->Length);
  arg0->Insert(0,System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(arg0Wrap)));
System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(arg0Wrap));
}



System::String^ vtkParallelCoordinatesActor::GetTitle()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkParallelCoordinatesActor>(m_instance)->GetTitle();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



void vtkParallelCoordinatesActor::SetNumberOfLabels(int arg0)
{
  vtk::ConvertManagedToNative<::vtkParallelCoordinatesActor>(m_instance)->SetNumberOfLabels(arg0);
}



int vtkParallelCoordinatesActor::GetNumberOfLabelsMinValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkParallelCoordinatesActor>(m_instance)->GetNumberOfLabelsMinValue();
  return retVal;
}



int vtkParallelCoordinatesActor::GetNumberOfLabelsMaxValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkParallelCoordinatesActor>(m_instance)->GetNumberOfLabelsMaxValue();
  return retVal;
}



int vtkParallelCoordinatesActor::GetNumberOfLabels()
{
  int retVal = vtk::ConvertManagedToNative<::vtkParallelCoordinatesActor>(m_instance)->GetNumberOfLabels();
  return retVal;
}



void vtkParallelCoordinatesActor::SetLabelFormat(System::String^ arg0)
{
  char* arg0Wrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(arg0).ToPointer());
  vtk::ConvertManagedToNative<::vtkParallelCoordinatesActor>(m_instance)->SetLabelFormat(arg0Wrap);
  arg0->Remove(0,arg0->Length);
  arg0->Insert(0,System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(arg0Wrap)));
System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(arg0Wrap));
}



System::String^ vtkParallelCoordinatesActor::GetLabelFormat()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkParallelCoordinatesActor>(m_instance)->GetLabelFormat();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



void vtkParallelCoordinatesActor::SetTitleTextProperty(vtkTextProperty^ p)
{
  ::vtkTextProperty* pWrap = vtk::ConvertManagedToNative<::vtkTextProperty>(p->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkParallelCoordinatesActor>(m_instance)->SetTitleTextProperty(pWrap);
}



vtkTextProperty^ vtkParallelCoordinatesActor::GetTitleTextProperty()
{
  ::vtkTextProperty* retVal = static_cast<::vtkTextProperty*>(vtk::ConvertManagedToNative<::vtkParallelCoordinatesActor>(m_instance)->GetTitleTextProperty());
  return gcnew vtkTextProperty(IntPtr(retVal), false);
}



void vtkParallelCoordinatesActor::SetLabelTextProperty(vtkTextProperty^ p)
{
  ::vtkTextProperty* pWrap = vtk::ConvertManagedToNative<::vtkTextProperty>(p->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkParallelCoordinatesActor>(m_instance)->SetLabelTextProperty(pWrap);
}



vtkTextProperty^ vtkParallelCoordinatesActor::GetLabelTextProperty()
{
  ::vtkTextProperty* retVal = static_cast<::vtkTextProperty*>(vtk::ConvertManagedToNative<::vtkParallelCoordinatesActor>(m_instance)->GetLabelTextProperty());
  return gcnew vtkTextProperty(IntPtr(retVal), false);
}



int vtkParallelCoordinatesActor::RenderOpaqueGeometry(vtkViewport^ arg0)
{
  ::vtkViewport* arg0Wrap = vtk::ConvertManagedToNative<::vtkViewport>(arg0->GetNativePointer());
  int retVal = vtk::ConvertManagedToNative<::vtkParallelCoordinatesActor>(m_instance)->RenderOpaqueGeometry(arg0Wrap);
  return retVal;
}



int vtkParallelCoordinatesActor::RenderOverlay(vtkViewport^ arg0)
{
  ::vtkViewport* arg0Wrap = vtk::ConvertManagedToNative<::vtkViewport>(arg0->GetNativePointer());
  int retVal = vtk::ConvertManagedToNative<::vtkParallelCoordinatesActor>(m_instance)->RenderOverlay(arg0Wrap);
  return retVal;
}



int vtkParallelCoordinatesActor::RenderTranslucentGeometry(vtkViewport^ arg0)
{
  ::vtkViewport* arg0Wrap = vtk::ConvertManagedToNative<::vtkViewport>(arg0->GetNativePointer());
  int retVal = vtk::ConvertManagedToNative<::vtkParallelCoordinatesActor>(m_instance)->RenderTranslucentGeometry(arg0Wrap);
  return retVal;
}



void vtkParallelCoordinatesActor::SetInput(vtkDataObject^ arg0)
{
  ::vtkDataObject* arg0Wrap = vtk::ConvertManagedToNative<::vtkDataObject>(arg0->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkParallelCoordinatesActor>(m_instance)->SetInput(arg0Wrap);
}



vtkDataObject^ vtkParallelCoordinatesActor::GetInput()
{
  ::vtkDataObject* retVal = static_cast<::vtkDataObject*>(vtk::ConvertManagedToNative<::vtkParallelCoordinatesActor>(m_instance)->GetInput());
  return gcnew vtkDataObject(IntPtr(retVal), false);
}



void vtkParallelCoordinatesActor::ReleaseGraphicsResources(vtkWindow^ arg0)
{
  ::vtkWindow* arg0Wrap = vtk::ConvertManagedToNative<::vtkWindow>(arg0->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkParallelCoordinatesActor>(m_instance)->ReleaseGraphicsResources(arg0Wrap);
}



  vtkParallelCoordinatesActor::vtkParallelCoordinatesActor(System::IntPtr native, bool bConst) : vtkActor2D(native, bConst) {}



  vtkParallelCoordinatesActor::vtkParallelCoordinatesActor(bool donothing) : vtkActor2D(donothing) {}



  vtkParallelCoordinatesActor::vtkParallelCoordinatesActor() : vtkActor2D(false) {
  this->SetNativePointer(IntPtr(::vtkParallelCoordinatesActor::New()));
}



  vtkParallelCoordinatesActor::~vtkParallelCoordinatesActor() { }





} // end namespace vtkRendering
