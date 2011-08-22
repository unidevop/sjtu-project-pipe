

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkTypeUInt32ArrayDotNet.h"
#include "vtkObjectDotNet.h"

// native includes
#include "strstream"
#include "vtkTypeUInt32Array.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkTypeUInt32Array::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkTypeUInt32Array>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkTypeUInt32Array::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkTypeUInt32Array>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkTypeUInt32Array^ vtkTypeUInt32Array::NewInstance()
{
  ::vtkTypeUInt32Array* retVal = static_cast<::vtkTypeUInt32Array*>(vtk::ConvertManagedToNative<::vtkTypeUInt32Array>(m_instance)->NewInstance());
  return gcnew vtkTypeUInt32Array(IntPtr(retVal), false);
}



vtkTypeUInt32Array^ vtkTypeUInt32Array::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkTypeUInt32Array* retVal = static_cast<::vtkTypeUInt32Array*>(::vtkTypeUInt32Array::SafeDownCast(oWrap));
  return gcnew vtkTypeUInt32Array(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkTypeUInt32Array::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkTypeUInt32Array>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkTypeUInt32Array::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkTypeUInt32Array>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




  vtkTypeUInt32Array::vtkTypeUInt32Array(System::IntPtr native, bool bConst) : vtkUnsignedIntArray(native, bConst) {}



  vtkTypeUInt32Array::vtkTypeUInt32Array(bool donothing) : vtkUnsignedIntArray(donothing) {}



  vtkTypeUInt32Array::vtkTypeUInt32Array() : vtkUnsignedIntArray(false) {
  this->SetNativePointer(IntPtr(::vtkTypeUInt32Array::New()));
}



  vtkTypeUInt32Array::~vtkTypeUInt32Array() { }





} // end namespace vtkCommon
