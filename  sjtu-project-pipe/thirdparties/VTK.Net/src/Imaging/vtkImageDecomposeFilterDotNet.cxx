

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkImageDecomposeFilterDotNet.h"

// native includes
#include "strstream"
#include "vtkImageDecomposeFilter.h"

using namespace System;

namespace vtk {

System::String^ vtkImageDecomposeFilter::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkImageDecomposeFilter>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkImageDecomposeFilter::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkImageDecomposeFilter>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkImageDecomposeFilter^ vtkImageDecomposeFilter::NewInstance()
{
  ::vtkImageDecomposeFilter* retVal = static_cast<::vtkImageDecomposeFilter*>(vtk::ConvertManagedToNative<::vtkImageDecomposeFilter>(m_instance)->NewInstance());
  return gcnew vtkImageDecomposeFilter(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkImageDecomposeFilter::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkImageDecomposeFilter>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkImageDecomposeFilter::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkImageDecomposeFilter>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkImageDecomposeFilter::SetDimensionality(int dim)
{
  vtk::ConvertManagedToNative<::vtkImageDecomposeFilter>(m_instance)->SetDimensionality(dim);
}



int vtkImageDecomposeFilter::GetDimensionality()
{
  int retVal = vtk::ConvertManagedToNative<::vtkImageDecomposeFilter>(m_instance)->GetDimensionality();
  return retVal;
}



void vtkImageDecomposeFilter::PermuteIncrements(array<int>^ arg0, int% inc0, int% inc1, int% inc2)
{
  pin_ptr<int> arg0Pin = &arg0[0];
  int* nativearg0Pin = arg0Pin;
  pin_ptr<int> inc0Pin = &inc0;
  pin_ptr<int> inc1Pin = &inc1;
  pin_ptr<int> inc2Pin = &inc2;
  vtk::ConvertManagedToNative<::vtkImageDecomposeFilter>(m_instance)->PermuteIncrements(nativearg0Pin, *inc0Pin, *inc1Pin, *inc2Pin);
}



void vtkImageDecomposeFilter::PermuteExtent(array<int>^ extent, int% min0, int% max0, int% min1, int% max1, int% min2, int% max2)
{
  pin_ptr<int> extentPin = &extent[0];
  int* nativeextentPin = extentPin;
  pin_ptr<int> min0Pin = &min0;
  pin_ptr<int> max0Pin = &max0;
  pin_ptr<int> min1Pin = &min1;
  pin_ptr<int> max1Pin = &max1;
  pin_ptr<int> min2Pin = &min2;
  pin_ptr<int> max2Pin = &max2;
  vtk::ConvertManagedToNative<::vtkImageDecomposeFilter>(m_instance)->PermuteExtent(nativeextentPin, *min0Pin, *max0Pin, *min1Pin, *max1Pin, *min2Pin, *max2Pin);
}



  vtkImageDecomposeFilter::vtkImageDecomposeFilter(System::IntPtr native, bool bConst) : vtkImageIterateFilter(native, bConst) {}



  vtkImageDecomposeFilter::vtkImageDecomposeFilter(bool donothing) : vtkImageIterateFilter(donothing) {}



  vtkImageDecomposeFilter::vtkImageDecomposeFilter() : vtkImageIterateFilter(false) {
  this->SetNativePointer(IntPtr(::vtkImageDecomposeFilter::New()));
}



  vtkImageDecomposeFilter::~vtkImageDecomposeFilter() { }





} // end namespace vtkImaging
