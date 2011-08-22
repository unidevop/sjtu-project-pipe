

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkDirectionEncoderDotNet.h"

// native includes
#include "strstream"
#include "vtkDirectionEncoder.h"

using namespace System;

namespace vtk {

System::String^ vtkDirectionEncoder::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkDirectionEncoder>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkDirectionEncoder::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkDirectionEncoder>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkDirectionEncoder^ vtkDirectionEncoder::NewInstance()
{
  ::vtkDirectionEncoder* retVal = static_cast<::vtkDirectionEncoder*>(vtk::ConvertManagedToNative<::vtkDirectionEncoder>(m_instance)->NewInstance());
  return gcnew vtkDirectionEncoder(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkDirectionEncoder::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkDirectionEncoder>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkDirectionEncoder::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkDirectionEncoder>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




int vtkDirectionEncoder::GetEncodedDirection(array<float>^ n)
{
  pin_ptr<float> nPin = &n[0];
  float* nativenPin = nPin;
  int retVal = vtk::ConvertManagedToNative<::vtkDirectionEncoder>(m_instance)->GetEncodedDirection(nativenPin);
  return retVal;
}



int vtkDirectionEncoder::GetNumberOfEncodedDirections()
{
  int retVal = vtk::ConvertManagedToNative<::vtkDirectionEncoder>(m_instance)->GetNumberOfEncodedDirections();
  return retVal;
}



  vtkDirectionEncoder::vtkDirectionEncoder(System::IntPtr native, bool bConst) : vtkObject(native, bConst) {}



  vtkDirectionEncoder::vtkDirectionEncoder(bool donothing) : vtkObject(donothing) {}



  vtkDirectionEncoder::vtkDirectionEncoder() : vtkObject(false) {
  this->SetNativePointer(IntPtr(::vtkDirectionEncoder::New()));
}



  vtkDirectionEncoder::~vtkDirectionEncoder() { }





} // end namespace vtkVolumeRendering
