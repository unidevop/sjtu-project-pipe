

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkTypeUInt8ArrayDotNet.h"
#include "vtkObjectDotNet.h"

// native includes
#include "strstream"
#include "vtkTypeUInt8Array.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkTypeUInt8Array::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkTypeUInt8Array>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkTypeUInt8Array::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkTypeUInt8Array>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkTypeUInt8Array^ vtkTypeUInt8Array::NewInstance()
{
  ::vtkTypeUInt8Array* retVal = static_cast<::vtkTypeUInt8Array*>(vtk::ConvertManagedToNative<::vtkTypeUInt8Array>(m_instance)->NewInstance());
  return gcnew vtkTypeUInt8Array(IntPtr(retVal), false);
}



vtkTypeUInt8Array^ vtkTypeUInt8Array::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkTypeUInt8Array* retVal = static_cast<::vtkTypeUInt8Array*>(::vtkTypeUInt8Array::SafeDownCast(oWrap));
  return gcnew vtkTypeUInt8Array(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkTypeUInt8Array::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkTypeUInt8Array>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkTypeUInt8Array::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkTypeUInt8Array>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




  vtkTypeUInt8Array::vtkTypeUInt8Array(System::IntPtr native, bool bConst) : vtkUnsignedCharArray(native, bConst) {}



  vtkTypeUInt8Array::vtkTypeUInt8Array(bool donothing) : vtkUnsignedCharArray(donothing) {}



  vtkTypeUInt8Array::vtkTypeUInt8Array() : vtkUnsignedCharArray(false) {
  this->SetNativePointer(IntPtr(::vtkTypeUInt8Array::New()));
}



  vtkTypeUInt8Array::~vtkTypeUInt8Array() { }





} // end namespace vtkCommon
