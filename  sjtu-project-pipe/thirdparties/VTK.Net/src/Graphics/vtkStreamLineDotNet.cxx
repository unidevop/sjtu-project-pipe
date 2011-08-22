

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkStreamLineDotNet.h"

// native includes
#include "strstream"
#include "vtkStreamLine.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkStreamLine::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkStreamLine>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkStreamLine::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkStreamLine>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkStreamLine^ vtkStreamLine::NewInstance()
{
  ::vtkStreamLine* retVal = static_cast<::vtkStreamLine*>(vtk::ConvertManagedToNative<::vtkStreamLine>(m_instance)->NewInstance());
  return gcnew vtkStreamLine(IntPtr(retVal), false);
}



vtkStreamLine^ vtkStreamLine::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkStreamLine* retVal = static_cast<::vtkStreamLine*>(::vtkStreamLine::SafeDownCast(oWrap));
  return gcnew vtkStreamLine(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkStreamLine::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkStreamLine>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkStreamLine::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkStreamLine>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkStreamLine::SetStepLength(double arg0)
{
  vtk::ConvertManagedToNative<::vtkStreamLine>(m_instance)->SetStepLength(arg0);
}



double vtkStreamLine::GetStepLengthMinValue()
{
  double retVal = vtk::ConvertManagedToNative<::vtkStreamLine>(m_instance)->GetStepLengthMinValue();
  return retVal;
}



double vtkStreamLine::GetStepLengthMaxValue()
{
  double retVal = vtk::ConvertManagedToNative<::vtkStreamLine>(m_instance)->GetStepLengthMaxValue();
  return retVal;
}



double vtkStreamLine::GetStepLength()
{
  double retVal = vtk::ConvertManagedToNative<::vtkStreamLine>(m_instance)->GetStepLength();
  return retVal;
}



  vtkStreamLine::vtkStreamLine(System::IntPtr native, bool bConst) : vtkStreamer(native, bConst) {}



  vtkStreamLine::vtkStreamLine(bool donothing) : vtkStreamer(donothing) {}



  vtkStreamLine::vtkStreamLine() : vtkStreamer(false) {
  this->SetNativePointer(IntPtr(::vtkStreamLine::New()));
}



  vtkStreamLine::~vtkStreamLine() { }





} // end namespace vtkGraphics
