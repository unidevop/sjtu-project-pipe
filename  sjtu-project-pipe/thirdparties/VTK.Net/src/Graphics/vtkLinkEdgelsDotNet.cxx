

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkLinkEdgelsDotNet.h"

// native includes
#include "strstream"
#include "vtkLinkEdgels.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkLinkEdgels::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkLinkEdgels>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkLinkEdgels::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkLinkEdgels>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkLinkEdgels^ vtkLinkEdgels::NewInstance()
{
  ::vtkLinkEdgels* retVal = static_cast<::vtkLinkEdgels*>(vtk::ConvertManagedToNative<::vtkLinkEdgels>(m_instance)->NewInstance());
  return gcnew vtkLinkEdgels(IntPtr(retVal), false);
}



vtkLinkEdgels^ vtkLinkEdgels::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkLinkEdgels* retVal = static_cast<::vtkLinkEdgels*>(::vtkLinkEdgels::SafeDownCast(oWrap));
  return gcnew vtkLinkEdgels(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkLinkEdgels::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkLinkEdgels>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkLinkEdgels::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkLinkEdgels>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkLinkEdgels::SetLinkThreshold(double arg0)
{
  vtk::ConvertManagedToNative<::vtkLinkEdgels>(m_instance)->SetLinkThreshold(arg0);
}



double vtkLinkEdgels::GetLinkThreshold()
{
  double retVal = vtk::ConvertManagedToNative<::vtkLinkEdgels>(m_instance)->GetLinkThreshold();
  return retVal;
}



void vtkLinkEdgels::SetPhiThreshold(double arg0)
{
  vtk::ConvertManagedToNative<::vtkLinkEdgels>(m_instance)->SetPhiThreshold(arg0);
}



double vtkLinkEdgels::GetPhiThreshold()
{
  double retVal = vtk::ConvertManagedToNative<::vtkLinkEdgels>(m_instance)->GetPhiThreshold();
  return retVal;
}



void vtkLinkEdgels::SetGradientThreshold(double arg0)
{
  vtk::ConvertManagedToNative<::vtkLinkEdgels>(m_instance)->SetGradientThreshold(arg0);
}



double vtkLinkEdgels::GetGradientThreshold()
{
  double retVal = vtk::ConvertManagedToNative<::vtkLinkEdgels>(m_instance)->GetGradientThreshold();
  return retVal;
}



  vtkLinkEdgels::vtkLinkEdgels(System::IntPtr native, bool bConst) : vtkPolyDataAlgorithm(native, bConst) {}



  vtkLinkEdgels::vtkLinkEdgels(bool donothing) : vtkPolyDataAlgorithm(donothing) {}



  vtkLinkEdgels::vtkLinkEdgels() : vtkPolyDataAlgorithm(false) {
  this->SetNativePointer(IntPtr(::vtkLinkEdgels::New()));
}



  vtkLinkEdgels::~vtkLinkEdgels() { }





} // end namespace vtkGraphics
