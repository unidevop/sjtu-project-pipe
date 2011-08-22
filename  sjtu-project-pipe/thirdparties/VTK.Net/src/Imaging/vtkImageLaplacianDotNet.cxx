

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkImageLaplacianDotNet.h"

// native includes
#include "strstream"
#include "vtkImageLaplacian.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkImageLaplacian::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkImageLaplacian>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkImageLaplacian::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkImageLaplacian>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkImageLaplacian^ vtkImageLaplacian::NewInstance()
{
  ::vtkImageLaplacian* retVal = static_cast<::vtkImageLaplacian*>(vtk::ConvertManagedToNative<::vtkImageLaplacian>(m_instance)->NewInstance());
  return gcnew vtkImageLaplacian(IntPtr(retVal), false);
}



vtkImageLaplacian^ vtkImageLaplacian::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkImageLaplacian* retVal = static_cast<::vtkImageLaplacian*>(::vtkImageLaplacian::SafeDownCast(oWrap));
  return gcnew vtkImageLaplacian(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkImageLaplacian::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkImageLaplacian>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkImageLaplacian::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkImageLaplacian>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkImageLaplacian::SetDimensionality(int arg0)
{
  vtk::ConvertManagedToNative<::vtkImageLaplacian>(m_instance)->SetDimensionality(arg0);
}



int vtkImageLaplacian::GetDimensionalityMinValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkImageLaplacian>(m_instance)->GetDimensionalityMinValue();
  return retVal;
}



int vtkImageLaplacian::GetDimensionalityMaxValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkImageLaplacian>(m_instance)->GetDimensionalityMaxValue();
  return retVal;
}



int vtkImageLaplacian::GetDimensionality()
{
  int retVal = vtk::ConvertManagedToNative<::vtkImageLaplacian>(m_instance)->GetDimensionality();
  return retVal;
}



  vtkImageLaplacian::vtkImageLaplacian(System::IntPtr native, bool bConst) : vtkThreadedImageAlgorithm(native, bConst) {}



  vtkImageLaplacian::vtkImageLaplacian(bool donothing) : vtkThreadedImageAlgorithm(donothing) {}



  vtkImageLaplacian::vtkImageLaplacian() : vtkThreadedImageAlgorithm(false) {
  this->SetNativePointer(IntPtr(::vtkImageLaplacian::New()));
}



  vtkImageLaplacian::~vtkImageLaplacian() { }





} // end namespace vtkImaging
