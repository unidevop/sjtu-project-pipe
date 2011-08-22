

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkOutlineCornerSourceDotNet.h"

// native includes
#include "strstream"
#include "vtkOutlineCornerSource.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkOutlineCornerSource::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkOutlineCornerSource>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkOutlineCornerSource::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkOutlineCornerSource>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkOutlineCornerSource^ vtkOutlineCornerSource::NewInstance()
{
  ::vtkOutlineCornerSource* retVal = static_cast<::vtkOutlineCornerSource*>(vtk::ConvertManagedToNative<::vtkOutlineCornerSource>(m_instance)->NewInstance());
  return gcnew vtkOutlineCornerSource(IntPtr(retVal), false);
}



vtkOutlineCornerSource^ vtkOutlineCornerSource::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkOutlineCornerSource* retVal = static_cast<::vtkOutlineCornerSource*>(::vtkOutlineCornerSource::SafeDownCast(oWrap));
  return gcnew vtkOutlineCornerSource(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkOutlineCornerSource::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkOutlineCornerSource>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkOutlineCornerSource::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkOutlineCornerSource>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkOutlineCornerSource::SetCornerFactor(double arg0)
{
  vtk::ConvertManagedToNative<::vtkOutlineCornerSource>(m_instance)->SetCornerFactor(arg0);
}



double vtkOutlineCornerSource::GetCornerFactorMinValue()
{
  double retVal = vtk::ConvertManagedToNative<::vtkOutlineCornerSource>(m_instance)->GetCornerFactorMinValue();
  return retVal;
}



double vtkOutlineCornerSource::GetCornerFactorMaxValue()
{
  double retVal = vtk::ConvertManagedToNative<::vtkOutlineCornerSource>(m_instance)->GetCornerFactorMaxValue();
  return retVal;
}



double vtkOutlineCornerSource::GetCornerFactor()
{
  double retVal = vtk::ConvertManagedToNative<::vtkOutlineCornerSource>(m_instance)->GetCornerFactor();
  return retVal;
}



  vtkOutlineCornerSource::vtkOutlineCornerSource(System::IntPtr native, bool bConst) : vtkOutlineSource(native, bConst) {}



  vtkOutlineCornerSource::vtkOutlineCornerSource(bool donothing) : vtkOutlineSource(donothing) {}



  vtkOutlineCornerSource::vtkOutlineCornerSource() : vtkOutlineSource(false) {
  this->SetNativePointer(IntPtr(::vtkOutlineCornerSource::New()));
}



  vtkOutlineCornerSource::~vtkOutlineCornerSource() { }





} // end namespace vtkGraphics
