

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkProgrammableDataObjectSourceDotNet.h"

// native includes
#include "strstream"
#include "vtkProgrammableDataObjectSource.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkProgrammableDataObjectSource::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkProgrammableDataObjectSource>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkProgrammableDataObjectSource::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkProgrammableDataObjectSource>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkProgrammableDataObjectSource^ vtkProgrammableDataObjectSource::NewInstance()
{
  ::vtkProgrammableDataObjectSource* retVal = static_cast<::vtkProgrammableDataObjectSource*>(vtk::ConvertManagedToNative<::vtkProgrammableDataObjectSource>(m_instance)->NewInstance());
  return gcnew vtkProgrammableDataObjectSource(IntPtr(retVal), false);
}



vtkProgrammableDataObjectSource^ vtkProgrammableDataObjectSource::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkProgrammableDataObjectSource* retVal = static_cast<::vtkProgrammableDataObjectSource*>(::vtkProgrammableDataObjectSource::SafeDownCast(oWrap));
  return gcnew vtkProgrammableDataObjectSource(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkProgrammableDataObjectSource::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkProgrammableDataObjectSource>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkProgrammableDataObjectSource::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkProgrammableDataObjectSource>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




  vtkProgrammableDataObjectSource::vtkProgrammableDataObjectSource(System::IntPtr native, bool bConst) : vtkDataObjectAlgorithm(native, bConst) {}



  vtkProgrammableDataObjectSource::vtkProgrammableDataObjectSource(bool donothing) : vtkDataObjectAlgorithm(donothing) {}



  vtkProgrammableDataObjectSource::vtkProgrammableDataObjectSource() : vtkDataObjectAlgorithm(false) {
  this->SetNativePointer(IntPtr(::vtkProgrammableDataObjectSource::New()));
}



  vtkProgrammableDataObjectSource::~vtkProgrammableDataObjectSource() { }





} // end namespace vtkGraphics
