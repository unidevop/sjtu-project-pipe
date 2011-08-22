

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkOBBDicerDotNet.h"

// native includes
#include "strstream"
#include "vtkOBBDicer.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkOBBDicer::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkOBBDicer>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkOBBDicer::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkOBBDicer>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkOBBDicer^ vtkOBBDicer::NewInstance()
{
  ::vtkOBBDicer* retVal = static_cast<::vtkOBBDicer*>(vtk::ConvertManagedToNative<::vtkOBBDicer>(m_instance)->NewInstance());
  return gcnew vtkOBBDicer(IntPtr(retVal), false);
}



vtkOBBDicer^ vtkOBBDicer::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkOBBDicer* retVal = static_cast<::vtkOBBDicer*>(::vtkOBBDicer::SafeDownCast(oWrap));
  return gcnew vtkOBBDicer(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkOBBDicer::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkOBBDicer>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkOBBDicer::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkOBBDicer>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




  vtkOBBDicer::vtkOBBDicer(System::IntPtr native, bool bConst) : vtkDicer(native, bConst) {}



  vtkOBBDicer::vtkOBBDicer(bool donothing) : vtkDicer(donothing) {}



  vtkOBBDicer::vtkOBBDicer() : vtkDicer(false) {
  this->SetNativePointer(IntPtr(::vtkOBBDicer::New()));
}



  vtkOBBDicer::~vtkOBBDicer() { }





} // end namespace vtkGraphics
