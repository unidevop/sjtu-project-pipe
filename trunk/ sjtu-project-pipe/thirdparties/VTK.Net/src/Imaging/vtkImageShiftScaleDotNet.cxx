

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkImageShiftScaleDotNet.h"

// native includes
#include "strstream"
#include "vtkImageShiftScale.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkImageShiftScale::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkImageShiftScale>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkImageShiftScale::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkImageShiftScale>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkImageShiftScale^ vtkImageShiftScale::NewInstance()
{
  ::vtkImageShiftScale* retVal = static_cast<::vtkImageShiftScale*>(vtk::ConvertManagedToNative<::vtkImageShiftScale>(m_instance)->NewInstance());
  return gcnew vtkImageShiftScale(IntPtr(retVal), false);
}



vtkImageShiftScale^ vtkImageShiftScale::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkImageShiftScale* retVal = static_cast<::vtkImageShiftScale*>(::vtkImageShiftScale::SafeDownCast(oWrap));
  return gcnew vtkImageShiftScale(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkImageShiftScale::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkImageShiftScale>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkImageShiftScale::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkImageShiftScale>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkImageShiftScale::SetShift(double arg0)
{
  vtk::ConvertManagedToNative<::vtkImageShiftScale>(m_instance)->SetShift(arg0);
}



double vtkImageShiftScale::GetShift()
{
  double retVal = vtk::ConvertManagedToNative<::vtkImageShiftScale>(m_instance)->GetShift();
  return retVal;
}



void vtkImageShiftScale::SetScale(double arg0)
{
  vtk::ConvertManagedToNative<::vtkImageShiftScale>(m_instance)->SetScale(arg0);
}



double vtkImageShiftScale::GetScale()
{
  double retVal = vtk::ConvertManagedToNative<::vtkImageShiftScale>(m_instance)->GetScale();
  return retVal;
}



void vtkImageShiftScale::SetOutputScalarType(int arg0)
{
  vtk::ConvertManagedToNative<::vtkImageShiftScale>(m_instance)->SetOutputScalarType(arg0);
}



int vtkImageShiftScale::GetOutputScalarType()
{
  int retVal = vtk::ConvertManagedToNative<::vtkImageShiftScale>(m_instance)->GetOutputScalarType();
  return retVal;
}



void vtkImageShiftScale::SetOutputScalarTypeToDouble()
{
  vtk::ConvertManagedToNative<::vtkImageShiftScale>(m_instance)->SetOutputScalarTypeToDouble();
}



void vtkImageShiftScale::SetOutputScalarTypeToFloat()
{
  vtk::ConvertManagedToNative<::vtkImageShiftScale>(m_instance)->SetOutputScalarTypeToFloat();
}



void vtkImageShiftScale::SetOutputScalarTypeToLong()
{
  vtk::ConvertManagedToNative<::vtkImageShiftScale>(m_instance)->SetOutputScalarTypeToLong();
}



void vtkImageShiftScale::SetOutputScalarTypeToUnsignedLong()
{
  vtk::ConvertManagedToNative<::vtkImageShiftScale>(m_instance)->SetOutputScalarTypeToUnsignedLong();
}



void vtkImageShiftScale::SetOutputScalarTypeToInt()
{
  vtk::ConvertManagedToNative<::vtkImageShiftScale>(m_instance)->SetOutputScalarTypeToInt();
}



void vtkImageShiftScale::SetOutputScalarTypeToUnsignedInt()
{
  vtk::ConvertManagedToNative<::vtkImageShiftScale>(m_instance)->SetOutputScalarTypeToUnsignedInt();
}



void vtkImageShiftScale::SetOutputScalarTypeToShort()
{
  vtk::ConvertManagedToNative<::vtkImageShiftScale>(m_instance)->SetOutputScalarTypeToShort();
}



void vtkImageShiftScale::SetOutputScalarTypeToUnsignedShort()
{
  vtk::ConvertManagedToNative<::vtkImageShiftScale>(m_instance)->SetOutputScalarTypeToUnsignedShort();
}



void vtkImageShiftScale::SetOutputScalarTypeToChar()
{
  vtk::ConvertManagedToNative<::vtkImageShiftScale>(m_instance)->SetOutputScalarTypeToChar();
}



void vtkImageShiftScale::SetOutputScalarTypeToUnsignedChar()
{
  vtk::ConvertManagedToNative<::vtkImageShiftScale>(m_instance)->SetOutputScalarTypeToUnsignedChar();
}



void vtkImageShiftScale::SetClampOverflow(int arg0)
{
  vtk::ConvertManagedToNative<::vtkImageShiftScale>(m_instance)->SetClampOverflow(arg0);
}



int vtkImageShiftScale::GetClampOverflow()
{
  int retVal = vtk::ConvertManagedToNative<::vtkImageShiftScale>(m_instance)->GetClampOverflow();
  return retVal;
}



void vtkImageShiftScale::ClampOverflowOn()
{
  vtk::ConvertManagedToNative<::vtkImageShiftScale>(m_instance)->ClampOverflowOn();
}



void vtkImageShiftScale::ClampOverflowOff()
{
  vtk::ConvertManagedToNative<::vtkImageShiftScale>(m_instance)->ClampOverflowOff();
}



  vtkImageShiftScale::vtkImageShiftScale(System::IntPtr native, bool bConst) : vtkThreadedImageAlgorithm(native, bConst) {}



  vtkImageShiftScale::vtkImageShiftScale(bool donothing) : vtkThreadedImageAlgorithm(donothing) {}



  vtkImageShiftScale::vtkImageShiftScale() : vtkThreadedImageAlgorithm(false) {
  this->SetNativePointer(IntPtr(::vtkImageShiftScale::New()));
}



  vtkImageShiftScale::~vtkImageShiftScale() { }





} // end namespace vtkImaging
