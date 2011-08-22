

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkPickerDotNet.h"
#include "vtkAbstractMapper3DDotNet.h"
#include "vtkActorCollectionDotNet.h"
#include "vtkProp3DCollectionDotNet.h"
#include "vtkRendererDotNet.h"

// native includes
#include "strstream"
#include "vtkPicker.h"
#include "vtkAbstractMapper3D.h"
#include "vtkActorCollection.h"
#include "vtkDataSet.h"
#include "vtkObject.h"
#include "vtkPoints.h"
#include "vtkProp3DCollection.h"
#include "vtkRenderer.h"

using namespace System;

namespace vtk {

System::String^ vtkPicker::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkPicker>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkPicker::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkPicker>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkPicker^ vtkPicker::NewInstance()
{
  ::vtkPicker* retVal = static_cast<::vtkPicker*>(vtk::ConvertManagedToNative<::vtkPicker>(m_instance)->NewInstance());
  return gcnew vtkPicker(IntPtr(retVal), false);
}



vtkPicker^ vtkPicker::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkPicker* retVal = static_cast<::vtkPicker*>(::vtkPicker::SafeDownCast(oWrap));
  return gcnew vtkPicker(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkPicker::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkPicker>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkPicker::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkPicker>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkPicker::SetTolerance(double arg0)
{
  vtk::ConvertManagedToNative<::vtkPicker>(m_instance)->SetTolerance(arg0);
}



double vtkPicker::GetTolerance()
{
  double retVal = vtk::ConvertManagedToNative<::vtkPicker>(m_instance)->GetTolerance();
  return retVal;
}



array<double>^ vtkPicker::GetMapperPosition()
{
  const double* retVal = vtk::ConvertManagedToNative<::vtkPicker>(m_instance)->GetMapperPosition();
  array<double>^ mRetVal = gcnew array<double>(3);
  for (size_t cprIdx=0; cprIdx<3; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



vtkAbstractMapper3D^ vtkPicker::GetMapper()
{
  ::vtkAbstractMapper3D* retVal = static_cast<::vtkAbstractMapper3D*>(vtk::ConvertManagedToNative<::vtkPicker>(m_instance)->GetMapper());
  return gcnew vtkAbstractMapper3D(IntPtr(retVal), false);
}



vtkDataSet^ vtkPicker::GetDataSet()
{
  ::vtkDataSet* retVal = static_cast<::vtkDataSet*>(vtk::ConvertManagedToNative<::vtkPicker>(m_instance)->GetDataSet());
  return gcnew vtkDataSet(IntPtr(retVal), false);
}



vtkProp3DCollection^ vtkPicker::GetProp3Ds()
{
  ::vtkProp3DCollection* retVal = static_cast<::vtkProp3DCollection*>(vtk::ConvertManagedToNative<::vtkPicker>(m_instance)->GetProp3Ds());
  return gcnew vtkProp3DCollection(IntPtr(retVal), false);
}



vtkActorCollection^ vtkPicker::GetActors()
{
  ::vtkActorCollection* retVal = static_cast<::vtkActorCollection*>(vtk::ConvertManagedToNative<::vtkPicker>(m_instance)->GetActors());
  return gcnew vtkActorCollection(IntPtr(retVal), false);
}



vtkPoints^ vtkPicker::GetPickedPositions()
{
  ::vtkPoints* retVal = static_cast<::vtkPoints*>(vtk::ConvertManagedToNative<::vtkPicker>(m_instance)->GetPickedPositions());
  return gcnew vtkPoints(IntPtr(retVal), false);
}



int vtkPicker::Pick(double selectionX, double selectionY, double selectionZ, vtkRenderer^ renderer)
{
  ::vtkRenderer* rendererWrap = vtk::ConvertManagedToNative<::vtkRenderer>(renderer->GetNativePointer());
  int retVal = vtk::ConvertManagedToNative<::vtkPicker>(m_instance)->Pick(selectionX, selectionY, selectionZ, rendererWrap);
  return retVal;
}



int vtkPicker::Pick(array<double>^ selectionPt, vtkRenderer^ ren)
{
  pin_ptr<double> selectionPtPin = &selectionPt[0];
  double* nativeselectionPtPin = selectionPtPin;
  ::vtkRenderer* renWrap = vtk::ConvertManagedToNative<::vtkRenderer>(ren->GetNativePointer());
  int retVal = vtk::ConvertManagedToNative<::vtkPicker>(m_instance)->Pick(nativeselectionPtPin, renWrap);
  return retVal;
}



  vtkPicker::vtkPicker(System::IntPtr native, bool bConst) : vtkAbstractPropPicker(native, bConst) {}



  vtkPicker::vtkPicker(bool donothing) : vtkAbstractPropPicker(donothing) {}



  vtkPicker::vtkPicker() : vtkAbstractPropPicker(false) {
  this->SetNativePointer(IntPtr(::vtkPicker::New()));
}



  vtkPicker::~vtkPicker() { }





} // end namespace vtkRendering
