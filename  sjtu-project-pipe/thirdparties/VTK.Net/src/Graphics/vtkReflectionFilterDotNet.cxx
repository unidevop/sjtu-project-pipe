

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkReflectionFilterDotNet.h"

// native includes
#include "strstream"
#include "vtkReflectionFilter.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkReflectionFilter::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkReflectionFilter>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkReflectionFilter::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkReflectionFilter>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkReflectionFilter^ vtkReflectionFilter::NewInstance()
{
  ::vtkReflectionFilter* retVal = static_cast<::vtkReflectionFilter*>(vtk::ConvertManagedToNative<::vtkReflectionFilter>(m_instance)->NewInstance());
  return gcnew vtkReflectionFilter(IntPtr(retVal), false);
}



vtkReflectionFilter^ vtkReflectionFilter::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkReflectionFilter* retVal = static_cast<::vtkReflectionFilter*>(::vtkReflectionFilter::SafeDownCast(oWrap));
  return gcnew vtkReflectionFilter(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkReflectionFilter::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkReflectionFilter>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkReflectionFilter::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkReflectionFilter>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkReflectionFilter::SetPlane(int arg0)
{
  vtk::ConvertManagedToNative<::vtkReflectionFilter>(m_instance)->SetPlane(arg0);
}



int vtkReflectionFilter::GetPlaneMinValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkReflectionFilter>(m_instance)->GetPlaneMinValue();
  return retVal;
}



int vtkReflectionFilter::GetPlaneMaxValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkReflectionFilter>(m_instance)->GetPlaneMaxValue();
  return retVal;
}



int vtkReflectionFilter::GetPlane()
{
  int retVal = vtk::ConvertManagedToNative<::vtkReflectionFilter>(m_instance)->GetPlane();
  return retVal;
}



void vtkReflectionFilter::SetPlaneToX()
{
  vtk::ConvertManagedToNative<::vtkReflectionFilter>(m_instance)->SetPlaneToX();
}



void vtkReflectionFilter::SetPlaneToY()
{
  vtk::ConvertManagedToNative<::vtkReflectionFilter>(m_instance)->SetPlaneToY();
}



void vtkReflectionFilter::SetPlaneToZ()
{
  vtk::ConvertManagedToNative<::vtkReflectionFilter>(m_instance)->SetPlaneToZ();
}



void vtkReflectionFilter::SetPlaneToXMin()
{
  vtk::ConvertManagedToNative<::vtkReflectionFilter>(m_instance)->SetPlaneToXMin();
}



void vtkReflectionFilter::SetPlaneToYMin()
{
  vtk::ConvertManagedToNative<::vtkReflectionFilter>(m_instance)->SetPlaneToYMin();
}



void vtkReflectionFilter::SetPlaneToZMin()
{
  vtk::ConvertManagedToNative<::vtkReflectionFilter>(m_instance)->SetPlaneToZMin();
}



void vtkReflectionFilter::SetPlaneToXMax()
{
  vtk::ConvertManagedToNative<::vtkReflectionFilter>(m_instance)->SetPlaneToXMax();
}



void vtkReflectionFilter::SetPlaneToYMax()
{
  vtk::ConvertManagedToNative<::vtkReflectionFilter>(m_instance)->SetPlaneToYMax();
}



void vtkReflectionFilter::SetPlaneToZMax()
{
  vtk::ConvertManagedToNative<::vtkReflectionFilter>(m_instance)->SetPlaneToZMax();
}



void vtkReflectionFilter::SetCenter(double arg0)
{
  vtk::ConvertManagedToNative<::vtkReflectionFilter>(m_instance)->SetCenter(arg0);
}



double vtkReflectionFilter::GetCenter()
{
  double retVal = vtk::ConvertManagedToNative<::vtkReflectionFilter>(m_instance)->GetCenter();
  return retVal;
}



void vtkReflectionFilter::SetCopyInput(int arg0)
{
  vtk::ConvertManagedToNative<::vtkReflectionFilter>(m_instance)->SetCopyInput(arg0);
}



int vtkReflectionFilter::GetCopyInput()
{
  int retVal = vtk::ConvertManagedToNative<::vtkReflectionFilter>(m_instance)->GetCopyInput();
  return retVal;
}



void vtkReflectionFilter::CopyInputOn()
{
  vtk::ConvertManagedToNative<::vtkReflectionFilter>(m_instance)->CopyInputOn();
}



void vtkReflectionFilter::CopyInputOff()
{
  vtk::ConvertManagedToNative<::vtkReflectionFilter>(m_instance)->CopyInputOff();
}



  vtkReflectionFilter::vtkReflectionFilter(System::IntPtr native, bool bConst) : vtkUnstructuredGridAlgorithm(native, bConst) {}



  vtkReflectionFilter::vtkReflectionFilter(bool donothing) : vtkUnstructuredGridAlgorithm(donothing) {}



  vtkReflectionFilter::vtkReflectionFilter() : vtkUnstructuredGridAlgorithm(false) {
  this->SetNativePointer(IntPtr(::vtkReflectionFilter::New()));
}



  vtkReflectionFilter::~vtkReflectionFilter() { }





} // end namespace vtkGraphics
