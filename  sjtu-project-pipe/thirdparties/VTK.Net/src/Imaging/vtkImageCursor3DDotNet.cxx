

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkImageCursor3DDotNet.h"

// native includes
#include "strstream"
#include "vtkImageCursor3D.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkImageCursor3D::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkImageCursor3D>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkImageCursor3D::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkImageCursor3D>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkImageCursor3D^ vtkImageCursor3D::NewInstance()
{
  ::vtkImageCursor3D* retVal = static_cast<::vtkImageCursor3D*>(vtk::ConvertManagedToNative<::vtkImageCursor3D>(m_instance)->NewInstance());
  return gcnew vtkImageCursor3D(IntPtr(retVal), false);
}



vtkImageCursor3D^ vtkImageCursor3D::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkImageCursor3D* retVal = static_cast<::vtkImageCursor3D*>(::vtkImageCursor3D::SafeDownCast(oWrap));
  return gcnew vtkImageCursor3D(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkImageCursor3D::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkImageCursor3D>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkImageCursor3D::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkImageCursor3D>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkImageCursor3D::SetCursorPosition(double arg0, double arg1, double arg2)
{
  vtk::ConvertManagedToNative<::vtkImageCursor3D>(m_instance)->SetCursorPosition(arg0, arg1, arg2);
}



void vtkImageCursor3D::SetCursorPosition(array<double>^ a)
{
  pin_ptr<double> aPin = &a[0];
  double* nativeaPin = aPin;
  vtk::ConvertManagedToNative<::vtkImageCursor3D>(m_instance)->SetCursorPosition(nativeaPin);
}



array<double>^ vtkImageCursor3D::GetCursorPosition()
{
  const double* retVal = vtk::ConvertManagedToNative<::vtkImageCursor3D>(m_instance)->GetCursorPosition();
  array<double>^ mRetVal = gcnew array<double>(3);
  for (size_t cprIdx=0; cprIdx<3; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



void vtkImageCursor3D::SetCursorValue(double arg0)
{
  vtk::ConvertManagedToNative<::vtkImageCursor3D>(m_instance)->SetCursorValue(arg0);
}



double vtkImageCursor3D::GetCursorValue()
{
  double retVal = vtk::ConvertManagedToNative<::vtkImageCursor3D>(m_instance)->GetCursorValue();
  return retVal;
}



void vtkImageCursor3D::SetCursorRadius(int arg0)
{
  vtk::ConvertManagedToNative<::vtkImageCursor3D>(m_instance)->SetCursorRadius(arg0);
}



int vtkImageCursor3D::GetCursorRadius()
{
  int retVal = vtk::ConvertManagedToNative<::vtkImageCursor3D>(m_instance)->GetCursorRadius();
  return retVal;
}



  vtkImageCursor3D::vtkImageCursor3D(System::IntPtr native, bool bConst) : vtkImageInPlaceFilter(native, bConst) {}



  vtkImageCursor3D::vtkImageCursor3D(bool donothing) : vtkImageInPlaceFilter(donothing) {}



  vtkImageCursor3D::vtkImageCursor3D() : vtkImageInPlaceFilter(false) {
  this->SetNativePointer(IntPtr(::vtkImageCursor3D::New()));
}



  vtkImageCursor3D::~vtkImageCursor3D() { }





} // end namespace vtkImaging
