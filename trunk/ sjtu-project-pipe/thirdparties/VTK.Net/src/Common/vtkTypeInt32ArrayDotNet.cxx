

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkTypeInt32ArrayDotNet.h"
#include "vtkObjectDotNet.h"

// native includes
#include "strstream"
#include "vtkTypeInt32Array.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkTypeInt32Array::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkTypeInt32Array>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkTypeInt32Array::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkTypeInt32Array>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkTypeInt32Array^ vtkTypeInt32Array::NewInstance()
{
  ::vtkTypeInt32Array* retVal = static_cast<::vtkTypeInt32Array*>(vtk::ConvertManagedToNative<::vtkTypeInt32Array>(m_instance)->NewInstance());
  return gcnew vtkTypeInt32Array(IntPtr(retVal), false);
}



vtkTypeInt32Array^ vtkTypeInt32Array::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkTypeInt32Array* retVal = static_cast<::vtkTypeInt32Array*>(::vtkTypeInt32Array::SafeDownCast(oWrap));
  return gcnew vtkTypeInt32Array(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkTypeInt32Array::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkTypeInt32Array>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkTypeInt32Array::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkTypeInt32Array>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




  vtkTypeInt32Array::vtkTypeInt32Array(System::IntPtr native, bool bConst) : vtkUnsignedIntArray(native, bConst) {}



  vtkTypeInt32Array::vtkTypeInt32Array(bool donothing) : vtkUnsignedIntArray(donothing) {}



  vtkTypeInt32Array::vtkTypeInt32Array() : vtkUnsignedIntArray(false) {
  this->SetNativePointer(IntPtr(::vtkTypeInt32Array::New()));
}



  vtkTypeInt32Array::~vtkTypeInt32Array() { }





} // end namespace vtkCommon
