

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkVolumeRayCastCompositeFunctionDotNet.h"

// native includes
#include "strstream"
#include "vtkVolumeRayCastCompositeFunction.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkVolumeRayCastCompositeFunction::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkVolumeRayCastCompositeFunction>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkVolumeRayCastCompositeFunction::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkVolumeRayCastCompositeFunction>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkVolumeRayCastCompositeFunction^ vtkVolumeRayCastCompositeFunction::NewInstance()
{
  ::vtkVolumeRayCastCompositeFunction* retVal = static_cast<::vtkVolumeRayCastCompositeFunction*>(vtk::ConvertManagedToNative<::vtkVolumeRayCastCompositeFunction>(m_instance)->NewInstance());
  return gcnew vtkVolumeRayCastCompositeFunction(IntPtr(retVal), false);
}



vtkVolumeRayCastCompositeFunction^ vtkVolumeRayCastCompositeFunction::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkVolumeRayCastCompositeFunction* retVal = static_cast<::vtkVolumeRayCastCompositeFunction*>(::vtkVolumeRayCastCompositeFunction::SafeDownCast(oWrap));
  return gcnew vtkVolumeRayCastCompositeFunction(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkVolumeRayCastCompositeFunction::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkVolumeRayCastCompositeFunction>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkVolumeRayCastCompositeFunction::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkVolumeRayCastCompositeFunction>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkVolumeRayCastCompositeFunction::SetCompositeMethod(int arg0)
{
  vtk::ConvertManagedToNative<::vtkVolumeRayCastCompositeFunction>(m_instance)->SetCompositeMethod(arg0);
}



int vtkVolumeRayCastCompositeFunction::GetCompositeMethodMinValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkVolumeRayCastCompositeFunction>(m_instance)->GetCompositeMethodMinValue();
  return retVal;
}



int vtkVolumeRayCastCompositeFunction::GetCompositeMethodMaxValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkVolumeRayCastCompositeFunction>(m_instance)->GetCompositeMethodMaxValue();
  return retVal;
}



int vtkVolumeRayCastCompositeFunction::GetCompositeMethod()
{
  int retVal = vtk::ConvertManagedToNative<::vtkVolumeRayCastCompositeFunction>(m_instance)->GetCompositeMethod();
  return retVal;
}



void vtkVolumeRayCastCompositeFunction::SetCompositeMethodToInterpolateFirst()
{
  vtk::ConvertManagedToNative<::vtkVolumeRayCastCompositeFunction>(m_instance)->SetCompositeMethodToInterpolateFirst();
}



void vtkVolumeRayCastCompositeFunction::SetCompositeMethodToClassifyFirst()
{
  vtk::ConvertManagedToNative<::vtkVolumeRayCastCompositeFunction>(m_instance)->SetCompositeMethodToClassifyFirst();
}



System::String^ vtkVolumeRayCastCompositeFunction::GetCompositeMethodAsString()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkVolumeRayCastCompositeFunction>(m_instance)->GetCompositeMethodAsString();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



  vtkVolumeRayCastCompositeFunction::vtkVolumeRayCastCompositeFunction(System::IntPtr native, bool bConst) : vtkVolumeRayCastFunction(native, bConst) {}



  vtkVolumeRayCastCompositeFunction::vtkVolumeRayCastCompositeFunction(bool donothing) : vtkVolumeRayCastFunction(donothing) {}



  vtkVolumeRayCastCompositeFunction::vtkVolumeRayCastCompositeFunction() : vtkVolumeRayCastFunction(false) {
  this->SetNativePointer(IntPtr(::vtkVolumeRayCastCompositeFunction::New()));
}



  vtkVolumeRayCastCompositeFunction::~vtkVolumeRayCastCompositeFunction() { }





} // end namespace vtkVolumeRendering
