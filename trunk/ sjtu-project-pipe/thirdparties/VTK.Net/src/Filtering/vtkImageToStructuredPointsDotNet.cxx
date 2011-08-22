

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkImageToStructuredPointsDotNet.h"
#include "vtkImageDataDotNet.h"

// native includes
#include "strstream"
#include "vtkImageToStructuredPoints.h"
#include "vtkImageData.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkImageToStructuredPoints::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkImageToStructuredPoints>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkImageToStructuredPoints::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkImageToStructuredPoints>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkImageToStructuredPoints^ vtkImageToStructuredPoints::NewInstance()
{
  ::vtkImageToStructuredPoints* retVal = static_cast<::vtkImageToStructuredPoints*>(vtk::ConvertManagedToNative<::vtkImageToStructuredPoints>(m_instance)->NewInstance());
  return gcnew vtkImageToStructuredPoints(IntPtr(retVal), false);
}



vtkImageToStructuredPoints^ vtkImageToStructuredPoints::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkImageToStructuredPoints* retVal = static_cast<::vtkImageToStructuredPoints*>(::vtkImageToStructuredPoints::SafeDownCast(oWrap));
  return gcnew vtkImageToStructuredPoints(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkImageToStructuredPoints::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkImageToStructuredPoints>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkImageToStructuredPoints::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkImageToStructuredPoints>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkImageToStructuredPoints::SetVectorInput(vtkImageData^ input)
{
  ::vtkImageData* inputWrap = vtk::ConvertManagedToNative<::vtkImageData>(input->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkImageToStructuredPoints>(m_instance)->SetVectorInput(inputWrap);
}



vtkImageData^ vtkImageToStructuredPoints::GetVectorInput()
{
  ::vtkImageData* retVal = static_cast<::vtkImageData*>(vtk::ConvertManagedToNative<::vtkImageToStructuredPoints>(m_instance)->GetVectorInput());
  return gcnew vtkImageData(IntPtr(retVal), false);
}



  vtkImageToStructuredPoints::vtkImageToStructuredPoints(System::IntPtr native, bool bConst) : vtkImageAlgorithm(native, bConst) {}



  vtkImageToStructuredPoints::vtkImageToStructuredPoints(bool donothing) : vtkImageAlgorithm(donothing) {}



  vtkImageToStructuredPoints::vtkImageToStructuredPoints() : vtkImageAlgorithm(false) {
  this->SetNativePointer(IntPtr(::vtkImageToStructuredPoints::New()));
}



  vtkImageToStructuredPoints::~vtkImageToStructuredPoints() { }





} // end namespace vtkFiltering
