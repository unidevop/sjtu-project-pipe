

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkGlyph2DDotNet.h"

// native includes
#include "strstream"
#include "vtkGlyph2D.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkGlyph2D::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkGlyph2D>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkGlyph2D::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkGlyph2D>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkGlyph2D^ vtkGlyph2D::NewInstance()
{
  ::vtkGlyph2D* retVal = static_cast<::vtkGlyph2D*>(vtk::ConvertManagedToNative<::vtkGlyph2D>(m_instance)->NewInstance());
  return gcnew vtkGlyph2D(IntPtr(retVal), false);
}



vtkGlyph2D^ vtkGlyph2D::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkGlyph2D* retVal = static_cast<::vtkGlyph2D*>(::vtkGlyph2D::SafeDownCast(oWrap));
  return gcnew vtkGlyph2D(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkGlyph2D::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkGlyph2D>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkGlyph2D::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkGlyph2D>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




  vtkGlyph2D::vtkGlyph2D(System::IntPtr native, bool bConst) : vtkGlyph3D(native, bConst) {}



  vtkGlyph2D::vtkGlyph2D(bool donothing) : vtkGlyph3D(donothing) {}



  vtkGlyph2D::vtkGlyph2D() : vtkGlyph3D(false) {
  this->SetNativePointer(IntPtr(::vtkGlyph2D::New()));
}



  vtkGlyph2D::~vtkGlyph2D() { }





} // end namespace vtkGraphics
