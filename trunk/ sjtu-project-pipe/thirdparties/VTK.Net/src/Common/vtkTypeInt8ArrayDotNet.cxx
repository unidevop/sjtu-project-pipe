

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkTypeInt8ArrayDotNet.h"
#include "vtkObjectDotNet.h"

// native includes
#include "strstream"
#include "vtkTypeInt8Array.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkTypeInt8Array::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkTypeInt8Array>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkTypeInt8Array::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkTypeInt8Array>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkTypeInt8Array^ vtkTypeInt8Array::NewInstance()
{
  ::vtkTypeInt8Array* retVal = static_cast<::vtkTypeInt8Array*>(vtk::ConvertManagedToNative<::vtkTypeInt8Array>(m_instance)->NewInstance());
  return gcnew vtkTypeInt8Array(IntPtr(retVal), false);
}



vtkTypeInt8Array^ vtkTypeInt8Array::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkTypeInt8Array* retVal = static_cast<::vtkTypeInt8Array*>(::vtkTypeInt8Array::SafeDownCast(oWrap));
  return gcnew vtkTypeInt8Array(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkTypeInt8Array::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkTypeInt8Array>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkTypeInt8Array::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkTypeInt8Array>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




  vtkTypeInt8Array::vtkTypeInt8Array(System::IntPtr native, bool bConst) : vtkCharArray(native, bConst) {}



  vtkTypeInt8Array::vtkTypeInt8Array(bool donothing) : vtkCharArray(donothing) {}



  vtkTypeInt8Array::vtkTypeInt8Array() : vtkCharArray(false) {
  this->SetNativePointer(IntPtr(::vtkTypeInt8Array::New()));
}



  vtkTypeInt8Array::~vtkTypeInt8Array() { }





} // end namespace vtkCommon
