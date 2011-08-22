

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkImageCorrelationDotNet.h"

// native includes
#include "strstream"
#include "vtkImageCorrelation.h"
#include "vtkDataObject.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkImageCorrelation::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkImageCorrelation>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkImageCorrelation::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkImageCorrelation>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkImageCorrelation^ vtkImageCorrelation::NewInstance()
{
  ::vtkImageCorrelation* retVal = static_cast<::vtkImageCorrelation*>(vtk::ConvertManagedToNative<::vtkImageCorrelation>(m_instance)->NewInstance());
  return gcnew vtkImageCorrelation(IntPtr(retVal), false);
}



vtkImageCorrelation^ vtkImageCorrelation::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkImageCorrelation* retVal = static_cast<::vtkImageCorrelation*>(::vtkImageCorrelation::SafeDownCast(oWrap));
  return gcnew vtkImageCorrelation(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkImageCorrelation::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkImageCorrelation>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkImageCorrelation::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkImageCorrelation>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkImageCorrelation::SetDimensionality(int arg0)
{
  vtk::ConvertManagedToNative<::vtkImageCorrelation>(m_instance)->SetDimensionality(arg0);
}



int vtkImageCorrelation::GetDimensionalityMinValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkImageCorrelation>(m_instance)->GetDimensionalityMinValue();
  return retVal;
}



int vtkImageCorrelation::GetDimensionalityMaxValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkImageCorrelation>(m_instance)->GetDimensionalityMaxValue();
  return retVal;
}



int vtkImageCorrelation::GetDimensionality()
{
  int retVal = vtk::ConvertManagedToNative<::vtkImageCorrelation>(m_instance)->GetDimensionality();
  return retVal;
}



void vtkImageCorrelation::SetInput1(vtkDataObject^ in)
{
  ::vtkDataObject* inWrap = vtk::ConvertManagedToNative<::vtkDataObject>(in->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkImageCorrelation>(m_instance)->SetInput1(inWrap);
}



void vtkImageCorrelation::SetInput2(vtkDataObject^ in)
{
  ::vtkDataObject* inWrap = vtk::ConvertManagedToNative<::vtkDataObject>(in->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkImageCorrelation>(m_instance)->SetInput2(inWrap);
}



  vtkImageCorrelation::vtkImageCorrelation(System::IntPtr native, bool bConst) : vtkThreadedImageAlgorithm(native, bConst) {}



  vtkImageCorrelation::vtkImageCorrelation(bool donothing) : vtkThreadedImageAlgorithm(donothing) {}



  vtkImageCorrelation::vtkImageCorrelation() : vtkThreadedImageAlgorithm(false) {
  this->SetNativePointer(IntPtr(::vtkImageCorrelation::New()));
}



  vtkImageCorrelation::~vtkImageCorrelation() { }





} // end namespace vtkImaging
