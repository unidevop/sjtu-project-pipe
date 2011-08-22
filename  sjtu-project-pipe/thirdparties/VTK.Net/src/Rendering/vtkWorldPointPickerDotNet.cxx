

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkWorldPointPickerDotNet.h"
#include "vtkRendererDotNet.h"

// native includes
#include "strstream"
#include "vtkWorldPointPicker.h"
#include "vtkObject.h"
#include "vtkRenderer.h"

using namespace System;

namespace vtk {

System::String^ vtkWorldPointPicker::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkWorldPointPicker>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkWorldPointPicker::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkWorldPointPicker>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkWorldPointPicker^ vtkWorldPointPicker::NewInstance()
{
  ::vtkWorldPointPicker* retVal = static_cast<::vtkWorldPointPicker*>(vtk::ConvertManagedToNative<::vtkWorldPointPicker>(m_instance)->NewInstance());
  return gcnew vtkWorldPointPicker(IntPtr(retVal), false);
}



vtkWorldPointPicker^ vtkWorldPointPicker::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkWorldPointPicker* retVal = static_cast<::vtkWorldPointPicker*>(::vtkWorldPointPicker::SafeDownCast(oWrap));
  return gcnew vtkWorldPointPicker(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkWorldPointPicker::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkWorldPointPicker>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkWorldPointPicker::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkWorldPointPicker>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




int vtkWorldPointPicker::Pick(double selectionX, double selectionY, double selectionZ, vtkRenderer^ renderer)
{
  ::vtkRenderer* rendererWrap = vtk::ConvertManagedToNative<::vtkRenderer>(renderer->GetNativePointer());
  int retVal = vtk::ConvertManagedToNative<::vtkWorldPointPicker>(m_instance)->Pick(selectionX, selectionY, selectionZ, rendererWrap);
  return retVal;
}



int vtkWorldPointPicker::Pick(array<double>^ selectionPt, vtkRenderer^ renderer)
{
  pin_ptr<double> selectionPtPin = &selectionPt[0];
  double* nativeselectionPtPin = selectionPtPin;
  ::vtkRenderer* rendererWrap = vtk::ConvertManagedToNative<::vtkRenderer>(renderer->GetNativePointer());
  int retVal = vtk::ConvertManagedToNative<::vtkWorldPointPicker>(m_instance)->Pick(nativeselectionPtPin, rendererWrap);
  return retVal;
}



  vtkWorldPointPicker::vtkWorldPointPicker(System::IntPtr native, bool bConst) : vtkAbstractPicker(native, bConst) {}



  vtkWorldPointPicker::vtkWorldPointPicker(bool donothing) : vtkAbstractPicker(donothing) {}



  vtkWorldPointPicker::vtkWorldPointPicker() : vtkAbstractPicker(false) {
  this->SetNativePointer(IntPtr(::vtkWorldPointPicker::New()));
}



  vtkWorldPointPicker::~vtkWorldPointPicker() { }





} // end namespace vtkRendering
