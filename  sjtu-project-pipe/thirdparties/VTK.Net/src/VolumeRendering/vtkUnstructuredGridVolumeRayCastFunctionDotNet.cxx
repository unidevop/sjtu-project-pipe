

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkUnstructuredGridVolumeRayCastFunctionDotNet.h"

// native includes
#include "strstream"
#include "vtkUnstructuredGridVolumeRayCastFunction.h"

using namespace System;

namespace vtk {

System::String^ vtkUnstructuredGridVolumeRayCastFunction::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkUnstructuredGridVolumeRayCastFunction>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkUnstructuredGridVolumeRayCastFunction::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkUnstructuredGridVolumeRayCastFunction>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkUnstructuredGridVolumeRayCastFunction^ vtkUnstructuredGridVolumeRayCastFunction::NewInstance()
{
  ::vtkUnstructuredGridVolumeRayCastFunction* retVal = static_cast<::vtkUnstructuredGridVolumeRayCastFunction*>(vtk::ConvertManagedToNative<::vtkUnstructuredGridVolumeRayCastFunction>(m_instance)->NewInstance());
  return gcnew vtkUnstructuredGridVolumeRayCastFunction(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkUnstructuredGridVolumeRayCastFunction::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkUnstructuredGridVolumeRayCastFunction>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkUnstructuredGridVolumeRayCastFunction::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkUnstructuredGridVolumeRayCastFunction>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




  vtkUnstructuredGridVolumeRayCastFunction::vtkUnstructuredGridVolumeRayCastFunction(System::IntPtr native, bool bConst) : vtkObject(native, bConst) {}



  vtkUnstructuredGridVolumeRayCastFunction::vtkUnstructuredGridVolumeRayCastFunction(bool donothing) : vtkObject(donothing) {}



  vtkUnstructuredGridVolumeRayCastFunction::vtkUnstructuredGridVolumeRayCastFunction() : vtkObject(false) {
  this->SetNativePointer(IntPtr(::vtkUnstructuredGridVolumeRayCastFunction::New()));
}



  vtkUnstructuredGridVolumeRayCastFunction::~vtkUnstructuredGridVolumeRayCastFunction() { }





} // end namespace vtkVolumeRendering
