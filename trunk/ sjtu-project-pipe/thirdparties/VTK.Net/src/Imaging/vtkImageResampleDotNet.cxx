

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkImageResampleDotNet.h"

// native includes
#include "strstream"
#include "vtkImageResample.h"
#include "vtkInformation.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkImageResample::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkImageResample>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkImageResample::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkImageResample>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkImageResample^ vtkImageResample::NewInstance()
{
  ::vtkImageResample* retVal = static_cast<::vtkImageResample*>(vtk::ConvertManagedToNative<::vtkImageResample>(m_instance)->NewInstance());
  return gcnew vtkImageResample(IntPtr(retVal), false);
}



vtkImageResample^ vtkImageResample::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkImageResample* retVal = static_cast<::vtkImageResample*>(::vtkImageResample::SafeDownCast(oWrap));
  return gcnew vtkImageResample(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkImageResample::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkImageResample>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkImageResample::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkImageResample>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkImageResample::SetAxisOutputSpacing(int axis, double spacing)
{
  vtk::ConvertManagedToNative<::vtkImageResample>(m_instance)->SetAxisOutputSpacing(axis, spacing);
}



void vtkImageResample::SetAxisMagnificationFactor(int axis, double factor)
{
  vtk::ConvertManagedToNative<::vtkImageResample>(m_instance)->SetAxisMagnificationFactor(axis, factor);
}



double vtkImageResample::GetAxisMagnificationFactor(int axis, vtkInformation^ inInfo)
{
  ::vtkInformation* inInfoWrap = vtk::ConvertManagedToNative<::vtkInformation>(inInfo->GetNativePointer());
  double retVal = vtk::ConvertManagedToNative<::vtkImageResample>(m_instance)->GetAxisMagnificationFactor(axis, inInfoWrap);
  return retVal;
}



void vtkImageResample::SetDimensionality(int arg0)
{
  vtk::ConvertManagedToNative<::vtkImageResample>(m_instance)->SetDimensionality(arg0);
}



int vtkImageResample::GetDimensionality()
{
  int retVal = vtk::ConvertManagedToNative<::vtkImageResample>(m_instance)->GetDimensionality();
  return retVal;
}



  vtkImageResample::vtkImageResample(System::IntPtr native, bool bConst) : vtkImageReslice(native, bConst) {}



  vtkImageResample::vtkImageResample(bool donothing) : vtkImageReslice(donothing) {}



  vtkImageResample::vtkImageResample() : vtkImageReslice(false) {
  this->SetNativePointer(IntPtr(::vtkImageResample::New()));
}



  vtkImageResample::~vtkImageResample() { }





} // end namespace vtkImaging
