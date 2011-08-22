

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkGenericPointIteratorDotNet.h"

// native includes
#include "strstream"
#include "vtkGenericPointIterator.h"

using namespace System;

namespace vtk {

System::String^ vtkGenericPointIterator::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkGenericPointIterator>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkGenericPointIterator::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkGenericPointIterator>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkGenericPointIterator^ vtkGenericPointIterator::NewInstance()
{
  ::vtkGenericPointIterator* retVal = static_cast<::vtkGenericPointIterator*>(vtk::ConvertManagedToNative<::vtkGenericPointIterator>(m_instance)->NewInstance());
  return gcnew vtkGenericPointIterator(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkGenericPointIterator::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkGenericPointIterator>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkGenericPointIterator::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkGenericPointIterator>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkGenericPointIterator::Begin()
{
  vtk::ConvertManagedToNative<::vtkGenericPointIterator>(m_instance)->Begin();
}



int vtkGenericPointIterator::IsAtEnd()
{
  int retVal = vtk::ConvertManagedToNative<::vtkGenericPointIterator>(m_instance)->IsAtEnd();
  return retVal;
}



void vtkGenericPointIterator::Next()
{
  vtk::ConvertManagedToNative<::vtkGenericPointIterator>(m_instance)->Next();
}



void vtkGenericPointIterator::GetPosition(array<double>^ x)
{
  pin_ptr<double> xPin = &x[0];
  double* nativexPin = xPin;
  vtk::ConvertManagedToNative<::vtkGenericPointIterator>(m_instance)->GetPosition(nativexPin);
}



int vtkGenericPointIterator::GetId()
{
  int retVal = vtk::ConvertManagedToNative<::vtkGenericPointIterator>(m_instance)->GetId();
  return retVal;
}



  vtkGenericPointIterator::vtkGenericPointIterator(System::IntPtr native, bool bConst) : vtkObject(native, bConst) {}



  vtkGenericPointIterator::vtkGenericPointIterator(bool donothing) : vtkObject(donothing) {}



  vtkGenericPointIterator::vtkGenericPointIterator() : vtkObject(false) {
  this->SetNativePointer(IntPtr(::vtkGenericPointIterator::New()));
}



  vtkGenericPointIterator::~vtkGenericPointIterator() { }





} // end namespace vtkFiltering
