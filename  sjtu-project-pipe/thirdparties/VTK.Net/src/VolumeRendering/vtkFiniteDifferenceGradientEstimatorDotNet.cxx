

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkFiniteDifferenceGradientEstimatorDotNet.h"

// native includes
#include "strstream"
#include "vtkFiniteDifferenceGradientEstimator.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkFiniteDifferenceGradientEstimator::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkFiniteDifferenceGradientEstimator>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkFiniteDifferenceGradientEstimator::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkFiniteDifferenceGradientEstimator>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkFiniteDifferenceGradientEstimator^ vtkFiniteDifferenceGradientEstimator::NewInstance()
{
  ::vtkFiniteDifferenceGradientEstimator* retVal = static_cast<::vtkFiniteDifferenceGradientEstimator*>(vtk::ConvertManagedToNative<::vtkFiniteDifferenceGradientEstimator>(m_instance)->NewInstance());
  return gcnew vtkFiniteDifferenceGradientEstimator(IntPtr(retVal), false);
}



vtkFiniteDifferenceGradientEstimator^ vtkFiniteDifferenceGradientEstimator::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkFiniteDifferenceGradientEstimator* retVal = static_cast<::vtkFiniteDifferenceGradientEstimator*>(::vtkFiniteDifferenceGradientEstimator::SafeDownCast(oWrap));
  return gcnew vtkFiniteDifferenceGradientEstimator(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkFiniteDifferenceGradientEstimator::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkFiniteDifferenceGradientEstimator>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkFiniteDifferenceGradientEstimator::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkFiniteDifferenceGradientEstimator>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkFiniteDifferenceGradientEstimator::SetSampleSpacingInVoxels(int arg0)
{
  vtk::ConvertManagedToNative<::vtkFiniteDifferenceGradientEstimator>(m_instance)->SetSampleSpacingInVoxels(arg0);
}



int vtkFiniteDifferenceGradientEstimator::GetSampleSpacingInVoxels()
{
  int retVal = vtk::ConvertManagedToNative<::vtkFiniteDifferenceGradientEstimator>(m_instance)->GetSampleSpacingInVoxels();
  return retVal;
}



  vtkFiniteDifferenceGradientEstimator::vtkFiniteDifferenceGradientEstimator(System::IntPtr native, bool bConst) : vtkEncodedGradientEstimator(native, bConst) {}



  vtkFiniteDifferenceGradientEstimator::vtkFiniteDifferenceGradientEstimator(bool donothing) : vtkEncodedGradientEstimator(donothing) {}



  vtkFiniteDifferenceGradientEstimator::vtkFiniteDifferenceGradientEstimator() : vtkEncodedGradientEstimator(false) {
  this->SetNativePointer(IntPtr(::vtkFiniteDifferenceGradientEstimator::New()));
}



  vtkFiniteDifferenceGradientEstimator::~vtkFiniteDifferenceGradientEstimator() { }





} // end namespace vtkVolumeRendering
