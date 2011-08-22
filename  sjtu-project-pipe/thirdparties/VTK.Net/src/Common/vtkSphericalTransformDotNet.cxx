

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkSphericalTransformDotNet.h"
#include "vtkAbstractTransformDotNet.h"
#include "vtkObjectDotNet.h"

// native includes
#include "strstream"
#include "vtkSphericalTransform.h"
#include "vtkAbstractTransform.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkSphericalTransform::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkSphericalTransform>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkSphericalTransform::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkSphericalTransform>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkSphericalTransform^ vtkSphericalTransform::NewInstance()
{
  ::vtkSphericalTransform* retVal = static_cast<::vtkSphericalTransform*>(vtk::ConvertManagedToNative<::vtkSphericalTransform>(m_instance)->NewInstance());
  return gcnew vtkSphericalTransform(IntPtr(retVal), false);
}



vtkSphericalTransform^ vtkSphericalTransform::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkSphericalTransform* retVal = static_cast<::vtkSphericalTransform*>(::vtkSphericalTransform::SafeDownCast(oWrap));
  return gcnew vtkSphericalTransform(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkSphericalTransform::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkSphericalTransform>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkSphericalTransform::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkSphericalTransform>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




vtkAbstractTransform^ vtkSphericalTransform::MakeTransform()
{
  ::vtkAbstractTransform* retVal = static_cast<::vtkAbstractTransform*>(vtk::ConvertManagedToNative<::vtkSphericalTransform>(m_instance)->MakeTransform());
  return gcnew vtkAbstractTransform(IntPtr(retVal), false);
}



  vtkSphericalTransform::vtkSphericalTransform(System::IntPtr native, bool bConst) : vtkWarpTransform(native, bConst) {}



  vtkSphericalTransform::vtkSphericalTransform(bool donothing) : vtkWarpTransform(donothing) {}



  vtkSphericalTransform::vtkSphericalTransform() : vtkWarpTransform(false) {
  this->SetNativePointer(IntPtr(::vtkSphericalTransform::New()));
}



  vtkSphericalTransform::~vtkSphericalTransform() { }





} // end namespace vtkCommon
