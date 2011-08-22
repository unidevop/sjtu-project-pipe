

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkTypeFloat64ArrayDotNet.h"
#include "vtkObjectDotNet.h"

// native includes
#include "strstream"
#include "vtkTypeFloat64Array.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkTypeFloat64Array::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkTypeFloat64Array>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkTypeFloat64Array::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkTypeFloat64Array>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkTypeFloat64Array^ vtkTypeFloat64Array::NewInstance()
{
  ::vtkTypeFloat64Array* retVal = static_cast<::vtkTypeFloat64Array*>(vtk::ConvertManagedToNative<::vtkTypeFloat64Array>(m_instance)->NewInstance());
  return gcnew vtkTypeFloat64Array(IntPtr(retVal), false);
}



vtkTypeFloat64Array^ vtkTypeFloat64Array::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkTypeFloat64Array* retVal = static_cast<::vtkTypeFloat64Array*>(::vtkTypeFloat64Array::SafeDownCast(oWrap));
  return gcnew vtkTypeFloat64Array(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkTypeFloat64Array::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkTypeFloat64Array>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkTypeFloat64Array::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkTypeFloat64Array>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




  vtkTypeFloat64Array::vtkTypeFloat64Array(System::IntPtr native, bool bConst) : vtkDoubleArray(native, bConst) {}



  vtkTypeFloat64Array::vtkTypeFloat64Array(bool donothing) : vtkDoubleArray(donothing) {}



  vtkTypeFloat64Array::vtkTypeFloat64Array() : vtkDoubleArray(false) {
  this->SetNativePointer(IntPtr(::vtkTypeFloat64Array::New()));
}



  vtkTypeFloat64Array::~vtkTypeFloat64Array() { }





} // end namespace vtkCommon
