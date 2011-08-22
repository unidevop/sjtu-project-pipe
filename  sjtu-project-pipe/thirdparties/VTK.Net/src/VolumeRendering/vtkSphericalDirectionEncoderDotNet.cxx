

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkSphericalDirectionEncoderDotNet.h"

// native includes
#include "strstream"
#include "vtkSphericalDirectionEncoder.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkSphericalDirectionEncoder::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkSphericalDirectionEncoder>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkSphericalDirectionEncoder::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkSphericalDirectionEncoder>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkSphericalDirectionEncoder^ vtkSphericalDirectionEncoder::NewInstance()
{
  ::vtkSphericalDirectionEncoder* retVal = static_cast<::vtkSphericalDirectionEncoder*>(vtk::ConvertManagedToNative<::vtkSphericalDirectionEncoder>(m_instance)->NewInstance());
  return gcnew vtkSphericalDirectionEncoder(IntPtr(retVal), false);
}



vtkSphericalDirectionEncoder^ vtkSphericalDirectionEncoder::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkSphericalDirectionEncoder* retVal = static_cast<::vtkSphericalDirectionEncoder*>(::vtkSphericalDirectionEncoder::SafeDownCast(oWrap));
  return gcnew vtkSphericalDirectionEncoder(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkSphericalDirectionEncoder::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkSphericalDirectionEncoder>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkSphericalDirectionEncoder::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkSphericalDirectionEncoder>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




int vtkSphericalDirectionEncoder::GetEncodedDirection(array<float>^ n)
{
  pin_ptr<float> nPin = &n[0];
  float* nativenPin = nPin;
  int retVal = vtk::ConvertManagedToNative<::vtkSphericalDirectionEncoder>(m_instance)->GetEncodedDirection(nativenPin);
  return retVal;
}



int vtkSphericalDirectionEncoder::GetNumberOfEncodedDirections()
{
  int retVal = vtk::ConvertManagedToNative<::vtkSphericalDirectionEncoder>(m_instance)->GetNumberOfEncodedDirections();
  return retVal;
}



  vtkSphericalDirectionEncoder::vtkSphericalDirectionEncoder(System::IntPtr native, bool bConst) : vtkDirectionEncoder(native, bConst) {}



  vtkSphericalDirectionEncoder::vtkSphericalDirectionEncoder(bool donothing) : vtkDirectionEncoder(donothing) {}



  vtkSphericalDirectionEncoder::vtkSphericalDirectionEncoder() : vtkDirectionEncoder(false) {
  this->SetNativePointer(IntPtr(::vtkSphericalDirectionEncoder::New()));
}



  vtkSphericalDirectionEncoder::~vtkSphericalDirectionEncoder() { }





} // end namespace vtkVolumeRendering
