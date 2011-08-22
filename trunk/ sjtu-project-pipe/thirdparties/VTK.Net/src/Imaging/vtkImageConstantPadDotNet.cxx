

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkImageConstantPadDotNet.h"

// native includes
#include "strstream"
#include "vtkImageConstantPad.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkImageConstantPad::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkImageConstantPad>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkImageConstantPad::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkImageConstantPad>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkImageConstantPad^ vtkImageConstantPad::NewInstance()
{
  ::vtkImageConstantPad* retVal = static_cast<::vtkImageConstantPad*>(vtk::ConvertManagedToNative<::vtkImageConstantPad>(m_instance)->NewInstance());
  return gcnew vtkImageConstantPad(IntPtr(retVal), false);
}



vtkImageConstantPad^ vtkImageConstantPad::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkImageConstantPad* retVal = static_cast<::vtkImageConstantPad*>(::vtkImageConstantPad::SafeDownCast(oWrap));
  return gcnew vtkImageConstantPad(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkImageConstantPad::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkImageConstantPad>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkImageConstantPad::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkImageConstantPad>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkImageConstantPad::SetConstant(double arg0)
{
  vtk::ConvertManagedToNative<::vtkImageConstantPad>(m_instance)->SetConstant(arg0);
}



double vtkImageConstantPad::GetConstant()
{
  double retVal = vtk::ConvertManagedToNative<::vtkImageConstantPad>(m_instance)->GetConstant();
  return retVal;
}



  vtkImageConstantPad::vtkImageConstantPad(System::IntPtr native, bool bConst) : vtkImagePadFilter(native, bConst) {}



  vtkImageConstantPad::vtkImageConstantPad(bool donothing) : vtkImagePadFilter(donothing) {}



  vtkImageConstantPad::vtkImageConstantPad() : vtkImagePadFilter(false) {
  this->SetNativePointer(IntPtr(::vtkImageConstantPad::New()));
}



  vtkImageConstantPad::~vtkImageConstantPad() { }





} // end namespace vtkImaging
