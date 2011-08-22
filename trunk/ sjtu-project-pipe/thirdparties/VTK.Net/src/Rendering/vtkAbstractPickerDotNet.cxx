

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkAbstractPickerDotNet.h"
#include "vtkRendererDotNet.h"

// native includes
#include "strstream"
#include "vtkAbstractPicker.h"
#include "vtkProp.h"
#include "vtkPropCollection.h"
#include "vtkRenderer.h"

using namespace System;

namespace vtk {

System::String^ vtkAbstractPicker::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkAbstractPicker>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkAbstractPicker::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkAbstractPicker>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkAbstractPicker^ vtkAbstractPicker::NewInstance()
{
  ::vtkAbstractPicker* retVal = static_cast<::vtkAbstractPicker*>(vtk::ConvertManagedToNative<::vtkAbstractPicker>(m_instance)->NewInstance());
  return gcnew vtkAbstractPicker(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkAbstractPicker::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkAbstractPicker>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkAbstractPicker::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkAbstractPicker>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




vtkRenderer^ vtkAbstractPicker::GetRenderer()
{
  ::vtkRenderer* retVal = static_cast<::vtkRenderer*>(vtk::ConvertManagedToNative<::vtkAbstractPicker>(m_instance)->GetRenderer());
  return gcnew vtkRenderer(IntPtr(retVal), false);
}



array<double>^ vtkAbstractPicker::GetSelectionPoint()
{
  const double* retVal = vtk::ConvertManagedToNative<::vtkAbstractPicker>(m_instance)->GetSelectionPoint();
  array<double>^ mRetVal = gcnew array<double>(3);
  for (size_t cprIdx=0; cprIdx<3; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



array<double>^ vtkAbstractPicker::GetPickPosition()
{
  const double* retVal = vtk::ConvertManagedToNative<::vtkAbstractPicker>(m_instance)->GetPickPosition();
  array<double>^ mRetVal = gcnew array<double>(3);
  for (size_t cprIdx=0; cprIdx<3; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



int vtkAbstractPicker::Pick(double selectionX, double selectionY, double selectionZ, vtkRenderer^ renderer)
{
  ::vtkRenderer* rendererWrap = vtk::ConvertManagedToNative<::vtkRenderer>(renderer->GetNativePointer());
  int retVal = vtk::ConvertManagedToNative<::vtkAbstractPicker>(m_instance)->Pick(selectionX, selectionY, selectionZ, rendererWrap);
  return retVal;
}



int vtkAbstractPicker::Pick(array<double>^ selectionPt, vtkRenderer^ ren)
{
  pin_ptr<double> selectionPtPin = &selectionPt[0];
  double* nativeselectionPtPin = selectionPtPin;
  ::vtkRenderer* renWrap = vtk::ConvertManagedToNative<::vtkRenderer>(ren->GetNativePointer());
  int retVal = vtk::ConvertManagedToNative<::vtkAbstractPicker>(m_instance)->Pick(nativeselectionPtPin, renWrap);
  return retVal;
}



void vtkAbstractPicker::SetPickFromList(int arg0)
{
  vtk::ConvertManagedToNative<::vtkAbstractPicker>(m_instance)->SetPickFromList(arg0);
}



int vtkAbstractPicker::GetPickFromList()
{
  int retVal = vtk::ConvertManagedToNative<::vtkAbstractPicker>(m_instance)->GetPickFromList();
  return retVal;
}



void vtkAbstractPicker::PickFromListOn()
{
  vtk::ConvertManagedToNative<::vtkAbstractPicker>(m_instance)->PickFromListOn();
}



void vtkAbstractPicker::PickFromListOff()
{
  vtk::ConvertManagedToNative<::vtkAbstractPicker>(m_instance)->PickFromListOff();
}



void vtkAbstractPicker::InitializePickList()
{
  vtk::ConvertManagedToNative<::vtkAbstractPicker>(m_instance)->InitializePickList();
}



void vtkAbstractPicker::AddPickList(vtkProp^ arg0)
{
  ::vtkProp* arg0Wrap = vtk::ConvertManagedToNative<::vtkProp>(arg0->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkAbstractPicker>(m_instance)->AddPickList(arg0Wrap);
}



void vtkAbstractPicker::DeletePickList(vtkProp^ arg0)
{
  ::vtkProp* arg0Wrap = vtk::ConvertManagedToNative<::vtkProp>(arg0->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkAbstractPicker>(m_instance)->DeletePickList(arg0Wrap);
}



vtkPropCollection^ vtkAbstractPicker::GetPickList()
{
  ::vtkPropCollection* retVal = static_cast<::vtkPropCollection*>(vtk::ConvertManagedToNative<::vtkAbstractPicker>(m_instance)->GetPickList());
  return gcnew vtkPropCollection(IntPtr(retVal), false);
}



  vtkAbstractPicker::vtkAbstractPicker(System::IntPtr native, bool bConst) : vtkObject(native, bConst) {}



  vtkAbstractPicker::vtkAbstractPicker(bool donothing) : vtkObject(donothing) {}



  vtkAbstractPicker::vtkAbstractPicker() : vtkObject(false) {
  this->SetNativePointer(IntPtr(::vtkAbstractPicker::New()));
}



  vtkAbstractPicker::~vtkAbstractPicker() { }





} // end namespace vtkRendering
