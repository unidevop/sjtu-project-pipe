

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkTypeFloat32ArrayDotNet.h"
#include "vtkObjectDotNet.h"

// native includes
#include "strstream"
#include "vtkTypeFloat32Array.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkTypeFloat32Array::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkTypeFloat32Array>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkTypeFloat32Array::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkTypeFloat32Array>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkTypeFloat32Array^ vtkTypeFloat32Array::NewInstance()
{
  ::vtkTypeFloat32Array* retVal = static_cast<::vtkTypeFloat32Array*>(vtk::ConvertManagedToNative<::vtkTypeFloat32Array>(m_instance)->NewInstance());
  return gcnew vtkTypeFloat32Array(IntPtr(retVal), false);
}



vtkTypeFloat32Array^ vtkTypeFloat32Array::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkTypeFloat32Array* retVal = static_cast<::vtkTypeFloat32Array*>(::vtkTypeFloat32Array::SafeDownCast(oWrap));
  return gcnew vtkTypeFloat32Array(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkTypeFloat32Array::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkTypeFloat32Array>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkTypeFloat32Array::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkTypeFloat32Array>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




  vtkTypeFloat32Array::vtkTypeFloat32Array(System::IntPtr native, bool bConst) : vtkFloatArray(native, bConst) {}



  vtkTypeFloat32Array::vtkTypeFloat32Array(bool donothing) : vtkFloatArray(donothing) {}



  vtkTypeFloat32Array::vtkTypeFloat32Array() : vtkFloatArray(false) {
  this->SetNativePointer(IntPtr(::vtkTypeFloat32Array::New()));
}



  vtkTypeFloat32Array::~vtkTypeFloat32Array() { }





} // end namespace vtkCommon
