

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkUnstructuredGridBunykRayCastFunctionDotNet.h"

// native includes
#include "strstream"
#include "vtkUnstructuredGridBunykRayCastFunction.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkUnstructuredGridBunykRayCastFunction::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkUnstructuredGridBunykRayCastFunction>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkUnstructuredGridBunykRayCastFunction::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkUnstructuredGridBunykRayCastFunction>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkUnstructuredGridBunykRayCastFunction^ vtkUnstructuredGridBunykRayCastFunction::NewInstance()
{
  ::vtkUnstructuredGridBunykRayCastFunction* retVal = static_cast<::vtkUnstructuredGridBunykRayCastFunction*>(vtk::ConvertManagedToNative<::vtkUnstructuredGridBunykRayCastFunction>(m_instance)->NewInstance());
  return gcnew vtkUnstructuredGridBunykRayCastFunction(IntPtr(retVal), false);
}



vtkUnstructuredGridBunykRayCastFunction^ vtkUnstructuredGridBunykRayCastFunction::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkUnstructuredGridBunykRayCastFunction* retVal = static_cast<::vtkUnstructuredGridBunykRayCastFunction*>(::vtkUnstructuredGridBunykRayCastFunction::SafeDownCast(oWrap));
  return gcnew vtkUnstructuredGridBunykRayCastFunction(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkUnstructuredGridBunykRayCastFunction::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkUnstructuredGridBunykRayCastFunction>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkUnstructuredGridBunykRayCastFunction::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkUnstructuredGridBunykRayCastFunction>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




  vtkUnstructuredGridBunykRayCastFunction::vtkUnstructuredGridBunykRayCastFunction(System::IntPtr native, bool bConst) : vtkUnstructuredGridVolumeRayCastFunction(native, bConst) {}



  vtkUnstructuredGridBunykRayCastFunction::vtkUnstructuredGridBunykRayCastFunction(bool donothing) : vtkUnstructuredGridVolumeRayCastFunction(donothing) {}



  vtkUnstructuredGridBunykRayCastFunction::vtkUnstructuredGridBunykRayCastFunction() : vtkUnstructuredGridVolumeRayCastFunction(false) {
  this->SetNativePointer(IntPtr(::vtkUnstructuredGridBunykRayCastFunction::New()));
}



  vtkUnstructuredGridBunykRayCastFunction::~vtkUnstructuredGridBunykRayCastFunction() { }





} // end namespace vtkVolumeRendering
