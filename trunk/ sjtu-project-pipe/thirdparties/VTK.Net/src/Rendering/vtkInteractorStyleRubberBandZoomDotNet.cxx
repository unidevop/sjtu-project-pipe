

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkInteractorStyleRubberBandZoomDotNet.h"

// native includes
#include "strstream"
#include "vtkInteractorStyleRubberBandZoom.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkInteractorStyleRubberBandZoom::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkInteractorStyleRubberBandZoom>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkInteractorStyleRubberBandZoom::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkInteractorStyleRubberBandZoom>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkInteractorStyleRubberBandZoom^ vtkInteractorStyleRubberBandZoom::NewInstance()
{
  ::vtkInteractorStyleRubberBandZoom* retVal = static_cast<::vtkInteractorStyleRubberBandZoom*>(vtk::ConvertManagedToNative<::vtkInteractorStyleRubberBandZoom>(m_instance)->NewInstance());
  return gcnew vtkInteractorStyleRubberBandZoom(IntPtr(retVal), false);
}



vtkInteractorStyleRubberBandZoom^ vtkInteractorStyleRubberBandZoom::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkInteractorStyleRubberBandZoom* retVal = static_cast<::vtkInteractorStyleRubberBandZoom*>(::vtkInteractorStyleRubberBandZoom::SafeDownCast(oWrap));
  return gcnew vtkInteractorStyleRubberBandZoom(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkInteractorStyleRubberBandZoom::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkInteractorStyleRubberBandZoom>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkInteractorStyleRubberBandZoom::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkInteractorStyleRubberBandZoom>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkInteractorStyleRubberBandZoom::OnMouseMove()
{
  vtk::ConvertManagedToNative<::vtkInteractorStyleRubberBandZoom>(m_instance)->OnMouseMove();
}



void vtkInteractorStyleRubberBandZoom::OnLeftButtonDown()
{
  vtk::ConvertManagedToNative<::vtkInteractorStyleRubberBandZoom>(m_instance)->OnLeftButtonDown();
}



void vtkInteractorStyleRubberBandZoom::OnLeftButtonUp()
{
  vtk::ConvertManagedToNative<::vtkInteractorStyleRubberBandZoom>(m_instance)->OnLeftButtonUp();
}



  vtkInteractorStyleRubberBandZoom::vtkInteractorStyleRubberBandZoom(System::IntPtr native, bool bConst) : vtkInteractorStyle(native, bConst) {}



  vtkInteractorStyleRubberBandZoom::vtkInteractorStyleRubberBandZoom(bool donothing) : vtkInteractorStyle(donothing) {}



  vtkInteractorStyleRubberBandZoom::vtkInteractorStyleRubberBandZoom() : vtkInteractorStyle(false) {
  this->SetNativePointer(IntPtr(::vtkInteractorStyleRubberBandZoom::New()));
}



  vtkInteractorStyleRubberBandZoom::~vtkInteractorStyleRubberBandZoom() { }





} // end namespace vtkRendering
