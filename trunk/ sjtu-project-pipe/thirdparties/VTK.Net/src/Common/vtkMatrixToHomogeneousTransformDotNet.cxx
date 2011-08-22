

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkMatrixToHomogeneousTransformDotNet.h"
#include "vtkAbstractTransformDotNet.h"
#include "vtkMatrix4x4DotNet.h"
#include "vtkObjectDotNet.h"

// native includes
#include "strstream"
#include "vtkMatrixToHomogeneousTransform.h"
#include "vtkAbstractTransform.h"
#include "vtkMatrix4x4.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkMatrixToHomogeneousTransform::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkMatrixToHomogeneousTransform>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkMatrixToHomogeneousTransform::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkMatrixToHomogeneousTransform>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkMatrixToHomogeneousTransform^ vtkMatrixToHomogeneousTransform::NewInstance()
{
  ::vtkMatrixToHomogeneousTransform* retVal = static_cast<::vtkMatrixToHomogeneousTransform*>(vtk::ConvertManagedToNative<::vtkMatrixToHomogeneousTransform>(m_instance)->NewInstance());
  return gcnew vtkMatrixToHomogeneousTransform(IntPtr(retVal), false);
}



vtkMatrixToHomogeneousTransform^ vtkMatrixToHomogeneousTransform::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkMatrixToHomogeneousTransform* retVal = static_cast<::vtkMatrixToHomogeneousTransform*>(::vtkMatrixToHomogeneousTransform::SafeDownCast(oWrap));
  return gcnew vtkMatrixToHomogeneousTransform(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkMatrixToHomogeneousTransform::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkMatrixToHomogeneousTransform>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkMatrixToHomogeneousTransform::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkMatrixToHomogeneousTransform>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkMatrixToHomogeneousTransform::SetInput(vtkMatrix4x4^ arg0)
{
  ::vtkMatrix4x4* arg0Wrap = vtk::ConvertManagedToNative<::vtkMatrix4x4>(arg0->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkMatrixToHomogeneousTransform>(m_instance)->SetInput(arg0Wrap);
}



vtkMatrix4x4^ vtkMatrixToHomogeneousTransform::GetInput()
{
  ::vtkMatrix4x4* retVal = static_cast<::vtkMatrix4x4*>(vtk::ConvertManagedToNative<::vtkMatrixToHomogeneousTransform>(m_instance)->GetInput());
  return gcnew vtkMatrix4x4(IntPtr(retVal), false);
}



void vtkMatrixToHomogeneousTransform::Inverse()
{
  vtk::ConvertManagedToNative<::vtkMatrixToHomogeneousTransform>(m_instance)->Inverse();
}



unsigned long vtkMatrixToHomogeneousTransform::GetMTime()
{
  unsigned long retVal = vtk::ConvertManagedToNative<::vtkMatrixToHomogeneousTransform>(m_instance)->GetMTime();
  return retVal;
}



vtkAbstractTransform^ vtkMatrixToHomogeneousTransform::MakeTransform()
{
  ::vtkAbstractTransform* retVal = static_cast<::vtkAbstractTransform*>(vtk::ConvertManagedToNative<::vtkMatrixToHomogeneousTransform>(m_instance)->MakeTransform());
  return gcnew vtkAbstractTransform(IntPtr(retVal), false);
}



void vtkMatrixToHomogeneousTransform::SetMatrix(vtkMatrix4x4^ matrix)
{
  ::vtkMatrix4x4* matrixWrap = vtk::ConvertManagedToNative<::vtkMatrix4x4>(matrix->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkMatrixToHomogeneousTransform>(m_instance)->SetMatrix(matrixWrap);
}



  vtkMatrixToHomogeneousTransform::vtkMatrixToHomogeneousTransform(System::IntPtr native, bool bConst) : vtkHomogeneousTransform(native, bConst) {}



  vtkMatrixToHomogeneousTransform::vtkMatrixToHomogeneousTransform(bool donothing) : vtkHomogeneousTransform(donothing) {}



  vtkMatrixToHomogeneousTransform::vtkMatrixToHomogeneousTransform() : vtkHomogeneousTransform(false) {
  this->SetNativePointer(IntPtr(::vtkMatrixToHomogeneousTransform::New()));
}



  vtkMatrixToHomogeneousTransform::~vtkMatrixToHomogeneousTransform() { }





} // end namespace vtkCommon
