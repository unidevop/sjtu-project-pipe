

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkRecursiveSphereDirectionEncoderDotNet.h"

// native includes
#include "strstream"
#include "vtkRecursiveSphereDirectionEncoder.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkRecursiveSphereDirectionEncoder::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkRecursiveSphereDirectionEncoder>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkRecursiveSphereDirectionEncoder::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkRecursiveSphereDirectionEncoder>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkRecursiveSphereDirectionEncoder^ vtkRecursiveSphereDirectionEncoder::NewInstance()
{
  ::vtkRecursiveSphereDirectionEncoder* retVal = static_cast<::vtkRecursiveSphereDirectionEncoder*>(vtk::ConvertManagedToNative<::vtkRecursiveSphereDirectionEncoder>(m_instance)->NewInstance());
  return gcnew vtkRecursiveSphereDirectionEncoder(IntPtr(retVal), false);
}



vtkRecursiveSphereDirectionEncoder^ vtkRecursiveSphereDirectionEncoder::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkRecursiveSphereDirectionEncoder* retVal = static_cast<::vtkRecursiveSphereDirectionEncoder*>(::vtkRecursiveSphereDirectionEncoder::SafeDownCast(oWrap));
  return gcnew vtkRecursiveSphereDirectionEncoder(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkRecursiveSphereDirectionEncoder::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkRecursiveSphereDirectionEncoder>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkRecursiveSphereDirectionEncoder::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkRecursiveSphereDirectionEncoder>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




int vtkRecursiveSphereDirectionEncoder::GetEncodedDirection(array<float>^ n)
{
  pin_ptr<float> nPin = &n[0];
  float* nativenPin = nPin;
  int retVal = vtk::ConvertManagedToNative<::vtkRecursiveSphereDirectionEncoder>(m_instance)->GetEncodedDirection(nativenPin);
  return retVal;
}



array<float>^ vtkRecursiveSphereDirectionEncoder::GetDecodedGradient(int value)
{
  const float* retVal = vtk::ConvertManagedToNative<::vtkRecursiveSphereDirectionEncoder>(m_instance)->GetDecodedGradient(value);
  array<float>^ mRetVal = gcnew array<float>(3);
  for (size_t cprIdx=0; cprIdx<3; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



int vtkRecursiveSphereDirectionEncoder::GetNumberOfEncodedDirections()
{
  int retVal = vtk::ConvertManagedToNative<::vtkRecursiveSphereDirectionEncoder>(m_instance)->GetNumberOfEncodedDirections();
  return retVal;
}



void vtkRecursiveSphereDirectionEncoder::SetRecursionDepth(int arg0)
{
  vtk::ConvertManagedToNative<::vtkRecursiveSphereDirectionEncoder>(m_instance)->SetRecursionDepth(arg0);
}



int vtkRecursiveSphereDirectionEncoder::GetRecursionDepthMinValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkRecursiveSphereDirectionEncoder>(m_instance)->GetRecursionDepthMinValue();
  return retVal;
}



int vtkRecursiveSphereDirectionEncoder::GetRecursionDepthMaxValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkRecursiveSphereDirectionEncoder>(m_instance)->GetRecursionDepthMaxValue();
  return retVal;
}



int vtkRecursiveSphereDirectionEncoder::GetRecursionDepth()
{
  int retVal = vtk::ConvertManagedToNative<::vtkRecursiveSphereDirectionEncoder>(m_instance)->GetRecursionDepth();
  return retVal;
}



  vtkRecursiveSphereDirectionEncoder::vtkRecursiveSphereDirectionEncoder(System::IntPtr native, bool bConst) : vtkDirectionEncoder(native, bConst) {}



  vtkRecursiveSphereDirectionEncoder::vtkRecursiveSphereDirectionEncoder(bool donothing) : vtkDirectionEncoder(donothing) {}



  vtkRecursiveSphereDirectionEncoder::vtkRecursiveSphereDirectionEncoder() : vtkDirectionEncoder(false) {
  this->SetNativePointer(IntPtr(::vtkRecursiveSphereDirectionEncoder::New()));
}



  vtkRecursiveSphereDirectionEncoder::~vtkRecursiveSphereDirectionEncoder() { }





} // end namespace vtkVolumeRendering
