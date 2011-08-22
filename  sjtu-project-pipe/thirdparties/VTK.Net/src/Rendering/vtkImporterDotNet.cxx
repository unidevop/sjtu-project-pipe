

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkImporterDotNet.h"
#include "vtkRenderWindowDotNet.h"
#include "vtkRendererDotNet.h"

// native includes
#include "strstream"
#include "vtkImporter.h"
#include "vtkRenderWindow.h"
#include "vtkRenderer.h"

using namespace System;

namespace vtk {

System::String^ vtkImporter::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkImporter>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkImporter::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkImporter>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkImporter^ vtkImporter::NewInstance()
{
  ::vtkImporter* retVal = static_cast<::vtkImporter*>(vtk::ConvertManagedToNative<::vtkImporter>(m_instance)->NewInstance());
  return gcnew vtkImporter(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkImporter::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkImporter>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkImporter::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkImporter>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




vtkRenderer^ vtkImporter::GetRenderer()
{
  ::vtkRenderer* retVal = static_cast<::vtkRenderer*>(vtk::ConvertManagedToNative<::vtkImporter>(m_instance)->GetRenderer());
  return gcnew vtkRenderer(IntPtr(retVal), false);
}



void vtkImporter::SetRenderWindow(vtkRenderWindow^ arg0)
{
  ::vtkRenderWindow* arg0Wrap = vtk::ConvertManagedToNative<::vtkRenderWindow>(arg0->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkImporter>(m_instance)->SetRenderWindow(arg0Wrap);
}



vtkRenderWindow^ vtkImporter::GetRenderWindow()
{
  ::vtkRenderWindow* retVal = static_cast<::vtkRenderWindow*>(vtk::ConvertManagedToNative<::vtkImporter>(m_instance)->GetRenderWindow());
  return gcnew vtkRenderWindow(IntPtr(retVal), false);
}



void vtkImporter::Read()
{
  vtk::ConvertManagedToNative<::vtkImporter>(m_instance)->Read();
}



void vtkImporter::Update()
{
  vtk::ConvertManagedToNative<::vtkImporter>(m_instance)->Update();
}



  vtkImporter::vtkImporter(System::IntPtr native, bool bConst) : vtkObject(native, bConst) {}



  vtkImporter::vtkImporter(bool donothing) : vtkObject(donothing) {}



  vtkImporter::vtkImporter() : vtkObject(false) {
  this->SetNativePointer(IntPtr(::vtkImporter::New()));
}



  vtkImporter::~vtkImporter() { }





} // end namespace vtkRendering
