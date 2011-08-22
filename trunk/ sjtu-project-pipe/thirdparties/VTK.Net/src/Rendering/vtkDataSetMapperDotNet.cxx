

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkDataSetMapperDotNet.h"
#include "vtkActorDotNet.h"
#include "vtkPolyDataMapperDotNet.h"
#include "vtkRendererDotNet.h"

// native includes
#include "strstream"
#include "vtkDataSetMapper.h"
#include "vtkActor.h"
#include "vtkDataSet.h"
#include "vtkObject.h"
#include "vtkPolyDataMapper.h"
#include "vtkRenderer.h"
#include "vtkWindow.h"

using namespace System;

namespace vtk {

System::String^ vtkDataSetMapper::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkDataSetMapper>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkDataSetMapper::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkDataSetMapper>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkDataSetMapper^ vtkDataSetMapper::NewInstance()
{
  ::vtkDataSetMapper* retVal = static_cast<::vtkDataSetMapper*>(vtk::ConvertManagedToNative<::vtkDataSetMapper>(m_instance)->NewInstance());
  return gcnew vtkDataSetMapper(IntPtr(retVal), false);
}



vtkDataSetMapper^ vtkDataSetMapper::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkDataSetMapper* retVal = static_cast<::vtkDataSetMapper*>(::vtkDataSetMapper::SafeDownCast(oWrap));
  return gcnew vtkDataSetMapper(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkDataSetMapper::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkDataSetMapper>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkDataSetMapper::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkDataSetMapper>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkDataSetMapper::Render(vtkRenderer^ ren, vtkActor^ act)
{
  ::vtkRenderer* renWrap = vtk::ConvertManagedToNative<::vtkRenderer>(ren->GetNativePointer());
  ::vtkActor* actWrap = vtk::ConvertManagedToNative<::vtkActor>(act->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkDataSetMapper>(m_instance)->Render(renWrap, actWrap);
}



vtkPolyDataMapper^ vtkDataSetMapper::GetPolyDataMapper()
{
  ::vtkPolyDataMapper* retVal = static_cast<::vtkPolyDataMapper*>(vtk::ConvertManagedToNative<::vtkDataSetMapper>(m_instance)->GetPolyDataMapper());
  return gcnew vtkPolyDataMapper(IntPtr(retVal), false);
}



void vtkDataSetMapper::ReleaseGraphicsResources(vtkWindow^ arg0)
{
  ::vtkWindow* arg0Wrap = vtk::ConvertManagedToNative<::vtkWindow>(arg0->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkDataSetMapper>(m_instance)->ReleaseGraphicsResources(arg0Wrap);
}



unsigned long vtkDataSetMapper::GetMTime()
{
  unsigned long retVal = vtk::ConvertManagedToNative<::vtkDataSetMapper>(m_instance)->GetMTime();
  return retVal;
}



void vtkDataSetMapper::SetInput(vtkDataSet^ input)
{
  ::vtkDataSet* inputWrap = vtk::ConvertManagedToNative<::vtkDataSet>(input->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkDataSetMapper>(m_instance)->SetInput(inputWrap);
}



vtkDataSet^ vtkDataSetMapper::GetInput()
{
  ::vtkDataSet* retVal = static_cast<::vtkDataSet*>(vtk::ConvertManagedToNative<::vtkDataSetMapper>(m_instance)->GetInput());
  return gcnew vtkDataSet(IntPtr(retVal), false);
}



  vtkDataSetMapper::vtkDataSetMapper(System::IntPtr native, bool bConst) : vtkMapper(native, bConst) {}



  vtkDataSetMapper::vtkDataSetMapper(bool donothing) : vtkMapper(donothing) {}



  vtkDataSetMapper::vtkDataSetMapper() : vtkMapper(false) {
  this->SetNativePointer(IntPtr(::vtkDataSetMapper::New()));
}



  vtkDataSetMapper::~vtkDataSetMapper() { }





} // end namespace vtkRendering
