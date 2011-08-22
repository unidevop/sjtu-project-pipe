

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkImageOpenClose3DDotNet.h"
#include "vtkImageDilateErode3DDotNet.h"

// native includes
#include "strstream"
#include "vtkImageOpenClose3D.h"
#include "vtkImageDilateErode3D.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkImageOpenClose3D::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkImageOpenClose3D>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkImageOpenClose3D::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkImageOpenClose3D>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkImageOpenClose3D^ vtkImageOpenClose3D::NewInstance()
{
  ::vtkImageOpenClose3D* retVal = static_cast<::vtkImageOpenClose3D*>(vtk::ConvertManagedToNative<::vtkImageOpenClose3D>(m_instance)->NewInstance());
  return gcnew vtkImageOpenClose3D(IntPtr(retVal), false);
}



vtkImageOpenClose3D^ vtkImageOpenClose3D::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkImageOpenClose3D* retVal = static_cast<::vtkImageOpenClose3D*>(::vtkImageOpenClose3D::SafeDownCast(oWrap));
  return gcnew vtkImageOpenClose3D(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkImageOpenClose3D::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkImageOpenClose3D>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkImageOpenClose3D::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkImageOpenClose3D>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




unsigned long vtkImageOpenClose3D::GetMTime()
{
  unsigned long retVal = vtk::ConvertManagedToNative<::vtkImageOpenClose3D>(m_instance)->GetMTime();
  return retVal;
}



void vtkImageOpenClose3D::DebugOn()
{
  vtk::ConvertManagedToNative<::vtkImageOpenClose3D>(m_instance)->DebugOn();
}



void vtkImageOpenClose3D::DebugOff()
{
  vtk::ConvertManagedToNative<::vtkImageOpenClose3D>(m_instance)->DebugOff();
}



void vtkImageOpenClose3D::Modified()
{
  vtk::ConvertManagedToNative<::vtkImageOpenClose3D>(m_instance)->Modified();
}



void vtkImageOpenClose3D::SetKernelSize(int size0, int size1, int size2)
{
  vtk::ConvertManagedToNative<::vtkImageOpenClose3D>(m_instance)->SetKernelSize(size0, size1, size2);
}



void vtkImageOpenClose3D::SetOpenValue(double value)
{
  vtk::ConvertManagedToNative<::vtkImageOpenClose3D>(m_instance)->SetOpenValue(value);
}



double vtkImageOpenClose3D::GetOpenValue()
{
  double retVal = vtk::ConvertManagedToNative<::vtkImageOpenClose3D>(m_instance)->GetOpenValue();
  return retVal;
}



void vtkImageOpenClose3D::SetCloseValue(double value)
{
  vtk::ConvertManagedToNative<::vtkImageOpenClose3D>(m_instance)->SetCloseValue(value);
}



double vtkImageOpenClose3D::GetCloseValue()
{
  double retVal = vtk::ConvertManagedToNative<::vtkImageOpenClose3D>(m_instance)->GetCloseValue();
  return retVal;
}



vtkImageDilateErode3D^ vtkImageOpenClose3D::GetFilter0()
{
  ::vtkImageDilateErode3D* retVal = static_cast<::vtkImageDilateErode3D*>(vtk::ConvertManagedToNative<::vtkImageOpenClose3D>(m_instance)->GetFilter0());
  return gcnew vtkImageDilateErode3D(IntPtr(retVal), false);
}



vtkImageDilateErode3D^ vtkImageOpenClose3D::GetFilter1()
{
  ::vtkImageDilateErode3D* retVal = static_cast<::vtkImageDilateErode3D*>(vtk::ConvertManagedToNative<::vtkImageOpenClose3D>(m_instance)->GetFilter1());
  return gcnew vtkImageDilateErode3D(IntPtr(retVal), false);
}



  vtkImageOpenClose3D::vtkImageOpenClose3D(System::IntPtr native, bool bConst) : vtkImageAlgorithm(native, bConst) {}



  vtkImageOpenClose3D::vtkImageOpenClose3D(bool donothing) : vtkImageAlgorithm(donothing) {}



  vtkImageOpenClose3D::vtkImageOpenClose3D() : vtkImageAlgorithm(false) {
  this->SetNativePointer(IntPtr(::vtkImageOpenClose3D::New()));
}



  vtkImageOpenClose3D::~vtkImageOpenClose3D() { }





} // end namespace vtkImaging
