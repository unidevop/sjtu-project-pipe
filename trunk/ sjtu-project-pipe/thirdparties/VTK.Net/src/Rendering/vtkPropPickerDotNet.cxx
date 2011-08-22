

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkPropPickerDotNet.h"
#include "vtkRendererDotNet.h"

// native includes
#include "strstream"
#include "vtkPropPicker.h"
#include "vtkObject.h"
#include "vtkPropCollection.h"
#include "vtkRenderer.h"

using namespace System;

namespace vtk {

System::String^ vtkPropPicker::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkPropPicker>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkPropPicker::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkPropPicker>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkPropPicker^ vtkPropPicker::NewInstance()
{
  ::vtkPropPicker* retVal = static_cast<::vtkPropPicker*>(vtk::ConvertManagedToNative<::vtkPropPicker>(m_instance)->NewInstance());
  return gcnew vtkPropPicker(IntPtr(retVal), false);
}



vtkPropPicker^ vtkPropPicker::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkPropPicker* retVal = static_cast<::vtkPropPicker*>(::vtkPropPicker::SafeDownCast(oWrap));
  return gcnew vtkPropPicker(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkPropPicker::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkPropPicker>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkPropPicker::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkPropPicker>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




int vtkPropPicker::PickProp(double selectionX, double selectionY, vtkRenderer^ renderer)
{
  ::vtkRenderer* rendererWrap = vtk::ConvertManagedToNative<::vtkRenderer>(renderer->GetNativePointer());
  int retVal = vtk::ConvertManagedToNative<::vtkPropPicker>(m_instance)->PickProp(selectionX, selectionY, rendererWrap);
  return retVal;
}



int vtkPropPicker::PickProp(double selectionX, double selectionY, vtkRenderer^ renderer, vtkPropCollection^ pickfrom)
{
  ::vtkRenderer* rendererWrap = vtk::ConvertManagedToNative<::vtkRenderer>(renderer->GetNativePointer());
  ::vtkPropCollection* pickfromWrap = vtk::ConvertManagedToNative<::vtkPropCollection>(pickfrom->GetNativePointer());
  int retVal = vtk::ConvertManagedToNative<::vtkPropPicker>(m_instance)->PickProp(selectionX, selectionY, rendererWrap, pickfromWrap);
  return retVal;
}



int vtkPropPicker::Pick(double selectionX, double selectionY, double selectionZ, vtkRenderer^ renderer)
{
  ::vtkRenderer* rendererWrap = vtk::ConvertManagedToNative<::vtkRenderer>(renderer->GetNativePointer());
  int retVal = vtk::ConvertManagedToNative<::vtkPropPicker>(m_instance)->Pick(selectionX, selectionY, selectionZ, rendererWrap);
  return retVal;
}



int vtkPropPicker::Pick(array<double>^ selectionPt, vtkRenderer^ renderer)
{
  pin_ptr<double> selectionPtPin = &selectionPt[0];
  double* nativeselectionPtPin = selectionPtPin;
  ::vtkRenderer* rendererWrap = vtk::ConvertManagedToNative<::vtkRenderer>(renderer->GetNativePointer());
  int retVal = vtk::ConvertManagedToNative<::vtkPropPicker>(m_instance)->Pick(nativeselectionPtPin, rendererWrap);
  return retVal;
}



  vtkPropPicker::vtkPropPicker(System::IntPtr native, bool bConst) : vtkAbstractPropPicker(native, bConst) {}



  vtkPropPicker::vtkPropPicker(bool donothing) : vtkAbstractPropPicker(donothing) {}



  vtkPropPicker::vtkPropPicker() : vtkAbstractPropPicker(false) {
  this->SetNativePointer(IntPtr(::vtkPropPicker::New()));
}



  vtkPropPicker::~vtkPropPicker() { }





} // end namespace vtkRendering
