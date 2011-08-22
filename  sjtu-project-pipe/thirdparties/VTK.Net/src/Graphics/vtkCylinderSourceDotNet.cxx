

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkCylinderSourceDotNet.h"

// native includes
#include "strstream"
#include "vtkCylinderSource.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkCylinderSource::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkCylinderSource>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkCylinderSource::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkCylinderSource>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkCylinderSource^ vtkCylinderSource::NewInstance()
{
  ::vtkCylinderSource* retVal = static_cast<::vtkCylinderSource*>(vtk::ConvertManagedToNative<::vtkCylinderSource>(m_instance)->NewInstance());
  return gcnew vtkCylinderSource(IntPtr(retVal), false);
}



vtkCylinderSource^ vtkCylinderSource::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkCylinderSource* retVal = static_cast<::vtkCylinderSource*>(::vtkCylinderSource::SafeDownCast(oWrap));
  return gcnew vtkCylinderSource(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkCylinderSource::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkCylinderSource>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkCylinderSource::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkCylinderSource>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkCylinderSource::SetHeight(double arg0)
{
  vtk::ConvertManagedToNative<::vtkCylinderSource>(m_instance)->SetHeight(arg0);
}



double vtkCylinderSource::GetHeightMinValue()
{
  double retVal = vtk::ConvertManagedToNative<::vtkCylinderSource>(m_instance)->GetHeightMinValue();
  return retVal;
}



double vtkCylinderSource::GetHeightMaxValue()
{
  double retVal = vtk::ConvertManagedToNative<::vtkCylinderSource>(m_instance)->GetHeightMaxValue();
  return retVal;
}



double vtkCylinderSource::GetHeight()
{
  double retVal = vtk::ConvertManagedToNative<::vtkCylinderSource>(m_instance)->GetHeight();
  return retVal;
}



void vtkCylinderSource::SetRadius(double arg0)
{
  vtk::ConvertManagedToNative<::vtkCylinderSource>(m_instance)->SetRadius(arg0);
}



double vtkCylinderSource::GetRadiusMinValue()
{
  double retVal = vtk::ConvertManagedToNative<::vtkCylinderSource>(m_instance)->GetRadiusMinValue();
  return retVal;
}



double vtkCylinderSource::GetRadiusMaxValue()
{
  double retVal = vtk::ConvertManagedToNative<::vtkCylinderSource>(m_instance)->GetRadiusMaxValue();
  return retVal;
}



double vtkCylinderSource::GetRadius()
{
  double retVal = vtk::ConvertManagedToNative<::vtkCylinderSource>(m_instance)->GetRadius();
  return retVal;
}



void vtkCylinderSource::SetCenter(double arg0, double arg1, double arg2)
{
  vtk::ConvertManagedToNative<::vtkCylinderSource>(m_instance)->SetCenter(arg0, arg1, arg2);
}



void vtkCylinderSource::SetCenter(array<double>^ a)
{
  pin_ptr<double> aPin = &a[0];
  double* nativeaPin = aPin;
  vtk::ConvertManagedToNative<::vtkCylinderSource>(m_instance)->SetCenter(nativeaPin);
}



array<double>^ vtkCylinderSource::GetCenter()
{
  const double* retVal = vtk::ConvertManagedToNative<::vtkCylinderSource>(m_instance)->GetCenter();
  array<double>^ mRetVal = gcnew array<double>(3);
  for (size_t cprIdx=0; cprIdx<3; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



void vtkCylinderSource::SetResolution(int arg0)
{
  vtk::ConvertManagedToNative<::vtkCylinderSource>(m_instance)->SetResolution(arg0);
}



int vtkCylinderSource::GetResolutionMinValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkCylinderSource>(m_instance)->GetResolutionMinValue();
  return retVal;
}



int vtkCylinderSource::GetResolutionMaxValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkCylinderSource>(m_instance)->GetResolutionMaxValue();
  return retVal;
}



int vtkCylinderSource::GetResolution()
{
  int retVal = vtk::ConvertManagedToNative<::vtkCylinderSource>(m_instance)->GetResolution();
  return retVal;
}



void vtkCylinderSource::SetCapping(int arg0)
{
  vtk::ConvertManagedToNative<::vtkCylinderSource>(m_instance)->SetCapping(arg0);
}



int vtkCylinderSource::GetCapping()
{
  int retVal = vtk::ConvertManagedToNative<::vtkCylinderSource>(m_instance)->GetCapping();
  return retVal;
}



void vtkCylinderSource::CappingOn()
{
  vtk::ConvertManagedToNative<::vtkCylinderSource>(m_instance)->CappingOn();
}



void vtkCylinderSource::CappingOff()
{
  vtk::ConvertManagedToNative<::vtkCylinderSource>(m_instance)->CappingOff();
}



  vtkCylinderSource::vtkCylinderSource(System::IntPtr native, bool bConst) : vtkPolyDataAlgorithm(native, bConst) {}



  vtkCylinderSource::vtkCylinderSource(bool donothing) : vtkPolyDataAlgorithm(donothing) {}



  vtkCylinderSource::vtkCylinderSource() : vtkPolyDataAlgorithm(false) {
  this->SetNativePointer(IntPtr(::vtkCylinderSource::New()));
}



  vtkCylinderSource::~vtkCylinderSource() { }





} // end namespace vtkGraphics
