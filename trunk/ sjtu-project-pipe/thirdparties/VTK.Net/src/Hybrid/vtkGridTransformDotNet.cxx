

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkGridTransformDotNet.h"

// native includes
#include "strstream"
#include "vtkGridTransform.h"
#include "vtkAbstractTransform.h"
#include "vtkImageData.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkGridTransform::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkGridTransform>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkGridTransform::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkGridTransform>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkGridTransform^ vtkGridTransform::NewInstance()
{
  ::vtkGridTransform* retVal = static_cast<::vtkGridTransform*>(vtk::ConvertManagedToNative<::vtkGridTransform>(m_instance)->NewInstance());
  return gcnew vtkGridTransform(IntPtr(retVal), false);
}



vtkGridTransform^ vtkGridTransform::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkGridTransform* retVal = static_cast<::vtkGridTransform*>(::vtkGridTransform::SafeDownCast(oWrap));
  return gcnew vtkGridTransform(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkGridTransform::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkGridTransform>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkGridTransform::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkGridTransform>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkGridTransform::SetDisplacementGrid(vtkImageData^ arg0)
{
  ::vtkImageData* arg0Wrap = vtk::ConvertManagedToNative<::vtkImageData>(arg0->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkGridTransform>(m_instance)->SetDisplacementGrid(arg0Wrap);
}



vtkImageData^ vtkGridTransform::GetDisplacementGrid()
{
  ::vtkImageData* retVal = static_cast<::vtkImageData*>(vtk::ConvertManagedToNative<::vtkGridTransform>(m_instance)->GetDisplacementGrid());
  return gcnew vtkImageData(IntPtr(retVal), false);
}



void vtkGridTransform::SetDisplacementScale(double arg0)
{
  vtk::ConvertManagedToNative<::vtkGridTransform>(m_instance)->SetDisplacementScale(arg0);
}



double vtkGridTransform::GetDisplacementScale()
{
  double retVal = vtk::ConvertManagedToNative<::vtkGridTransform>(m_instance)->GetDisplacementScale();
  return retVal;
}



void vtkGridTransform::SetDisplacementShift(double arg0)
{
  vtk::ConvertManagedToNative<::vtkGridTransform>(m_instance)->SetDisplacementShift(arg0);
}



double vtkGridTransform::GetDisplacementShift()
{
  double retVal = vtk::ConvertManagedToNative<::vtkGridTransform>(m_instance)->GetDisplacementShift();
  return retVal;
}



void vtkGridTransform::SetInterpolationMode(int mode)
{
  vtk::ConvertManagedToNative<::vtkGridTransform>(m_instance)->SetInterpolationMode(mode);
}



int vtkGridTransform::GetInterpolationMode()
{
  int retVal = vtk::ConvertManagedToNative<::vtkGridTransform>(m_instance)->GetInterpolationMode();
  return retVal;
}



void vtkGridTransform::SetInterpolationModeToNearestNeighbor()
{
  vtk::ConvertManagedToNative<::vtkGridTransform>(m_instance)->SetInterpolationModeToNearestNeighbor();
}



void vtkGridTransform::SetInterpolationModeToLinear()
{
  vtk::ConvertManagedToNative<::vtkGridTransform>(m_instance)->SetInterpolationModeToLinear();
}



void vtkGridTransform::SetInterpolationModeToCubic()
{
  vtk::ConvertManagedToNative<::vtkGridTransform>(m_instance)->SetInterpolationModeToCubic();
}



System::String^ vtkGridTransform::GetInterpolationModeAsString()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkGridTransform>(m_instance)->GetInterpolationModeAsString();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



vtkAbstractTransform^ vtkGridTransform::MakeTransform()
{
  ::vtkAbstractTransform* retVal = static_cast<::vtkAbstractTransform*>(vtk::ConvertManagedToNative<::vtkGridTransform>(m_instance)->MakeTransform());
  return gcnew vtkAbstractTransform(IntPtr(retVal), false);
}



unsigned long vtkGridTransform::GetMTime()
{
  unsigned long retVal = vtk::ConvertManagedToNative<::vtkGridTransform>(m_instance)->GetMTime();
  return retVal;
}



  vtkGridTransform::vtkGridTransform(System::IntPtr native, bool bConst) : vtkWarpTransform(native, bConst) {}



  vtkGridTransform::vtkGridTransform(bool donothing) : vtkWarpTransform(donothing) {}



  vtkGridTransform::vtkGridTransform() : vtkWarpTransform(false) {
  this->SetNativePointer(IntPtr(::vtkGridTransform::New()));
}



  vtkGridTransform::~vtkGridTransform() { }





} // end namespace vtkHybrid
