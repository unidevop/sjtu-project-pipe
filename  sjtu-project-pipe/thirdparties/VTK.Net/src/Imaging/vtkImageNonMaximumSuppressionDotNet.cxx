

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkImageNonMaximumSuppressionDotNet.h"

// native includes
#include "strstream"
#include "vtkImageNonMaximumSuppression.h"
#include "vtkImageData.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkImageNonMaximumSuppression::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkImageNonMaximumSuppression>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkImageNonMaximumSuppression::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkImageNonMaximumSuppression>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkImageNonMaximumSuppression^ vtkImageNonMaximumSuppression::NewInstance()
{
  ::vtkImageNonMaximumSuppression* retVal = static_cast<::vtkImageNonMaximumSuppression*>(vtk::ConvertManagedToNative<::vtkImageNonMaximumSuppression>(m_instance)->NewInstance());
  return gcnew vtkImageNonMaximumSuppression(IntPtr(retVal), false);
}



vtkImageNonMaximumSuppression^ vtkImageNonMaximumSuppression::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkImageNonMaximumSuppression* retVal = static_cast<::vtkImageNonMaximumSuppression*>(::vtkImageNonMaximumSuppression::SafeDownCast(oWrap));
  return gcnew vtkImageNonMaximumSuppression(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkImageNonMaximumSuppression::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkImageNonMaximumSuppression>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkImageNonMaximumSuppression::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkImageNonMaximumSuppression>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkImageNonMaximumSuppression::SetMagnitudeInput(vtkImageData^ input)
{
  ::vtkImageData* inputWrap = vtk::ConvertManagedToNative<::vtkImageData>(input->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkImageNonMaximumSuppression>(m_instance)->SetMagnitudeInput(inputWrap);
}



void vtkImageNonMaximumSuppression::SetVectorInput(vtkImageData^ input)
{
  ::vtkImageData* inputWrap = vtk::ConvertManagedToNative<::vtkImageData>(input->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkImageNonMaximumSuppression>(m_instance)->SetVectorInput(inputWrap);
}



void vtkImageNonMaximumSuppression::SetHandleBoundaries(int arg0)
{
  vtk::ConvertManagedToNative<::vtkImageNonMaximumSuppression>(m_instance)->SetHandleBoundaries(arg0);
}



int vtkImageNonMaximumSuppression::GetHandleBoundaries()
{
  int retVal = vtk::ConvertManagedToNative<::vtkImageNonMaximumSuppression>(m_instance)->GetHandleBoundaries();
  return retVal;
}



void vtkImageNonMaximumSuppression::HandleBoundariesOn()
{
  vtk::ConvertManagedToNative<::vtkImageNonMaximumSuppression>(m_instance)->HandleBoundariesOn();
}



void vtkImageNonMaximumSuppression::HandleBoundariesOff()
{
  vtk::ConvertManagedToNative<::vtkImageNonMaximumSuppression>(m_instance)->HandleBoundariesOff();
}



void vtkImageNonMaximumSuppression::SetDimensionality(int arg0)
{
  vtk::ConvertManagedToNative<::vtkImageNonMaximumSuppression>(m_instance)->SetDimensionality(arg0);
}



int vtkImageNonMaximumSuppression::GetDimensionalityMinValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkImageNonMaximumSuppression>(m_instance)->GetDimensionalityMinValue();
  return retVal;
}



int vtkImageNonMaximumSuppression::GetDimensionalityMaxValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkImageNonMaximumSuppression>(m_instance)->GetDimensionalityMaxValue();
  return retVal;
}



int vtkImageNonMaximumSuppression::GetDimensionality()
{
  int retVal = vtk::ConvertManagedToNative<::vtkImageNonMaximumSuppression>(m_instance)->GetDimensionality();
  return retVal;
}



  vtkImageNonMaximumSuppression::vtkImageNonMaximumSuppression(System::IntPtr native, bool bConst) : vtkThreadedImageAlgorithm(native, bConst) {}



  vtkImageNonMaximumSuppression::vtkImageNonMaximumSuppression(bool donothing) : vtkThreadedImageAlgorithm(donothing) {}



  vtkImageNonMaximumSuppression::vtkImageNonMaximumSuppression() : vtkThreadedImageAlgorithm(false) {
  this->SetNativePointer(IntPtr(::vtkImageNonMaximumSuppression::New()));
}



  vtkImageNonMaximumSuppression::~vtkImageNonMaximumSuppression() { }





} // end namespace vtkImaging
