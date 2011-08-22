

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkMatrixToLinearTransformDotNet.h"
#include "vtkAbstractTransformDotNet.h"
#include "vtkMatrix4x4DotNet.h"
#include "vtkObjectDotNet.h"

// native includes
#include "strstream"
#include "vtkMatrixToLinearTransform.h"
#include "vtkAbstractTransform.h"
#include "vtkMatrix4x4.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkMatrixToLinearTransform::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkMatrixToLinearTransform>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkMatrixToLinearTransform::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkMatrixToLinearTransform>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkMatrixToLinearTransform^ vtkMatrixToLinearTransform::NewInstance()
{
  ::vtkMatrixToLinearTransform* retVal = static_cast<::vtkMatrixToLinearTransform*>(vtk::ConvertManagedToNative<::vtkMatrixToLinearTransform>(m_instance)->NewInstance());
  return gcnew vtkMatrixToLinearTransform(IntPtr(retVal), false);
}



vtkMatrixToLinearTransform^ vtkMatrixToLinearTransform::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkMatrixToLinearTransform* retVal = static_cast<::vtkMatrixToLinearTransform*>(::vtkMatrixToLinearTransform::SafeDownCast(oWrap));
  return gcnew vtkMatrixToLinearTransform(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkMatrixToLinearTransform::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkMatrixToLinearTransform>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkMatrixToLinearTransform::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkMatrixToLinearTransform>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkMatrixToLinearTransform::SetInput(vtkMatrix4x4^ arg0)
{
  ::vtkMatrix4x4* arg0Wrap = vtk::ConvertManagedToNative<::vtkMatrix4x4>(arg0->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkMatrixToLinearTransform>(m_instance)->SetInput(arg0Wrap);
}



vtkMatrix4x4^ vtkMatrixToLinearTransform::GetInput()
{
  ::vtkMatrix4x4* retVal = static_cast<::vtkMatrix4x4*>(vtk::ConvertManagedToNative<::vtkMatrixToLinearTransform>(m_instance)->GetInput());
  return gcnew vtkMatrix4x4(IntPtr(retVal), false);
}



void vtkMatrixToLinearTransform::Inverse()
{
  vtk::ConvertManagedToNative<::vtkMatrixToLinearTransform>(m_instance)->Inverse();
}



unsigned long vtkMatrixToLinearTransform::GetMTime()
{
  unsigned long retVal = vtk::ConvertManagedToNative<::vtkMatrixToLinearTransform>(m_instance)->GetMTime();
  return retVal;
}



vtkAbstractTransform^ vtkMatrixToLinearTransform::MakeTransform()
{
  ::vtkAbstractTransform* retVal = static_cast<::vtkAbstractTransform*>(vtk::ConvertManagedToNative<::vtkMatrixToLinearTransform>(m_instance)->MakeTransform());
  return gcnew vtkAbstractTransform(IntPtr(retVal), false);
}



void vtkMatrixToLinearTransform::SetMatrix(vtkMatrix4x4^ matrix)
{
  ::vtkMatrix4x4* matrixWrap = vtk::ConvertManagedToNative<::vtkMatrix4x4>(matrix->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkMatrixToLinearTransform>(m_instance)->SetMatrix(matrixWrap);
}



  vtkMatrixToLinearTransform::vtkMatrixToLinearTransform(System::IntPtr native, bool bConst) : vtkLinearTransform(native, bConst) {}



  vtkMatrixToLinearTransform::vtkMatrixToLinearTransform(bool donothing) : vtkLinearTransform(donothing) {}



  vtkMatrixToLinearTransform::vtkMatrixToLinearTransform() : vtkLinearTransform(false) {
  this->SetNativePointer(IntPtr(::vtkMatrixToLinearTransform::New()));
}



  vtkMatrixToLinearTransform::~vtkMatrixToLinearTransform() { }





} // end namespace vtkCommon
