

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkTypeUInt64ArrayDotNet.h"
#include "vtkObjectDotNet.h"

// native includes
#include "strstream"
#include "vtkTypeUInt64Array.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkTypeUInt64Array::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkTypeUInt64Array>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkTypeUInt64Array::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkTypeUInt64Array>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkTypeUInt64Array^ vtkTypeUInt64Array::NewInstance()
{
  ::vtkTypeUInt64Array* retVal = static_cast<::vtkTypeUInt64Array*>(vtk::ConvertManagedToNative<::vtkTypeUInt64Array>(m_instance)->NewInstance());
  return gcnew vtkTypeUInt64Array(IntPtr(retVal), false);
}



vtkTypeUInt64Array^ vtkTypeUInt64Array::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkTypeUInt64Array* retVal = static_cast<::vtkTypeUInt64Array*>(::vtkTypeUInt64Array::SafeDownCast(oWrap));
  return gcnew vtkTypeUInt64Array(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkTypeUInt64Array::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkTypeUInt64Array>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkTypeUInt64Array::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkTypeUInt64Array>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




  vtkTypeUInt64Array::vtkTypeUInt64Array(System::IntPtr native, bool bConst) : vtkUnsignedLongLongArray(native, bConst) {}



  vtkTypeUInt64Array::vtkTypeUInt64Array(bool donothing) : vtkUnsignedLongLongArray(donothing) {}



  vtkTypeUInt64Array::vtkTypeUInt64Array() : vtkUnsignedLongLongArray(false) {
  this->SetNativePointer(IntPtr(::vtkTypeUInt64Array::New()));
}



  vtkTypeUInt64Array::~vtkTypeUInt64Array() { }





} // end namespace vtkCommon
