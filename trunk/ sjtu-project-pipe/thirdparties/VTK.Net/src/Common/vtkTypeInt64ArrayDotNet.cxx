

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkTypeInt64ArrayDotNet.h"
#include "vtkObjectDotNet.h"

// native includes
#include "strstream"
#include "vtkTypeInt64Array.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkTypeInt64Array::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkTypeInt64Array>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkTypeInt64Array::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkTypeInt64Array>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkTypeInt64Array^ vtkTypeInt64Array::NewInstance()
{
  ::vtkTypeInt64Array* retVal = static_cast<::vtkTypeInt64Array*>(vtk::ConvertManagedToNative<::vtkTypeInt64Array>(m_instance)->NewInstance());
  return gcnew vtkTypeInt64Array(IntPtr(retVal), false);
}



vtkTypeInt64Array^ vtkTypeInt64Array::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkTypeInt64Array* retVal = static_cast<::vtkTypeInt64Array*>(::vtkTypeInt64Array::SafeDownCast(oWrap));
  return gcnew vtkTypeInt64Array(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkTypeInt64Array::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkTypeInt64Array>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkTypeInt64Array::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkTypeInt64Array>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




  vtkTypeInt64Array::vtkTypeInt64Array(System::IntPtr native, bool bConst) : vtkLongLongArray(native, bConst) {}



  vtkTypeInt64Array::vtkTypeInt64Array(bool donothing) : vtkLongLongArray(donothing) {}



  vtkTypeInt64Array::vtkTypeInt64Array() : vtkLongLongArray(false) {
  this->SetNativePointer(IntPtr(::vtkTypeInt64Array::New()));
}



  vtkTypeInt64Array::~vtkTypeInt64Array() { }





} // end namespace vtkCommon
