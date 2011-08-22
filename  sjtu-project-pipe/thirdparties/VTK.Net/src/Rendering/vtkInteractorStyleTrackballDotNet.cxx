

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkInteractorStyleTrackballDotNet.h"

// native includes
#include "strstream"
#include "vtkInteractorStyleTrackball.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkInteractorStyleTrackball::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkInteractorStyleTrackball>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkInteractorStyleTrackball::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkInteractorStyleTrackball>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkInteractorStyleTrackball^ vtkInteractorStyleTrackball::NewInstance()
{
  ::vtkInteractorStyleTrackball* retVal = static_cast<::vtkInteractorStyleTrackball*>(vtk::ConvertManagedToNative<::vtkInteractorStyleTrackball>(m_instance)->NewInstance());
  return gcnew vtkInteractorStyleTrackball(IntPtr(retVal), false);
}



vtkInteractorStyleTrackball^ vtkInteractorStyleTrackball::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkInteractorStyleTrackball* retVal = static_cast<::vtkInteractorStyleTrackball*>(::vtkInteractorStyleTrackball::SafeDownCast(oWrap));
  return gcnew vtkInteractorStyleTrackball(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkInteractorStyleTrackball::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkInteractorStyleTrackball>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkInteractorStyleTrackball::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkInteractorStyleTrackball>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




  vtkInteractorStyleTrackball::vtkInteractorStyleTrackball(System::IntPtr native, bool bConst) : vtkInteractorStyleSwitch(native, bConst) {}



  vtkInteractorStyleTrackball::vtkInteractorStyleTrackball(bool donothing) : vtkInteractorStyleSwitch(donothing) {}



  vtkInteractorStyleTrackball::vtkInteractorStyleTrackball() : vtkInteractorStyleSwitch(false) {
  this->SetNativePointer(IntPtr(::vtkInteractorStyleTrackball::New()));
}



  vtkInteractorStyleTrackball::~vtkInteractorStyleTrackball() { }





} // end namespace vtkRendering
