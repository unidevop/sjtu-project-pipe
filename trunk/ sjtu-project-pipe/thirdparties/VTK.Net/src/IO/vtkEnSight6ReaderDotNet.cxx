

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkEnSight6ReaderDotNet.h"

// native includes
#include "strstream"
#include "vtkEnSight6Reader.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkEnSight6Reader::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkEnSight6Reader>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkEnSight6Reader::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkEnSight6Reader>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkEnSight6Reader^ vtkEnSight6Reader::NewInstance()
{
  ::vtkEnSight6Reader* retVal = static_cast<::vtkEnSight6Reader*>(vtk::ConvertManagedToNative<::vtkEnSight6Reader>(m_instance)->NewInstance());
  return gcnew vtkEnSight6Reader(IntPtr(retVal), false);
}



vtkEnSight6Reader^ vtkEnSight6Reader::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkEnSight6Reader* retVal = static_cast<::vtkEnSight6Reader*>(::vtkEnSight6Reader::SafeDownCast(oWrap));
  return gcnew vtkEnSight6Reader(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkEnSight6Reader::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkEnSight6Reader>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkEnSight6Reader::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkEnSight6Reader>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




  vtkEnSight6Reader::vtkEnSight6Reader(System::IntPtr native, bool bConst) : vtkEnSightReader(native, bConst) {}



  vtkEnSight6Reader::vtkEnSight6Reader(bool donothing) : vtkEnSightReader(donothing) {}



  vtkEnSight6Reader::vtkEnSight6Reader() : vtkEnSightReader(false) {
  this->SetNativePointer(IntPtr(::vtkEnSight6Reader::New()));
}



  vtkEnSight6Reader::~vtkEnSight6Reader() { }





} // end namespace vtkIO
