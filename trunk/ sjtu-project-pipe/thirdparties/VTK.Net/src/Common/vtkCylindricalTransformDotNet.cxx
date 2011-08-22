

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkCylindricalTransformDotNet.h"
#include "vtkAbstractTransformDotNet.h"
#include "vtkObjectDotNet.h"

// native includes
#include "strstream"
#include "vtkCylindricalTransform.h"
#include "vtkAbstractTransform.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkCylindricalTransform::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkCylindricalTransform>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkCylindricalTransform::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkCylindricalTransform>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkCylindricalTransform^ vtkCylindricalTransform::NewInstance()
{
  ::vtkCylindricalTransform* retVal = static_cast<::vtkCylindricalTransform*>(vtk::ConvertManagedToNative<::vtkCylindricalTransform>(m_instance)->NewInstance());
  return gcnew vtkCylindricalTransform(IntPtr(retVal), false);
}



vtkCylindricalTransform^ vtkCylindricalTransform::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkCylindricalTransform* retVal = static_cast<::vtkCylindricalTransform*>(::vtkCylindricalTransform::SafeDownCast(oWrap));
  return gcnew vtkCylindricalTransform(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkCylindricalTransform::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkCylindricalTransform>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkCylindricalTransform::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkCylindricalTransform>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




vtkAbstractTransform^ vtkCylindricalTransform::MakeTransform()
{
  ::vtkAbstractTransform* retVal = static_cast<::vtkAbstractTransform*>(vtk::ConvertManagedToNative<::vtkCylindricalTransform>(m_instance)->MakeTransform());
  return gcnew vtkAbstractTransform(IntPtr(retVal), false);
}



  vtkCylindricalTransform::vtkCylindricalTransform(System::IntPtr native, bool bConst) : vtkWarpTransform(native, bConst) {}



  vtkCylindricalTransform::vtkCylindricalTransform(bool donothing) : vtkWarpTransform(donothing) {}



  vtkCylindricalTransform::vtkCylindricalTransform() : vtkWarpTransform(false) {
  this->SetNativePointer(IntPtr(::vtkCylindricalTransform::New()));
}



  vtkCylindricalTransform::~vtkCylindricalTransform() { }





} // end namespace vtkCommon
