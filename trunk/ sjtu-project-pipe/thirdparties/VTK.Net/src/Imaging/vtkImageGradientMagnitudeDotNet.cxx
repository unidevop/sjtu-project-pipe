

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkImageGradientMagnitudeDotNet.h"

// native includes
#include "strstream"
#include "vtkImageGradientMagnitude.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkImageGradientMagnitude::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkImageGradientMagnitude>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkImageGradientMagnitude::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkImageGradientMagnitude>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkImageGradientMagnitude^ vtkImageGradientMagnitude::NewInstance()
{
  ::vtkImageGradientMagnitude* retVal = static_cast<::vtkImageGradientMagnitude*>(vtk::ConvertManagedToNative<::vtkImageGradientMagnitude>(m_instance)->NewInstance());
  return gcnew vtkImageGradientMagnitude(IntPtr(retVal), false);
}



vtkImageGradientMagnitude^ vtkImageGradientMagnitude::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkImageGradientMagnitude* retVal = static_cast<::vtkImageGradientMagnitude*>(::vtkImageGradientMagnitude::SafeDownCast(oWrap));
  return gcnew vtkImageGradientMagnitude(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkImageGradientMagnitude::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkImageGradientMagnitude>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkImageGradientMagnitude::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkImageGradientMagnitude>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkImageGradientMagnitude::SetHandleBoundaries(int arg0)
{
  vtk::ConvertManagedToNative<::vtkImageGradientMagnitude>(m_instance)->SetHandleBoundaries(arg0);
}



int vtkImageGradientMagnitude::GetHandleBoundaries()
{
  int retVal = vtk::ConvertManagedToNative<::vtkImageGradientMagnitude>(m_instance)->GetHandleBoundaries();
  return retVal;
}



void vtkImageGradientMagnitude::HandleBoundariesOn()
{
  vtk::ConvertManagedToNative<::vtkImageGradientMagnitude>(m_instance)->HandleBoundariesOn();
}



void vtkImageGradientMagnitude::HandleBoundariesOff()
{
  vtk::ConvertManagedToNative<::vtkImageGradientMagnitude>(m_instance)->HandleBoundariesOff();
}



void vtkImageGradientMagnitude::SetDimensionality(int arg0)
{
  vtk::ConvertManagedToNative<::vtkImageGradientMagnitude>(m_instance)->SetDimensionality(arg0);
}



int vtkImageGradientMagnitude::GetDimensionalityMinValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkImageGradientMagnitude>(m_instance)->GetDimensionalityMinValue();
  return retVal;
}



int vtkImageGradientMagnitude::GetDimensionalityMaxValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkImageGradientMagnitude>(m_instance)->GetDimensionalityMaxValue();
  return retVal;
}



int vtkImageGradientMagnitude::GetDimensionality()
{
  int retVal = vtk::ConvertManagedToNative<::vtkImageGradientMagnitude>(m_instance)->GetDimensionality();
  return retVal;
}



  vtkImageGradientMagnitude::vtkImageGradientMagnitude(System::IntPtr native, bool bConst) : vtkThreadedImageAlgorithm(native, bConst) {}



  vtkImageGradientMagnitude::vtkImageGradientMagnitude(bool donothing) : vtkThreadedImageAlgorithm(donothing) {}



  vtkImageGradientMagnitude::vtkImageGradientMagnitude() : vtkThreadedImageAlgorithm(false) {
  this->SetNativePointer(IntPtr(::vtkImageGradientMagnitude::New()));
}



  vtkImageGradientMagnitude::~vtkImageGradientMagnitude() { }





} // end namespace vtkImaging
