

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkImageRectilinearWipeDotNet.h"

// native includes
#include "strstream"
#include "vtkImageRectilinearWipe.h"
#include "vtkDataObject.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkImageRectilinearWipe::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkImageRectilinearWipe>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkImageRectilinearWipe::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkImageRectilinearWipe>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkImageRectilinearWipe^ vtkImageRectilinearWipe::NewInstance()
{
  ::vtkImageRectilinearWipe* retVal = static_cast<::vtkImageRectilinearWipe*>(vtk::ConvertManagedToNative<::vtkImageRectilinearWipe>(m_instance)->NewInstance());
  return gcnew vtkImageRectilinearWipe(IntPtr(retVal), false);
}



vtkImageRectilinearWipe^ vtkImageRectilinearWipe::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkImageRectilinearWipe* retVal = static_cast<::vtkImageRectilinearWipe*>(::vtkImageRectilinearWipe::SafeDownCast(oWrap));
  return gcnew vtkImageRectilinearWipe(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkImageRectilinearWipe::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkImageRectilinearWipe>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkImageRectilinearWipe::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkImageRectilinearWipe>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkImageRectilinearWipe::SetPosition(int arg0, int arg1)
{
  vtk::ConvertManagedToNative<::vtkImageRectilinearWipe>(m_instance)->SetPosition(arg0, arg1);
}



void vtkImageRectilinearWipe::SetPosition(array<int>^ a)
{
  pin_ptr<int> aPin = &a[0];
  int* nativeaPin = aPin;
  vtk::ConvertManagedToNative<::vtkImageRectilinearWipe>(m_instance)->SetPosition(nativeaPin);
}



array<int>^ vtkImageRectilinearWipe::GetPosition()
{
  const int* retVal = vtk::ConvertManagedToNative<::vtkImageRectilinearWipe>(m_instance)->GetPosition();
  array<int>^ mRetVal = gcnew array<int>(2);
  for (size_t cprIdx=0; cprIdx<2; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



void vtkImageRectilinearWipe::SetInput1(vtkDataObject^ in)
{
  ::vtkDataObject* inWrap = vtk::ConvertManagedToNative<::vtkDataObject>(in->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkImageRectilinearWipe>(m_instance)->SetInput1(inWrap);
}



void vtkImageRectilinearWipe::SetInput2(vtkDataObject^ in)
{
  ::vtkDataObject* inWrap = vtk::ConvertManagedToNative<::vtkDataObject>(in->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkImageRectilinearWipe>(m_instance)->SetInput2(inWrap);
}



void vtkImageRectilinearWipe::SetWipe(int arg0)
{
  vtk::ConvertManagedToNative<::vtkImageRectilinearWipe>(m_instance)->SetWipe(arg0);
}



int vtkImageRectilinearWipe::GetWipeMinValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkImageRectilinearWipe>(m_instance)->GetWipeMinValue();
  return retVal;
}



int vtkImageRectilinearWipe::GetWipeMaxValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkImageRectilinearWipe>(m_instance)->GetWipeMaxValue();
  return retVal;
}



int vtkImageRectilinearWipe::GetWipe()
{
  int retVal = vtk::ConvertManagedToNative<::vtkImageRectilinearWipe>(m_instance)->GetWipe();
  return retVal;
}



void vtkImageRectilinearWipe::SetWipeToQuad()
{
  vtk::ConvertManagedToNative<::vtkImageRectilinearWipe>(m_instance)->SetWipeToQuad();
}



void vtkImageRectilinearWipe::SetWipeToHorizontal()
{
  vtk::ConvertManagedToNative<::vtkImageRectilinearWipe>(m_instance)->SetWipeToHorizontal();
}



void vtkImageRectilinearWipe::SetWipeToVertical()
{
  vtk::ConvertManagedToNative<::vtkImageRectilinearWipe>(m_instance)->SetWipeToVertical();
}



void vtkImageRectilinearWipe::SetWipeToLowerLeft()
{
  vtk::ConvertManagedToNative<::vtkImageRectilinearWipe>(m_instance)->SetWipeToLowerLeft();
}



void vtkImageRectilinearWipe::SetWipeToLowerRight()
{
  vtk::ConvertManagedToNative<::vtkImageRectilinearWipe>(m_instance)->SetWipeToLowerRight();
}



void vtkImageRectilinearWipe::SetWipeToUpperLeft()
{
  vtk::ConvertManagedToNative<::vtkImageRectilinearWipe>(m_instance)->SetWipeToUpperLeft();
}



void vtkImageRectilinearWipe::SetWipeToUpperRight()
{
  vtk::ConvertManagedToNative<::vtkImageRectilinearWipe>(m_instance)->SetWipeToUpperRight();
}



  vtkImageRectilinearWipe::vtkImageRectilinearWipe(System::IntPtr native, bool bConst) : vtkThreadedImageAlgorithm(native, bConst) {}



  vtkImageRectilinearWipe::vtkImageRectilinearWipe(bool donothing) : vtkThreadedImageAlgorithm(donothing) {}



  vtkImageRectilinearWipe::vtkImageRectilinearWipe() : vtkThreadedImageAlgorithm(false) {
  this->SetNativePointer(IntPtr(::vtkImageRectilinearWipe::New()));
}



  vtkImageRectilinearWipe::~vtkImageRectilinearWipe() { }





} // end namespace vtkImaging
