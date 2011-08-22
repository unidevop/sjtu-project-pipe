

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkHedgeHogDotNet.h"

// native includes
#include "strstream"
#include "vtkHedgeHog.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkHedgeHog::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkHedgeHog>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkHedgeHog::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkHedgeHog>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkHedgeHog^ vtkHedgeHog::NewInstance()
{
  ::vtkHedgeHog* retVal = static_cast<::vtkHedgeHog*>(vtk::ConvertManagedToNative<::vtkHedgeHog>(m_instance)->NewInstance());
  return gcnew vtkHedgeHog(IntPtr(retVal), false);
}



vtkHedgeHog^ vtkHedgeHog::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkHedgeHog* retVal = static_cast<::vtkHedgeHog*>(::vtkHedgeHog::SafeDownCast(oWrap));
  return gcnew vtkHedgeHog(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkHedgeHog::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkHedgeHog>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkHedgeHog::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkHedgeHog>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkHedgeHog::SetScaleFactor(double arg0)
{
  vtk::ConvertManagedToNative<::vtkHedgeHog>(m_instance)->SetScaleFactor(arg0);
}



double vtkHedgeHog::GetScaleFactor()
{
  double retVal = vtk::ConvertManagedToNative<::vtkHedgeHog>(m_instance)->GetScaleFactor();
  return retVal;
}



void vtkHedgeHog::SetVectorMode(int arg0)
{
  vtk::ConvertManagedToNative<::vtkHedgeHog>(m_instance)->SetVectorMode(arg0);
}



int vtkHedgeHog::GetVectorMode()
{
  int retVal = vtk::ConvertManagedToNative<::vtkHedgeHog>(m_instance)->GetVectorMode();
  return retVal;
}



void vtkHedgeHog::SetVectorModeToUseVector()
{
  vtk::ConvertManagedToNative<::vtkHedgeHog>(m_instance)->SetVectorModeToUseVector();
}



void vtkHedgeHog::SetVectorModeToUseNormal()
{
  vtk::ConvertManagedToNative<::vtkHedgeHog>(m_instance)->SetVectorModeToUseNormal();
}



System::String^ vtkHedgeHog::GetVectorModeAsString()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkHedgeHog>(m_instance)->GetVectorModeAsString();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



  vtkHedgeHog::vtkHedgeHog(System::IntPtr native, bool bConst) : vtkPolyDataAlgorithm(native, bConst) {}



  vtkHedgeHog::vtkHedgeHog(bool donothing) : vtkPolyDataAlgorithm(donothing) {}



  vtkHedgeHog::vtkHedgeHog() : vtkPolyDataAlgorithm(false) {
  this->SetNativePointer(IntPtr(::vtkHedgeHog::New()));
}



  vtkHedgeHog::~vtkHedgeHog() { }





} // end namespace vtkGraphics
