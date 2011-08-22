

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkImageThresholdDotNet.h"

// native includes
#include "strstream"
#include "vtkImageThreshold.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkImageThreshold::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkImageThreshold>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkImageThreshold::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkImageThreshold>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkImageThreshold^ vtkImageThreshold::NewInstance()
{
  ::vtkImageThreshold* retVal = static_cast<::vtkImageThreshold*>(vtk::ConvertManagedToNative<::vtkImageThreshold>(m_instance)->NewInstance());
  return gcnew vtkImageThreshold(IntPtr(retVal), false);
}



vtkImageThreshold^ vtkImageThreshold::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkImageThreshold* retVal = static_cast<::vtkImageThreshold*>(::vtkImageThreshold::SafeDownCast(oWrap));
  return gcnew vtkImageThreshold(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkImageThreshold::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkImageThreshold>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkImageThreshold::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkImageThreshold>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkImageThreshold::ThresholdByUpper(double thresh)
{
  vtk::ConvertManagedToNative<::vtkImageThreshold>(m_instance)->ThresholdByUpper(thresh);
}



void vtkImageThreshold::ThresholdByLower(double thresh)
{
  vtk::ConvertManagedToNative<::vtkImageThreshold>(m_instance)->ThresholdByLower(thresh);
}



void vtkImageThreshold::ThresholdBetween(double lower, double upper)
{
  vtk::ConvertManagedToNative<::vtkImageThreshold>(m_instance)->ThresholdBetween(lower, upper);
}



void vtkImageThreshold::SetReplaceIn(int arg0)
{
  vtk::ConvertManagedToNative<::vtkImageThreshold>(m_instance)->SetReplaceIn(arg0);
}



int vtkImageThreshold::GetReplaceIn()
{
  int retVal = vtk::ConvertManagedToNative<::vtkImageThreshold>(m_instance)->GetReplaceIn();
  return retVal;
}



void vtkImageThreshold::ReplaceInOn()
{
  vtk::ConvertManagedToNative<::vtkImageThreshold>(m_instance)->ReplaceInOn();
}



void vtkImageThreshold::ReplaceInOff()
{
  vtk::ConvertManagedToNative<::vtkImageThreshold>(m_instance)->ReplaceInOff();
}



void vtkImageThreshold::SetInValue(double val)
{
  vtk::ConvertManagedToNative<::vtkImageThreshold>(m_instance)->SetInValue(val);
}



double vtkImageThreshold::GetInValue()
{
  double retVal = vtk::ConvertManagedToNative<::vtkImageThreshold>(m_instance)->GetInValue();
  return retVal;
}



void vtkImageThreshold::SetReplaceOut(int arg0)
{
  vtk::ConvertManagedToNative<::vtkImageThreshold>(m_instance)->SetReplaceOut(arg0);
}



int vtkImageThreshold::GetReplaceOut()
{
  int retVal = vtk::ConvertManagedToNative<::vtkImageThreshold>(m_instance)->GetReplaceOut();
  return retVal;
}



void vtkImageThreshold::ReplaceOutOn()
{
  vtk::ConvertManagedToNative<::vtkImageThreshold>(m_instance)->ReplaceOutOn();
}



void vtkImageThreshold::ReplaceOutOff()
{
  vtk::ConvertManagedToNative<::vtkImageThreshold>(m_instance)->ReplaceOutOff();
}



void vtkImageThreshold::SetOutValue(double val)
{
  vtk::ConvertManagedToNative<::vtkImageThreshold>(m_instance)->SetOutValue(val);
}



double vtkImageThreshold::GetOutValue()
{
  double retVal = vtk::ConvertManagedToNative<::vtkImageThreshold>(m_instance)->GetOutValue();
  return retVal;
}



double vtkImageThreshold::GetUpperThreshold()
{
  double retVal = vtk::ConvertManagedToNative<::vtkImageThreshold>(m_instance)->GetUpperThreshold();
  return retVal;
}



double vtkImageThreshold::GetLowerThreshold()
{
  double retVal = vtk::ConvertManagedToNative<::vtkImageThreshold>(m_instance)->GetLowerThreshold();
  return retVal;
}



void vtkImageThreshold::SetOutputScalarType(int arg0)
{
  vtk::ConvertManagedToNative<::vtkImageThreshold>(m_instance)->SetOutputScalarType(arg0);
}



int vtkImageThreshold::GetOutputScalarType()
{
  int retVal = vtk::ConvertManagedToNative<::vtkImageThreshold>(m_instance)->GetOutputScalarType();
  return retVal;
}



void vtkImageThreshold::SetOutputScalarTypeToDouble()
{
  vtk::ConvertManagedToNative<::vtkImageThreshold>(m_instance)->SetOutputScalarTypeToDouble();
}



void vtkImageThreshold::SetOutputScalarTypeToFloat()
{
  vtk::ConvertManagedToNative<::vtkImageThreshold>(m_instance)->SetOutputScalarTypeToFloat();
}



void vtkImageThreshold::SetOutputScalarTypeToLong()
{
  vtk::ConvertManagedToNative<::vtkImageThreshold>(m_instance)->SetOutputScalarTypeToLong();
}



void vtkImageThreshold::SetOutputScalarTypeToUnsignedLong()
{
  vtk::ConvertManagedToNative<::vtkImageThreshold>(m_instance)->SetOutputScalarTypeToUnsignedLong();
}



void vtkImageThreshold::SetOutputScalarTypeToInt()
{
  vtk::ConvertManagedToNative<::vtkImageThreshold>(m_instance)->SetOutputScalarTypeToInt();
}



void vtkImageThreshold::SetOutputScalarTypeToUnsignedInt()
{
  vtk::ConvertManagedToNative<::vtkImageThreshold>(m_instance)->SetOutputScalarTypeToUnsignedInt();
}



void vtkImageThreshold::SetOutputScalarTypeToShort()
{
  vtk::ConvertManagedToNative<::vtkImageThreshold>(m_instance)->SetOutputScalarTypeToShort();
}



void vtkImageThreshold::SetOutputScalarTypeToUnsignedShort()
{
  vtk::ConvertManagedToNative<::vtkImageThreshold>(m_instance)->SetOutputScalarTypeToUnsignedShort();
}



void vtkImageThreshold::SetOutputScalarTypeToChar()
{
  vtk::ConvertManagedToNative<::vtkImageThreshold>(m_instance)->SetOutputScalarTypeToChar();
}



void vtkImageThreshold::SetOutputScalarTypeToSignedChar()
{
  vtk::ConvertManagedToNative<::vtkImageThreshold>(m_instance)->SetOutputScalarTypeToSignedChar();
}



void vtkImageThreshold::SetOutputScalarTypeToUnsignedChar()
{
  vtk::ConvertManagedToNative<::vtkImageThreshold>(m_instance)->SetOutputScalarTypeToUnsignedChar();
}



  vtkImageThreshold::vtkImageThreshold(System::IntPtr native, bool bConst) : vtkThreadedImageAlgorithm(native, bConst) {}



  vtkImageThreshold::vtkImageThreshold(bool donothing) : vtkThreadedImageAlgorithm(donothing) {}



  vtkImageThreshold::vtkImageThreshold() : vtkThreadedImageAlgorithm(false) {
  this->SetNativePointer(IntPtr(::vtkImageThreshold::New()));
}



  vtkImageThreshold::~vtkImageThreshold() { }





} // end namespace vtkImaging
