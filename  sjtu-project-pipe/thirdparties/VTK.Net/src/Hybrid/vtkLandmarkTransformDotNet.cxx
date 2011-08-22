

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkLandmarkTransformDotNet.h"

// native includes
#include "strstream"
#include "vtkLandmarkTransform.h"
#include "vtkAbstractTransform.h"
#include "vtkObject.h"
#include "vtkPoints.h"

using namespace System;

namespace vtk {

System::String^ vtkLandmarkTransform::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkLandmarkTransform>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkLandmarkTransform::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkLandmarkTransform>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkLandmarkTransform^ vtkLandmarkTransform::NewInstance()
{
  ::vtkLandmarkTransform* retVal = static_cast<::vtkLandmarkTransform*>(vtk::ConvertManagedToNative<::vtkLandmarkTransform>(m_instance)->NewInstance());
  return gcnew vtkLandmarkTransform(IntPtr(retVal), false);
}



vtkLandmarkTransform^ vtkLandmarkTransform::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkLandmarkTransform* retVal = static_cast<::vtkLandmarkTransform*>(::vtkLandmarkTransform::SafeDownCast(oWrap));
  return gcnew vtkLandmarkTransform(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkLandmarkTransform::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkLandmarkTransform>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkLandmarkTransform::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkLandmarkTransform>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkLandmarkTransform::SetSourceLandmarks(vtkPoints^ points)
{
  ::vtkPoints* pointsWrap = vtk::ConvertManagedToNative<::vtkPoints>(points->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkLandmarkTransform>(m_instance)->SetSourceLandmarks(pointsWrap);
}



void vtkLandmarkTransform::SetTargetLandmarks(vtkPoints^ points)
{
  ::vtkPoints* pointsWrap = vtk::ConvertManagedToNative<::vtkPoints>(points->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkLandmarkTransform>(m_instance)->SetTargetLandmarks(pointsWrap);
}



vtkPoints^ vtkLandmarkTransform::GetSourceLandmarks()
{
  ::vtkPoints* retVal = static_cast<::vtkPoints*>(vtk::ConvertManagedToNative<::vtkLandmarkTransform>(m_instance)->GetSourceLandmarks());
  return gcnew vtkPoints(IntPtr(retVal), false);
}



vtkPoints^ vtkLandmarkTransform::GetTargetLandmarks()
{
  ::vtkPoints* retVal = static_cast<::vtkPoints*>(vtk::ConvertManagedToNative<::vtkLandmarkTransform>(m_instance)->GetTargetLandmarks());
  return gcnew vtkPoints(IntPtr(retVal), false);
}



void vtkLandmarkTransform::SetMode(int arg0)
{
  vtk::ConvertManagedToNative<::vtkLandmarkTransform>(m_instance)->SetMode(arg0);
}



void vtkLandmarkTransform::SetModeToRigidBody()
{
  vtk::ConvertManagedToNative<::vtkLandmarkTransform>(m_instance)->SetModeToRigidBody();
}



void vtkLandmarkTransform::SetModeToSimilarity()
{
  vtk::ConvertManagedToNative<::vtkLandmarkTransform>(m_instance)->SetModeToSimilarity();
}



void vtkLandmarkTransform::SetModeToAffine()
{
  vtk::ConvertManagedToNative<::vtkLandmarkTransform>(m_instance)->SetModeToAffine();
}



int vtkLandmarkTransform::GetMode()
{
  int retVal = vtk::ConvertManagedToNative<::vtkLandmarkTransform>(m_instance)->GetMode();
  return retVal;
}



System::String^ vtkLandmarkTransform::GetModeAsString()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkLandmarkTransform>(m_instance)->GetModeAsString();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



void vtkLandmarkTransform::Inverse()
{
  vtk::ConvertManagedToNative<::vtkLandmarkTransform>(m_instance)->Inverse();
}



unsigned long vtkLandmarkTransform::GetMTime()
{
  unsigned long retVal = vtk::ConvertManagedToNative<::vtkLandmarkTransform>(m_instance)->GetMTime();
  return retVal;
}



vtkAbstractTransform^ vtkLandmarkTransform::MakeTransform()
{
  ::vtkAbstractTransform* retVal = static_cast<::vtkAbstractTransform*>(vtk::ConvertManagedToNative<::vtkLandmarkTransform>(m_instance)->MakeTransform());
  return gcnew vtkAbstractTransform(IntPtr(retVal), false);
}



  vtkLandmarkTransform::vtkLandmarkTransform(System::IntPtr native, bool bConst) : vtkLinearTransform(native, bConst) {}



  vtkLandmarkTransform::vtkLandmarkTransform(bool donothing) : vtkLinearTransform(donothing) {}



  vtkLandmarkTransform::vtkLandmarkTransform() : vtkLinearTransform(false) {
  this->SetNativePointer(IntPtr(::vtkLandmarkTransform::New()));
}



  vtkLandmarkTransform::~vtkLandmarkTransform() { }





} // end namespace vtkHybrid
