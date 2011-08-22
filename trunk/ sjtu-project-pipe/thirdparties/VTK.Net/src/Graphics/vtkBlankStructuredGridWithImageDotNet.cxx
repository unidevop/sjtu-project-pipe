

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkBlankStructuredGridWithImageDotNet.h"

// native includes
#include "strstream"
#include "vtkBlankStructuredGridWithImage.h"
#include "vtkImageData.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkBlankStructuredGridWithImage::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkBlankStructuredGridWithImage>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkBlankStructuredGridWithImage::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkBlankStructuredGridWithImage>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkBlankStructuredGridWithImage^ vtkBlankStructuredGridWithImage::NewInstance()
{
  ::vtkBlankStructuredGridWithImage* retVal = static_cast<::vtkBlankStructuredGridWithImage*>(vtk::ConvertManagedToNative<::vtkBlankStructuredGridWithImage>(m_instance)->NewInstance());
  return gcnew vtkBlankStructuredGridWithImage(IntPtr(retVal), false);
}



vtkBlankStructuredGridWithImage^ vtkBlankStructuredGridWithImage::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkBlankStructuredGridWithImage* retVal = static_cast<::vtkBlankStructuredGridWithImage*>(::vtkBlankStructuredGridWithImage::SafeDownCast(oWrap));
  return gcnew vtkBlankStructuredGridWithImage(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkBlankStructuredGridWithImage::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkBlankStructuredGridWithImage>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkBlankStructuredGridWithImage::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkBlankStructuredGridWithImage>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkBlankStructuredGridWithImage::SetBlankingInput(vtkImageData^ input)
{
  ::vtkImageData* inputWrap = vtk::ConvertManagedToNative<::vtkImageData>(input->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkBlankStructuredGridWithImage>(m_instance)->SetBlankingInput(inputWrap);
}



vtkImageData^ vtkBlankStructuredGridWithImage::GetBlankingInput()
{
  ::vtkImageData* retVal = static_cast<::vtkImageData*>(vtk::ConvertManagedToNative<::vtkBlankStructuredGridWithImage>(m_instance)->GetBlankingInput());
  return gcnew vtkImageData(IntPtr(retVal), false);
}



  vtkBlankStructuredGridWithImage::vtkBlankStructuredGridWithImage(System::IntPtr native, bool bConst) : vtkStructuredGridAlgorithm(native, bConst) {}



  vtkBlankStructuredGridWithImage::vtkBlankStructuredGridWithImage(bool donothing) : vtkStructuredGridAlgorithm(donothing) {}



  vtkBlankStructuredGridWithImage::vtkBlankStructuredGridWithImage() : vtkStructuredGridAlgorithm(false) {
  this->SetNativePointer(IntPtr(::vtkBlankStructuredGridWithImage::New()));
}



  vtkBlankStructuredGridWithImage::~vtkBlankStructuredGridWithImage() { }





} // end namespace vtkGraphics
