

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkThresholdTextureCoordsDotNet.h"

// native includes
#include "strstream"
#include "vtkThresholdTextureCoords.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkThresholdTextureCoords::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkThresholdTextureCoords>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkThresholdTextureCoords::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkThresholdTextureCoords>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkThresholdTextureCoords^ vtkThresholdTextureCoords::NewInstance()
{
  ::vtkThresholdTextureCoords* retVal = static_cast<::vtkThresholdTextureCoords*>(vtk::ConvertManagedToNative<::vtkThresholdTextureCoords>(m_instance)->NewInstance());
  return gcnew vtkThresholdTextureCoords(IntPtr(retVal), false);
}



vtkThresholdTextureCoords^ vtkThresholdTextureCoords::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkThresholdTextureCoords* retVal = static_cast<::vtkThresholdTextureCoords*>(::vtkThresholdTextureCoords::SafeDownCast(oWrap));
  return gcnew vtkThresholdTextureCoords(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkThresholdTextureCoords::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkThresholdTextureCoords>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkThresholdTextureCoords::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkThresholdTextureCoords>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkThresholdTextureCoords::ThresholdByLower(double lower)
{
  vtk::ConvertManagedToNative<::vtkThresholdTextureCoords>(m_instance)->ThresholdByLower(lower);
}



void vtkThresholdTextureCoords::ThresholdByUpper(double upper)
{
  vtk::ConvertManagedToNative<::vtkThresholdTextureCoords>(m_instance)->ThresholdByUpper(upper);
}



void vtkThresholdTextureCoords::ThresholdBetween(double lower, double upper)
{
  vtk::ConvertManagedToNative<::vtkThresholdTextureCoords>(m_instance)->ThresholdBetween(lower, upper);
}



double vtkThresholdTextureCoords::GetUpperThreshold()
{
  double retVal = vtk::ConvertManagedToNative<::vtkThresholdTextureCoords>(m_instance)->GetUpperThreshold();
  return retVal;
}



double vtkThresholdTextureCoords::GetLowerThreshold()
{
  double retVal = vtk::ConvertManagedToNative<::vtkThresholdTextureCoords>(m_instance)->GetLowerThreshold();
  return retVal;
}



void vtkThresholdTextureCoords::SetTextureDimension(int arg0)
{
  vtk::ConvertManagedToNative<::vtkThresholdTextureCoords>(m_instance)->SetTextureDimension(arg0);
}



int vtkThresholdTextureCoords::GetTextureDimensionMinValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkThresholdTextureCoords>(m_instance)->GetTextureDimensionMinValue();
  return retVal;
}



int vtkThresholdTextureCoords::GetTextureDimensionMaxValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkThresholdTextureCoords>(m_instance)->GetTextureDimensionMaxValue();
  return retVal;
}



int vtkThresholdTextureCoords::GetTextureDimension()
{
  int retVal = vtk::ConvertManagedToNative<::vtkThresholdTextureCoords>(m_instance)->GetTextureDimension();
  return retVal;
}



void vtkThresholdTextureCoords::SetInTextureCoord(double arg0, double arg1, double arg2)
{
  vtk::ConvertManagedToNative<::vtkThresholdTextureCoords>(m_instance)->SetInTextureCoord(arg0, arg1, arg2);
}



void vtkThresholdTextureCoords::SetInTextureCoord(array<double>^ a)
{
  pin_ptr<double> aPin = &a[0];
  double* nativeaPin = aPin;
  vtk::ConvertManagedToNative<::vtkThresholdTextureCoords>(m_instance)->SetInTextureCoord(nativeaPin);
}



array<double>^ vtkThresholdTextureCoords::GetInTextureCoord()
{
  const double* retVal = vtk::ConvertManagedToNative<::vtkThresholdTextureCoords>(m_instance)->GetInTextureCoord();
  array<double>^ mRetVal = gcnew array<double>(3);
  for (size_t cprIdx=0; cprIdx<3; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



void vtkThresholdTextureCoords::SetOutTextureCoord(double arg0, double arg1, double arg2)
{
  vtk::ConvertManagedToNative<::vtkThresholdTextureCoords>(m_instance)->SetOutTextureCoord(arg0, arg1, arg2);
}



void vtkThresholdTextureCoords::SetOutTextureCoord(array<double>^ a)
{
  pin_ptr<double> aPin = &a[0];
  double* nativeaPin = aPin;
  vtk::ConvertManagedToNative<::vtkThresholdTextureCoords>(m_instance)->SetOutTextureCoord(nativeaPin);
}



array<double>^ vtkThresholdTextureCoords::GetOutTextureCoord()
{
  const double* retVal = vtk::ConvertManagedToNative<::vtkThresholdTextureCoords>(m_instance)->GetOutTextureCoord();
  array<double>^ mRetVal = gcnew array<double>(3);
  for (size_t cprIdx=0; cprIdx<3; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



  vtkThresholdTextureCoords::vtkThresholdTextureCoords(System::IntPtr native, bool bConst) : vtkDataSetAlgorithm(native, bConst) {}



  vtkThresholdTextureCoords::vtkThresholdTextureCoords(bool donothing) : vtkDataSetAlgorithm(donothing) {}



  vtkThresholdTextureCoords::vtkThresholdTextureCoords() : vtkDataSetAlgorithm(false) {
  this->SetNativePointer(IntPtr(::vtkThresholdTextureCoords::New()));
}



  vtkThresholdTextureCoords::~vtkThresholdTextureCoords() { }





} // end namespace vtkGraphics
