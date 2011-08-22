

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkImageGradientDotNet.h"

// native includes
#include "strstream"
#include "vtkImageGradient.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkImageGradient::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkImageGradient>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkImageGradient::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkImageGradient>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkImageGradient^ vtkImageGradient::NewInstance()
{
  ::vtkImageGradient* retVal = static_cast<::vtkImageGradient*>(vtk::ConvertManagedToNative<::vtkImageGradient>(m_instance)->NewInstance());
  return gcnew vtkImageGradient(IntPtr(retVal), false);
}



vtkImageGradient^ vtkImageGradient::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkImageGradient* retVal = static_cast<::vtkImageGradient*>(::vtkImageGradient::SafeDownCast(oWrap));
  return gcnew vtkImageGradient(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkImageGradient::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkImageGradient>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkImageGradient::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkImageGradient>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkImageGradient::SetDimensionality(int arg0)
{
  vtk::ConvertManagedToNative<::vtkImageGradient>(m_instance)->SetDimensionality(arg0);
}



int vtkImageGradient::GetDimensionalityMinValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkImageGradient>(m_instance)->GetDimensionalityMinValue();
  return retVal;
}



int vtkImageGradient::GetDimensionalityMaxValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkImageGradient>(m_instance)->GetDimensionalityMaxValue();
  return retVal;
}



int vtkImageGradient::GetDimensionality()
{
  int retVal = vtk::ConvertManagedToNative<::vtkImageGradient>(m_instance)->GetDimensionality();
  return retVal;
}



void vtkImageGradient::SetHandleBoundaries(int arg0)
{
  vtk::ConvertManagedToNative<::vtkImageGradient>(m_instance)->SetHandleBoundaries(arg0);
}



int vtkImageGradient::GetHandleBoundaries()
{
  int retVal = vtk::ConvertManagedToNative<::vtkImageGradient>(m_instance)->GetHandleBoundaries();
  return retVal;
}



void vtkImageGradient::HandleBoundariesOn()
{
  vtk::ConvertManagedToNative<::vtkImageGradient>(m_instance)->HandleBoundariesOn();
}



void vtkImageGradient::HandleBoundariesOff()
{
  vtk::ConvertManagedToNative<::vtkImageGradient>(m_instance)->HandleBoundariesOff();
}



  vtkImageGradient::vtkImageGradient(System::IntPtr native, bool bConst) : vtkThreadedImageAlgorithm(native, bConst) {}



  vtkImageGradient::vtkImageGradient(bool donothing) : vtkThreadedImageAlgorithm(donothing) {}



  vtkImageGradient::vtkImageGradient() : vtkThreadedImageAlgorithm(false) {
  this->SetNativePointer(IntPtr(::vtkImageGradient::New()));
}



  vtkImageGradient::~vtkImageGradient() { }





} // end namespace vtkImaging
