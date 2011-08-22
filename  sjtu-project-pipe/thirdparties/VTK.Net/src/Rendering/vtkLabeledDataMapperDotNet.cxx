

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkLabeledDataMapperDotNet.h"
#include "vtkTextPropertyDotNet.h"

// native includes
#include "strstream"
#include "vtkLabeledDataMapper.h"
#include "vtkActor2D.h"
#include "vtkDataSet.h"
#include "vtkObject.h"
#include "vtkTextProperty.h"
#include "vtkViewport.h"
#include "vtkWindow.h"

using namespace System;

namespace vtk {

System::String^ vtkLabeledDataMapper::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkLabeledDataMapper>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkLabeledDataMapper::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkLabeledDataMapper>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkLabeledDataMapper^ vtkLabeledDataMapper::NewInstance()
{
  ::vtkLabeledDataMapper* retVal = static_cast<::vtkLabeledDataMapper*>(vtk::ConvertManagedToNative<::vtkLabeledDataMapper>(m_instance)->NewInstance());
  return gcnew vtkLabeledDataMapper(IntPtr(retVal), false);
}



vtkLabeledDataMapper^ vtkLabeledDataMapper::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkLabeledDataMapper* retVal = static_cast<::vtkLabeledDataMapper*>(::vtkLabeledDataMapper::SafeDownCast(oWrap));
  return gcnew vtkLabeledDataMapper(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkLabeledDataMapper::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkLabeledDataMapper>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkLabeledDataMapper::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkLabeledDataMapper>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkLabeledDataMapper::SetLabelFormat(System::String^ arg0)
{
  char* arg0Wrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(arg0).ToPointer());
  vtk::ConvertManagedToNative<::vtkLabeledDataMapper>(m_instance)->SetLabelFormat(arg0Wrap);
  arg0->Remove(0,arg0->Length);
  arg0->Insert(0,System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(arg0Wrap)));
System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(arg0Wrap));
}



System::String^ vtkLabeledDataMapper::GetLabelFormat()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkLabeledDataMapper>(m_instance)->GetLabelFormat();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



void vtkLabeledDataMapper::SetLabeledComponent(int arg0)
{
  vtk::ConvertManagedToNative<::vtkLabeledDataMapper>(m_instance)->SetLabeledComponent(arg0);
}



int vtkLabeledDataMapper::GetLabeledComponent()
{
  int retVal = vtk::ConvertManagedToNative<::vtkLabeledDataMapper>(m_instance)->GetLabeledComponent();
  return retVal;
}



void vtkLabeledDataMapper::SetFieldDataArray(int arg0)
{
  vtk::ConvertManagedToNative<::vtkLabeledDataMapper>(m_instance)->SetFieldDataArray(arg0);
}



int vtkLabeledDataMapper::GetFieldDataArrayMinValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkLabeledDataMapper>(m_instance)->GetFieldDataArrayMinValue();
  return retVal;
}



int vtkLabeledDataMapper::GetFieldDataArrayMaxValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkLabeledDataMapper>(m_instance)->GetFieldDataArrayMaxValue();
  return retVal;
}



int vtkLabeledDataMapper::GetFieldDataArray()
{
  int retVal = vtk::ConvertManagedToNative<::vtkLabeledDataMapper>(m_instance)->GetFieldDataArray();
  return retVal;
}



void vtkLabeledDataMapper::SetInput(vtkDataSet^ arg0)
{
  ::vtkDataSet* arg0Wrap = vtk::ConvertManagedToNative<::vtkDataSet>(arg0->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkLabeledDataMapper>(m_instance)->SetInput(arg0Wrap);
}



vtkDataSet^ vtkLabeledDataMapper::GetInput()
{
  ::vtkDataSet* retVal = static_cast<::vtkDataSet*>(vtk::ConvertManagedToNative<::vtkLabeledDataMapper>(m_instance)->GetInput());
  return gcnew vtkDataSet(IntPtr(retVal), false);
}



void vtkLabeledDataMapper::SetLabelMode(int arg0)
{
  vtk::ConvertManagedToNative<::vtkLabeledDataMapper>(m_instance)->SetLabelMode(arg0);
}



int vtkLabeledDataMapper::GetLabelMode()
{
  int retVal = vtk::ConvertManagedToNative<::vtkLabeledDataMapper>(m_instance)->GetLabelMode();
  return retVal;
}



void vtkLabeledDataMapper::SetLabelModeToLabelIds()
{
  vtk::ConvertManagedToNative<::vtkLabeledDataMapper>(m_instance)->SetLabelModeToLabelIds();
}



void vtkLabeledDataMapper::SetLabelModeToLabelScalars()
{
  vtk::ConvertManagedToNative<::vtkLabeledDataMapper>(m_instance)->SetLabelModeToLabelScalars();
}



void vtkLabeledDataMapper::SetLabelModeToLabelVectors()
{
  vtk::ConvertManagedToNative<::vtkLabeledDataMapper>(m_instance)->SetLabelModeToLabelVectors();
}



void vtkLabeledDataMapper::SetLabelModeToLabelNormals()
{
  vtk::ConvertManagedToNative<::vtkLabeledDataMapper>(m_instance)->SetLabelModeToLabelNormals();
}



void vtkLabeledDataMapper::SetLabelModeToLabelTCoords()
{
  vtk::ConvertManagedToNative<::vtkLabeledDataMapper>(m_instance)->SetLabelModeToLabelTCoords();
}



void vtkLabeledDataMapper::SetLabelModeToLabelTensors()
{
  vtk::ConvertManagedToNative<::vtkLabeledDataMapper>(m_instance)->SetLabelModeToLabelTensors();
}



void vtkLabeledDataMapper::SetLabelModeToLabelFieldData()
{
  vtk::ConvertManagedToNative<::vtkLabeledDataMapper>(m_instance)->SetLabelModeToLabelFieldData();
}



void vtkLabeledDataMapper::SetLabelTextProperty(vtkTextProperty^ p)
{
  ::vtkTextProperty* pWrap = vtk::ConvertManagedToNative<::vtkTextProperty>(p->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkLabeledDataMapper>(m_instance)->SetLabelTextProperty(pWrap);
}



vtkTextProperty^ vtkLabeledDataMapper::GetLabelTextProperty()
{
  ::vtkTextProperty* retVal = static_cast<::vtkTextProperty*>(vtk::ConvertManagedToNative<::vtkLabeledDataMapper>(m_instance)->GetLabelTextProperty());
  return gcnew vtkTextProperty(IntPtr(retVal), false);
}



void vtkLabeledDataMapper::RenderOpaqueGeometry(vtkViewport^ viewport, vtkActor2D^ actor)
{
  ::vtkViewport* viewportWrap = vtk::ConvertManagedToNative<::vtkViewport>(viewport->GetNativePointer());
  ::vtkActor2D* actorWrap = vtk::ConvertManagedToNative<::vtkActor2D>(actor->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkLabeledDataMapper>(m_instance)->RenderOpaqueGeometry(viewportWrap, actorWrap);
}



void vtkLabeledDataMapper::RenderOverlay(vtkViewport^ viewport, vtkActor2D^ actor)
{
  ::vtkViewport* viewportWrap = vtk::ConvertManagedToNative<::vtkViewport>(viewport->GetNativePointer());
  ::vtkActor2D* actorWrap = vtk::ConvertManagedToNative<::vtkActor2D>(actor->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkLabeledDataMapper>(m_instance)->RenderOverlay(viewportWrap, actorWrap);
}



void vtkLabeledDataMapper::ReleaseGraphicsResources(vtkWindow^ arg0)
{
  ::vtkWindow* arg0Wrap = vtk::ConvertManagedToNative<::vtkWindow>(arg0->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkLabeledDataMapper>(m_instance)->ReleaseGraphicsResources(arg0Wrap);
}



  vtkLabeledDataMapper::vtkLabeledDataMapper(System::IntPtr native, bool bConst) : vtkMapper2D(native, bConst) {}



  vtkLabeledDataMapper::vtkLabeledDataMapper(bool donothing) : vtkMapper2D(donothing) {}



  vtkLabeledDataMapper::vtkLabeledDataMapper() : vtkMapper2D(false) {
  this->SetNativePointer(IntPtr(::vtkLabeledDataMapper::New()));
}



  vtkLabeledDataMapper::~vtkLabeledDataMapper() { }





} // end namespace vtkRendering
