

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkDashedStreamLineDotNet.h"

// native includes
#include "strstream"
#include "vtkDashedStreamLine.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkDashedStreamLine::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkDashedStreamLine>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkDashedStreamLine::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkDashedStreamLine>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkDashedStreamLine^ vtkDashedStreamLine::NewInstance()
{
  ::vtkDashedStreamLine* retVal = static_cast<::vtkDashedStreamLine*>(vtk::ConvertManagedToNative<::vtkDashedStreamLine>(m_instance)->NewInstance());
  return gcnew vtkDashedStreamLine(IntPtr(retVal), false);
}



vtkDashedStreamLine^ vtkDashedStreamLine::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkDashedStreamLine* retVal = static_cast<::vtkDashedStreamLine*>(::vtkDashedStreamLine::SafeDownCast(oWrap));
  return gcnew vtkDashedStreamLine(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkDashedStreamLine::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkDashedStreamLine>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkDashedStreamLine::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkDashedStreamLine>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkDashedStreamLine::SetDashFactor(double arg0)
{
  vtk::ConvertManagedToNative<::vtkDashedStreamLine>(m_instance)->SetDashFactor(arg0);
}



double vtkDashedStreamLine::GetDashFactorMinValue()
{
  double retVal = vtk::ConvertManagedToNative<::vtkDashedStreamLine>(m_instance)->GetDashFactorMinValue();
  return retVal;
}



double vtkDashedStreamLine::GetDashFactorMaxValue()
{
  double retVal = vtk::ConvertManagedToNative<::vtkDashedStreamLine>(m_instance)->GetDashFactorMaxValue();
  return retVal;
}



double vtkDashedStreamLine::GetDashFactor()
{
  double retVal = vtk::ConvertManagedToNative<::vtkDashedStreamLine>(m_instance)->GetDashFactor();
  return retVal;
}



  vtkDashedStreamLine::vtkDashedStreamLine(System::IntPtr native, bool bConst) : vtkStreamLine(native, bConst) {}



  vtkDashedStreamLine::vtkDashedStreamLine(bool donothing) : vtkStreamLine(donothing) {}



  vtkDashedStreamLine::vtkDashedStreamLine() : vtkStreamLine(false) {
  this->SetNativePointer(IntPtr(::vtkDashedStreamLine::New()));
}



  vtkDashedStreamLine::~vtkDashedStreamLine() { }





} // end namespace vtkGraphics
