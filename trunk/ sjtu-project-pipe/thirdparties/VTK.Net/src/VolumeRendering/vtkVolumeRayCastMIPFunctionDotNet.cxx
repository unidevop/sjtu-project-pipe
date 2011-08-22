

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkVolumeRayCastMIPFunctionDotNet.h"

// native includes
#include "strstream"
#include "vtkVolumeRayCastMIPFunction.h"
#include "vtkObject.h"
#include "vtkVolume.h"

using namespace System;

namespace vtk {

System::String^ vtkVolumeRayCastMIPFunction::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkVolumeRayCastMIPFunction>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkVolumeRayCastMIPFunction::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkVolumeRayCastMIPFunction>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkVolumeRayCastMIPFunction^ vtkVolumeRayCastMIPFunction::NewInstance()
{
  ::vtkVolumeRayCastMIPFunction* retVal = static_cast<::vtkVolumeRayCastMIPFunction*>(vtk::ConvertManagedToNative<::vtkVolumeRayCastMIPFunction>(m_instance)->NewInstance());
  return gcnew vtkVolumeRayCastMIPFunction(IntPtr(retVal), false);
}



vtkVolumeRayCastMIPFunction^ vtkVolumeRayCastMIPFunction::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkVolumeRayCastMIPFunction* retVal = static_cast<::vtkVolumeRayCastMIPFunction*>(::vtkVolumeRayCastMIPFunction::SafeDownCast(oWrap));
  return gcnew vtkVolumeRayCastMIPFunction(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkVolumeRayCastMIPFunction::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkVolumeRayCastMIPFunction>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkVolumeRayCastMIPFunction::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkVolumeRayCastMIPFunction>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




float vtkVolumeRayCastMIPFunction::GetZeroOpacityThreshold(vtkVolume^ vol)
{
  ::vtkVolume* volWrap = vtk::ConvertManagedToNative<::vtkVolume>(vol->GetNativePointer());
  float retVal = vtk::ConvertManagedToNative<::vtkVolumeRayCastMIPFunction>(m_instance)->GetZeroOpacityThreshold(volWrap);
  return retVal;
}



void vtkVolumeRayCastMIPFunction::SetMaximizeMethod(int arg0)
{
  vtk::ConvertManagedToNative<::vtkVolumeRayCastMIPFunction>(m_instance)->SetMaximizeMethod(arg0);
}



int vtkVolumeRayCastMIPFunction::GetMaximizeMethodMinValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkVolumeRayCastMIPFunction>(m_instance)->GetMaximizeMethodMinValue();
  return retVal;
}



int vtkVolumeRayCastMIPFunction::GetMaximizeMethodMaxValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkVolumeRayCastMIPFunction>(m_instance)->GetMaximizeMethodMaxValue();
  return retVal;
}



int vtkVolumeRayCastMIPFunction::GetMaximizeMethod()
{
  int retVal = vtk::ConvertManagedToNative<::vtkVolumeRayCastMIPFunction>(m_instance)->GetMaximizeMethod();
  return retVal;
}



void vtkVolumeRayCastMIPFunction::SetMaximizeMethodToScalarValue()
{
  vtk::ConvertManagedToNative<::vtkVolumeRayCastMIPFunction>(m_instance)->SetMaximizeMethodToScalarValue();
}



void vtkVolumeRayCastMIPFunction::SetMaximizeMethodToOpacity()
{
  vtk::ConvertManagedToNative<::vtkVolumeRayCastMIPFunction>(m_instance)->SetMaximizeMethodToOpacity();
}



System::String^ vtkVolumeRayCastMIPFunction::GetMaximizeMethodAsString()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkVolumeRayCastMIPFunction>(m_instance)->GetMaximizeMethodAsString();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



  vtkVolumeRayCastMIPFunction::vtkVolumeRayCastMIPFunction(System::IntPtr native, bool bConst) : vtkVolumeRayCastFunction(native, bConst) {}



  vtkVolumeRayCastMIPFunction::vtkVolumeRayCastMIPFunction(bool donothing) : vtkVolumeRayCastFunction(donothing) {}



  vtkVolumeRayCastMIPFunction::vtkVolumeRayCastMIPFunction() : vtkVolumeRayCastFunction(false) {
  this->SetNativePointer(IntPtr(::vtkVolumeRayCastMIPFunction::New()));
}



  vtkVolumeRayCastMIPFunction::~vtkVolumeRayCastMIPFunction() { }





} // end namespace vtkVolumeRendering
