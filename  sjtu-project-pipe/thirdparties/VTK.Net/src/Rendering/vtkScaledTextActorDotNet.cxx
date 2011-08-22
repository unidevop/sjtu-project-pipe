

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkScaledTextActorDotNet.h"

// native includes
#include "strstream"
#include "vtkScaledTextActor.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkScaledTextActor::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkScaledTextActor>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkScaledTextActor::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkScaledTextActor>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkScaledTextActor^ vtkScaledTextActor::NewInstance()
{
  ::vtkScaledTextActor* retVal = static_cast<::vtkScaledTextActor*>(vtk::ConvertManagedToNative<::vtkScaledTextActor>(m_instance)->NewInstance());
  return gcnew vtkScaledTextActor(IntPtr(retVal), false);
}



vtkScaledTextActor^ vtkScaledTextActor::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkScaledTextActor* retVal = static_cast<::vtkScaledTextActor*>(::vtkScaledTextActor::SafeDownCast(oWrap));
  return gcnew vtkScaledTextActor(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkScaledTextActor::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkScaledTextActor>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkScaledTextActor::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkScaledTextActor>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




  vtkScaledTextActor::vtkScaledTextActor(System::IntPtr native, bool bConst) : vtkTextActor(native, bConst) {}



  vtkScaledTextActor::vtkScaledTextActor(bool donothing) : vtkTextActor(donothing) {}



  vtkScaledTextActor::vtkScaledTextActor() : vtkTextActor(false) {
  this->SetNativePointer(IntPtr(::vtkScaledTextActor::New()));
}



  vtkScaledTextActor::~vtkScaledTextActor() { }





} // end namespace vtkRendering
