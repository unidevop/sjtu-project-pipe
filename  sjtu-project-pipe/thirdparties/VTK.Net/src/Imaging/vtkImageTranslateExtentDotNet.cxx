

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkImageTranslateExtentDotNet.h"

// native includes
#include "strstream"
#include "vtkImageTranslateExtent.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkImageTranslateExtent::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkImageTranslateExtent>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkImageTranslateExtent::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkImageTranslateExtent>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkImageTranslateExtent^ vtkImageTranslateExtent::NewInstance()
{
  ::vtkImageTranslateExtent* retVal = static_cast<::vtkImageTranslateExtent*>(vtk::ConvertManagedToNative<::vtkImageTranslateExtent>(m_instance)->NewInstance());
  return gcnew vtkImageTranslateExtent(IntPtr(retVal), false);
}



vtkImageTranslateExtent^ vtkImageTranslateExtent::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkImageTranslateExtent* retVal = static_cast<::vtkImageTranslateExtent*>(::vtkImageTranslateExtent::SafeDownCast(oWrap));
  return gcnew vtkImageTranslateExtent(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkImageTranslateExtent::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkImageTranslateExtent>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkImageTranslateExtent::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkImageTranslateExtent>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkImageTranslateExtent::SetTranslation(int arg0, int arg1, int arg2)
{
  vtk::ConvertManagedToNative<::vtkImageTranslateExtent>(m_instance)->SetTranslation(arg0, arg1, arg2);
}



void vtkImageTranslateExtent::SetTranslation(array<int>^ a)
{
  pin_ptr<int> aPin = &a[0];
  int* nativeaPin = aPin;
  vtk::ConvertManagedToNative<::vtkImageTranslateExtent>(m_instance)->SetTranslation(nativeaPin);
}



array<int>^ vtkImageTranslateExtent::GetTranslation()
{
  const int* retVal = vtk::ConvertManagedToNative<::vtkImageTranslateExtent>(m_instance)->GetTranslation();
  array<int>^ mRetVal = gcnew array<int>(3);
  for (size_t cprIdx=0; cprIdx<3; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



  vtkImageTranslateExtent::vtkImageTranslateExtent(System::IntPtr native, bool bConst) : vtkImageAlgorithm(native, bConst) {}



  vtkImageTranslateExtent::vtkImageTranslateExtent(bool donothing) : vtkImageAlgorithm(donothing) {}



  vtkImageTranslateExtent::vtkImageTranslateExtent() : vtkImageAlgorithm(false) {
  this->SetNativePointer(IntPtr(::vtkImageTranslateExtent::New()));
}



  vtkImageTranslateExtent::~vtkImageTranslateExtent() { }





} // end namespace vtkImaging
