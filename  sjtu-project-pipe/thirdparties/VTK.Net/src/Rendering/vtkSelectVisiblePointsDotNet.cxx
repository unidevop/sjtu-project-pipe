

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkSelectVisiblePointsDotNet.h"
#include "vtkRendererDotNet.h"

// native includes
#include "strstream"
#include "vtkSelectVisiblePoints.h"
#include "vtkObject.h"
#include "vtkRenderer.h"

using namespace System;

namespace vtk {

System::String^ vtkSelectVisiblePoints::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkSelectVisiblePoints>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkSelectVisiblePoints::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkSelectVisiblePoints>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkSelectVisiblePoints^ vtkSelectVisiblePoints::NewInstance()
{
  ::vtkSelectVisiblePoints* retVal = static_cast<::vtkSelectVisiblePoints*>(vtk::ConvertManagedToNative<::vtkSelectVisiblePoints>(m_instance)->NewInstance());
  return gcnew vtkSelectVisiblePoints(IntPtr(retVal), false);
}



vtkSelectVisiblePoints^ vtkSelectVisiblePoints::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkSelectVisiblePoints* retVal = static_cast<::vtkSelectVisiblePoints*>(::vtkSelectVisiblePoints::SafeDownCast(oWrap));
  return gcnew vtkSelectVisiblePoints(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkSelectVisiblePoints::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkSelectVisiblePoints>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkSelectVisiblePoints::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkSelectVisiblePoints>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkSelectVisiblePoints::SetRenderer(vtkRenderer^ ren)
{
  ::vtkRenderer* renWrap = vtk::ConvertManagedToNative<::vtkRenderer>(ren->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkSelectVisiblePoints>(m_instance)->SetRenderer(renWrap);
}



vtkRenderer^ vtkSelectVisiblePoints::GetRenderer()
{
  ::vtkRenderer* retVal = static_cast<::vtkRenderer*>(vtk::ConvertManagedToNative<::vtkSelectVisiblePoints>(m_instance)->GetRenderer());
  return gcnew vtkRenderer(IntPtr(retVal), false);
}



void vtkSelectVisiblePoints::SetSelectionWindow(int arg0)
{
  vtk::ConvertManagedToNative<::vtkSelectVisiblePoints>(m_instance)->SetSelectionWindow(arg0);
}



int vtkSelectVisiblePoints::GetSelectionWindow()
{
  int retVal = vtk::ConvertManagedToNative<::vtkSelectVisiblePoints>(m_instance)->GetSelectionWindow();
  return retVal;
}



void vtkSelectVisiblePoints::SelectionWindowOn()
{
  vtk::ConvertManagedToNative<::vtkSelectVisiblePoints>(m_instance)->SelectionWindowOn();
}



void vtkSelectVisiblePoints::SelectionWindowOff()
{
  vtk::ConvertManagedToNative<::vtkSelectVisiblePoints>(m_instance)->SelectionWindowOff();
}



void vtkSelectVisiblePoints::SetSelection(int arg0, int arg1, int arg2, int arg3)
{
  vtk::ConvertManagedToNative<::vtkSelectVisiblePoints>(m_instance)->SetSelection(arg0, arg1, arg2, arg3);
}



void vtkSelectVisiblePoints::SetSelection(array<int>^ a)
{
  pin_ptr<int> aPin = &a[0];
  int* nativeaPin = aPin;
  vtk::ConvertManagedToNative<::vtkSelectVisiblePoints>(m_instance)->SetSelection(nativeaPin);
}



array<int>^ vtkSelectVisiblePoints::GetSelection()
{
  const int* retVal = vtk::ConvertManagedToNative<::vtkSelectVisiblePoints>(m_instance)->GetSelection();
  array<int>^ mRetVal = gcnew array<int>(4);
  for (size_t cprIdx=0; cprIdx<4; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



void vtkSelectVisiblePoints::SetSelectInvisible(int arg0)
{
  vtk::ConvertManagedToNative<::vtkSelectVisiblePoints>(m_instance)->SetSelectInvisible(arg0);
}



int vtkSelectVisiblePoints::GetSelectInvisible()
{
  int retVal = vtk::ConvertManagedToNative<::vtkSelectVisiblePoints>(m_instance)->GetSelectInvisible();
  return retVal;
}



void vtkSelectVisiblePoints::SelectInvisibleOn()
{
  vtk::ConvertManagedToNative<::vtkSelectVisiblePoints>(m_instance)->SelectInvisibleOn();
}



void vtkSelectVisiblePoints::SelectInvisibleOff()
{
  vtk::ConvertManagedToNative<::vtkSelectVisiblePoints>(m_instance)->SelectInvisibleOff();
}



void vtkSelectVisiblePoints::SetTolerance(double arg0)
{
  vtk::ConvertManagedToNative<::vtkSelectVisiblePoints>(m_instance)->SetTolerance(arg0);
}



double vtkSelectVisiblePoints::GetToleranceMinValue()
{
  double retVal = vtk::ConvertManagedToNative<::vtkSelectVisiblePoints>(m_instance)->GetToleranceMinValue();
  return retVal;
}



double vtkSelectVisiblePoints::GetToleranceMaxValue()
{
  double retVal = vtk::ConvertManagedToNative<::vtkSelectVisiblePoints>(m_instance)->GetToleranceMaxValue();
  return retVal;
}



double vtkSelectVisiblePoints::GetTolerance()
{
  double retVal = vtk::ConvertManagedToNative<::vtkSelectVisiblePoints>(m_instance)->GetTolerance();
  return retVal;
}



unsigned long vtkSelectVisiblePoints::GetMTime()
{
  unsigned long retVal = vtk::ConvertManagedToNative<::vtkSelectVisiblePoints>(m_instance)->GetMTime();
  return retVal;
}



  vtkSelectVisiblePoints::vtkSelectVisiblePoints(System::IntPtr native, bool bConst) : vtkPolyDataAlgorithm(native, bConst) {}



  vtkSelectVisiblePoints::vtkSelectVisiblePoints(bool donothing) : vtkPolyDataAlgorithm(donothing) {}



  vtkSelectVisiblePoints::vtkSelectVisiblePoints() : vtkPolyDataAlgorithm(false) {
  this->SetNativePointer(IntPtr(::vtkSelectVisiblePoints::New()));
}



  vtkSelectVisiblePoints::~vtkSelectVisiblePoints() { }





} // end namespace vtkRendering
