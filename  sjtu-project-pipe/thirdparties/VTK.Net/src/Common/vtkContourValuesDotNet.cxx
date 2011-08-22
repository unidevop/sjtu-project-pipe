

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkContourValuesDotNet.h"

// native includes
#include "strstream"
#include "vtkContourValues.h"

using namespace System;

namespace vtk {

System::String^ vtkContourValues::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkContourValues>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkContourValues::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkContourValues>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkContourValues^ vtkContourValues::NewInstance()
{
  ::vtkContourValues* retVal = static_cast<::vtkContourValues*>(vtk::ConvertManagedToNative<::vtkContourValues>(m_instance)->NewInstance());
  return gcnew vtkContourValues(IntPtr(retVal), false);
}



vtkContourValues^ vtkContourValues::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkContourValues* retVal = static_cast<::vtkContourValues*>(::vtkContourValues::SafeDownCast(oWrap));
  return gcnew vtkContourValues(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkContourValues::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkContourValues>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkContourValues::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkContourValues>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkContourValues::SetValue(int i, double value)
{
  vtk::ConvertManagedToNative<::vtkContourValues>(m_instance)->SetValue(i, value);
}



double vtkContourValues::GetValue(int i)
{
  double retVal = vtk::ConvertManagedToNative<::vtkContourValues>(m_instance)->GetValue(i);
  return retVal;
}



void vtkContourValues::GetValues(array<double>^ contourValues)
{
  pin_ptr<double> contourValuesPin = &contourValues[0];
  double* nativecontourValuesPin = contourValuesPin;
  vtk::ConvertManagedToNative<::vtkContourValues>(m_instance)->GetValues(nativecontourValuesPin);
}



void vtkContourValues::SetNumberOfContours(int number)
{
  vtk::ConvertManagedToNative<::vtkContourValues>(m_instance)->SetNumberOfContours(number);
}



int vtkContourValues::GetNumberOfContours()
{
  int retVal = vtk::ConvertManagedToNative<::vtkContourValues>(m_instance)->GetNumberOfContours();
  return retVal;
}



void vtkContourValues::GenerateValues(int numContours, array<double>^ range)
{
  pin_ptr<double> rangePin = &range[0];
  double* nativerangePin = rangePin;
  vtk::ConvertManagedToNative<::vtkContourValues>(m_instance)->GenerateValues(numContours, nativerangePin);
}



void vtkContourValues::GenerateValues(int numContours, double rangeStart, double rangeEnd)
{
  vtk::ConvertManagedToNative<::vtkContourValues>(m_instance)->GenerateValues(numContours, rangeStart, rangeEnd);
}



  vtkContourValues::vtkContourValues(System::IntPtr native, bool bConst) : vtkObject(native, bConst) {}



  vtkContourValues::vtkContourValues(bool donothing) : vtkObject(donothing) {}



  vtkContourValues::vtkContourValues() : vtkObject(false) {
  this->SetNativePointer(IntPtr(::vtkContourValues::New()));
}



  vtkContourValues::~vtkContourValues() { }





} // end namespace vtkCommon
