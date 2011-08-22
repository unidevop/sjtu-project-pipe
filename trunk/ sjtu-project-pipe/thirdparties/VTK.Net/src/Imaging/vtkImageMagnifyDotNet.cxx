

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkImageMagnifyDotNet.h"

// native includes
#include "strstream"
#include "vtkImageMagnify.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkImageMagnify::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkImageMagnify>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkImageMagnify::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkImageMagnify>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkImageMagnify^ vtkImageMagnify::NewInstance()
{
  ::vtkImageMagnify* retVal = static_cast<::vtkImageMagnify*>(vtk::ConvertManagedToNative<::vtkImageMagnify>(m_instance)->NewInstance());
  return gcnew vtkImageMagnify(IntPtr(retVal), false);
}



vtkImageMagnify^ vtkImageMagnify::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkImageMagnify* retVal = static_cast<::vtkImageMagnify*>(::vtkImageMagnify::SafeDownCast(oWrap));
  return gcnew vtkImageMagnify(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkImageMagnify::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkImageMagnify>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkImageMagnify::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkImageMagnify>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkImageMagnify::SetMagnificationFactors(int arg0, int arg1, int arg2)
{
  vtk::ConvertManagedToNative<::vtkImageMagnify>(m_instance)->SetMagnificationFactors(arg0, arg1, arg2);
}



void vtkImageMagnify::SetMagnificationFactors(array<int>^ a)
{
  pin_ptr<int> aPin = &a[0];
  int* nativeaPin = aPin;
  vtk::ConvertManagedToNative<::vtkImageMagnify>(m_instance)->SetMagnificationFactors(nativeaPin);
}



array<int>^ vtkImageMagnify::GetMagnificationFactors()
{
  const int* retVal = vtk::ConvertManagedToNative<::vtkImageMagnify>(m_instance)->GetMagnificationFactors();
  array<int>^ mRetVal = gcnew array<int>(3);
  for (size_t cprIdx=0; cprIdx<3; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



void vtkImageMagnify::SetInterpolate(int arg0)
{
  vtk::ConvertManagedToNative<::vtkImageMagnify>(m_instance)->SetInterpolate(arg0);
}



int vtkImageMagnify::GetInterpolate()
{
  int retVal = vtk::ConvertManagedToNative<::vtkImageMagnify>(m_instance)->GetInterpolate();
  return retVal;
}



void vtkImageMagnify::InterpolateOn()
{
  vtk::ConvertManagedToNative<::vtkImageMagnify>(m_instance)->InterpolateOn();
}



void vtkImageMagnify::InterpolateOff()
{
  vtk::ConvertManagedToNative<::vtkImageMagnify>(m_instance)->InterpolateOff();
}



  vtkImageMagnify::vtkImageMagnify(System::IntPtr native, bool bConst) : vtkThreadedImageAlgorithm(native, bConst) {}



  vtkImageMagnify::vtkImageMagnify(bool donothing) : vtkThreadedImageAlgorithm(donothing) {}



  vtkImageMagnify::vtkImageMagnify() : vtkThreadedImageAlgorithm(false) {
  this->SetNativePointer(IntPtr(::vtkImageMagnify::New()));
}



  vtkImageMagnify::~vtkImageMagnify() { }





} // end namespace vtkImaging
