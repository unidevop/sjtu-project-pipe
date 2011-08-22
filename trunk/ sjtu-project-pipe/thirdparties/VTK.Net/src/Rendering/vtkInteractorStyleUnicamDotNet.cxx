

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkInteractorStyleUnicamDotNet.h"

// native includes
#include "strstream"
#include "vtkInteractorStyleUnicam.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkInteractorStyleUnicam::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkInteractorStyleUnicam>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkInteractorStyleUnicam::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkInteractorStyleUnicam>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkInteractorStyleUnicam^ vtkInteractorStyleUnicam::NewInstance()
{
  ::vtkInteractorStyleUnicam* retVal = static_cast<::vtkInteractorStyleUnicam*>(vtk::ConvertManagedToNative<::vtkInteractorStyleUnicam>(m_instance)->NewInstance());
  return gcnew vtkInteractorStyleUnicam(IntPtr(retVal), false);
}



vtkInteractorStyleUnicam^ vtkInteractorStyleUnicam::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkInteractorStyleUnicam* retVal = static_cast<::vtkInteractorStyleUnicam*>(::vtkInteractorStyleUnicam::SafeDownCast(oWrap));
  return gcnew vtkInteractorStyleUnicam(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkInteractorStyleUnicam::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkInteractorStyleUnicam>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkInteractorStyleUnicam::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkInteractorStyleUnicam>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkInteractorStyleUnicam::SetWorldUpVector(array<double>^ a)
{
  pin_ptr<double> aPin = &a[0];
  double* nativeaPin = aPin;
  vtk::ConvertManagedToNative<::vtkInteractorStyleUnicam>(m_instance)->SetWorldUpVector(nativeaPin);
}



void vtkInteractorStyleUnicam::SetWorldUpVector(double x, double y, double z)
{
  vtk::ConvertManagedToNative<::vtkInteractorStyleUnicam>(m_instance)->SetWorldUpVector(x, y, z);
}



array<double>^ vtkInteractorStyleUnicam::GetWorldUpVector()
{
  const double* retVal = vtk::ConvertManagedToNative<::vtkInteractorStyleUnicam>(m_instance)->GetWorldUpVector();
  array<double>^ mRetVal = gcnew array<double>(3);
  for (size_t cprIdx=0; cprIdx<3; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



void vtkInteractorStyleUnicam::OnMouseMove()
{
  vtk::ConvertManagedToNative<::vtkInteractorStyleUnicam>(m_instance)->OnMouseMove();
}



void vtkInteractorStyleUnicam::OnLeftButtonDown()
{
  vtk::ConvertManagedToNative<::vtkInteractorStyleUnicam>(m_instance)->OnLeftButtonDown();
}



void vtkInteractorStyleUnicam::OnLeftButtonUp()
{
  vtk::ConvertManagedToNative<::vtkInteractorStyleUnicam>(m_instance)->OnLeftButtonUp();
}



void vtkInteractorStyleUnicam::OnLeftButtonMove()
{
  vtk::ConvertManagedToNative<::vtkInteractorStyleUnicam>(m_instance)->OnLeftButtonMove();
}



void vtkInteractorStyleUnicam::OnTimer()
{
  vtk::ConvertManagedToNative<::vtkInteractorStyleUnicam>(m_instance)->OnTimer();
}



  vtkInteractorStyleUnicam::vtkInteractorStyleUnicam(System::IntPtr native, bool bConst) : vtkInteractorStyle(native, bConst) {}



  vtkInteractorStyleUnicam::vtkInteractorStyleUnicam(bool donothing) : vtkInteractorStyle(donothing) {}



  vtkInteractorStyleUnicam::vtkInteractorStyleUnicam() : vtkInteractorStyle(false) {
  this->SetNativePointer(IntPtr(::vtkInteractorStyleUnicam::New()));
}



  vtkInteractorStyleUnicam::~vtkInteractorStyleUnicam() { }





} // end namespace vtkRendering
