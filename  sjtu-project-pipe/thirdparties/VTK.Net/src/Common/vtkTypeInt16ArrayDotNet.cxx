

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkTypeInt16ArrayDotNet.h"
#include "vtkObjectDotNet.h"

// native includes
#include "strstream"
#include "vtkTypeInt16Array.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkTypeInt16Array::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkTypeInt16Array>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkTypeInt16Array::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkTypeInt16Array>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkTypeInt16Array^ vtkTypeInt16Array::NewInstance()
{
  ::vtkTypeInt16Array* retVal = static_cast<::vtkTypeInt16Array*>(vtk::ConvertManagedToNative<::vtkTypeInt16Array>(m_instance)->NewInstance());
  return gcnew vtkTypeInt16Array(IntPtr(retVal), false);
}



vtkTypeInt16Array^ vtkTypeInt16Array::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkTypeInt16Array* retVal = static_cast<::vtkTypeInt16Array*>(::vtkTypeInt16Array::SafeDownCast(oWrap));
  return gcnew vtkTypeInt16Array(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkTypeInt16Array::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkTypeInt16Array>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkTypeInt16Array::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkTypeInt16Array>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




  vtkTypeInt16Array::vtkTypeInt16Array(System::IntPtr native, bool bConst) : vtkUnsignedShortArray(native, bConst) {}



  vtkTypeInt16Array::vtkTypeInt16Array(bool donothing) : vtkUnsignedShortArray(donothing) {}



  vtkTypeInt16Array::vtkTypeInt16Array() : vtkUnsignedShortArray(false) {
  this->SetNativePointer(IntPtr(::vtkTypeInt16Array::New()));
}



  vtkTypeInt16Array::~vtkTypeInt16Array() { }





} // end namespace vtkCommon
