

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkInstantiatorDotNet.h"

// native includes
#include "strstream"
#include "vtkInstantiator.h"

using namespace System;

namespace vtk {

System::String^ vtkInstantiator::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkInstantiator>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkInstantiator::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkInstantiator>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkInstantiator^ vtkInstantiator::NewInstance()
{
  ::vtkInstantiator* retVal = static_cast<::vtkInstantiator*>(vtk::ConvertManagedToNative<::vtkInstantiator>(m_instance)->NewInstance());
  return gcnew vtkInstantiator(IntPtr(retVal), false);
}



vtkInstantiator^ vtkInstantiator::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkInstantiator* retVal = static_cast<::vtkInstantiator*>(::vtkInstantiator::SafeDownCast(oWrap));
  return gcnew vtkInstantiator(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkInstantiator::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkInstantiator>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkInstantiator::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkInstantiator>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




vtkObject^ vtkInstantiator::CreateInstance(System::String^ className)
{
  char* classNameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(className).ToPointer());
  ::vtkObject* retVal = static_cast<::vtkObject*>(::vtkInstantiator::CreateInstance(classNameWrap));
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(classNameWrap));
  return gcnew vtkObject(IntPtr(retVal), false);
}



  vtkInstantiator::vtkInstantiator(System::IntPtr native, bool bConst) : vtkObject(native, bConst) {}



  vtkInstantiator::vtkInstantiator(bool donothing) : vtkObject(donothing) {}



  vtkInstantiator::vtkInstantiator() : vtkObject(false) {
  this->SetNativePointer(IntPtr(::vtkInstantiator::New()));
}



  vtkInstantiator::~vtkInstantiator() { }





} // end namespace vtkCommon
