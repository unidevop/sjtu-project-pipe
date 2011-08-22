

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkExporterDotNet.h"
#include "vtkRenderWindowDotNet.h"

// native includes
#include "strstream"
#include "vtkExporter.h"
#include "vtkRenderWindow.h"

using namespace System;

namespace vtk {

System::String^ vtkExporter::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkExporter>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkExporter::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkExporter>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkExporter^ vtkExporter::NewInstance()
{
  ::vtkExporter* retVal = static_cast<::vtkExporter*>(vtk::ConvertManagedToNative<::vtkExporter>(m_instance)->NewInstance());
  return gcnew vtkExporter(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkExporter::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkExporter>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkExporter::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkExporter>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkExporter::Write()
{
  vtk::ConvertManagedToNative<::vtkExporter>(m_instance)->Write();
}



void vtkExporter::Update()
{
  vtk::ConvertManagedToNative<::vtkExporter>(m_instance)->Update();
}



void vtkExporter::SetRenderWindow(vtkRenderWindow^ arg0)
{
  ::vtkRenderWindow* arg0Wrap = vtk::ConvertManagedToNative<::vtkRenderWindow>(arg0->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkExporter>(m_instance)->SetRenderWindow(arg0Wrap);
}



vtkRenderWindow^ vtkExporter::GetRenderWindow()
{
  ::vtkRenderWindow* retVal = static_cast<::vtkRenderWindow*>(vtk::ConvertManagedToNative<::vtkExporter>(m_instance)->GetRenderWindow());
  return gcnew vtkRenderWindow(IntPtr(retVal), false);
}



void vtkExporter::SetInput(vtkRenderWindow^ renWin)
{
  ::vtkRenderWindow* renWinWrap = vtk::ConvertManagedToNative<::vtkRenderWindow>(renWin->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkExporter>(m_instance)->SetInput(renWinWrap);
}



vtkRenderWindow^ vtkExporter::GetInput()
{
  ::vtkRenderWindow* retVal = static_cast<::vtkRenderWindow*>(vtk::ConvertManagedToNative<::vtkExporter>(m_instance)->GetInput());
  return gcnew vtkRenderWindow(IntPtr(retVal), false);
}



unsigned long vtkExporter::GetMTime()
{
  unsigned long retVal = vtk::ConvertManagedToNative<::vtkExporter>(m_instance)->GetMTime();
  return retVal;
}



  vtkExporter::vtkExporter(System::IntPtr native, bool bConst) : vtkObject(native, bConst) {}



  vtkExporter::vtkExporter(bool donothing) : vtkObject(donothing) {}



  vtkExporter::vtkExporter() : vtkObject(false) {
  this->SetNativePointer(IntPtr(::vtkExporter::New()));
}



  vtkExporter::~vtkExporter() { }





} // end namespace vtkRendering
