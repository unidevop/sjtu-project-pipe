

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkStreamPointsDotNet.h"

// native includes
#include "strstream"
#include "vtkStreamPoints.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkStreamPoints::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkStreamPoints>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkStreamPoints::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkStreamPoints>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkStreamPoints^ vtkStreamPoints::NewInstance()
{
  ::vtkStreamPoints* retVal = static_cast<::vtkStreamPoints*>(vtk::ConvertManagedToNative<::vtkStreamPoints>(m_instance)->NewInstance());
  return gcnew vtkStreamPoints(IntPtr(retVal), false);
}



vtkStreamPoints^ vtkStreamPoints::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkStreamPoints* retVal = static_cast<::vtkStreamPoints*>(::vtkStreamPoints::SafeDownCast(oWrap));
  return gcnew vtkStreamPoints(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkStreamPoints::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkStreamPoints>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkStreamPoints::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkStreamPoints>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkStreamPoints::SetTimeIncrement(double arg0)
{
  vtk::ConvertManagedToNative<::vtkStreamPoints>(m_instance)->SetTimeIncrement(arg0);
}



double vtkStreamPoints::GetTimeIncrementMinValue()
{
  double retVal = vtk::ConvertManagedToNative<::vtkStreamPoints>(m_instance)->GetTimeIncrementMinValue();
  return retVal;
}



double vtkStreamPoints::GetTimeIncrementMaxValue()
{
  double retVal = vtk::ConvertManagedToNative<::vtkStreamPoints>(m_instance)->GetTimeIncrementMaxValue();
  return retVal;
}



double vtkStreamPoints::GetTimeIncrement()
{
  double retVal = vtk::ConvertManagedToNative<::vtkStreamPoints>(m_instance)->GetTimeIncrement();
  return retVal;
}



  vtkStreamPoints::vtkStreamPoints(System::IntPtr native, bool bConst) : vtkStreamer(native, bConst) {}



  vtkStreamPoints::vtkStreamPoints(bool donothing) : vtkStreamer(donothing) {}



  vtkStreamPoints::vtkStreamPoints() : vtkStreamer(false) {
  this->SetNativePointer(IntPtr(::vtkStreamPoints::New()));
}



  vtkStreamPoints::~vtkStreamPoints() { }





} // end namespace vtkGraphics
