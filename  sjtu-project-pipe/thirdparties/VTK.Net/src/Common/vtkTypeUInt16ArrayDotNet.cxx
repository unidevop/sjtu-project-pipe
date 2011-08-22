

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkTypeUInt16ArrayDotNet.h"
#include "vtkObjectDotNet.h"

// native includes
#include "strstream"
#include "vtkTypeUInt16Array.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkTypeUInt16Array::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkTypeUInt16Array>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkTypeUInt16Array::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkTypeUInt16Array>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkTypeUInt16Array^ vtkTypeUInt16Array::NewInstance()
{
  ::vtkTypeUInt16Array* retVal = static_cast<::vtkTypeUInt16Array*>(vtk::ConvertManagedToNative<::vtkTypeUInt16Array>(m_instance)->NewInstance());
  return gcnew vtkTypeUInt16Array(IntPtr(retVal), false);
}



vtkTypeUInt16Array^ vtkTypeUInt16Array::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkTypeUInt16Array* retVal = static_cast<::vtkTypeUInt16Array*>(::vtkTypeUInt16Array::SafeDownCast(oWrap));
  return gcnew vtkTypeUInt16Array(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkTypeUInt16Array::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkTypeUInt16Array>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkTypeUInt16Array::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkTypeUInt16Array>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




  vtkTypeUInt16Array::vtkTypeUInt16Array(System::IntPtr native, bool bConst) : vtkUnsignedShortArray(native, bConst) {}



  vtkTypeUInt16Array::vtkTypeUInt16Array(bool donothing) : vtkUnsignedShortArray(donothing) {}



  vtkTypeUInt16Array::vtkTypeUInt16Array() : vtkUnsignedShortArray(false) {
  this->SetNativePointer(IntPtr(::vtkTypeUInt16Array::New()));
}



  vtkTypeUInt16Array::~vtkTypeUInt16Array() { }





} // end namespace vtkCommon
