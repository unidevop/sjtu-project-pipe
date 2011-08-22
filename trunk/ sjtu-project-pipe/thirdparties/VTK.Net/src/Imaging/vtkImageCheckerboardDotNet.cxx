

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkImageCheckerboardDotNet.h"

// native includes
#include "strstream"
#include "vtkImageCheckerboard.h"
#include "vtkDataObject.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkImageCheckerboard::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkImageCheckerboard>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkImageCheckerboard::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkImageCheckerboard>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkImageCheckerboard^ vtkImageCheckerboard::NewInstance()
{
  ::vtkImageCheckerboard* retVal = static_cast<::vtkImageCheckerboard*>(vtk::ConvertManagedToNative<::vtkImageCheckerboard>(m_instance)->NewInstance());
  return gcnew vtkImageCheckerboard(IntPtr(retVal), false);
}



vtkImageCheckerboard^ vtkImageCheckerboard::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkImageCheckerboard* retVal = static_cast<::vtkImageCheckerboard*>(::vtkImageCheckerboard::SafeDownCast(oWrap));
  return gcnew vtkImageCheckerboard(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkImageCheckerboard::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkImageCheckerboard>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkImageCheckerboard::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkImageCheckerboard>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkImageCheckerboard::SetNumberOfDivisions(int arg0, int arg1, int arg2)
{
  vtk::ConvertManagedToNative<::vtkImageCheckerboard>(m_instance)->SetNumberOfDivisions(arg0, arg1, arg2);
}



void vtkImageCheckerboard::SetNumberOfDivisions(array<int>^ a)
{
  pin_ptr<int> aPin = &a[0];
  int* nativeaPin = aPin;
  vtk::ConvertManagedToNative<::vtkImageCheckerboard>(m_instance)->SetNumberOfDivisions(nativeaPin);
}



array<int>^ vtkImageCheckerboard::GetNumberOfDivisions()
{
  const int* retVal = vtk::ConvertManagedToNative<::vtkImageCheckerboard>(m_instance)->GetNumberOfDivisions();
  array<int>^ mRetVal = gcnew array<int>(3);
  for (size_t cprIdx=0; cprIdx<3; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



void vtkImageCheckerboard::SetInput1(vtkDataObject^ in)
{
  ::vtkDataObject* inWrap = vtk::ConvertManagedToNative<::vtkDataObject>(in->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkImageCheckerboard>(m_instance)->SetInput1(inWrap);
}



void vtkImageCheckerboard::SetInput2(vtkDataObject^ in)
{
  ::vtkDataObject* inWrap = vtk::ConvertManagedToNative<::vtkDataObject>(in->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkImageCheckerboard>(m_instance)->SetInput2(inWrap);
}



  vtkImageCheckerboard::vtkImageCheckerboard(System::IntPtr native, bool bConst) : vtkThreadedImageAlgorithm(native, bConst) {}



  vtkImageCheckerboard::vtkImageCheckerboard(bool donothing) : vtkThreadedImageAlgorithm(donothing) {}



  vtkImageCheckerboard::vtkImageCheckerboard() : vtkThreadedImageAlgorithm(false) {
  this->SetNativePointer(IntPtr(::vtkImageCheckerboard::New()));
}



  vtkImageCheckerboard::~vtkImageCheckerboard() { }





} // end namespace vtkImaging
