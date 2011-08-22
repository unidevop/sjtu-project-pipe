

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkImageLogarithmicScaleDotNet.h"

// native includes
#include "strstream"
#include "vtkImageLogarithmicScale.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkImageLogarithmicScale::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkImageLogarithmicScale>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkImageLogarithmicScale::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkImageLogarithmicScale>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkImageLogarithmicScale^ vtkImageLogarithmicScale::NewInstance()
{
  ::vtkImageLogarithmicScale* retVal = static_cast<::vtkImageLogarithmicScale*>(vtk::ConvertManagedToNative<::vtkImageLogarithmicScale>(m_instance)->NewInstance());
  return gcnew vtkImageLogarithmicScale(IntPtr(retVal), false);
}



vtkImageLogarithmicScale^ vtkImageLogarithmicScale::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkImageLogarithmicScale* retVal = static_cast<::vtkImageLogarithmicScale*>(::vtkImageLogarithmicScale::SafeDownCast(oWrap));
  return gcnew vtkImageLogarithmicScale(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkImageLogarithmicScale::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkImageLogarithmicScale>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkImageLogarithmicScale::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkImageLogarithmicScale>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkImageLogarithmicScale::SetConstant(double arg0)
{
  vtk::ConvertManagedToNative<::vtkImageLogarithmicScale>(m_instance)->SetConstant(arg0);
}



double vtkImageLogarithmicScale::GetConstant()
{
  double retVal = vtk::ConvertManagedToNative<::vtkImageLogarithmicScale>(m_instance)->GetConstant();
  return retVal;
}



  vtkImageLogarithmicScale::vtkImageLogarithmicScale(System::IntPtr native, bool bConst) : vtkThreadedImageAlgorithm(native, bConst) {}



  vtkImageLogarithmicScale::vtkImageLogarithmicScale(bool donothing) : vtkThreadedImageAlgorithm(donothing) {}



  vtkImageLogarithmicScale::vtkImageLogarithmicScale() : vtkThreadedImageAlgorithm(false) {
  this->SetNativePointer(IntPtr(::vtkImageLogarithmicScale::New()));
}



  vtkImageLogarithmicScale::~vtkImageLogarithmicScale() { }





} // end namespace vtkImaging
