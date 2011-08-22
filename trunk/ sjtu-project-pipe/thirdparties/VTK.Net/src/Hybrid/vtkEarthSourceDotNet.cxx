

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkEarthSourceDotNet.h"

// native includes
#include "strstream"
#include "vtkEarthSource.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkEarthSource::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkEarthSource>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkEarthSource::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkEarthSource>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkEarthSource^ vtkEarthSource::NewInstance()
{
  ::vtkEarthSource* retVal = static_cast<::vtkEarthSource*>(vtk::ConvertManagedToNative<::vtkEarthSource>(m_instance)->NewInstance());
  return gcnew vtkEarthSource(IntPtr(retVal), false);
}



vtkEarthSource^ vtkEarthSource::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkEarthSource* retVal = static_cast<::vtkEarthSource*>(::vtkEarthSource::SafeDownCast(oWrap));
  return gcnew vtkEarthSource(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkEarthSource::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkEarthSource>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkEarthSource::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkEarthSource>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkEarthSource::SetRadius(double arg0)
{
  vtk::ConvertManagedToNative<::vtkEarthSource>(m_instance)->SetRadius(arg0);
}



double vtkEarthSource::GetRadiusMinValue()
{
  double retVal = vtk::ConvertManagedToNative<::vtkEarthSource>(m_instance)->GetRadiusMinValue();
  return retVal;
}



double vtkEarthSource::GetRadiusMaxValue()
{
  double retVal = vtk::ConvertManagedToNative<::vtkEarthSource>(m_instance)->GetRadiusMaxValue();
  return retVal;
}



double vtkEarthSource::GetRadius()
{
  double retVal = vtk::ConvertManagedToNative<::vtkEarthSource>(m_instance)->GetRadius();
  return retVal;
}



void vtkEarthSource::SetOnRatio(int arg0)
{
  vtk::ConvertManagedToNative<::vtkEarthSource>(m_instance)->SetOnRatio(arg0);
}



int vtkEarthSource::GetOnRatioMinValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkEarthSource>(m_instance)->GetOnRatioMinValue();
  return retVal;
}



int vtkEarthSource::GetOnRatioMaxValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkEarthSource>(m_instance)->GetOnRatioMaxValue();
  return retVal;
}



int vtkEarthSource::GetOnRatio()
{
  int retVal = vtk::ConvertManagedToNative<::vtkEarthSource>(m_instance)->GetOnRatio();
  return retVal;
}



void vtkEarthSource::SetOutline(int arg0)
{
  vtk::ConvertManagedToNative<::vtkEarthSource>(m_instance)->SetOutline(arg0);
}



int vtkEarthSource::GetOutline()
{
  int retVal = vtk::ConvertManagedToNative<::vtkEarthSource>(m_instance)->GetOutline();
  return retVal;
}



void vtkEarthSource::OutlineOn()
{
  vtk::ConvertManagedToNative<::vtkEarthSource>(m_instance)->OutlineOn();
}



void vtkEarthSource::OutlineOff()
{
  vtk::ConvertManagedToNative<::vtkEarthSource>(m_instance)->OutlineOff();
}



  vtkEarthSource::vtkEarthSource(System::IntPtr native, bool bConst) : vtkPolyDataAlgorithm(native, bConst) {}



  vtkEarthSource::vtkEarthSource(bool donothing) : vtkPolyDataAlgorithm(donothing) {}



  vtkEarthSource::vtkEarthSource() : vtkPolyDataAlgorithm(false) {
  this->SetNativePointer(IntPtr(::vtkEarthSource::New()));
}



  vtkEarthSource::~vtkEarthSource() { }





} // end namespace vtkHybrid
